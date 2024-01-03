#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/FinalIK/zzzz__Grounding_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Grounding)
namespace RootMotion::FinalIK {
class __Grounding__Leg;
}
namespace RootMotion::FinalIK {
class __Grounding__Pelvis;
}
namespace RootMotion::FinalIK {
struct __Grounding__Quality;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct RaycastHit;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace RootMotion::FinalIK {
struct __Grounding__Quality;
}
namespace RootMotion::FinalIK {
class Grounding;
}
namespace RootMotion::FinalIK {
class __Grounding__Leg;
}
namespace RootMotion::FinalIK {
class __Grounding__Pelvis;
}
// Write type traits
MARK_VAL_T(::RootMotion::FinalIK::__Grounding__Quality);
MARK_REF_PTR_T(::RootMotion::FinalIK::Grounding);
MARK_REF_PTR_T(::RootMotion::FinalIK::__Grounding__Leg);
MARK_REF_PTR_T(::RootMotion::FinalIK::__Grounding__Pelvis);
// Type: ::Quality
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12526))
// CS Name: ::Grounding::Quality
struct CORDL_TYPE __Grounding__Quality {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Grounding__Quality_Unwrapped
  enum struct ____Grounding__Quality_Unwrapped : int32_t {
    __E_Fastest = static_cast<int32_t>(0x0),
    __E_Simple = static_cast<int32_t>(0x1),
    __E_Best = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Grounding__Quality_Unwrapped() const noexcept {
    return static_cast<____Grounding__Quality_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Grounding__Quality(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Grounding__Quality();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Fastest value: static_cast<int32_t>(0x0)
  static ::RootMotion::FinalIK::__Grounding__Quality const Fastest;

  /// @brief Field Simple value: static_cast<int32_t>(0x1)
  static ::RootMotion::FinalIK::__Grounding__Quality const Simple;

  /// @brief Field Best value: static_cast<int32_t>(0x2)
  static ::RootMotion::FinalIK::__Grounding__Quality const Best;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__Grounding__Quality, 0x4>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__Grounding__Quality, value__) == 0x0, "Offset mismatch!");

} // namespace RootMotion::FinalIK
// Type: ::Leg
// SizeInfo { instance_size: 280, native_size: -1, calculated_instance_size: 280, calculated_native_size: 276, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10252)), TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10249)),
// TypeDefinitionIndex(TypeDefinitionIndex(15487))} Self: TypeDefinitionIndex(TypeDefinitionIndex(12527)) CS Name: ::Grounding::Leg*
class CORDL_TYPE __Grounding__Leg : public ::System::Object {
public:
  // Declarations
  /// @brief Field <isGrounded>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __get__isGrounded_k__BackingField, put = __set__isGrounded_k__BackingField)) bool _isGrounded_k__BackingField;

  /// @brief Field <IKPosition>k__BackingField, offset 0x14, size 0xc
  __declspec(property(get = __get__IKPosition_k__BackingField, put = __set__IKPosition_k__BackingField))::UnityEngine::Vector3 _IKPosition_k__BackingField;

  /// @brief Field rotationOffset, offset 0x20, size 0x10
  __declspec(property(get = __get_rotationOffset, put = __set_rotationOffset))::UnityEngine::Quaternion rotationOffset;

  /// @brief Field <initiated>k__BackingField, offset 0x30, size 0x1
  __declspec(property(get = __get__initiated_k__BackingField, put = __set__initiated_k__BackingField)) bool _initiated_k__BackingField;

  /// @brief Field <heightFromGround>k__BackingField, offset 0x34, size 0x4
  __declspec(property(get = __get__heightFromGround_k__BackingField, put = __set__heightFromGround_k__BackingField)) float_t _heightFromGround_k__BackingField;

  /// @brief Field <velocity>k__BackingField, offset 0x38, size 0xc
  __declspec(property(get = __get__velocity_k__BackingField, put = __set__velocity_k__BackingField))::UnityEngine::Vector3 _velocity_k__BackingField;

  /// @brief Field <transform>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __get__transform_k__BackingField, put = __set__transform_k__BackingField))::UnityEngine::Transform* _transform_k__BackingField;

  /// @brief Field <IKOffset>k__BackingField, offset 0x50, size 0x4
  __declspec(property(get = __get__IKOffset_k__BackingField, put = __set__IKOffset_k__BackingField)) float_t _IKOffset_k__BackingField;

  /// @brief Field invertFootCenter, offset 0x54, size 0x1
  __declspec(property(get = __get_invertFootCenter, put = __set_invertFootCenter)) bool invertFootCenter;

  /// @brief Field <heelHit>k__BackingField, offset 0x58, size 0x2c
  __declspec(property(get = __get__heelHit_k__BackingField, put = __set__heelHit_k__BackingField))::UnityEngine::RaycastHit _heelHit_k__BackingField;

  /// @brief Field <capsuleHit>k__BackingField, offset 0x84, size 0x2c
  __declspec(property(get = __get__capsuleHit_k__BackingField, put = __set__capsuleHit_k__BackingField))::UnityEngine::RaycastHit _capsuleHit_k__BackingField;

  /// @brief Field grounding, offset 0xb0, size 0x8
  __declspec(property(get = __get_grounding, put = __set_grounding))::RootMotion::FinalIK::Grounding* grounding;

  /// @brief Field lastTime, offset 0xb8, size 0x4
  __declspec(property(get = __get_lastTime, put = __set_lastTime)) float_t lastTime;

  /// @brief Field deltaTime, offset 0xbc, size 0x4
  __declspec(property(get = __get_deltaTime, put = __set_deltaTime)) float_t deltaTime;

  /// @brief Field lastPosition, offset 0xc0, size 0xc
  __declspec(property(get = __get_lastPosition, put = __set_lastPosition))::UnityEngine::Vector3 lastPosition;

  /// @brief Field toHitNormal, offset 0xcc, size 0x10
  __declspec(property(get = __get_toHitNormal, put = __set_toHitNormal))::UnityEngine::Quaternion toHitNormal;

