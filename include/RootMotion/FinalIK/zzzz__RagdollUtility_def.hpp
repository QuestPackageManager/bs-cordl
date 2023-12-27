#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AnimatorUpdateMode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RagdollUtility)
namespace RootMotion::FinalIK {
class __RagdollUtility__Rigidbone;
}
namespace System::Collections {
class IEnumerator;
}
namespace RootMotion::FinalIK {
class __RagdollUtility__Child;
}
namespace RootMotion::FinalIK {
class __RagdollUtility___DisableRagdollSmooth_d__21;
}
namespace UnityEngine {
class Animator;
}
namespace RootMotion::FinalIK {
class IK;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Joint;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System {
class Object;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class RagdollUtility;
}
namespace RootMotion::FinalIK {
class __RagdollUtility__Child;
}
namespace RootMotion::FinalIK {
class __RagdollUtility__Rigidbone;
}
namespace RootMotion::FinalIK {
class __RagdollUtility___DisableRagdollSmooth_d__21;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::RagdollUtility);
MARK_REF_PTR_T(::RootMotion::FinalIK::__RagdollUtility__Child);
MARK_REF_PTR_T(::RootMotion::FinalIK::__RagdollUtility__Rigidbone);
MARK_REF_PTR_T(::RootMotion::FinalIK::__RagdollUtility___DisableRagdollSmooth_d__21);
// Type: ::Rigidbone
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10252)), TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10249))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12618))
// CS Name: ::RagdollUtility::Rigidbone*
class CORDL_TYPE __RagdollUtility__Rigidbone : public ::System::Object {
public:
  // Declarations
  /// @brief Field r, offset 0x10, size 0x8
  __declspec(property(get = __get_r, put = __set_r))::UnityEngine::Rigidbody* r;

  /// @brief Field t, offset 0x18, size 0x8
  __declspec(property(get = __get_t, put = __set_t))::UnityEngine::Transform* t;

  /// @brief Field collider, offset 0x20, size 0x8
  __declspec(property(get = __get_collider, put = __set_collider))::UnityEngine::Collider* collider;

  /// @brief Field joint, offset 0x28, size 0x8
  __declspec(property(get = __get_joint, put = __set_joint))::UnityEngine::Joint* joint;

  /// @brief Field c, offset 0x30, size 0x8
  __declspec(property(get = __get_c, put = __set_c))::UnityEngine::Rigidbody* c;

  /// @brief Field updateAnchor, offset 0x38, size 0x1
  __declspec(property(get = __get_updateAnchor, put = __set_updateAnchor)) bool updateAnchor;

  /// @brief Field deltaPosition, offset 0x3c, size 0xc
  __declspec(property(get = __get_deltaPosition, put = __set_deltaPosition))::UnityEngine::Vector3 deltaPosition;

  /// @brief Field deltaRotation, offset 0x48, size 0x10
  __declspec(property(get = __get_deltaRotation, put = __set_deltaRotation))::UnityEngine::Quaternion deltaRotation;

  /// @brief Field deltaTime, offset 0x58, size 0x4
  __declspec(property(get = __get_deltaTime, put = __set_deltaTime)) float_t deltaTime;

  /// @brief Field lastPosition, offset 0x5c, size 0xc
  __declspec(property(get = __get_lastPosition, put = __set_lastPosition))::UnityEngine::Vector3 lastPosition;

  /// @brief Field lastRotation, offset 0x68, size 0x10
  __declspec(property(get = __get_lastRotation, put = __set_lastRotation))::UnityEngine::Quaternion lastRotation;

  constexpr ::UnityEngine::Rigidbody*& __get_r();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rigidbody*> const& __get_r() const;

  constexpr void __set_r(::UnityEngine::Rigidbody* value);

  constexpr ::UnityEngine::Transform*& __get_t();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_t() const;

