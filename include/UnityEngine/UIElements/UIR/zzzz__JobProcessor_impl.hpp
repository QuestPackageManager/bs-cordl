#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/JobProcessor.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__JobProcessor_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::JobProcessor.ScheduleNudgeJobs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Jobs::JobHandle (*)(::System::IntPtr, int32_t)>(&::UnityEngine::UIElements::UIR::JobProcessor::ScheduleNudgeJobs)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6ccf488;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::JobProcessor*>(),
                                                                                           { "ScheduleNudgeJobs", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::JobProcessor.ScheduleConvertMeshJobs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Jobs::JobHandle (*)(::System::IntPtr, int32_t)>(&::UnityEngine::UIElements::UIR::JobProcessor::ScheduleConvertMeshJobs)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6ccf538;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::JobProcessor*>(),
                                                                                           { "ScheduleConvertMeshJobs", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::JobProcessor.ScheduleCopyMeshJobs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Jobs::JobHandle (*)(::System::IntPtr, int32_t)>(&::UnityEngine::UIElements::UIR::JobProcessor::ScheduleCopyMeshJobs)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6ccf5e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::JobProcessor*>(),
                                                                                           { "ScheduleCopyMeshJobs", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::JobProcessor.ScheduleNudgeJobs_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::by_ref<::Unity::Jobs::JobHandle>)>(
    &::UnityEngine::UIElements::UIR::JobProcessor::ScheduleNudgeJobs_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6ccf4e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::JobProcessor*>(),
                            { "ScheduleNudgeJobs_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Unity::Jobs::JobHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::JobProcessor.ScheduleConvertMeshJobs_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::by_ref<::Unity::Jobs::JobHandle>)>(
    &::UnityEngine::UIElements::UIR::JobProcessor::ScheduleConvertMeshJobs_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6ccf594;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::JobProcessor*>(),
                            { "ScheduleConvertMeshJobs_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Unity::Jobs::JobHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::JobProcessor.ScheduleCopyMeshJobs_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::by_ref<::Unity::Jobs::JobHandle>)>(
    &::UnityEngine::UIElements::UIR::JobProcessor::ScheduleCopyMeshJobs_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6ccf644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::JobProcessor*>(),
                            { "ScheduleCopyMeshJobs_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Unity::Jobs::JobHandle>>() } })));
    return ___internal_method;
  }
};
inline ::Unity::Jobs::JobHandle UnityEngine::UIElements::UIR::JobProcessor::ScheduleNudgeJobs(::System::IntPtr buffer, int32_t jobCount) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::JobProcessor*>(),
                                                                                         { "ScheduleNudgeJobs", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(nullptr, ___internal_method, buffer, jobCount);
}
inline ::Unity::Jobs::JobHandle UnityEngine::UIElements::UIR::JobProcessor::ScheduleConvertMeshJobs(::System::IntPtr buffer, int32_t jobCount) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::JobProcessor*>(),
                                                                                         { "ScheduleConvertMeshJobs", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(nullptr, ___internal_method, buffer, jobCount);
}
inline ::Unity::Jobs::JobHandle UnityEngine::UIElements::UIR::JobProcessor::ScheduleCopyMeshJobs(::System::IntPtr buffer, int32_t jobCount) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::JobProcessor*>(),
                                                                                         { "ScheduleCopyMeshJobs", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(nullptr, ___internal_method, buffer, jobCount);
}
inline void UnityEngine::UIElements::UIR::JobProcessor::ScheduleNudgeJobs_Injected(::System::IntPtr buffer, int32_t jobCount, ::by_ref<::Unity::Jobs::JobHandle> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::JobProcessor*>(),
                                       { "ScheduleNudgeJobs_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Unity::Jobs::JobHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer, jobCount, ret);
}
inline void UnityEngine::UIElements::UIR::JobProcessor::ScheduleConvertMeshJobs_Injected(::System::IntPtr buffer, int32_t jobCount, ::by_ref<::Unity::Jobs::JobHandle> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::JobProcessor*>(),
                          { "ScheduleConvertMeshJobs_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Unity::Jobs::JobHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer, jobCount, ret);
}
inline void UnityEngine::UIElements::UIR::JobProcessor::ScheduleCopyMeshJobs_Injected(::System::IntPtr buffer, int32_t jobCount, ::by_ref<::Unity::Jobs::JobHandle> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::JobProcessor*>(),
                          { "ScheduleCopyMeshJobs_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Unity::Jobs::JobHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer, jobCount, ret);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::JobProcessor::JobProcessor() {}
