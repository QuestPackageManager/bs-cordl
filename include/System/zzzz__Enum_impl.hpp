#pragma once
// IWYU pragma private; include "System/Enum.hpp"
#include "System/zzzz__Enum_ParseFailureKind_impl.hpp"
#include "System/zzzz__IComparable_impl.hpp"
#include "System/zzzz__IConvertible_impl.hpp"
#include "System/zzzz__IFormattable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "System/zzzz__Enum_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__Enum_ParseFailureKind_def.hpp"
#include "System/zzzz__Enum_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__RuntimeType_def.hpp"
#include "System/zzzz__TypeCode_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Enum_EnumResult.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Enum_EnumResult::*)(bool)>(&::System::Enum_EnumResult::Init)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3e1ed2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Enum_EnumResult>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Enum_EnumResult.SetFailure
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Enum_EnumResult::*)(::System::Exception*)>(&::System::Enum_EnumResult::SetFailure)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3e1fb90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Enum_EnumResult>::get(), "SetFailure", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Enum_EnumResult.SetFailure
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Enum_EnumResult::*)(::GlobalNamespace::Enum_ParseFailureKind, ::StringW)>(
    &::System::Enum_EnumResult::SetFailure)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3e1f554;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Enum_EnumResult>::get(), "SetFailure", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Enum_ParseFailureKind>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Enum_EnumResult.SetFailure
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Enum_EnumResult::*)(::GlobalNamespace::Enum_ParseFailureKind, ::StringW, ::System::Object*)>(
    &::System::Enum_EnumResult::SetFailure)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x3e1f590;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Enum_EnumResult>::get(), "SetFailure", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Enum_ParseFailureKind>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Enum_EnumResult.GetEnumParseException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (::System::Enum_EnumResult::*)()>(&::System::Enum_EnumResult::GetEnumParseException)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x3e1f3e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Enum_EnumResult>::get(), "GetEnumParseException",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void System::Enum_EnumResult::Init(bool canMethodThrow) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Enum_EnumResult>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, canMethodThrow);
}
inline void System::Enum_EnumResult::SetFailure(::System::Exception* unhandledException) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Enum_EnumResult>::get(), "SetFailure", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, unhandledException);
}
inline void System::Enum_EnumResult::SetFailure(::GlobalNamespace::Enum_ParseFailureKind failure, ::StringW failureParameter) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Enum_EnumResult>::get(), "SetFailure", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Enum_ParseFailureKind>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, failure, failureParameter);
}
inline void System::Enum_EnumResult::SetFailure(::GlobalNamespace::Enum_ParseFailureKind failure, ::StringW failureMessageID, ::System::Object* failureMessageFormatArgument) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Enum_EnumResult>::get(), "SetFailure", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Enum_ParseFailureKind>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, failure, failureMessageID, failureMessageFormatArgument);
}
inline ::System::Exception* System::Enum_EnumResult::GetEnumParseException() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Enum_EnumResult>::get(), "GetEnumParseException",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(this, ___internal_method);
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Enum_ValuesAndNames::*)(::ArrayW<uint64_t, ::Array<uint64_t>*>, ::ArrayW<::StringW, ::Array<::StringW>*>)>(&::System::Enum_ValuesAndNames::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3e1e1c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Enum_ValuesAndNames*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint64_t, ::Array<uint64_t>*>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*>& System::Enum_ValuesAndNames::__cordl_internal_get_Values() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Values;
}
constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*> const& System::Enum_ValuesAndNames::__cordl_internal_get_Values() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Values;
}
constexpr void System::Enum_ValuesAndNames::__cordl_internal_set_Values(::ArrayW<uint64_t, ::Array<uint64_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Values)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& System::Enum_ValuesAndNames::__cordl_internal_get_Names() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Names;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& System::Enum_ValuesAndNames::__cordl_internal_get_Names() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Names;
}
constexpr void System::Enum_ValuesAndNames::__cordl_internal_set_Names(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Names)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Enum_ValuesAndNames::_ctor(::ArrayW<uint64_t, ::Array<uint64_t>*> values, ::ArrayW<::StringW, ::Array<::StringW>*> names) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Enum_ValuesAndNames*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint64_t, ::Array<uint64_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, values, names);
}
inline ::System::Enum_ValuesAndNames* System::Enum_ValuesAndNames::New_ctor(::ArrayW<uint64_t, ::Array<uint64_t>*> values, ::ArrayW<::StringW, ::Array<::StringW>*> names) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Enum_ValuesAndNames*>(values, names));
}
// Ctor Parameters []
constexpr ::System::Enum_ValuesAndNames::Enum_ValuesAndNames() {}
