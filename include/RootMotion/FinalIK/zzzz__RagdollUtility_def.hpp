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
class IK;
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
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Animator;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Joint;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
class Transform;
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
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10249)), TypeDefinitionIndex(TypeDefinitionIndex(10252))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12618))
// CS Name: ::RagdollUtility::Rigidbone*
class CORDL_TYPE __RagdollUtility__Rigidbone : public ::System::Object {
public:
  // Declarations
  /// @brief Field r, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_r, put = __cordl_internal_set_r))::UnityW<::UnityEngine::Rigidbody> r;

  /// @brief Field t, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_t, put = __cordl_internal_set_t))::UnityW<::UnityEngine::Transform> t;

  /// @brief Field collider, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_collider, put = __cordl_internal_set_collider))::UnityW<::UnityEngine::Collider> collider;

  /// @brief Field joint, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_joint, put = __cordl_internal_set_joint))::UnityW<::UnityEngine::Joint> joint;

  /// @brief Field c, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_c, put = __cordl_internal_set_c))::UnityW<::UnityEngine::Rigidbody> c;

  /// @brief Field updateAnchor, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_updateAnchor, put = __cordl_internal_set_updateAnchor)) bool updateAnchor;

  /// @brief Field deltaPosition, offset 0x3c, size 0xc
  __declspec(property(get = __cordl_internal_get_deltaPosition, put = __cordl_internal_set_deltaPosition))::UnityEngine::Vector3 deltaPosition;

  /// @brief Field deltaRotation, offset 0x48, size 0x10
  __declspec(property(get = __cordl_internal_get_deltaRotation, put = __cordl_internal_set_deltaRotation))::UnityEngine::Quaternion deltaRotation;

  /// @brief Field deltaTime, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_deltaTime, put = __cordl_internal_set_deltaTime)) float_t deltaTime;

  /// @brief Field lastPosition, offset 0x5c, size 0xc
  __declspec(property(get = __cordl_internal_get_lastPosition, put = __cordl_internal_set_lastPosition))::UnityEngine::Vector3 lastPosition;

  /// @brief Field lastRotation, offset 0x68, size 0x10
  __declspec(property(get = __cordl_internal_get_lastRotation, put = __cordl_internal_set_lastRotation))::UnityEngine::Quaternion lastRotation;

  constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_r();

  constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_r() const;

  constexpr void __cordl_internal_set_r(::UnityW<::UnityEngine::Rigidbody> value);

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_t();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_t() const;

  constexpr void __cordl_internal_set_t(::UnityW<::UnityEngine::Transform> value);

  constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_collider();

  constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_collider() const;

  constexpr void __cordl_internal_set_collider(::UnityW<::UnityEngine::Collider> value);

  constexpr ::UnityW<::UnityEngine::Joint>& __cordl_internal_get_joint();

  constexpr ::UnityW<::UnityEngine::Joint> const& __cordl_internal_get_joint() const;

  constexpr void __cordl_internal_set_joint(::UnityW<::UnityEngine::Joint> value);

  constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_c();

  constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_c() const;

  constexpr void __cordl_internal_set_c(::UnityW<::UnityEngine::Rigidbody> value);

  constexpr bool& __cordl_internal_get_updateAnchor();

  constexpr bool const& __cordl_internal_get_updateAnchor() const;

  constexpr void __cordl_internal_set_updateAnchor(bool value);

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_deltaPosition();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_deltaPosition() const;

