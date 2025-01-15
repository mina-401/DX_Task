#pragma once
#include <EngineCore/GameMode.h>

// Ό³Έν :
class ATestGameMode : public AGameMode
{
public:
	// constrcuter destructer
	ATestGameMode();
	~ATestGameMode();

	// delete Function
	ATestGameMode(const ATestGameMode& _Other) = delete;
	ATestGameMode(ATestGameMode&& _Other) noexcept = delete;
	ATestGameMode& operator=(const ATestGameMode& _Other) = delete;
	ATestGameMode& operator=(ATestGameMode&& _Other) noexcept = delete;
	std::shared_ptr<class MyCustomRenderer> GetRenderer()
	{
		return Renderer;
	}
protected:
	void BeginPlay() override;

	void LevelChangeStart() override;

	void Tick(float _Delta) override;


private:

	std::shared_ptr<class MyCustomRenderer> Renderer;
};

