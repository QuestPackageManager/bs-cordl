#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerTransforms.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
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
// Dependencies BeatmapKey, System.Nullable`1<T>, UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerTransforms
class CORDL_TYPE PlayerTransforms : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _beatmapKey, offset 0x40, size 0x28
  __declspec(property(get = __cordl_internal_get__beatmapKey, put = __cordl_internal_set__beatmapKey)) ::System::Nullable_1<::GlobalNamespace::BeatmapKey> _beatmapKey;

  /// @brief Field _headPseudoLocalPos, offset 0x88, size 0xc
  __declspec(property(get = __cordl_internal_get__headPseudoLocalPos, put = __cordl_internal_set__headPseudoLocalPos)) ::UnityEngine::Vector3 _headPseudoLocalPos;

  /// @brief Field _headPseudoLocalRot, offset 0x94, size 0x10
  __declspec(property(get = __cordl_internal_get__headPseudoLocalRot, put = __cordl_internal_set__headPseudoLocalRot)) ::UnityEngine::Quaternion _headPseudoLocalRot;

  /// @brief Field _headPseudoLocalZOnlyPos, offset 0xa4, size 0xc
  __declspec(property(get = __cordl_internal_get__headPseudoLocalZOnlyPos, put = __cordl_internal_set__headPseudoLocalZOnlyPos)) ::UnityEngine::Vector3 _headPseudoLocalZOnlyPos;

  /// @brief Field _headTransform, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__headTransform, put = __cordl_internal_set__headTransform)) ::UnityW<::UnityEngine::Transform> _headTransform;

  /// @brief Field _headWorldPos, offset 0x6c, size 0xc
  __declspec(property(get = __cordl_internal_get__headWorldPos, put = __cordl_internal_set__headWorldPos)) ::UnityEngine::Vector3 _headWorldPos;

  /// @brief Field _headWorldRot, offset 0x78, size 0x10
  __declspec(property(get = __cordl_internal_get__headWorldRot, put = __cordl_internal_set__headWorldRot)) ::UnityEngine::Quaternion _headWorldRot;

  /// @brief Field _leftHandPseudoLocalPos, offset 0xb0, size 0xc
  __declspec(property(get = __cordl_internal_get__leftHandPseudoLocalPos, put = __cordl_internal_set__leftHandPseudoLocalPos)) ::UnityEngine::Vector3 _leftHandPseudoLocalPos;

  /// @brief Field _leftHandPseudoLocalRot, offset 0xbc, size 0x10
  __declspec(property(get = __cordl_internal_get__leftHandPseudoLocalRot, put = __cordl_internal_set__leftHandPseudoLocalRot)) ::UnityEngine::Quaternion _leftHandPseudoLocalRot;

  /// @brief Field _leftHandTransform, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__leftHandTransform, put = __cordl_internal_set__leftHandTransform)) ::UnityW<::UnityEngine::Transform> _leftHandTransform;

  /// @brief Field _originParentTransform, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get__originParentTransform, put = __cordl_internal_set__originParentTransform)) ::UnityW<::UnityEngine::Transform> _originParentTransform;

  /// @brief Field _originTransform, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__originTransform, put = __cordl_internal_set__originTransform)) ::UnityW<::UnityEngine::Transform> _originTransform;

  /// @brief Field _overrideHeadPos, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get__overrideHeadPos, put = __cordl_internal_set__overrideHeadPos)) bool _overrideHeadPos;

  /// @brief Field _rightHandPseudoLocalPos, offset 0xcc, size 0xc
  __declspec(property(get = __cordl_internal_get__rightHandPseudoLocalPos, put = __cordl_internal_set__rightHandPseudoLocalPos)) ::UnityEngine::Vector3 _rightHandPseudoLocalPos;

  /// @brief Field _rightHandPseudoLocalRot, offset 0xd8, size 0x10
  __declspec(property(get = __cordl_internal_get__rightHandPseudoLocalRot, put = __cordl_internal_set__rightHandPseudoLocalRot)) ::UnityEngine::Quaternion _rightHandPseudoLocalRot;

  /// @brief Field _rightHandTransform, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__rightHandTransform, put = __cordl_internal_set__rightHandTransform)) ::UnityW<::UnityEngine::Transform> _rightHandTransform;

  /// @brief Field _useOriginParentTransformForPseudoLocalCalculations, offset 0xf0, size 0x1
  __declspec(property(get = __cordl_internal_get__useOriginParentTransformForPseudoLocalCalculations,
                      put = __cordl_internal_set__useOriginParentTransformForPseudoLocalCalculations)) bool _useOriginParentTransformForPseudoLocalCalculations;

  __declspec(property(get = get_headPseudoLocalPos)) ::UnityEngine::Vector3 headPseudoLocalPos;

  __declspec(property(get = get_headPseudoLocalRot)) ::UnityEngine::Quaternion headPseudoLocalRot;

  __declspec(property(get = get_headPseudoLocalZOnlyPos)) ::UnityEngine::Vector3 headPseudoLocalZOnlyPos;

  __declspec(property(get = get_headWorldPos)) ::UnityEngine::Vector3 headWorldPos;

  __declspec(property(get = get_headWorldRot)) ::UnityEngine::Quaternion headWorldRot;

  __declspec(property(get = get_leftHandPseudoLocalPos)) ::UnityEngine::Vector3 leftHandPseudoLocalPos;

  __declspec(property(get = get_leftHandPseudoLocalRot)) ::UnityEngine::Quaternion leftHandPseudoLocalRot;

  __declspec(property(get = get_rightHandPseudoLocalPos)) ::UnityEngine::Vector3 rightHandPseudoLocalPos;

  __declspec(property(get = get_rightHandPseudoLocalRot)) ::UnityEngine::Quaternion rightHandPseudoLocalRot;

  /// @brief Method Awake, addr 0x57dad30, size 0x88, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method ClearHeadPositionOverride, addr 0x57dadd8, size 0x8, virtual false, abstract: false, final false
  inline void ClearHeadPositionOverride();

  static inline ::GlobalNamespace::PlayerTransforms* New_ctor();

  /// @brief Method OverrideHeadPos, addr 0x57dadb8, size 0x20, virtual false, abstract: false, final false
  inline void OverrideHeadPos(::UnityEngine::Vector3 pos);

  /// @brief Method Update, addr 0x57dade0, size 0x22c, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::System::Nullable_1<::GlobalNamespace::BeatmapKey> const& __cordl_internal_get__beatmapKey() const;

  constexpr ::System::Nullable_1<::GlobalNamespace::BeatmapKey>& __cordl_internal_get__beatmapKey();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__headPseudoLocalPos() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__headPseudoLocalPos();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__headPseudoLocalRot() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get__headPseudoLocalRot();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__headPseudoLocalZOnlyPos() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__headPseudoLocalZOnlyPos();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__headTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__headTransform();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__headWorldPos() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__headWorldPos();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__headWorldRot() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get__headWorldRot();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__leftHandPseudoLocalPos() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__leftHandPseudoLocalPos();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__leftHandPseudoLocalRot() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get__leftHandPseudoLocalRot();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__leftHandTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__leftHandTransform();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__originParentTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__originParentTransform();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__originTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__originTransform();

  constexpr bool const& __cordl_internal_get__overrideHeadPos() const;

  constexpr bool& __cordl_internal_get__overrideHeadPos();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__rightHandPseudoLocalPos() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__rightHandPseudoLocalPos();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__rightHandPseudoLocalRot() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get__rightHandPseudoLocalRot();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__rightHandTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__rightHandTransform();

  constexpr bool const& __cordl_internal_get__useOriginParentTransformForPseudoLocalCalculations() const;

  constexpr bool& __cordl_internal_get__useOriginParentTransformForPseudoLocalCalculations();

  constexpr void __cordl_internal_set__beatmapKey(::System::Nullable_1<::GlobalNamespace::BeatmapKey> value);

  constexpr void __cordl_internal_set__headPseudoLocalPos(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__headPseudoLocalRot(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set__headPseudoLocalZOnlyPos(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__headTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__headWorldPos(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__headWorldRot(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set__leftHandPseudoLocalPos(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__leftHandPseudoLocalRot(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set__leftHandTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__originParentTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__originTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__overrideHeadPos(bool value);

  constexpr void __cordl_internal_set__rightHandPseudoLocalPos(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__rightHandPseudoLocalRot(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set__rightHandTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__useOriginParentTransformForPseudoLocalCalculations(bool value);

  /// @brief Method .ctor, addr 0x57db00c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_headPseudoLocalPos, addr 0x57dacdc, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_headPseudoLocalPos();

  /// @brief Method get_headPseudoLocalRot, addr 0x57dacf4, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_headPseudoLocalRot();

  /// @brief Method get_headPseudoLocalZOnlyPos, addr 0x57dace8, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_headPseudoLocalZOnlyPos();

  /// @brief Method get_headWorldPos, addr 0x57dacc4, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_headWorldPos();

  /// @brief Method get_headWorldRot, addr 0x57dacd0, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_headWorldRot();

  /// @brief Method get_leftHandPseudoLocalPos, addr 0x57dad00, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_leftHandPseudoLocalPos();

  /// @brief Method get_leftHandPseudoLocalRot, addr 0x57dad0c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_leftHandPseudoLocalRot();

  /// @brief Method get_rightHandPseudoLocalPos, addr 0x57dad18, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_rightHandPseudoLocalPos();

  /// @brief Method get_rightHandPseudoLocalRot, addr 0x57dad24, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_rightHandPseudoLocalRot();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerTransforms();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerTransforms", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerTransforms(PlayerTransforms&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerTransforms", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerTransforms(PlayerTransforms const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6220 };

  /// @brief Field _headTransform, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____headTransform;

  /// @brief Field _originTransform, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____originTransform;

  /// @brief Field _leftHandTransform, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____leftHandTransform;

  /// @brief Field _rightHandTransform, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____rightHandTransform;

  /// @brief Field _beatmapKey, offset: 0x40, size: 0x28, def value: None
  ::System::Nullable_1<::GlobalNamespace::BeatmapKey> ____beatmapKey;

  /// @brief Field _overrideHeadPos, offset: 0x68, size: 0x1, def value: None
  bool ____overrideHeadPos;

  /// @brief Field _headWorldPos, offset: 0x6c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____headWorldPos;

  /// @brief Field _headWorldRot, offset: 0x78, size: 0x10, def value: None
  ::UnityEngine::Quaternion ____headWorldRot;

  /// @brief Field _headPseudoLocalPos, offset: 0x88, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____headPseudoLocalPos;

  /// @brief Field _headPseudoLocalRot, offset: 0x94, size: 0x10, def value: None
  ::UnityEngine::Quaternion ____headPseudoLocalRot;

  /// @brief Field _headPseudoLocalZOnlyPos, offset: 0xa4, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____headPseudoLocalZOnlyPos;

  /// @brief Field _leftHandPseudoLocalPos, offset: 0xb0, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____leftHandPseudoLocalPos;

  /// @brief Field _leftHandPseudoLocalRot, offset: 0xbc, size: 0x10, def value: None
  ::UnityEngine::Quaternion ____leftHandPseudoLocalRot;

  /// @brief Field _rightHandPseudoLocalPos, offset: 0xcc, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____rightHandPseudoLocalPos;

  /// @brief Field _rightHandPseudoLocalRot, offset: 0xd8, size: 0x10, def value: None
  ::UnityEngine::Quaternion ____rightHandPseudoLocalRot;

  /// @brief Field _originParentTransform, offset: 0xe8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____originParentTransform;

  /// @brief Field _useOriginParentTransformForPseudoLocalCalculations, offset: 0xf0, size: 0x1, def value: None
  bool ____useOriginParentTransformForPseudoLocalCalculations;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerTransforms, ____headTransform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTransforms, ____originTransform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTransforms, ____leftHandTransform) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTransforms, ____rightHandTransform) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTransforms, ____beatmapKey) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTransforms, ____overrideHeadPos) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTransforms, ____headWorldPos) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTransforms, ____headWorldRot) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTransforms, ____headPseudoLocalPos) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTransforms, ____headPseudoLocalRot) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTransforms, ____headPseudoLocalZOnlyPos) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTransforms, ____leftHandPseudoLocalPos) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTransforms, ____leftHandPseudoLocalRot) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTransforms, ____rightHandPseudoLocalPos) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTransforms, ____rightHandPseudoLocalRot) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTransforms, ____originParentTransform) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTransforms, ____useOriginParentTransformForPseudoLocalCalculations) == 0xf0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerTransforms, 0xf8>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayerTransforms);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerTransforms*, "", "PlayerTransforms");
