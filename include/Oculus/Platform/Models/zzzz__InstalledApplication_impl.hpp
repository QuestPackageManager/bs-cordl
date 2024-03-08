#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__InstalledApplication_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::InstalledApplication._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::InstalledApplication::*)(void*)>(
    &::Oculus::Platform::Models::InstalledApplication::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x285a3b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::InstalledApplication*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& Oculus::Platform::Models::InstalledApplication::__cordl_internal_get_ApplicationId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ApplicationId;
}
constexpr ::StringW const& Oculus::Platform::Models::InstalledApplication::__cordl_internal_get_ApplicationId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ApplicationId;
}
constexpr void Oculus::Platform::Models::InstalledApplication::__cordl_internal_set_ApplicationId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ApplicationId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Oculus::Platform::Models::InstalledApplication::__cordl_internal_get_PackageName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PackageName;
}
constexpr ::StringW const& Oculus::Platform::Models::InstalledApplication::__cordl_internal_get_PackageName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PackageName;
}
constexpr void Oculus::Platform::Models::InstalledApplication::__cordl_internal_set_PackageName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PackageName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Oculus::Platform::Models::InstalledApplication::__cordl_internal_get_Status() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Status;
}
constexpr ::StringW const& Oculus::Platform::Models::InstalledApplication::__cordl_internal_get_Status() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Status;
}
constexpr void Oculus::Platform::Models::InstalledApplication::__cordl_internal_set_Status(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Status)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Oculus::Platform::Models::InstalledApplication::__cordl_internal_get_VersionCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___VersionCode;
}
constexpr int32_t const& Oculus::Platform::Models::InstalledApplication::__cordl_internal_get_VersionCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___VersionCode;
}
constexpr void Oculus::Platform::Models::InstalledApplication::__cordl_internal_set_VersionCode(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___VersionCode = value;
}
constexpr ::StringW& Oculus::Platform::Models::InstalledApplication::__cordl_internal_get_VersionName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___VersionName;
}
constexpr ::StringW const& Oculus::Platform::Models::InstalledApplication::__cordl_internal_get_VersionName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___VersionName;
}
constexpr void Oculus::Platform::Models::InstalledApplication::__cordl_internal_set_VersionName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___VersionName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Oculus::Platform::Models::InstalledApplication* Oculus::Platform::Models::InstalledApplication::New_ctor(void* o) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::Models::InstalledApplication*>(o));
}
inline void Oculus::Platform::Models::InstalledApplication::_ctor(void* o) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::InstalledApplication*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::InstalledApplication::InstalledApplication() {}
