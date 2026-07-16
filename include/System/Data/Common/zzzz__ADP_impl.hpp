#pragma once
// IWYU pragma private; include "System/Data/Common/ADP.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Data/Common/zzzz__ADP_def.hpp"
#include "System/Data/zzzz__AcceptRejectRule_def.hpp"
#include "System/Data/zzzz__MissingSchemaAction_def.hpp"
#include "System/Data/zzzz__Rule_def.hpp"
#include "System/zzzz__ArgumentException_def.hpp"
#include "System/zzzz__ArgumentOutOfRangeException_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__InvalidOperationException_def.hpp"
#include "System/zzzz__NotSupportedException_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Data::Common::ADP.TraceException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::System::Exception*)>(&::System::Data::Common::ADP::TraceException)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x609ad80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Common::ADP*>(), { "TraceException", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::ADP.TraceExceptionAsReturnValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Exception*)>(&::System::Data::Common::ADP::TraceExceptionAsReturnValue)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x609ae2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Common::ADP*>(), { "TraceExceptionAsReturnValue", {}, { ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::ADP.TraceExceptionWithoutRethrow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Exception*)>(&::System::Data::Common::ADP::TraceExceptionWithoutRethrow)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x609aea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Common::ADP*>(), { "TraceExceptionWithoutRethrow", {}, { ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::ADP.Argument
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ArgumentException* (*)(::StringW)>(&::System::Data::Common::ADP::Argument)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x609af14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Common::ADP*>(), { "Argument", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::ADP.ArgumentOutOfRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ArgumentOutOfRangeException* (*)(::StringW)>(&::System::Data::Common::ADP::ArgumentOutOfRange)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x609afb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Common::ADP*>(), { "ArgumentOutOfRange", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::ADP.ArgumentOutOfRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ArgumentOutOfRangeException* (*)(::StringW, ::StringW)>(&::System::Data::Common::ADP::ArgumentOutOfRange)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x609b040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Common::ADP*>(), { "ArgumentOutOfRange", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::ADP.InvalidOperation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::InvalidOperationException* (*)(::StringW)>(&::System::Data::Common::ADP::InvalidOperation)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x609b0ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Common::ADP*>(), { "InvalidOperation", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::ADP.NotSupported
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::NotSupportedException* (*)(::StringW)>(&::System::Data::Common::ADP::NotSupported)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x609b188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Common::ADP*>(), { "NotSupported", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::ADP.IsCatchableExceptionType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Exception*)>(&::System::Data::Common::ADP::IsCatchableExceptionType)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x609b224;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Common::ADP*>(), { "IsCatchableExceptionType", {}, { ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::ADP.IsCatchableOrSecurityExceptionType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Exception*)>(&::System::Data::Common::ADP::IsCatchableOrSecurityExceptionType)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x609b3e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Common::ADP*>(), { "IsCatchableOrSecurityExceptionType", {}, { ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::ADP.InvalidEnumerationValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ArgumentOutOfRangeException* (*)(::System::Type*, int32_t)>(&::System::Data::Common::ADP::InvalidEnumerationValue)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x609b570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Common::ADP*>(), { "InvalidEnumerationValue", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::ADP.InvalidSeekOrigin
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::Common::ADP::InvalidSeekOrigin)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x609b684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Common::ADP*>(), { "InvalidSeekOrigin", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::ADP.InvalidAcceptRejectRule
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ArgumentOutOfRangeException* (*)(::System::Data::AcceptRejectRule)>(&::System::Data::Common::ADP::InvalidAcceptRejectRule)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x609b6f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Common::ADP*>(), { "InvalidAcceptRejectRule", {}, { ::i2c::type_of<::System::Data::AcceptRejectRule>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::ADP.InvalidMissingSchemaAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ArgumentOutOfRangeException* (*)(::System::Data::MissingSchemaAction)>(&::System::Data::Common::ADP::InvalidMissingSchemaAction)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x609b798;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Common::ADP*>(), { "InvalidMissingSchemaAction", {}, { ::i2c::type_of<::System::Data::MissingSchemaAction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::ADP.InvalidRule
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ArgumentOutOfRangeException* (*)(::System::Data::Rule)>(&::System::Data::Common::ADP::InvalidRule)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x609b838;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Common::ADP*>(), { "InvalidRule", {}, { ::i2c::type_of<::System::Data::Rule>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::ADP.WrongType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::System::Type*, ::System::Type*)>(&::System::Data::Common::ADP::WrongType)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x609b8d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Common::ADP*>(), { "WrongType", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
inline void System::Data::Common::ADP::setStaticF_s_stackOverflowType(::System::Type* value) {
  ::cordl_internals::setStaticField<::System::Type*, "s_stackOverflowType", ::System::Data::Common::ADP*>(std::forward<::System::Type*>(value));
}
inline ::System::Type* System::Data::Common::ADP::getStaticF_s_stackOverflowType() {
  return ::cordl_internals::getStaticField<::System::Type*, "s_stackOverflowType", ::System::Data::Common::ADP*>();
}
inline void System::Data::Common::ADP::setStaticF_s_outOfMemoryType(::System::Type* value) {
  ::cordl_internals::setStaticField<::System::Type*, "s_outOfMemoryType", ::System::Data::Common::ADP*>(std::forward<::System::Type*>(value));
}
inline ::System::Type* System::Data::Common::ADP::getStaticF_s_outOfMemoryType() {
  return ::cordl_internals::getStaticField<::System::Type*, "s_outOfMemoryType", ::System::Data::Common::ADP*>();
}
inline void System::Data::Common::ADP::setStaticF_s_threadAbortType(::System::Type* value) {
  ::cordl_internals::setStaticField<::System::Type*, "s_threadAbortType", ::System::Data::Common::ADP*>(std::forward<::System::Type*>(value));
}
inline ::System::Type* System::Data::Common::ADP::getStaticF_s_threadAbortType() {
  return ::cordl_internals::getStaticField<::System::Type*, "s_threadAbortType", ::System::Data::Common::ADP*>();
}
inline void System::Data::Common::ADP::setStaticF_s_nullReferenceType(::System::Type* value) {
  ::cordl_internals::setStaticField<::System::Type*, "s_nullReferenceType", ::System::Data::Common::ADP*>(std::forward<::System::Type*>(value));
}
inline ::System::Type* System::Data::Common::ADP::getStaticF_s_nullReferenceType() {
  return ::cordl_internals::getStaticField<::System::Type*, "s_nullReferenceType", ::System::Data::Common::ADP*>();
}
inline void System::Data::Common::ADP::setStaticF_s_accessViolationType(::System::Type* value) {
  ::cordl_internals::setStaticField<::System::Type*, "s_accessViolationType", ::System::Data::Common::ADP*>(std::forward<::System::Type*>(value));
}
inline ::System::Type* System::Data::Common::ADP::getStaticF_s_accessViolationType() {
  return ::cordl_internals::getStaticField<::System::Type*, "s_accessViolationType", ::System::Data::Common::ADP*>();
}
inline void System::Data::Common::ADP::setStaticF_s_securityType(::System::Type* value) {
  ::cordl_internals::setStaticField<::System::Type*, "s_securityType", ::System::Data::Common::ADP*>(std::forward<::System::Type*>(value));
}
inline ::System::Type* System::Data::Common::ADP::getStaticF_s_securityType() {
  return ::cordl_internals::getStaticField<::System::Type*, "s_securityType", ::System::Data::Common::ADP*>();
}
inline void System::Data::Common::ADP::setStaticF_StrEmpty(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "StrEmpty", ::System::Data::Common::ADP*>(std::forward<::StringW>(value));
}
inline ::StringW System::Data::Common::ADP::getStaticF_StrEmpty() {
  return ::cordl_internals::getStaticField<::StringW, "StrEmpty", ::System::Data::Common::ADP*>();
}
inline void System::Data::Common::ADP::setStaticF_AzureSqlServerEndpoints(::ArrayW<::StringW> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW>, "AzureSqlServerEndpoints", ::System::Data::Common::ADP*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> System::Data::Common::ADP::getStaticF_AzureSqlServerEndpoints() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "AzureSqlServerEndpoints", ::System::Data::Common::ADP*>();
}
inline void System::Data::Common::ADP::setStaticF_PtrZero(::System::IntPtr value) {
  ::cordl_internals::setStaticField<::System::IntPtr, "PtrZero", ::System::Data::Common::ADP*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr System::Data::Common::ADP::getStaticF_PtrZero() {
  return ::cordl_internals::getStaticField<::System::IntPtr, "PtrZero", ::System::Data::Common::ADP*>();
}
inline void System::Data::Common::ADP::setStaticF_PtrSize(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "PtrSize", ::System::Data::Common::ADP*>(std::forward<int32_t>(value));
}
inline int32_t System::Data::Common::ADP::getStaticF_PtrSize() {
  return ::cordl_internals::getStaticField<int32_t, "PtrSize", ::System::Data::Common::ADP*>();
}
inline void System::Data::Common::ADP::TraceException(::StringW trace, ::System::Exception* e) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Common::ADP*>(), { "TraceException", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, trace, e);
}
inline void System::Data::Common::ADP::TraceExceptionAsReturnValue(::System::Exception* e) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Common::ADP*>(), { "TraceExceptionAsReturnValue", {}, { ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, e);
}
inline void System::Data::Common::ADP::TraceExceptionWithoutRethrow(::System::Exception* e) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Common::ADP*>(), { "TraceExceptionWithoutRethrow", {}, { ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, e);
}
inline ::System::ArgumentException* System::Data::Common::ADP::Argument(::StringW error) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Common::ADP*>(), { "Argument", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ArgumentException*>(nullptr, ___internal_method, error);
}
inline ::System::ArgumentOutOfRangeException* System::Data::Common::ADP::ArgumentOutOfRange(::StringW parameterName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Common::ADP*>(), { "ArgumentOutOfRange", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ArgumentOutOfRangeException*>(nullptr, ___internal_method, parameterName);
}
inline ::System::ArgumentOutOfRangeException* System::Data::Common::ADP::ArgumentOutOfRange(::StringW message, ::StringW parameterName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Common::ADP*>(), { "ArgumentOutOfRange", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ArgumentOutOfRangeException*>(nullptr, ___internal_method, message, parameterName);
}
inline ::System::InvalidOperationException* System::Data::Common::ADP::InvalidOperation(::StringW error) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Common::ADP*>(), { "InvalidOperation", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::InvalidOperationException*>(nullptr, ___internal_method, error);
}
inline ::System::NotSupportedException* System::Data::Common::ADP::NotSupported(::StringW error) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Common::ADP*>(), { "NotSupported", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::NotSupportedException*>(nullptr, ___internal_method, error);
}
inline bool System::Data::Common::ADP::IsCatchableExceptionType(::System::Exception* e) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Common::ADP*>(), { "IsCatchableExceptionType", {}, { ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, e);
}
inline bool System::Data::Common::ADP::IsCatchableOrSecurityExceptionType(::System::Exception* e) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Common::ADP*>(), { "IsCatchableOrSecurityExceptionType", {}, { ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, e);
}
inline ::System::ArgumentOutOfRangeException* System::Data::Common::ADP::InvalidEnumerationValue(::System::Type* type, int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Common::ADP*>(), { "InvalidEnumerationValue", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ArgumentOutOfRangeException*>(nullptr, ___internal_method, type, value);
}
inline ::System::Exception* System::Data::Common::ADP::InvalidSeekOrigin(::StringW parameterName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Common::ADP*>(), { "InvalidSeekOrigin", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, parameterName);
}
inline ::System::ArgumentOutOfRangeException* System::Data::Common::ADP::InvalidAcceptRejectRule(::System::Data::AcceptRejectRule value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Common::ADP*>(), { "InvalidAcceptRejectRule", {}, { ::i2c::type_of<::System::Data::AcceptRejectRule>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ArgumentOutOfRangeException*>(nullptr, ___internal_method, value);
}
inline ::System::ArgumentOutOfRangeException* System::Data::Common::ADP::InvalidMissingSchemaAction(::System::Data::MissingSchemaAction value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Common::ADP*>(), { "InvalidMissingSchemaAction", {}, { ::i2c::type_of<::System::Data::MissingSchemaAction>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ArgumentOutOfRangeException*>(nullptr, ___internal_method, value);
}
inline ::System::ArgumentOutOfRangeException* System::Data::Common::ADP::InvalidRule(::System::Data::Rule value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Common::ADP*>(), { "InvalidRule", {}, { ::i2c::type_of<::System::Data::Rule>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ArgumentOutOfRangeException*>(nullptr, ___internal_method, value);
}
inline ::System::Exception* System::Data::Common::ADP::WrongType(::System::Type* got, ::System::Type* expected) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Common::ADP*>(), { "WrongType", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, got, expected);
}
// Ctor Parameters []
constexpr ::System::Data::Common::ADP::ADP() {}