  constexpr void __cordl_internal_set_deltaPosition(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_deltaRotation();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_deltaRotation() const;

  constexpr void __cordl_internal_set_deltaRotation(::UnityEngine::Quaternion value);

  constexpr float_t& __cordl_internal_get_deltaTime();

  constexpr float_t const& __cordl_internal_get_deltaTime() const;

  constexpr void __cordl_internal_set_deltaTime(float_t value);

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastPosition();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastPosition() const;

  constexpr void __cordl_internal_set_lastPosition(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_lastRotation();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_lastRotation() const;

  constexpr void __cordl_internal_set_lastRotation(::UnityEngine::Quaternion value);

  static inline ::RootMotion::FinalIK::__RagdollUtility__Rigidbone* New_ctor(::UnityEngine::Rigidbody* r);

  /// @brief Method .ctor, addr 0x128dab8, size 0x154, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rigidbody* r);

  /// @brief Method RecordVelocity, addr 0x128e600, size 0xd4, virtual false, abstract: false, final false
  inline void RecordVelocity();

  /// @brief Method WakeUp, addr 0x128e3c0, size 0x240, virtual false, abstract: false, final false
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
  ::UnityW<::UnityEngine::Rigidbody> ___r;

  /// @brief Field t, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___t;

  /// @brief Field collider, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Collider> ___collider;

  /// @brief Field joint, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Joint> ___joint;

  /// @brief Field c, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rigidbody> ___c;

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

static_assert(offsetof(::RootMotion::FinalIK::__RagdollUtility__Rigidbone, ___r) == 0x10, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__RagdollUtility__Rigidbone, ___t) == 0x18, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__RagdollUtility__Rigidbone, ___collider) == 0x20, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__RagdollUtility__Rigidbone, ___joint) == 0x28, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__RagdollUtility__Rigidbone, ___c) == 0x30, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__RagdollUtility__Rigidbone, ___updateAnchor) == 0x38, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__RagdollUtility__Rigidbone, ___deltaPosition) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__RagdollUtility__Rigidbone, ___deltaRotation) == 0x48, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__RagdollUtility__Rigidbone, ___deltaTime) == 0x58, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__RagdollUtility__Rigidbone, ___lastPosition) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__RagdollUtility__Rigidbone, ___lastRotation) == 0x68, "Offset mismatch!");

} // namespace RootMotion::FinalIK
// Type: ::Child
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10249)), TypeDefinitionIndex(TypeDefinitionIndex(10252))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12619))
// CS Name: ::RagdollUtility::Child*
class CORDL_TYPE __RagdollUtility__Child : public ::System::Object {
public:
  // Declarations
  /// @brief Field t, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_t, put = __cordl_internal_set_t))::UnityW<::UnityEngine::Transform> t;

  /// @brief Field localPosition, offset 0x18, size 0xc
  __declspec(property(get = __cordl_internal_get_localPosition, put = __cordl_internal_set_localPosition))::UnityEngine::Vector3 localPosition;

  /// @brief Field localRotation, offset 0x24, size 0x10
  __declspec(property(get = __cordl_internal_get_localRotation, put = __cordl_internal_set_localRotation))::UnityEngine::Quaternion localRotation;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_t();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_t() const;

  constexpr void __cordl_internal_set_t(::UnityW<::UnityEngine::Transform> value);

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_localPosition();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_localPosition() const;