  constexpr void __set_t(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Collider*& __get_collider();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Collider*> const& __get_collider() const;

  constexpr void __set_collider(::UnityEngine::Collider* value);

  constexpr ::UnityEngine::Joint*& __get_joint();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Joint*> const& __get_joint() const;

  constexpr void __set_joint(::UnityEngine::Joint* value);

  constexpr ::UnityEngine::Rigidbody*& __get_c();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rigidbody*> const& __get_c() const;

  constexpr void __set_c(::UnityEngine::Rigidbody* value);

  constexpr bool& __get_updateAnchor();

  constexpr bool const& __get_updateAnchor() const;

  constexpr void __set_updateAnchor(bool value);

  constexpr ::UnityEngine::Vector3& __get_deltaPosition();

  constexpr ::UnityEngine::Vector3 const& __get_deltaPosition() const;

  constexpr void __set_deltaPosition(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Quaternion& __get_deltaRotation();

  constexpr ::UnityEngine::Quaternion const& __get_deltaRotation() const;

  constexpr void __set_deltaRotation(::UnityEngine::Quaternion value);

  constexpr float_t& __get_deltaTime();

  constexpr float_t const& __get_deltaTime() const;

  constexpr void __set_deltaTime(float_t value);

  constexpr ::UnityEngine::Vector3& __get_lastPosition();

  constexpr ::UnityEngine::Vector3 const& __get_lastPosition() const;

  constexpr void __set_lastPosition(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Quaternion& __get_lastRotation();

  constexpr ::UnityEngine::Quaternion const& __get_lastRotation() const;

  constexpr void __set_lastRotation(::UnityEngine::Quaternion value);

  static inline ::RootMotion::FinalIK::__RagdollUtility__Rigidbone* New_ctor(::UnityEngine::Rigidbody* r);

  /// @brief Method .ctor addr 0x128dab8 size 0x154 virtual false final false
  inline void _ctor(::UnityEngine::Rigidbody* r);

  /// @brief Method RecordVelocity addr 0x128e600 size 0xd4 virtual false final false
  inline void RecordVelocity();

  /// @brief Method WakeUp addr 0x128e3c0 size 0x240 virtual false final false
  inline void WakeUp(float_t velocityWeight, float_t angularVelocityWeight);

  // Ctor Parameters [CppParam { name: "", ty: "__RagdollUtility__Rigidbone", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RagdollUtility__Rigidbone(__RagdollUtility__Rigidbone&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RagdollUtility__Rigidbone", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RagdollUtility__Rigidbone(__RagdollUtility__Rigidbone const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RagdollUtility__Rigidbone();

public:
  /// @brief Field r, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rigidbody* ___r;

  /// @brief Field t, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Transform* ___t;

  /// @brief Field collider, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Collider* ___collider;

  /// @brief Field joint, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Joint* ___joint;

  /// @brief Field c, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Rigidbody* ___c;

  /// @brief Field updateAnchor, offset: 0x38, size: 0x1, def value: None
  bool ___updateAnchor;

  /// @brief Field deltaPosition, offset: 0x3c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___deltaPosition;

  /// @brief Field deltaRotation, offset: 0x48, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___deltaRotation;

  /// @brief Field deltaTime, offset: 0x58, size: 0x4, def value: None
  float_t ___deltaTime;

  /// @brief Field lastPosition, offset: 0x5c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___lastPosition;

  /// @brief Field lastRotation, offset: 0x68, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___lastRotation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__RagdollUtility__Rigidbone, 0x78>, "Size mismatch!");

} // namespace RootMotion::FinalIK
// Type: ::Child
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10249)), TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10252))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12619))
// CS Name: ::RagdollUtility::Child*
class CORDL_TYPE __RagdollUtility__Child : public ::System::Object {
public:
  // Declarations
  /// @brief Field t, offset 0x10, size 0x8
  __declspec(property(get = __get_t, put = __set_t))::UnityEngine::Transform* t;

  /// @brief Field localPosition, offset 0x18, size 0xc
  __declspec(property(get = __get_localPosition, put = __set_localPosition))::UnityEngine::Vector3 localPosition;

  /// @brief Field localRotation, offset 0x24, size 0x10
  __declspec(property(get = __get_localRotation, put = __set_localRotation))::UnityEngine::Quaternion localRotation;

  constexpr ::UnityEngine::Transform*& __get_t();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_t() const;

