#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/PartyUpdateNotification.hpp"
#include "Oculus/Platform/zzzz__PartyUpdateAction_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__PartyUpdateNotification_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::PartyUpdateNotification._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::PartyUpdateNotification::*)(::System::IntPtr)>(
    &::Oculus::Platform::Models::PartyUpdateNotification::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x3f1d0b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::PartyUpdateNotification*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___UpdateTimestamp)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___UserAlias)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___UserName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Oculus::Platform::Models::PartyUpdateNotification* Oculus::Platform::Models::PartyUpdateNotification::New_ctor(::System::IntPtr o) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::Models::PartyUpdateNotification*>(o));
}
inline void Oculus::Platform::Models::PartyUpdateNotification::_ctor(::System::IntPtr o) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::PartyUpdateNotification*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::PartyUpdateNotification::PartyUpdateNotification() {}
