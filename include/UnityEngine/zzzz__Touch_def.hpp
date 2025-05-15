#pragma once
// IWYU pragma private; include "UnityEngine/Touch.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__TouchPhase_def.hpp"
#include "UnityEngine/zzzz__TouchType_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Touch)
namespace UnityEngine {
struct TouchPhase;
}
namespace UnityEngine {
struct TouchType;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine {
struct Touch;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Touch);
// Dependencies UnityEngine.TouchPhase, UnityEngine.TouchType, UnityEngine.Vector2
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.Touch
struct CORDL_TYPE Touch {
public:
  // Declarations
  __declspec(property(get = get_altitudeAngle)) float_t altitudeAngle;

  __declspec(property(get = get_azimuthAngle)) float_t azimuthAngle;

  __declspec(property(get = get_deltaPosition, put = set_deltaPosition)) ::UnityEngine::Vector2 deltaPosition;

  __declspec(property(get = get_deltaTime)) float_t deltaTime;

  __declspec(property(get = get_fingerId)) int32_t fingerId;

  __declspec(property(get = get_maximumPossiblePressure)) float_t maximumPossiblePressure;

  __declspec(property(get = get_phase)) ::UnityEngine::TouchPhase phase;

  __declspec(property(get = get_position, put = set_position)) ::UnityEngine::Vector2 position;

  __declspec(property(get = get_pressure)) float_t pressure;

  __declspec(property(get = get_radius)) float_t radius;

  __declspec(property(get = get_radiusVariance)) float_t radiusVariance;

  __declspec(property(get = get_rawPosition, put = set_rawPosition)) ::UnityEngine::Vector2 rawPosition;

  __declspec(property(get = get_tapCount)) int32_t tapCount;

  __declspec(property(get = get_type)) ::UnityEngine::TouchType type;

  /// @brief Method get_altitudeAngle, addr 0x48eaf38, size 0x8, virtual false, abstract: false, final false
  inline float_t get_altitudeAngle();

  /// @brief Method get_azimuthAngle, addr 0x48eaf40, size 0x8, virtual false, abstract: false, final false
  inline float_t get_azimuthAngle();

  /// @brief Method get_deltaPosition, addr 0x48eaef8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_deltaPosition();

  /// @brief Method get_deltaTime, addr 0x48eaf08, size 0x8, virtual false, abstract: false, final false
  inline float_t get_deltaTime();

  /// @brief Method get_fingerId, addr 0x48eaed0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_fingerId();

  /// @brief Method get_maximumPossiblePressure, addr 0x48eaf28, size 0x8, virtual false, abstract: false, final false
  inline float_t get_maximumPossiblePressure();

  /// @brief Method get_phase, addr 0x48eaf18, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::TouchPhase get_phase();

  /// @brief Method get_position, addr 0x48eaed8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_position();

  /// @brief Method get_pressure, addr 0x48eaf20, size 0x8, virtual false, abstract: false, final false
  inline float_t get_pressure();

  /// @brief Method get_radius, addr 0x48eaf48, size 0x8, virtual false, abstract: false, final false
  inline float_t get_radius();

  /// @brief Method get_radiusVariance, addr 0x48eaf50, size 0x8, virtual false, abstract: false, final false
  inline float_t get_radiusVariance();

  /// @brief Method get_rawPosition, addr 0x48eaee8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_rawPosition();

  /// @brief Method get_tapCount, addr 0x48eaf10, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_tapCount();

  /// @brief Method get_type, addr 0x48eaf30, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::TouchType get_type();

  /// @brief Method set_deltaPosition, addr 0x48eaf00, size 0x8, virtual false, abstract: false, final false
  inline void set_deltaPosition(::UnityEngine::Vector2 value);

  /// @brief Method set_position, addr 0x48eaee0, size 0x8, virtual false, abstract: false, final false
  inline void set_position(::UnityEngine::Vector2 value);

