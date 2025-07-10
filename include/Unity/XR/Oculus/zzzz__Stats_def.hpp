#pragma once
// IWYU pragma private; include "Unity/XR/Oculus/Stats.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Stats)
namespace Unity::XR::Oculus {
class Stats_AdaptivePerformance;
}
namespace Unity::XR::Oculus {
class Stats_AppMetrics;
}
namespace Unity::XR::Oculus {
class Stats_PerfMetrics;
}
namespace UnityEngine {
class IntegratedSubsystem;
}
// Forward declare root types
namespace Unity::XR::Oculus {
class Stats;
}
namespace Unity::XR::Oculus {
class Stats_AdaptivePerformance;
}
namespace Unity::XR::Oculus {
class Stats_AppMetrics;
}
namespace Unity::XR::Oculus {
class Stats_PerfMetrics;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::Oculus::Stats);
MARK_REF_PTR_T(::Unity::XR::Oculus::Stats_AdaptivePerformance);
MARK_REF_PTR_T(::Unity::XR::Oculus::Stats_AppMetrics);
MARK_REF_PTR_T(::Unity::XR::Oculus::Stats_PerfMetrics);
// Dependencies System.Object
namespace Unity::XR::Oculus {
// Is value type: false
// CS Name: Unity.XR.Oculus.Stats/AdaptivePerformance
class CORDL_TYPE Stats_AdaptivePerformance : public ::System::Object {
public:
  // Declarations
  /// @brief Method get_AdaptivePerformanceScale, addr 0x4834f5c, size 0x7c, virtual false, abstract: false, final false
  static inline float_t get_AdaptivePerformanceScale();

  /// @brief Method get_BatteryLevel, addr 0x4834e5c, size 0x7c, virtual false, abstract: false, final false
  static inline float_t get_BatteryLevel();

  /// @brief Method get_BatteryTemp, addr 0x4834de0, size 0x7c, virtual false, abstract: false, final false
  static inline float_t get_BatteryTemp();

  /// @brief Method get_CPULevel, addr 0x4834fd8, size 0x94, virtual false, abstract: false, final false
  static inline int32_t get_CPULevel();

  /// @brief Method get_GPUAppTime, addr 0x4834b20, size 0xb0, virtual false, abstract: false, final false
  static inline float_t get_GPUAppTime();

  /// @brief Method get_GPUCompositorTime, addr 0x4834bd0, size 0xb0, virtual false, abstract: false, final false
  static inline float_t get_GPUCompositorTime();

  /// @brief Method get_GPULevel, addr 0x483506c, size 0x94, virtual false, abstract: false, final false
  static inline int32_t get_GPULevel();

  /// @brief Method get_MotionToPhoton, addr 0x4834c80, size 0xb0, virtual false, abstract: false, final false
  static inline float_t get_MotionToPhoton();

  /// @brief Method get_PowerSavingMode, addr 0x4834ed8, size 0x84, virtual false, abstract: false, final false
  static inline bool get_PowerSavingMode();

  /// @brief Method get_RefreshRate, addr 0x4834d30, size 0xb0, virtual false, abstract: false, final false
  static inline float_t get_RefreshRate();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Stats_AdaptivePerformance();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Stats_AdaptivePerformance", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Stats_AdaptivePerformance(Stats_AdaptivePerformance&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Stats_AdaptivePerformance", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Stats_AdaptivePerformance(Stats_AdaptivePerformance const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17407 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::Oculus::Stats_AdaptivePerformance, 0x10>, "Size mismatch!");

} // namespace Unity::XR::Oculus
// Dependencies System.Object
namespace Unity::XR::Oculus {
// Is value type: false
// CS Name: Unity.XR.Oculus.Stats/PerfMetrics
class CORDL_TYPE Stats_PerfMetrics : public ::System::Object {
public:
  // Declarations
  /// @brief Method EnablePerfMetrics, addr 0x483555c, size 0x8, virtual false, abstract: false, final false
  static inline void EnablePerfMetrics(bool enable);

  /// @brief Method get_AppCPUTime, addr 0x4835100, size 0x7c, virtual false, abstract: false, final false
  static inline float_t get_AppCPUTime();

  /// @brief Method get_AppGPUTime, addr 0x483517c, size 0x7c, virtual false, abstract: false, final false
  static inline float_t get_AppGPUTime();

  /// @brief Method get_CPUClockFrequency, addr 0x4835464, size 0x7c, virtual false, abstract: false, final false
  static inline float_t get_CPUClockFrequency();

  /// @brief Method get_CPUUtilizationAverage, addr 0x483536c, size 0x7c, virtual false, abstract: false, final false
  static inline float_t get_CPUUtilizationAverage();

  /// @brief Method get_CPUUtilizationWorst, addr 0x48353e8, size 0x7c, virtual false, abstract: false, final false
  static inline float_t get_CPUUtilizationWorst();

  /// @brief Method get_CompositorCPUTime, addr 0x48351f8, size 0x7c, virtual false, abstract: false, final false
  static inline float_t get_CompositorCPUTime();

  /// @brief Method get_CompositorGPUTime, addr 0x4835274, size 0x7c, virtual false, abstract: false, final false
  static inline float_t get_CompositorGPUTime();

