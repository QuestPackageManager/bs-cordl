#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Linq/JsonPath/JPath.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Linq/JsonPath/zzzz__JPath_def.hpp"
#include "Newtonsoft/Json/Linq/JsonPath/zzzz__PathFilter_def.hpp"
#include "Newtonsoft/Json/Linq/JsonPath/zzzz__QueryExpression_def.hpp"
#include "Newtonsoft/Json/Linq/JsonPath/zzzz__QueryOperator_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JToken_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JsonSelectSettings_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonException_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JsonPath::JPath.get_Filters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>* (::Newtonsoft::Json::Linq::JsonPath::JPath::*)()>(
    &::Newtonsoft::Json::Linq::JsonPath::JPath::get_Filters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d8dcec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonPath::JPath*>(), { "get_Filters", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JsonPath::JPath._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JsonPath::JPath::*)(::StringW)>(&::Newtonsoft::Json::Linq::JsonPath::JPath::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5d8dcf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonPath::JPath*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JsonPath::JPath.ParseMain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JsonPath::JPath::*)()>(&::Newtonsoft::Json::Linq::JsonPath::JPath::ParseMain)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5d8dda4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonPath::JPath*>(), { "ParseMain", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JsonPath::JPath.ParsePath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Linq::JsonPath::JPath::*)(::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>*,
                                                                                                           int32_t, bool)>(&::Newtonsoft::Json::Linq::JsonPath::JPath::ParsePath)> {
  constexpr static std::size_t size = 0x5e4;
  constexpr static std::size_t addrs = 0x5d8df48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Newtonsoft::Json::Linq::JsonPath::JPath*>(),
            { "ParsePath", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JsonPath::JPath.CreatePathFilter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JsonPath::PathFilter* (*)(::StringW, bool)>(&::Newtonsoft::Json::Linq::JsonPath::JPath::CreatePathFilter)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5d8e52c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonPath::JPath*>(), { "CreatePathFilter", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JsonPath::JPath.ParseIndexer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JsonPath::PathFilter* (::Newtonsoft::Json::Linq::JsonPath::JPath::*)(char16_t, bool)>(
    &::Newtonsoft::Json::Linq::JsonPath::JPath::ParseIndexer)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5d8e5ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonPath::JPath*>(), { "ParseIndexer", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JsonPath::JPath.ParseArrayIndexer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JsonPath::PathFilter* (::Newtonsoft::Json::Linq::JsonPath::JPath::*)(char16_t)>(
    &::Newtonsoft::Json::Linq::JsonPath::JPath::ParseArrayIndexer)> {
  constexpr static std::size_t size = 0x7fc;
  constexpr static std::size_t addrs = 0x5d8ecb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonPath::JPath*>(), { "ParseArrayIndexer", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JsonPath::JPath.EatWhitespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JsonPath::JPath::*)()>(&::Newtonsoft::Json::Linq::JsonPath::JPath::EatWhitespace)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5d8def0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonPath::JPath*>(), { "EatWhitespace", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JsonPath::JPath.ParseQuery
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JsonPath::PathFilter* (::Newtonsoft::Json::Linq::JsonPath::JPath::*)(char16_t, bool)>(
    &::Newtonsoft::Json::Linq::JsonPath::JPath::ParseQuery)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x5d8eab0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonPath::JPath*>(), { "ParseQuery", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JsonPath::JPath.TryParseExpression
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Linq::JsonPath::JPath::*)(
    ::by_ref<::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>*>)>(&::Newtonsoft::Json::Linq::JsonPath::JPath::TryParseExpression)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x5d8f958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonPath::JPath*>(),
                                         { "TryParseExpression", {}, { ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JsonPath::JPath.CreateUnexpectedCharacterException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::JsonException* (::Newtonsoft::Json::Linq::JsonPath::JPath::*)()>(
    &::Newtonsoft::Json::Linq::JsonPath::JPath::CreateUnexpectedCharacterException)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5d8fb54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonPath::JPath*>(), { "CreateUnexpectedCharacterException", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JsonPath::JPath.ParseSide
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Newtonsoft::Json::Linq::JsonPath::JPath::*)()>(&::Newtonsoft::Json::Linq::JsonPath::JPath::ParseSide)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5d8fc44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonPath::JPath*>(), { "ParseSide", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JsonPath::JPath.ParseExpression
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JsonPath::QueryExpression* (::Newtonsoft::Json::Linq::JsonPath::JPath::*)()>(
    &::Newtonsoft::Json::Linq::JsonPath::JPath::ParseExpression)> {
  constexpr static std::size_t size = 0x49c;
  constexpr static std::size_t addrs = 0x5d8f4ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonPath::JPath*>(), { "ParseExpression", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JsonPath::JPath.TryParseValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Linq::JsonPath::JPath::*)(::by_ref<::System::Object*>)>(&::Newtonsoft::Json::Linq::JsonPath::JPath::TryParseValue)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x5d8fd5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonPath::JPath*>(), { "TryParseValue", {}, { ::i2c::type_of<::by_ref<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JsonPath::JPath.ReadQuotedString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Linq::JsonPath::JPath::*)()>(&::Newtonsoft::Json::Linq::JsonPath::JPath::ReadQuotedString)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x5d9047c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonPath::JPath*>(), { "ReadQuotedString", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JsonPath::JPath.ReadRegexString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Linq::JsonPath::JPath::*)()>(&::Newtonsoft::Json::Linq::JsonPath::JPath::ReadRegexString)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5d906f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonPath::JPath*>(), { "ReadRegexString", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JsonPath::JPath.Match
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Linq::JsonPath::JPath::*)(::StringW)>(&::Newtonsoft::Json::Linq::JsonPath::JPath::Match)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5d9033c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonPath::JPath*>(), { "Match", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JsonPath::JPath.ParseOperator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JsonPath::QueryOperator (::Newtonsoft::Json::Linq::JsonPath::JPath::*)()>(
    &::Newtonsoft::Json::Linq::JsonPath::JPath::ParseOperator)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x5d900a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonPath::JPath*>(), { "ParseOperator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JsonPath::JPath.ParseQuotedField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JsonPath::PathFilter* (::Newtonsoft::Json::Linq::JsonPath::JPath::*)(char16_t, bool)>(
    &::Newtonsoft::Json::Linq::JsonPath::JPath::ParseQuotedField)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x5d8e728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonPath::JPath*>(), { "ParseQuotedField", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JsonPath::JPath.EnsureLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JsonPath::JPath::*)(::StringW)>(&::Newtonsoft::Json::Linq::JsonPath::JPath::EnsureLength)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d8e6bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonPath::JPath*>(), { "EnsureLength", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JsonPath::JPath.Evaluate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* (
    ::Newtonsoft::Json::Linq::JsonPath::JPath::*)(::Newtonsoft::Json::Linq::JToken*, ::Newtonsoft::Json::Linq::JToken*, ::Newtonsoft::Json::Linq::JsonSelectSettings*)>(
    &::Newtonsoft::Json::Linq::JsonPath::JPath::Evaluate)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5d9084c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonPath::JPath*>(),
                                                                                           { "Evaluate",
                                                                                             {},
                                                                                             { ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>(),
                                                                                               ::i2c::type_of<::Newtonsoft::Json::Linq::JsonSelectSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JsonPath::JPath.Evaluate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<
    ::Newtonsoft::Json::Linq::JToken*>* (*)(::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>*, ::Newtonsoft::Json::Linq::JToken*,
                                            ::Newtonsoft::Json::Linq::JToken*, ::Newtonsoft::Json::Linq::JsonSelectSettings*)>(&::Newtonsoft::Json::Linq::JsonPath::JPath::Evaluate)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x5d908d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonPath::JPath*>(),
                            { "Evaluate",
                              {},
                              { ::i2c::type_of<::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>(),
                                ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JsonSelectSettings*>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& Newtonsoft::Json::Linq::JsonPath::JPath::__cordl_internal_get__expression() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____expression;
}
constexpr ::StringW const& Newtonsoft::Json::Linq::JsonPath::JPath::__cordl_internal_get__expression() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____expression;
}
constexpr void Newtonsoft::Json::Linq::JsonPath::JPath::__cordl_internal_set__expression(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____expression = value;
}
constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>*& Newtonsoft::Json::Linq::JsonPath::JPath::__cordl_internal_get__Filters_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Filters_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>* const&
Newtonsoft::Json::Linq::JsonPath::JPath::__cordl_internal_get__Filters_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Filters_k__BackingField;
}
constexpr void Newtonsoft::Json::Linq::JsonPath::JPath::__cordl_internal_set__Filters_k__BackingField(::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Filters_k__BackingField = value;
}
constexpr int32_t& Newtonsoft::Json::Linq::JsonPath::JPath::__cordl_internal_get__currentIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentIndex;
}
constexpr int32_t const& Newtonsoft::Json::Linq::JsonPath::JPath::__cordl_internal_get__currentIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentIndex;
}
constexpr void Newtonsoft::Json::Linq::JsonPath::JPath::__cordl_internal_set__currentIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentIndex = value;
}
inline void Newtonsoft::Json::Linq::JsonPath::JPath::setStaticF_FloatCharacters(::ArrayW<char16_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<char16_t>, "FloatCharacters", ::Newtonsoft::Json::Linq::JsonPath::JPath*>(std::forward<::ArrayW<char16_t>>(value));
}
inline ::ArrayW<char16_t> Newtonsoft::Json::Linq::JsonPath::JPath::getStaticF_FloatCharacters() {
  return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "FloatCharacters", ::Newtonsoft::Json::Linq::JsonPath::JPath*>();
}
inline ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>* Newtonsoft::Json::Linq::JsonPath::JPath::get_Filters() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonPath::JPath*>(), { "get_Filters", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>*>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JsonPath::JPath::_ctor(::StringW expression) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonPath::JPath*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, expression);
}
inline void Newtonsoft::Json::Linq::JsonPath::JPath::ParseMain() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonPath::JPath*>(), { "ParseMain", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Newtonsoft::Json::Linq::JsonPath::JPath::ParsePath(::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>* filters, int32_t currentPartStartIndex,
                                                               bool query) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Newtonsoft::Json::Linq::JsonPath::JPath*>(),
          { "ParsePath", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, filters, currentPartStartIndex, query);
}
inline ::Newtonsoft::Json::Linq::JsonPath::PathFilter* Newtonsoft::Json::Linq::JsonPath::JPath::CreatePathFilter(::StringW member, bool scan) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonPath::JPath*>(), { "CreatePathFilter", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>(nullptr, ___internal_method, member, scan);
}
inline ::Newtonsoft::Json::Linq::JsonPath::PathFilter* Newtonsoft::Json::Linq::JsonPath::JPath::ParseIndexer(char16_t indexerOpenChar, bool scan) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonPath::JPath*>(), { "ParseIndexer", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>(this, ___internal_method, indexerOpenChar, scan);
}
inline ::Newtonsoft::Json::Linq::JsonPath::PathFilter* Newtonsoft::Json::Linq::JsonPath::JPath::ParseArrayIndexer(char16_t indexerCloseChar) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonPath::JPath*>(), { "ParseArrayIndexer", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>(this, ___internal_method, indexerCloseChar);
}
inline void Newtonsoft::Json::Linq::JsonPath::JPath::EatWhitespace() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonPath::JPath*>(), { "EatWhitespace", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Linq::JsonPath::PathFilter* Newtonsoft::Json::Linq::JsonPath::JPath::ParseQuery(char16_t indexerCloseChar, bool scan) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonPath::JPath*>(), { "ParseQuery", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>(this, ___internal_method, indexerCloseChar, scan);
}
inline bool Newtonsoft::Json::Linq::JsonPath::JPath::TryParseExpression(::by_ref<::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>*> expressionPath) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonPath::JPath*>(),
                                              { "TryParseExpression", {}, { ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, expressionPath);
}
inline ::Newtonsoft::Json::JsonException* Newtonsoft::Json::Linq::JsonPath::JPath::CreateUnexpectedCharacterException() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonPath::JPath*>(), { "CreateUnexpectedCharacterException", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::JsonException*>(this, ___internal_method);
}
inline ::System::Object* Newtonsoft::Json::Linq::JsonPath::JPath::ParseSide() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonPath::JPath*>(), { "ParseSide", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Linq::JsonPath::QueryExpression* Newtonsoft::Json::Linq::JsonPath::JPath::ParseExpression() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonPath::JPath*>(), { "ParseExpression", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JsonPath::QueryExpression*>(this, ___internal_method);
}
inline bool Newtonsoft::Json::Linq::JsonPath::JPath::TryParseValue(::by_ref<::System::Object*> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonPath::JPath*>(), { "TryParseValue", {}, { ::i2c::type_of<::by_ref<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline ::StringW Newtonsoft::Json::Linq::JsonPath::JPath::ReadQuotedString() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonPath::JPath*>(), { "ReadQuotedString", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Newtonsoft::Json::Linq::JsonPath::JPath::ReadRegexString() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonPath::JPath*>(), { "ReadRegexString", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Newtonsoft::Json::Linq::JsonPath::JPath::Match(::StringW s) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonPath::JPath*>(), { "Match", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, s);
}
inline ::Newtonsoft::Json::Linq::JsonPath::QueryOperator Newtonsoft::Json::Linq::JsonPath::JPath::ParseOperator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonPath::JPath*>(), { "ParseOperator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JsonPath::QueryOperator>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Linq::JsonPath::PathFilter* Newtonsoft::Json::Linq::JsonPath::JPath::ParseQuotedField(char16_t indexerCloseChar, bool scan) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonPath::JPath*>(), { "ParseQuotedField", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>(this, ___internal_method, indexerCloseChar, scan);
}
inline void Newtonsoft::Json::Linq::JsonPath::JPath::EnsureLength(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonPath::JPath*>(), { "EnsureLength", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*
Newtonsoft::Json::Linq::JsonPath::JPath::Evaluate(::Newtonsoft::Json::Linq::JToken* root, ::Newtonsoft::Json::Linq::JToken* t, ::Newtonsoft::Json::Linq::JsonSelectSettings* settings) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonPath::JPath*>(),
                                                                                         { "Evaluate",
                                                                                           {},
                                                                                           { ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>(),
                                                                                             ::i2c::type_of<::Newtonsoft::Json::Linq::JsonSelectSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>(this, ___internal_method, root, t, settings);
}
inline ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*
Newtonsoft::Json::Linq::JsonPath::JPath::Evaluate(::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>* filters, ::Newtonsoft::Json::Linq::JToken* root,
                                                  ::Newtonsoft::Json::Linq::JToken* t, ::Newtonsoft::Json::Linq::JsonSelectSettings* settings) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonPath::JPath*>(),
                                                                                         { "Evaluate",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>*>(),
                                                                                             ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>(),
                                                                                             ::i2c::type_of<::Newtonsoft::Json::Linq::JsonSelectSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>(nullptr, ___internal_method, filters, root, t, settings);
}
inline ::Newtonsoft::Json::Linq::JsonPath::JPath* Newtonsoft::Json::Linq::JsonPath::JPath::New_ctor(::StringW expression) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Linq::JsonPath::JPath*>(expression));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Linq::JsonPath::JPath::JPath() {}
