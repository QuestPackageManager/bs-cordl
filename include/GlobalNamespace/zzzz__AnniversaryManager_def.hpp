#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(AnniversaryManager)
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
class FireworksController;
}
namespace GlobalNamespace {
struct __MainMenuViewController__MenuButton;
}
namespace GlobalNamespace {
class IBeatmapLevelPack;
}
namespace GlobalNamespace {
class MainMenuViewController;
}
// Forward declare root types
namespace GlobalNamespace {
class AnniversaryManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AnniversaryManager);
// Type: ::AnniversaryManager
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3992))
// CS Name: ::AnniversaryManager*
class CORDL_TYPE AnniversaryManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _fireworksController, offset 0x18, size 0x8
  __declspec(property(get = __get__fireworksController, put = __set__fireworksController))::GlobalNamespace::FireworksController* _fireworksController;

  /// @brief Field _mainMenuViewController, offset 0x20, size 0x8
  __declspec(property(get = __get__mainMenuViewController, put = __set__mainMenuViewController))::GlobalNamespace::MainMenuViewController* _mainMenuViewController;

  constexpr ::GlobalNamespace::FireworksController*& __get__fireworksController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FireworksController*> const& __get__fireworksController() const;

  constexpr void __set__fireworksController(::GlobalNamespace::FireworksController* value);

  constexpr ::GlobalNamespace::MainMenuViewController*& __get__mainMenuViewController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainMenuViewController*> const& __get__mainMenuViewController() const;

  constexpr void __set__mainMenuViewController(::GlobalNamespace::MainMenuViewController* value);

  /// @brief Method Start addr 0x20c09dc size 0xfc virtual false final false
  inline void Start();

  /// @brief Method OnDestroy addr 0x20c0af8 size 0x140 virtual false final false
  inline void OnDestroy();

  /// @brief Method HandleMainMenuViewControllerDidFinish addr 0x20c0c38 size 0x4 virtual false final false
  inline void HandleMainMenuViewControllerDidFinish(::GlobalNamespace::MainMenuViewController* mainMenuViewController, ::GlobalNamespace::__MainMenuViewController__MenuButton menuButton);

  /// @brief Method HandleMainMenuViewControllerMusicPackPromoButtonWasPressed addr 0x20c0c5c size 0x4 virtual false final false
  inline void HandleMainMenuViewControllerMusicPackPromoButtonWasPressed(::GlobalNamespace::IBeatmapLevelPack* musicPack, ::GlobalNamespace::IPreviewBeatmapLevel* beatmap);

  /// @brief Method StartFireworks addr 0x20c0ad8 size 0x20 virtual false final false
  inline void StartFireworks();

  /// @brief Method StopFireworks addr 0x20c0c3c size 0x20 virtual false final false
  inline void StopFireworks();

  static inline ::GlobalNamespace::AnniversaryManager* New_ctor();

  /// @brief Method .ctor addr 0x20c0c60 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AnniversaryManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AnniversaryManager(AnniversaryManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AnniversaryManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AnniversaryManager(AnniversaryManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AnniversaryManager();

public:
  /// @brief Field _fireworksController, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::FireworksController* ____fireworksController;

  /// @brief Field _mainMenuViewController, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MainMenuViewController* ____mainMenuViewController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AnniversaryManager, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::AnniversaryManager, ____fireworksController) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnniversaryManager, ____mainMenuViewController) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AnniversaryManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AnniversaryManager*, "", "AnniversaryManager");
