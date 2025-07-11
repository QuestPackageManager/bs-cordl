#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/ApplicationVersion.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__ApplicationVersion_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::ApplicationVersion._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::ApplicationVersion::*)(::System::IntPtr)>(
    &::Oculus::Platform::Models::ApplicationVersion::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x3f8f834;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::ApplicationVersion*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& Oculus::Platform::Models::ApplicationVersion::__cordl_internal_get_CurrentCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CurrentCode;
}
constexpr int32_t const& Oculus::Platform::Models::ApplicationVersion::__cordl_internal_get_CurrentCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CurrentCode;
}
constexpr void Oculus::Platform::Models::ApplicationVersion::__cordl_internal_set_CurrentCode(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___CurrentCode = value;
}
constexpr ::StringW& Oculus::Platform::Models::ApplicationVersion::__cordl_internal_get_CurrentName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CurrentName;
}
constexpr ::StringW const& Oculus::Platform::Models::ApplicationVersion::__cordl_internal_get_CurrentName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CurrentName;
}
constexpr void Oculus::Platform::Models::ApplicationVersion::__cordl_internal_set_CurrentName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___CurrentName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Oculus::Platform::Models::ApplicationVersion::__cordl_internal_get_LatestCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LatestCode;
}
constexpr int32_t const& Oculus::Platform::Models::ApplicationVersion::__cordl_internal_get_LatestCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LatestCode;
}
constexpr void Oculus::Platform::Models::ApplicationVersion::__cordl_internal_set_LatestCode(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___LatestCode = value;
}
constexpr ::StringW& Oculus::Platform::Models::ApplicationVersion::__cordl_internal_get_LatestName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LatestName;
}
constexpr ::StringW const& Oculus::Platform::Models::ApplicationVersion::__cordl_internal_get_LatestName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LatestName;
}
constexpr void Oculus::Platform::Models::ApplicationVersion::__cordl_internal_set_LatestName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___LatestName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int64_t& Oculus::Platform::Models::ApplicationVersion::__cordl_internal_get_ReleaseDate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ReleaseDate;
}
constexpr int64_t const& Oculus::Platform::Models::ApplicationVersion::__cordl_internal_get_ReleaseDate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ReleaseDate;
}
constexpr void Oculus::Platform::Models::ApplicationVersion::__cordl_internal_set_ReleaseDate(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ReleaseDate = value;
}
constexpr ::StringW& Oculus::Platform::Models::ApplicationVersion::__cordl_internal_get_Size() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Size;
}
constexpr ::StringW const& Oculus::Platform::Models::ApplicationVersion::__cordl_internal_get_Size() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Size;
}
constexpr void Oculus::Platform::Models::ApplicationVersion::__cordl_internal_set_Size(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Size)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Oculus::Platform::Models::ApplicationVersion::_ctor(::System::IntPtr o) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::ApplicationVersion*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
inline ::Oculus::Platform::Models::ApplicationVersion* Oculus::Platform::Models::ApplicationVersion::New_ctor(::System::IntPtr o) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::Models::ApplicationVersion*>(o));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::ApplicationVersion::ApplicationVersion() {}
