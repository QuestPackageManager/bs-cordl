#pragma once
// IWYU pragma private; include "UnityEngine/Profiling/Profiler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Profiling/zzzz__Profiler_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::Profiling::Profiler.set_logFile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::UnityEngine::Profiling::Profiler::set_logFile)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x6930434;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Profiler*>::get(), "set_logFile", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Profiling::Profiler.set_enableBinaryLog
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::UnityEngine::Profiling::Profiler::set_enableBinaryLog)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6930594;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Profiler*>::get(), "set_enableBinaryLog",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Profiling::Profiler.set_maxUsedMemory
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&::UnityEngine::Profiling::Profiler::set_maxUsedMemory)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x69305d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Profiler*>::get(), "set_maxUsedMemory", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Profiling::Profiler.get_enabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::UnityEngine::Profiling::Profiler::get_enabled)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x693060c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Profiler*>::get(), "get_enabled",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Profiling::Profiler.set_enabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::UnityEngine::Profiling::Profiler::set_enabled)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6930634;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Profiler*>::get(), "set_enabled",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Profiling::Profiler.GetRuntimeMemorySizeLong
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(::UnityEngine::Object*)>(&::UnityEngine::Profiling::Profiler::GetRuntimeMemorySizeLong)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6930670;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Profiler*>::get(), "GetRuntimeMemorySizeLong", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Profiling::Profiler.GetMonoUsedSizeLong
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)()>(&::UnityEngine::Profiling::Profiler::GetMonoUsedSizeLong)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x693073c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Profiler*>::get(),
                                                                               "GetMonoUsedSizeLong", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Profiling::Profiler.GetTotalAllocatedMemoryLong
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)()>(&::UnityEngine::Profiling::Profiler::GetTotalAllocatedMemoryLong)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6930764;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Profiler*>::get(),
                                                                               "GetTotalAllocatedMemoryLong", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Profiling::Profiler.GetTotalReservedMemoryLong
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)()>(&::UnityEngine::Profiling::Profiler::GetTotalReservedMemoryLong)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x693078c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Profiler*>::get(),
                                                                               "GetTotalReservedMemoryLong", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Profiling::Profiler.set_logFile_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::Profiling::Profiler::set_logFile_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6930558;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Profiler*>::get(), "set_logFile_Injected", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Profiling::Profiler.GetRuntimeMemorySizeLong_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(::System::IntPtr)>(&::UnityEngine::Profiling::Profiler::GetRuntimeMemorySizeLong_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6930700;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Profiler*>::get(), "GetRuntimeMemorySizeLong_Injected",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Profiling::Profiler::set_logFile(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Profiler*>::get(), "set_logFile", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Profiling::Profiler::set_enableBinaryLog(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Profiler*>::get(), "set_enableBinaryLog",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Profiling::Profiler::set_maxUsedMemory(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Profiler*>::get(), "set_maxUsedMemory",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline bool UnityEngine::Profiling::Profiler::get_enabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Profiler*>::get(), "get_enabled",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Profiling::Profiler::set_enabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Profiler*>::get(), "set_enabled",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline int64_t UnityEngine::Profiling::Profiler::GetRuntimeMemorySizeLong(::UnityEngine::Object* o) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Profiler*>::get(), "GetRuntimeMemorySizeLong", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, o);
}
inline int64_t UnityEngine::Profiling::Profiler::GetMonoUsedSizeLong() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Profiler*>::get(), "GetMonoUsedSizeLong",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method);
}
inline int64_t UnityEngine::Profiling::Profiler::GetTotalAllocatedMemoryLong() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Profiler*>::get(),
                                                                             "GetTotalAllocatedMemoryLong", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method);
}
inline int64_t UnityEngine::Profiling::Profiler::GetTotalReservedMemoryLong() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Profiler*>::get(),
                                                                             "GetTotalReservedMemoryLong", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Profiling::Profiler::set_logFile_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Profiler*>::get(), "set_logFile_Injected", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline int64_t UnityEngine::Profiling::Profiler::GetRuntimeMemorySizeLong_Injected(::System::IntPtr o) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Profiler*>::get(), "GetRuntimeMemorySizeLong_Injected",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, o);
}
// Ctor Parameters []
constexpr ::UnityEngine::Profiling::Profiler::Profiler() {}
