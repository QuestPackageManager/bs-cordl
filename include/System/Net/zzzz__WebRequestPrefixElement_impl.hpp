#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__WebRequestPrefixElement_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Net/zzzz__IWebRequestCreate_def.hpp"
//  Writing Method size for method: ::System::Net::WebRequestPrefixElement.get_Creator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::IWebRequestCreate* (::System::Net::WebRequestPrefixElement::*)()>(
    &::System::Net::WebRequestPrefixElement::get_Creator)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x2820a40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestPrefixElement*>::get(), "get_Creator",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestPrefixElement.set_Creator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebRequestPrefixElement::*)(::System::Net::IWebRequestCreate*)>(
    &::System::Net::WebRequestPrefixElement::set_Creator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2820c3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestPrefixElement*>::get(), "set_Creator", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IWebRequestCreate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestPrefixElement._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebRequestPrefixElement::*)(::StringW, ::System::Net::IWebRequestCreate*)>(
    &::System::Net::WebRequestPrefixElement::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2820c44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestPrefixElement*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IWebRequestCreate*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Net::WebRequestPrefixElement::__get_Prefix() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Prefix;
}
constexpr ::StringW const& System::Net::WebRequestPrefixElement::__get_Prefix() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Prefix;
}
constexpr void System::Net::WebRequestPrefixElement::__set_Prefix(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Prefix)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::IWebRequestCreate*& System::Net::WebRequestPrefixElement::__get_creator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___creator;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::IWebRequestCreate*> const& System::Net::WebRequestPrefixElement::__get_creator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___creator;
}
constexpr void System::Net::WebRequestPrefixElement::__set_creator(::System::Net::IWebRequestCreate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___creator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Type*& System::Net::WebRequestPrefixElement::__get_creatorType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___creatorType;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& System::Net::WebRequestPrefixElement::__get_creatorType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___creatorType;
}
constexpr void System::Net::WebRequestPrefixElement::__set_creatorType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___creatorType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Net::IWebRequestCreate* System::Net::WebRequestPrefixElement::get_Creator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestPrefixElement*>::get(), "get_Creator",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Net::IWebRequestCreate*, false>(this, ___internal_method);
}
inline void System::Net::WebRequestPrefixElement::set_Creator(::System::Net::IWebRequestCreate* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestPrefixElement*>::get(), "set_Creator", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IWebRequestCreate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Net::WebRequestPrefixElement* System::Net::WebRequestPrefixElement::New_ctor(::StringW P, ::System::Net::IWebRequestCreate* C) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::WebRequestPrefixElement*>(P, C));
}
inline void System::Net::WebRequestPrefixElement::_ctor(::StringW P, ::System::Net::IWebRequestCreate* C) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestPrefixElement*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IWebRequestCreate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, P, C);
}
// Ctor Parameters []
constexpr ::System::Net::WebRequestPrefixElement::WebRequestPrefixElement() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
