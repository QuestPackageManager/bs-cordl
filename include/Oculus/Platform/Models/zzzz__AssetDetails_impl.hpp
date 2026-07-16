#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/AssetDetails.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__AssetDetails_def.hpp"
#include "Oculus/Platform/Models/zzzz__LanguagePackInfo_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::AssetDetails._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::Models::AssetDetails::*)(::System::IntPtr)>(&::Oculus::Platform::Models::AssetDetails::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5dd7d64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::AssetDetails*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
constexpr uint64_t& Oculus::Platform::Models::AssetDetails::__cordl_internal_get_AssetId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AssetId;
}
constexpr uint64_t const& Oculus::Platform::Models::AssetDetails::__cordl_internal_get_AssetId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AssetId;
}
constexpr void Oculus::Platform::Models::AssetDetails::__cordl_internal_set_AssetId(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___AssetId = value;
}
constexpr ::StringW& Oculus::Platform::Models::AssetDetails::__cordl_internal_get_AssetType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AssetType;
}
constexpr ::StringW const& Oculus::Platform::Models::AssetDetails::__cordl_internal_get_AssetType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AssetType;
}
constexpr void Oculus::Platform::Models::AssetDetails::__cordl_internal_set_AssetType(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___AssetType = value;
}
constexpr ::StringW& Oculus::Platform::Models::AssetDetails::__cordl_internal_get_DownloadStatus() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DownloadStatus;
}
constexpr ::StringW const& Oculus::Platform::Models::AssetDetails::__cordl_internal_get_DownloadStatus() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DownloadStatus;
}
constexpr void Oculus::Platform::Models::AssetDetails::__cordl_internal_set_DownloadStatus(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___DownloadStatus = value;
}
constexpr ::StringW& Oculus::Platform::Models::AssetDetails::__cordl_internal_get_Filepath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Filepath;
}
constexpr ::StringW const& Oculus::Platform::Models::AssetDetails::__cordl_internal_get_Filepath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Filepath;
}
constexpr void Oculus::Platform::Models::AssetDetails::__cordl_internal_set_Filepath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Filepath = value;
}
constexpr ::StringW& Oculus::Platform::Models::AssetDetails::__cordl_internal_get_IapStatus() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IapStatus;
}
constexpr ::StringW const& Oculus::Platform::Models::AssetDetails::__cordl_internal_get_IapStatus() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IapStatus;
}
constexpr void Oculus::Platform::Models::AssetDetails::__cordl_internal_set_IapStatus(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___IapStatus = value;
}
constexpr ::Oculus::Platform::Models::LanguagePackInfo*& Oculus::Platform::Models::AssetDetails::__cordl_internal_get_LanguageOptional() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LanguageOptional;
}
constexpr ::Oculus::Platform::Models::LanguagePackInfo* const& Oculus::Platform::Models::AssetDetails::__cordl_internal_get_LanguageOptional() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LanguageOptional;
}
constexpr void Oculus::Platform::Models::AssetDetails::__cordl_internal_set_LanguageOptional(::Oculus::Platform::Models::LanguagePackInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___LanguageOptional = value;
}
constexpr ::Oculus::Platform::Models::LanguagePackInfo*& Oculus::Platform::Models::AssetDetails::__cordl_internal_get_Language() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Language;
}
constexpr ::Oculus::Platform::Models::LanguagePackInfo* const& Oculus::Platform::Models::AssetDetails::__cordl_internal_get_Language() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Language;
}
constexpr void Oculus::Platform::Models::AssetDetails::__cordl_internal_set_Language(::Oculus::Platform::Models::LanguagePackInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Language = value;
}
constexpr ::StringW& Oculus::Platform::Models::AssetDetails::__cordl_internal_get_Metadata() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Metadata;
}
constexpr ::StringW const& Oculus::Platform::Models::AssetDetails::__cordl_internal_get_Metadata() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Metadata;
}
constexpr void Oculus::Platform::Models::AssetDetails::__cordl_internal_set_Metadata(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Metadata = value;
}
inline void Oculus::Platform::Models::AssetDetails::_ctor(::System::IntPtr o) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::AssetDetails*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline ::Oculus::Platform::Models::AssetDetails* Oculus::Platform::Models::AssetDetails::New_ctor(::System::IntPtr o) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::Models::AssetDetails*>(o));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::AssetDetails::AssetDetails() {}
