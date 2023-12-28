#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MenuPlayerController)
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
class VRController;
}
// Forward declare root types
namespace GlobalNamespace {
class MenuPlayerController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MenuPlayerController);
// Type: ::MenuPlayerController
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5535))
// CS Name: ::MenuPlayerController*
class CORDL_TYPE MenuPlayerController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _leftController, offset 0x18, size 0x8
  __declspec(property(get = __get__leftController, put = __set__leftController))::GlobalNamespace::VRController* _leftController;

  /// @brief Field _rightController, offset 0x20, size 0x8
  __declspec(property(get = __get__rightController, put = __set__rightController))::GlobalNamespace::VRController* _rightController;

  /// @brief Field _headTransform, offset 0x28, size 0x8
  __declspec(property(get = __get__headTransform, put = __set__headTransform))::UnityEngine::Transform* _headTransform;

  __declspec(property(get = get_leftController))::GlobalNamespace::VRController* leftController;

  __declspec(property(get = get_rightController))::GlobalNamespace::VRController* rightController;

  __declspec(property(get = get_headPos))::UnityEngine::Vector3 headPos;

  __declspec(property(get = get_headRot))::UnityEngine::Quaternion headRot;

  constexpr ::GlobalNamespace::VRController*& __get__leftController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::VRController*> const& __get__leftController() const;

  constexpr void __set__leftController(::GlobalNamespace::VRController* value);

  constexpr ::GlobalNamespace::VRController*& __get__rightController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::VRController*> const& __get__rightController() const;

  constexpr void __set__rightController(::GlobalNamespace::VRController* value);

  constexpr ::UnityEngine::Transform*& __get__headTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__headTransform() const;

  constexpr void __set__headTransform(::UnityEngine::Transform* value);

  /// @brief Method get_leftController addr 0x229e874 size 0x8 virtual false final false
  inline ::GlobalNamespace::VRController* get_leftController();

  /// @brief Method get_rightController addr 0x229e87c size 0x8 virtual false final false
  inline ::GlobalNamespace::VRController* get_rightController();

  /// @brief Method get_headPos addr 0x229e884 size 0x1c virtual false final false
  inline ::UnityEngine::Vector3 get_headPos();

  /// @brief Method get_headRot addr 0x229e8a0 size 0x1c virtual false final false
  inline ::UnityEngine::Quaternion get_headRot();

  static inline ::GlobalNamespace::MenuPlayerController* New_ctor();

  /// @brief Method .ctor addr 0x229e8bc size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MenuPlayerController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MenuPlayerController(MenuPlayerController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MenuPlayerController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MenuPlayerController(MenuPlayerController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MenuPlayerController();

public:
  /// @brief Field _leftController, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::VRController* ____leftController;

  /// @brief Field _rightController, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::VRController* ____rightController;

  /// @brief Field _headTransform, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Transform* ____headTransform;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuPlayerController, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MenuPlayerController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuPlayerController*, "", "MenuPlayerController");
