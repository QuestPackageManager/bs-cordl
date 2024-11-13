#pragma once
// IWYU pragma private; include "UnityEngine/Time.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Time)
// Forward declare root types
namespace UnityEngine {
class Time;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Time);
// Type: UnityEngine::Time
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::Time*
class CORDL_TYPE Time : public ::System::Object {
public:
  // Declarations
  /// @brief Method get_captureDeltaTime, addr 0x485080c, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_captureDeltaTime();

  /// @brief Method get_captureFramerate, addr 0x485086c, size 0xf4, virtual false, abstract: false, final false
  static inline int32_t get_captureFramerate();

  /// @brief Method get_deltaTime, addr 0x485066c, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_deltaTime();

  /// @brief Method get_fixedDeltaTime, addr 0x485070c, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_fixedDeltaTime();

  /// @brief Method get_fixedUnscaledTime, addr 0x48506bc, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_fixedUnscaledTime();

  /// @brief Method get_frameCount, addr 0x48507e4, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_frameCount();

  /// @brief Method get_maximumDeltaTime, addr 0x4850734, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_maximumDeltaTime();

  /// @brief Method get_realtimeSinceStartup, addr 0x484f8ec, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_realtimeSinceStartup();

  /// @brief Method get_smoothDeltaTime, addr 0x485075c, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_smoothDeltaTime();

  /// @brief Method get_time, addr 0x485061c, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_time();

  /// @brief Method get_timeScale, addr 0x4850784, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_timeScale();

  /// @brief Method get_timeSinceLevelLoad, addr 0x4850644, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_timeSinceLevelLoad();

  /// @brief Method get_unscaledDeltaTime, addr 0x48506e4, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_unscaledDeltaTime();

  /// @brief Method get_unscaledTime, addr 0x4850694, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_unscaledTime();

  /// @brief Method set_captureDeltaTime, addr 0x4850834, size 0x38, virtual false, abstract: false, final false
  static inline void set_captureDeltaTime(float_t value);

  /// @brief Method set_captureFramerate, addr 0x4850960, size 0x4c, virtual false, abstract: false, final false
  static inline void set_captureFramerate(int32_t value);

  /// @brief Method set_timeScale, addr 0x48507ac, size 0x38, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10905 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Time, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Time);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Time*, "UnityEngine", "Time");