  /// @brief Field r, offset 0xdc, size 0x10
  __declspec(property(get = __get_r, put = __set_r))::UnityEngine::Quaternion r;

  /// @brief Field up, offset 0xec, size 0xc
  __declspec(property(get = __get_up, put = __set_up))::UnityEngine::Vector3 up;

  /// @brief Field doOverrideFootPosition, offset 0xf8, size 0x1
  __declspec(property(get = __get_doOverrideFootPosition, put = __set_doOverrideFootPosition)) bool doOverrideFootPosition;

  /// @brief Field overrideFootPosition, offset 0xfc, size 0xc
  __declspec(property(get = __get_overrideFootPosition, put = __set_overrideFootPosition))::UnityEngine::Vector3 overrideFootPosition;

  /// @brief Field transformPosition, offset 0x108, size 0xc
  __declspec(property(get = __get_transformPosition, put = __set_transformPosition))::UnityEngine::Vector3 transformPosition;

  __declspec(property(get = get_isGrounded, put = set_isGrounded)) bool isGrounded;

  __declspec(property(get = get_IKPosition, put = set_IKPosition))::UnityEngine::Vector3 IKPosition;

  __declspec(property(get = get_initiated, put = set_initiated)) bool initiated;

  __declspec(property(get = get_heightFromGround, put = set_heightFromGround)) float_t heightFromGround;

  __declspec(property(get = get_velocity, put = set_velocity))::UnityEngine::Vector3 velocity;

  __declspec(property(get = get_transform, put = set_transform))::UnityEngine::Transform* transform;

  __declspec(property(get = get_IKOffset, put = set_IKOffset)) float_t IKOffset;

  __declspec(property(get = get_heelHit, put = set_heelHit))::UnityEngine::RaycastHit heelHit;

  __declspec(property(get = get_capsuleHit, put = set_capsuleHit))::UnityEngine::RaycastHit capsuleHit;

  __declspec(property(get = get_GetHitPoint))::UnityEngine::RaycastHit GetHitPoint;

  __declspec(property(get = get_stepHeightFromGround)) float_t stepHeightFromGround;

  __declspec(property(get = get_rootYOffset)) float_t rootYOffset;

  constexpr bool& __get__isGrounded_k__BackingField();

  constexpr bool const& __get__isGrounded_k__BackingField() const;

  constexpr void __set__isGrounded_k__BackingField(bool value);

  constexpr ::UnityEngine::Vector3& __get__IKPosition_k__BackingField();

  constexpr ::UnityEngine::Vector3 const& __get__IKPosition_k__BackingField() const;

