#pragma once
// IWYU pragma private; include "System\Data\DataCommonEventSource.hpp"
#include "System/Diagnostics/Tracing/zzzz__EventSource_impl.hpp"
#include "System/Data/zzzz__DataCommonEventSource_def.hpp"
//  Writing Method size for method: ::System::Data::DataCommonEventSource.Trace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataCommonEventSource::*)(::StringW)>(&::System::Data::DataCommonEventSource::Trace)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x601d164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataCommonEventSource*>(), { "Trace", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataCommonEventSource.EnterScope
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Data::DataCommonEventSource::*)(::StringW)>(&::System::Data::DataCommonEventSource::EnterScope)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x601d174;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataCommonEventSource*>(), { "EnterScope", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataCommonEventSource.ExitScope
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataCommonEventSource::*)(int64_t)>(&::System::Data::DataCommonEventSource::ExitScope)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x601d1dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataCommonEventSource*>(), { "ExitScope", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataCommonEventSource._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataCommonEventSource::*)()>(&::System::Data::DataCommonEventSource::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601d1ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataCommonEventSource*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Data::DataCommonEventSource::setStaticF_Log(::System::Data::DataCommonEventSource* value) {
  ::cordl_internals::setStaticField<::System::Data::DataCommonEventSource*, "Log", ::System::Data::DataCommonEventSource*>(std::forward<::System::Data::DataCommonEventSource*>(value));
}
inline ::System::Data::DataCommonEventSource* System::Data::DataCommonEventSource::getStaticF_Log() {
  return ::cordl_internals::getStaticField<::System::Data::DataCommonEventSource*, "Log", ::System::Data::DataCommonEventSource*>();
}
inline void System::Data::DataCommonEventSource::setStaticF_s_nextScopeId(int64_t value) {
  ::cordl_internals::setStaticField<int64_t, "s_nextScopeId", ::System::Data::DataCommonEventSource*>(std::forward<int64_t>(value));
}
inline int64_t System::Data::DataCommonEventSource::getStaticF_s_nextScopeId() {
  return ::cordl_internals::getStaticField<int64_t, "s_nextScopeId", ::System::Data::DataCommonEventSource*>();
}
inline void System::Data::DataCommonEventSource::Trace(::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataCommonEventSource*>(), { "Trace", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
template <typename T0> inline void System::Data::DataCommonEventSource::Trace(::StringW format, T0 arg0) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Data::DataCommonEventSource*>(), { "Trace", { ::i2c::class_of<T0>() }, { ::i2c::type_of<::StringW>(), ::i2c::type_of<T0>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T0>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, format, arg0);
}
template <typename T0, typename T1> inline void System::Data::DataCommonEventSource::Trace(::StringW format, T0 arg0, T1 arg1) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataCommonEventSource*>(),
                                              { "Trace", { ::i2c::class_of<T0>(), ::i2c::class_of<T1>() }, { ::i2c::type_of<::StringW>(), ::i2c::type_of<T0>(), ::i2c::type_of<T1>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T0>(), ::i2c::class_of<T1>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, format, arg0, arg1);
}
template <typename T0, typename T1, typename T2> inline void System::Data::DataCommonEventSource::Trace(::StringW format, T0 arg0, T1 arg1, T2 arg2) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataCommonEventSource*>(),
                                                                                              { "Trace",
                                                                                                { ::i2c::class_of<T0>(), ::i2c::class_of<T1>(), ::i2c::class_of<T2>() },
                                                                                                { ::i2c::type_of<::StringW>(), ::i2c::type_of<T0>(), ::i2c::type_of<T1>(), ::i2c::type_of<T2>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T0>(), ::i2c::class_of<T1>(), ::i2c::class_of<T2>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, format, arg0, arg1, arg2);
}
template <typename T0, typename T1, typename T2, typename T3> inline void System::Data::DataCommonEventSource::Trace(::StringW format, T0 arg0, T1 arg1, T2 arg2, T3 arg3) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataCommonEventSource*>(),
                                                           { "Trace",
                                                             { ::i2c::class_of<T0>(), ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>() },
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<T0>(), ::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>() } })));
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T0>(), ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, format, arg0, arg1, arg2, arg3);
}
template <typename T0, typename T1, typename T2, typename T3, typename T4> inline void System::Data::DataCommonEventSource::Trace(::StringW format, T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataCommonEventSource*>(),
                                              { "Trace",
                                                { ::i2c::class_of<T0>(), ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>() },
                                                { ::i2c::type_of<::StringW>(), ::i2c::type_of<T0>(), ::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>(), ::i2c::type_of<T4>() } })));
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T0>(), ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, format, arg0, arg1, arg2, arg3, arg4);
}
template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
inline void System::Data::DataCommonEventSource::Trace(::StringW format, T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::DataCommonEventSource*>(),
                          { "Trace",
                            { ::i2c::class_of<T0>(), ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>() },
                            { ::i2c::type_of<::StringW>(), ::i2c::type_of<T0>(), ::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>(), ::i2c::type_of<T4>(), ::i2c::type_of<T5>(),
                              ::i2c::type_of<T6>() } })));
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T0>(), ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(),
                                                                                       ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, format, arg0, arg1, arg2, arg3, arg4, arg5, arg6);
}
inline int64_t System::Data::DataCommonEventSource::EnterScope(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataCommonEventSource*>(), { "EnterScope", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, message);
}
template <typename T1> inline int64_t System::Data::DataCommonEventSource::EnterScope(::StringW format, T1 arg1) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Data::DataCommonEventSource*>(), { "EnterScope", { ::i2c::class_of<T1>() }, { ::i2c::type_of<::StringW>(), ::i2c::type_of<T1>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T1>() })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, format, arg1);
}
template <typename T1, typename T2> inline int64_t System::Data::DataCommonEventSource::EnterScope(::StringW format, T1 arg1, T2 arg2) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataCommonEventSource*>(),
                                              { "EnterScope", { ::i2c::class_of<T1>(), ::i2c::class_of<T2>() }, { ::i2c::type_of<::StringW>(), ::i2c::type_of<T1>(), ::i2c::type_of<T2>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T1>(), ::i2c::class_of<T2>() })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, format, arg1, arg2);
}
template <typename T1, typename T2, typename T3> inline int64_t System::Data::DataCommonEventSource::EnterScope(::StringW format, T1 arg1, T2 arg2, T3 arg3) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataCommonEventSource*>(),
                                                                                              { "EnterScope",
                                                                                                { ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>() },
                                                                                                { ::i2c::type_of<::StringW>(), ::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>() })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, format, arg1, arg2, arg3);
}
template <typename T1, typename T2, typename T3, typename T4> inline int64_t System::Data::DataCommonEventSource::EnterScope(::StringW format, T1 arg1, T2 arg2, T3 arg3, T4 arg4) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataCommonEventSource*>(),
                                                           { "EnterScope",
                                                             { ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>() },
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>(), ::i2c::type_of<T4>() } })));
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>() })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, format, arg1, arg2, arg3, arg4);
}
inline void System::Data::DataCommonEventSource::ExitScope(int64_t scopeId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataCommonEventSource*>(), { "ExitScope", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scopeId);
}
inline void System::Data::DataCommonEventSource::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataCommonEventSource*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Data::DataCommonEventSource* System::Data::DataCommonEventSource::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::DataCommonEventSource*>());
}
// Ctor Parameters []
constexpr ::System::Data::DataCommonEventSource::DataCommonEventSource() {}
