#pragma once
// IWYU pragma private; include "UnityEngine/Time.hpp"
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
// [NativeHeader("Runtime/Input/TimeManager.h")]
// [StaticAccessor("GetTimeManager()", (UnityEngine.Bindings.StaticAccessorType)0)]
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Time
class CORDL_TYPE Time : public ::System::Object {
public:
  // Declarations
  /// @brief Method get_captureDeltaTime, addr 0x6f4cc14, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_captureDeltaTime();

  /// @brief Method get_captureFramerate, addr 0x6f4cc74, size 0xf4, virtual false, abstract: false, final false
  static inline int32_t get_captureFramerate();

  /// @brief Method get_deltaTime, addr 0x6f4ca14, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_deltaTime();

  /// @brief Method get_fixedDeltaTime, addr 0x6f4cab4, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_fixedDeltaTime();

  /// @brief Method get_fixedUnscaledTime, addr 0x6f4ca64, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_fixedUnscaledTime();

  /// @brief Method get_frameCount, addr 0x6f4cbc4, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_frameCount();

  /// [NativeName("IsUsingFixedTimeStep")]
  /// @brief Method get_inFixedTimeStep, addr 0x6f4cdb4, size 0x28, virtual false, abstract: false, final false
  static inline bool get_inFixedTimeStep();

  /// @brief Method get_maximumDeltaTime, addr 0x6f4cb14, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_maximumDeltaTime();

  /// @brief Method get_realtimeSinceStartup, addr 0x6f46e08, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_realtimeSinceStartup();

  /// @brief Method get_realtimeSinceStartupAsDouble, addr 0x6f46f74, size 0x28, virtual false, abstract: false, final false
  static inline double_t get_realtimeSinceStartupAsDouble();

  /// @brief Method get_renderedFrameCount, addr 0x6f4cbec, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_renderedFrameCount();

  /// @brief Method get_smoothDeltaTime, addr 0x6f4cb3c, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_smoothDeltaTime();

  /// @brief Method get_time, addr 0x6f4c944, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_time();

  /// @brief Method get_timeAsDouble, addr 0x6f46f9c, size 0x28, virtual false, abstract: false, final false
  static inline double_t get_timeAsDouble();

  /// @brief Method get_timeAsRational, addr 0x6f4c96c, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::IntegerTime::RationalTime get_timeAsRational();

  /// @brief Method get_timeAsRational_Injected, addr 0x6f4c9b0, size 0x3c, virtual false, abstract: false, final false
  static inline void get_timeAsRational_Injected(::by_ref<::Unity::IntegerTime::RationalTime> ret);

  /// @brief Method get_timeScale, addr 0x6f4cb64, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_timeScale();

  /// @brief Method get_timeSinceLevelLoad, addr 0x6f4c9ec, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_timeSinceLevelLoad();

  /// @brief Method get_unscaledDeltaTime, addr 0x6f4ca8c, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_unscaledDeltaTime();

  /// @brief Method get_unscaledTime, addr 0x6f4ca3c, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_unscaledTime();

  /// @brief Method set_captureDeltaTime, addr 0x6f4cc3c, size 0x38, virtual false, abstract: false, final false
  static inline void set_captureDeltaTime(float_t value);

  /// @brief Method set_captureFramerate, addr 0x6f4cd68, size 0x4c, virtual false, abstract: false, final false
  static inline void set_captureFramerate(int32_t value);

  /// @brief Method set_fixedDeltaTime, addr 0x6f4cadc, size 0x38, virtual false, abstract: false, final false
  static inline void set_fixedDeltaTime(float_t value);

  /// @brief Method set_timeScale, addr 0x6f4cb8c, size 0x38, virtual false, abstract: false, final false
  static inline void set_timeScale(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Time();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Time", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Time(Time&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Time", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Time(Time const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9996 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Time) == 0x10, "Size mismatch!");

} // namespace UnityEngine