  constexpr void __set__IKPosition_k__BackingField(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Quaternion& __get_rotationOffset();

  constexpr ::UnityEngine::Quaternion const& __get_rotationOffset() const;

  constexpr void __set_rotationOffset(::UnityEngine::Quaternion value);

  constexpr bool& __get__initiated_k__BackingField();

  constexpr bool const& __get__initiated_k__BackingField() const;

  constexpr void __set__initiated_k__BackingField(bool value);

  constexpr float_t& __get__heightFromGround_k__BackingField();

  constexpr float_t const& __get__heightFromGround_k__BackingField() const;

  constexpr void __set__heightFromGround_k__BackingField(float_t value);

  constexpr ::UnityEngine::Vector3& __get__velocity_k__BackingField();

  constexpr ::UnityEngine::Vector3 const& __get__velocity_k__BackingField() const;

  constexpr void __set__velocity_k__BackingField(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Transform*& __get__transform_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__transform_k__BackingField() const;

  constexpr void __set__transform_k__BackingField(::UnityEngine::Transform* value);

  constexpr float_t& __get__IKOffset_k__BackingField();

  constexpr float_t const& __get__IKOffset_k__BackingField() const;

  constexpr void __set__IKOffset_k__BackingField(float_t value);

  constexpr bool& __get_invertFootCenter();

  constexpr bool const& __get_invertFootCenter() const;

  constexpr void __set_invertFootCenter(bool value);

  constexpr ::UnityEngine::RaycastHit& __get__heelHit_k__BackingField();

  constexpr ::UnityEngine::RaycastHit const& __get__heelHit_k__BackingField() const;

  constexpr void __set__heelHit_k__BackingField(::UnityEngine::RaycastHit value);

  constexpr ::UnityEngine::RaycastHit& __get__capsuleHit_k__BackingField();

  constexpr ::UnityEngine::RaycastHit const& __get__capsuleHit_k__BackingField() const;

  constexpr void __set__capsuleHit_k__BackingField(::UnityEngine::RaycastHit value);

  constexpr ::RootMotion::FinalIK::Grounding*& __get_grounding();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::Grounding*> const& __get_grounding() const;

  constexpr void __set_grounding(::RootMotion::FinalIK::Grounding* value);

  constexpr float_t& __get_lastTime();

  constexpr float_t const& __get_lastTime() const;

  constexpr void __set_lastTime(float_t value);

  constexpr float_t& __get_deltaTime();

  constexpr float_t const& __get_deltaTime() const;

  constexpr void __set_deltaTime(float_t value);

  constexpr ::UnityEngine::Vector3& __get_lastPosition();

  constexpr ::UnityEngine::Vector3 const& __get_lastPosition() const;

  constexpr void __set_lastPosition(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Quaternion& __get_toHitNormal();

  constexpr ::UnityEngine::Quaternion const& __get_toHitNormal() const;

  constexpr void __set_toHitNormal(::UnityEngine::Quaternion value);

  constexpr ::UnityEngine::Quaternion& __get_r();

  constexpr ::UnityEngine::Quaternion const& __get_r() const;

  constexpr void __set_r(::UnityEngine::Quaternion value);

  constexpr ::UnityEngine::Vector3& __get_up();

  constexpr ::UnityEngine::Vector3 const& __get_up() const;

  constexpr void __set_up(::UnityEngine::Vector3 value);

  constexpr bool& __get_doOverrideFootPosition();

  constexpr bool const& __get_doOverrideFootPosition() const;

  constexpr void __set_doOverrideFootPosition(bool value);

  constexpr ::UnityEngine::Vector3& __get_overrideFootPosition();

  constexpr ::UnityEngine::Vector3 const& __get_overrideFootPosition() const;

  constexpr void __set_overrideFootPosition(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get_transformPosition();

  constexpr ::UnityEngine::Vector3 const& __get_transformPosition() const;

  constexpr void __set_transformPosition(::UnityEngine::Vector3 value);

  /// @brief Method get_isGrounded, addr 0x124d1a0, size 0x8, virtual false, abstract: false, final false
  inline bool get_isGrounded();

  /// @brief Method set_isGrounded, addr 0x124d1a8, size 0xc, virtual false, abstract: false, final false
  inline void set_isGrounded(bool value);

  /// @brief Method get_IKPosition, addr 0x124d1b4, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_IKPosition();

  /// @brief Method set_IKPosition, addr 0x124d1c0, size 0xc, virtual false, abstract: false, final false
  inline void set_IKPosition(::UnityEngine::Vector3 value);

  /// @brief Method get_initiated, addr 0x124d1cc, size 0x8, virtual false, abstract: false, final false
  inline bool get_initiated();

  /// @brief Method set_initiated, addr 0x124d1d4, size 0xc, virtual false, abstract: false, final false
  inline void set_initiated(bool value);

  /// @brief Method get_heightFromGround, addr 0x124d1e0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_heightFromGround();

  /// @brief Method set_heightFromGround, addr 0x124d1e8, size 0x8, virtual false, abstract: false, final false
  inline void set_heightFromGround(float_t value);

  /// @brief Method get_velocity, addr 0x124d1f0, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_velocity();

  /// @brief Method set_velocity, addr 0x124d1fc, size 0xc, virtual false, abstract: false, final false
  inline void set_velocity(::UnityEngine::Vector3 value);

  /// @brief Method get_transform, addr 0x124d208, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Transform* get_transform();

  /// @brief Method set_transform, addr 0x124d210, size 0x8, virtual false, abstract: false, final false
  inline void set_transform(::UnityEngine::Transform* value);

  /// @brief Method get_IKOffset, addr 0x124d218, size 0x8, virtual false, abstract: false, final false
  inline float_t get_IKOffset();

  /// @brief Method set_IKOffset, addr 0x124d220, size 0x8, virtual false, abstract: false, final false
  inline void set_IKOffset(float_t value);

  /// @brief Method get_heelHit, addr 0x124d228, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::RaycastHit get_heelHit();

  /// @brief Method set_heelHit, addr 0x124d240, size 0x20, virtual false, abstract: false, final false
  inline void set_heelHit(::UnityEngine::RaycastHit value);

  /// @brief Method get_capsuleHit, addr 0x124d260, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::RaycastHit get_capsuleHit();

  /// @brief Method set_capsuleHit, addr 0x124d278, size 0x20, virtual false, abstract: false, final false
  inline void set_capsuleHit(::UnityEngine::RaycastHit value);

  /// @brief Method get_GetHitPoint, addr 0x124d298, size 0x48, virtual false, abstract: false, final false
  inline ::UnityEngine::RaycastHit get_GetHitPoint();

  /// @brief Method SetFootPosition, addr 0x124d2e0, size 0x14, virtual false, abstract: false, final false
  inline void SetFootPosition(::UnityEngine::Vector3 position);

  /// @brief Method Initiate, addr 0x124c308, size 0xc8, virtual false, abstract: false, final false
  inline void Initiate(::RootMotion::FinalIK::Grounding* grounding, ::UnityEngine::Transform* transform);

  /// @brief Method OnEnable, addr 0x124d2f4, size 0x40, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method Reset, addr 0x124ce10, size 0x94, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method Process, addr 0x124c3f8, size 0x798, virtual false, abstract: false, final false
  inline void Process();

  /// @brief Method get_stepHeightFromGround, addr 0x124db80, size 0x34, virtual false, abstract: false, final false
  inline float_t get_stepHeightFromGround();

  /// @brief Method GetCapsuleHit, addr 0x124d794, size 0x3ec, virtual false, abstract: false, final false
  inline ::UnityEngine::RaycastHit GetCapsuleHit(::UnityEngine::Vector3 offsetFromHeel);

  /// @brief Method GetRaycastHit, addr 0x124d334, size 0x2c8, virtual false, abstract: false, final false
  inline ::UnityEngine::RaycastHit GetRaycastHit(::UnityEngine::Vector3 offsetFromHeel);

  /// @brief Method RotateNormal, addr 0x124dc14, size 0x6c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 RotateNormal(::UnityEngine::Vector3 normal);

  /// @brief Method SetFootToPoint, addr 0x124d5fc, size 0x80, virtual false, abstract: false, final false
  inline void SetFootToPoint(::UnityEngine::Vector3 normal, ::UnityEngine::Vector3 point);

  /// @brief Method SetFootToPlane, addr 0x124d67c, size 0x118, virtual false, abstract: false, final false
  inline void SetFootToPlane(::UnityEngine::Vector3 planeNormal, ::UnityEngine::Vector3 planePoint, ::UnityEngine::Vector3 heelHitPoint);

  /// @brief Method GetHeightFromGround, addr 0x124dc80, size 0x50, virtual false, abstract: false, final false
  inline float_t GetHeightFromGround(::UnityEngine::Vector3 hitPoint);

  /// @brief Method RotateFoot, addr 0x124dbb4, size 0x60, virtual false, abstract: false, final false
  inline void RotateFoot();

  /// @brief Method GetRotationOffsetTarget, addr 0x124dd5c, size 0x1b0, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion GetRotationOffsetTarget();

  /// @brief Method get_rootYOffset, addr 0x124dcd0, size 0x8c, virtual false, abstract: false, final false
  inline float_t get_rootYOffset();

  static inline ::RootMotion::FinalIK::__Grounding__Leg* New_ctor();

  /// @brief Method .ctor, addr 0x124c268, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__Grounding__Leg", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Grounding__Leg(__Grounding__Leg&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Grounding__Leg", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Grounding__Leg(__Grounding__Leg const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Grounding__Leg();

public:
  /// @brief Field <isGrounded>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____isGrounded_k__BackingField;

  /// @brief Field <IKPosition>k__BackingField, offset: 0x14, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____IKPosition_k__BackingField;

  /// @brief Field rotationOffset, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___rotationOffset;

  /// @brief Field <initiated>k__BackingField, offset: 0x30, size: 0x1, def value: None
  bool ____initiated_k__BackingField;

  /// @brief Field <heightFromGround>k__BackingField, offset: 0x34, size: 0x4, def value: None
  float_t ____heightFromGround_k__BackingField;

  /// @brief Field <velocity>k__BackingField, offset: 0x38, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____velocity_k__BackingField;

  /// @brief Field <transform>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Transform* ____transform_k__BackingField;

  /// @brief Field <IKOffset>k__BackingField, offset: 0x50, size: 0x4, def value: None
  float_t ____IKOffset_k__BackingField;

  /// @brief Field invertFootCenter, offset: 0x54, size: 0x1, def value: None
  bool ___invertFootCenter;

  /// @brief Field <heelHit>k__BackingField, offset: 0x58, size: 0x2c, def value: None
  ::UnityEngine::RaycastHit ____heelHit_k__BackingField;

  /// @brief Field <capsuleHit>k__BackingField, offset: 0x84, size: 0x2c, def value: None
  ::UnityEngine::RaycastHit ____capsuleHit_k__BackingField;

  /// @brief Field grounding, offset: 0xb0, size: 0x8, def value: None
  ::RootMotion::FinalIK::Grounding* ___grounding;

  /// @brief Field lastTime, offset: 0xb8, size: 0x4, def value: None
  float_t ___lastTime;

  /// @brief Field deltaTime, offset: 0xbc, size: 0x4, def value: None
  float_t ___deltaTime;

  /// @brief Field lastPosition, offset: 0xc0, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___lastPosition;

  /// @brief Field toHitNormal, offset: 0xcc, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___toHitNormal;

  /// @brief Field r, offset: 0xdc, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___r;

  /// @brief Field up, offset: 0xec, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___up;

  /// @brief Field doOverrideFootPosition, offset: 0xf8, size: 0x1, def value: None
  bool ___doOverrideFootPosition;

  /// @brief Field overrideFootPosition, offset: 0xfc, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___overrideFootPosition;

  /// @brief Field transformPosition, offset: 0x108, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___transformPosition;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__Grounding__Leg, 0x118>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__Grounding__Leg, ____isGrounded_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__Grounding__Leg, ____IKPosition_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__Grounding__Leg, ___rotationOffset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__Grounding__Leg, ____initiated_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__Grounding__Leg, ____heightFromGround_k__BackingField) == 0x34, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__Grounding__Leg, ____velocity_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__Grounding__Leg, ____transform_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__Grounding__Leg, ____IKOffset_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__Grounding__Leg, ___invertFootCenter) == 0x54, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__Grounding__Leg, ____heelHit_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__Grounding__Leg, ____capsuleHit_k__BackingField) == 0x84, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__Grounding__Leg, ___grounding) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__Grounding__Leg, ___lastTime) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__Grounding__Leg, ___deltaTime) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__Grounding__Leg, ___lastPosition) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__Grounding__Leg, ___toHitNormal) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__Grounding__Leg, ___r) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__Grounding__Leg, ___up) == 0xec, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__Grounding__Leg, ___doOverrideFootPosition) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__Grounding__Leg, ___overrideFootPosition) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__Grounding__Leg, ___transformPosition) == 0x108, "Offset mismatch!");

} // namespace RootMotion::FinalIK
// Type: ::Pelvis
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10249)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12528))
// CS Name: ::Grounding::Pelvis*
class CORDL_TYPE __Grounding__Pelvis : public ::System::Object {
public:
  // Declarations
  /// @brief Field <IKOffset>k__BackingField, offset 0x10, size 0xc
  __declspec(property(get = __get__IKOffset_k__BackingField, put = __set__IKOffset_k__BackingField))::UnityEngine::Vector3 _IKOffset_k__BackingField;

