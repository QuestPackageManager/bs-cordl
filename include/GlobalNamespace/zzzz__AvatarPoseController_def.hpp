#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AvatarPoseController)
namespace GlobalNamespace {
class HeadBodyOffsetSO;
}
namespace System {
template <typename T> class Action_1;
}
namespace GlobalNamespace {
class __AvatarPoseController__LatePositionsWillBeSetDelegate;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Quaternion;
}
namespace GlobalNamespace {
class __AvatarPoseController__PositionsWillBeSetDelegate;
}
namespace GlobalNamespace {
class __AvatarPoseController__RotationsWillBeSetDelegate;
}
namespace UnityEngine {
class Transform;
}
namespace System {
class Object;
}
namespace System {
class IAsyncResult;
}
namespace System {
class AsyncCallback;
}
// Forward declare root types
namespace GlobalNamespace {
class AvatarPoseController;
}
namespace GlobalNamespace {
class __AvatarPoseController__LatePositionsWillBeSetDelegate;
}
namespace GlobalNamespace {
class __AvatarPoseController__PositionsWillBeSetDelegate;
}
namespace GlobalNamespace {
class __AvatarPoseController__RotationsWillBeSetDelegate;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AvatarPoseController);
MARK_REF_PTR_T(::GlobalNamespace::__AvatarPoseController__LatePositionsWillBeSetDelegate);
MARK_REF_PTR_T(::GlobalNamespace::__AvatarPoseController__PositionsWillBeSetDelegate);
MARK_REF_PTR_T(::GlobalNamespace::__AvatarPoseController__RotationsWillBeSetDelegate);
// Type: ::PositionsWillBeSetDelegate
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2609))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4076))
// CS Name: ::AvatarPoseController::PositionsWillBeSetDelegate*
class CORDL_TYPE __AvatarPoseController__PositionsWillBeSetDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::GlobalNamespace::__AvatarPoseController__PositionsWillBeSetDelegate* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor addr 0x20d27cc size 0xc4 virtual false final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke addr 0x20d2890 size 0x24 virtual true final false
  inline void Invoke(::UnityEngine::Vector3 headPosition, ::UnityEngine::Vector3 leftHandPosition, ::UnityEngine::Vector3 rightHandPosition, ByRef<::UnityEngine::Vector3> newHeadPosition,
                     ByRef<::UnityEngine::Vector3> newLeftHandPosition, ByRef<::UnityEngine::Vector3> newRightHandPosition);

  /// @brief Method BeginInvoke addr 0x20d28b4 size 0x120 virtual true final false
  inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::Vector3 headPosition, ::UnityEngine::Vector3 leftHandPosition, ::UnityEngine::Vector3 rightHandPosition,
                                             ByRef<::UnityEngine::Vector3> newHeadPosition, ByRef<::UnityEngine::Vector3> newLeftHandPosition, ByRef<::UnityEngine::Vector3> newRightHandPosition,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke addr 0x20d29d4 size 0x24 virtual true final false
  inline void EndInvoke(ByRef<::UnityEngine::Vector3> newHeadPosition, ByRef<::UnityEngine::Vector3> newLeftHandPosition, ByRef<::UnityEngine::Vector3> newRightHandPosition,
                        ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__AvatarPoseController__PositionsWillBeSetDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AvatarPoseController__PositionsWillBeSetDelegate(__AvatarPoseController__PositionsWillBeSetDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AvatarPoseController__PositionsWillBeSetDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AvatarPoseController__PositionsWillBeSetDelegate(__AvatarPoseController__PositionsWillBeSetDelegate const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AvatarPoseController__PositionsWillBeSetDelegate();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AvatarPoseController__PositionsWillBeSetDelegate, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::LatePositionsWillBeSetDelegate
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2609))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4077))
// CS Name: ::AvatarPoseController::LatePositionsWillBeSetDelegate*
class CORDL_TYPE __AvatarPoseController__LatePositionsWillBeSetDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::GlobalNamespace::__AvatarPoseController__LatePositionsWillBeSetDelegate* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor addr 0x20d29f8 size 0xc4 virtual false final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke addr 0x20d2abc size 0x34 virtual true final false
  inline void Invoke(::UnityEngine::Quaternion headRotation, ::UnityEngine::Vector3 headPosition, ::UnityEngine::Vector3 leftHandPosition, ::UnityEngine::Vector3 rightHandPosition,
                     ByRef<::UnityEngine::Vector3> newHeadPosition, ByRef<::UnityEngine::Vector3> newLeftHandPosition, ByRef<::UnityEngine::Vector3> newRightHandPosition);

  /// @brief Method BeginInvoke addr 0x20d2af0 size 0x158 virtual true final false
  inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::Quaternion headRotation, ::UnityEngine::Vector3 headPosition, ::UnityEngine::Vector3 leftHandPosition,
                                             ::UnityEngine::Vector3 rightHandPosition, ByRef<::UnityEngine::Vector3> newHeadPosition, ByRef<::UnityEngine::Vector3> newLeftHandPosition,
                                             ByRef<::UnityEngine::Vector3> newRightHandPosition, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke addr 0x20d2c48 size 0x24 virtual true final false
  inline void EndInvoke(ByRef<::UnityEngine::Vector3> newHeadPosition, ByRef<::UnityEngine::Vector3> newLeftHandPosition, ByRef<::UnityEngine::Vector3> newRightHandPosition,
                        ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__AvatarPoseController__LatePositionsWillBeSetDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AvatarPoseController__LatePositionsWillBeSetDelegate(__AvatarPoseController__LatePositionsWillBeSetDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AvatarPoseController__LatePositionsWillBeSetDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AvatarPoseController__LatePositionsWillBeSetDelegate(__AvatarPoseController__LatePositionsWillBeSetDelegate const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AvatarPoseController__LatePositionsWillBeSetDelegate();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AvatarPoseController__LatePositionsWillBeSetDelegate, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::RotationsWillBeSetDelegate
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2609))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4078))
// CS Name: ::AvatarPoseController::RotationsWillBeSetDelegate*
class CORDL_TYPE __AvatarPoseController__RotationsWillBeSetDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::GlobalNamespace::__AvatarPoseController__RotationsWillBeSetDelegate* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor addr 0x20d2c6c size 0xc4 virtual false final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke addr 0x20d2d30 size 0x28 virtual true final false
  inline void Invoke(::UnityEngine::Quaternion headRotation, ::UnityEngine::Quaternion leftHandRotation, ::UnityEngine::Quaternion rightHandRotation, ByRef<::UnityEngine::Quaternion> newHeadRotation,
                     ByRef<::UnityEngine::Quaternion> newLeftHandRotation, ByRef<::UnityEngine::Quaternion> newRightHandRotation);

  /// @brief Method BeginInvoke addr 0x20d2d58 size 0x118 virtual true final false
  inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::Quaternion headRotation, ::UnityEngine::Quaternion leftHandRotation, ::UnityEngine::Quaternion rightHandRotation,
                                             ByRef<::UnityEngine::Quaternion> newHeadRotation, ByRef<::UnityEngine::Quaternion> newLeftHandRotation,
                                             ByRef<::UnityEngine::Quaternion> newRightHandRotation, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke addr 0x20d2e70 size 0x24 virtual true final false
  inline void EndInvoke(ByRef<::UnityEngine::Quaternion> newHeadRotation, ByRef<::UnityEngine::Quaternion> newLeftHandRotation, ByRef<::UnityEngine::Quaternion> newRightHandRotation,
                        ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__AvatarPoseController__RotationsWillBeSetDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AvatarPoseController__RotationsWillBeSetDelegate(__AvatarPoseController__RotationsWillBeSetDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AvatarPoseController__RotationsWillBeSetDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AvatarPoseController__RotationsWillBeSetDelegate(__AvatarPoseController__RotationsWillBeSetDelegate const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AvatarPoseController__RotationsWillBeSetDelegate();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AvatarPoseController__RotationsWillBeSetDelegate, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::AvatarPoseController
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4079))
// CS Name: ::AvatarPoseController*
class CORDL_TYPE AvatarPoseController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using RotationsWillBeSetDelegate = ::GlobalNamespace::__AvatarPoseController__RotationsWillBeSetDelegate;

  using LatePositionsWillBeSetDelegate = ::GlobalNamespace::__AvatarPoseController__LatePositionsWillBeSetDelegate;

  using PositionsWillBeSetDelegate = ::GlobalNamespace::__AvatarPoseController__PositionsWillBeSetDelegate;

  /// @brief Field _headTransform, offset 0x18, size 0x8
  __declspec(property(get = __get__headTransform, put = __set__headTransform))::UnityEngine::Transform* _headTransform;

  /// @brief Field _leftHandTransform, offset 0x20, size 0x8
  __declspec(property(get = __get__leftHandTransform, put = __set__leftHandTransform))::UnityEngine::Transform* _leftHandTransform;

  /// @brief Field _rightHandTransform, offset 0x28, size 0x8
  __declspec(property(get = __get__rightHandTransform, put = __set__rightHandTransform))::UnityEngine::Transform* _rightHandTransform;

  /// @brief Field _bodyTransform, offset 0x30, size 0x8
  __declspec(property(get = __get__bodyTransform, put = __set__bodyTransform))::UnityEngine::Transform* _bodyTransform;

  /// @brief Field _headBodyOffset, offset 0x38, size 0x8
  __declspec(property(get = __get__headBodyOffset, put = __set__headBodyOffset))::GlobalNamespace::HeadBodyOffsetSO* _headBodyOffset;

  /// @brief Field <earlyPositionsWillBeSetCallback>k__BackingField, offset 0x40, size 0x8
  __declspec(
      property(get = __get__earlyPositionsWillBeSetCallback_k__BackingField,
               put = __set__earlyPositionsWillBeSetCallback_k__BackingField))::GlobalNamespace::__AvatarPoseController__PositionsWillBeSetDelegate* _earlyPositionsWillBeSetCallback_k__BackingField;

  /// @brief Field <latePositionsWillBeSetCallback>k__BackingField, offset 0x48, size 0x8
  __declspec(
      property(get = __get__latePositionsWillBeSetCallback_k__BackingField,
               put = __set__latePositionsWillBeSetCallback_k__BackingField))::GlobalNamespace::__AvatarPoseController__LatePositionsWillBeSetDelegate* _latePositionsWillBeSetCallback_k__BackingField;

  /// @brief Field <earlyRotationsWillBeSetCallback>k__BackingField, offset 0x50, size 0x8
  __declspec(
      property(get = __get__earlyRotationsWillBeSetCallback_k__BackingField,
               put = __set__earlyRotationsWillBeSetCallback_k__BackingField))::GlobalNamespace::__AvatarPoseController__RotationsWillBeSetDelegate* _earlyRotationsWillBeSetCallback_k__BackingField;

  /// @brief Field didUpdatePoseEvent, offset 0x58, size 0x8
  __declspec(property(get = __get_didUpdatePoseEvent, put = __set_didUpdatePoseEvent))::System::Action_1<::UnityEngine::Vector3>* didUpdatePoseEvent;

  __declspec(property(get = get_earlyPositionsWillBeSetCallback,
                      put = set_earlyPositionsWillBeSetCallback))::GlobalNamespace::__AvatarPoseController__PositionsWillBeSetDelegate* earlyPositionsWillBeSetCallback;

  __declspec(property(get = get_latePositionsWillBeSetCallback,
                      put = set_latePositionsWillBeSetCallback))::GlobalNamespace::__AvatarPoseController__LatePositionsWillBeSetDelegate* latePositionsWillBeSetCallback;

  __declspec(property(get = get_earlyRotationsWillBeSetCallback,
                      put = set_earlyRotationsWillBeSetCallback))::GlobalNamespace::__AvatarPoseController__RotationsWillBeSetDelegate* earlyRotationsWillBeSetCallback;

  constexpr ::UnityEngine::Transform*& __get__headTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__headTransform() const;

  constexpr void __set__headTransform(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get__leftHandTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__leftHandTransform() const;

  constexpr void __set__leftHandTransform(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get__rightHandTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__rightHandTransform() const;

  constexpr void __set__rightHandTransform(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get__bodyTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__bodyTransform() const;

  constexpr void __set__bodyTransform(::UnityEngine::Transform* value);

  constexpr ::GlobalNamespace::HeadBodyOffsetSO*& __get__headBodyOffset();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::HeadBodyOffsetSO*> const& __get__headBodyOffset() const;

  constexpr void __set__headBodyOffset(::GlobalNamespace::HeadBodyOffsetSO* value);

  constexpr ::GlobalNamespace::__AvatarPoseController__PositionsWillBeSetDelegate*& __get__earlyPositionsWillBeSetCallback_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__AvatarPoseController__PositionsWillBeSetDelegate*> const& __get__earlyPositionsWillBeSetCallback_k__BackingField() const;

  constexpr void __set__earlyPositionsWillBeSetCallback_k__BackingField(::GlobalNamespace::__AvatarPoseController__PositionsWillBeSetDelegate* value);

  constexpr ::GlobalNamespace::__AvatarPoseController__LatePositionsWillBeSetDelegate*& __get__latePositionsWillBeSetCallback_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__AvatarPoseController__LatePositionsWillBeSetDelegate*> const& __get__latePositionsWillBeSetCallback_k__BackingField() const;

  constexpr void __set__latePositionsWillBeSetCallback_k__BackingField(::GlobalNamespace::__AvatarPoseController__LatePositionsWillBeSetDelegate* value);

  constexpr ::GlobalNamespace::__AvatarPoseController__RotationsWillBeSetDelegate*& __get__earlyRotationsWillBeSetCallback_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__AvatarPoseController__RotationsWillBeSetDelegate*> const& __get__earlyRotationsWillBeSetCallback_k__BackingField() const;

  constexpr void __set__earlyRotationsWillBeSetCallback_k__BackingField(::GlobalNamespace::__AvatarPoseController__RotationsWillBeSetDelegate* value);

  constexpr ::System::Action_1<::UnityEngine::Vector3>*& __get_didUpdatePoseEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::Vector3>*> const& __get_didUpdatePoseEvent() const;

  constexpr void __set_didUpdatePoseEvent(::System::Action_1<::UnityEngine::Vector3>* value);

  /// @brief Method get_earlyPositionsWillBeSetCallback addr 0x20d25f4 size 0x8 virtual false final false
  inline ::GlobalNamespace::__AvatarPoseController__PositionsWillBeSetDelegate* get_earlyPositionsWillBeSetCallback();

  /// @brief Method set_earlyPositionsWillBeSetCallback addr 0x20d25fc size 0x8 virtual false final false
  inline void set_earlyPositionsWillBeSetCallback(::GlobalNamespace::__AvatarPoseController__PositionsWillBeSetDelegate* value);

  /// @brief Method get_latePositionsWillBeSetCallback addr 0x20d2604 size 0x8 virtual false final false
  inline ::GlobalNamespace::__AvatarPoseController__LatePositionsWillBeSetDelegate* get_latePositionsWillBeSetCallback();

  /// @brief Method set_latePositionsWillBeSetCallback addr 0x20d260c size 0x8 virtual false final false
  inline void set_latePositionsWillBeSetCallback(::GlobalNamespace::__AvatarPoseController__LatePositionsWillBeSetDelegate* value);

  /// @brief Method get_earlyRotationsWillBeSetCallback addr 0x20d2614 size 0x8 virtual false final false
  inline ::GlobalNamespace::__AvatarPoseController__RotationsWillBeSetDelegate* get_earlyRotationsWillBeSetCallback();

  /// @brief Method set_earlyRotationsWillBeSetCallback addr 0x20d261c size 0x8 virtual false final false
  inline void set_earlyRotationsWillBeSetCallback(::GlobalNamespace::__AvatarPoseController__RotationsWillBeSetDelegate* value);

  /// @brief Method add_didUpdatePoseEvent addr 0x20d2358 size 0xb0 virtual false final false
  inline void add_didUpdatePoseEvent(::System::Action_1<::UnityEngine::Vector3>* value);

  /// @brief Method remove_didUpdatePoseEvent addr 0x20d24d8 size 0xb0 virtual false final false
  inline void remove_didUpdatePoseEvent(::System::Action_1<::UnityEngine::Vector3>* value);

  /// @brief Method UpdateTransforms addr 0x20d2624 size 0x1a0 virtual false final false
  inline void UpdateTransforms(::UnityEngine::Vector3 headPosition, ::UnityEngine::Vector3 leftHandPosition, ::UnityEngine::Vector3 rightHandPosition, ::UnityEngine::Quaternion headRotation,
                               ::UnityEngine::Quaternion leftHandRotation, ::UnityEngine::Quaternion rightHandRotation);

  /// @brief Method UpdateBodyPosition addr 0x20d1ff0 size 0x1b0 virtual false final false
  inline void UpdateBodyPosition();

  static inline ::GlobalNamespace::AvatarPoseController* New_ctor();

  /// @brief Method .ctor addr 0x20d27c4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AvatarPoseController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AvatarPoseController(AvatarPoseController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AvatarPoseController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AvatarPoseController(AvatarPoseController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AvatarPoseController();

public:
  /// @brief Field _headTransform, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Transform* ____headTransform;

  /// @brief Field _leftHandTransform, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Transform* ____leftHandTransform;

  /// @brief Field _rightHandTransform, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Transform* ____rightHandTransform;

  /// @brief Field _bodyTransform, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Transform* ____bodyTransform;

  /// @brief Field _headBodyOffset, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::HeadBodyOffsetSO* ____headBodyOffset;

  /// @brief Field <earlyPositionsWillBeSetCallback>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::__AvatarPoseController__PositionsWillBeSetDelegate* ____earlyPositionsWillBeSetCallback_k__BackingField;

  /// @brief Field <latePositionsWillBeSetCallback>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::__AvatarPoseController__LatePositionsWillBeSetDelegate* ____latePositionsWillBeSetCallback_k__BackingField;

  /// @brief Field <earlyRotationsWillBeSetCallback>k__BackingField, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::__AvatarPoseController__RotationsWillBeSetDelegate* ____earlyRotationsWillBeSetCallback_k__BackingField;

  /// @brief Field didUpdatePoseEvent, offset: 0x58, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::Vector3>* ___didUpdatePoseEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AvatarPoseController, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarPoseController, ____headTransform) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarPoseController, ____leftHandTransform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarPoseController, ____rightHandTransform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarPoseController, ____bodyTransform) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarPoseController, ____headBodyOffset) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarPoseController, ____earlyPositionsWillBeSetCallback_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarPoseController, ____latePositionsWillBeSetCallback_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarPoseController, ____earlyRotationsWillBeSetCallback_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarPoseController, ___didUpdatePoseEvent) == 0x58, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AvatarPoseController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AvatarPoseController*, "", "AvatarPoseController");
NEED_NO_BOX(::GlobalNamespace::__AvatarPoseController__LatePositionsWillBeSetDelegate);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AvatarPoseController__LatePositionsWillBeSetDelegate*, "", "AvatarPoseController/LatePositionsWillBeSetDelegate");
NEED_NO_BOX(::GlobalNamespace::__AvatarPoseController__PositionsWillBeSetDelegate);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AvatarPoseController__PositionsWillBeSetDelegate*, "", "AvatarPoseController/PositionsWillBeSetDelegate");
NEED_NO_BOX(::GlobalNamespace::__AvatarPoseController__RotationsWillBeSetDelegate);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AvatarPoseController__RotationsWillBeSetDelegate*, "", "AvatarPoseController/RotationsWillBeSetDelegate");
