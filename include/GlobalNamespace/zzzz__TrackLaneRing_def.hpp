#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TrackLaneRing)
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class TrackLaneRing;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TrackLaneRing);
// Type: ::TrackLaneRing
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8969)), TypeDefinitionIndex(TypeDefinitionIndex(8993))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4357))
// CS Name: ::TrackLaneRing*
class CORDL_TYPE TrackLaneRing : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _prevRotZ, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__prevRotZ, put = __cordl_internal_set__prevRotZ)) float_t _prevRotZ;

  /// @brief Field _rotZ, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__rotZ, put = __cordl_internal_set__rotZ)) float_t _rotZ;

  /// @brief Field _destRotZ, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__destRotZ, put = __cordl_internal_set__destRotZ)) float_t _destRotZ;

  /// @brief Field _rotationSpeed, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__rotationSpeed, put = __cordl_internal_set__rotationSpeed)) float_t _rotationSpeed;

  /// @brief Field _prevPosZ, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__prevPosZ, put = __cordl_internal_set__prevPosZ)) float_t _prevPosZ;

  /// @brief Field _posZ, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__posZ, put = __cordl_internal_set__posZ)) float_t _posZ;

  /// @brief Field _destPosZ, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__destPosZ, put = __cordl_internal_set__destPosZ)) float_t _destPosZ;

  /// @brief Field _moveSpeed, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__moveSpeed, put = __cordl_internal_set__moveSpeed)) float_t _moveSpeed;

  /// @brief Field _positionOffset, offset 0x38, size 0xc
  __declspec(property(get = __cordl_internal_get__positionOffset, put = __cordl_internal_set__positionOffset))::UnityEngine::Vector3 _positionOffset;

  /// @brief Field _transform, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__transform, put = __cordl_internal_set__transform))::UnityW<::UnityEngine::Transform> _transform;

  __declspec(property(get = get_destRotZ)) float_t destRotZ;

  constexpr float_t& __cordl_internal_get__prevRotZ();

  constexpr float_t const& __cordl_internal_get__prevRotZ() const;

  constexpr void __cordl_internal_set__prevRotZ(float_t value);

  constexpr float_t& __cordl_internal_get__rotZ();

  constexpr float_t const& __cordl_internal_get__rotZ() const;

  constexpr void __cordl_internal_set__rotZ(float_t value);

  constexpr float_t& __cordl_internal_get__destRotZ();

  constexpr float_t const& __cordl_internal_get__destRotZ() const;

  constexpr void __cordl_internal_set__destRotZ(float_t value);

  constexpr float_t& __cordl_internal_get__rotationSpeed();

  constexpr float_t const& __cordl_internal_get__rotationSpeed() const;

  constexpr void __cordl_internal_set__rotationSpeed(float_t value);

  constexpr float_t& __cordl_internal_get__prevPosZ();

  constexpr float_t const& __cordl_internal_get__prevPosZ() const;

  constexpr void __cordl_internal_set__prevPosZ(float_t value);

  constexpr float_t& __cordl_internal_get__posZ();

  constexpr float_t const& __cordl_internal_get__posZ() const;

  constexpr void __cordl_internal_set__posZ(float_t value);

  constexpr float_t& __cordl_internal_get__destPosZ();

  constexpr float_t const& __cordl_internal_get__destPosZ() const;

  constexpr void __cordl_internal_set__destPosZ(float_t value);

  constexpr float_t& __cordl_internal_get__moveSpeed();

  constexpr float_t const& __cordl_internal_get__moveSpeed() const;

  constexpr void __cordl_internal_set__moveSpeed(float_t value);

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__positionOffset();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__positionOffset() const;

  constexpr void __cordl_internal_set__positionOffset(::UnityEngine::Vector3 value);

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__transform();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__transform() const;

  constexpr void __cordl_internal_set__transform(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method get_destRotZ, addr 0x23768dc, size 0x8, virtual false, abstract: false, final false
  inline float_t get_destRotZ();

  /// @brief Method Init, addr 0x23768e4, size 0x78, virtual false, abstract: false, final false
  inline void Init(::UnityEngine::Vector3 position, ::UnityEngine::Vector3 positionOffset);

  /// @brief Method FixedUpdateRing, addr 0x237695c, size 0x74, virtual false, abstract: false, final false
  inline void FixedUpdateRing(float_t fixedDeltaTime);

  /// @brief Method LateUpdateRing, addr 0x23769d0, size 0x68, virtual false, abstract: false, final false
  inline void LateUpdateRing(float_t interpolationFactor);

  /// @brief Method SetDestRotation, addr 0x2376a38, size 0x8, virtual false, abstract: false, final false
  inline void SetDestRotation(float_t destRotZ, float_t rotateSpeed);

  /// @brief Method GetRotation, addr 0x2376a40, size 0x8, virtual false, abstract: false, final false
  inline float_t GetRotation();

  /// @brief Method GetDestinationRotation, addr 0x2376a48, size 0x8, virtual false, abstract: false, final false
  inline float_t GetDestinationRotation();

  /// @brief Method SetPosition, addr 0x2376a50, size 0x8, virtual false, abstract: false, final false
  inline void SetPosition(float_t destPosZ, float_t moveSpeed);

  static inline ::GlobalNamespace::TrackLaneRing* New_ctor();

  /// @brief Method .ctor, addr 0x2376a58, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TrackLaneRing", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TrackLaneRing(TrackLaneRing&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TrackLaneRing", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TrackLaneRing(TrackLaneRing const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TrackLaneRing();

public:
  /// @brief Field _prevRotZ, offset: 0x18, size: 0x4, def value: None
  float_t ____prevRotZ;

  /// @brief Field _rotZ, offset: 0x1c, size: 0x4, def value: None
  float_t ____rotZ;

  /// @brief Field _destRotZ, offset: 0x20, size: 0x4, def value: None
  float_t ____destRotZ;

  /// @brief Field _rotationSpeed, offset: 0x24, size: 0x4, def value: None
  float_t ____rotationSpeed;

  /// @brief Field _prevPosZ, offset: 0x28, size: 0x4, def value: None
  float_t ____prevPosZ;

  /// @brief Field _posZ, offset: 0x2c, size: 0x4, def value: None
  float_t ____posZ;

  /// @brief Field _destPosZ, offset: 0x30, size: 0x4, def value: None
  float_t ____destPosZ;

  /// @brief Field _moveSpeed, offset: 0x34, size: 0x4, def value: None
  float_t ____moveSpeed;

  /// @brief Field _positionOffset, offset: 0x38, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____positionOffset;

  /// @brief Field _transform, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____transform;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TrackLaneRing, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackLaneRing, ____prevRotZ) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackLaneRing, ____rotZ) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackLaneRing, ____destRotZ) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackLaneRing, ____rotationSpeed) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackLaneRing, ____prevPosZ) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackLaneRing, ____posZ) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackLaneRing, ____destPosZ) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackLaneRing, ____moveSpeed) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackLaneRing, ____positionOffset) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackLaneRing, ____transform) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TrackLaneRing);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TrackLaneRing*, "", "TrackLaneRing");