  /// @brief Field <heightOffset>k__BackingField, offset 0x1c, size 0x4
  __declspec(property(get = __get__heightOffset_k__BackingField, put = __set__heightOffset_k__BackingField)) float_t _heightOffset_k__BackingField;

  /// @brief Field grounding, offset 0x20, size 0x8
  __declspec(property(get = __get_grounding, put = __set_grounding))::RootMotion::FinalIK::Grounding* grounding;

  /// @brief Field lastRootPosition, offset 0x28, size 0xc
  __declspec(property(get = __get_lastRootPosition, put = __set_lastRootPosition))::UnityEngine::Vector3 lastRootPosition;

  /// @brief Field damperF, offset 0x34, size 0x4
  __declspec(property(get = __get_damperF, put = __set_damperF)) float_t damperF;

  /// @brief Field initiated, offset 0x38, size 0x1
  __declspec(property(get = __get_initiated, put = __set_initiated)) bool initiated;

  /// @brief Field lastTime, offset 0x3c, size 0x4
  __declspec(property(get = __get_lastTime, put = __set_lastTime)) float_t lastTime;

  __declspec(property(get = get_IKOffset, put = set_IKOffset))::UnityEngine::Vector3 IKOffset;

  __declspec(property(get = get_heightOffset, put = set_heightOffset)) float_t heightOffset;

  constexpr ::UnityEngine::Vector3& __get__IKOffset_k__BackingField();

  constexpr ::UnityEngine::Vector3 const& __get__IKOffset_k__BackingField() const;

  constexpr void __set__IKOffset_k__BackingField(::UnityEngine::Vector3 value);

  constexpr float_t& __get__heightOffset_k__BackingField();

  constexpr float_t const& __get__heightOffset_k__BackingField() const;

