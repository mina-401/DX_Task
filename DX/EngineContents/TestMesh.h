#pragma once
#include <EngineCore/Actor.h>
// Ό³Έν :
class ATestMesh : public AActor
{
public:
	// constrcuter destructer
	ATestMesh();
	~ATestMesh();

	// delete Function
	ATestMesh(const ATestMesh& _Other) = delete;
	ATestMesh(ATestMesh&& _Other) noexcept = delete;
	ATestMesh& operator=(const ATestMesh& _Other) = delete;
	ATestMesh& operator=(ATestMesh&& _Other) noexcept = delete;
	std::shared_ptr<class MyCustomRenderer> GetRenderer()
	{
		return Renderer;
	}
protected:
	void BeginPlay() override;
	void Tick(float _Delta) override;

private:
	std::shared_ptr<class MyCustomRenderer> Renderer;
};

