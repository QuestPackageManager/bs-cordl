#pragma once
// IWYU pragma private; include "UnityEngine\VFX\SpawnOverDistance.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/VFX/zzzz__VFXSpawnerCallbacks_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SpawnOverDistance)
namespace UnityEngine::VFX {
class SpawnOverDistance_InputProperties;
}
namespace UnityEngine::VFX {
class VFXExpressionValues;
}
namespace UnityEngine::VFX {
class VFXSpawnerState;
}
namespace UnityEngine::VFX {
class VisualEffect;
}
// Forward declare root types
namespace UnityEngine::VFX {
class SpawnOverDistance;
}
namespace UnityEngine::VFX {
class SpawnOverDistance_InputProperties;
}
// Write type traits
MARK_REF_T(::UnityEngine::VFX::SpawnOverDistance*);
MARK_REF_T(::UnityEngine::VFX::SpawnOverDistance_InputProperties*);
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::SpawnOverDistance*, "UnityEngine.VFX", "SpawnOverDistance");
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::SpawnOverDistance_InputProperties*, "UnityEngine.VFX", "SpawnOverDistance/InputProperties");
// Dependencies System.Object, UnityEngine.Vector3
namespace UnityEngine::VFX {
// Is value type: false
// CS Name: UnityEngine.VFX.SpawnOverDistance/InputProperties
class CORDL_TYPE SpawnOverDistance_InputProperties : public ::System::Object {
public:
  // Declarations
  /// @brief Field ClampToOne, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get_ClampToOne, put = __cordl_internal_set_ClampToOne)) bool ClampToOne;

  /// @brief Field Position, offset 0x10, size 0xc
  __declspec(property(get = __cordl_internal_get_Position, put = __cordl_internal_set_Position)) ::UnityEngine::Vector3 Position;

  /// @brief Field RatePerUnit, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_RatePerUnit, put = __cordl_internal_set_RatePerUnit)) float_t RatePerUnit;

  /// @brief Field VelocityThreshold, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_VelocityThreshold, put = __cordl_internal_set_VelocityThreshold)) float_t VelocityThreshold;

  static inline ::UnityEngine::VFX::SpawnOverDistance_InputProperties* New_ctor();

  constexpr bool const& __cordl_internal_get_ClampToOne() const;

  constexpr bool& __cordl_internal_get_ClampToOne();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_Position() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_Position();

  constexpr float_t const& __cordl_internal_get_RatePerUnit() const;

  constexpr float_t& __cordl_internal_get_RatePerUnit();

  constexpr float_t const& __cordl_internal_get_VelocityThreshold() const;

  constexpr float_t& __cordl_internal_get_VelocityThreshold();

  constexpr void __cordl_internal_set_ClampToOne(bool value);

  constexpr void __cordl_internal_set_Position(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_RatePerUnit(float_t value);

  constexpr void __cordl_internal_set_VelocityThreshold(float_t value);

  /// @brief Method .ctor, addr 0x69d21cc, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SpawnOverDistance_InputProperties();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SpawnOverDistance_InputProperties", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SpawnOverDistance_InputProperties(SpawnOverDistance_InputProperties&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SpawnOverDistance_InputProperties", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SpawnOverDistance_InputProperties(SpawnOverDistance_InputProperties const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19926 };

  /// @brief Field Position, offset: 0x10, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___Position;

  /// @brief Field RatePerUnit, offset: 0x1c, size: 0x4, def value: None
  float_t ___RatePerUnit;

  /// @brief Field VelocityThreshold, offset: 0x20, size: 0x4, def value: None
  float_t ___VelocityThreshold;

  /// @brief Field ClampToOne, offset: 0x24, size: 0x1, def value: None
  bool ___ClampToOne;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::SpawnOverDistance_InputProperties, ___Position) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::SpawnOverDistance_InputProperties, ___RatePerUnit) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::SpawnOverDistance_InputProperties, ___VelocityThreshold) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::SpawnOverDistance_InputProperties, ___ClampToOne) == 0x24, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::SpawnOverDistance_InputProperties) == 0x28, "Size mismatch!");

} // namespace UnityEngine::VFX
// Dependencies UnityEngine.VFX.VFXSpawnerCallbacks, UnityEngine.Vector3
namespace UnityEngine::VFX {
// Is value type: false
// CS Name: UnityEngine.VFX.SpawnOverDistance
class CORDL_TYPE SpawnOverDistance : public ::UnityEngine::VFX::VFXSpawnerCallbacks {
public:
  // Declarations
  using InputProperties = ::UnityEngine::VFX::SpawnOverDistance_InputProperties;

