#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRMetricsToolSDK.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRMetricsToolSDK_def.hpp"
#include "GlobalNamespace/zzzz__OVRMetricsToolSDK_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__AndroidJavaClass_def.hpp"
#include "UnityEngine/zzzz__AndroidJavaObject_def.hpp"
// Ctor Parameters [CppParam { name: "time", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "available_memory_MB", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "app_pss_MB", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "battery_level_percentage", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "battery_temperature_celcius", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "battery_current_now_milliamps", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "sensor_temperature_celcius", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "power_current", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "power_level_state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "power_voltage", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "power_wattage", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cpu_level", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "gpu_level", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cpu_frequency_MHz", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "gpu_frequency_MHz", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "mem_frequency_MHz", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "minimum_vsyncs", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "extra_latency_mode", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "average_frame_rate", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "display_refresh_rate", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "average_prediction_milliseconds", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "screen_tear_count", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "early_frame_count", ty: "int32_t", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "stale_frame_count", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "maximum_rotational_speed_degrees_per_second", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "foveation_level", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "eye_buffer_width", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "eye_buffer_height", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "app_gpu_time_microseconds", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "timewarp_gpu_time_microseconds", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "guardian_gpu_time_microseconds",
// ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cpu_utilization_percentage", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "cpu_utilization_percentage_core0", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cpu_utilization_percentage_core1", ty: "int32_t", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "cpu_utilization_percentage_core2", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cpu_utilization_percentage_core3", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "cpu_utilization_percentage_core4", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cpu_utilization_percentage_core5", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cpu_utilization_percentage_core6", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "cpu_utilization_percentage_core7", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "gpu_utilization_percentage", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "spacewarp_motion_vector_type", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "spacewarped_frames_per_second", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "app_vss_MB", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "app_rss_MB", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "app_dalvik_pss_MB", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "app_private_dirty_MB", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "app_private_clean_MB", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "app_uss_MB", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "stale_frames_consecutive", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "avg_vertices_per_frame", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "avg_fill_percentage", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "avg_inst_per_frag", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "avg_inst_per_vert", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "avg_textures_per_frag", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "percent_time_shading_frags", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "percent_time_shading_verts", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "percent_time_compute", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "percent_vertex_fetch_stall", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "percent_texture_fetch_stall", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "percent_texture_l1_miss", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "percent_texture_l2_miss", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "percent_texture_nearest_filtered", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "percent_texture_linear_filtered", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "percent_texture_anisotropic_filtered", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "vrshell_average_frame_rate", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "vrshell_gpu_time_microseconds", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "vrshell_and_guardian_gpu_time_microseconds", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRMetricsToolSDK_MetricsSnapshot::OVRMetricsToolSDK_MetricsSnapshot(
    int64_t time, int32_t available_memory_MB, int32_t app_pss_MB, int32_t battery_level_percentage, int32_t battery_temperature_celcius, int32_t battery_current_now_milliamps,
    int32_t sensor_temperature_celcius, int32_t power_current, int32_t power_level_state, int32_t power_voltage, int32_t power_wattage, int32_t cpu_level, int32_t gpu_level, int32_t cpu_frequency_MHz,
    int32_t gpu_frequency_MHz, int32_t mem_frequency_MHz, int32_t minimum_vsyncs, int32_t extra_latency_mode, int32_t average_frame_rate, int32_t display_refresh_rate,
    int32_t average_prediction_milliseconds, int32_t screen_tear_count, int32_t early_frame_count, int32_t stale_frame_count, int32_t maximum_rotational_speed_degrees_per_second,
    int32_t foveation_level, int32_t eye_buffer_width, int32_t eye_buffer_height, int32_t app_gpu_time_microseconds, int32_t timewarp_gpu_time_microseconds, int32_t guardian_gpu_time_microseconds,
    int32_t cpu_utilization_percentage, int32_t cpu_utilization_percentage_core0, int32_t cpu_utilization_percentage_core1, int32_t cpu_utilization_percentage_core2,
    int32_t cpu_utilization_percentage_core3, int32_t cpu_utilization_percentage_core4, int32_t cpu_utilization_percentage_core5, int32_t cpu_utilization_percentage_core6,
    int32_t cpu_utilization_percentage_core7, int32_t gpu_utilization_percentage, int32_t spacewarp_motion_vector_type, int32_t spacewarped_frames_per_second, int32_t app_vss_MB, int32_t app_rss_MB,
    int32_t app_dalvik_pss_MB, int32_t app_private_dirty_MB, int32_t app_private_clean_MB, int32_t app_uss_MB, int32_t stale_frames_consecutive, int32_t avg_vertices_per_frame,
    int32_t avg_fill_percentage, int32_t avg_inst_per_frag, int32_t avg_inst_per_vert, int32_t avg_textures_per_frag, int32_t percent_time_shading_frags, int32_t percent_time_shading_verts,
    int32_t percent_time_compute, int32_t percent_vertex_fetch_stall, int32_t percent_texture_fetch_stall, int32_t percent_texture_l1_miss, int32_t percent_texture_l2_miss,
    int32_t percent_texture_nearest_filtered, int32_t percent_texture_linear_filtered, int32_t percent_texture_anisotropic_filtered, int32_t vrshell_average_frame_rate,
    int32_t vrshell_gpu_time_microseconds, int32_t vrshell_and_guardian_gpu_time_microseconds) noexcept {
  this->time = time;
  this->available_memory_MB = available_memory_MB;
  this->app_pss_MB = app_pss_MB;
  this->battery_level_percentage = battery_level_percentage;
  this->battery_temperature_celcius = battery_temperature_celcius;
  this->battery_current_now_milliamps = battery_current_now_milliamps;
  this->sensor_temperature_celcius = sensor_temperature_celcius;
  this->power_current = power_current;
  this->power_level_state = power_level_state;
  this->power_voltage = power_voltage;
  this->power_wattage = power_wattage;
  this->cpu_level = cpu_level;
  this->gpu_level = gpu_level;
  this->cpu_frequency_MHz = cpu_frequency_MHz;
  this->gpu_frequency_MHz = gpu_frequency_MHz;
  this->mem_frequency_MHz = mem_frequency_MHz;
  this->minimum_vsyncs = minimum_vsyncs;
  this->extra_latency_mode = extra_latency_mode;
  this->average_frame_rate = average_frame_rate;
  this->display_refresh_rate = display_refresh_rate;
  this->average_prediction_milliseconds = average_prediction_milliseconds;
  this->screen_tear_count = screen_tear_count;
  this->early_frame_count = early_frame_count;
  this->stale_frame_count = stale_frame_count;
  this->maximum_rotational_speed_degrees_per_second = maximum_rotational_speed_degrees_per_second;
  this->foveation_level = foveation_level;
  this->eye_buffer_width = eye_buffer_width;
  this->eye_buffer_height = eye_buffer_height;
  this->app_gpu_time_microseconds = app_gpu_time_microseconds;
  this->timewarp_gpu_time_microseconds = timewarp_gpu_time_microseconds;
  this->guardian_gpu_time_microseconds = guardian_gpu_time_microseconds;
  this->cpu_utilization_percentage = cpu_utilization_percentage;
  this->cpu_utilization_percentage_core0 = cpu_utilization_percentage_core0;
  this->cpu_utilization_percentage_core1 = cpu_utilization_percentage_core1;
  this->cpu_utilization_percentage_core2 = cpu_utilization_percentage_core2;
  this->cpu_utilization_percentage_core3 = cpu_utilization_percentage_core3;
  this->cpu_utilization_percentage_core4 = cpu_utilization_percentage_core4;
  this->cpu_utilization_percentage_core5 = cpu_utilization_percentage_core5;
  this->cpu_utilization_percentage_core6 = cpu_utilization_percentage_core6;
  this->cpu_utilization_percentage_core7 = cpu_utilization_percentage_core7;
  this->gpu_utilization_percentage = gpu_utilization_percentage;
  this->spacewarp_motion_vector_type = spacewarp_motion_vector_type;
  this->spacewarped_frames_per_second = spacewarped_frames_per_second;
  this->app_vss_MB = app_vss_MB;
  this->app_rss_MB = app_rss_MB;
  this->app_dalvik_pss_MB = app_dalvik_pss_MB;
  this->app_private_dirty_MB = app_private_dirty_MB;
  this->app_private_clean_MB = app_private_clean_MB;
  this->app_uss_MB = app_uss_MB;
  this->stale_frames_consecutive = stale_frames_consecutive;
  this->avg_vertices_per_frame = avg_vertices_per_frame;
  this->avg_fill_percentage = avg_fill_percentage;
  this->avg_inst_per_frag = avg_inst_per_frag;
  this->avg_inst_per_vert = avg_inst_per_vert;
  this->avg_textures_per_frag = avg_textures_per_frag;
  this->percent_time_shading_frags = percent_time_shading_frags;
  this->percent_time_shading_verts = percent_time_shading_verts;
  this->percent_time_compute = percent_time_compute;
  this->percent_vertex_fetch_stall = percent_vertex_fetch_stall;
  this->percent_texture_fetch_stall = percent_texture_fetch_stall;
  this->percent_texture_l1_miss = percent_texture_l1_miss;
  this->percent_texture_l2_miss = percent_texture_l2_miss;
  this->percent_texture_nearest_filtered = percent_texture_nearest_filtered;
  this->percent_texture_linear_filtered = percent_texture_linear_filtered;
  this->percent_texture_anisotropic_filtered = percent_texture_anisotropic_filtered;
  this->vrshell_average_frame_rate = vrshell_average_frame_rate;
  this->vrshell_gpu_time_microseconds = vrshell_gpu_time_microseconds;
  this->vrshell_and_guardian_gpu_time_microseconds = vrshell_and_guardian_gpu_time_microseconds;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRMetricsToolSDK_MetricsSnapshot::OVRMetricsToolSDK_MetricsSnapshot() {}
//  Writing Method size for method: ::GlobalNamespace::OVRMetricsToolSDK.ovrMetricsTool_Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr)>(
    &::GlobalNamespace::OVRMetricsToolSDK::ovrMetricsTool_Initialize)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5d90fb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMetricsToolSDK*>::get(),
                                                                               "ovrMetricsTool_Initialize", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMetricsToolSDK.ovrMetricsTool_EnterVrMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRMetricsToolSDK::ovrMetricsTool_EnterVrMode)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d9104c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMetricsToolSDK*>::get(),
                                                                               "ovrMetricsTool_EnterVrMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMetricsToolSDK.ovrMetricsTool_AppendCsvDebugString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::GlobalNamespace::OVRMetricsToolSDK::ovrMetricsTool_AppendCsvDebugString)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5d910b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMetricsToolSDK*>::get(), "ovrMetricsTool_AppendCsvDebugString",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMetricsToolSDK.ovrMetricsTool_SetOverlayDebugString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::GlobalNamespace::OVRMetricsToolSDK::ovrMetricsTool_SetOverlayDebugString)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5d91154;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMetricsToolSDK*>::get(), "ovrMetricsTool_SetOverlayDebugString",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMetricsToolSDK.ovrMetricsTool_GetLatestEventJson
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::GlobalNamespace::OVRMetricsToolSDK::ovrMetricsTool_GetLatestEventJson)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5d911f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMetricsToolSDK*>::get(), "ovrMetricsTool_GetLatestEventJson",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMetricsToolSDK.ovrMetricsTool_LeaveVrMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRMetricsToolSDK::ovrMetricsTool_LeaveVrMode)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d91278;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMetricsToolSDK*>::get(),
                                                                               "ovrMetricsTool_LeaveVrMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMetricsToolSDK.ovrMetricsTool_Shutdown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRMetricsToolSDK::ovrMetricsTool_Shutdown)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d912e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMetricsToolSDK*>::get(),
                                                                               "ovrMetricsTool_Shutdown", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMetricsToolSDK.get_Instance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::OVRMetricsToolSDK> (*)()>(&::GlobalNamespace::OVRMetricsToolSDK::get_Instance)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5d91350;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMetricsToolSDK*>::get(), "get_Instance",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMetricsToolSDK.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::GlobalNamespace::OVRMetricsToolSDK::Initialize)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0x5d91494;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMetricsToolSDK*>::get(), "Initialize",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMetricsToolSDK.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRMetricsToolSDK::*)()>(&::GlobalNamespace::OVRMetricsToolSDK::Awake)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d917f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMetricsToolSDK*>::get(), "Awake",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMetricsToolSDK.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRMetricsToolSDK::*)()>(&::GlobalNamespace::OVRMetricsToolSDK::OnDestroy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d91924;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMetricsToolSDK*>::get(), "OnDestroy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMetricsToolSDK.OnApplicationPause
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRMetricsToolSDK::*)(bool)>(&::GlobalNamespace::OVRMetricsToolSDK::OnApplicationPause)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d91aac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMetricsToolSDK*>::get(), "OnApplicationPause",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMetricsToolSDK.EnterVrMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRMetricsToolSDK::*)()>(&::GlobalNamespace::OVRMetricsToolSDK::EnterVrMode)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5d91808;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMetricsToolSDK*>::get(), "EnterVrMode",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMetricsToolSDK.LeaveVrMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRMetricsToolSDK::*)()>(&::GlobalNamespace::OVRMetricsToolSDK::LeaveVrMode)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5d91934;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMetricsToolSDK*>::get(), "LeaveVrMode",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMetricsToolSDK.Shutdown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRMetricsToolSDK::*)()>(&::GlobalNamespace::OVRMetricsToolSDK::Shutdown)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5d91a48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMetricsToolSDK*>::get(), "Shutdown",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMetricsToolSDK.AppendCsvDebugString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRMetricsToolSDK::*)(::StringW)>(
    &::GlobalNamespace::OVRMetricsToolSDK::AppendCsvDebugString)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5d91ab8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMetricsToolSDK*>::get(), "AppendCsvDebugString",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMetricsToolSDK.SetOverlayDebugString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRMetricsToolSDK::*)(::StringW)>(
    &::GlobalNamespace::OVRMetricsToolSDK::SetOverlayDebugString)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5d91c28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMetricsToolSDK*>::get(), "SetOverlayDebugString",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMetricsToolSDK.GetLatestMetricsSnapshot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::GlobalNamespace::OVRMetricsToolSDK_MetricsSnapshot> (
    ::GlobalNamespace::OVRMetricsToolSDK::*)()>(&::GlobalNamespace::OVRMetricsToolSDK::GetLatestMetricsSnapshot)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x5d91d98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMetricsToolSDK*>::get(),
                                                                               "GetLatestMetricsSnapshot", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMetricsToolSDK._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRMetricsToolSDK::*)()>(&::GlobalNamespace::OVRMetricsToolSDK::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d91f68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMetricsToolSDK*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRMetricsToolSDK::setStaticF__MetricsService(::UnityEngine::AndroidJavaClass* value) {
  ::cordl_internals::setStaticField<::UnityEngine::AndroidJavaClass*, "_MetricsService", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMetricsToolSDK*>::get>(
      std::forward<::UnityEngine::AndroidJavaClass*>(value));
}
inline ::UnityEngine::AndroidJavaClass* GlobalNamespace::OVRMetricsToolSDK::getStaticF__MetricsService() {
  return ::cordl_internals::getStaticField<::UnityEngine::AndroidJavaClass*, "_MetricsService", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMetricsToolSDK*>::get>();
}
inline void GlobalNamespace::OVRMetricsToolSDK::setStaticF__Context(::UnityEngine::AndroidJavaObject* value) {
  ::cordl_internals::setStaticField<::UnityEngine::AndroidJavaObject*, "_Context", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMetricsToolSDK*>::get>(
      std::forward<::UnityEngine::AndroidJavaObject*>(value));
}
inline ::UnityEngine::AndroidJavaObject* GlobalNamespace::OVRMetricsToolSDK::getStaticF__Context() {
  return ::cordl_internals::getStaticField<::UnityEngine::AndroidJavaObject*, "_Context", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMetricsToolSDK*>::get>();
}
inline void GlobalNamespace::OVRMetricsToolSDK::setStaticF__NativeInitialized(bool value) {
  ::cordl_internals::setStaticField<bool, "_NativeInitialized", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMetricsToolSDK*>::get>(std::forward<bool>(value));
}
inline bool GlobalNamespace::OVRMetricsToolSDK::getStaticF__NativeInitialized() {
  return ::cordl_internals::getStaticField<bool, "_NativeInitialized", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMetricsToolSDK*>::get>();
}
inline void GlobalNamespace::OVRMetricsToolSDK::setStaticF__IsBound(bool value) {
  ::cordl_internals::setStaticField<bool, "_IsBound", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMetricsToolSDK*>::get>(std::forward<bool>(value));
}
inline bool GlobalNamespace::OVRMetricsToolSDK::getStaticF__IsBound() {
  return ::cordl_internals::getStaticField<bool, "_IsBound", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMetricsToolSDK*>::get>();
}
inline void GlobalNamespace::OVRMetricsToolSDK::setStaticF__Instance(::UnityW<::GlobalNamespace::OVRMetricsToolSDK> value) {
  ::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::OVRMetricsToolSDK>, "_Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMetricsToolSDK*>::get>(
      std::forward<::UnityW<::GlobalNamespace::OVRMetricsToolSDK>>(value));
}
inline ::UnityW<::GlobalNamespace::OVRMetricsToolSDK> GlobalNamespace::OVRMetricsToolSDK::getStaticF__Instance() {
  return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::OVRMetricsToolSDK>, "_Instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMetricsToolSDK*>::get>();
}
inline bool GlobalNamespace::OVRMetricsToolSDK::ovrMetricsTool_Initialize(::System::IntPtr jvm, ::System::IntPtr jni, ::System::IntPtr context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMetricsToolSDK*>::get(),
                                                                             "ovrMetricsTool_Initialize", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, jvm, jni, context);
}
inline bool GlobalNamespace::OVRMetricsToolSDK::ovrMetricsTool_EnterVrMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMetricsToolSDK*>::get(),
                                                                             "ovrMetricsTool_EnterVrMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::OVRMetricsToolSDK::ovrMetricsTool_AppendCsvDebugString(::StringW debugString) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMetricsToolSDK*>::get(), "ovrMetricsTool_AppendCsvDebugString",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, debugString);
}
inline bool GlobalNamespace::OVRMetricsToolSDK::ovrMetricsTool_SetOverlayDebugString(::StringW debugString) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMetricsToolSDK*>::get(), "ovrMetricsTool_SetOverlayDebugString",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, debugString);
}
inline ::StringW GlobalNamespace::OVRMetricsToolSDK::ovrMetricsTool_GetLatestEventJson() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMetricsToolSDK*>::get(), "ovrMetricsTool_GetLatestEventJson",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::OVRMetricsToolSDK::ovrMetricsTool_LeaveVrMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMetricsToolSDK*>::get(),
                                                                             "ovrMetricsTool_LeaveVrMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::OVRMetricsToolSDK::ovrMetricsTool_Shutdown() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMetricsToolSDK*>::get(),
                                                                             "ovrMetricsTool_Shutdown", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::OVRMetricsToolSDK> GlobalNamespace::OVRMetricsToolSDK::get_Instance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMetricsToolSDK*>::get(), "get_Instance",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::OVRMetricsToolSDK>, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRMetricsToolSDK::Initialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMetricsToolSDK*>::get(), "Initialize",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRMetricsToolSDK::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMetricsToolSDK*>::get(), "Awake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRMetricsToolSDK::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMetricsToolSDK*>::get(), "OnDestroy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRMetricsToolSDK::OnApplicationPause(bool pause) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMetricsToolSDK*>::get(), "OnApplicationPause",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pause);
}
inline void GlobalNamespace::OVRMetricsToolSDK::EnterVrMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMetricsToolSDK*>::get(), "EnterVrMode",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRMetricsToolSDK::LeaveVrMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMetricsToolSDK*>::get(), "LeaveVrMode",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRMetricsToolSDK::Shutdown() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMetricsToolSDK*>::get(), "Shutdown",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRMetricsToolSDK::AppendCsvDebugString(::StringW debugString) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMetricsToolSDK*>::get(), "AppendCsvDebugString",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, debugString);
}
inline bool GlobalNamespace::OVRMetricsToolSDK::SetOverlayDebugString(::StringW debugString) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMetricsToolSDK*>::get(), "SetOverlayDebugString",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, debugString);
}
inline ::System::Nullable_1<::GlobalNamespace::OVRMetricsToolSDK_MetricsSnapshot> GlobalNamespace::OVRMetricsToolSDK::GetLatestMetricsSnapshot() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMetricsToolSDK*>::get(),
                                                                             "GetLatestMetricsSnapshot", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::GlobalNamespace::OVRMetricsToolSDK_MetricsSnapshot>, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRMetricsToolSDK::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMetricsToolSDK*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRMetricsToolSDK* GlobalNamespace::OVRMetricsToolSDK::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRMetricsToolSDK*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRMetricsToolSDK::OVRMetricsToolSDK() {}
