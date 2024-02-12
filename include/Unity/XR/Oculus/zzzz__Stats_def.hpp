#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Stats)
namespace Unity::XR::Oculus {
class __Stats__AdaptivePerformance;
}
namespace Unity::XR::Oculus {
class __Stats__AppMetrics;
}
namespace Unity::XR::Oculus {
class __Stats__PerfMetrics;
}
namespace UnityEngine {
class IntegratedSubsystem;
}
// Forward declare root types
namespace Unity::XR::Oculus {
class Stats;
}
namespace Unity::XR::Oculus {
class __Stats__AdaptivePerformance;
}
namespace Unity::XR::Oculus {
class __Stats__AppMetrics;
}
namespace Unity::XR::Oculus {
class __Stats__PerfMetrics;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::Oculus::Stats);
MARK_REF_PTR_T(::Unity::XR::Oculus::__Stats__AdaptivePerformance);
MARK_REF_PTR_T(::Unity::XR::Oculus::__Stats__AppMetrics);
MARK_REF_PTR_T(::Unity::XR::Oculus::__Stats__PerfMetrics);
// Type: ::AdaptivePerformance
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::XR::Oculus {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15175))
// CS Name: ::Stats::AdaptivePerformance*
class CORDL_TYPE __Stats__AdaptivePerformance : public ::System::Object {
public:
  // Declarations
  /// @brief Method get_GPUAppTime, addr 0x2c75c14, size 0xb0, virtual false, abstract: false, final false
  static inline float_t get_GPUAppTime();

  /// @brief Method get_GPUCompositorTime, addr 0x2c75cc4, size 0xb0, virtual false, abstract: false, final false
  static inline float_t get_GPUCompositorTime();

  /// @brief Method get_MotionToPhoton, addr 0x2c75d74, size 0xb0, virtual false, abstract: false, final false
  static inline float_t get_MotionToPhoton();

  /// @brief Method get_RefreshRate, addr 0x2c75e24, size 0xb0, virtual false, abstract: false, final false
  static inline float_t get_RefreshRate();

  /// @brief Method get_BatteryTemp, addr 0x2c75ed4, size 0x7c, virtual false, abstract: false, final false
  static inline float_t get_BatteryTemp();

  /// @brief Method get_BatteryLevel, addr 0x2c75f50, size 0x7c, virtual false, abstract: false, final false
  static inline float_t get_BatteryLevel();

  /// @brief Method get_PowerSavingMode, addr 0x2c75fcc, size 0x84, virtual false, abstract: false, final false
  static inline bool get_PowerSavingMode();

  /// @brief Method get_AdaptivePerformanceScale, addr 0x2c76050, size 0x7c, virtual false, abstract: false, final false
  static inline float_t get_AdaptivePerformanceScale();

  /// @brief Method get_CPULevel, addr 0x2c760cc, size 0x94, virtual false, abstract: false, final false
  static inline int32_t get_CPULevel();

  /// @brief Method get_GPULevel, addr 0x2c76160, size 0x94, virtual false, abstract: false, final false
  static inline int32_t get_GPULevel();

  // Ctor Parameters [CppParam { name: "", ty: "__Stats__AdaptivePerformance", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Stats__AdaptivePerformance(__Stats__AdaptivePerformance&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Stats__AdaptivePerformance", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Stats__AdaptivePerformance(__Stats__AdaptivePerformance const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Stats__AdaptivePerformance();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::Oculus::__Stats__AdaptivePerformance, 0x10>, "Size mismatch!");

} // namespace Unity::XR::Oculus
// Type: ::PerfMetrics
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::XR::Oculus {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15176))
// CS Name: ::Stats::PerfMetrics*
class CORDL_TYPE __Stats__PerfMetrics : public ::System::Object {
public:
  // Declarations
  /// @brief Method get_AppCPUTime, addr 0x2c761f4, size 0x7c, virtual false, abstract: false, final false
  static inline float_t get_AppCPUTime();

  /// @brief Method get_AppGPUTime, addr 0x2c76270, size 0x7c, virtual false, abstract: false, final false
  static inline float_t get_AppGPUTime();

  /// @brief Method get_CompositorCPUTime, addr 0x2c762ec, size 0x7c, virtual false, abstract: false, final false
  static inline float_t get_CompositorCPUTime();

  /// @brief Method get_CompositorGPUTime, addr 0x2c76368, size 0x7c, virtual false, abstract: false, final false
  static inline float_t get_CompositorGPUTime();

  /// @brief Method get_GPUUtilization, addr 0x2c763e4, size 0x7c, virtual false, abstract: false, final false
  static inline float_t get_GPUUtilization();

  /// @brief Method get_CPUUtilizationAverage, addr 0x2c76460, size 0x7c, virtual false, abstract: false, final false
  static inline float_t get_CPUUtilizationAverage();

  /// @brief Method get_CPUUtilizationWorst, addr 0x2c764dc, size 0x7c, virtual false, abstract: false, final false
  static inline float_t get_CPUUtilizationWorst();

  /// @brief Method get_CPUClockFrequency, addr 0x2c76558, size 0x7c, virtual false, abstract: false, final false
  static inline float_t get_CPUClockFrequency();

  /// @brief Method get_GPUClockFrequency, addr 0x2c765d4, size 0x7c, virtual false, abstract: false, final false
  static inline float_t get_GPUClockFrequency();

