#include "PreCompile.h"
#include "TestGameMode.h"
#include <EngineCore/CameraActor.h>
#include <EngineCore/SpriteRenderer.h>

#include <EngineCore/EngineGUIWindow.h>
#include <EngineCore/EngineGUI.h>
#include <EngineCore/imgui.h>
#include <EngineCore/EngineCamera.h>
#include "ContentsEditorGUI.h"
#include <EnginePlatform/EngineInput.h>
#include <EngineCore/DefaultSceneComponent.h>
#include "MyCustomRenderer.h"
#include "TestMesh.h"

ATestGameMode::ATestGameMode()
{
	std::shared_ptr<ACameraActor> Camera = GetWorld()->GetMainCamera();
	Camera->SetActorLocation({ 0.0f, 0.0f, -1000.0f, 1.0f });
	Camera->GetCameraComponent()->SetZSort(0, true);

	

	
}

ATestGameMode::~ATestGameMode()
{
}

void ATestGameMode::BeginPlay()
{
	AGameMode::BeginPlay();
	GetWorld()->SpawnActor<ATestMesh>();
}

void ATestGameMode::LevelChangeStart()
{

}

void ATestGameMode::Tick(float _Delta)
{
	AGameMode::Tick(_Delta);
	if (true == UEngineInput::IsPress('P'))
	{
		GetWorld()->GetMainCamera()->FreeCameraSwitch();
	}
}