  constexpr void __set__heightOffset_k__BackingField(float_t value);

  constexpr ::RootMotion::FinalIK::Grounding*& __get_grounding();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::Grounding*> const& __get_grounding() const;

  constexpr void __set_grounding(::RootMotion::FinalIK::Grounding* value);

  constexpr ::UnityEngine::Vector3& __get_lastRootPosition();

  constexpr ::UnityEngine::Vector3 const& __get_lastRootPosition() const;

  constexpr void __set_lastRootPosition(::UnityEngine::Vector3 value);

  constexpr float_t& __get_damperF();

  constexpr float_t const& __get_damperF() const;

  constexpr void __set_damperF(float_t value);

  constexpr bool& __get_initiated();

  constexpr bool const& __get_initiated() const;

  constexpr void __set_initiated(bool value);

  constexpr float_t& __get_lastTime();

  constexpr float_t const& __get_lastTime() const;

  constexpr void __set_lastTime(float_t value);

  /// @brief Method get_IKOffset, addr 0x124df0c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_IKOffset();

  /// @brief Method set_IKOffset, addr 0x124df18, size 0xc, virtual false, abstract: false, final false
  inline void set_IKOffset(::UnityEngine::Vector3 value);

  /// @brief Method get_heightOffset, addr 0x124df24, size 0x8, virtual false, abstract: false, final false
  inline float_t get_heightOffset();

  /// @brief Method set_heightOffset, addr 0x124df2c, size 0x8, virtual false, abstract: false, final false
  inline void set_heightOffset(float_t value);

  /// @brief Method Initiate, addr 0x124c3d0, size 0x10, virtual false, abstract: false, final false
  inline void Initiate(::RootMotion::FinalIK::Grounding* grounding);

  /// @brief Method Reset, addr 0x124cd7c, size 0x94, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method OnEnable, addr 0x124df34, size 0x54, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method Process, addr 0x124cb90, size 0x1ec, virtual false, abstract: false, final false
  inline void Process(float_t lowestOffset, float_t highestOffset, bool isGrounded);

  static inline ::RootMotion::FinalIK::__Grounding__Pelvis* New_ctor();

  /// @brief Method .ctor, addr 0x124c300, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__Grounding__Pelvis", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Grounding__Pelvis(__Grounding__Pelvis&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Grounding__Pelvis", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Grounding__Pelvis(__Grounding__Pelvis const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Grounding__Pelvis();

public:
  /// @brief Field <IKOffset>k__BackingField, offset: 0x10, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____IKOffset_k__BackingField;

  /// @brief Field <heightOffset>k__BackingField, offset: 0x1c, size: 0x4, def value: None
  float_t ____heightOffset_k__BackingField;

  /// @brief Field grounding, offset: 0x20, size: 0x8, def value: None
  ::RootMotion::FinalIK::Grounding* ___grounding;

  /// @brief Field lastRootPosition, offset: 0x28, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___lastRootPosition;

  /// @brief Field damperF, offset: 0x34, size: 0x4, def value: None
  float_t ___damperF;

  /// @brief Field initiated, offset: 0x38, size: 0x1, def value: None
  bool ___initiated;

  /// @brief Field lastTime, offset: 0x3c, size: 0x4, def value: None
  float_t ___lastTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__Grounding__Pelvis, 0x40>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__Grounding__Pelvis, ____IKOffset_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__Grounding__Pelvis, ____heightOffset_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__Grounding__Pelvis, ___grounding) == 0x20, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__Grounding__Pelvis, ___lastRootPosition) == 0x28, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__Grounding__Pelvis, ___damperF) == 0x34, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__Grounding__Pelvis, ___initiated) == 0x38, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__Grounding__Pelvis, ___lastTime) == 0x3c, "Offset mismatch!");

} // namespace RootMotion::FinalIK
// Type: RootMotion.FinalIK::Grounding
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 165, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10204)), TypeDefinitionIndex(TypeDefinitionIndex(15487)),
// TypeDefinitionIndex(TypeDefinitionIndex(12526))} Self: TypeDefinitionIndex(TypeDefinitionIndex(12529)) CS Name: ::RootMotion.FinalIK::Grounding*
class CORDL_TYPE Grounding : public ::System::Object {
public:
  // Declarations
  using Pelvis = ::RootMotion::FinalIK::__Grounding__Pelvis;

  using Leg = ::RootMotion::FinalIK::__Grounding__Leg;

  using Quality = ::RootMotion::FinalIK::__Grounding__Quality;

  /// @brief Field layers, offset 0x10, size 0x4
  __declspec(property(get = __get_layers, put = __set_layers))::UnityEngine::LayerMask layers;

  /// @brief Field maxStep, offset 0x14, size 0x4
  __declspec(property(get = __get_maxStep, put = __set_maxStep)) float_t maxStep;

  /// @brief Field heightOffset, offset 0x18, size 0x4
  __declspec(property(get = __get_heightOffset, put = __set_heightOffset)) float_t heightOffset;

  /// @brief Field footSpeed, offset 0x1c, size 0x4
  __declspec(property(get = __get_footSpeed, put = __set_footSpeed)) float_t footSpeed;

  /// @brief Field footRadius, offset 0x20, size 0x4
  __declspec(property(get = __get_footRadius, put = __set_footRadius)) float_t footRadius;

  /// @brief Field footCenterOffset, offset 0x24, size 0x4
  __declspec(property(get = __get_footCenterOffset, put = __set_footCenterOffset)) float_t footCenterOffset;

  /// @brief Field prediction, offset 0x28, size 0x4
  __declspec(property(get = __get_prediction, put = __set_prediction)) float_t prediction;

  /// @brief Field footRotationWeight, offset 0x2c, size 0x4
  __declspec(property(get = __get_footRotationWeight, put = __set_footRotationWeight)) float_t footRotationWeight;

  /// @brief Field footRotationSpeed, offset 0x30, size 0x4
  __declspec(property(get = __get_footRotationSpeed, put = __set_footRotationSpeed)) float_t footRotationSpeed;