  constexpr void __cordl_internal_set_localPosition(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_localRotation();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_localRotation() const;

  constexpr void __cordl_internal_set_localRotation(::UnityEngine::Quaternion value);

  static inline ::RootMotion::FinalIK::__RagdollUtility__Child* New_ctor(::UnityEngine::Transform* transform);

  /// @brief Method .ctor, addr 0x128dc0c, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Transform* transform);

  /// @brief Method FixTransform, addr 0x128e718, size 0x110, virtual false, abstract: false, final false
  inline void FixTransform(float_t weight);

  /// @brief Method StoreLocalState, addr 0x128e6d4, size 0x44, virtual false, abstract: false, final false
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
  ::UnityW<::UnityEngine::Transform> ___t;

  /// @brief Field localPosition, offset: 0x18, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___localPosition;

  /// @brief Field localRotation, offset: 0x24, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___localRotation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__RagdollUtility__Child, 0x38>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__RagdollUtility__Child, ___t) == 0x10, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__RagdollUtility__Child, ___localPosition) == 0x18, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__RagdollUtility__Child, ___localRotation) == 0x24, "Offset mismatch!");

} // namespace RootMotion::FinalIK
// Type: ::<DisableRagdollSmooth>d__21
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12620))
// CS Name: ::RagdollUtility::<DisableRagdollSmooth>d__21*
class CORDL_TYPE __RagdollUtility___DisableRagdollSmooth_d__21 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::RootMotion::FinalIK::RagdollUtility> __4__this;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr ::UnityW<::RootMotion::FinalIK::RagdollUtility>& __cordl_internal_get___4__this();

  constexpr ::UnityW<::RootMotion::FinalIK::RagdollUtility> const& __cordl_internal_get___4__this() const;

  constexpr void __cordl_internal_set___4__this(::UnityW<::RootMotion::FinalIK::RagdollUtility> value);

  static inline ::RootMotion::FinalIK::__RagdollUtility___DisableRagdollSmooth_d__21* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0x128dc68, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0x128ea38, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0x128ea3c, size 0x1e0, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x128ec1c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x128ec24, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x128ec64, size 0x8, virtual true, abstract: false, final true
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
  ::UnityW<::RootMotion::FinalIK::RagdollUtility> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__RagdollUtility___DisableRagdollSmooth_d__21, 0x28>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__RagdollUtility___DisableRagdollSmooth_d__21, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__RagdollUtility___DisableRagdollSmooth_d__21, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__RagdollUtility___DisableRagdollSmooth_d__21, _____4__this) == 0x20, "Offset mismatch!");

} // namespace RootMotion::FinalIK
// Type: RootMotion.FinalIK::RagdollUtility
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(14877))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12621))
// CS Name: ::RootMotion.FinalIK::RagdollUtility*
class CORDL_TYPE RagdollUtility : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _DisableRagdollSmooth_d__21 = ::RootMotion::FinalIK::__RagdollUtility___DisableRagdollSmooth_d__21;

  using Child = ::RootMotion::FinalIK::__RagdollUtility__Child;

  using Rigidbone = ::RootMotion::FinalIK::__RagdollUtility__Rigidbone;

  /// @brief Field ik, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_ik, put = __cordl_internal_set_ik))::UnityW<::RootMotion::FinalIK::IK> ik;

  /// @brief Field ragdollToAnimationTime, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_ragdollToAnimationTime, put = __cordl_internal_set_ragdollToAnimationTime)) float_t ragdollToAnimationTime;

  /// @brief Field applyIkOnRagdoll, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get_applyIkOnRagdoll, put = __cordl_internal_set_applyIkOnRagdoll)) bool applyIkOnRagdoll;

  /// @brief Field applyVelocity, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_applyVelocity, put = __cordl_internal_set_applyVelocity)) float_t applyVelocity;

  /// @brief Field applyAngularVelocity, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_applyAngularVelocity, put = __cordl_internal_set_applyAngularVelocity)) float_t applyAngularVelocity;

  /// @brief Field animator, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_animator, put = __cordl_internal_set_animator))::UnityW<::UnityEngine::Animator> animator;

  /// @brief Field rigidbones, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_rigidbones,
                      put = __cordl_internal_set_rigidbones))::ArrayW<::RootMotion::FinalIK::__RagdollUtility__Rigidbone*, ::Array<::RootMotion::FinalIK::__RagdollUtility__Rigidbone*>*> rigidbones;

  /// @brief Field children, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_children,
                      put = __cordl_internal_set_children))::ArrayW<::RootMotion::FinalIK::__RagdollUtility__Child*, ::Array<::RootMotion::FinalIK::__RagdollUtility__Child*>*> children;

  /// @brief Field enableRagdollFlag, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get_enableRagdollFlag, put = __cordl_internal_set_enableRagdollFlag)) bool enableRagdollFlag;

  /// @brief Field animatorUpdateMode, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_animatorUpdateMode, put = __cordl_internal_set_animatorUpdateMode))::UnityEngine::AnimatorUpdateMode animatorUpdateMode;

  /// @brief Field allIKComponents, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_allIKComponents,
                      put = __cordl_internal_set_allIKComponents))::ArrayW<::UnityW<::RootMotion::FinalIK::IK>, ::Array<::UnityW<::RootMotion::FinalIK::IK>>*> allIKComponents;

  /// @brief Field fixTransforms, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_fixTransforms, put = __cordl_internal_set_fixTransforms))::ArrayW<bool, ::Array<bool>*> fixTransforms;

  /// @brief Field ragdollWeight, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_ragdollWeight, put = __cordl_internal_set_ragdollWeight)) float_t ragdollWeight;

  /// @brief Field ragdollWeightV, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_ragdollWeightV, put = __cordl_internal_set_ragdollWeightV)) float_t ragdollWeightV;

  /// @brief Field fixedFrame, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get_fixedFrame, put = __cordl_internal_set_fixedFrame)) bool fixedFrame;

  /// @brief Field disabledIKComponents, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_disabledIKComponents, put = __cordl_internal_set_disabledIKComponents))::ArrayW<bool, ::Array<bool>*> disabledIKComponents;

  __declspec(property(get = get_isRagdoll)) bool isRagdoll;

  __declspec(property(get = get_ikUsed)) bool ikUsed;

  constexpr ::UnityW<::RootMotion::FinalIK::IK>& __cordl_internal_get_ik();

  constexpr ::UnityW<::RootMotion::FinalIK::IK> const& __cordl_internal_get_ik() const;

  constexpr void __cordl_internal_set_ik(::UnityW<::RootMotion::FinalIK::IK> value);

  constexpr float_t& __cordl_internal_get_ragdollToAnimationTime();

  constexpr float_t const& __cordl_internal_get_ragdollToAnimationTime() const;

  constexpr void __cordl_internal_set_ragdollToAnimationTime(float_t value);

  constexpr bool& __cordl_internal_get_applyIkOnRagdoll();

  constexpr bool const& __cordl_internal_get_applyIkOnRagdoll() const;

  constexpr void __cordl_internal_set_applyIkOnRagdoll(bool value);

  constexpr float_t& __cordl_internal_get_applyVelocity();

  constexpr float_t const& __cordl_internal_get_applyVelocity() const;

  constexpr void __cordl_internal_set_applyVelocity(float_t value);

  constexpr float_t& __cordl_internal_get_applyAngularVelocity();

  constexpr float_t const& __cordl_internal_get_applyAngularVelocity() const;

  constexpr void __cordl_internal_set_applyAngularVelocity(float_t value);

  constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get_animator();

  constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get_animator() const;

  constexpr void __cordl_internal_set_animator(::UnityW<::UnityEngine::Animator> value);

  constexpr ::ArrayW<::RootMotion::FinalIK::__RagdollUtility__Rigidbone*, ::Array<::RootMotion::FinalIK::__RagdollUtility__Rigidbone*>*>& __cordl_internal_get_rigidbones();

  constexpr ::ArrayW<::RootMotion::FinalIK::__RagdollUtility__Rigidbone*, ::Array<::RootMotion::FinalIK::__RagdollUtility__Rigidbone*>*> const& __cordl_internal_get_rigidbones() const;

  constexpr void __cordl_internal_set_rigidbones(::ArrayW<::RootMotion::FinalIK::__RagdollUtility__Rigidbone*, ::Array<::RootMotion::FinalIK::__RagdollUtility__Rigidbone*>*> value);

  constexpr ::ArrayW<::RootMotion::FinalIK::__RagdollUtility__Child*, ::Array<::RootMotion::FinalIK::__RagdollUtility__Child*>*>& __cordl_internal_get_children();

  constexpr ::ArrayW<::RootMotion::FinalIK::__RagdollUtility__Child*, ::Array<::RootMotion::FinalIK::__RagdollUtility__Child*>*> const& __cordl_internal_get_children() const;

  constexpr void __cordl_internal_set_children(::ArrayW<::RootMotion::FinalIK::__RagdollUtility__Child*, ::Array<::RootMotion::FinalIK::__RagdollUtility__Child*>*> value);

  constexpr bool& __cordl_internal_get_enableRagdollFlag();

  constexpr bool const& __cordl_internal_get_enableRagdollFlag() const;

  constexpr void __cordl_internal_set_enableRagdollFlag(bool value);

  constexpr ::UnityEngine::AnimatorUpdateMode& __cordl_internal_get_animatorUpdateMode();

  constexpr ::UnityEngine::AnimatorUpdateMode const& __cordl_internal_get_animatorUpdateMode() const;

  constexpr void __cordl_internal_set_animatorUpdateMode(::UnityEngine::AnimatorUpdateMode value);

  constexpr ::ArrayW<::UnityW<::RootMotion::FinalIK::IK>, ::Array<::UnityW<::RootMotion::FinalIK::IK>>*>& __cordl_internal_get_allIKComponents();

  constexpr ::ArrayW<::UnityW<::RootMotion::FinalIK::IK>, ::Array<::UnityW<::RootMotion::FinalIK::IK>>*> const& __cordl_internal_get_allIKComponents() const;

  constexpr void __cordl_internal_set_allIKComponents(::ArrayW<::UnityW<::RootMotion::FinalIK::IK>, ::Array<::UnityW<::RootMotion::FinalIK::IK>>*> value);

  constexpr ::ArrayW<bool, ::Array<bool>*>& __cordl_internal_get_fixTransforms();

  constexpr ::ArrayW<bool, ::Array<bool>*> const& __cordl_internal_get_fixTransforms() const;

  constexpr void __cordl_internal_set_fixTransforms(::ArrayW<bool, ::Array<bool>*> value);

  constexpr float_t& __cordl_internal_get_ragdollWeight();

  constexpr float_t const& __cordl_internal_get_ragdollWeight() const;

  constexpr void __cordl_internal_set_ragdollWeight(float_t value);

  constexpr float_t& __cordl_internal_get_ragdollWeightV();

  constexpr float_t const& __cordl_internal_get_ragdollWeightV() const;

  constexpr void __cordl_internal_set_ragdollWeightV(float_t value);

  constexpr bool& __cordl_internal_get_fixedFrame();

  constexpr bool const& __cordl_internal_get_fixedFrame() const;

  constexpr void __cordl_internal_set_fixedFrame(bool value);

  constexpr ::ArrayW<bool, ::Array<bool>*>& __cordl_internal_get_disabledIKComponents();

  constexpr ::ArrayW<bool, ::Array<bool>*> const& __cordl_internal_get_disabledIKComponents() const;

  constexpr void __cordl_internal_set_disabledIKComponents(::ArrayW<bool, ::Array<bool>*> value);

  /// @brief Method EnableRagdoll, addr 0x128d510, size 0x2c, virtual false, abstract: false, final false
  inline void EnableRagdoll();

  /// @brief Method DisableRagdoll, addr 0x128d5a0, size 0x48, virtual false, abstract: false, final false
  inline void DisableRagdoll();

  /// @brief Method Start, addr 0x128d6ac, size 0x40c, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method DisableRagdollSmooth, addr 0x128d644, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* DisableRagdollSmooth();

  /// @brief Method Update, addr 0x128dc90, size 0x228, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method FixedUpdate, addr 0x128deb8, size 0x34, virtual false, abstract: false, final false
  inline void FixedUpdate();

  /// @brief Method LateUpdate, addr 0x128df58, size 0x70, virtual false, abstract: false, final false
  inline void LateUpdate();

  /// @brief Method AfterLastIK, addr 0x128e148, size 0x24, virtual false, abstract: false, final false
  inline void AfterLastIK();

  /// @brief Method AfterAnimation, addr 0x128dfc8, size 0x2c, virtual false, abstract: false, final false
  inline void AfterAnimation();

  /// @brief Method OnFinalPose, addr 0x128e114, size 0x34, virtual false, abstract: false, final false
  inline void OnFinalPose();

  /// @brief Method RagdollEnabler, addr 0x128e1c8, size 0x1f8, virtual false, abstract: false, final false
  inline void RagdollEnabler();

  /// @brief Method get_isRagdoll, addr 0x128d53c, size 0x64, virtual false, abstract: false, final false
  inline bool get_isRagdoll();

  /// @brief Method RecordVelocities, addr 0x128e16c, size 0x5c, virtual false, abstract: false, final false
  inline void RecordVelocities();

  /// @brief Method get_ikUsed, addr 0x128dff4, size 0x120, virtual false, abstract: false, final false
  inline bool get_ikUsed();

  /// @brief Method StoreLocalState, addr 0x128d5e8, size 0x5c, virtual false, abstract: false, final false
  inline void StoreLocalState();

  /// @brief Method FixTransforms, addr 0x128deec, size 0x6c, virtual false, abstract: false, final false
  inline void FixTransforms(float_t weight);

  /// @brief Method OnDestroy, addr 0x128e828, size 0x118, virtual false, abstract: false, final false
  inline void OnDestroy();

  static inline ::RootMotion::FinalIK::RagdollUtility* New_ctor();

  /// @brief Method .ctor, addr 0x128e940, size 0xf8, virtual false, abstract: false, final false
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
  ::UnityW<::RootMotion::FinalIK::IK> ___ik;

  /// @brief Field ragdollToAnimationTime, offset: 0x20, size: 0x4, def value: None
  float_t ___ragdollToAnimationTime;

  /// @brief Field applyIkOnRagdoll, offset: 0x24, size: 0x1, def value: None
  bool ___applyIkOnRagdoll;

  /// @brief Field applyVelocity, offset: 0x28, size: 0x4, def value: None
  float_t ___applyVelocity;

  /// @brief Field applyAngularVelocity, offset: 0x2c, size: 0x4, def value: None
  float_t ___applyAngularVelocity;

  /// @brief Field animator, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Animator> ___animator;

  /// @brief Field rigidbones, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::RootMotion::FinalIK::__RagdollUtility__Rigidbone*, ::Array<::RootMotion::FinalIK::__RagdollUtility__Rigidbone*>*> ___rigidbones;

  /// @brief Field children, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::RootMotion::FinalIK::__RagdollUtility__Child*, ::Array<::RootMotion::FinalIK::__RagdollUtility__Child*>*> ___children;

  /// @brief Field enableRagdollFlag, offset: 0x48, size: 0x1, def value: None
  bool ___enableRagdollFlag;

  /// @brief Field animatorUpdateMode, offset: 0x4c, size: 0x4, def value: None
  ::UnityEngine::AnimatorUpdateMode ___animatorUpdateMode;

  /// @brief Field allIKComponents, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::UnityW<::RootMotion::FinalIK::IK>, ::Array<::UnityW<::RootMotion::FinalIK::IK>>*> ___allIKComponents;

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

