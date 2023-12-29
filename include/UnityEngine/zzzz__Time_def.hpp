#pragma once
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
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10109))
// CS Name: ::UnityEngine::Time*
class CORDL_TYPE Time : public ::System::Object {
public:
  // Declarations
  /// @brief Method get_time addr 0x2b65df4 size 0x28 virtual false final false
  static inline float_t get_time();

  /// @brief Method get_timeSinceLevelLoad addr 0x2b65e1c size 0x28 virtual false final false
  static inline float_t get_timeSinceLevelLoad();

  /// @brief Method get_deltaTime addr 0x2b65e44 size 0x28 virtual false final false
  static inline float_t get_deltaTime();

  /// @brief Method get_unscaledTime addr 0x2b65e6c size 0x28 virtual false final false
  static inline float_t get_unscaledTime();

  /// @brief Method get_fixedUnscaledTime addr 0x2b65e94 size 0x28 virtual false final false
  static inline float_t get_fixedUnscaledTime();

  /// @brief Method get_unscaledDeltaTime addr 0x2b65ebc size 0x28 virtual false final false
  static inline float_t get_unscaledDeltaTime();

  /// @brief Method get_fixedDeltaTime addr 0x2b65ee4 size 0x28 virtual false final false
  static inline float_t get_fixedDeltaTime();

  /// @brief Method get_maximumDeltaTime addr 0x2b65f0c size 0x28 virtual false final false
  static inline float_t get_maximumDeltaTime();

  /// @brief Method get_smoothDeltaTime addr 0x2b65f34 size 0x28 virtual false final false
  static inline float_t get_smoothDeltaTime();

  /// @brief Method get_timeScale addr 0x2b65f5c size 0x28 virtual false final false
  static inline float_t get_timeScale();

  /// @brief Method set_timeScale addr 0x2b65f84 size 0x38 virtual false final false
  static inline void set_timeScale(float_t value);

  /// @brief Method get_frameCount addr 0x2b65fbc size 0x28 virtual false final false
  static inline int32_t get_frameCount();

  /// @brief Method get_realtimeSinceStartup addr 0x2b65fe4 size 0x28 virtual false final false
  static inline float_t get_realtimeSinceStartup();

  /// @brief Method get_captureDeltaTime addr 0x2b6600c size 0x28 virtual false final false
  static inline float_t get_captureDeltaTime();

  /// @brief Method set_captureDeltaTime addr 0x2b66034 size 0x38 virtual false final false
  static inline void set_captureDeltaTime(float_t value);

  /// @brief Method get_captureFramerate addr 0x2b6606c size 0x104 virtual false final false
  static inline int32_t get_captureFramerate();

  /// @brief Method set_captureFramerate addr 0x2b66170 size 0x4c virtual false final false
  static inline void set_captureFramerate(int32_t value);

  // Ctor Parameters [CppParam { name: "", ty: "Time", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Time(Time&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Time", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Time(Time const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Time();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Time, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Time);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Time*, "UnityEngine", "Time");
