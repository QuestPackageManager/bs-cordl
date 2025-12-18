#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/ProxyCameraRig.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ProxyCameraRig)
namespace GlobalNamespace {
class OVRCameraRig;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::UserInterface {
class ProxyCameraRig;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::UserInterface::ProxyCameraRig);
// Dependencies System.Object
namespace Meta::XR::ImmersiveDebugger::UserInterface {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.UserInterface.ProxyCameraRig
class CORDL_TYPE ProxyCameraRig : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Camera, put = set_Camera)) ::UnityW<::UnityEngine::Camera> Camera;

  __declspec(property(get = get_CameraTransform, put = set_CameraTransform)) ::UnityW<::UnityEngine::Transform> CameraTransform;

  /// @brief Field <CameraTransform>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__CameraTransform_k__BackingField, put = __cordl_internal_set__CameraTransform_k__BackingField)) ::UnityW<::UnityEngine::Transform>
      _CameraTransform_k__BackingField;

  /// @brief Field <Camera>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Camera_k__BackingField, put = __cordl_internal_set__Camera_k__BackingField)) ::UnityW<::UnityEngine::Camera> _Camera_k__BackingField;

  /// @brief Field _cameraRig, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__cameraRig, put = __cordl_internal_set__cameraRig)) ::UnityW<::GlobalNamespace::OVRCameraRig> _cameraRig;

  static inline ::Meta::XR::ImmersiveDebugger::UserInterface::ProxyCameraRig* New_ctor();

  /// @brief Method Refresh, addr 0x58a7aa8, size 0xb8, virtual false, abstract: false, final false
  inline bool Refresh();

  /// @brief Method SearchForCamera, addr 0x58a7b60, size 0x160, virtual false, abstract: false, final false
  inline void SearchForCamera();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__CameraTransform_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__CameraTransform_k__BackingField();

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__Camera_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__Camera_k__BackingField();

  constexpr ::UnityW<::GlobalNamespace::OVRCameraRig> const& __cordl_internal_get__cameraRig() const;

  constexpr ::UnityW<::GlobalNamespace::OVRCameraRig>& __cordl_internal_get__cameraRig();

  constexpr void __cordl_internal_set__CameraTransform_k__BackingField(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__Camera_k__BackingField(::UnityW<::UnityEngine::Camera> value);

  constexpr void __cordl_internal_set__cameraRig(::UnityW<::GlobalNamespace::OVRCameraRig> value);

  /// @brief Method .ctor, addr 0x58a7cc0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Camera, addr 0x58a7a88, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Camera> get_Camera();

  /// @brief Method get_CameraTransform, addr 0x58a7a98, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_CameraTransform();

  /// @brief Method set_Camera, addr 0x58a7a90, size 0x8, virtual false, abstract: false, final false
  inline void set_Camera(::UnityEngine::Camera* value);

  /// @brief Method set_CameraTransform, addr 0x58a7aa0, size 0x8, virtual false, abstract: false, final false
  inline void set_CameraTransform(::UnityEngine::Transform* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProxyCameraRig();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProxyCameraRig", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProxyCameraRig(ProxyCameraRig&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProxyCameraRig", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProxyCameraRig(ProxyCameraRig const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18349 };

  /// @brief Field <Camera>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ____Camera_k__BackingField;

  /// @brief Field <CameraTransform>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____CameraTransform_k__BackingField;

  /// @brief Field _cameraRig, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRCameraRig> ____cameraRig;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::ProxyCameraRig, ____Camera_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::ProxyCameraRig, ____CameraTransform_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::ProxyCameraRig, ____cameraRig) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::UserInterface::ProxyCameraRig, 0x28>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::UserInterface
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::UserInterface::ProxyCameraRig);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::UserInterface::ProxyCameraRig*, "Meta.XR.ImmersiveDebugger.UserInterface", "ProxyCameraRig");
