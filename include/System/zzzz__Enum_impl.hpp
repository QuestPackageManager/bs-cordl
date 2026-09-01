#pragma once
// IWYU pragma private; include "System\Enum.hpp"
#include "System/zzzz__Enum_ParseFailureKind_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "System/zzzz__Enum_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__Enum_ParseFailureKind_def.hpp"
#include "System/zzzz__Enum_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "System/zzzz__IConvertible_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__RuntimeType_def.hpp"
#include "System/zzzz__TypeCode_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Enum_EnumResult.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Enum_EnumResult::*)(bool)>(&::System::Enum_EnumResult::Init)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5c7b230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Enum_EnumResult>(), { "Init", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Enum_EnumResult.SetFailure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Enum_EnumResult::*)(::System::Exception*)>(&::System::Enum_EnumResult::SetFailure)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5c7bf74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Enum_EnumResult>(), { "SetFailure", {}, { ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Enum_EnumResult.SetFailure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Enum_EnumResult::*)(::GlobalNamespace::Enum_ParseFailureKind, ::StringW)>(&::System::Enum_EnumResult::SetFailure)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5c7ba38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Enum_EnumResult>(), { "SetFailure", {}, { ::i2c::type_of<::GlobalNamespace::Enum_ParseFailureKind>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Enum_EnumResult.SetFailure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Enum_EnumResult::*)(::GlobalNamespace::Enum_ParseFailureKind, ::StringW, ::System::Object*)>(
    &::System::Enum_EnumResult::SetFailure)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5c7ba70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Enum_EnumResult>(),
                                         { "SetFailure", {}, { ::i2c::type_of<::GlobalNamespace::Enum_ParseFailureKind>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Enum_EnumResult.GetEnumParseException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (::System::Enum_EnumResult::*)()>(&::System::Enum_EnumResult::GetEnumParseException)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5c7b8a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Enum_EnumResult>(), { "GetEnumParseException", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Enum_EnumResult::Init(bool canMethodThrow) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Enum_EnumResult>(), { "Init", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, canMethodThrow);
}
inline void System::Enum_EnumResult::SetFailure(::System::Exception* unhandledException) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Enum_EnumResult>(), { "SetFailure", {}, { ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, unhandledException);
}
inline void System::Enum_EnumResult::SetFailure(::GlobalNamespace::Enum_ParseFailureKind failure, ::StringW failureParameter) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Enum_EnumResult>(), { "SetFailure", {}, { ::i2c::type_of<::GlobalNamespace::Enum_ParseFailureKind>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, failure, failureParameter);
}
inline void System::Enum_EnumResult::SetFailure(::GlobalNamespace::Enum_ParseFailureKind failure, ::StringW failureMessageID, ::System::Object* failureMessageFormatArgument) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Enum_EnumResult>(),
                                              { "SetFailure", {}, { ::i2c::type_of<::GlobalNamespace::Enum_ParseFailureKind>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, failure, failureMessageID, failureMessageFormatArgument);
}
inline ::System::Exception* System::Enum_EnumResult::GetEnumParseException() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Enum_EnumResult>(), { "GetEnumParseException", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "parsedEnum", ty: "::System::Object*", modifiers: "", def_value: Some("{}") }, CppParam { name: "canThrow", ty: "bool", modifiers: "", def_value: Some("{}") },
// CppParam { name: "m_failure", ty: "::GlobalNamespace::Enum_ParseFailureKind", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_failureMessageID", ty: "::StringW", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "m_failureParameter", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_failureMessageFormatArgument", ty: "::System::Object*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "m_innerException", ty: "::System::Exception*", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Enum_EnumResult::Enum_EnumResult(::System::Object* parsedEnum, bool canThrow, ::GlobalNamespace::Enum_ParseFailureKind m_failure, ::StringW m_failureMessageID,
                                                     ::StringW m_failureParameter, ::System::Object* m_failureMessageFormatArgument, ::System::Exception* m_innerException) noexcept {
  this->parsedEnum = parsedEnum;
  this->canThrow = canThrow;
  this->m_failure = m_failure;
  this->m_failureMessageID = m_failureMessageID;
  this->m_failureParameter = m_failureParameter;
  this->m_failureMessageFormatArgument = m_failureMessageFormatArgument;
  this->m_innerException = m_innerException;
}
// Ctor Parameters []
constexpr ::System::Enum_EnumResult::Enum_EnumResult() {}
//  Writing Method size for method: ::System::Enum_ValuesAndNames._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Enum_ValuesAndNames::*)(::ArrayW<uint64_t>, ::ArrayW<::StringW>)>(&::System::Enum_ValuesAndNames::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c7a8a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Enum_ValuesAndNames*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint64_t>>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint64_t>& System::Enum_ValuesAndNames::__cordl_internal_get_Values() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Values;
}
constexpr ::ArrayW<uint64_t> const& System::Enum_ValuesAndNames::__cordl_internal_get_Values() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Values;
}
constexpr void System::Enum_ValuesAndNames::__cordl_internal_set_Values(::ArrayW<uint64_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Values = value;
}
constexpr ::ArrayW<::StringW>& System::Enum_ValuesAndNames::__cordl_internal_get_Names() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Names;
}
constexpr ::ArrayW<::StringW> const& System::Enum_ValuesAndNames::__cordl_internal_get_Names() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Names;
}
constexpr void System::Enum_ValuesAndNames::__cordl_internal_set_Names(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Names = value;
}
inline void System::Enum_ValuesAndNames::_ctor(::ArrayW<uint64_t> values, ::ArrayW<::StringW> names) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Enum_ValuesAndNames*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint64_t>>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, values, names);
}
inline ::System::Enum_ValuesAndNames* System::Enum_ValuesAndNames::New_ctor(::ArrayW<uint64_t> values, ::ArrayW<::StringW> names) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Enum_ValuesAndNames*>(values, names));
}
// Ctor Parameters []
constexpr ::System::Enum_ValuesAndNames::Enum_ValuesAndNames() {}
