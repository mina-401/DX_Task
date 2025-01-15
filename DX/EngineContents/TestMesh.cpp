#include "PreCompile.h"
#include "TestMesh.h"
#include "MyCustomRenderer.h"
#include <EngineCore/DefaultSceneComponent.h>

ATestMesh::ATestMesh()

{
	std::shared_ptr<UDefaultSceneComponent> Default = CreateDefaultSubObject<UDefaultSceneComponent>();
	RootComponent = Default;

	Renderer = CreateDefaultSubObject<MyCustomRenderer>();
	Renderer->SetupAttachment(RootComponent);
	Renderer->SetScale3D({ 300,300,300 });
}

ATestMesh::~ATestMesh()
{
}

void ATestMesh::BeginPlay()
{
	AActor::BeginPlay();
}

void ATestMesh::Tick(float _Delta)
{
	AActor::Tick(_Delta);

	AddActorRotation({ 0,0,_Delta*100 });
}

