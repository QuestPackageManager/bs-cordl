#pragma once
// IWYU pragma private; include "System\Diagnostics\TraceInternal.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Diagnostics/zzzz__TraceInternal_def.hpp"
#include "System/Diagnostics/zzzz__TraceListenerCollection_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Diagnostics::TraceInternal.get_Listeners
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Diagnostics::TraceListenerCollection* (*)()>(&::System::Diagnostics::TraceInternal::get_Listeners)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x6397db0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceInternal*>(), { "get_Listeners", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceInternal.get_AutoFlush
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::Diagnostics::TraceInternal::get_AutoFlush)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x63980a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceInternal*>(), { "get_AutoFlush", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceInternal.get_UseGlobalLock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::Diagnostics::TraceInternal::get_UseGlobalLock)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6398b1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceInternal*>(), { "get_UseGlobalLock", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceInternal.get_IndentLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::System::Diagnostics::TraceInternal::get_IndentLevel)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6398b7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceInternal*>(), { "get_IndentLevel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceInternal.get_IndentSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::System::Diagnostics::TraceInternal::get_IndentSize)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6398bfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceInternal*>(), { "get_IndentSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceInternal.InitializeSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::Diagnostics::TraceInternal::InitializeSettings)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6398878;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceInternal*>(), { "InitializeSettings", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Diagnostics::TraceInternal::setStaticF_appName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "appName", ::System::Diagnostics::TraceInternal*>(std::forward<::StringW>(value));
}
inline ::StringW System::Diagnostics::TraceInternal::getStaticF_appName() {
  return ::cordl_internals::getStaticField<::StringW, "appName", ::System::Diagnostics::TraceInternal*>();
}
inline void System::Diagnostics::TraceInternal::setStaticF_listeners(::System::Diagnostics::TraceListenerCollection* value) {
  ::cordl_internals::setStaticField<::System::Diagnostics::TraceListenerCollection*, "listeners", ::System::Diagnostics::TraceInternal*>(
      std::forward<::System::Diagnostics::TraceListenerCollection*>(value));
}
inline ::System::Diagnostics::TraceListenerCollection* System::Diagnostics::TraceInternal::getStaticF_listeners() {
  return ::cordl_internals::getStaticField<::System::Diagnostics::TraceListenerCollection*, "listeners", ::System::Diagnostics::TraceInternal*>();
}
inline void System::Diagnostics::TraceInternal::setStaticF_autoFlush(bool value) {
  ::cordl_internals::setStaticField<bool, "autoFlush", ::System::Diagnostics::TraceInternal*>(std::forward<bool>(value));
}
inline bool System::Diagnostics::TraceInternal::getStaticF_autoFlush() {
  return ::cordl_internals::getStaticField<bool, "autoFlush", ::System::Diagnostics::TraceInternal*>();
}
inline void System::Diagnostics::TraceInternal::setStaticF_useGlobalLock(bool value) {
  ::cordl_internals::setStaticField<bool, "useGlobalLock", ::System::Diagnostics::TraceInternal*>(std::forward<bool>(value));
}
inline bool System::Diagnostics::TraceInternal::getStaticF_useGlobalLock() {
  return ::cordl_internals::getStaticField<bool, "useGlobalLock", ::System::Diagnostics::TraceInternal*>();
}
inline void System::Diagnostics::TraceInternal::setStaticF_indentLevel(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "indentLevel", ::System::Diagnostics::TraceInternal*>(std::forward<int32_t>(value));
}
inline int32_t System::Diagnostics::TraceInternal::getStaticF_indentLevel() {
  return ::cordl_internals::getStaticField<int32_t, "indentLevel", ::System::Diagnostics::TraceInternal*>();
}
inline void System::Diagnostics::TraceInternal::setStaticF_indentSize(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "indentSize", ::System::Diagnostics::TraceInternal*>(std::forward<int32_t>(value));
}
inline int32_t System::Diagnostics::TraceInternal::getStaticF_indentSize() {
  return ::cordl_internals::getStaticField<int32_t, "indentSize", ::System::Diagnostics::TraceInternal*>();
}
inline void System::Diagnostics::TraceInternal::setStaticF_critSec(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "critSec", ::System::Diagnostics::TraceInternal*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* System::Diagnostics::TraceInternal::getStaticF_critSec() {
  return ::cordl_internals::getStaticField<::System::Object*, "critSec", ::System::Diagnostics::TraceInternal*>();
}
inline ::System::Diagnostics::TraceListenerCollection* System::Diagnostics::TraceInternal::get_Listeners() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceInternal*>(), { "get_Listeners", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Diagnostics::TraceListenerCollection*>(nullptr, ___internal_method);
}
inline bool System::Diagnostics::TraceInternal::get_AutoFlush() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceInternal*>(), { "get_AutoFlush", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool System::Diagnostics::TraceInternal::get_UseGlobalLock() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceInternal*>(), { "get_UseGlobalLock", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline int32_t System::Diagnostics::TraceInternal::get_IndentLevel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceInternal*>(), { "get_IndentLevel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t System::Diagnostics::TraceInternal::get_IndentSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceInternal*>(), { "get_IndentSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void System::Diagnostics::TraceInternal::InitializeSettings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceInternal*>(), { "InitializeSettings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Diagnostics::TraceInternal::TraceInternal() {}
