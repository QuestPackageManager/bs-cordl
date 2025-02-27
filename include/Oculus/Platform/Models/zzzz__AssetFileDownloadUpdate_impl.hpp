#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/AssetFileDownloadUpdate.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__AssetFileDownloadUpdate_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::AssetFileDownloadUpdate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::AssetFileDownloadUpdate::*)(::System::IntPtr)>(
    &::Oculus::Platform::Models::AssetFileDownloadUpdate::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x3f9d750;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::AssetFileDownloadUpdate*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
constexpr uint64_t& Oculus::Platform::Models::AssetFileDownloadUpdate::__cordl_internal_get_AssetFileId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AssetFileId;
}
constexpr uint64_t const& Oculus::Platform::Models::AssetFileDownloadUpdate::__cordl_internal_get_AssetFileId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AssetFileId;
}
constexpr void Oculus::Platform::Models::AssetFileDownloadUpdate::__cordl_internal_set_AssetFileId(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___AssetFileId = value;
}
constexpr uint64_t& Oculus::Platform::Models::AssetFileDownloadUpdate::__cordl_internal_get_AssetId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AssetId;
}
constexpr uint64_t const& Oculus::Platform::Models::AssetFileDownloadUpdate::__cordl_internal_get_AssetId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AssetId;
}
constexpr void Oculus::Platform::Models::AssetFileDownloadUpdate::__cordl_internal_set_AssetId(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___AssetId = value;
}
constexpr uint64_t& Oculus::Platform::Models::AssetFileDownloadUpdate::__cordl_internal_get_BytesTotal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___BytesTotal;
}
constexpr uint64_t const& Oculus::Platform::Models::AssetFileDownloadUpdate::__cordl_internal_get_BytesTotal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___BytesTotal;
}
constexpr void Oculus::Platform::Models::AssetFileDownloadUpdate::__cordl_internal_set_BytesTotal(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___BytesTotal = value;
}
constexpr int64_t& Oculus::Platform::Models::AssetFileDownloadUpdate::__cordl_internal_get_BytesTransferred() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___BytesTransferred;
}
constexpr int64_t const& Oculus::Platform::Models::AssetFileDownloadUpdate::__cordl_internal_get_BytesTransferred() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___BytesTransferred;
}
constexpr void Oculus::Platform::Models::AssetFileDownloadUpdate::__cordl_internal_set_BytesTransferred(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___BytesTransferred = value;
}
constexpr bool& Oculus::Platform::Models::AssetFileDownloadUpdate::__cordl_internal_get_Completed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Completed;
}
constexpr bool const& Oculus::Platform::Models::AssetFileDownloadUpdate::__cordl_internal_get_Completed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Completed;
}
constexpr void Oculus::Platform::Models::AssetFileDownloadUpdate::__cordl_internal_set_Completed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Completed = value;
}
inline void Oculus::Platform::Models::AssetFileDownloadUpdate::_ctor(::System::IntPtr o) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::AssetFileDownloadUpdate*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
inline ::Oculus::Platform::Models::AssetFileDownloadUpdate* Oculus::Platform::Models::AssetFileDownloadUpdate::New_ctor(::System::IntPtr o) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::Models::AssetFileDownloadUpdate*>(o));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::AssetFileDownloadUpdate::AssetFileDownloadUpdate() {}
