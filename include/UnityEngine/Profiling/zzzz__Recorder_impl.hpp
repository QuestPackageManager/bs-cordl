#pragma once
// IWYU pragma private; include "UnityEngine/Profiling/Recorder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerRecorderOptions_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerRecorder_impl.hpp"
#include "UnityEngine/Profiling/zzzz__Recorder_def.hpp"
#include "Unity/Profiling/LowLevel/Unsafe/zzzz__ProfilerRecorderHandle_def.hpp"
//  Writing Method size for method: ::UnityEngine::Profiling::Recorder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Profiling::Recorder::*)()>(&::UnityEngine::Profiling::Recorder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69307b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Recorder*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Profiling::Recorder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Profiling::Recorder::*)(::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle)>(
    &::UnityEngine::Profiling::Recorder::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x69307b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Recorder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Profiling::Recorder.Finalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Profiling::Recorder::*)()>(&::UnityEngine::Profiling::Recorder::Finalize)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6930848;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Recorder*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Recorder*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Profiling::Recorder.get_enabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Profiling::Recorder::*)()>(&::UnityEngine::Profiling::Recorder::get_enabled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x69308a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Recorder*>::get(), "get_enabled",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Profiling::Recorder.set_enabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Profiling::Recorder::*)(bool)>(&::UnityEngine::Profiling::Recorder::set_enabled)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69308b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Recorder*>::get(), "set_enabled",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Profiling::Recorder.get_elapsedNanoseconds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::UnityEngine::Profiling::Recorder::*)()>(&::UnityEngine::Profiling::Recorder::get_elapsedNanoseconds)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6930920;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Recorder*>::get(),
                                                                               "get_elapsedNanoseconds", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Profiling::Recorder.get_gpuElapsedNanoseconds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::UnityEngine::Profiling::Recorder::*)()>(&::UnityEngine::Profiling::Recorder::get_gpuElapsedNanoseconds)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6930954;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Recorder*>::get(),
                                                                               "get_gpuElapsedNanoseconds", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Profiling::Recorder.get_sampleBlockCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Profiling::Recorder::*)()>(&::UnityEngine::Profiling::Recorder::get_sampleBlockCount)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6930988;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Recorder*>::get(),
                                                                               "get_sampleBlockCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Profiling::Recorder.get_gpuSampleBlockCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Profiling::Recorder::*)()>(&::UnityEngine::Profiling::Recorder::get_gpuSampleBlockCount)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x69309e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Recorder*>::get(),
                                                                               "get_gpuSampleBlockCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Profiling::Recorder.SetEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Profiling::Recorder::*)(bool)>(&::UnityEngine::Profiling::Recorder::SetEnabled)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x69308b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Recorder*>::get(), "SetEnabled",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr ::Unity::Profiling::ProfilerRecorder& UnityEngine::Profiling::Recorder::__cordl_internal_get_m_RecorderCPU() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RecorderCPU;
}
constexpr ::Unity::Profiling::ProfilerRecorder const& UnityEngine::Profiling::Recorder::__cordl_internal_get_m_RecorderCPU() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RecorderCPU;
}
constexpr void UnityEngine::Profiling::Recorder::__cordl_internal_set_m_RecorderCPU(::Unity::Profiling::ProfilerRecorder value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RecorderCPU = value;
}
constexpr ::Unity::Profiling::ProfilerRecorder& UnityEngine::Profiling::Recorder::__cordl_internal_get_m_RecorderGPU() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RecorderGPU;
}
constexpr ::Unity::Profiling::ProfilerRecorder const& UnityEngine::Profiling::Recorder::__cordl_internal_get_m_RecorderGPU() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RecorderGPU;
}
constexpr void UnityEngine::Profiling::Recorder::__cordl_internal_set_m_RecorderGPU(::Unity::Profiling::ProfilerRecorder value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RecorderGPU = value;
}
inline void UnityEngine::Profiling::Recorder::setStaticF_s_InvalidRecorder(::UnityEngine::Profiling::Recorder* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Profiling::Recorder*, "s_InvalidRecorder", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Recorder*>::get>(
      std::forward<::UnityEngine::Profiling::Recorder*>(value));
}
inline ::UnityEngine::Profiling::Recorder* UnityEngine::Profiling::Recorder::getStaticF_s_InvalidRecorder() {
  return ::cordl_internals::getStaticField<::UnityEngine::Profiling::Recorder*, "s_InvalidRecorder",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Recorder*>::get>();
}
inline void UnityEngine::Profiling::Recorder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Recorder*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Profiling::Recorder::_ctor(::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle handle) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Recorder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, handle);
}
inline void UnityEngine::Profiling::Recorder::Finalize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Recorder*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::Profiling::Recorder::get_enabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Recorder*>::get(), "get_enabled",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Profiling::Recorder::set_enabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Recorder*>::get(), "set_enabled",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int64_t UnityEngine::Profiling::Recorder::get_elapsedNanoseconds() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Recorder*>::get(),
                                                                             "get_elapsedNanoseconds", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline int64_t UnityEngine::Profiling::Recorder::get_gpuElapsedNanoseconds() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Recorder*>::get(),
                                                                             "get_gpuElapsedNanoseconds", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Profiling::Recorder::get_sampleBlockCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Recorder*>::get(), "get_sampleBlockCount",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Profiling::Recorder::get_gpuSampleBlockCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Recorder*>::get(),
                                                                             "get_gpuSampleBlockCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Profiling::Recorder::SetEnabled(bool state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Recorder*>::get(), "SetEnabled",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state);
}
inline ::UnityEngine::Profiling::Recorder* UnityEngine::Profiling::Recorder::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Profiling::Recorder*>());
}
inline ::UnityEngine::Profiling::Recorder* UnityEngine::Profiling::Recorder::New_ctor(::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle handle) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Profiling::Recorder*>(handle));
}
// Ctor Parameters []
constexpr ::UnityEngine::Profiling::Recorder::Recorder() {}
constexpr ::Unity::Profiling::ProfilerRecorderOptions UnityEngine::Profiling::Recorder::s_RecorderDefaultOptions{ static_cast<int32_t>(0x99) };
