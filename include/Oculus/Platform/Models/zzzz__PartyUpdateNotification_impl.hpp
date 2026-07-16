#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/PartyUpdateNotification.hpp"
#include "Oculus/Platform/zzzz__PartyUpdateAction_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__PartyUpdateNotification_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::PartyUpdateNotification._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::Models::PartyUpdateNotification::*)(::System::IntPtr)>(&::Oculus::Platform::Models::PartyUpdateNotification::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5def600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::PartyUpdateNotification*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
constexpr ::Oculus::Platform::PartyUpdateAction& Oculus::Platform::Models::PartyUpdateNotification::__cordl_internal_get_Action() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Action;
}
constexpr ::Oculus::Platform::PartyUpdateAction const& Oculus::Platform::Models::PartyUpdateNotification::__cordl_internal_get_Action() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Action;
}
constexpr void Oculus::Platform::Models::PartyUpdateNotification::__cordl_internal_set_Action(::Oculus::Platform::PartyUpdateAction value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Action = value;
}
constexpr uint64_t& Oculus::Platform::Models::PartyUpdateNotification::__cordl_internal_get_PartyId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PartyId;
}
constexpr uint64_t const& Oculus::Platform::Models::PartyUpdateNotification::__cordl_internal_get_PartyId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PartyId;
}
constexpr void Oculus::Platform::Models::PartyUpdateNotification::__cordl_internal_set_PartyId(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___PartyId = value;
}
constexpr uint64_t& Oculus::Platform::Models::PartyUpdateNotification::__cordl_internal_get_SenderId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SenderId;
}
constexpr uint64_t const& Oculus::Platform::Models::PartyUpdateNotification::__cordl_internal_get_SenderId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SenderId;
}
constexpr void Oculus::Platform::Models::PartyUpdateNotification::__cordl_internal_set_SenderId(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SenderId = value;
}
constexpr ::StringW& Oculus::Platform::Models::PartyUpdateNotification::__cordl_internal_get_UpdateTimestamp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UpdateTimestamp;
}
constexpr ::StringW const& Oculus::Platform::Models::PartyUpdateNotification::__cordl_internal_get_UpdateTimestamp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UpdateTimestamp;
}
constexpr void Oculus::Platform::Models::PartyUpdateNotification::__cordl_internal_set_UpdateTimestamp(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___UpdateTimestamp = value;
}
constexpr ::StringW& Oculus::Platform::Models::PartyUpdateNotification::__cordl_internal_get_UserAlias() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UserAlias;
}
constexpr ::StringW const& Oculus::Platform::Models::PartyUpdateNotification::__cordl_internal_get_UserAlias() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UserAlias;
}
constexpr void Oculus::Platform::Models::PartyUpdateNotification::__cordl_internal_set_UserAlias(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___UserAlias = value;
}
constexpr uint64_t& Oculus::Platform::Models::PartyUpdateNotification::__cordl_internal_get_UserId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UserId;
}
constexpr uint64_t const& Oculus::Platform::Models::PartyUpdateNotification::__cordl_internal_get_UserId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UserId;
}
constexpr void Oculus::Platform::Models::PartyUpdateNotification::__cordl_internal_set_UserId(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___UserId = value;
}
constexpr ::StringW& Oculus::Platform::Models::PartyUpdateNotification::__cordl_internal_get_UserName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UserName;
}
constexpr ::StringW const& Oculus::Platform::Models::PartyUpdateNotification::__cordl_internal_get_UserName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UserName;
}
constexpr void Oculus::Platform::Models::PartyUpdateNotification::__cordl_internal_set_UserName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___UserName = value;
}
inline void Oculus::Platform::Models::PartyUpdateNotification::_ctor(::System::IntPtr o) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::PartyUpdateNotification*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline ::Oculus::Platform::Models::PartyUpdateNotification* Oculus::Platform::Models::PartyUpdateNotification::New_ctor(::System::IntPtr o) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::Models::PartyUpdateNotification*>(o));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::PartyUpdateNotification::PartyUpdateNotification() {}