  /// @brief Method set_rawPosition, addr 0x48eaef0, size 0x8, virtual false, abstract: false, final false
  inline void set_rawPosition(::UnityEngine::Vector2 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Touch();

  // Ctor Parameters [CppParam { name: "m_FingerId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Position", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None },
  // CppParam { name: "m_RawPosition", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "m_PositionDelta", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None
  // }, CppParam { name: "m_TimeDelta", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_TapCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Phase", ty:
  // "::UnityEngine::TouchPhase", modifiers: "", def_value: None }, CppParam { name: "m_Type", ty: "::UnityEngine::TouchType", modifiers: "", def_value: None }, CppParam { name: "m_Pressure", ty:
  // "float_t", modifiers: "", def_value: None }, CppParam { name: "m_maximumPossiblePressure", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Radius", ty: "float_t", modifiers:
  // "", def_value: None }, CppParam { name: "m_RadiusVariance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_AltitudeAngle", ty: "float_t", modifiers: "", def_value: None },
  // CppParam { name: "m_AzimuthAngle", ty: "float_t", modifiers: "", def_value: None }]
  constexpr Touch(int32_t m_FingerId, ::UnityEngine::Vector2 m_Position, ::UnityEngine::Vector2 m_RawPosition, ::UnityEngine::Vector2 m_PositionDelta, float_t m_TimeDelta, int32_t m_TapCount,
                  ::UnityEngine::TouchPhase m_Phase, ::UnityEngine::TouchType m_Type, float_t m_Pressure, float_t m_maximumPossiblePressure, float_t m_Radius, float_t m_RadiusVariance,
                  float_t m_AltitudeAngle, float_t m_AzimuthAngle) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18617 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x44 };

  /// @brief Field m_FingerId, offset: 0x0, size: 0x4, def value: None
  int32_t m_FingerId;

  /// @brief Field m_Position, offset: 0x4, size: 0x8, def value: None
  ::UnityEngine::Vector2 m_Position;

  /// @brief Field m_RawPosition, offset: 0xc, size: 0x8, def value: None
  ::UnityEngine::Vector2 m_RawPosition;

  /// @brief Field m_PositionDelta, offset: 0x14, size: 0x8, def value: None
  ::UnityEngine::Vector2 m_PositionDelta;

  /// @brief Field m_TimeDelta, offset: 0x1c, size: 0x4, def value: None
  float_t m_TimeDelta;

  /// @brief Field m_TapCount, offset: 0x20, size: 0x4, def value: None
  int32_t m_TapCount;

  /// @brief Field m_Phase, offset: 0x24, size: 0x4, def value: None
  ::UnityEngine::TouchPhase m_Phase;

  /// @brief Field m_Type, offset: 0x28, size: 0x4, def value: None
  ::UnityEngine::TouchType m_Type;

  /// @brief Field m_Pressure, offset: 0x2c, size: 0x4, def value: None
  float_t m_Pressure;

  /// @brief Field m_maximumPossiblePressure, offset: 0x30, size: 0x4, def value: None
  float_t m_maximumPossiblePressure;

  /// @brief Field m_Radius, offset: 0x34, size: 0x4, def value: None
  float_t m_Radius;

  /// @brief Field m_RadiusVariance, offset: 0x38, size: 0x4, def value: None
  float_t m_RadiusVariance;

  /// @brief Field m_AltitudeAngle, offset: 0x3c, size: 0x4, def value: None
  float_t m_AltitudeAngle;

  /// @brief Field m_AzimuthAngle, offset: 0x40, size: 0x4, def value: None
  float_t m_AzimuthAngle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Touch, m_FingerId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Touch, m_Position) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Touch, m_RawPosition) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Touch, m_PositionDelta) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Touch, m_TimeDelta) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Touch, m_TapCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Touch, m_Phase) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Touch, m_Type) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Touch, m_Pressure) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Touch, m_maximumPossiblePressure) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Touch, m_Radius) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Touch, m_RadiusVariance) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Touch, m_AltitudeAngle) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Touch, m_AzimuthAngle) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Touch, 0x44>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Touch, "UnityEngine", "Touch");
