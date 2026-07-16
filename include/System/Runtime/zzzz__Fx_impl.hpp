#pragma once
// IWYU pragma private; include "System/Runtime/Fx.hpp"
#include "System/Runtime/zzzz__Fx_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__SystemException_impl.hpp"
#include "System/Runtime/zzzz__Fx_def.hpp"
#include "System/Runtime/Diagnostics/zzzz__EtwDiagnosticTrace_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Runtime/zzzz__ExceptionTrace_def.hpp"
#include "System/Runtime/zzzz__Fx_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::System::Runtime::Fx_InternalException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Fx_InternalException::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Runtime::Fx_InternalException::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6181bf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Fx_InternalException*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
inline void System::Runtime::Fx_InternalException::_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Fx_InternalException*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline ::System::Runtime::Fx_InternalException* System::Runtime::Fx_InternalException::New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                                ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Fx_InternalException*>(info, context));
}
// Ctor Parameters []
constexpr ::System::Runtime::Fx_InternalException::Fx_InternalException() {}
//  Writing Method size for method: ::System::Runtime::Fx_FatalInternalException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Fx_FatalInternalException::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Runtime::Fx_FatalInternalException::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6181bf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Fx_FatalInternalException*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
inline void System::Runtime::Fx_FatalInternalException::_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Fx_FatalInternalException*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline ::System::Runtime::Fx_FatalInternalException* System::Runtime::Fx_FatalInternalException::New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                                          ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Fx_FatalInternalException*>(info, context));
}
// Ctor Parameters []
constexpr ::System::Runtime::Fx_FatalInternalException::Fx_FatalInternalException() {}
//  Writing Method size for method: ::System::Runtime::Fx___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Fx___c::*)()>(&::System::Runtime::Fx___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6181c54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Fx___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Fx___c._InitializeTracing_b__8_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Fx___c::*)()>(&::System::Runtime::Fx___c::_InitializeTracing_b__8_0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6181c58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Fx___c*>(), { "<InitializeTracing>b__8_0", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Runtime::Fx___c::setStaticF___9(::System::Runtime::Fx___c* value) {
  ::cordl_internals::setStaticField<::System::Runtime::Fx___c*, "<>9", ::System::Runtime::Fx___c*>(std::forward<::System::Runtime::Fx___c*>(value));
}
inline ::System::Runtime::Fx___c* System::Runtime::Fx___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::System::Runtime::Fx___c*, "<>9", ::System::Runtime::Fx___c*>();
}
inline void System::Runtime::Fx___c::setStaticF___9__8_0(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "<>9__8_0", ::System::Runtime::Fx___c*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* System::Runtime::Fx___c::getStaticF___9__8_0() {
  return ::cordl_internals::getStaticField<::System::Action*, "<>9__8_0", ::System::Runtime::Fx___c*>();
}
inline void System::Runtime::Fx___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Fx___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Runtime::Fx___c::_InitializeTracing_b__8_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Fx___c*>(), { "<InitializeTracing>b__8_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::Fx___c* System::Runtime::Fx___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Fx___c*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::Fx___c::Fx___c() {}
//  Writing Method size for method: ::System::Runtime::Fx.get_Exception
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::ExceptionTrace* (*)()>(&::System::Runtime::Fx::get_Exception)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6180f58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Fx*>(), { "get_Exception", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Fx.get_Trace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Diagnostics::EtwDiagnosticTrace* (*)()>(&::System::Runtime::Fx::get_Trace)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6181010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Fx*>(), { "get_Trace", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Fx.InitializeTracing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Diagnostics::EtwDiagnosticTrace* (*)()>(&::System::Runtime::Fx::InitializeTracing)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x6181070;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Fx*>(), { "InitializeTracing", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Fx.IsFatal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Exception*)>(&::System::Runtime::Fx::IsFatal)> {
  constexpr static std::size_t size = 0x470;
  constexpr static std::size_t addrs = 0x618169c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Fx*>(), { "IsFatal", {}, { ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Fx.UpdateLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Runtime::Diagnostics::EtwDiagnosticTrace*)>(&::System::Runtime::Fx::UpdateLevel)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6181608;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Fx*>(), { "UpdateLevel", {}, { ::i2c::type_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Fx.UpdateLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::Runtime::Fx::UpdateLevel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6181be0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Fx*>(), { "UpdateLevel", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Runtime::Fx::setStaticF_exceptionTrace(::System::Runtime::ExceptionTrace* value) {
  ::cordl_internals::setStaticField<::System::Runtime::ExceptionTrace*, "exceptionTrace", ::System::Runtime::Fx*>(std::forward<::System::Runtime::ExceptionTrace*>(value));
}
inline ::System::Runtime::ExceptionTrace* System::Runtime::Fx::getStaticF_exceptionTrace() {
  return ::cordl_internals::getStaticField<::System::Runtime::ExceptionTrace*, "exceptionTrace", ::System::Runtime::Fx*>();
}
inline void System::Runtime::Fx::setStaticF_diagnosticTrace(::System::Runtime::Diagnostics::EtwDiagnosticTrace* value) {
  ::cordl_internals::setStaticField<::System::Runtime::Diagnostics::EtwDiagnosticTrace*, "diagnosticTrace", ::System::Runtime::Fx*>(
      std::forward<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(value));
}
inline ::System::Runtime::Diagnostics::EtwDiagnosticTrace* System::Runtime::Fx::getStaticF_diagnosticTrace() {
  return ::cordl_internals::getStaticField<::System::Runtime::Diagnostics::EtwDiagnosticTrace*, "diagnosticTrace", ::System::Runtime::Fx*>();
}
inline ::System::Runtime::ExceptionTrace* System::Runtime::Fx::get_Exception() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Fx*>(), { "get_Exception", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::ExceptionTrace*>(nullptr, ___internal_method);
}
inline ::System::Runtime::Diagnostics::EtwDiagnosticTrace* System::Runtime::Fx::get_Trace() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Fx*>(), { "get_Trace", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(nullptr, ___internal_method);
}
inline ::System::Runtime::Diagnostics::EtwDiagnosticTrace* System::Runtime::Fx::InitializeTracing() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Fx*>(), { "InitializeTracing", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(nullptr, ___internal_method);
}
inline bool System::Runtime::Fx::IsFatal(::System::Exception* exception) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Fx*>(), { "IsFatal", {}, { ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, exception);
}
inline void System::Runtime::Fx::UpdateLevel(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Fx*>(), { "UpdateLevel", {}, { ::i2c::type_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, trace);
}
inline void System::Runtime::Fx::UpdateLevel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Fx*>(), { "UpdateLevel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Runtime::Fx::Fx() {}
