#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SmoothCameraController)
namespace GlobalNamespace {
class MainSettingsModelSO;
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
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8969))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4669))
// CS Name: ::SmoothCameraController*
class CORDL_TYPE SmoothCameraController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _mainSettingsModel, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__mainSettingsModel, put = __cordl_internal_set__mainSettingsModel))::UnityW<::GlobalNamespace::MainSettingsModelSO> _mainSettingsModel;

  /// @brief Field _smoothCamera, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__smoothCamera, put = __cordl_internal_set__smoothCamera))::UnityW<::GlobalNamespace::SmoothCamera> _smoothCamera;

  constexpr ::UnityW<::GlobalNamespace::MainSettingsModelSO>& __cordl_internal_get__mainSettingsModel();

  constexpr ::UnityW<::GlobalNamespace::MainSettingsModelSO> const& __cordl_internal_get__mainSettingsModel() const;

  constexpr void __cordl_internal_set__mainSettingsModel(::UnityW<::GlobalNamespace::MainSettingsModelSO> value);

  constexpr ::UnityW<::GlobalNamespace::SmoothCamera>& __cordl_internal_get__smoothCamera();

  constexpr ::UnityW<::GlobalNamespace::SmoothCamera> const& __cordl_internal_get__smoothCamera() const;

  constexpr void __cordl_internal_set__smoothCamera(::UnityW<::GlobalNamespace::SmoothCamera> value);

  /// @brief Method Start, addr 0x23c720c, size 0x4, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method OnDestroy, addr 0x23c73ac, size 0x4, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method HandleDidActivate, addr 0x23c73b0, size 0x40, virtual false, abstract: false, final false
  inline void HandleDidActivate();

  /// @brief Method HandleDidDeactivate, addr 0x23c73f0, size 0x4, virtual false, abstract: false, final false
  inline void HandleDidDeactivate();

  /// @brief Method ActivateSmoothCameraIfNeeded, addr 0x23c7210, size 0x19c, virtual false, abstract: false, final false
  inline void ActivateSmoothCameraIfNeeded();

  static inline ::GlobalNamespace::SmoothCameraController* New_ctor();

  /// @brief Method .ctor, addr 0x23c73f4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SmoothCameraController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SmoothCameraController(SmoothCameraController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SmoothCameraController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SmoothCameraController(SmoothCameraController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SmoothCameraController();

public:
  /// @brief Field _mainSettingsModel, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MainSettingsModelSO> ____mainSettingsModel;

  /// @brief Field _smoothCamera, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SmoothCamera> ____smoothCamera;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SmoothCameraController, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SmoothCameraController, ____mainSettingsModel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmoothCameraController, ____smoothCamera) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SmoothCameraController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SmoothCameraController*, "", "SmoothCameraController");
