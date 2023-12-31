#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PlayerTransforms)
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerTransforms;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayerTransforms);
// Type: ::PlayerTransforms
// SizeInfo { instance_size: 200, native_size: -1, calculated_instance_size: 200, calculated_native_size: 193, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10252)), TypeDefinitionIndex(TypeDefinitionIndex(10249)), TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5277))
// CS Name: ::PlayerTransforms*
class CORDL_TYPE PlayerTransforms : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _headTransform, offset 0x18, size 0x8
  __declspec(property(get = __get__headTransform, put = __set__headTransform))::UnityEngine::Transform* _headTransform;

  /// @brief Field _originTransform, offset 0x20, size 0x8
  __declspec(property(get = __get__originTransform, put = __set__originTransform))::UnityEngine::Transform* _originTransform;

  /// @brief Field _leftHandTransform, offset 0x28, size 0x8
  __declspec(property(get = __get__leftHandTransform, put = __set__leftHandTransform))::UnityEngine::Transform* _leftHandTransform;

  /// @brief Field _rightHandTransform, offset 0x30, size 0x8
  __declspec(property(get = __get__rightHandTransform, put = __set__rightHandTransform))::UnityEngine::Transform* _rightHandTransform;

  /// @brief Field _overrideHeadPos, offset 0x38, size 0x1
  __declspec(property(get = __get__overrideHeadPos, put = __set__overrideHeadPos)) bool _overrideHeadPos;

  /// @brief Field _overriddenHeadPos, offset 0x3c, size 0xc
  __declspec(property(get = __get__overriddenHeadPos, put = __set__overriddenHeadPos))::UnityEngine::Vector3 _overriddenHeadPos;

  /// @brief Field _headWorldPos, offset 0x48, size 0xc
  __declspec(property(get = __get__headWorldPos, put = __set__headWorldPos))::UnityEngine::Vector3 _headWorldPos;

  /// @brief Field _headWorldRot, offset 0x54, size 0x10
  __declspec(property(get = __get__headWorldRot, put = __set__headWorldRot))::UnityEngine::Quaternion _headWorldRot;

  /// @brief Field _headPseudoLocalPos, offset 0x64, size 0xc
  __declspec(property(get = __get__headPseudoLocalPos, put = __set__headPseudoLocalPos))::UnityEngine::Vector3 _headPseudoLocalPos;

  /// @brief Field _headPseudoLocalRot, offset 0x70, size 0x10
  __declspec(property(get = __get__headPseudoLocalRot, put = __set__headPseudoLocalRot))::UnityEngine::Quaternion _headPseudoLocalRot;

  /// @brief Field _leftHandPseudoLocalPos, offset 0x80, size 0xc
  __declspec(property(get = __get__leftHandPseudoLocalPos, put = __set__leftHandPseudoLocalPos))::UnityEngine::Vector3 _leftHandPseudoLocalPos;

  /// @brief Field _leftHandPseudoLocalRot, offset 0x8c, size 0x10
  __declspec(property(get = __get__leftHandPseudoLocalRot, put = __set__leftHandPseudoLocalRot))::UnityEngine::Quaternion _leftHandPseudoLocalRot;

  /// @brief Field _rightHandPseudoLocalPos, offset 0x9c, size 0xc
  __declspec(property(get = __get__rightHandPseudoLocalPos, put = __set__rightHandPseudoLocalPos))::UnityEngine::Vector3 _rightHandPseudoLocalPos;

  /// @brief Field _rightHandPseudoLocalRot, offset 0xa8, size 0x10
  __declspec(property(get = __get__rightHandPseudoLocalRot, put = __set__rightHandPseudoLocalRot))::UnityEngine::Quaternion _rightHandPseudoLocalRot;

  /// @brief Field _originParentTransform, offset 0xb8, size 0x8
  __declspec(property(get = __get__originParentTransform, put = __set__originParentTransform))::UnityEngine::Transform* _originParentTransform;

  /// @brief Field _useOriginParentTransformForPseudoLocalCalculations, offset 0xc0, size 0x1
  __declspec(property(get = __get__useOriginParentTransformForPseudoLocalCalculations,
                      put = __set__useOriginParentTransformForPseudoLocalCalculations)) bool _useOriginParentTransformForPseudoLocalCalculations;

  __declspec(property(get = get_headWorldPos))::UnityEngine::Vector3 headWorldPos;

  __declspec(property(get = get_headWorldRot))::UnityEngine::Quaternion headWorldRot;

  __declspec(property(get = get_headPseudoLocalPos))::UnityEngine::Vector3 headPseudoLocalPos;

  __declspec(property(get = get_headPseudoLocalRot))::UnityEngine::Quaternion headPseudoLocalRot;

  __declspec(property(get = get_leftHandPseudoLocalPos))::UnityEngine::Vector3 leftHandPseudoLocalPos;

  __declspec(property(get = get_leftHandPseudoLocalRot))::UnityEngine::Quaternion leftHandPseudoLocalRot;

  __declspec(property(get = get_rightHandPseudoLocalPos))::UnityEngine::Vector3 rightHandPseudoLocalPos;

  __declspec(property(get = get_rightHandPseudoLocalRot))::UnityEngine::Quaternion rightHandPseudoLocalRot;

  constexpr ::UnityEngine::Transform*& __get__headTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__headTransform() const;

  constexpr void __set__headTransform(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get__originTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__originTransform() const;

  constexpr void __set__originTransform(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get__leftHandTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__leftHandTransform() const;

  constexpr void __set__leftHandTransform(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get__rightHandTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__rightHandTransform() const;

  constexpr void __set__rightHandTransform(::UnityEngine::Transform* value);

  constexpr bool& __get__overrideHeadPos();

  constexpr bool const& __get__overrideHeadPos() const;

  constexpr void __set__overrideHeadPos(bool value);

  constexpr ::UnityEngine::Vector3& __get__overriddenHeadPos();

  constexpr ::UnityEngine::Vector3 const& __get__overriddenHeadPos() const;

  constexpr void __set__overriddenHeadPos(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get__headWorldPos();

  constexpr ::UnityEngine::Vector3 const& __get__headWorldPos() const;

  constexpr void __set__headWorldPos(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Quaternion& __get__headWorldRot();

  constexpr ::UnityEngine::Quaternion const& __get__headWorldRot() const;

  constexpr void __set__headWorldRot(::UnityEngine::Quaternion value);

  constexpr ::UnityEngine::Vector3& __get__headPseudoLocalPos();

  constexpr ::UnityEngine::Vector3 const& __get__headPseudoLocalPos() const;

  constexpr void __set__headPseudoLocalPos(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Quaternion& __get__headPseudoLocalRot();

  constexpr ::UnityEngine::Quaternion const& __get__headPseudoLocalRot() const;

  constexpr void __set__headPseudoLocalRot(::UnityEngine::Quaternion value);

  constexpr ::UnityEngine::Vector3& __get__leftHandPseudoLocalPos();

  constexpr ::UnityEngine::Vector3 const& __get__leftHandPseudoLocalPos() const;

  constexpr void __set__leftHandPseudoLocalPos(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Quaternion& __get__leftHandPseudoLocalRot();

  constexpr ::UnityEngine::Quaternion const& __get__leftHandPseudoLocalRot() const;

  constexpr void __set__leftHandPseudoLocalRot(::UnityEngine::Quaternion value);

  constexpr ::UnityEngine::Vector3& __get__rightHandPseudoLocalPos();

  constexpr ::UnityEngine::Vector3 const& __get__rightHandPseudoLocalPos() const;

  constexpr void __set__rightHandPseudoLocalPos(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Quaternion& __get__rightHandPseudoLocalRot();

  constexpr ::UnityEngine::Quaternion const& __get__rightHandPseudoLocalRot() const;

  constexpr void __set__rightHandPseudoLocalRot(::UnityEngine::Quaternion value);

  constexpr ::UnityEngine::Transform*& __get__originParentTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__originParentTransform() const;

  constexpr void __set__originParentTransform(::UnityEngine::Transform* value);

  constexpr bool& __get__useOriginParentTransformForPseudoLocalCalculations();

  constexpr bool const& __get__useOriginParentTransformForPseudoLocalCalculations() const;

  constexpr void __set__useOriginParentTransformForPseudoLocalCalculations(bool value);

  /// @brief Method get_headWorldPos, addr 0x2260d2c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_headWorldPos();

  /// @brief Method get_headWorldRot, addr 0x2260d38, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_headWorldRot();

  /// @brief Method get_headPseudoLocalPos, addr 0x2260d44, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_headPseudoLocalPos();

  /// @brief Method get_headPseudoLocalRot, addr 0x2260d50, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_headPseudoLocalRot();

  /// @brief Method get_leftHandPseudoLocalPos, addr 0x2260d5c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_leftHandPseudoLocalPos();

  /// @brief Method get_leftHandPseudoLocalRot, addr 0x2260d68, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_leftHandPseudoLocalRot();

  /// @brief Method get_rightHandPseudoLocalPos, addr 0x2260d74, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_rightHandPseudoLocalPos();

  /// @brief Method get_rightHandPseudoLocalRot, addr 0x2260d80, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_rightHandPseudoLocalRot();

  /// @brief Method Awake, addr 0x2260d8c, size 0x84, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method OverrideHeadPos, addr 0x2260e10, size 0x1c, virtual false, abstract: false, final false
  inline void OverrideHeadPos(::UnityEngine::Vector3 pos);

  /// @brief Method Update, addr 0x2260e2c, size 0x1d8, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method MoveTowardsHead, addr 0x2261004, size 0x74, virtual false, abstract: false, final false
  inline float_t MoveTowardsHead(float_t start, float_t end, ::UnityEngine::Quaternion noteInverseWorldRotation, float_t t);

  /// @brief Method GetZPosOffsetByHeadPosAtTime, addr 0x22610c0, size 0x2c, virtual false, abstract: false, final false
  inline float_t GetZPosOffsetByHeadPosAtTime(float_t start, float_t end, float_t t);

  /// @brief Method GetZPos, addr 0x2261098, size 0x28, virtual false, abstract: false, final false
  inline float_t GetZPos(float_t start, float_t end, float_t headOffsetZ, float_t t);

  /// @brief Method HeadOffsetZ, addr 0x2261078, size 0x20, virtual false, abstract: false, final false
  inline float_t HeadOffsetZ(::UnityEngine::Quaternion noteInverseWorldRotation);

  static inline ::GlobalNamespace::PlayerTransforms* New_ctor();

  /// @brief Method .ctor, addr 0x22610ec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PlayerTransforms", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerTransforms(PlayerTransforms&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerTransforms", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerTransforms(PlayerTransforms const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerTransforms();

public:
  /// @brief Field _headTransform, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Transform* ____headTransform;

  /// @brief Field _originTransform, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Transform* ____originTransform;

  /// @brief Field _leftHandTransform, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Transform* ____leftHandTransform;

  /// @brief Field _rightHandTransform, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Transform* ____rightHandTransform;

  /// @brief Field _overrideHeadPos, offset: 0x38, size: 0x1, def value: None
  bool ____overrideHeadPos;

  /// @brief Field _overriddenHeadPos, offset: 0x3c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____overriddenHeadPos;

  /// @brief Field _headWorldPos, offset: 0x48, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____headWorldPos;

  /// @brief Field _headWorldRot, offset: 0x54, size: 0x10, def value: None
  ::UnityEngine::Quaternion ____headWorldRot;

  /// @brief Field _headPseudoLocalPos, offset: 0x64, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____headPseudoLocalPos;

  /// @brief Field _headPseudoLocalRot, offset: 0x70, size: 0x10, def value: None
  ::UnityEngine::Quaternion ____headPseudoLocalRot;

  /// @brief Field _leftHandPseudoLocalPos, offset: 0x80, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____leftHandPseudoLocalPos;

  /// @brief Field _leftHandPseudoLocalRot, offset: 0x8c, size: 0x10, def value: None
  ::UnityEngine::Quaternion ____leftHandPseudoLocalRot;

  /// @brief Field _rightHandPseudoLocalPos, offset: 0x9c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____rightHandPseudoLocalPos;

  /// @brief Field _rightHandPseudoLocalRot, offset: 0xa8, size: 0x10, def value: None
  ::UnityEngine::Quaternion ____rightHandPseudoLocalRot;

  /// @brief Field _originParentTransform, offset: 0xb8, size: 0x8, def value: None
  ::UnityEngine::Transform* ____originParentTransform;

  /// @brief Field _useOriginParentTransformForPseudoLocalCalculations, offset: 0xc0, size: 0x1, def value: None
  bool ____useOriginParentTransformForPseudoLocalCalculations;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerTransforms, 0xc8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTransforms, ____headTransform) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTransforms, ____originTransform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTransforms, ____leftHandTransform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTransforms, ____rightHandTransform) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTransforms, ____overrideHeadPos) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTransforms, ____overriddenHeadPos) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTransforms, ____headWorldPos) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTransforms, ____headWorldRot) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTransforms, ____headPseudoLocalPos) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTransforms, ____headPseudoLocalRot) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTransforms, ____leftHandPseudoLocalPos) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTransforms, ____leftHandPseudoLocalRot) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTransforms, ____rightHandPseudoLocalPos) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTransforms, ____rightHandPseudoLocalRot) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTransforms, ____originParentTransform) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTransforms, ____useOriginParentTransformForPseudoLocalCalculations) == 0xc0, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayerTransforms);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerTransforms*, "", "PlayerTransforms");
