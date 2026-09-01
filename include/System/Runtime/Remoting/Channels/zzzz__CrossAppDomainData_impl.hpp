#pragma once
// IWYU pragma private; include "System\Runtime\Remoting\Channels\CrossAppDomainData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/Channels/zzzz__CrossAppDomainData_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::CrossAppDomainData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Channels::CrossAppDomainData::*)(int32_t)>(
    &::System::Runtime::Remoting::Channels::CrossAppDomainData::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5b3b934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Channels::CrossAppDomainData*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::CrossAppDomainData.get_DomainID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Runtime::Remoting::Channels::CrossAppDomainData::*)()>(
    &::System::Runtime::Remoting::Channels::CrossAppDomainData::get_DomainID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b3b9c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Channels::CrossAppDomainData*>(), { "get_DomainID", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::CrossAppDomainData.get_ProcessID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Remoting::Channels::CrossAppDomainData::*)()>(
    &::System::Runtime::Remoting::Channels::CrossAppDomainData::get_ProcessID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b3b9c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Channels::CrossAppDomainData*>(), { "get_ProcessID", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Object*& System::Runtime::Remoting::Channels::CrossAppDomainData::__cordl_internal_get__ContextID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ContextID;
}
constexpr ::System::Object* const& System::Runtime::Remoting::Channels::CrossAppDomainData::__cordl_internal_get__ContextID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ContextID;
}
constexpr void System::Runtime::Remoting::Channels::CrossAppDomainData::__cordl_internal_set__ContextID(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ContextID = value;
}
constexpr int32_t& System::Runtime::Remoting::Channels::CrossAppDomainData::__cordl_internal_get__DomainID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DomainID;
}
constexpr int32_t const& System::Runtime::Remoting::Channels::CrossAppDomainData::__cordl_internal_get__DomainID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DomainID;
}
constexpr void System::Runtime::Remoting::Channels::CrossAppDomainData::__cordl_internal_set__DomainID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____DomainID = value;
}
constexpr ::StringW& System::Runtime::Remoting::Channels::CrossAppDomainData::__cordl_internal_get__processGuid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____processGuid;
}
constexpr ::StringW const& System::Runtime::Remoting::Channels::CrossAppDomainData::__cordl_internal_get__processGuid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____processGuid;
}
constexpr void System::Runtime::Remoting::Channels::CrossAppDomainData::__cordl_internal_set__processGuid(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____processGuid = value;
}
inline void System::Runtime::Remoting::Channels::CrossAppDomainData::_ctor(int32_t domainId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Channels::CrossAppDomainData*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, domainId);
}
inline int32_t System::Runtime::Remoting::Channels::CrossAppDomainData::get_DomainID() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Channels::CrossAppDomainData*>(), { "get_DomainID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW System::Runtime::Remoting::Channels::CrossAppDomainData::get_ProcessID() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Channels::CrossAppDomainData*>(), { "get_ProcessID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Channels::CrossAppDomainData* System::Runtime::Remoting::Channels::CrossAppDomainData::New_ctor(int32_t domainId) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Remoting::Channels::CrossAppDomainData*>(domainId));
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Channels::CrossAppDomainData::CrossAppDomainData() {}
