#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__DynamicBone_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DynamicBone)
namespace GlobalNamespace {
class DynamicBoneColliderBase;
}
namespace GlobalNamespace {
struct __DynamicBone__FreezeAxis;
}
namespace GlobalNamespace {
class __DynamicBone__Particle;
}
namespace GlobalNamespace {
struct __DynamicBone__UpdateMode;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct __DynamicBone__FreezeAxis;
}
namespace GlobalNamespace {
struct __DynamicBone__UpdateMode;
}
namespace GlobalNamespace {
class DynamicBone;
}
namespace GlobalNamespace {
class __DynamicBone__Particle;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__DynamicBone__FreezeAxis);
MARK_VAL_T(::GlobalNamespace::__DynamicBone__UpdateMode);
MARK_REF_PTR_T(::GlobalNamespace::DynamicBone);
MARK_REF_PTR_T(::GlobalNamespace::__DynamicBone__Particle);
// Type: ::UpdateMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16042))
// CS Name: ::DynamicBone::UpdateMode
struct CORDL_TYPE __DynamicBone__UpdateMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____DynamicBone__UpdateMode_Unwrapped
  enum struct ____DynamicBone__UpdateMode_Unwrapped : int32_t {
    __E_Normal = static_cast<int32_t>(0x0),
    __E_AnimatePhysics = static_cast<int32_t>(0x1),
    __E_UnscaledTime = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____DynamicBone__UpdateMode_Unwrapped() const noexcept {
    return static_cast<____DynamicBone__UpdateMode_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __DynamicBone__UpdateMode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DynamicBone__UpdateMode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Normal value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__DynamicBone__UpdateMode const Normal;

  /// @brief Field AnimatePhysics value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__DynamicBone__UpdateMode const AnimatePhysics;

  /// @brief Field UnscaledTime value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__DynamicBone__UpdateMode const UnscaledTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DynamicBone__UpdateMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DynamicBone__UpdateMode, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::FreezeAxis
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16043))
// CS Name: ::DynamicBone::FreezeAxis
struct CORDL_TYPE __DynamicBone__FreezeAxis {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____DynamicBone__FreezeAxis_Unwrapped
  enum struct ____DynamicBone__FreezeAxis_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_X = static_cast<int32_t>(0x1),
    __E_Y = static_cast<int32_t>(0x2),
    __E_Z = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____DynamicBone__FreezeAxis_Unwrapped() const noexcept {
    return static_cast<____DynamicBone__FreezeAxis_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __DynamicBone__FreezeAxis(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DynamicBone__FreezeAxis();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__DynamicBone__FreezeAxis const None;

  /// @brief Field X value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__DynamicBone__FreezeAxis const X;

  /// @brief Field Y value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__DynamicBone__FreezeAxis const Y;

  /// @brief Field Z value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__DynamicBone__FreezeAxis const Z;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DynamicBone__FreezeAxis, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DynamicBone__FreezeAxis, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::Particle
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 116, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10249)), TypeDefinitionIndex(TypeDefinitionIndex(10252))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16044))
// CS Name: ::DynamicBone::Particle*
class CORDL_TYPE __DynamicBone__Particle : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Transform, offset 0x10, size 0x8
  __declspec(property(get = __get_m_Transform, put = __set_m_Transform))::UnityEngine::Transform* m_Transform;

  /// @brief Field m_ParentIndex, offset 0x18, size 0x4
  __declspec(property(get = __get_m_ParentIndex, put = __set_m_ParentIndex)) int32_t m_ParentIndex;

  /// @brief Field m_Damping, offset 0x1c, size 0x4
  __declspec(property(get = __get_m_Damping, put = __set_m_Damping)) float_t m_Damping;

  /// @brief Field m_Elasticity, offset 0x20, size 0x4
  __declspec(property(get = __get_m_Elasticity, put = __set_m_Elasticity)) float_t m_Elasticity;

  /// @brief Field m_Stiffness, offset 0x24, size 0x4
  __declspec(property(get = __get_m_Stiffness, put = __set_m_Stiffness)) float_t m_Stiffness;

  /// @brief Field m_Inert, offset 0x28, size 0x4
  __declspec(property(get = __get_m_Inert, put = __set_m_Inert)) float_t m_Inert;

  /// @brief Field m_Radius, offset 0x2c, size 0x4
  __declspec(property(get = __get_m_Radius, put = __set_m_Radius)) float_t m_Radius;

  /// @brief Field m_BoneLength, offset 0x30, size 0x4
  __declspec(property(get = __get_m_BoneLength, put = __set_m_BoneLength)) float_t m_BoneLength;

  /// @brief Field m_Position, offset 0x34, size 0xc
  __declspec(property(get = __get_m_Position, put = __set_m_Position))::UnityEngine::Vector3 m_Position;

  /// @brief Field m_PrevPosition, offset 0x40, size 0xc
  __declspec(property(get = __get_m_PrevPosition, put = __set_m_PrevPosition))::UnityEngine::Vector3 m_PrevPosition;

  /// @brief Field m_EndOffset, offset 0x4c, size 0xc
  __declspec(property(get = __get_m_EndOffset, put = __set_m_EndOffset))::UnityEngine::Vector3 m_EndOffset;

  /// @brief Field m_InitLocalPosition, offset 0x58, size 0xc
  __declspec(property(get = __get_m_InitLocalPosition, put = __set_m_InitLocalPosition))::UnityEngine::Vector3 m_InitLocalPosition;

  /// @brief Field m_InitLocalRotation, offset 0x64, size 0x10
  __declspec(property(get = __get_m_InitLocalRotation, put = __set_m_InitLocalRotation))::UnityEngine::Quaternion m_InitLocalRotation;

  constexpr ::UnityEngine::Transform*& __get_m_Transform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_m_Transform() const;

  constexpr void __set_m_Transform(::UnityEngine::Transform* value);

  constexpr int32_t& __get_m_ParentIndex();

  constexpr int32_t const& __get_m_ParentIndex() const;

  constexpr void __set_m_ParentIndex(int32_t value);

  constexpr float_t& __get_m_Damping();

  constexpr float_t const& __get_m_Damping() const;

  constexpr void __set_m_Damping(float_t value);

  constexpr float_t& __get_m_Elasticity();

  constexpr float_t const& __get_m_Elasticity() const;

  constexpr void __set_m_Elasticity(float_t value);

  constexpr float_t& __get_m_Stiffness();

  constexpr float_t const& __get_m_Stiffness() const;

  constexpr void __set_m_Stiffness(float_t value);

  constexpr float_t& __get_m_Inert();

  constexpr float_t const& __get_m_Inert() const;

  constexpr void __set_m_Inert(float_t value);

  constexpr float_t& __get_m_Radius();

  constexpr float_t const& __get_m_Radius() const;

  constexpr void __set_m_Radius(float_t value);

  constexpr float_t& __get_m_BoneLength();

  constexpr float_t const& __get_m_BoneLength() const;

  constexpr void __set_m_BoneLength(float_t value);

  constexpr ::UnityEngine::Vector3& __get_m_Position();

  constexpr ::UnityEngine::Vector3 const& __get_m_Position() const;

  constexpr void __set_m_Position(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get_m_PrevPosition();

  constexpr ::UnityEngine::Vector3 const& __get_m_PrevPosition() const;

  constexpr void __set_m_PrevPosition(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get_m_EndOffset();

  constexpr ::UnityEngine::Vector3 const& __get_m_EndOffset() const;

  constexpr void __set_m_EndOffset(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get_m_InitLocalPosition();

  constexpr ::UnityEngine::Vector3 const& __get_m_InitLocalPosition() const;

  constexpr void __set_m_InitLocalPosition(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Quaternion& __get_m_InitLocalRotation();

  constexpr ::UnityEngine::Quaternion const& __get_m_InitLocalRotation() const;

  constexpr void __set_m_InitLocalRotation(::UnityEngine::Quaternion value);

  static inline ::GlobalNamespace::__DynamicBone__Particle* New_ctor();

  /// @brief Method .ctor, addr 0x122fee4, size 0xdc, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__DynamicBone__Particle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DynamicBone__Particle(__DynamicBone__Particle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DynamicBone__Particle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DynamicBone__Particle(__DynamicBone__Particle const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DynamicBone__Particle();

public:
  /// @brief Field m_Transform, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Transform* ___m_Transform;

  /// @brief Field m_ParentIndex, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_ParentIndex;

  /// @brief Field m_Damping, offset: 0x1c, size: 0x4, def value: None
  float_t ___m_Damping;

  /// @brief Field m_Elasticity, offset: 0x20, size: 0x4, def value: None
  float_t ___m_Elasticity;

  /// @brief Field m_Stiffness, offset: 0x24, size: 0x4, def value: None
  float_t ___m_Stiffness;

  /// @brief Field m_Inert, offset: 0x28, size: 0x4, def value: None
  float_t ___m_Inert;

  /// @brief Field m_Radius, offset: 0x2c, size: 0x4, def value: None
  float_t ___m_Radius;

  /// @brief Field m_BoneLength, offset: 0x30, size: 0x4, def value: None
  float_t ___m_BoneLength;

  /// @brief Field m_Position, offset: 0x34, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_Position;

  /// @brief Field m_PrevPosition, offset: 0x40, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_PrevPosition;

  /// @brief Field m_EndOffset, offset: 0x4c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_EndOffset;

  /// @brief Field m_InitLocalPosition, offset: 0x58, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_InitLocalPosition;

  /// @brief Field m_InitLocalRotation, offset: 0x64, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___m_InitLocalRotation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DynamicBone__Particle, 0x78>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DynamicBone__Particle, ___m_Transform) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DynamicBone__Particle, ___m_ParentIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DynamicBone__Particle, ___m_Damping) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DynamicBone__Particle, ___m_Elasticity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DynamicBone__Particle, ___m_Stiffness) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DynamicBone__Particle, ___m_Inert) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DynamicBone__Particle, ___m_Radius) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DynamicBone__Particle, ___m_BoneLength) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DynamicBone__Particle, ___m_Position) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DynamicBone__Particle, ___m_PrevPosition) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DynamicBone__Particle, ___m_EndOffset) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DynamicBone__Particle, ___m_InitLocalPosition) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DynamicBone__Particle, ___m_InitLocalRotation) == 0x64, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::DynamicBone
// SizeInfo { instance_size: 264, native_size: -1, calculated_instance_size: 264, calculated_native_size: 264, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(16043)), TypeDefinitionIndex(TypeDefinitionIndex(10249)),
// TypeDefinitionIndex(TypeDefinitionIndex(16042))} Self: TypeDefinitionIndex(TypeDefinitionIndex(16045)) CS Name: ::DynamicBone*
class CORDL_TYPE DynamicBone : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using Particle = ::GlobalNamespace::__DynamicBone__Particle;

  using FreezeAxis = ::GlobalNamespace::__DynamicBone__FreezeAxis;

  using UpdateMode = ::GlobalNamespace::__DynamicBone__UpdateMode;

  /// @brief Field m_Root, offset 0x18, size 0x8
  __declspec(property(get = __get_m_Root, put = __set_m_Root))::UnityEngine::Transform* m_Root;

  /// @brief Field m_UpdateRate, offset 0x20, size 0x4
  __declspec(property(get = __get_m_UpdateRate, put = __set_m_UpdateRate)) float_t m_UpdateRate;

  /// @brief Field m_UpdateMode, offset 0x24, size 0x4
  __declspec(property(get = __get_m_UpdateMode, put = __set_m_UpdateMode))::GlobalNamespace::__DynamicBone__UpdateMode m_UpdateMode;

  /// @brief Field m_Damping, offset 0x28, size 0x4
  __declspec(property(get = __get_m_Damping, put = __set_m_Damping)) float_t m_Damping;

  /// @brief Field m_DampingDistrib, offset 0x30, size 0x8
  __declspec(property(get = __get_m_DampingDistrib, put = __set_m_DampingDistrib))::UnityEngine::AnimationCurve* m_DampingDistrib;

  /// @brief Field m_Elasticity, offset 0x38, size 0x4
  __declspec(property(get = __get_m_Elasticity, put = __set_m_Elasticity)) float_t m_Elasticity;

  /// @brief Field m_ElasticityDistrib, offset 0x40, size 0x8
  __declspec(property(get = __get_m_ElasticityDistrib, put = __set_m_ElasticityDistrib))::UnityEngine::AnimationCurve* m_ElasticityDistrib;

  /// @brief Field m_Stiffness, offset 0x48, size 0x4
  __declspec(property(get = __get_m_Stiffness, put = __set_m_Stiffness)) float_t m_Stiffness;

  /// @brief Field m_StiffnessDistrib, offset 0x50, size 0x8
  __declspec(property(get = __get_m_StiffnessDistrib, put = __set_m_StiffnessDistrib))::UnityEngine::AnimationCurve* m_StiffnessDistrib;

  /// @brief Field m_Inert, offset 0x58, size 0x4
  __declspec(property(get = __get_m_Inert, put = __set_m_Inert)) float_t m_Inert;

  /// @brief Field m_InertDistrib, offset 0x60, size 0x8
  __declspec(property(get = __get_m_InertDistrib, put = __set_m_InertDistrib))::UnityEngine::AnimationCurve* m_InertDistrib;

  /// @brief Field m_Radius, offset 0x68, size 0x4
  __declspec(property(get = __get_m_Radius, put = __set_m_Radius)) float_t m_Radius;

  /// @brief Field m_RadiusDistrib, offset 0x70, size 0x8
  __declspec(property(get = __get_m_RadiusDistrib, put = __set_m_RadiusDistrib))::UnityEngine::AnimationCurve* m_RadiusDistrib;

  /// @brief Field m_EndLength, offset 0x78, size 0x4
  __declspec(property(get = __get_m_EndLength, put = __set_m_EndLength)) float_t m_EndLength;

  /// @brief Field m_EndOffset, offset 0x7c, size 0xc
  __declspec(property(get = __get_m_EndOffset, put = __set_m_EndOffset))::UnityEngine::Vector3 m_EndOffset;

  /// @brief Field m_Gravity, offset 0x88, size 0xc
  __declspec(property(get = __get_m_Gravity, put = __set_m_Gravity))::UnityEngine::Vector3 m_Gravity;

  /// @brief Field m_Force, offset 0x94, size 0xc
  __declspec(property(get = __get_m_Force, put = __set_m_Force))::UnityEngine::Vector3 m_Force;

  /// @brief Field m_Colliders, offset 0xa0, size 0x8
  __declspec(property(get = __get_m_Colliders, put = __set_m_Colliders))::System::Collections::Generic::List_1<::GlobalNamespace::DynamicBoneColliderBase*>* m_Colliders;

  /// @brief Field m_Exclusions, offset 0xa8, size 0x8
  __declspec(property(get = __get_m_Exclusions, put = __set_m_Exclusions))::System::Collections::Generic::List_1<::UnityEngine::Transform*>* m_Exclusions;

  /// @brief Field m_FreezeAxis, offset 0xb0, size 0x4
  __declspec(property(get = __get_m_FreezeAxis, put = __set_m_FreezeAxis))::GlobalNamespace::__DynamicBone__FreezeAxis m_FreezeAxis;

  /// @brief Field m_DistantDisable, offset 0xb4, size 0x1
  __declspec(property(get = __get_m_DistantDisable, put = __set_m_DistantDisable)) bool m_DistantDisable;

  /// @brief Field m_ReferenceObject, offset 0xb8, size 0x8
  __declspec(property(get = __get_m_ReferenceObject, put = __set_m_ReferenceObject))::UnityEngine::Transform* m_ReferenceObject;

  /// @brief Field m_DistanceToObject, offset 0xc0, size 0x4
  __declspec(property(get = __get_m_DistanceToObject, put = __set_m_DistanceToObject)) float_t m_DistanceToObject;

  /// @brief Field m_LocalGravity, offset 0xc4, size 0xc
  __declspec(property(get = __get_m_LocalGravity, put = __set_m_LocalGravity))::UnityEngine::Vector3 m_LocalGravity;

  /// @brief Field m_ObjectMove, offset 0xd0, size 0xc
  __declspec(property(get = __get_m_ObjectMove, put = __set_m_ObjectMove))::UnityEngine::Vector3 m_ObjectMove;

  /// @brief Field m_ObjectPrevPosition, offset 0xdc, size 0xc
  __declspec(property(get = __get_m_ObjectPrevPosition, put = __set_m_ObjectPrevPosition))::UnityEngine::Vector3 m_ObjectPrevPosition;

  /// @brief Field m_BoneTotalLength, offset 0xe8, size 0x4
  __declspec(property(get = __get_m_BoneTotalLength, put = __set_m_BoneTotalLength)) float_t m_BoneTotalLength;

  /// @brief Field m_ObjectScale, offset 0xec, size 0x4
  __declspec(property(get = __get_m_ObjectScale, put = __set_m_ObjectScale)) float_t m_ObjectScale;

  /// @brief Field m_Time, offset 0xf0, size 0x4
  __declspec(property(get = __get_m_Time, put = __set_m_Time)) float_t m_Time;

  /// @brief Field m_Weight, offset 0xf4, size 0x4
  __declspec(property(get = __get_m_Weight, put = __set_m_Weight)) float_t m_Weight;

  /// @brief Field m_DistantDisabled, offset 0xf8, size 0x1
  __declspec(property(get = __get_m_DistantDisabled, put = __set_m_DistantDisabled)) bool m_DistantDisabled;

  /// @brief Field m_Particles, offset 0x100, size 0x8
  __declspec(property(get = __get_m_Particles, put = __set_m_Particles))::System::Collections::Generic::List_1<::GlobalNamespace::__DynamicBone__Particle*>* m_Particles;

  constexpr ::UnityEngine::Transform*& __get_m_Root();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_m_Root() const;

  constexpr void __set_m_Root(::UnityEngine::Transform* value);

  constexpr float_t& __get_m_UpdateRate();

  constexpr float_t const& __get_m_UpdateRate() const;

  constexpr void __set_m_UpdateRate(float_t value);

  constexpr ::GlobalNamespace::__DynamicBone__UpdateMode& __get_m_UpdateMode();

  constexpr ::GlobalNamespace::__DynamicBone__UpdateMode const& __get_m_UpdateMode() const;

  constexpr void __set_m_UpdateMode(::GlobalNamespace::__DynamicBone__UpdateMode value);

  constexpr float_t& __get_m_Damping();

  constexpr float_t const& __get_m_Damping() const;

  constexpr void __set_m_Damping(float_t value);

  constexpr ::UnityEngine::AnimationCurve*& __get_m_DampingDistrib();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __get_m_DampingDistrib() const;

  constexpr void __set_m_DampingDistrib(::UnityEngine::AnimationCurve* value);

  constexpr float_t& __get_m_Elasticity();

  constexpr float_t const& __get_m_Elasticity() const;

  constexpr void __set_m_Elasticity(float_t value);

  constexpr ::UnityEngine::AnimationCurve*& __get_m_ElasticityDistrib();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __get_m_ElasticityDistrib() const;

  constexpr void __set_m_ElasticityDistrib(::UnityEngine::AnimationCurve* value);

  constexpr float_t& __get_m_Stiffness();

  constexpr float_t const& __get_m_Stiffness() const;

  constexpr void __set_m_Stiffness(float_t value);

  constexpr ::UnityEngine::AnimationCurve*& __get_m_StiffnessDistrib();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __get_m_StiffnessDistrib() const;

  constexpr void __set_m_StiffnessDistrib(::UnityEngine::AnimationCurve* value);

  constexpr float_t& __get_m_Inert();

  constexpr float_t const& __get_m_Inert() const;

  constexpr void __set_m_Inert(float_t value);

  constexpr ::UnityEngine::AnimationCurve*& __get_m_InertDistrib();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __get_m_InertDistrib() const;

  constexpr void __set_m_InertDistrib(::UnityEngine::AnimationCurve* value);

  constexpr float_t& __get_m_Radius();

  constexpr float_t const& __get_m_Radius() const;

  constexpr void __set_m_Radius(float_t value);

  constexpr ::UnityEngine::AnimationCurve*& __get_m_RadiusDistrib();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __get_m_RadiusDistrib() const;

  constexpr void __set_m_RadiusDistrib(::UnityEngine::AnimationCurve* value);

  constexpr float_t& __get_m_EndLength();

  constexpr float_t const& __get_m_EndLength() const;

  constexpr void __set_m_EndLength(float_t value);

  constexpr ::UnityEngine::Vector3& __get_m_EndOffset();

  constexpr ::UnityEngine::Vector3 const& __get_m_EndOffset() const;

  constexpr void __set_m_EndOffset(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get_m_Gravity();

  constexpr ::UnityEngine::Vector3 const& __get_m_Gravity() const;

  constexpr void __set_m_Gravity(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get_m_Force();

  constexpr ::UnityEngine::Vector3 const& __get_m_Force() const;

  constexpr void __set_m_Force(::UnityEngine::Vector3 value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::DynamicBoneColliderBase*>*& __get_m_Colliders();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::DynamicBoneColliderBase*>*> const& __get_m_Colliders() const;

  constexpr void __set_m_Colliders(::System::Collections::Generic::List_1<::GlobalNamespace::DynamicBoneColliderBase*>* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*& __get_m_Exclusions();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Transform*>*> const& __get_m_Exclusions() const;

  constexpr void __set_m_Exclusions(::System::Collections::Generic::List_1<::UnityEngine::Transform*>* value);

  constexpr ::GlobalNamespace::__DynamicBone__FreezeAxis& __get_m_FreezeAxis();

  constexpr ::GlobalNamespace::__DynamicBone__FreezeAxis const& __get_m_FreezeAxis() const;

  constexpr void __set_m_FreezeAxis(::GlobalNamespace::__DynamicBone__FreezeAxis value);

  constexpr bool& __get_m_DistantDisable();

  constexpr bool const& __get_m_DistantDisable() const;

  constexpr void __set_m_DistantDisable(bool value);

  constexpr ::UnityEngine::Transform*& __get_m_ReferenceObject();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_m_ReferenceObject() const;

  constexpr void __set_m_ReferenceObject(::UnityEngine::Transform* value);

  constexpr float_t& __get_m_DistanceToObject();

  constexpr float_t const& __get_m_DistanceToObject() const;

  constexpr void __set_m_DistanceToObject(float_t value);

  constexpr ::UnityEngine::Vector3& __get_m_LocalGravity();

  constexpr ::UnityEngine::Vector3 const& __get_m_LocalGravity() const;

  constexpr void __set_m_LocalGravity(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get_m_ObjectMove();

  constexpr ::UnityEngine::Vector3 const& __get_m_ObjectMove() const;

  constexpr void __set_m_ObjectMove(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get_m_ObjectPrevPosition();

  constexpr ::UnityEngine::Vector3 const& __get_m_ObjectPrevPosition() const;

  constexpr void __set_m_ObjectPrevPosition(::UnityEngine::Vector3 value);

  constexpr float_t& __get_m_BoneTotalLength();

  constexpr float_t const& __get_m_BoneTotalLength() const;

  constexpr void __set_m_BoneTotalLength(float_t value);

  constexpr float_t& __get_m_ObjectScale();

  constexpr float_t const& __get_m_ObjectScale() const;

  constexpr void __set_m_ObjectScale(float_t value);

  constexpr float_t& __get_m_Time();

  constexpr float_t const& __get_m_Time() const;

  constexpr void __set_m_Time(float_t value);

  constexpr float_t& __get_m_Weight();

  constexpr float_t const& __get_m_Weight() const;

  constexpr void __set_m_Weight(float_t value);

  constexpr bool& __get_m_DistantDisabled();

  constexpr bool const& __get_m_DistantDisabled() const;

  constexpr void __set_m_DistantDisabled(bool value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__DynamicBone__Particle*>*& __get_m_Particles();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__DynamicBone__Particle*>*> const& __get_m_Particles() const;

  constexpr void __set_m_Particles(::System::Collections::Generic::List_1<::GlobalNamespace::__DynamicBone__Particle*>* value);

  /// @brief Method Start, addr 0x122dc78, size 0x4, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method FixedUpdate, addr 0x122dde8, size 0x30, virtual false, abstract: false, final false
  inline void FixedUpdate();

  /// @brief Method Update, addr 0x122de3c, size 0x30, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method LateUpdate, addr 0x122de6c, size 0x50, virtual false, abstract: false, final false
  inline void LateUpdate();

  /// @brief Method PreUpdate, addr 0x122de18, size 0x24, virtual false, abstract: false, final false
  inline void PreUpdate();

  /// @brief Method CheckDistance, addr 0x122debc, size 0x178, virtual false, abstract: false, final false
  inline void CheckDistance();

  /// @brief Method OnEnable, addr 0x122e444, size 0x4, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnDisable, addr 0x122e448, size 0x4, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnValidate, addr 0x122e44c, size 0xac, virtual false, abstract: false, final false
  inline void OnValidate();

  /// @brief Method OnDrawGizmosSelected, addr 0x122e4f8, size 0x190, virtual false, abstract: false, final false
  inline void OnDrawGizmosSelected();

  /// @brief Method SetWeight, addr 0x122e688, size 0x50, virtual false, abstract: false, final false
  inline void SetWeight(float_t w);

  /// @brief Method GetWeight, addr 0x122e6d8, size 0x8, virtual false, abstract: false, final false
  inline float_t GetWeight();

  /// @brief Method UpdateDynamicBones, addr 0x122e034, size 0x1c4, virtual false, abstract: false, final false
  inline void UpdateDynamicBones(float_t t);

  /// @brief Method SetupParticles, addr 0x122dc7c, size 0x16c, virtual false, abstract: false, final false
  inline void SetupParticles();

  /// @brief Method AppendParticles, addr 0x122f660, size 0x5c8, virtual false, abstract: false, final false
  inline void AppendParticles(::UnityEngine::Transform* b, int32_t parentIndex, float_t boneLength);

  /// @brief Method UpdateParameters, addr 0x122fc28, size 0x2bc, virtual false, abstract: false, final false
  inline void UpdateParameters();

  /// @brief Method InitTransforms, addr 0x122e1f8, size 0x104, virtual false, abstract: false, final false
  inline void InitTransforms();

  /// @brief Method ResetParticlesPosition, addr 0x122e2fc, size 0x148, virtual false, abstract: false, final false
  inline void ResetParticlesPosition();

  /// @brief Method UpdateParticles1, addr 0x122e6e0, size 0x264, virtual false, abstract: false, final false
  inline void UpdateParticles1();

  /// @brief Method UpdateParticles2, addr 0x122e944, size 0x61c, virtual false, abstract: false, final false
  inline void UpdateParticles2();

  /// @brief Method SkipUpdateParticles, addr 0x122ef60, size 0x4a4, virtual false, abstract: false, final false
  inline void SkipUpdateParticles();

  /// @brief Method MirrorVector, addr 0x122ffc0, size 0x34, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 MirrorVector(::UnityEngine::Vector3 v, ::UnityEngine::Vector3 axis);

  /// @brief Method ApplyParticlesToTransforms, addr 0x122f404, size 0x25c, virtual false, abstract: false, final false
  inline void ApplyParticlesToTransforms();

  static inline ::GlobalNamespace::DynamicBone* New_ctor();

  /// @brief Method .ctor, addr 0x122fff4, size 0x150, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "DynamicBone", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DynamicBone(DynamicBone&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DynamicBone", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DynamicBone(DynamicBone const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DynamicBone();

public:
  /// @brief Field m_Root, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Transform* ___m_Root;

  /// @brief Field m_UpdateRate, offset: 0x20, size: 0x4, def value: None
  float_t ___m_UpdateRate;

  /// @brief Field m_UpdateMode, offset: 0x24, size: 0x4, def value: None
  ::GlobalNamespace::__DynamicBone__UpdateMode ___m_UpdateMode;

  /// @brief Field m_Damping, offset: 0x28, size: 0x4, def value: None
  float_t ___m_Damping;

  /// @brief Field m_DampingDistrib, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___m_DampingDistrib;

  /// @brief Field m_Elasticity, offset: 0x38, size: 0x4, def value: None
  float_t ___m_Elasticity;

  /// @brief Field m_ElasticityDistrib, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___m_ElasticityDistrib;

  /// @brief Field m_Stiffness, offset: 0x48, size: 0x4, def value: None
  float_t ___m_Stiffness;

  /// @brief Field m_StiffnessDistrib, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___m_StiffnessDistrib;

  /// @brief Field m_Inert, offset: 0x58, size: 0x4, def value: None
  float_t ___m_Inert;

  /// @brief Field m_InertDistrib, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___m_InertDistrib;

  /// @brief Field m_Radius, offset: 0x68, size: 0x4, def value: None
  float_t ___m_Radius;

  /// @brief Field m_RadiusDistrib, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___m_RadiusDistrib;

  /// @brief Field m_EndLength, offset: 0x78, size: 0x4, def value: None
  float_t ___m_EndLength;

  /// @brief Field m_EndOffset, offset: 0x7c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_EndOffset;

  /// @brief Field m_Gravity, offset: 0x88, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_Gravity;

  /// @brief Field m_Force, offset: 0x94, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_Force;

  /// @brief Field m_Colliders, offset: 0xa0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::DynamicBoneColliderBase*>* ___m_Colliders;

  /// @brief Field m_Exclusions, offset: 0xa8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Transform*>* ___m_Exclusions;

  /// @brief Field m_FreezeAxis, offset: 0xb0, size: 0x4, def value: None
  ::GlobalNamespace::__DynamicBone__FreezeAxis ___m_FreezeAxis;

  /// @brief Field m_DistantDisable, offset: 0xb4, size: 0x1, def value: None
  bool ___m_DistantDisable;

  /// @brief Field m_ReferenceObject, offset: 0xb8, size: 0x8, def value: None
  ::UnityEngine::Transform* ___m_ReferenceObject;

  /// @brief Field m_DistanceToObject, offset: 0xc0, size: 0x4, def value: None
  float_t ___m_DistanceToObject;

  /// @brief Field m_LocalGravity, offset: 0xc4, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_LocalGravity;

  /// @brief Field m_ObjectMove, offset: 0xd0, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_ObjectMove;

  /// @brief Field m_ObjectPrevPosition, offset: 0xdc, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_ObjectPrevPosition;

  /// @brief Field m_BoneTotalLength, offset: 0xe8, size: 0x4, def value: None
  float_t ___m_BoneTotalLength;

  /// @brief Field m_ObjectScale, offset: 0xec, size: 0x4, def value: None
  float_t ___m_ObjectScale;

  /// @brief Field m_Time, offset: 0xf0, size: 0x4, def value: None
  float_t ___m_Time;

  /// @brief Field m_Weight, offset: 0xf4, size: 0x4, def value: None
  float_t ___m_Weight;

  /// @brief Field m_DistantDisabled, offset: 0xf8, size: 0x1, def value: None
  bool ___m_DistantDisabled;

  /// @brief Field m_Particles, offset: 0x100, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__DynamicBone__Particle*>* ___m_Particles;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DynamicBone, 0x108>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::DynamicBone, ___m_Root) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DynamicBone, ___m_UpdateRate) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DynamicBone, ___m_UpdateMode) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DynamicBone, ___m_Damping) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DynamicBone, ___m_DampingDistrib) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DynamicBone, ___m_Elasticity) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DynamicBone, ___m_ElasticityDistrib) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DynamicBone, ___m_Stiffness) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DynamicBone, ___m_StiffnessDistrib) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DynamicBone, ___m_Inert) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DynamicBone, ___m_InertDistrib) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DynamicBone, ___m_Radius) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DynamicBone, ___m_RadiusDistrib) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DynamicBone, ___m_EndLength) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DynamicBone, ___m_EndOffset) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DynamicBone, ___m_Gravity) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DynamicBone, ___m_Force) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DynamicBone, ___m_Colliders) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DynamicBone, ___m_Exclusions) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DynamicBone, ___m_FreezeAxis) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DynamicBone, ___m_DistantDisable) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DynamicBone, ___m_ReferenceObject) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DynamicBone, ___m_DistanceToObject) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DynamicBone, ___m_LocalGravity) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DynamicBone, ___m_ObjectMove) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DynamicBone, ___m_ObjectPrevPosition) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DynamicBone, ___m_BoneTotalLength) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DynamicBone, ___m_ObjectScale) == 0xec, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DynamicBone, ___m_Time) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DynamicBone, ___m_Weight) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DynamicBone, ___m_DistantDisabled) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DynamicBone, ___m_Particles) == 0x100, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DynamicBone__FreezeAxis, "", "DynamicBone/FreezeAxis");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DynamicBone__UpdateMode, "", "DynamicBone/UpdateMode");
NEED_NO_BOX(::GlobalNamespace::DynamicBone);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DynamicBone*, "", "DynamicBone");
NEED_NO_BOX(::GlobalNamespace::__DynamicBone__Particle);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DynamicBone__Particle*, "", "DynamicBone/Particle");
