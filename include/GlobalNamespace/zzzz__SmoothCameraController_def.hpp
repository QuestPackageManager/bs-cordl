#pragma once
// IWYU pragma private; include "GlobalNamespace/SmoothCameraController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SmoothCameraController)
namespace BeatSaber::GameSettings {
class MainSettingsHandler;
}
namespace GlobalNamespace {
class SmoothCamera;
}
// Forward declare root types
namespace GlobalNamespace {
class SmoothCameraController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SmoothCameraController);
// Type: ::SmoothCameraController
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SmoothCameraController*
class CORDL_TYPE SmoothCameraController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _mainSettingsHandler, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__mainSettingsHandler, put = __cordl_internal_set__mainSettingsHandler))::BeatSaber::GameSettings::MainSettingsHandler* _mainSettingsHandler;

  /// @brief Field _smoothCamera, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__smoothCamera, put = __cordl_internal_set__smoothCamera))::UnityW<::GlobalNamespace::SmoothCamera> _smoothCamera;

  /// @brief Method ActivateSmoothCameraIfNeeded, addr 0x2740b80, size 0xc8, virtual false, abstract: false, final false
  inline void ActivateSmoothCameraIfNeeded();

  /// @brief Method HandleDidActivate, addr 0x2740c4c, size 0x40, virtual false, abstract: false, final false
  inline void HandleDidActivate();

  /// @brief Method HandleDidDeactivate, addr 0x2740c8c, size 0x4, virtual false, abstract: false, final false
  inline void HandleDidDeactivate();

  static inline ::GlobalNamespace::SmoothCameraController* New_ctor();

  /// @brief Method OnDestroy, addr 0x2740c48, size 0x4, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x2740b7c, size 0x4, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::BeatSaber::GameSettings::MainSettingsHandler*& __cordl_internal_get__mainSettingsHandler();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::GameSettings::MainSettingsHandler*> const& __cordl_internal_get__mainSettingsHandler() const;

  constexpr ::UnityW<::GlobalNamespace::SmoothCamera> const& __cordl_internal_get__smoothCamera() const;

  constexpr ::UnityW<::GlobalNamespace::SmoothCamera>& __cordl_internal_get__smoothCamera();

  constexpr void __cordl_internal_set__mainSettingsHandler(::BeatSaber::GameSettings::MainSettingsHandler* value);

  constexpr void __cordl_internal_set__smoothCamera(::UnityW<::GlobalNamespace::SmoothCamera> value);

  /// @brief Method .ctor, addr 0x2740c90, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SmoothCameraController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SmoothCameraController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SmoothCameraController(SmoothCameraController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SmoothCameraController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SmoothCameraController(SmoothCameraController const&) = delete;

  /// @brief Field _smoothCamera, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SmoothCamera> ____smoothCamera;

  /// @brief Field _mainSettingsHandler, offset: 0x20, size: 0x8, def value: None
  ::BeatSaber::GameSettings::MainSettingsHandler* ____mainSettingsHandler;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SmoothCameraController, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SmoothCameraController, ____smoothCamera) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmoothCameraController, ____mainSettingsHandler) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SmoothCameraController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SmoothCameraController*, "", "SmoothCameraController");
