#pragma once
// IWYU pragma private; include "UnityEngine\Time.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Time)
namespace Unity::IntegerTime {
struct RationalTime;
}
// Forward declare root types
namespace UnityEngine {
class Time;
}
// Write type traits
MARK_REF_T(::UnityEngine::Time*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Time*, "UnityEngine", "Time");
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Time
class CORDL_TYPE Time : public ::System::Object {
public:
  // Declarations
  /// @brief Method get_captureDeltaTime, addr 0x6af1e0c, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_captureDeltaTime();

  /// @brief Method get_captureFramerate, addr 0x6af1e6c, size 0xf4, virtual false, abstract: false, final false
  static inline int32_t get_captureFramerate();

  /// @brief Method get_deltaTime, addr 0x6af1c34, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_deltaTime();

  /// @brief Method get_fixedDeltaTime, addr 0x6af1cd4, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_fixedDeltaTime();

  /// @brief Method get_fixedUnscaledTime, addr 0x6af1c84, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_fixedUnscaledTime();

  /// @brief Method get_frameCount, addr 0x6adc694, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_frameCount();

  /// @brief Method get_inFixedTimeStep, addr 0x6af1fac, size 0x28, virtual false, abstract: false, final false
  static inline bool get_inFixedTimeStep();

  /// @brief Method get_maximumDeltaTime, addr 0x6af1d34, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_maximumDeltaTime();

  /// @brief Method get_realtimeSinceStartup, addr 0x6aebf40, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_realtimeSinceStartup();

  /// @brief Method get_realtimeSinceStartupAsDouble, addr 0x6aec0ac, size 0x28, virtual false, abstract: false, final false
  static inline double_t get_realtimeSinceStartupAsDouble();

  /// @brief Method get_renderedFrameCount, addr 0x6af1de4, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_renderedFrameCount();

  /// @brief Method get_smoothDeltaTime, addr 0x6af1d5c, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_smoothDeltaTime();

  /// @brief Method get_time, addr 0x6af1b64, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_time();

  /// @brief Method get_timeAsDouble, addr 0x6aec0d4, size 0x28, virtual false, abstract: false, final false
  static inline double_t get_timeAsDouble();

  /// @brief Method get_timeAsRational, addr 0x6af1b8c, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::IntegerTime::RationalTime get_timeAsRational();

  /// @brief Method get_timeAsRational_Injected, addr 0x6af1bd0, size 0x3c, virtual false, abstract: false, final false
  static inline void get_timeAsRational_Injected(::by_ref<::Unity::IntegerTime::RationalTime> ret);

  /// @brief Method get_timeScale, addr 0x6af1d84, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_timeScale();

  /// @brief Method get_timeSinceLevelLoad, addr 0x6af1c0c, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_timeSinceLevelLoad();

  /// @brief Method get_unscaledDeltaTime, addr 0x6af1cac, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_unscaledDeltaTime();

  /// @brief Method get_unscaledTime, addr 0x6af1c5c, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_unscaledTime();

  /// @brief Method set_captureDeltaTime, addr 0x6af1e34, size 0x38, virtual false, abstract: false, final false
  static inline void set_captureDeltaTime(float_t value);

  /// @brief Method set_captureFramerate, addr 0x6af1f60, size 0x4c, virtual false, abstract: false, final false
  static inline void set_captureFramerate(int32_t value);

  /// @brief Method set_fixedDeltaTime, addr 0x6af1cfc, size 0x38, virtual false, abstract: false, final false
  static inline void set_fixedDeltaTime(float_t value);

  /// @brief Method set_timeScale, addr 0x6af1dac, size 0x38, virtual false, abstract: false, final false
  static inline void set_timeScale(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Time();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Time", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Time(Time&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Time", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Time(Time const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10407 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Time) == 0x10, "Size mismatch!");

} // namespace UnityEngine