  constexpr void __set_t(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Vector3& __get_localPosition();

  constexpr ::UnityEngine::Vector3 const& __get_localPosition() const;

  constexpr void __set_localPosition(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Quaternion& __get_localRotation();

  constexpr ::UnityEngine::Quaternion const& __get_localRotation() const;

  constexpr void __set_localRotation(::UnityEngine::Quaternion value);

  static inline ::RootMotion::FinalIK::__RagdollUtility__Child* New_ctor(::UnityEngine::Transform* transform);

  /// @brief Method .ctor addr 0x128dc0c size 0x5c virtual false final false
  inline void _ctor(::UnityEngine::Transform* transform);

  /// @brief Method FixTransform addr 0x128e718 size 0x110 virtual false final false
  inline void FixTransform(float_t weight);

  /// @brief Method StoreLocalState addr 0x128e6d4 size 0x44 virtual false final false
  inline void StoreLocalState();

  // Ctor Parameters [CppParam { name: "", ty: "__RagdollUtility__Child", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RagdollUtility__Child(__RagdollUtility__Child&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RagdollUtility__Child", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RagdollUtility__Child(__RagdollUtility__Child const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RagdollUtility__Child();

public:
  /// @brief Field t, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Transform* ___t;

  /// @brief Field localPosition, offset: 0x18, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___localPosition;

  /// @brief Field localRotation, offset: 0x24, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___localRotation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__RagdollUtility__Child, 0x38>, "Size mismatch!");

} // namespace RootMotion::FinalIK
// Type: ::<DisableRagdollSmooth>d__21
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12620))
// CS Name: ::RagdollUtility::<DisableRagdollSmooth>d__21*
class CORDL_TYPE __RagdollUtility___DisableRagdollSmooth_d__21 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::RootMotion::FinalIK::RagdollUtility* __4__this;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::System::Object*& __get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get___2__current() const;

  constexpr void __set___2__current(::System::Object* value);

  constexpr ::RootMotion::FinalIK::RagdollUtility*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::RagdollUtility*> const& __get___4__this() const;

  constexpr void __set___4__this(::RootMotion::FinalIK::RagdollUtility* value);

  static inline ::RootMotion::FinalIK::__RagdollUtility___DisableRagdollSmooth_d__21* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x128dc68 size 0x28 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x128ea38 size 0x4 virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x128ea3c size 0x1e0 virtual true final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x128ec1c size 0x8 virtual true final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x128ec24 size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x128ec64 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__RagdollUtility___DisableRagdollSmooth_d__21", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RagdollUtility___DisableRagdollSmooth_d__21(__RagdollUtility___DisableRagdollSmooth_d__21&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RagdollUtility___DisableRagdollSmooth_d__21", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RagdollUtility___DisableRagdollSmooth_d__21(__RagdollUtility___DisableRagdollSmooth_d__21 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RagdollUtility___DisableRagdollSmooth_d__21();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::RootMotion::FinalIK::RagdollUtility* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__RagdollUtility___DisableRagdollSmooth_d__21, 0x28>, "Size mismatch!");

} // namespace RootMotion::FinalIK
// Type: RootMotion.FinalIK::RagdollUtility
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(14877))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12621))
// CS Name: ::RootMotion.FinalIK::RagdollUtility*
class CORDL_TYPE RagdollUtility : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _DisableRagdollSmooth_d__21 = ::RootMotion::FinalIK::__RagdollUtility___DisableRagdollSmooth_d__21;

  using Child = ::RootMotion::FinalIK::__RagdollUtility__Child;

  using Rigidbone = ::RootMotion::FinalIK::__RagdollUtility__Rigidbone;

  /// @brief Field ik, offset 0x18, size 0x8
  __declspec(property(get = __get_ik, put = __set_ik))::RootMotion::FinalIK::IK* ik;

  /// @brief Field ragdollToAnimationTime, offset 0x20, size 0x4
  __declspec(property(get = __get_ragdollToAnimationTime, put = __set_ragdollToAnimationTime)) float_t ragdollToAnimationTime;

  /// @brief Field applyIkOnRagdoll, offset 0x24, size 0x1
  __declspec(property(get = __get_applyIkOnRagdoll, put = __set_applyIkOnRagdoll)) bool applyIkOnRagdoll;

  /// @brief Field applyVelocity, offset 0x28, size 0x4
  __declspec(property(get = __get_applyVelocity, put = __set_applyVelocity)) float_t applyVelocity;

  /// @brief Field applyAngularVelocity, offset 0x2c, size 0x4
  __declspec(property(get = __get_applyAngularVelocity, put = __set_applyAngularVelocity)) float_t applyAngularVelocity;

  /// @brief Field animator, offset 0x30, size 0x8
  __declspec(property(get = __get_animator, put = __set_animator))::UnityEngine::Animator* animator;

  /// @brief Field rigidbones, offset 0x38, size 0x8
  __declspec(property(get = __get_rigidbones,
                      put = __set_rigidbones))::ArrayW<::RootMotion::FinalIK::__RagdollUtility__Rigidbone*, ::Array<::RootMotion::FinalIK::__RagdollUtility__Rigidbone*>*> rigidbones;

  /// @brief Field children, offset 0x40, size 0x8
  __declspec(property(get = __get_children, put = __set_children))::ArrayW<::RootMotion::FinalIK::__RagdollUtility__Child*, ::Array<::RootMotion::FinalIK::__RagdollUtility__Child*>*> children;

  /// @brief Field enableRagdollFlag, offset 0x48, size 0x1
  __declspec(property(get = __get_enableRagdollFlag, put = __set_enableRagdollFlag)) bool enableRagdollFlag;

  /// @brief Field animatorUpdateMode, offset 0x4c, size 0x4
  __declspec(property(get = __get_animatorUpdateMode, put = __set_animatorUpdateMode))::UnityEngine::AnimatorUpdateMode animatorUpdateMode;

  /// @brief Field allIKComponents, offset 0x50, size 0x8
  __declspec(property(get = __get_allIKComponents, put = __set_allIKComponents))::ArrayW<::RootMotion::FinalIK::IK*, ::Array<::RootMotion::FinalIK::IK*>*> allIKComponents;

  /// @brief Field fixTransforms, offset 0x58, size 0x8
  __declspec(property(get = __get_fixTransforms, put = __set_fixTransforms))::ArrayW<bool, ::Array<bool>*> fixTransforms;

  /// @brief Field ragdollWeight, offset 0x60, size 0x4
  __declspec(property(get = __get_ragdollWeight, put = __set_ragdollWeight)) float_t ragdollWeight;

  /// @brief Field ragdollWeightV, offset 0x64, size 0x4
  __declspec(property(get = __get_ragdollWeightV, put = __set_ragdollWeightV)) float_t ragdollWeightV;

  /// @brief Field fixedFrame, offset 0x68, size 0x1
  __declspec(property(get = __get_fixedFrame, put = __set_fixedFrame)) bool fixedFrame;

  /// @brief Field disabledIKComponents, offset 0x70, size 0x8
  __declspec(property(get = __get_disabledIKComponents, put = __set_disabledIKComponents))::ArrayW<bool, ::Array<bool>*> disabledIKComponents;

  __declspec(property(get = get_isRagdoll)) bool isRagdoll;

  __declspec(property(get = get_ikUsed)) bool ikUsed;

  constexpr ::RootMotion::FinalIK::IK*& __get_ik();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::IK*> const& __get_ik() const;

  constexpr void __set_ik(::RootMotion::FinalIK::IK* value);

  constexpr float_t& __get_ragdollToAnimationTime();

  constexpr float_t const& __get_ragdollToAnimationTime() const;

  constexpr void __set_ragdollToAnimationTime(float_t value);

  constexpr bool& __get_applyIkOnRagdoll();

  constexpr bool const& __get_applyIkOnRagdoll() const;

  constexpr void __set_applyIkOnRagdoll(bool value);

  constexpr float_t& __get_applyVelocity();

  constexpr float_t const& __get_applyVelocity() const;

  constexpr void __set_applyVelocity(float_t value);

  constexpr float_t& __get_applyAngularVelocity();

  constexpr float_t const& __get_applyAngularVelocity() const;

  constexpr void __set_applyAngularVelocity(float_t value);

  constexpr ::UnityEngine::Animator*& __get_animator();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Animator*> const& __get_animator() const;

  constexpr void __set_animator(::UnityEngine::Animator* value);

  constexpr ::ArrayW<::RootMotion::FinalIK::__RagdollUtility__Rigidbone*, ::Array<::RootMotion::FinalIK::__RagdollUtility__Rigidbone*>*>& __get_rigidbones();

  constexpr ::ArrayW<::RootMotion::FinalIK::__RagdollUtility__Rigidbone*, ::Array<::RootMotion::FinalIK::__RagdollUtility__Rigidbone*>*> const& __get_rigidbones() const;

  constexpr void __set_rigidbones(::ArrayW<::RootMotion::FinalIK::__RagdollUtility__Rigidbone*, ::Array<::RootMotion::FinalIK::__RagdollUtility__Rigidbone*>*> value);

  constexpr ::ArrayW<::RootMotion::FinalIK::__RagdollUtility__Child*, ::Array<::RootMotion::FinalIK::__RagdollUtility__Child*>*>& __get_children();

  constexpr ::ArrayW<::RootMotion::FinalIK::__RagdollUtility__Child*, ::Array<::RootMotion::FinalIK::__RagdollUtility__Child*>*> const& __get_children() const;

  constexpr void __set_children(::ArrayW<::RootMotion::FinalIK::__RagdollUtility__Child*, ::Array<::RootMotion::FinalIK::__RagdollUtility__Child*>*> value);

  constexpr bool& __get_enableRagdollFlag();

  constexpr bool const& __get_enableRagdollFlag() const;

  constexpr void __set_enableRagdollFlag(bool value);

  constexpr ::UnityEngine::AnimatorUpdateMode& __get_animatorUpdateMode();

  constexpr ::UnityEngine::AnimatorUpdateMode const& __get_animatorUpdateMode() const;

  constexpr void __set_animatorUpdateMode(::UnityEngine::AnimatorUpdateMode value);

  constexpr ::ArrayW<::RootMotion::FinalIK::IK*, ::Array<::RootMotion::FinalIK::IK*>*>& __get_allIKComponents();

  constexpr ::ArrayW<::RootMotion::FinalIK::IK*, ::Array<::RootMotion::FinalIK::IK*>*> const& __get_allIKComponents() const;

  constexpr void __set_allIKComponents(::ArrayW<::RootMotion::FinalIK::IK*, ::Array<::RootMotion::FinalIK::IK*>*> value);

  constexpr ::ArrayW<bool, ::Array<bool>*>& __get_fixTransforms();

  constexpr ::ArrayW<bool, ::Array<bool>*> const& __get_fixTransforms() const;

  constexpr void __set_fixTransforms(::ArrayW<bool, ::Array<bool>*> value);

  constexpr float_t& __get_ragdollWeight();

  constexpr float_t const& __get_ragdollWeight() const;

  constexpr void __set_ragdollWeight(float_t value);

  constexpr float_t& __get_ragdollWeightV();

  constexpr float_t const& __get_ragdollWeightV() const;

  constexpr void __set_ragdollWeightV(float_t value);

  constexpr bool& __get_fixedFrame();

  constexpr bool const& __get_fixedFrame() const;

  constexpr void __set_fixedFrame(bool value);

  constexpr ::ArrayW<bool, ::Array<bool>*>& __get_disabledIKComponents();

  constexpr ::ArrayW<bool, ::Array<bool>*> const& __get_disabledIKComponents() const;

  constexpr void __set_disabledIKComponents(::ArrayW<bool, ::Array<bool>*> value);

  /// @brief Method EnableRagdoll addr 0x128d510 size 0x2c virtual false final false
  inline void EnableRagdoll();

  /// @brief Method DisableRagdoll addr 0x128d5a0 size 0x48 virtual false final false
  inline void DisableRagdoll();

  /// @brief Method Start addr 0x128d6ac size 0x40c virtual false final false
  inline void Start();

  /// @brief Method DisableRagdollSmooth addr 0x128d644 size 0x68 virtual false final false
  inline ::System::Collections::IEnumerator* DisableRagdollSmooth();

  /// @brief Method Update addr 0x128dc90 size 0x228 virtual false final false
  inline void Update();

  /// @brief Method FixedUpdate addr 0x128deb8 size 0x34 virtual false final false
  inline void FixedUpdate();

  /// @brief Method LateUpdate addr 0x128df58 size 0x70 virtual false final false
  inline void LateUpdate();

  /// @brief Method AfterLastIK addr 0x128e148 size 0x24 virtual false final false
  inline void AfterLastIK();

  /// @brief Method AfterAnimation addr 0x128dfc8 size 0x2c virtual false final false
  inline void AfterAnimation();

  /// @brief Method OnFinalPose addr 0x128e114 size 0x34 virtual false final false
  inline void OnFinalPose();

  /// @brief Method RagdollEnabler addr 0x128e1c8 size 0x1f8 virtual false final false
  inline void RagdollEnabler();

  /// @brief Method get_isRagdoll addr 0x128d53c size 0x64 virtual false final false
  inline bool get_isRagdoll();

  /// @brief Method RecordVelocities addr 0x128e16c size 0x5c virtual false final false
  inline void RecordVelocities();

  /// @brief Method get_ikUsed addr 0x128dff4 size 0x120 virtual false final false
  inline bool get_ikUsed();

  /// @brief Method StoreLocalState addr 0x128d5e8 size 0x5c virtual false final false
  inline void StoreLocalState();

  /// @brief Method FixTransforms addr 0x128deec size 0x6c virtual false final false
  inline void FixTransforms(float_t weight);

  /// @brief Method OnDestroy addr 0x128e828 size 0x118 virtual false final false
  inline void OnDestroy();

  static inline ::RootMotion::FinalIK::RagdollUtility* New_ctor();

  /// @brief Method .ctor addr 0x128e940 size 0xf8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "RagdollUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RagdollUtility(RagdollUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RagdollUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RagdollUtility(RagdollUtility const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RagdollUtility();