  /// @brief Field maxFootRotationAngle, offset 0x34, size 0x4
  __declspec(property(get = __get_maxFootRotationAngle, put = __set_maxFootRotationAngle)) float_t maxFootRotationAngle;

  /// @brief Field rotateSolver, offset 0x38, size 0x1
  __declspec(property(get = __get_rotateSolver, put = __set_rotateSolver)) bool rotateSolver;

  /// @brief Field pelvisSpeed, offset 0x3c, size 0x4
  __declspec(property(get = __get_pelvisSpeed, put = __set_pelvisSpeed)) float_t pelvisSpeed;

  /// @brief Field pelvisDamper, offset 0x40, size 0x4
  __declspec(property(get = __get_pelvisDamper, put = __set_pelvisDamper)) float_t pelvisDamper;

  /// @brief Field lowerPelvisWeight, offset 0x44, size 0x4
  __declspec(property(get = __get_lowerPelvisWeight, put = __set_lowerPelvisWeight)) float_t lowerPelvisWeight;

  /// @brief Field liftPelvisWeight, offset 0x48, size 0x4
  __declspec(property(get = __get_liftPelvisWeight, put = __set_liftPelvisWeight)) float_t liftPelvisWeight;

  /// @brief Field rootSphereCastRadius, offset 0x4c, size 0x4
  __declspec(property(get = __get_rootSphereCastRadius, put = __set_rootSphereCastRadius)) float_t rootSphereCastRadius;

  /// @brief Field overstepFallsDown, offset 0x50, size 0x1
  __declspec(property(get = __get_overstepFallsDown, put = __set_overstepFallsDown)) bool overstepFallsDown;

  /// @brief Field quality, offset 0x54, size 0x4
  __declspec(property(get = __get_quality, put = __set_quality))::RootMotion::FinalIK::__Grounding__Quality quality;

  /// @brief Field <legs>k__BackingField, offset 0x58, size 0x8
  __declspec(property(get = __get__legs_k__BackingField,
                      put = __set__legs_k__BackingField))::ArrayW<::RootMotion::FinalIK::__Grounding__Leg*, ::Array<::RootMotion::FinalIK::__Grounding__Leg*>*> _legs_k__BackingField;

  /// @brief Field <pelvis>k__BackingField, offset 0x60, size 0x8
  __declspec(property(get = __get__pelvis_k__BackingField, put = __set__pelvis_k__BackingField))::RootMotion::FinalIK::__Grounding__Pelvis* _pelvis_k__BackingField;

  /// @brief Field <isGrounded>k__BackingField, offset 0x68, size 0x1
  __declspec(property(get = __get__isGrounded_k__BackingField, put = __set__isGrounded_k__BackingField)) bool _isGrounded_k__BackingField;

  /// @brief Field <root>k__BackingField, offset 0x70, size 0x8
  __declspec(property(get = __get__root_k__BackingField, put = __set__root_k__BackingField))::UnityEngine::Transform* _root_k__BackingField;

  /// @brief Field <rootHit>k__BackingField, offset 0x78, size 0x2c
  __declspec(property(get = __get__rootHit_k__BackingField, put = __set__rootHit_k__BackingField))::UnityEngine::RaycastHit _rootHit_k__BackingField;

  /// @brief Field initiated, offset 0xa4, size 0x1
  __declspec(property(get = __get_initiated, put = __set_initiated)) bool initiated;

  __declspec(property(get = get_legs, put = set_legs))::ArrayW<::RootMotion::FinalIK::__Grounding__Leg*, ::Array<::RootMotion::FinalIK::__Grounding__Leg*>*> legs;

  __declspec(property(get = get_pelvis, put = set_pelvis))::RootMotion::FinalIK::__Grounding__Pelvis* pelvis;

  __declspec(property(get = get_isGrounded, put = set_isGrounded)) bool isGrounded;

  __declspec(property(get = get_root, put = set_root))::UnityEngine::Transform* root;

  __declspec(property(get = get_rootHit, put = set_rootHit))::UnityEngine::RaycastHit rootHit;

  __declspec(property(get = get_rootGrounded)) bool rootGrounded;

  __declspec(property(get = get_up))::UnityEngine::Vector3 up;

  __declspec(property(get = get_useRootRotation)) bool useRootRotation;

  constexpr ::UnityEngine::LayerMask& __get_layers();

  constexpr ::UnityEngine::LayerMask const& __get_layers() const;

  constexpr void __set_layers(::UnityEngine::LayerMask value);

  constexpr float_t& __get_maxStep();

  constexpr float_t const& __get_maxStep() const;

  constexpr void __set_maxStep(float_t value);

  constexpr float_t& __get_heightOffset();

  constexpr float_t const& __get_heightOffset() const;

  constexpr void __set_heightOffset(float_t value);

  constexpr float_t& __get_footSpeed();

  constexpr float_t const& __get_footSpeed() const;

  constexpr void __set_footSpeed(float_t value);

  constexpr float_t& __get_footRadius();

  constexpr float_t const& __get_footRadius() const;

  constexpr void __set_footRadius(float_t value);

  constexpr float_t& __get_footCenterOffset();

  constexpr float_t const& __get_footCenterOffset() const;

  constexpr void __set_footCenterOffset(float_t value);

  constexpr float_t& __get_prediction();

  constexpr float_t const& __get_prediction() const;

  constexpr void __set_prediction(float_t value);

  constexpr float_t& __get_footRotationWeight();

  constexpr float_t const& __get_footRotationWeight() const;

  constexpr void __set_footRotationWeight(float_t value);

  constexpr float_t& __get_footRotationSpeed();

  constexpr float_t const& __get_footRotationSpeed() const;

  constexpr void __set_footRotationSpeed(float_t value);

  constexpr float_t& __get_maxFootRotationAngle();

  constexpr float_t const& __get_maxFootRotationAngle() const;

  constexpr void __set_maxFootRotationAngle(float_t value);

  constexpr bool& __get_rotateSolver();

