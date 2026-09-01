#pragma once
// IWYU pragma private; include "UnityEngine\Android\AndroidAssetPackState.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Android/zzzz__AndroidAssetPackError_impl.hpp"
#include "UnityEngine/Android/zzzz__AndroidAssetPackStatus_impl.hpp"
#include "UnityEngine/Android/zzzz__AndroidAssetPackState_def.hpp"
#include "UnityEngine/Android/zzzz__AndroidAssetPackError_def.hpp"
#include "UnityEngine/Android/zzzz__AndroidAssetPackStatus_def.hpp"
//  Writing Method size for method: ::UnityEngine::Android::AndroidAssetPackState._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Android::AndroidAssetPackState::*)(
    ::StringW, ::UnityEngine::Android::AndroidAssetPackStatus, ::UnityEngine::Android::AndroidAssetPackError)>(&::UnityEngine::Android::AndroidAssetPackState::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6a33228;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Android::AndroidAssetPackState*>(),
            { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Android::AndroidAssetPackStatus>(), ::i2c::type_of<::UnityEngine::Android::AndroidAssetPackError>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::Android::AndroidAssetPackState::__cordl_internal_get__name_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name_k__BackingField;
}
constexpr ::StringW const& UnityEngine::Android::AndroidAssetPackState::__cordl_internal_get__name_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name_k__BackingField;
}
constexpr void UnityEngine::Android::AndroidAssetPackState::__cordl_internal_set__name_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____name_k__BackingField = value;
}
constexpr ::UnityEngine::Android::AndroidAssetPackStatus& UnityEngine::Android::AndroidAssetPackState::__cordl_internal_get__status_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____status_k__BackingField;
}
constexpr ::UnityEngine::Android::AndroidAssetPackStatus const& UnityEngine::Android::AndroidAssetPackState::__cordl_internal_get__status_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____status_k__BackingField;
}
constexpr void UnityEngine::Android::AndroidAssetPackState::__cordl_internal_set__status_k__BackingField(::UnityEngine::Android::AndroidAssetPackStatus value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____status_k__BackingField = value;
}
constexpr ::UnityEngine::Android::AndroidAssetPackError& UnityEngine::Android::AndroidAssetPackState::__cordl_internal_get__error_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____error_k__BackingField;
}
constexpr ::UnityEngine::Android::AndroidAssetPackError const& UnityEngine::Android::AndroidAssetPackState::__cordl_internal_get__error_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____error_k__BackingField;
}
constexpr void UnityEngine::Android::AndroidAssetPackState::__cordl_internal_set__error_k__BackingField(::UnityEngine::Android::AndroidAssetPackError value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____error_k__BackingField = value;
}
inline void UnityEngine::Android::AndroidAssetPackState::_ctor(::StringW name, ::UnityEngine::Android::AndroidAssetPackStatus status, ::UnityEngine::Android::AndroidAssetPackError error) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Android::AndroidAssetPackState*>(),
          { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Android::AndroidAssetPackStatus>(), ::i2c::type_of<::UnityEngine::Android::AndroidAssetPackError>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, status, error);
}
inline ::UnityEngine::Android::AndroidAssetPackState* UnityEngine::Android::AndroidAssetPackState::New_ctor(::StringW name, ::UnityEngine::Android::AndroidAssetPackStatus status,
                                                                                                            ::UnityEngine::Android::AndroidAssetPackError error) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Android::AndroidAssetPackState*>(name, status, error));
}
// Ctor Parameters []
constexpr ::UnityEngine::Android::AndroidAssetPackState::AndroidAssetPackState() {}