static_assert(offsetof(::RootMotion::FinalIK::RagdollUtility, ___ik) == 0x18, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::RagdollUtility, ___ragdollToAnimationTime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::RagdollUtility, ___applyIkOnRagdoll) == 0x24, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::RagdollUtility, ___applyVelocity) == 0x28, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::RagdollUtility, ___applyAngularVelocity) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::RagdollUtility, ___animator) == 0x30, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::RagdollUtility, ___rigidbones) == 0x38, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::RagdollUtility, ___children) == 0x40, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::RagdollUtility, ___enableRagdollFlag) == 0x48, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::RagdollUtility, ___animatorUpdateMode) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::RagdollUtility, ___allIKComponents) == 0x50, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::RagdollUtility, ___fixTransforms) == 0x58, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::RagdollUtility, ___ragdollWeight) == 0x60, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::RagdollUtility, ___ragdollWeightV) == 0x64, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::RagdollUtility, ___fixedFrame) == 0x68, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::RagdollUtility, ___disabledIKComponents) == 0x70, "Offset mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::RagdollUtility);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::RagdollUtility*, "RootMotion.FinalIK", "RagdollUtility");
NEED_NO_BOX(::RootMotion::FinalIK::__RagdollUtility__Child);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__RagdollUtility__Child*, "RootMotion.FinalIK", "RagdollUtility/Child");
NEED_NO_BOX(::RootMotion::FinalIK::__RagdollUtility__Rigidbone);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__RagdollUtility__Rigidbone*, "RootMotion.FinalIK", "RagdollUtility/Rigidbone");
NEED_NO_BOX(::RootMotion::FinalIK::__RagdollUtility___DisableRagdollSmooth_d__21);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__RagdollUtility___DisableRagdollSmooth_d__21*, "RootMotion.FinalIK", "RagdollUtility/<DisableRagdollSmooth>d__21");
