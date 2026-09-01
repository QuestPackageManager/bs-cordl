#pragma once
// IWYU pragma private; include "Unity\Profiling\ProfilerMarker.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerCategory_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
//  Writing Method size for method: ::Unity::Profiling::ProfilerMarker_AutoScope._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Profiling::ProfilerMarker_AutoScope::*)(::System::IntPtr)>(&::Unity::Profiling::ProfilerMarker_AutoScope::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6a5d494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::ProfilerMarker_AutoScope>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::ProfilerMarker_AutoScope.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Profiling::ProfilerMarker_AutoScope::*)()>(&::Unity::Profiling::ProfilerMarker_AutoScope::Dispose)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6a5d518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::ProfilerMarker_AutoScope>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Profiling::ProfilerMarker_AutoScope::_ctor(::System::IntPtr markerPtr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::ProfilerMarker_AutoScope>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, markerPtr);
}
inline void Unity::Profiling::ProfilerMarker_AutoScope::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::ProfilerMarker_AutoScope>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Unity::Profiling::ProfilerMarker_AutoScope::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Unity::Profiling::ProfilerMarker_AutoScope::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Ptr", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Profiling::ProfilerMarker_AutoScope::ProfilerMarker_AutoScope(::System::IntPtr m_Ptr) noexcept {
  this->m_Ptr = m_Ptr;
}
// Ctor Parameters []
constexpr ::Unity::Profiling::ProfilerMarker_AutoScope::ProfilerMarker_AutoScope() {}
//  Writing Method size for method: ::Unity::Profiling::ProfilerMarker.get_Handle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Unity::Profiling::ProfilerMarker::*)()>(&::Unity::Profiling::ProfilerMarker::get_Handle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a5d2a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::ProfilerMarker>(), { "get_Handle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::ProfilerMarker._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Profiling::ProfilerMarker::*)(::StringW)>(&::Unity::Profiling::ProfilerMarker::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6a5d2ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::ProfilerMarker>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::ProfilerMarker._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Profiling::ProfilerMarker::*)(::Unity::Profiling::ProfilerCategory, ::StringW)>(&::Unity::Profiling::ProfilerMarker::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6a5d428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::ProfilerMarker>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Unity::Profiling::ProfilerCategory>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::ProfilerMarker.Auto
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Profiling::ProfilerMarker_AutoScope (::Unity::Profiling::ProfilerMarker::*)()>(&::Unity::Profiling::ProfilerMarker::Auto)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6a5d44c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::ProfilerMarker>(), { "Auto", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::IntPtr Unity::Profiling::ProfilerMarker::get_Handle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::ProfilerMarker>(), { "get_Handle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(*this, ___internal_method);
}
inline void Unity::Profiling::ProfilerMarker::_ctor(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::ProfilerMarker>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, name);
}
inline void Unity::Profiling::ProfilerMarker::_ctor(::Unity::Profiling::ProfilerCategory category, ::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::ProfilerMarker>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Unity::Profiling::ProfilerCategory>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, category, name);
}
inline ::Unity::Profiling::ProfilerMarker_AutoScope Unity::Profiling::ProfilerMarker::Auto() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::ProfilerMarker>(), { "Auto", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Profiling::ProfilerMarker_AutoScope>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Ptr", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Profiling::ProfilerMarker::ProfilerMarker(::System::IntPtr m_Ptr) noexcept {
  this->m_Ptr = m_Ptr;
}
// Ctor Parameters []
constexpr ::Unity::Profiling::ProfilerMarker::ProfilerMarker() {}
