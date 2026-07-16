#pragma once
// IWYU pragma private; include "UnityEngine/Android/AndroidAssetPackInfo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Android/zzzz__AndroidAssetPackError_impl.hpp"
#include "UnityEngine/Android/zzzz__AndroidAssetPackStatus_impl.hpp"
#include "UnityEngine/Android/zzzz__AndroidAssetPackInfo_def.hpp"
#include "UnityEngine/Android/zzzz__AndroidAssetPackError_def.hpp"
#include "UnityEngine/Android/zzzz__AndroidAssetPackStatus_def.hpp"
//  Writing Method size for method: ::UnityEngine::Android::AndroidAssetPackInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Android::AndroidAssetPackInfo::*)(
    ::StringW, ::UnityEngine::Android::AndroidAssetPackStatus, uint64_t, uint64_t, float_t, ::UnityEngine::Android::AndroidAssetPackError)>(&::UnityEngine::Android::AndroidAssetPackInfo::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6a2d9dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::AndroidAssetPackInfo*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Android::AndroidAssetPackStatus>(), ::i2c::type_of<uint64_t>(),
                                                                 ::i2c::type_of<uint64_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Android::AndroidAssetPackError>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Android::AndroidAssetPackInfo.DownloadInProgress
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Android::AndroidAssetPackStatus)>(&::UnityEngine::Android::AndroidAssetPackInfo::DownloadInProgress)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6a2d9f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::AndroidAssetPackInfo*>(),
                                                                                           { "DownloadInProgress", {}, { ::i2c::type_of<::UnityEngine::Android::AndroidAssetPackStatus>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::Android::AndroidAssetPackInfo::__cordl_internal_get__name_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name_k__BackingField;
}
constexpr ::StringW const& UnityEngine::Android::AndroidAssetPackInfo::__cordl_internal_get__name_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name_k__BackingField;
}
constexpr void UnityEngine::Android::AndroidAssetPackInfo::__cordl_internal_set__name_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____name_k__BackingField = value;
}
constexpr ::UnityEngine::Android::AndroidAssetPackStatus& UnityEngine::Android::AndroidAssetPackInfo::__cordl_internal_get__status_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____status_k__BackingField;
}
constexpr ::UnityEngine::Android::AndroidAssetPackStatus const& UnityEngine::Android::AndroidAssetPackInfo::__cordl_internal_get__status_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____status_k__BackingField;
}
constexpr void UnityEngine::Android::AndroidAssetPackInfo::__cordl_internal_set__status_k__BackingField(::UnityEngine::Android::AndroidAssetPackStatus value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____status_k__BackingField = value;
}
constexpr uint64_t& UnityEngine::Android::AndroidAssetPackInfo::__cordl_internal_get__size_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____size_k__BackingField;
}
constexpr uint64_t const& UnityEngine::Android::AndroidAssetPackInfo::__cordl_internal_get__size_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____size_k__BackingField;
}
constexpr void UnityEngine::Android::AndroidAssetPackInfo::__cordl_internal_set__size_k__BackingField(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____size_k__BackingField = value;
}
constexpr uint64_t& UnityEngine::Android::AndroidAssetPackInfo::__cordl_internal_get__bytesDownloaded_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bytesDownloaded_k__BackingField;
}
constexpr uint64_t const& UnityEngine::Android::AndroidAssetPackInfo::__cordl_internal_get__bytesDownloaded_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bytesDownloaded_k__BackingField;
}
constexpr void UnityEngine::Android::AndroidAssetPackInfo::__cordl_internal_set__bytesDownloaded_k__BackingField(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bytesDownloaded_k__BackingField = value;
}
constexpr float_t& UnityEngine::Android::AndroidAssetPackInfo::__cordl_internal_get__transferProgress_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transferProgress_k__BackingField;
}
constexpr float_t const& UnityEngine::Android::AndroidAssetPackInfo::__cordl_internal_get__transferProgress_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transferProgress_k__BackingField;
}
constexpr void UnityEngine::Android::AndroidAssetPackInfo::__cordl_internal_set__transferProgress_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____transferProgress_k__BackingField = value;
}
constexpr ::UnityEngine::Android::AndroidAssetPackError& UnityEngine::Android::AndroidAssetPackInfo::__cordl_internal_get__error_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____error_k__BackingField;
}
constexpr ::UnityEngine::Android::AndroidAssetPackError const& UnityEngine::Android::AndroidAssetPackInfo::__cordl_internal_get__error_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____error_k__BackingField;
}
constexpr void UnityEngine::Android::AndroidAssetPackInfo::__cordl_internal_set__error_k__BackingField(::UnityEngine::Android::AndroidAssetPackError value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____error_k__BackingField = value;
}
inline void UnityEngine::Android::AndroidAssetPackInfo::_ctor(::StringW name, ::UnityEngine::Android::AndroidAssetPackStatus status, uint64_t size, uint64_t bytesDownloaded, float_t transferProgress,
                                                              ::UnityEngine::Android::AndroidAssetPackError error) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::AndroidAssetPackInfo*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Android::AndroidAssetPackStatus>(), ::i2c::type_of<uint64_t>(),
                                                               ::i2c::type_of<uint64_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Android::AndroidAssetPackError>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, status, size, bytesDownloaded, transferProgress, error);
}
inline bool UnityEngine::Android::AndroidAssetPackInfo::DownloadInProgress(::UnityEngine::Android::AndroidAssetPackStatus status) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::AndroidAssetPackInfo*>(),
                                                                                         { "DownloadInProgress", {}, { ::i2c::type_of<::UnityEngine::Android::AndroidAssetPackStatus>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, status);
}
inline ::UnityEngine::Android::AndroidAssetPackInfo* UnityEngine::Android::AndroidAssetPackInfo::New_ctor(::StringW name, ::UnityEngine::Android::AndroidAssetPackStatus status, uint64_t size,
                                                                                                          uint64_t bytesDownloaded, float_t transferProgress,
                                                                                                          ::UnityEngine::Android::AndroidAssetPackError error) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Android::AndroidAssetPackInfo*>(name, status, size, bytesDownloaded, transferProgress, error));
}
// Ctor Parameters []
constexpr ::UnityEngine::Android::AndroidAssetPackInfo::AndroidAssetPackInfo() {}