  /// @brief Field clampToOnePropertyId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_clampToOnePropertyId, put = setStaticF_clampToOnePropertyId)) int32_t clampToOnePropertyId;

  /// @brief Field m_OldPosition, offset 0x18, size 0xc
  __declspec(property(get = __cordl_internal_get_m_OldPosition, put = __cordl_internal_set_m_OldPosition)) ::UnityEngine::Vector3 m_OldPosition;

  /// @brief Field oldPositionAttributeId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_oldPositionAttributeId, put = setStaticF_oldPositionAttributeId)) int32_t oldPositionAttributeId;

  /// @brief Field positionAttributeId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_positionAttributeId, put = setStaticF_positionAttributeId)) int32_t positionAttributeId;

  /// @brief Field positionPropertyId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_positionPropertyId, put = setStaticF_positionPropertyId)) int32_t positionPropertyId;

  /// @brief Field ratePerUnitPropertyId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_ratePerUnitPropertyId, put = setStaticF_ratePerUnitPropertyId)) int32_t ratePerUnitPropertyId;

  /// @brief Field velocityThresholdPropertyId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_velocityThresholdPropertyId, put = setStaticF_velocityThresholdPropertyId)) int32_t velocityThresholdPropertyId;

  static inline ::UnityEngine::VFX::SpawnOverDistance* New_ctor();

  /// @brief Method OnPlay, addr 0x69d1d38, size 0x88, virtual true, abstract: false, final true
  inline void OnPlay(::UnityEngine::VFX::VFXSpawnerState* state, ::UnityEngine::VFX::VFXExpressionValues* vfxValues, ::UnityEngine::VFX::VisualEffect* vfxComponent);

  /// @brief Method OnStop, addr 0x69d204c, size 0x4, virtual true, abstract: false, final true
  inline void OnStop(::UnityEngine::VFX::VFXSpawnerState* state, ::UnityEngine::VFX::VFXExpressionValues* vfxValues, ::UnityEngine::VFX::VisualEffect* vfxComponent);

  /// @brief Method OnUpdate, addr 0x69d1dc0, size 0x28c, virtual true, abstract: false, final true
  inline void OnUpdate(::UnityEngine::VFX::VFXSpawnerState* state, ::UnityEngine::VFX::VFXExpressionValues* vfxValues, ::UnityEngine::VFX::VisualEffect* vfxComponent);

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_OldPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_OldPosition();

  constexpr void __cordl_internal_set_m_OldPosition(::UnityEngine::Vector3 value);

  /// @brief Method .ctor, addr 0x69d2050, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF_clampToOnePropertyId();

  static inline int32_t getStaticF_oldPositionAttributeId();

  static inline int32_t getStaticF_positionAttributeId();

  static inline int32_t getStaticF_positionPropertyId();

  static inline int32_t getStaticF_ratePerUnitPropertyId();

  static inline int32_t getStaticF_velocityThresholdPropertyId();

  static inline void setStaticF_clampToOnePropertyId(int32_t value);

  static inline void setStaticF_oldPositionAttributeId(int32_t value);

  static inline void setStaticF_positionAttributeId(int32_t value);

  static inline void setStaticF_positionPropertyId(int32_t value);

  static inline void setStaticF_ratePerUnitPropertyId(int32_t value);

  static inline void setStaticF_velocityThresholdPropertyId(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SpawnOverDistance();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SpawnOverDistance", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SpawnOverDistance(SpawnOverDistance&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SpawnOverDistance", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SpawnOverDistance(SpawnOverDistance const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19927 };

  /// @brief Field m_OldPosition, offset: 0x18, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_OldPosition;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::SpawnOverDistance, ___m_OldPosition) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::SpawnOverDistance) == 0x28, "Size mismatch!");

} // namespace UnityEngine::VFX