public:
  /// @brief Field ik, offset: 0x18, size: 0x8, def value: None
  ::RootMotion::FinalIK::IK* ___ik;

  /// @brief Field ragdollToAnimationTime, offset: 0x20, size: 0x4, def value: None
  float_t ___ragdollToAnimationTime;

  /// @brief Field applyIkOnRagdoll, offset: 0x24, size: 0x1, def value: None
  bool ___applyIkOnRagdoll;

  /// @brief Field applyVelocity, offset: 0x28, size: 0x4, def value: None
  float_t ___applyVelocity;

  /// @brief Field applyAngularVelocity, offset: 0x2c, size: 0x4, def value: None
  float_t ___applyAngularVelocity;

  /// @brief Field animator, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Animator* ___animator;

  /// @brief Field rigidbones, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::RootMotion::FinalIK::__RagdollUtility__Rigidbone*, ::Array<::RootMotion::FinalIK::__RagdollUtility__Rigidbone*>*> ___rigidbones;

  /// @brief Field children, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::RootMotion::FinalIK::__RagdollUtility__Child*, ::Array<::RootMotion::FinalIK::__RagdollUtility__Child*>*> ___children;

  /// @brief Field enableRagdollFlag, offset: 0x48, size: 0x1, def value: None
  bool ___enableRagdollFlag;

  /// @brief Field animatorUpdateMode, offset: 0x4c, size: 0x4, def value: None
  ::UnityEngine::AnimatorUpdateMode ___animatorUpdateMode;

  /// @brief Field allIKComponents, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::RootMotion::FinalIK::IK*, ::Array<::RootMotion::FinalIK::IK*>*> ___allIKComponents;

  /// @brief Field fixTransforms, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<bool, ::Array<bool>*> ___fixTransforms;

  /// @brief Field ragdollWeight, offset: 0x60, size: 0x4, def value: None
  float_t ___ragdollWeight;

  /// @brief Field ragdollWeightV, offset: 0x64, size: 0x4, def value: None
  float_t ___ragdollWeightV;

  /// @brief Field fixedFrame, offset: 0x68, size: 0x1, def value: None
  bool ___fixedFrame;

  /// @brief Field disabledIKComponents, offset: 0x70, size: 0x8, def value: None
  ::ArrayW<bool, ::Array<bool>*> ___disabledIKComponents;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::RagdollUtility, 0x78>, "Size mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::RagdollUtility);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::RagdollUtility*, "RootMotion.FinalIK", "RagdollUtility");
NEED_NO_BOX(::RootMotion::FinalIK::__RagdollUtility__Child);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__RagdollUtility__Child*, "RootMotion.FinalIK", "RagdollUtility/Child");
NEED_NO_BOX(::RootMotion::FinalIK::__RagdollUtility__Rigidbone);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__RagdollUtility__Rigidbone*, "RootMotion.FinalIK", "RagdollUtility/Rigidbone");
NEED_NO_BOX(::RootMotion::FinalIK::__RagdollUtility___DisableRagdollSmooth_d__21);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__RagdollUtility___DisableRagdollSmooth_d__21*, "RootMotion.FinalIK", "RagdollUtility/<DisableRagdollSmooth>d__21");
