#pragma once
// IWYU pragma private; include "Oculus\Platform\Models\ManagedInfo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__ManagedInfo_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::ManagedInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::Models::ManagedInfo::*)(::System::IntPtr)>(&::Oculus::Platform::Models::ManagedInfo::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5df0ce4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::ManagedInfo*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& Oculus::Platform::Models::ManagedInfo::__cordl_internal_get_Department() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Department;
}
constexpr ::StringW const& Oculus::Platform::Models::ManagedInfo::__cordl_internal_get_Department() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Department;
}
constexpr void Oculus::Platform::Models::ManagedInfo::__cordl_internal_set_Department(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Department = value;
}
constexpr ::StringW& Oculus::Platform::Models::ManagedInfo::__cordl_internal_get_Email() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Email;
}
constexpr ::StringW const& Oculus::Platform::Models::ManagedInfo::__cordl_internal_get_Email() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Email;
}
constexpr void Oculus::Platform::Models::ManagedInfo::__cordl_internal_set_Email(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Email = value;
}
constexpr ::StringW& Oculus::Platform::Models::ManagedInfo::__cordl_internal_get_EmployeeNumber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EmployeeNumber;
}
constexpr ::StringW const& Oculus::Platform::Models::ManagedInfo::__cordl_internal_get_EmployeeNumber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EmployeeNumber;
}
constexpr void Oculus::Platform::Models::ManagedInfo::__cordl_internal_set_EmployeeNumber(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___EmployeeNumber = value;
}
constexpr ::StringW& Oculus::Platform::Models::ManagedInfo::__cordl_internal_get_ExternalId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ExternalId;
}
constexpr ::StringW const& Oculus::Platform::Models::ManagedInfo::__cordl_internal_get_ExternalId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ExternalId;
}
constexpr void Oculus::Platform::Models::ManagedInfo::__cordl_internal_set_ExternalId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ExternalId = value;
}
constexpr ::StringW& Oculus::Platform::Models::ManagedInfo::__cordl_internal_get_Location() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Location;
}
constexpr ::StringW const& Oculus::Platform::Models::ManagedInfo::__cordl_internal_get_Location() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Location;
}
constexpr void Oculus::Platform::Models::ManagedInfo::__cordl_internal_set_Location(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Location = value;
}
constexpr ::StringW& Oculus::Platform::Models::ManagedInfo::__cordl_internal_get_Manager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Manager;
}
constexpr ::StringW const& Oculus::Platform::Models::ManagedInfo::__cordl_internal_get_Manager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Manager;
}
constexpr void Oculus::Platform::Models::ManagedInfo::__cordl_internal_set_Manager(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Manager = value;
}
constexpr ::StringW& Oculus::Platform::Models::ManagedInfo::__cordl_internal_get_Name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Name;
}
constexpr ::StringW const& Oculus::Platform::Models::ManagedInfo::__cordl_internal_get_Name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Name;
}
constexpr void Oculus::Platform::Models::ManagedInfo::__cordl_internal_set_Name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Name = value;
}
constexpr ::StringW& Oculus::Platform::Models::ManagedInfo::__cordl_internal_get_OrganizationId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OrganizationId;
}
constexpr ::StringW const& Oculus::Platform::Models::ManagedInfo::__cordl_internal_get_OrganizationId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OrganizationId;
}
constexpr void Oculus::Platform::Models::ManagedInfo::__cordl_internal_set_OrganizationId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___OrganizationId = value;
}
constexpr ::StringW& Oculus::Platform::Models::ManagedInfo::__cordl_internal_get_OrganizationName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OrganizationName;
}
constexpr ::StringW const& Oculus::Platform::Models::ManagedInfo::__cordl_internal_get_OrganizationName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OrganizationName;
}
constexpr void Oculus::Platform::Models::ManagedInfo::__cordl_internal_set_OrganizationName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___OrganizationName = value;
}
constexpr ::StringW& Oculus::Platform::Models::ManagedInfo::__cordl_internal_get_Position() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Position;
}
constexpr ::StringW const& Oculus::Platform::Models::ManagedInfo::__cordl_internal_get_Position() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Position;
}
constexpr void Oculus::Platform::Models::ManagedInfo::__cordl_internal_set_Position(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Position = value;
}
inline void Oculus::Platform::Models::ManagedInfo::_ctor(::System::IntPtr o) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::ManagedInfo*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline ::Oculus::Platform::Models::ManagedInfo* Oculus::Platform::Models::ManagedInfo::New_ctor(::System::IntPtr o) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::Models::ManagedInfo*>(o));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::ManagedInfo::ManagedInfo() {}