  constexpr bool const& __get_rotateSolver() const;

  constexpr void __set_rotateSolver(bool value);

  constexpr float_t& __get_pelvisSpeed();

  constexpr float_t const& __get_pelvisSpeed() const;

  constexpr void __set_pelvisSpeed(float_t value);

  constexpr float_t& __get_pelvisDamper();

  constexpr float_t const& __get_pelvisDamper() const;

  constexpr void __set_pelvisDamper(float_t value);

  constexpr float_t& __get_lowerPelvisWeight();

  constexpr float_t const& __get_lowerPelvisWeight() const;

  constexpr void __set_lowerPelvisWeight(float_t value);

  constexpr float_t& __get_liftPelvisWeight();

  constexpr float_t const& __get_liftPelvisWeight() const;

  constexpr void __set_liftPelvisWeight(float_t value);

  constexpr float_t& __get_rootSphereCastRadius();

  constexpr float_t const& __get_rootSphereCastRadius() const;

  constexpr void __set_rootSphereCastRadius(float_t value);

  constexpr bool& __get_overstepFallsDown();

  constexpr bool const& __get_overstepFallsDown() const;

  constexpr void __set_overstepFallsDown(bool value);

  constexpr ::RootMotion::FinalIK::__Grounding__Quality& __get_quality();

  constexpr ::RootMotion::FinalIK::__Grounding__Quality const& __get_quality() const;

  constexpr void __set_quality(::RootMotion::FinalIK::__Grounding__Quality value);

  constexpr ::ArrayW<::RootMotion::FinalIK::__Grounding__Leg*, ::Array<::RootMotion::FinalIK::__Grounding__Leg*>*>& __get__legs_k__BackingField();

  constexpr ::ArrayW<::RootMotion::FinalIK::__Grounding__Leg*, ::Array<::RootMotion::FinalIK::__Grounding__Leg*>*> const& __get__legs_k__BackingField() const;

  constexpr void __set__legs_k__BackingField(::ArrayW<::RootMotion::FinalIK::__Grounding__Leg*, ::Array<::RootMotion::FinalIK::__Grounding__Leg*>*> value);

  constexpr ::RootMotion::FinalIK::__Grounding__Pelvis*& __get__pelvis_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__Grounding__Pelvis*> const& __get__pelvis_k__BackingField() const;

  constexpr void __set__pelvis_k__BackingField(::RootMotion::FinalIK::__Grounding__Pelvis* value);

  constexpr bool& __get__isGrounded_k__BackingField();

  constexpr bool const& __get__isGrounded_k__BackingField() const;

  constexpr void __set__isGrounded_k__BackingField(bool value);

  constexpr ::UnityEngine::Transform*& __get__root_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__root_k__BackingField() const;

