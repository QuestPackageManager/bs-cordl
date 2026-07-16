#pragma once
// IWYU pragma private; include "System/Diagnostics/Debugger.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Diagnostics/zzzz__Debugger_def.hpp"
//  Writing Method size for method: ::System::Diagnostics::Debugger.IsLogging
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::Diagnostics::Debugger::IsLogging)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bde92c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Debugger*>(), { "IsLogging", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Debugger.Log_icall
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::by_ref<::StringW>, ::by_ref<::StringW>)>(&::System::Diagnostics::Debugger::Log_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5bde934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Debugger*>(),
                                                             { "Log_icall", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Debugger.Log
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::StringW, ::StringW)>(&::System::Diagnostics::Debugger::Log)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5bde938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Debugger*>(), { "Log", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Debugger.NotifyOfCrossThreadDependency
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::Diagnostics::Debugger::NotifyOfCrossThreadDependency)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5bde990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Debugger*>(), { "NotifyOfCrossThreadDependency", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Diagnostics::Debugger::setStaticF_DefaultCategory(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "DefaultCategory", ::System::Diagnostics::Debugger*>(std::forward<::StringW>(value));
}
inline ::StringW System::Diagnostics::Debugger::getStaticF_DefaultCategory() {
  return ::cordl_internals::getStaticField<::StringW, "DefaultCategory", ::System::Diagnostics::Debugger*>();
}
inline bool System::Diagnostics::Debugger::IsLogging() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Debugger*>(), { "IsLogging", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void System::Diagnostics::Debugger::Log_icall(int32_t level, ::by_ref<::StringW> category, ::by_ref<::StringW> message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Debugger*>(),
                                                           { "Log_icall", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, level, category, message);
}
inline void System::Diagnostics::Debugger::Log(int32_t level, ::StringW category, ::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Debugger*>(), { "Log", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, level, category, message);
}
inline void System::Diagnostics::Debugger::NotifyOfCrossThreadDependency() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Debugger*>(), { "NotifyOfCrossThreadDependency", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Diagnostics::Debugger::Debugger() {}
