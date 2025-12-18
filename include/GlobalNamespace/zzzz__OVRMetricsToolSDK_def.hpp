#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRMetricsToolSDK.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRMetricsToolSDK)
namespace GlobalNamespace {
struct OVRMetricsToolSDK_MetricsSnapshot;
}
namespace System {
struct IntPtr;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace UnityEngine {
class AndroidJavaClass;
}
namespace UnityEngine {
class AndroidJavaObject;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRMetricsToolSDK;
}
namespace GlobalNamespace {
struct OVRMetricsToolSDK_MetricsSnapshot;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRMetricsToolSDK);
MARK_VAL_T(::GlobalNamespace::OVRMetricsToolSDK_MetricsSnapshot);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRMetricsToolSDK/MetricsSnapshot
struct CORDL_TYPE OVRMetricsToolSDK_MetricsSnapshot {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRMetricsToolSDK_MetricsSnapshot();

  // Ctor Parameters [CppParam { name: "time", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "available_memory_MB", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "app_pss_MB", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "battery_level_percentage", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "battery_temperature_celcius", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "battery_current_now_milliamps", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "sensor_temperature_celcius", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "power_current", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "power_level_state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "power_voltage", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "power_wattage", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "cpu_level", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "gpu_level", ty: "int32_t", modifiers: "", def_value:
  // None }, CppParam { name: "cpu_frequency_MHz", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "gpu_frequency_MHz", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "mem_frequency_MHz", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "minimum_vsyncs", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "extra_latency_mode", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "average_frame_rate", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "display_refresh_rate", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "average_prediction_milliseconds", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "screen_tear_count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "early_frame_count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "stale_frame_count",
  // ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "maximum_rotational_speed_degrees_per_second", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "foveation_level", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "eye_buffer_width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "eye_buffer_height", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "app_gpu_time_microseconds", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "timewarp_gpu_time_microseconds", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "guardian_gpu_time_microseconds", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "cpu_utilization_percentage", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "cpu_utilization_percentage_core0", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "cpu_utilization_percentage_core1", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "cpu_utilization_percentage_core2", ty: "int32_t", modifiers: "", def_value: None }, CppParam
  // { name: "cpu_utilization_percentage_core3", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "cpu_utilization_percentage_core4", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "cpu_utilization_percentage_core5", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "cpu_utilization_percentage_core6", ty: "int32_t", modifiers: "", def_value:
  // None }, CppParam { name: "cpu_utilization_percentage_core7", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "gpu_utilization_percentage", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "spacewarp_motion_vector_type", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "spacewarped_frames_per_second", ty: "int32_t", modifiers:
  // "", def_value: None }, CppParam { name: "app_vss_MB", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "app_rss_MB", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "app_dalvik_pss_MB", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "app_private_dirty_MB", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "app_private_clean_MB", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "app_uss_MB", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "stale_frames_consecutive", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "avg_vertices_per_frame", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "avg_fill_percentage", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "avg_inst_per_frag", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "avg_inst_per_vert", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "avg_textures_per_frag", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "percent_time_shading_frags", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "percent_time_shading_verts", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "percent_time_compute", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "percent_vertex_fetch_stall", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "percent_texture_fetch_stall", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "percent_texture_l1_miss", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "percent_texture_l2_miss", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "percent_texture_nearest_filtered", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "percent_texture_linear_filtered", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "percent_texture_anisotropic_filtered", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "vrshell_average_frame_rate", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "vrshell_gpu_time_microseconds", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "vrshell_and_guardian_gpu_time_microseconds", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRMetricsToolSDK_MetricsSnapshot(int64_t time, int32_t available_memory_MB, int32_t app_pss_MB, int32_t battery_level_percentage, int32_t battery_temperature_celcius,
                                              int32_t battery_current_now_milliamps, int32_t sensor_temperature_celcius, int32_t power_current, int32_t power_level_state, int32_t power_voltage,
                                              int32_t power_wattage, int32_t cpu_level, int32_t gpu_level, int32_t cpu_frequency_MHz, int32_t gpu_frequency_MHz, int32_t mem_frequency_MHz,
                                              int32_t minimum_vsyncs, int32_t extra_latency_mode, int32_t average_frame_rate, int32_t display_refresh_rate, int32_t average_prediction_milliseconds,
                                              int32_t screen_tear_count, int32_t early_frame_count, int32_t stale_frame_count, int32_t maximum_rotational_speed_degrees_per_second,
                                              int32_t foveation_level, int32_t eye_buffer_width, int32_t eye_buffer_height, int32_t app_gpu_time_microseconds, int32_t timewarp_gpu_time_microseconds,
                                              int32_t guardian_gpu_time_microseconds, int32_t cpu_utilization_percentage, int32_t cpu_utilization_percentage_core0,
                                              int32_t cpu_utilization_percentage_core1, int32_t cpu_utilization_percentage_core2, int32_t cpu_utilization_percentage_core3,
                                              int32_t cpu_utilization_percentage_core4, int32_t cpu_utilization_percentage_core5, int32_t cpu_utilization_percentage_core6,
                                              int32_t cpu_utilization_percentage_core7, int32_t gpu_utilization_percentage, int32_t spacewarp_motion_vector_type, int32_t spacewarped_frames_per_second,
                                              int32_t app_vss_MB, int32_t app_rss_MB, int32_t app_dalvik_pss_MB, int32_t app_private_dirty_MB, int32_t app_private_clean_MB, int32_t app_uss_MB,
                                              int32_t stale_frames_consecutive, int32_t avg_vertices_per_frame, int32_t avg_fill_percentage, int32_t avg_inst_per_frag, int32_t avg_inst_per_vert,
                                              int32_t avg_textures_per_frag, int32_t percent_time_shading_frags, int32_t percent_time_shading_verts, int32_t percent_time_compute,
                                              int32_t percent_vertex_fetch_stall, int32_t percent_texture_fetch_stall, int32_t percent_texture_l1_miss, int32_t percent_texture_l2_miss,
                                              int32_t percent_texture_nearest_filtered, int32_t percent_texture_linear_filtered, int32_t percent_texture_anisotropic_filtered,
                                              int32_t vrshell_average_frame_rate, int32_t vrshell_gpu_time_microseconds, int32_t vrshell_and_guardian_gpu_time_microseconds) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23074 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x118 };

  /// @brief Field time, offset: 0x0, size: 0x8, def value: None
  int64_t time;

  /// @brief Field available_memory_MB, offset: 0x8, size: 0x4, def value: None
  int32_t available_memory_MB;

  /// @brief Field app_pss_MB, offset: 0xc, size: 0x4, def value: None
  int32_t app_pss_MB;

  /// @brief Field battery_level_percentage, offset: 0x10, size: 0x4, def value: None
  int32_t battery_level_percentage;

  /// @brief Field battery_temperature_celcius, offset: 0x14, size: 0x4, def value: None
  int32_t battery_temperature_celcius;

  /// @brief Field battery_current_now_milliamps, offset: 0x18, size: 0x4, def value: None
  int32_t battery_current_now_milliamps;

  /// @brief Field sensor_temperature_celcius, offset: 0x1c, size: 0x4, def value: None
  int32_t sensor_temperature_celcius;

  /// @brief Field power_current, offset: 0x20, size: 0x4, def value: None
  int32_t power_current;

  /// @brief Field power_level_state, offset: 0x24, size: 0x4, def value: None
  int32_t power_level_state;

  /// @brief Field power_voltage, offset: 0x28, size: 0x4, def value: None
  int32_t power_voltage;

  /// @brief Field power_wattage, offset: 0x2c, size: 0x4, def value: None
  int32_t power_wattage;

  /// @brief Field cpu_level, offset: 0x30, size: 0x4, def value: None
  int32_t cpu_level;

  /// @brief Field gpu_level, offset: 0x34, size: 0x4, def value: None
  int32_t gpu_level;

  /// @brief Field cpu_frequency_MHz, offset: 0x38, size: 0x4, def value: None
  int32_t cpu_frequency_MHz;

  /// @brief Field gpu_frequency_MHz, offset: 0x3c, size: 0x4, def value: None
  int32_t gpu_frequency_MHz;

  /// @brief Field mem_frequency_MHz, offset: 0x40, size: 0x4, def value: None
  int32_t mem_frequency_MHz;

  /// @brief Field minimum_vsyncs, offset: 0x44, size: 0x4, def value: None
  int32_t minimum_vsyncs;

  /// @brief Field extra_latency_mode, offset: 0x48, size: 0x4, def value: None
  int32_t extra_latency_mode;

  /// @brief Field average_frame_rate, offset: 0x4c, size: 0x4, def value: None
  int32_t average_frame_rate;

  /// @brief Field display_refresh_rate, offset: 0x50, size: 0x4, def value: None
  int32_t display_refresh_rate;

  /// @brief Field average_prediction_milliseconds, offset: 0x54, size: 0x4, def value: None
  int32_t average_prediction_milliseconds;

  /// @brief Field screen_tear_count, offset: 0x58, size: 0x4, def value: None
  int32_t screen_tear_count;

  /// @brief Field early_frame_count, offset: 0x5c, size: 0x4, def value: None
  int32_t early_frame_count;

  /// @brief Field stale_frame_count, offset: 0x60, size: 0x4, def value: None
  int32_t stale_frame_count;

  /// @brief Field maximum_rotational_speed_degrees_per_second, offset: 0x64, size: 0x4, def value: None
  int32_t maximum_rotational_speed_degrees_per_second;

  /// @brief Field foveation_level, offset: 0x68, size: 0x4, def value: None
  int32_t foveation_level;

  /// @brief Field eye_buffer_width, offset: 0x6c, size: 0x4, def value: None
  int32_t eye_buffer_width;

  /// @brief Field eye_buffer_height, offset: 0x70, size: 0x4, def value: None
  int32_t eye_buffer_height;

  /// @brief Field app_gpu_time_microseconds, offset: 0x74, size: 0x4, def value: None
  int32_t app_gpu_time_microseconds;

  /// @brief Field timewarp_gpu_time_microseconds, offset: 0x78, size: 0x4, def value: None
  int32_t timewarp_gpu_time_microseconds;

  /// @brief Field guardian_gpu_time_microseconds, offset: 0x7c, size: 0x4, def value: None
  int32_t guardian_gpu_time_microseconds;

  /// @brief Field cpu_utilization_percentage, offset: 0x80, size: 0x4, def value: None
  int32_t cpu_utilization_percentage;

  /// @brief Field cpu_utilization_percentage_core0, offset: 0x84, size: 0x4, def value: None
  int32_t cpu_utilization_percentage_core0;

  /// @brief Field cpu_utilization_percentage_core1, offset: 0x88, size: 0x4, def value: None
  int32_t cpu_utilization_percentage_core1;

  /// @brief Field cpu_utilization_percentage_core2, offset: 0x8c, size: 0x4, def value: None
  int32_t cpu_utilization_percentage_core2;

  /// @brief Field cpu_utilization_percentage_core3, offset: 0x90, size: 0x4, def value: None
  int32_t cpu_utilization_percentage_core3;

  /// @brief Field cpu_utilization_percentage_core4, offset: 0x94, size: 0x4, def value: None
  int32_t cpu_utilization_percentage_core4;

  /// @brief Field cpu_utilization_percentage_core5, offset: 0x98, size: 0x4, def value: None
  int32_t cpu_utilization_percentage_core5;

  /// @brief Field cpu_utilization_percentage_core6, offset: 0x9c, size: 0x4, def value: None
  int32_t cpu_utilization_percentage_core6;

  /// @brief Field cpu_utilization_percentage_core7, offset: 0xa0, size: 0x4, def value: None
  int32_t cpu_utilization_percentage_core7;

  /// @brief Field gpu_utilization_percentage, offset: 0xa4, size: 0x4, def value: None
  int32_t gpu_utilization_percentage;

  /// @brief Field spacewarp_motion_vector_type, offset: 0xa8, size: 0x4, def value: None
  int32_t spacewarp_motion_vector_type;

  /// @brief Field spacewarped_frames_per_second, offset: 0xac, size: 0x4, def value: None
  int32_t spacewarped_frames_per_second;

  /// @brief Field app_vss_MB, offset: 0xb0, size: 0x4, def value: None
  int32_t app_vss_MB;

  /// @brief Field app_rss_MB, offset: 0xb4, size: 0x4, def value: None
  int32_t app_rss_MB;

  /// @brief Field app_dalvik_pss_MB, offset: 0xb8, size: 0x4, def value: None
  int32_t app_dalvik_pss_MB;

  /// @brief Field app_private_dirty_MB, offset: 0xbc, size: 0x4, def value: None
  int32_t app_private_dirty_MB;

  /// @brief Field app_private_clean_MB, offset: 0xc0, size: 0x4, def value: None
  int32_t app_private_clean_MB;

  /// @brief Field app_uss_MB, offset: 0xc4, size: 0x4, def value: None
  int32_t app_uss_MB;

  /// @brief Field stale_frames_consecutive, offset: 0xc8, size: 0x4, def value: None
  int32_t stale_frames_consecutive;

  /// @brief Field avg_vertices_per_frame, offset: 0xcc, size: 0x4, def value: None
  int32_t avg_vertices_per_frame;

  /// @brief Field avg_fill_percentage, offset: 0xd0, size: 0x4, def value: None
  int32_t avg_fill_percentage;

  /// @brief Field avg_inst_per_frag, offset: 0xd4, size: 0x4, def value: None
  int32_t avg_inst_per_frag;

  /// @brief Field avg_inst_per_vert, offset: 0xd8, size: 0x4, def value: None
  int32_t avg_inst_per_vert;

  /// @brief Field avg_textures_per_frag, offset: 0xdc, size: 0x4, def value: None
  int32_t avg_textures_per_frag;

  /// @brief Field percent_time_shading_frags, offset: 0xe0, size: 0x4, def value: None
  int32_t percent_time_shading_frags;

  /// @brief Field percent_time_shading_verts, offset: 0xe4, size: 0x4, def value: None
  int32_t percent_time_shading_verts;

  /// @brief Field percent_time_compute, offset: 0xe8, size: 0x4, def value: None
  int32_t percent_time_compute;

  /// @brief Field percent_vertex_fetch_stall, offset: 0xec, size: 0x4, def value: None
  int32_t percent_vertex_fetch_stall;

  /// @brief Field percent_texture_fetch_stall, offset: 0xf0, size: 0x4, def value: None
  int32_t percent_texture_fetch_stall;

  /// @brief Field percent_texture_l1_miss, offset: 0xf4, size: 0x4, def value: None
  int32_t percent_texture_l1_miss;

  /// @brief Field percent_texture_l2_miss, offset: 0xf8, size: 0x4, def value: None
  int32_t percent_texture_l2_miss;

  /// @brief Field percent_texture_nearest_filtered, offset: 0xfc, size: 0x4, def value: None
  int32_t percent_texture_nearest_filtered;

  /// @brief Field percent_texture_linear_filtered, offset: 0x100, size: 0x4, def value: None
  int32_t percent_texture_linear_filtered;

  /// @brief Field percent_texture_anisotropic_filtered, offset: 0x104, size: 0x4, def value: None
  int32_t percent_texture_anisotropic_filtered;

  /// @brief Field vrshell_average_frame_rate, offset: 0x108, size: 0x4, def value: None
  int32_t vrshell_average_frame_rate;

  /// @brief Field vrshell_gpu_time_microseconds, offset: 0x10c, size: 0x4, def value: None
  int32_t vrshell_gpu_time_microseconds;

  /// @brief Field vrshell_and_guardian_gpu_time_microseconds, offset: 0x110, size: 0x4, def value: None
  int32_t vrshell_and_guardian_gpu_time_microseconds;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRMetricsToolSDK_MetricsSnapshot, time) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMetricsToolSDK_MetricsSnapshot, available_memory_MB) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMetricsToolSDK_MetricsSnapshot, app_pss_MB) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMetricsToolSDK_MetricsSnapshot, battery_level_percentage) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMetricsToolSDK_MetricsSnapshot, battery_temperature_celcius) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMetricsToolSDK_MetricsSnapshot, battery_current_now_milliamps) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMetricsToolSDK_MetricsSnapshot, sensor_temperature_celcius) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMetricsToolSDK_MetricsSnapshot, power_current) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMetricsToolSDK_MetricsSnapshot, power_level_state) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMetricsToolSDK_MetricsSnapshot, power_voltage) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMetricsToolSDK_MetricsSnapshot, power_wattage) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMetricsToolSDK_MetricsSnapshot, cpu_level) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMetricsToolSDK_MetricsSnapshot, gpu_level) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMetricsToolSDK_MetricsSnapshot, cpu_frequency_MHz) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMetricsToolSDK_MetricsSnapshot, gpu_frequency_MHz) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMetricsToolSDK_MetricsSnapshot, mem_frequency_MHz) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMetricsToolSDK_MetricsSnapshot, minimum_vsyncs) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMetricsToolSDK_MetricsSnapshot, extra_latency_mode) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMetricsToolSDK_MetricsSnapshot, average_frame_rate) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMetricsToolSDK_MetricsSnapshot, display_refresh_rate) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMetricsToolSDK_MetricsSnapshot, average_prediction_milliseconds) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMetricsToolSDK_MetricsSnapshot, screen_tear_count) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMetricsToolSDK_MetricsSnapshot, early_frame_count) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMetricsToolSDK_MetricsSnapshot, stale_frame_count) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMetricsToolSDK_MetricsSnapshot, maximum_rotational_speed_degrees_per_second) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMetricsToolSDK_MetricsSnapshot, foveation_level) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMetricsToolSDK_MetricsSnapshot, eye_buffer_width) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMetricsToolSDK_MetricsSnapshot, eye_buffer_height) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMetricsToolSDK_MetricsSnapshot, app_gpu_time_microseconds) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMetricsToolSDK_MetricsSnapshot, timewarp_gpu_time_microseconds) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMetricsToolSDK_MetricsSnapshot, guardian_gpu_time_microseconds) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMetricsToolSDK_MetricsSnapshot, cpu_utilization_percentage) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMetricsToolSDK_MetricsSnapshot, cpu_utilization_percentage_core0) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMetricsToolSDK_MetricsSnapshot, cpu_utilization_percentage_core1) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMetricsToolSDK_MetricsSnapshot, cpu_utilization_percentage_core2) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMetricsToolSDK_MetricsSnapshot, cpu_utilization_percentage_core3) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMetricsToolSDK_MetricsSnapshot, cpu_utilization_percentage_core4) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMetricsToolSDK_MetricsSnapshot, cpu_utilization_percentage_core5) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMetricsToolSDK_MetricsSnapshot, cpu_utilization_percentage_core6) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMetricsToolSDK_MetricsSnapshot, cpu_utilization_percentage_core7) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMetricsToolSDK_MetricsSnapshot, gpu_utilization_percentage) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMetricsToolSDK_MetricsSnapshot, spacewarp_motion_vector_type) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMetricsToolSDK_MetricsSnapshot, spacewarped_frames_per_second) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMetricsToolSDK_MetricsSnapshot, app_vss_MB) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMetricsToolSDK_MetricsSnapshot, app_rss_MB) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMetricsToolSDK_MetricsSnapshot, app_dalvik_pss_MB) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMetricsToolSDK_MetricsSnapshot, app_private_dirty_MB) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMetricsToolSDK_MetricsSnapshot, app_private_clean_MB) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMetricsToolSDK_MetricsSnapshot, app_uss_MB) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMetricsToolSDK_MetricsSnapshot, stale_frames_consecutive) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMetricsToolSDK_MetricsSnapshot, avg_vertices_per_frame) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMetricsToolSDK_MetricsSnapshot, avg_fill_percentage) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMetricsToolSDK_MetricsSnapshot, avg_inst_per_frag) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMetricsToolSDK_MetricsSnapshot, avg_inst_per_vert) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMetricsToolSDK_MetricsSnapshot, avg_textures_per_frag) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMetricsToolSDK_MetricsSnapshot, percent_time_shading_frags) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMetricsToolSDK_MetricsSnapshot, percent_time_shading_verts) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMetricsToolSDK_MetricsSnapshot, percent_time_compute) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMetricsToolSDK_MetricsSnapshot, percent_vertex_fetch_stall) == 0xec, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMetricsToolSDK_MetricsSnapshot, percent_texture_fetch_stall) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMetricsToolSDK_MetricsSnapshot, percent_texture_l1_miss) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMetricsToolSDK_MetricsSnapshot, percent_texture_l2_miss) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMetricsToolSDK_MetricsSnapshot, percent_texture_nearest_filtered) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMetricsToolSDK_MetricsSnapshot, percent_texture_linear_filtered) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMetricsToolSDK_MetricsSnapshot, percent_texture_anisotropic_filtered) == 0x104, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMetricsToolSDK_MetricsSnapshot, vrshell_average_frame_rate) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMetricsToolSDK_MetricsSnapshot, vrshell_gpu_time_microseconds) == 0x10c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMetricsToolSDK_MetricsSnapshot, vrshell_and_guardian_gpu_time_microseconds) == 0x110, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRMetricsToolSDK_MetricsSnapshot, 0x118>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRMetricsToolSDK
