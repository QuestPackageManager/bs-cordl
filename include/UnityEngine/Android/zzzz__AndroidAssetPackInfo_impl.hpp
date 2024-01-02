#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Android/zzzz__AndroidAssetPackError_impl.hpp"
#include "UnityEngine/Android/zzzz__AndroidAssetPackStatus_impl.hpp"
#include "UnityEngine/Android/zzzz__AndroidAssetPackInfo_def.hpp"
#include "UnityEngine/Android/zzzz__AndroidAssetPackError_def.hpp"
#include "UnityEngine/Android/zzzz__AndroidAssetPackStatus_def.hpp"
//  Writing Method size for method: ::UnityEngine::Android::AndroidAssetPackInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Android::AndroidAssetPackInfo::*)(
    ::StringW, ::UnityEngine::Android::AndroidAssetPackStatus, uint64_t, uint64_t, float_t, ::UnityEngine::Android::AndroidAssetPackError)>(&::UnityEngine::Android::AndroidAssetPackInfo::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2c8cb64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Android::AndroidAssetPackInfo*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Android::AndroidAssetPackStatus>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Android::AndroidAssetPackError>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::Android::AndroidAssetPackInfo::__get__name_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name_k__BackingField;
}
constexpr ::StringW const& UnityEngine::Android::AndroidAssetPackInfo::__get__name_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name_k__BackingField;
}
constexpr void UnityEngine::Android::AndroidAssetPackInfo::__set__name_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____name_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Android::AndroidAssetPackStatus& UnityEngine::Android::AndroidAssetPackInfo::__get__status_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____status_k__BackingField;
}
constexpr ::UnityEngine::Android::AndroidAssetPackStatus const& UnityEngine::Android::AndroidAssetPackInfo::__get__status_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____status_k__BackingField;
}
constexpr void UnityEngine::Android::AndroidAssetPackInfo::__set__status_k__BackingField(::UnityEngine::Android::AndroidAssetPackStatus value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____status_k__BackingField = value;
}
constexpr uint64_t& UnityEngine::Android::AndroidAssetPackInfo::__get__size_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____size_k__BackingField;
}
constexpr uint64_t const& UnityEngine::Android::AndroidAssetPackInfo::__get__size_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____size_k__BackingField;
}
constexpr void UnityEngine::Android::AndroidAssetPackInfo::__set__size_k__BackingField(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____size_k__BackingField = value;
}
constexpr uint64_t& UnityEngine::Android::AndroidAssetPackInfo::__get__bytesDownloaded_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bytesDownloaded_k__BackingField;
}
constexpr uint64_t const& UnityEngine::Android::AndroidAssetPackInfo::__get__bytesDownloaded_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bytesDownloaded_k__BackingField;
}
constexpr void UnityEngine::Android::AndroidAssetPackInfo::__set__bytesDownloaded_k__BackingField(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bytesDownloaded_k__BackingField = value;
}
constexpr float_t& UnityEngine::Android::AndroidAssetPackInfo::__get__transferProgress_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transferProgress_k__BackingField;
}
constexpr float_t const& UnityEngine::Android::AndroidAssetPackInfo::__get__transferProgress_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transferProgress_k__BackingField;
}
constexpr void UnityEngine::Android::AndroidAssetPackInfo::__set__transferProgress_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____transferProgress_k__BackingField = value;
}
constexpr ::UnityEngine::Android::AndroidAssetPackError& UnityEngine::Android::AndroidAssetPackInfo::__get__error_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____error_k__BackingField;
}
constexpr ::UnityEngine::Android::AndroidAssetPackError const& UnityEngine::Android::AndroidAssetPackInfo::__get__error_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____error_k__BackingField;
}
constexpr void UnityEngine::Android::AndroidAssetPackInfo::__set__error_k__BackingField(::UnityEngine::Android::AndroidAssetPackError value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____error_k__BackingField = value;
}
inline ::UnityEngine::Android::AndroidAssetPackInfo* UnityEngine::Android::AndroidAssetPackInfo::New_ctor(::StringW name, ::UnityEngine::Android::AndroidAssetPackStatus status, uint64_t size,
                                                                                                          uint64_t bytesDownloaded, float_t transferProgress,
                                                                                                          ::UnityEngine::Android::AndroidAssetPackError error) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Android::AndroidAssetPackInfo*>(name, status, size, bytesDownloaded, transferProgress, error));
}
inline void UnityEngine::Android::AndroidAssetPackInfo::_ctor(::StringW name, ::UnityEngine::Android::AndroidAssetPackStatus status, uint64_t size, uint64_t bytesDownloaded, float_t transferProgress,
                                                              ::UnityEngine::Android::AndroidAssetPackError error) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Android::AndroidAssetPackInfo*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Android::AndroidAssetPackStatus>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Android::AndroidAssetPackError>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, status, size, bytesDownloaded, transferProgress, error);
}
// Ctor Parameters []
constexpr ::UnityEngine::Android::AndroidAssetPackInfo::AndroidAssetPackInfo() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
