#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Linq/JsonPath/QueryExpression.hpp"
#include "Newtonsoft/Json/Linq/JsonPath/zzzz__QueryOperator_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Linq/JsonPath/zzzz__QueryExpression_def.hpp"
#include "Newtonsoft/Json/Linq/JsonPath/zzzz__QueryOperator_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JToken_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JsonSelectSettings_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JsonPath::QueryExpression._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JsonPath::QueryExpression::*)(::Newtonsoft::Json::Linq::JsonPath::QueryOperator)>(
    &::Newtonsoft::Json::Linq::JsonPath::QueryExpression::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2ab1b74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JsonPath::QueryExpression*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JsonPath::QueryOperator>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JsonPath::QueryExpression.IsMatch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::Linq::JsonPath::QueryExpression::*)(
    ::Newtonsoft::Json::Linq::JToken*, ::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JsonPath::QueryExpression::IsMatch)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2ab1b9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JsonPath::QueryExpression*>::get(), "IsMatch", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JsonPath::QueryExpression.IsMatch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::Linq::JsonPath::QueryExpression::*)(
    ::Newtonsoft::Json::Linq::JToken*, ::Newtonsoft::Json::Linq::JToken*, ::Newtonsoft::Json::Linq::JsonSelectSettings*)>(&::Newtonsoft::Json::Linq::JsonPath::QueryExpression::IsMatch)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JsonPath::QueryExpression*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JsonPath::QueryExpression*>::get(), 4));
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
inline ::Newtonsoft::Json::Linq::JsonPath::QueryExpression* Newtonsoft::Json::Linq::JsonPath::QueryExpression::New_ctor(::Newtonsoft::Json::Linq::JsonPath::QueryOperator _cordl_operator) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Linq::JsonPath::QueryExpression*>(_cordl_operator));
}
inline void Newtonsoft::Json::Linq::JsonPath::QueryExpression::_ctor(::Newtonsoft::Json::Linq::JsonPath::QueryOperator _cordl_operator) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JsonPath::QueryExpression*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JsonPath::QueryOperator>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, _cordl_operator);
}
inline bool Newtonsoft::Json::Linq::JsonPath::QueryExpression::IsMatch(::Newtonsoft::Json::Linq::JToken* root, ::Newtonsoft::Json::Linq::JToken* t) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JsonPath::QueryExpression*>::get(), "IsMatch", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, root, t);
}
inline bool Newtonsoft::Json::Linq::JsonPath::QueryExpression::IsMatch(::Newtonsoft::Json::Linq::JToken* root, ::Newtonsoft::Json::Linq::JToken* t,
                                                                       ::Newtonsoft::Json::Linq::JsonSelectSettings* settings) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JsonPath::QueryExpression*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, root, t, settings);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Linq::JsonPath::QueryExpression::QueryExpression() {}