  constexpr void __set__root_k__BackingField(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::RaycastHit& __get__rootHit_k__BackingField();

  constexpr ::UnityEngine::RaycastHit const& __get__rootHit_k__BackingField() const;

  constexpr void __set__rootHit_k__BackingField(::UnityEngine::RaycastHit value);

  constexpr bool& __get_initiated();

  constexpr bool const& __get_initiated() const;

  constexpr void __set_initiated(bool value);

  /// @brief Method get_legs, addr 0x124bde0, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::RootMotion::FinalIK::__Grounding__Leg*, ::Array<::RootMotion::FinalIK::__Grounding__Leg*>*> get_legs();

  /// @brief Method set_legs, addr 0x124bde8, size 0x8, virtual false, abstract: false, final false
  inline void set_legs(::ArrayW<::RootMotion::FinalIK::__Grounding__Leg*, ::Array<::RootMotion::FinalIK::__Grounding__Leg*>*> value);

  /// @brief Method get_pelvis, addr 0x124bdf0, size 0x8, virtual false, abstract: false, final false
  inline ::RootMotion::FinalIK::__Grounding__Pelvis* get_pelvis();

  /// @brief Method set_pelvis, addr 0x124bdf8, size 0x8, virtual false, abstract: false, final false
  inline void set_pelvis(::RootMotion::FinalIK::__Grounding__Pelvis* value);

  /// @brief Method get_isGrounded, addr 0x124be00, size 0x8, virtual false, abstract: false, final false
  inline bool get_isGrounded();

  /// @brief Method set_isGrounded, addr 0x124be08, size 0xc, virtual false, abstract: false, final false
  inline void set_isGrounded(bool value);

  /// @brief Method get_root, addr 0x124be14, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Transform* get_root();

  /// @brief Method set_root, addr 0x124be1c, size 0x8, virtual false, abstract: false, final false
  inline void set_root(::UnityEngine::Transform* value);

  /// @brief Method get_rootHit, addr 0x124be24, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::RaycastHit get_rootHit();

  /// @brief Method set_rootHit, addr 0x124be3c, size 0x20, virtual false, abstract: false, final false
  inline void set_rootHit(::UnityEngine::RaycastHit value);

  /// @brief Method get_rootGrounded, addr 0x124be5c, size 0x48, virtual false, abstract: false, final false
  inline bool get_rootGrounded();

  /// @brief Method GetRootHit, addr 0x124bea4, size 0x260, virtual false, abstract: false, final false
  inline ::UnityEngine::RaycastHit GetRootHit(float_t maxDistanceMlp);

  /// @brief Method IsValid, addr 0x124c16c, size 0xfc, virtual false, abstract: false, final false
  inline bool IsValid(ByRef<::StringW> errorMessage);

  /// @brief Method Initiate, addr 0x1246bbc, size 0x274, virtual false, abstract: false, final false
  inline void Initiate(::UnityEngine::Transform* root, ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> feet);

  /// @brief Method Update, addr 0x12471a4, size 0x1f4, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method GetLegsPlaneNormal, addr 0x1248140, size 0x178, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetLegsPlaneNormal();

  /// @brief Method Reset, addr 0x1246834, size 0x78, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method LogWarning, addr 0x124c3e0, size 0x18, virtual false, abstract: false, final false
  inline void LogWarning(::StringW message);

  /// @brief Method get_up, addr 0x124c104, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_up();

  /// @brief Method GetVerticalOffset, addr 0x124cf58, size 0x84, virtual false, abstract: false, final false
  inline float_t GetVerticalOffset(::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 p2);

  /// @brief Method Flatten, addr 0x124cfdc, size 0x154, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 Flatten(::UnityEngine::Vector3 v);

  /// @brief Method get_useRootRotation, addr 0x124cea4, size 0xb4, virtual false, abstract: false, final false
  inline bool get_useRootRotation();

  /// @brief Method GetFootCenterOffset, addr 0x124d130, size 0x70, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetFootCenterOffset();

  static inline ::RootMotion::FinalIK::Grounding* New_ctor();

  /// @brief Method .ctor, addr 0x124b15c, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Grounding", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Grounding(Grounding&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Grounding", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Grounding(Grounding const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Grounding();

public:
  /// @brief Field layers, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::LayerMask ___layers;

  /// @brief Field maxStep, offset: 0x14, size: 0x4, def value: None
  float_t ___maxStep;

  /// @brief Field heightOffset, offset: 0x18, size: 0x4, def value: None
  float_t ___heightOffset;

  /// @brief Field footSpeed, offset: 0x1c, size: 0x4, def value: None
  float_t ___footSpeed;

  /// @brief Field footRadius, offset: 0x20, size: 0x4, def value: None
  float_t ___footRadius;

  /// @brief Field footCenterOffset, offset: 0x24, size: 0x4, def value: None
  float_t ___footCenterOffset;

  /// @brief Field prediction, offset: 0x28, size: 0x4, def value: None
  float_t ___prediction;

  /// @brief Field footRotationWeight, offset: 0x2c, size: 0x4, def value: None
  float_t ___footRotationWeight;

  /// @brief Field footRotationSpeed, offset: 0x30, size: 0x4, def value: None
  float_t ___footRotationSpeed;

  /// @brief Field maxFootRotationAngle, offset: 0x34, size: 0x4, def value: None
  float_t ___maxFootRotationAngle;

  /// @brief Field rotateSolver, offset: 0x38, size: 0x1, def value: None
  bool ___rotateSolver;

  /// @brief Field pelvisSpeed, offset: 0x3c, size: 0x4, def value: None
  float_t ___pelvisSpeed;

  /// @brief Field pelvisDamper, offset: 0x40, size: 0x4, def value: None
  float_t ___pelvisDamper;

  /// @brief Field lowerPelvisWeight, offset: 0x44, size: 0x4, def value: None
  float_t ___lowerPelvisWeight;

  /// @brief Field liftPelvisWeight, offset: 0x48, size: 0x4, def value: None
  float_t ___liftPelvisWeight;

  /// @brief Field rootSphereCastRadius, offset: 0x4c, size: 0x4, def value: None
  float_t ___rootSphereCastRadius;

  /// @brief Field overstepFallsDown, offset: 0x50, size: 0x1, def value: None
  bool ___overstepFallsDown;

  /// @brief Field quality, offset: 0x54, size: 0x4, def value: None
  ::RootMotion::FinalIK::__Grounding__Quality ___quality;

  /// @brief Field <legs>k__BackingField, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<::RootMotion::FinalIK::__Grounding__Leg*, ::Array<::RootMotion::FinalIK::__Grounding__Leg*>*> ____legs_k__BackingField;

  /// @brief Field <pelvis>k__BackingField, offset: 0x60, size: 0x8, def value: None
  ::RootMotion::FinalIK::__Grounding__Pelvis* ____pelvis_k__BackingField;

  /// @brief Field <isGrounded>k__BackingField, offset: 0x68, size: 0x1, def value: None
  bool ____isGrounded_k__BackingField;

  /// @brief Field <root>k__BackingField, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::Transform* ____root_k__BackingField;

  /// @brief Field <rootHit>k__BackingField, offset: 0x78, size: 0x2c, def value: None
  ::UnityEngine::RaycastHit ____rootHit_k__BackingField;

  /// @brief Field initiated, offset: 0xa4, size: 0x1, def value: None
  bool ___initiated;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::Grounding, 0xa8>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::Grounding, ___layers) == 0x10, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::Grounding, ___maxStep) == 0x14, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::Grounding, ___heightOffset) == 0x18, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::Grounding, ___footSpeed) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::Grounding, ___footRadius) == 0x20, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::Grounding, ___footCenterOffset) == 0x24, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::Grounding, ___prediction) == 0x28, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::Grounding, ___footRotationWeight) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::Grounding, ___footRotationSpeed) == 0x30, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::Grounding, ___maxFootRotationAngle) == 0x34, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::Grounding, ___rotateSolver) == 0x38, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::Grounding, ___pelvisSpeed) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::Grounding, ___pelvisDamper) == 0x40, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::Grounding, ___lowerPelvisWeight) == 0x44, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::Grounding, ___liftPelvisWeight) == 0x48, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::Grounding, ___rootSphereCastRadius) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::Grounding, ___overstepFallsDown) == 0x50, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::Grounding, ___quality) == 0x54, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::Grounding, ____legs_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::Grounding, ____pelvis_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::Grounding, ____isGrounded_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::Grounding, ____root_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::Grounding, ____rootHit_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::Grounding, ___initiated) == 0xa4, "Offset mismatch!");

} // namespace RootMotion::FinalIK
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__Grounding__Quality, "RootMotion.FinalIK", "Grounding/Quality");
NEED_NO_BOX(::RootMotion::FinalIK::Grounding);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::Grounding*, "RootMotion.FinalIK", "Grounding");
NEED_NO_BOX(::RootMotion::FinalIK::__Grounding__Leg);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__Grounding__Leg*, "RootMotion.FinalIK", "Grounding/Leg");
NEED_NO_BOX(::RootMotion::FinalIK::__Grounding__Pelvis);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__Grounding__Pelvis*, "RootMotion.FinalIK", "Grounding/Pelvis");
