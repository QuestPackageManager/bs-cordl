#pragma once
// IWYU pragma private; include "Newtonsoft\Json\Linq\JsonPath\BooleanQueryExpression.hpp"
#include "Newtonsoft/Json/Linq/JsonPath/zzzz__QueryExpression_impl.hpp"
#include "Newtonsoft/Json/Linq/JsonPath/zzzz__BooleanQueryExpression_def.hpp"
#include "Newtonsoft/Json/Linq/JsonPath/zzzz__QueryOperator_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JToken_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JValue_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JsonSelectSettings_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JsonPath::BooleanQueryExpression._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JsonPath::BooleanQueryExpression::*)(
    ::Newtonsoft::Json::Linq::JsonPath::QueryOperator, ::System::Object*, ::System::Object*)>(&::Newtonsoft::Json::Linq::JsonPath::BooleanQueryExpression::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d92558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonPath::BooleanQueryExpression*>(),
                            { ".ctor", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JsonPath::QueryOperator>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JsonPath::BooleanQueryExpression.GetResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* (
    ::Newtonsoft::Json::Linq::JsonPath::BooleanQueryExpression::*)(::Newtonsoft::Json::Linq::JToken*, ::Newtonsoft::Json::Linq::JToken*, ::System::Object*)>(
    &::Newtonsoft::Json::Linq::JsonPath::BooleanQueryExpression::GetResult)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x5d93010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonPath::BooleanQueryExpression*>(),
                            { "GetResult", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JsonPath::BooleanQueryExpression.IsMatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Linq::JsonPath::BooleanQueryExpression::*)(
    ::Newtonsoft::Json::Linq::JToken*, ::Newtonsoft::Json::Linq::JToken*, ::Newtonsoft::Json::Linq::JsonSelectSettings*)>(&::Newtonsoft::Json::Linq::JsonPath::BooleanQueryExpression::IsMatch)> {
  constexpr static std::size_t size = 0x67c;
  constexpr static std::size_t addrs = 0x5d931f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonPath::BooleanQueryExpression*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Linq::JsonPath::BooleanQueryExpression*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JsonPath::BooleanQueryExpression.MatchTokens
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Linq::JsonPath::BooleanQueryExpression::*)(
    ::Newtonsoft::Json::Linq::JToken*, ::Newtonsoft::Json::Linq::JToken*, ::Newtonsoft::Json::Linq::JsonSelectSettings*)>(&::Newtonsoft::Json::Linq::JsonPath::BooleanQueryExpression::MatchTokens)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x5d9386c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonPath::BooleanQueryExpression*>(),
                                                                                           { "MatchTokens",
                                                                                             {},
                                                                                             { ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>(),
                                                                                               ::i2c::type_of<::Newtonsoft::Json::Linq::JsonSelectSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JsonPath::BooleanQueryExpression.RegexEquals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Newtonsoft::Json::Linq::JValue*, ::Newtonsoft::Json::Linq::JValue*, ::Newtonsoft::Json::Linq::JsonSelectSettings*)>(
    &::Newtonsoft::Json::Linq::JsonPath::BooleanQueryExpression::RegexEquals)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x5d93aa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonPath::BooleanQueryExpression*>(),
                                                                                           { "RegexEquals",
                                                                                             {},
                                                                                             { ::i2c::type_of<::Newtonsoft::Json::Linq::JValue*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JValue*>(),
                                                                                               ::i2c::type_of<::Newtonsoft::Json::Linq::JsonSelectSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JsonPath::BooleanQueryExpression.EqualsWithStringCoercion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Newtonsoft::Json::Linq::JValue*, ::Newtonsoft::Json::Linq::JValue*)>(
    &::Newtonsoft::Json::Linq::JsonPath::BooleanQueryExpression::EqualsWithStringCoercion)> {
  constexpr static std::size_t size = 0x540;
  constexpr static std::size_t addrs = 0x5d93c88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonPath::BooleanQueryExpression*>(),
                                                { "EqualsWithStringCoercion", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JValue*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JValue*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JsonPath::BooleanQueryExpression.EqualsWithStrictMatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Newtonsoft::Json::Linq::JValue*, ::Newtonsoft::Json::Linq::JValue*)>(
    &::Newtonsoft::Json::Linq::JsonPath::BooleanQueryExpression::EqualsWithStrictMatch)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5d941c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonPath::BooleanQueryExpression*>(),
                                                { "EqualsWithStrictMatch", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JValue*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JValue*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Object*& Newtonsoft::Json::Linq::JsonPath::BooleanQueryExpression::__cordl_internal_get_Left() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Left;
}
constexpr ::System::Object* const& Newtonsoft::Json::Linq::JsonPath::BooleanQueryExpression::__cordl_internal_get_Left() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Left;
}
constexpr void Newtonsoft::Json::Linq::JsonPath::BooleanQueryExpression::__cordl_internal_set_Left(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Left = value;
}
constexpr ::System::Object*& Newtonsoft::Json::Linq::JsonPath::BooleanQueryExpression::__cordl_internal_get_Right() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Right;
}
constexpr ::System::Object* const& Newtonsoft::Json::Linq::JsonPath::BooleanQueryExpression::__cordl_internal_get_Right() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Right;
}
constexpr void Newtonsoft::Json::Linq::JsonPath::BooleanQueryExpression::__cordl_internal_set_Right(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Right = value;
}
inline void Newtonsoft::Json::Linq::JsonPath::BooleanQueryExpression::_ctor(::Newtonsoft::Json::Linq::JsonPath::QueryOperator _cordl_operator, ::System::Object* left, ::System::Object* right) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonPath::BooleanQueryExpression*>(),
                          { ".ctor", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JsonPath::QueryOperator>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_operator, left, right);
}
inline ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*
Newtonsoft::Json::Linq::JsonPath::BooleanQueryExpression::GetResult(::Newtonsoft::Json::Linq::JToken* root, ::Newtonsoft::Json::Linq::JToken* t, ::System::Object* o) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonPath::BooleanQueryExpression*>(),
                          { "GetResult", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>(this, ___internal_method, root, t, o);
}
inline bool Newtonsoft::Json::Linq::JsonPath::BooleanQueryExpression::IsMatch(::Newtonsoft::Json::Linq::JToken* root, ::Newtonsoft::Json::Linq::JToken* t,
                                                                              ::Newtonsoft::Json::Linq::JsonSelectSettings* settings) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Linq::JsonPath::BooleanQueryExpression*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, root, t, settings);
}
inline bool Newtonsoft::Json::Linq::JsonPath::BooleanQueryExpression::MatchTokens(::Newtonsoft::Json::Linq::JToken* leftResult, ::Newtonsoft::Json::Linq::JToken* rightResult,
                                                                                  ::Newtonsoft::Json::Linq::JsonSelectSettings* settings) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonPath::BooleanQueryExpression*>(),
                                                                                         { "MatchTokens",
                                                                                           {},
                                                                                           { ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>(),
                                                                                             ::i2c::type_of<::Newtonsoft::Json::Linq::JsonSelectSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, leftResult, rightResult, settings);
}
inline bool Newtonsoft::Json::Linq::JsonPath::BooleanQueryExpression::RegexEquals(::Newtonsoft::Json::Linq::JValue* input, ::Newtonsoft::Json::Linq::JValue* pattern,
                                                                                  ::Newtonsoft::Json::Linq::JsonSelectSettings* settings) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonPath::BooleanQueryExpression*>(),
                                                                                         { "RegexEquals",
                                                                                           {},
                                                                                           { ::i2c::type_of<::Newtonsoft::Json::Linq::JValue*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JValue*>(),
                                                                                             ::i2c::type_of<::Newtonsoft::Json::Linq::JsonSelectSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, input, pattern, settings);
}
inline bool Newtonsoft::Json::Linq::JsonPath::BooleanQueryExpression::EqualsWithStringCoercion(::Newtonsoft::Json::Linq::JValue* value, ::Newtonsoft::Json::Linq::JValue* queryValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonPath::BooleanQueryExpression*>(),
                                              { "EqualsWithStringCoercion", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JValue*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JValue*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, queryValue);
}
inline bool Newtonsoft::Json::Linq::JsonPath::BooleanQueryExpression::EqualsWithStrictMatch(::Newtonsoft::Json::Linq::JValue* value, ::Newtonsoft::Json::Linq::JValue* queryValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonPath::BooleanQueryExpression*>(),
                                              { "EqualsWithStrictMatch", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JValue*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JValue*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, queryValue);
}
inline ::Newtonsoft::Json::Linq::JsonPath::BooleanQueryExpression* Newtonsoft::Json::Linq::JsonPath::BooleanQueryExpression::New_ctor(::Newtonsoft::Json::Linq::JsonPath::QueryOperator _cordl_operator,
                                                                                                                                      ::System::Object* left, ::System::Object* right) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Linq::JsonPath::BooleanQueryExpression*>(_cordl_operator, left, right));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Linq::JsonPath::BooleanQueryExpression::BooleanQueryExpression() {}