class CORDL_TYPE OVRMetricsToolSDK : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using MetricsSnapshot = ::GlobalNamespace::OVRMetricsToolSDK_MetricsSnapshot;

  /// @brief Field _Context, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__Context, put = setStaticF__Context)) ::UnityEngine::AndroidJavaObject* _Context;

  /// @brief Field _Instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__Instance, put = setStaticF__Instance)) ::UnityW<::GlobalNamespace::OVRMetricsToolSDK> _Instance;

  /// @brief Field _IsBound, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF__IsBound, put = setStaticF__IsBound)) bool _IsBound;

  /// @brief Field _MetricsService, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__MetricsService, put = setStaticF__MetricsService)) ::UnityEngine::AndroidJavaClass* _MetricsService;

  /// @brief Field _NativeInitialized, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF__NativeInitialized, put = setStaticF__NativeInitialized)) bool _NativeInitialized;

  /// @brief Method AppendCsvDebugString, addr 0x5d91ab8, size 0x170, virtual false, abstract: false, final false
  inline bool AppendCsvDebugString(::StringW debugString);

  /// @brief Method Awake, addr 0x5d917f8, size 0x10, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method EnterVrMode, addr 0x5d91808, size 0x11c, virtual false, abstract: false, final false
  inline void EnterVrMode();

  /// @brief Method GetLatestMetricsSnapshot, addr 0x5d91d98, size 0x1d0, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::GlobalNamespace::OVRMetricsToolSDK_MetricsSnapshot> GetLatestMetricsSnapshot();

  /// @brief Method Initialize, addr 0x5d91494, size 0x364, virtual false, abstract: false, final false
  static inline void Initialize();

  /// @brief Method LeaveVrMode, addr 0x5d91934, size 0x114, virtual false, abstract: false, final false
  inline void LeaveVrMode();

  static inline ::GlobalNamespace::OVRMetricsToolSDK* New_ctor();

  /// @brief Method OnApplicationPause, addr 0x5d91aac, size 0xc, virtual false, abstract: false, final false
  inline void OnApplicationPause(bool pause);

  /// @brief Method OnDestroy, addr 0x5d91924, size 0x10, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method SetOverlayDebugString, addr 0x5d91c28, size 0x170, virtual false, abstract: false, final false
  inline bool SetOverlayDebugString(::StringW debugString);

  /// @brief Method Shutdown, addr 0x5d91a48, size 0x64, virtual false, abstract: false, final false
  inline void Shutdown();

  /// @brief Method .ctor, addr 0x5d91f68, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::AndroidJavaObject* getStaticF__Context();

  static inline ::UnityW<::GlobalNamespace::OVRMetricsToolSDK> getStaticF__Instance();

  static inline bool getStaticF__IsBound();

  static inline ::UnityEngine::AndroidJavaClass* getStaticF__MetricsService();

  static inline bool getStaticF__NativeInitialized();

  /// @brief Method get_Instance, addr 0x5d91350, size 0x144, virtual false, abstract: false, final false
  static inline ::UnityW<::GlobalNamespace::OVRMetricsToolSDK> get_Instance();

  /// @brief Method ovrMetricsTool_AppendCsvDebugString, addr 0x5d910b8, size 0x9c, virtual false, abstract: false, final false
  static inline bool ovrMetricsTool_AppendCsvDebugString(::StringW debugString);

  /// @brief Method ovrMetricsTool_EnterVrMode, addr 0x5d9104c, size 0x6c, virtual false, abstract: false, final false
  static inline bool ovrMetricsTool_EnterVrMode();

  /// @brief Method ovrMetricsTool_GetLatestEventJson, addr 0x5d911f0, size 0x88, virtual false, abstract: false, final false
  static inline ::StringW ovrMetricsTool_GetLatestEventJson();

  /// @brief Method ovrMetricsTool_Initialize, addr 0x5d90fb0, size 0x9c, virtual false, abstract: false, final false
  static inline bool ovrMetricsTool_Initialize(::System::IntPtr jvm, ::System::IntPtr jni, ::System::IntPtr context);

  /// @brief Method ovrMetricsTool_LeaveVrMode, addr 0x5d91278, size 0x6c, virtual false, abstract: false, final false
  static inline bool ovrMetricsTool_LeaveVrMode();

  /// @brief Method ovrMetricsTool_SetOverlayDebugString, addr 0x5d91154, size 0x9c, virtual false, abstract: false, final false
  static inline bool ovrMetricsTool_SetOverlayDebugString(::StringW debugString);

  /// @brief Method ovrMetricsTool_Shutdown, addr 0x5d912e4, size 0x6c, virtual false, abstract: false, final false
  static inline bool ovrMetricsTool_Shutdown();

  static inline void setStaticF__Context(::UnityEngine::AndroidJavaObject* value);

  static inline void setStaticF__Instance(::UnityW<::GlobalNamespace::OVRMetricsToolSDK> value);

  static inline void setStaticF__IsBound(bool value);

  static inline void setStaticF__MetricsService(::UnityEngine::AndroidJavaClass* value);

  static inline void setStaticF__NativeInitialized(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRMetricsToolSDK();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRMetricsToolSDK", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRMetricsToolSDK(OVRMetricsToolSDK&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRMetricsToolSDK", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRMetricsToolSDK(OVRMetricsToolSDK const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23075 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRMetricsToolSDK, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRMetricsToolSDK);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRMetricsToolSDK*, "", "OVRMetricsToolSDK");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRMetricsToolSDK_MetricsSnapshot, "", "OVRMetricsToolSDK/MetricsSnapshot");
