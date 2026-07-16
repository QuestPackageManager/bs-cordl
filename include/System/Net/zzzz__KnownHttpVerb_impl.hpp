#pragma once
// IWYU pragma private; include "System/Net/KnownHttpVerb.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__KnownHttpVerb_def.hpp"
#include "System/Collections/Specialized/zzzz__ListDictionary_def.hpp"
//  Writing Method size for method: ::System::Net::KnownHttpVerb._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::KnownHttpVerb::*)(::StringW, bool, bool, bool, bool)>(&::System::Net::KnownHttpVerb::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6408e9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::KnownHttpVerb*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::KnownHttpVerb.Parse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::KnownHttpVerb* (*)(::StringW)>(&::System::Net::KnownHttpVerb::Parse)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6409194;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::KnownHttpVerb*>(), { "Parse", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Net::KnownHttpVerb::__cordl_internal_get_Name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Name;
}
constexpr ::StringW const& System::Net::KnownHttpVerb::__cordl_internal_get_Name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Name;
}
constexpr void System::Net::KnownHttpVerb::__cordl_internal_set_Name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Name = value;
}
constexpr bool& System::Net::KnownHttpVerb::__cordl_internal_get_RequireContentBody() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RequireContentBody;
}
constexpr bool const& System::Net::KnownHttpVerb::__cordl_internal_get_RequireContentBody() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RequireContentBody;
}
constexpr void System::Net::KnownHttpVerb::__cordl_internal_set_RequireContentBody(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___RequireContentBody = value;
}
constexpr bool& System::Net::KnownHttpVerb::__cordl_internal_get_ContentBodyNotAllowed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ContentBodyNotAllowed;
}
constexpr bool const& System::Net::KnownHttpVerb::__cordl_internal_get_ContentBodyNotAllowed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ContentBodyNotAllowed;
}
constexpr void System::Net::KnownHttpVerb::__cordl_internal_set_ContentBodyNotAllowed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ContentBodyNotAllowed = value;
}
constexpr bool& System::Net::KnownHttpVerb::__cordl_internal_get_ConnectRequest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ConnectRequest;
}
constexpr bool const& System::Net::KnownHttpVerb::__cordl_internal_get_ConnectRequest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ConnectRequest;
}
constexpr void System::Net::KnownHttpVerb::__cordl_internal_set_ConnectRequest(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ConnectRequest = value;
}
constexpr bool& System::Net::KnownHttpVerb::__cordl_internal_get_ExpectNoContentResponse() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ExpectNoContentResponse;
}
constexpr bool const& System::Net::KnownHttpVerb::__cordl_internal_get_ExpectNoContentResponse() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ExpectNoContentResponse;
}
constexpr void System::Net::KnownHttpVerb::__cordl_internal_set_ExpectNoContentResponse(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ExpectNoContentResponse = value;
}
inline void System::Net::KnownHttpVerb::setStaticF_NamedHeaders(::System::Collections::Specialized::ListDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::Specialized::ListDictionary*, "NamedHeaders", ::System::Net::KnownHttpVerb*>(
      std::forward<::System::Collections::Specialized::ListDictionary*>(value));
}
inline ::System::Collections::Specialized::ListDictionary* System::Net::KnownHttpVerb::getStaticF_NamedHeaders() {
  return ::cordl_internals::getStaticField<::System::Collections::Specialized::ListDictionary*, "NamedHeaders", ::System::Net::KnownHttpVerb*>();
}
inline void System::Net::KnownHttpVerb::setStaticF_Get(::System::Net::KnownHttpVerb* value) {
  ::cordl_internals::setStaticField<::System::Net::KnownHttpVerb*, "Get", ::System::Net::KnownHttpVerb*>(std::forward<::System::Net::KnownHttpVerb*>(value));
}
inline ::System::Net::KnownHttpVerb* System::Net::KnownHttpVerb::getStaticF_Get() {
  return ::cordl_internals::getStaticField<::System::Net::KnownHttpVerb*, "Get", ::System::Net::KnownHttpVerb*>();
}
inline void System::Net::KnownHttpVerb::setStaticF_Connect(::System::Net::KnownHttpVerb* value) {
  ::cordl_internals::setStaticField<::System::Net::KnownHttpVerb*, "Connect", ::System::Net::KnownHttpVerb*>(std::forward<::System::Net::KnownHttpVerb*>(value));
}
inline ::System::Net::KnownHttpVerb* System::Net::KnownHttpVerb::getStaticF_Connect() {
  return ::cordl_internals::getStaticField<::System::Net::KnownHttpVerb*, "Connect", ::System::Net::KnownHttpVerb*>();
}
inline void System::Net::KnownHttpVerb::setStaticF_Head(::System::Net::KnownHttpVerb* value) {
  ::cordl_internals::setStaticField<::System::Net::KnownHttpVerb*, "Head", ::System::Net::KnownHttpVerb*>(std::forward<::System::Net::KnownHttpVerb*>(value));
}
inline ::System::Net::KnownHttpVerb* System::Net::KnownHttpVerb::getStaticF_Head() {
  return ::cordl_internals::getStaticField<::System::Net::KnownHttpVerb*, "Head", ::System::Net::KnownHttpVerb*>();
}
inline void System::Net::KnownHttpVerb::setStaticF_Put(::System::Net::KnownHttpVerb* value) {
  ::cordl_internals::setStaticField<::System::Net::KnownHttpVerb*, "Put", ::System::Net::KnownHttpVerb*>(std::forward<::System::Net::KnownHttpVerb*>(value));
}
inline ::System::Net::KnownHttpVerb* System::Net::KnownHttpVerb::getStaticF_Put() {
  return ::cordl_internals::getStaticField<::System::Net::KnownHttpVerb*, "Put", ::System::Net::KnownHttpVerb*>();
}
inline void System::Net::KnownHttpVerb::setStaticF_Post(::System::Net::KnownHttpVerb* value) {
  ::cordl_internals::setStaticField<::System::Net::KnownHttpVerb*, "Post", ::System::Net::KnownHttpVerb*>(std::forward<::System::Net::KnownHttpVerb*>(value));
}
inline ::System::Net::KnownHttpVerb* System::Net::KnownHttpVerb::getStaticF_Post() {
  return ::cordl_internals::getStaticField<::System::Net::KnownHttpVerb*, "Post", ::System::Net::KnownHttpVerb*>();
}
inline void System::Net::KnownHttpVerb::setStaticF_MkCol(::System::Net::KnownHttpVerb* value) {
  ::cordl_internals::setStaticField<::System::Net::KnownHttpVerb*, "MkCol", ::System::Net::KnownHttpVerb*>(std::forward<::System::Net::KnownHttpVerb*>(value));
}
inline ::System::Net::KnownHttpVerb* System::Net::KnownHttpVerb::getStaticF_MkCol() {
  return ::cordl_internals::getStaticField<::System::Net::KnownHttpVerb*, "MkCol", ::System::Net::KnownHttpVerb*>();
}
inline void System::Net::KnownHttpVerb::_ctor(::StringW name, bool requireContentBody, bool contentBodyNotAllowed, bool connectRequest, bool expectNoContentResponse) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::KnownHttpVerb*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, requireContentBody, contentBodyNotAllowed, connectRequest, expectNoContentResponse);
}
inline ::System::Net::KnownHttpVerb* System::Net::KnownHttpVerb::Parse(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::KnownHttpVerb*>(), { "Parse", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::KnownHttpVerb*>(nullptr, ___internal_method, name);
}
inline ::System::Net::KnownHttpVerb* System::Net::KnownHttpVerb::New_ctor(::StringW name, bool requireContentBody, bool contentBodyNotAllowed, bool connectRequest, bool expectNoContentResponse) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::KnownHttpVerb*>(name, requireContentBody, contentBodyNotAllowed, connectRequest, expectNoContentResponse));
}
// Ctor Parameters []
constexpr ::System::Net::KnownHttpVerb::KnownHttpVerb() {}
