#pragma once
// IWYU pragma private; include "GlobalNamespace/SmoothCameraController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SmoothCameraController)
namespace GlobalNamespace {
class SettingsManager;
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
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SmoothCameraController
class CORDL_TYPE SmoothCameraController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _settingsManager, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__settingsManager, put = __cordl_internal_set__settingsManager)) ::GlobalNamespace::SettingsManager* _settingsManager;

  /// @brief Field _smoothCamera, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__smoothCamera, put = __cordl_internal_set__smoothCamera)) ::UnityW<::GlobalNamespace::SmoothCamera> _smoothCamera;

  /// @brief Method ActivateSmoothCameraIfNeeded, addr 0x3bf1900, size 0xe8, virtual false, abstract: false, final false
  inline void ActivateSmoothCameraIfNeeded();

  /// @brief Method HandleDidActivate, addr 0x3bf19ec, size 0x40, virtual false, abstract: false, final false
  inline void HandleDidActivate();

  /// @brief Method HandleDidDeactivate, addr 0x3bf1a2c, size 0x4, virtual false, abstract: false, final false
  inline void HandleDidDeactivate();

  static inline ::GlobalNamespace::SmoothCameraController* New_ctor();

  /// @brief Method OnDestroy, addr 0x3bf19e8, size 0x4, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x3bf18fc, size 0x4, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::GlobalNamespace::SettingsManager* const& __cordl_internal_get__settingsManager() const;

  constexpr ::GlobalNamespace::SettingsManager*& __cordl_internal_get__settingsManager();

  constexpr ::UnityW<::GlobalNamespace::SmoothCamera> const& __cordl_internal_get__smoothCamera() const;

  constexpr ::UnityW<::GlobalNamespace::SmoothCamera>& __cordl_internal_get__smoothCamera();

  constexpr void __cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value);

  constexpr void __cordl_internal_set__smoothCamera(::UnityW<::GlobalNamespace::SmoothCamera> value);

  /// @brief Method .ctor, addr 0x3bf1a30, size 0x8, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4692 };

  /// @brief Field _smoothCamera, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SmoothCamera> ____smoothCamera;

  /// @brief Field _settingsManager, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::SettingsManager* ____settingsManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SmoothCameraController, ____smoothCamera) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmoothCameraController, ____settingsManager) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SmoothCameraController, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SmoothCameraController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SmoothCameraController*, "", "SmoothCameraController");