  /// @brief Method get_GPUClockFrequency, addr 0x48354e0, size 0x7c, virtual false, abstract: false, final false
  static inline float_t get_GPUClockFrequency();

  /// @brief Method get_GPUUtilization, addr 0x48352f0, size 0x7c, virtual false, abstract: false, final false
  static inline float_t get_GPUUtilization();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Stats_PerfMetrics();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Stats_PerfMetrics", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Stats_PerfMetrics(Stats_PerfMetrics&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Stats_PerfMetrics", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Stats_PerfMetrics(Stats_PerfMetrics const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17408 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::Oculus::Stats_PerfMetrics, 0x10>, "Size mismatch!");

} // namespace Unity::XR::Oculus
// Dependencies System.Object
namespace Unity::XR::Oculus {
// Is value type: false
// CS Name: Unity.XR.Oculus.Stats/AppMetrics
class CORDL_TYPE Stats_AppMetrics : public ::System::Object {
public:
  // Declarations
  /// @brief Method EnableAppMetrics, addr 0x48358d0, size 0x8, virtual false, abstract: false, final false
  static inline void EnableAppMetrics(bool enable);

  /// @brief Method get_AppCPUElapsedTime, addr 0x48355e8, size 0x7c, virtual false, abstract: false, final false
  static inline float_t get_AppCPUElapsedTime();

  /// @brief Method get_AppQueueAheadTime, addr 0x483556c, size 0x7c, virtual false, abstract: false, final false
  static inline float_t get_AppQueueAheadTime();

  /// @brief Method get_CPUStartToGPUEnd, addr 0x48357d8, size 0x7c, virtual false, abstract: false, final false
  static inline float_t get_CPUStartToGPUEnd();

  /// @brief Method get_CompositorCPUTime, addr 0x483575c, size 0x7c, virtual false, abstract: false, final false
  static inline float_t get_CompositorCPUTime();

  /// @brief Method get_CompositorDroppedFrames, addr 0x4835664, size 0x7c, virtual false, abstract: false, final false
  static inline float_t get_CompositorDroppedFrames();

  /// @brief Method get_CompositorLatency, addr 0x48356e0, size 0x7c, virtual false, abstract: false, final false
  static inline float_t get_CompositorLatency();

  /// @brief Method get_GPUEndToVsync, addr 0x4835854, size 0x7c, virtual false, abstract: false, final false
  static inline float_t get_GPUEndToVsync();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Stats_AppMetrics();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Stats_AppMetrics", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Stats_AppMetrics(Stats_AppMetrics&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Stats_AppMetrics", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Stats_AppMetrics(Stats_AppMetrics const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17409 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::Oculus::Stats_AppMetrics, 0x10>, "Size mismatch!");

} // namespace Unity::XR::Oculus
// Dependencies System.Object
namespace Unity::XR::Oculus {
// Is value type: false
// CS Name: Unity.XR.Oculus.Stats
class CORDL_TYPE Stats : public ::System::Object {
public:
  // Declarations
  using AdaptivePerformance = ::Unity::XR::Oculus::Stats_AdaptivePerformance;

  using AppMetrics = ::Unity::XR::Oculus::Stats_AppMetrics;

  using PerfMetrics = ::Unity::XR::Oculus::Stats_PerfMetrics;

  /// @brief Field m_Display, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_Display, put = setStaticF_m_Display)) ::UnityEngine::IntegratedSubsystem* m_Display;

  /// @brief Field m_PluginVersion, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_PluginVersion, put = setStaticF_m_PluginVersion)) ::StringW m_PluginVersion;

  /// @brief Method GetOculusDisplaySubsystem, addr 0x4834774, size 0x33c, virtual false, abstract: false, final false
  static inline ::UnityEngine::IntegratedSubsystem* GetOculusDisplaySubsystem();

  static inline ::Unity::XR::Oculus::Stats* New_ctor();

  /// @brief Method .ctor, addr 0x4834ab0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::IntegratedSubsystem* getStaticF_m_Display();

  static inline ::StringW getStaticF_m_PluginVersion();

  /// @brief Method get_PluginVersion, addr 0x4834624, size 0x14c, virtual false, abstract: false, final false
  static inline ::StringW get_PluginVersion();

  static inline void setStaticF_m_Display(::UnityEngine::IntegratedSubsystem* value);

  static inline void setStaticF_m_PluginVersion(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Stats();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Stats", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Stats(Stats&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Stats", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Stats(Stats const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17410 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::Oculus::Stats, 0x10>, "Size mismatch!");

} // namespace Unity::XR::Oculus
NEED_NO_BOX(::Unity::XR::Oculus::Stats);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::Stats*, "Unity.XR.Oculus", "Stats");
NEED_NO_BOX(::Unity::XR::Oculus::Stats_AdaptivePerformance);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::Stats_AdaptivePerformance*, "Unity.XR.Oculus", "Stats/AdaptivePerformance");
NEED_NO_BOX(::Unity::XR::Oculus::Stats_AppMetrics);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::Stats_AppMetrics*, "Unity.XR.Oculus", "Stats/AppMetrics");
NEED_NO_BOX(::Unity::XR::Oculus::Stats_PerfMetrics);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::Stats_PerfMetrics*, "Unity.XR.Oculus", "Stats/PerfMetrics");
