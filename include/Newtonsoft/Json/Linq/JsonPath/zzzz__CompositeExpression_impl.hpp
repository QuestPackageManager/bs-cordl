#pragma once
#include "Newtonsoft/Json/Linq/JsonPath/zzzz__QueryExpression_impl.hpp"
#include "Newtonsoft/Json/Linq/JsonPath/zzzz__CompositeExpression_def.hpp"
#include "Newtonsoft/Json/Linq/JsonPath/zzzz__QueryExpression_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JToken_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JsonPath::CompositeExpression.get_Expressions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::QueryExpression*>* (
    ::Newtonsoft::Json::Linq::JsonPath::CompositeExpression::*)()>(&::Newtonsoft::Json::Linq::JsonPath::CompositeExpression::get_Expressions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26b1284;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JsonPath::CompositeExpression*>::get(),
                                                                               "get_Expressions", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JsonPath::CompositeExpression.set_Expressions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JsonPath::CompositeExpression::*)(
    ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::QueryExpression*>*)>(&::Newtonsoft::Json::Linq::JsonPath::CompositeExpression::set_Expressions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26b128c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JsonPath::CompositeExpression*>::get(), "set_Expressions", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::QueryExpression*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JsonPath::CompositeExpression._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JsonPath::CompositeExpression::*)()>(
    &::Newtonsoft::Json::Linq::JsonPath::CompositeExpression::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x26b0dd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JsonPath::CompositeExpression*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JsonPath::CompositeExpression.IsMatch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::Linq::JsonPath::CompositeExpression::*)(::Newtonsoft::Json::Linq::JToken*)>(
    &::Newtonsoft::Json::Linq::JsonPath::CompositeExpression::IsMatch)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x26b1294;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JsonPath::CompositeExpression*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JsonPath::CompositeExpression*>::get(), 4));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::QueryExpression*>*& Newtonsoft::Json::Linq::JsonPath::CompositeExpression::__get__Expressions_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Expressions_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::QueryExpression*>*> const&
Newtonsoft::Json::Linq::JsonPath::CompositeExpression::__get__Expressions_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Expressions_k__BackingField;
}
constexpr void
Newtonsoft::Json::Linq::JsonPath::CompositeExpression::__set__Expressions_k__BackingField(::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::QueryExpression*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Expressions_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::QueryExpression*>* Newtonsoft::Json::Linq::JsonPath::CompositeExpression::get_Expressions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JsonPath::CompositeExpression*>::get(),
                                                                             "get_Expressions", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::QueryExpression*>*, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JsonPath::CompositeExpression::set_Expressions(::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::QueryExpression*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JsonPath::CompositeExpression*>::get(), "set_Expressions", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::QueryExpression*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::Linq::JsonPath::CompositeExpression* Newtonsoft::Json::Linq::JsonPath::CompositeExpression::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Newtonsoft::Json::Linq::JsonPath::CompositeExpression*>());
}
inline void Newtonsoft::Json::Linq::JsonPath::CompositeExpression::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JsonPath::CompositeExpression*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Newtonsoft::Json::Linq::JsonPath::CompositeExpression::IsMatch(::Newtonsoft::Json::Linq::JToken* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JsonPath::CompositeExpression*>::get(), "IsMatch", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, t);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Linq::JsonPath::CompositeExpression::CompositeExpression() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
