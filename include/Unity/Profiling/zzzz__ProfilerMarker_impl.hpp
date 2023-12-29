#pragma once
#include "System/zzzz__IntPtr_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Unity::Profiling::__ProfilerMarker__AutoScope._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Profiling::__ProfilerMarker__AutoScope::*)(void*)>(
    &::Unity::Profiling::__ProfilerMarker__AutoScope::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2b38a68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::__ProfilerMarker__AutoScope>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::__ProfilerMarker__AutoScope.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Profiling::__ProfilerMarker__AutoScope::*)()>(
    &::Unity::Profiling::__ProfilerMarker__AutoScope::Dispose)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2b38b44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::__ProfilerMarker__AutoScope>::get(),
                                                                               "Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr Unity::Profiling::__ProfilerMarker__AutoScope::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void Unity::Profiling::__ProfilerMarker__AutoScope::_ctor(void* markerPtr) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::__ProfilerMarker__AutoScope>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, markerPtr);
}
inline void Unity::Profiling::__ProfilerMarker__AutoScope::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::__ProfilerMarker__AutoScope>::get(), "Dispose",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Ptr", ty: "void*", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Profiling::__ProfilerMarker__AutoScope::__ProfilerMarker__AutoScope(void* m_Ptr) noexcept {
  this->m_Ptr = m_Ptr;
}
// Ctor Parameters []
constexpr ::Unity::Profiling::__ProfilerMarker__AutoScope::__ProfilerMarker__AutoScope() {}
//  Writing Method size for method: ::Unity::Profiling::ProfilerMarker._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Profiling::ProfilerMarker::*)(::StringW)>(&::Unity::Profiling::ProfilerMarker::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2b38930;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerMarker>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::ProfilerMarker.Auto
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Profiling::__ProfilerMarker__AutoScope (::Unity::Profiling::ProfilerMarker::*)()>(
    &::Unity::Profiling::ProfilerMarker::Auto)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2b389e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerMarker>::get(), "Auto",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline void Unity::Profiling::ProfilerMarker::_ctor(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerMarker>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name);
}
inline ::Unity::Profiling::__ProfilerMarker__AutoScope Unity::Profiling::ProfilerMarker::Auto() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerMarker>::get(), "Auto",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Unity::Profiling::__ProfilerMarker__AutoScope, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Ptr", ty: "void*", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Profiling::ProfilerMarker::ProfilerMarker(void* m_Ptr) noexcept {
  this->m_Ptr = m_Ptr;
}
// Ctor Parameters []
constexpr ::Unity::Profiling::ProfilerMarker::ProfilerMarker() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
