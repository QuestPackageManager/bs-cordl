#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/AppDownloadProgressResult.hpp"
#include "Oculus/Platform/zzzz__AppStatus_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__AppDownloadProgressResult_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::AppDownloadProgressResult._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::AppDownloadProgressResult::*)(void*)>(
    &::Oculus::Platform::Models::AppDownloadProgressResult::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2ad9f9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::AppDownloadProgressResult*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
constexpr int64_t& Oculus::Platform::Models::AppDownloadProgressResult::__cordl_internal_get_DownloadBytes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DownloadBytes;
}
constexpr int64_t const& Oculus::Platform::Models::AppDownloadProgressResult::__cordl_internal_get_DownloadBytes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DownloadBytes;
}
constexpr void Oculus::Platform::Models::AppDownloadProgressResult::__cordl_internal_set_DownloadBytes(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___DownloadBytes = value;
}
constexpr int64_t& Oculus::Platform::Models::AppDownloadProgressResult::__cordl_internal_get_DownloadedBytes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DownloadedBytes;
}
constexpr int64_t const& Oculus::Platform::Models::AppDownloadProgressResult::__cordl_internal_get_DownloadedBytes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DownloadedBytes;
}
constexpr void Oculus::Platform::Models::AppDownloadProgressResult::__cordl_internal_set_DownloadedBytes(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___DownloadedBytes = value;
}
constexpr ::Oculus::Platform::AppStatus& Oculus::Platform::Models::AppDownloadProgressResult::__cordl_internal_get_StatusCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___StatusCode;
}
constexpr ::Oculus::Platform::AppStatus const& Oculus::Platform::Models::AppDownloadProgressResult::__cordl_internal_get_StatusCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___StatusCode;
}
constexpr void Oculus::Platform::Models::AppDownloadProgressResult::__cordl_internal_set_StatusCode(::Oculus::Platform::AppStatus value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___StatusCode = value;
}
inline ::Oculus::Platform::Models::AppDownloadProgressResult* Oculus::Platform::Models::AppDownloadProgressResult::New_ctor(void* o) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::Models::AppDownloadProgressResult*>(o));
}
inline void Oculus::Platform::Models::AppDownloadProgressResult::_ctor(void* o) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::AppDownloadProgressResult*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::AppDownloadProgressResult::AppDownloadProgressResult() {}
