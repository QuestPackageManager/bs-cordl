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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5331))
// CS Name: ::SmoothCameraController*
class CORDL_TYPE SmoothCameraController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _mainSettingsModel, offset 0x18, size 0x8
  __declspec(property(get = __get__mainSettingsModel, put = __set__mainSettingsModel))::GlobalNamespace::MainSettingsModelSO* _mainSettingsModel;

  /// @brief Field _smoothCamera, offset 0x20, size 0x8
  __declspec(property(get = __get__smoothCamera, put = __set__smoothCamera))::GlobalNamespace::SmoothCamera* _smoothCamera;

  constexpr ::GlobalNamespace::MainSettingsModelSO*& __get__mainSettingsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainSettingsModelSO*> const& __get__mainSettingsModel() const;

  constexpr void __set__mainSettingsModel(::GlobalNamespace::MainSettingsModelSO* value);

  constexpr ::GlobalNamespace::SmoothCamera*& __get__smoothCamera();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SmoothCamera*> const& __get__smoothCamera() const;

  constexpr void __set__smoothCamera(::GlobalNamespace::SmoothCamera* value);

  /// @brief Method Start addr 0x22684e4 size 0x4 virtual false final false
  inline void Start();

  /// @brief Method OnDestroy addr 0x2268684 size 0x4 virtual false final false
  inline void OnDestroy();

  /// @brief Method HandleDidActivate addr 0x2268688 size 0x40 virtual false final false
  inline void HandleDidActivate();

  /// @brief Method HandleDidDeactivate addr 0x22686c8 size 0x4 virtual false final false
  inline void HandleDidDeactivate();

  /// @brief Method ActivateSmoothCameraIfNeeded addr 0x22684e8 size 0x19c virtual false final false
  inline void ActivateSmoothCameraIfNeeded();

  static inline ::GlobalNamespace::SmoothCameraController* New_ctor();

  /// @brief Method .ctor addr 0x22686cc size 0x8 virtual false final false
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
  ::GlobalNamespace::MainSettingsModelSO* ____mainSettingsModel;

  /// @brief Field _smoothCamera, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::SmoothCamera* ____smoothCamera;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SmoothCameraController, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SmoothCameraController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SmoothCameraController*, "", "SmoothCameraController");
