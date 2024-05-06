#pragma once
#include "Newtonsoft/Json/Linq/JsonPath/zzzz__QueryExpression_impl.hpp"
#include "Newtonsoft/Json/Linq/JsonPath/zzzz__CompositeExpression_def.hpp"
#include "Newtonsoft/Json/Linq/JsonPath/zzzz__QueryExpression_def.hpp"
#include "Newtonsoft/Json/Linq/JsonPath/zzzz__QueryOperator_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JToken_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JsonSelectSettings_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JsonPath::CompositeExpression.get_Expressions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::QueryExpression*>* (
    ::Newtonsoft::Json::Linq::JsonPath::CompositeExpression::*)()>(&::Newtonsoft::Json::Linq::JsonPath::CompositeExpression::get_Expressions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a7eb0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JsonPath::CompositeExpression*>::get(),
                                                                               "get_Expressions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JsonPath::CompositeExpression.set_Expressions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JsonPath::CompositeExpression::*)(
    ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::QueryExpression*>*)>(&::Newtonsoft::Json::Linq::JsonPath::CompositeExpression::set_Expressions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a7eb14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JsonPath::CompositeExpression*>::get(), "set_Expressions", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::QueryExpression*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JsonPath::CompositeExpression._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JsonPath::CompositeExpression::*)(::Newtonsoft::Json::Linq::JsonPath::QueryOperator)>(
    &::Newtonsoft::Json::Linq::JsonPath::CompositeExpression::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2a7e29c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JsonPath::CompositeExpression*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JsonPath::QueryOperator>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JsonPath::CompositeExpression.IsMatch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::Linq::JsonPath::CompositeExpression::*)(
    ::Newtonsoft::Json::Linq::JToken*, ::Newtonsoft::Json::Linq::JToken*, ::Newtonsoft::Json::Linq::JsonSelectSettings*)>(&::Newtonsoft::Json::Linq::JsonPath::CompositeExpression::IsMatch)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x2a7eb1c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JsonPath::CompositeExpression*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JsonPath::CompositeExpression*>::get(), 4));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::QueryExpression*>*&
Newtonsoft::Json::Linq::JsonPath::CompositeExpression::__cordl_internal_get__Expressions_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Expressions_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::QueryExpression*>*> const&
Newtonsoft::Json::Linq::JsonPath::CompositeExpression::__cordl_internal_get__Expressions_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Expressions_k__BackingField;
}
constexpr void Newtonsoft::Json::Linq::JsonPath::CompositeExpression::__cordl_internal_set__Expressions_k__BackingField(
    ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::QueryExpression*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Expressions_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::QueryExpression*>* Newtonsoft::Json::Linq::JsonPath::CompositeExpression::get_Expressions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JsonPath::CompositeExpression*>::get(),
                                                                             "get_Expressions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::QueryExpression*>*, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JsonPath::CompositeExpression::set_Expressions(::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::QueryExpression*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JsonPath::CompositeExpression*>::get(), "set_Expressions", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::QueryExpression*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::Linq::JsonPath::CompositeExpression* Newtonsoft::Json::Linq::JsonPath::CompositeExpression::New_ctor(::Newtonsoft::Json::Linq::JsonPath::QueryOperator _cordl_operator) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Linq::JsonPath::CompositeExpression*>(_cordl_operator));
}
inline void Newtonsoft::Json::Linq::JsonPath::CompositeExpression::_ctor(::Newtonsoft::Json::Linq::JsonPath::QueryOperator _cordl_operator) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JsonPath::CompositeExpression*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JsonPath::QueryOperator>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, _cordl_operator);
}
inline bool Newtonsoft::Json::Linq::JsonPath::CompositeExpression::IsMatch(::Newtonsoft::Json::Linq::JToken* root, ::Newtonsoft::Json::Linq::JToken* t,
                                                                           ::Newtonsoft::Json::Linq::JsonSelectSettings* settings) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JsonPath::CompositeExpression*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, root, t, settings);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Linq::JsonPath::CompositeExpression::CompositeExpression() {}
