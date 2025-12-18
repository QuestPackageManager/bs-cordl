#pragma once
// IWYU pragma private; include "UnityEngine/Time.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
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
MARK_REF_PTR_T(::UnityEngine::Time);
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Time
class CORDL_TYPE Time : public ::System::Object {
public:
  // Declarations
  /// @brief Method get_captureDeltaTime, addr 0x6926fdc, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_captureDeltaTime();

  /// @brief Method get_captureFramerate, addr 0x692703c, size 0xf4, virtual false, abstract: false, final false
  static inline int32_t get_captureFramerate();

  /// @brief Method get_deltaTime, addr 0x6926e04, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_deltaTime();

  /// @brief Method get_fixedDeltaTime, addr 0x6926ea4, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_fixedDeltaTime();

  /// @brief Method get_fixedUnscaledTime, addr 0x6926e54, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_fixedUnscaledTime();

  /// @brief Method get_frameCount, addr 0x6911b90, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_frameCount();

  /// @brief Method get_inFixedTimeStep, addr 0x692717c, size 0x28, virtual false, abstract: false, final false
  static inline bool get_inFixedTimeStep();

  /// @brief Method get_maximumDeltaTime, addr 0x6926f04, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_maximumDeltaTime();

  /// @brief Method get_realtimeSinceStartup, addr 0x6921730, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_realtimeSinceStartup();

  /// @brief Method get_realtimeSinceStartupAsDouble, addr 0x692189c, size 0x28, virtual false, abstract: false, final false
  static inline double_t get_realtimeSinceStartupAsDouble();

  /// @brief Method get_renderedFrameCount, addr 0x6926fb4, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_renderedFrameCount();

  /// @brief Method get_smoothDeltaTime, addr 0x6926f2c, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_smoothDeltaTime();

  /// @brief Method get_time, addr 0x6926d34, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_time();

  /// @brief Method get_timeAsDouble, addr 0x69218c4, size 0x28, virtual false, abstract: false, final false
  static inline double_t get_timeAsDouble();

  /// @brief Method get_timeAsRational, addr 0x6926d5c, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::IntegerTime::RationalTime get_timeAsRational();

  /// @brief Method get_timeAsRational_Injected, addr 0x6926da0, size 0x3c, virtual false, abstract: false, final false
  static inline void get_timeAsRational_Injected(::ByRef<::Unity::IntegerTime::RationalTime> ret);

  /// @brief Method get_timeScale, addr 0x6926f54, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_timeScale();

  /// @brief Method get_timeSinceLevelLoad, addr 0x6926ddc, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_timeSinceLevelLoad();

  /// @brief Method get_unscaledDeltaTime, addr 0x6926e7c, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_unscaledDeltaTime();

  /// @brief Method get_unscaledTime, addr 0x6926e2c, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_unscaledTime();

  /// @brief Method set_captureDeltaTime, addr 0x6927004, size 0x38, virtual false, abstract: false, final false
  static inline void set_captureDeltaTime(float_t value);

  /// @brief Method set_captureFramerate, addr 0x6927130, size 0x4c, virtual false, abstract: false, final false
  static inline void set_captureFramerate(int32_t value);

  /// @brief Method set_fixedDeltaTime, addr 0x6926ecc, size 0x38, virtual false, abstract: false, final false
  static inline void set_fixedDeltaTime(float_t value);

  /// @brief Method set_timeScale, addr 0x6926f7c, size 0x38, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10385 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Time, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Time);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Time*, "UnityEngine", "Time");
