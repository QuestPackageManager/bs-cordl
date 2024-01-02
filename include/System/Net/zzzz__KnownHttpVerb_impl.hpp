#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__KnownHttpVerb_def.hpp"
#include "System/Collections/Specialized/zzzz__ListDictionary_def.hpp"
//  Writing Method size for method: ::System::Net::KnownHttpVerb._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::KnownHttpVerb::*)(::StringW, bool, bool, bool, bool)>(&::System::Net::KnownHttpVerb::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x299e5c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::KnownHttpVerb*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::KnownHttpVerb.Parse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::KnownHttpVerb* (*)(::StringW)>(&::System::Net::KnownHttpVerb::Parse)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x299e930;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::KnownHttpVerb*>::get(), "Parse", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Net::KnownHttpVerb::__get_Name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Name;
}
constexpr ::StringW const& System::Net::KnownHttpVerb::__get_Name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Name;
}
constexpr void System::Net::KnownHttpVerb::__set_Name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Net::KnownHttpVerb::__get_RequireContentBody() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RequireContentBody;
}
constexpr bool const& System::Net::KnownHttpVerb::__get_RequireContentBody() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RequireContentBody;
}
constexpr void System::Net::KnownHttpVerb::__set_RequireContentBody(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___RequireContentBody = value;
}
constexpr bool& System::Net::KnownHttpVerb::__get_ContentBodyNotAllowed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ContentBodyNotAllowed;
}
constexpr bool const& System::Net::KnownHttpVerb::__get_ContentBodyNotAllowed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ContentBodyNotAllowed;
}
constexpr void System::Net::KnownHttpVerb::__set_ContentBodyNotAllowed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ContentBodyNotAllowed = value;
}
constexpr bool& System::Net::KnownHttpVerb::__get_ConnectRequest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ConnectRequest;
}
constexpr bool const& System::Net::KnownHttpVerb::__get_ConnectRequest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ConnectRequest;
}
constexpr void System::Net::KnownHttpVerb::__set_ConnectRequest(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ConnectRequest = value;
}
constexpr bool& System::Net::KnownHttpVerb::__get_ExpectNoContentResponse() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ExpectNoContentResponse;
}
constexpr bool const& System::Net::KnownHttpVerb::__get_ExpectNoContentResponse() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ExpectNoContentResponse;
}
constexpr void System::Net::KnownHttpVerb::__set_ExpectNoContentResponse(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ExpectNoContentResponse = value;
}
inline void System::Net::KnownHttpVerb::setStaticF_NamedHeaders(::System::Collections::Specialized::ListDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::Specialized::ListDictionary*, "NamedHeaders", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::KnownHttpVerb*>::get>(
      std::forward<::System::Collections::Specialized::ListDictionary*>(value));
}
inline ::System::Collections::Specialized::ListDictionary* System::Net::KnownHttpVerb::getStaticF_NamedHeaders() {
  return ::cordl_internals::getStaticField<::System::Collections::Specialized::ListDictionary*, "NamedHeaders",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::KnownHttpVerb*>::get>();
}
inline void System::Net::KnownHttpVerb::setStaticF_Get(::System::Net::KnownHttpVerb* value) {
  ::cordl_internals::setStaticField<::System::Net::KnownHttpVerb*, "Get", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::KnownHttpVerb*>::get>(
      std::forward<::System::Net::KnownHttpVerb*>(value));
}
inline ::System::Net::KnownHttpVerb* System::Net::KnownHttpVerb::getStaticF_Get() {
  return ::cordl_internals::getStaticField<::System::Net::KnownHttpVerb*, "Get", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::KnownHttpVerb*>::get>();
}
inline void System::Net::KnownHttpVerb::setStaticF_Connect(::System::Net::KnownHttpVerb* value) {
  ::cordl_internals::setStaticField<::System::Net::KnownHttpVerb*, "Connect", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::KnownHttpVerb*>::get>(
      std::forward<::System::Net::KnownHttpVerb*>(value));
}
inline ::System::Net::KnownHttpVerb* System::Net::KnownHttpVerb::getStaticF_Connect() {
  return ::cordl_internals::getStaticField<::System::Net::KnownHttpVerb*, "Connect", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::KnownHttpVerb*>::get>();
}
inline void System::Net::KnownHttpVerb::setStaticF_Head(::System::Net::KnownHttpVerb* value) {
  ::cordl_internals::setStaticField<::System::Net::KnownHttpVerb*, "Head", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::KnownHttpVerb*>::get>(
      std::forward<::System::Net::KnownHttpVerb*>(value));
}
inline ::System::Net::KnownHttpVerb* System::Net::KnownHttpVerb::getStaticF_Head() {
  return ::cordl_internals::getStaticField<::System::Net::KnownHttpVerb*, "Head", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::KnownHttpVerb*>::get>();
}
inline void System::Net::KnownHttpVerb::setStaticF_Put(::System::Net::KnownHttpVerb* value) {
  ::cordl_internals::setStaticField<::System::Net::KnownHttpVerb*, "Put", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::KnownHttpVerb*>::get>(
      std::forward<::System::Net::KnownHttpVerb*>(value));
}
inline ::System::Net::KnownHttpVerb* System::Net::KnownHttpVerb::getStaticF_Put() {
  return ::cordl_internals::getStaticField<::System::Net::KnownHttpVerb*, "Put", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::KnownHttpVerb*>::get>();
}
inline void System::Net::KnownHttpVerb::setStaticF_Post(::System::Net::KnownHttpVerb* value) {
  ::cordl_internals::setStaticField<::System::Net::KnownHttpVerb*, "Post", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::KnownHttpVerb*>::get>(
      std::forward<::System::Net::KnownHttpVerb*>(value));
}
inline ::System::Net::KnownHttpVerb* System::Net::KnownHttpVerb::getStaticF_Post() {
  return ::cordl_internals::getStaticField<::System::Net::KnownHttpVerb*, "Post", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::KnownHttpVerb*>::get>();
}
inline void System::Net::KnownHttpVerb::setStaticF_MkCol(::System::Net::KnownHttpVerb* value) {
  ::cordl_internals::setStaticField<::System::Net::KnownHttpVerb*, "MkCol", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::KnownHttpVerb*>::get>(
      std::forward<::System::Net::KnownHttpVerb*>(value));
}
inline ::System::Net::KnownHttpVerb* System::Net::KnownHttpVerb::getStaticF_MkCol() {
  return ::cordl_internals::getStaticField<::System::Net::KnownHttpVerb*, "MkCol", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::KnownHttpVerb*>::get>();
}
inline ::System::Net::KnownHttpVerb* System::Net::KnownHttpVerb::New_ctor(::StringW name, bool requireContentBody, bool contentBodyNotAllowed, bool connectRequest, bool expectNoContentResponse) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::KnownHttpVerb*>(name, requireContentBody, contentBodyNotAllowed, connectRequest, expectNoContentResponse));
}
inline void System::Net::KnownHttpVerb::_ctor(::StringW name, bool requireContentBody, bool contentBodyNotAllowed, bool connectRequest, bool expectNoContentResponse) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::KnownHttpVerb*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, requireContentBody, contentBodyNotAllowed, connectRequest, expectNoContentResponse);
}
inline ::System::Net::KnownHttpVerb* System::Net::KnownHttpVerb::Parse(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::KnownHttpVerb*>::get(), "Parse", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::KnownHttpVerb*, false>(nullptr, ___internal_method, name);
}
// Ctor Parameters []
constexpr ::System::Net::KnownHttpVerb::KnownHttpVerb() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