  /// @brief Method EnablePerfMetrics, addr 0x2c76650, size 0x8, virtual false, abstract: false, final false
  static inline void EnablePerfMetrics(bool enable);

  // Ctor Parameters [CppParam { name: "", ty: "__Stats__PerfMetrics", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Stats__PerfMetrics(__Stats__PerfMetrics&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Stats__PerfMetrics", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Stats__PerfMetrics(__Stats__PerfMetrics const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Stats__PerfMetrics();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::Oculus::__Stats__PerfMetrics, 0x10>, "Size mismatch!");

} // namespace Unity::XR::Oculus
// Type: ::AppMetrics
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::XR::Oculus {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15177))
// CS Name: ::Stats::AppMetrics*
class CORDL_TYPE __Stats__AppMetrics : public ::System::Object {
public:
  // Declarations
  /// @brief Method get_AppQueueAheadTime, addr 0x2c76660, size 0x7c, virtual false, abstract: false, final false
  static inline float_t get_AppQueueAheadTime();

  /// @brief Method get_AppCPUElapsedTime, addr 0x2c766dc, size 0x7c, virtual false, abstract: false, final false
  static inline float_t get_AppCPUElapsedTime();

  /// @brief Method get_CompositorDroppedFrames, addr 0x2c76758, size 0x7c, virtual false, abstract: false, final false
  static inline float_t get_CompositorDroppedFrames();

  /// @brief Method get_CompositorLatency, addr 0x2c767d4, size 0x7c, virtual false, abstract: false, final false
  static inline float_t get_CompositorLatency();

  /// @brief Method get_CompositorCPUTime, addr 0x2c76850, size 0x7c, virtual false, abstract: false, final false
  static inline float_t get_CompositorCPUTime();

  /// @brief Method get_CPUStartToGPUEnd, addr 0x2c768cc, size 0x7c, virtual false, abstract: false, final false
  static inline float_t get_CPUStartToGPUEnd();

  /// @brief Method get_GPUEndToVsync, addr 0x2c76948, size 0x7c, virtual false, abstract: false, final false
  static inline float_t get_GPUEndToVsync();

  /// @brief Method EnableAppMetrics, addr 0x2c769c4, size 0x8, virtual false, abstract: false, final false
  static inline void EnableAppMetrics(bool enable);

  // Ctor Parameters [CppParam { name: "", ty: "__Stats__AppMetrics", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Stats__AppMetrics(__Stats__AppMetrics&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Stats__AppMetrics", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Stats__AppMetrics(__Stats__AppMetrics const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Stats__AppMetrics();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::Oculus::__Stats__AppMetrics, 0x10>, "Size mismatch!");

} // namespace Unity::XR::Oculus
// Type: Unity.XR.Oculus::Stats
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::XR::Oculus {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15178))
// CS Name: ::Unity.XR.Oculus::Stats*
class CORDL_TYPE Stats : public ::System::Object {
public:
  // Declarations
  using AppMetrics = ::Unity::XR::Oculus::__Stats__AppMetrics;

  using PerfMetrics = ::Unity::XR::Oculus::__Stats__PerfMetrics;

  using AdaptivePerformance = ::Unity::XR::Oculus::__Stats__AdaptivePerformance;

  /// @brief Field m_Display, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_Display, put = setStaticF_m_Display))::UnityEngine::IntegratedSubsystem* m_Display;

  /// @brief Field m_PluginVersion, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_PluginVersion, put = setStaticF_m_PluginVersion))::StringW m_PluginVersion;

  static inline void setStaticF_m_Display(::UnityEngine::IntegratedSubsystem* value);

  static inline ::UnityEngine::IntegratedSubsystem* getStaticF_m_Display();

  static inline void setStaticF_m_PluginVersion(::StringW value);

  static inline ::StringW getStaticF_m_PluginVersion();

  /// @brief Method get_PluginVersion, addr 0x2c75710, size 0x14c, virtual false, abstract: false, final false
  static inline ::StringW get_PluginVersion();

  /// @brief Method GetOculusDisplaySubsystem, addr 0x2c75860, size 0x344, virtual false, abstract: false, final false
  static inline ::UnityEngine::IntegratedSubsystem* GetOculusDisplaySubsystem();

  static inline ::Unity::XR::Oculus::Stats* New_ctor();

  /// @brief Method .ctor, addr 0x2c75ba4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Stats", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Stats(Stats&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Stats", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Stats(Stats const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Stats();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::Oculus::Stats, 0x10>, "Size mismatch!");

} // namespace Unity::XR::Oculus
NEED_NO_BOX(::Unity::XR::Oculus::Stats);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::Stats*, "Unity.XR.Oculus", "Stats");
NEED_NO_BOX(::Unity::XR::Oculus::__Stats__AdaptivePerformance);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::__Stats__AdaptivePerformance*, "Unity.XR.Oculus", "Stats/AdaptivePerformance");
NEED_NO_BOX(::Unity::XR::Oculus::__Stats__AppMetrics);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::__Stats__AppMetrics*, "Unity.XR.Oculus", "Stats/AppMetrics");
NEED_NO_BOX(::Unity::XR::Oculus::__Stats__PerfMetrics);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::__Stats__PerfMetrics*, "Unity.XR.Oculus", "Stats/PerfMetrics");
