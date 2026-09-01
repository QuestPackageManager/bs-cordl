#pragma once
// IWYU pragma private; include "Newtonsoft\Json\Linq\JsonPath\QueryExpression.hpp"
#include "Newtonsoft/Json/Linq/JsonPath/zzzz__QueryOperator_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Linq/JsonPath/zzzz__QueryExpression_def.hpp"
#include "Newtonsoft/Json/Linq/JsonPath/zzzz__QueryOperator_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JToken_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JsonSelectSettings_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JsonPath::QueryExpression._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JsonPath::QueryExpression::*)(::Newtonsoft::Json::Linq::JsonPath::QueryOperator)>(
    &::Newtonsoft::Json::Linq::JsonPath::QueryExpression::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d92dc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonPath::QueryExpression*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JsonPath::QueryOperator>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JsonPath::QueryExpression.IsMatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Linq::JsonPath::QueryExpression::*)(::Newtonsoft::Json::Linq::JToken*, ::Newtonsoft::Json::Linq::JToken*)>(
    &::Newtonsoft::Json::Linq::JsonPath::QueryExpression::IsMatch)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d92dcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonPath::QueryExpression*>(),
                                                             { "IsMatch", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JsonPath::QueryExpression.IsMatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Linq::JsonPath::QueryExpression::*)(
    ::Newtonsoft::Json::Linq::JToken*, ::Newtonsoft::Json::Linq::JToken*, ::Newtonsoft::Json::Linq::JsonSelectSettings*)>(&::Newtonsoft::Json::Linq::JsonPath::QueryExpression::IsMatch)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonPath::QueryExpression*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Linq::JsonPath::QueryExpression*>(), 4 }));
    return ___internal_method;
  }
};
constexpr ::Newtonsoft::Json::Linq::JsonPath::QueryOperator& Newtonsoft::Json::Linq::JsonPath::QueryExpression::__cordl_internal_get_Operator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Operator;
}
constexpr ::Newtonsoft::Json::Linq::JsonPath::QueryOperator const& Newtonsoft::Json::Linq::JsonPath::QueryExpression::__cordl_internal_get_Operator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Operator;
}
constexpr void Newtonsoft::Json::Linq::JsonPath::QueryExpression::__cordl_internal_set_Operator(::Newtonsoft::Json::Linq::JsonPath::QueryOperator value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Operator = value;
}
inline void Newtonsoft::Json::Linq::JsonPath::QueryExpression::_ctor(::Newtonsoft::Json::Linq::JsonPath::QueryOperator _cordl_operator) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonPath::QueryExpression*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JsonPath::QueryOperator>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_operator);
}
inline bool Newtonsoft::Json::Linq::JsonPath::QueryExpression::IsMatch(::Newtonsoft::Json::Linq::JToken* root, ::Newtonsoft::Json::Linq::JToken* t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonPath::QueryExpression*>(),
                                                           { "IsMatch", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, root, t);
}
inline bool Newtonsoft::Json::Linq::JsonPath::QueryExpression::IsMatch(::Newtonsoft::Json::Linq::JToken* root, ::Newtonsoft::Json::Linq::JToken* t,
                                                                       ::Newtonsoft::Json::Linq::JsonSelectSettings* settings) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Linq::JsonPath::QueryExpression*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, root, t, settings);
}
inline ::Newtonsoft::Json::Linq::JsonPath::QueryExpression* Newtonsoft::Json::Linq::JsonPath::QueryExpression::New_ctor(::Newtonsoft::Json::Linq::JsonPath::QueryOperator _cordl_operator) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Linq::JsonPath::QueryExpression*>(_cordl_operator));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Linq::JsonPath::QueryExpression::QueryExpression() {}
