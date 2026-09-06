#pragma once
// IWYU pragma private; include "BeatSaber/BeatAvatarSDK/AvatarPartSO_1.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__AvatarPartSO_1_def.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__IAvatarPart_def.hpp"
template <typename T> constexpr ::StringW& BeatSaber::BeatAvatarSDK::AvatarPartSO_1<T>::__cordl_internal_get__id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____id;
}
template <typename T> constexpr ::StringW const& BeatSaber::BeatAvatarSDK::AvatarPartSO_1<T>::__cordl_internal_get__id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____id;
}
template <typename T> constexpr void BeatSaber::BeatAvatarSDK::AvatarPartSO_1<T>::__cordl_internal_set__id(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____id = value;
}
template <typename T> constexpr ::StringW& BeatSaber::BeatAvatarSDK::AvatarPartSO_1<T>::__cordl_internal_get__localizationKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localizationKey;
}
template <typename T> constexpr ::StringW const& BeatSaber::BeatAvatarSDK::AvatarPartSO_1<T>::__cordl_internal_get__localizationKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localizationKey;
}
template <typename T> constexpr void BeatSaber::BeatAvatarSDK::AvatarPartSO_1<T>::__cordl_internal_set__localizationKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____localizationKey = value;
}
template <typename T> constexpr T& BeatSaber::BeatAvatarSDK::AvatarPartSO_1<T>::__cordl_internal_get__partAsset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____partAsset;
}
template <typename T> constexpr T const& BeatSaber::BeatAvatarSDK::AvatarPartSO_1<T>::__cordl_internal_get__partAsset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____partAsset;
}
template <typename T> constexpr void BeatSaber::BeatAvatarSDK::AvatarPartSO_1<T>::__cordl_internal_set__partAsset(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____partAsset = value;
}
template <typename T> inline T BeatSaber::BeatAvatarSDK::AvatarPartSO_1<T>::get_partAsset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::AvatarPartSO_1<T>*>(), { "get_partAsset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline ::StringW BeatSaber::BeatAvatarSDK::AvatarPartSO_1<T>::get_id() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::AvatarPartSO_1<T>*>(), { "get_id", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template <typename T> inline ::StringW BeatSaber::BeatAvatarSDK::AvatarPartSO_1<T>::get_localizationKey() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::AvatarPartSO_1<T>*>(), { "get_localizationKey", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template <typename T> inline void BeatSaber::BeatAvatarSDK::AvatarPartSO_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::AvatarPartSO_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::BeatSaber::BeatAvatarSDK::AvatarPartSO_1<T>* BeatSaber::BeatAvatarSDK::AvatarPartSO_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::BeatAvatarSDK::AvatarPartSO_1<T>*>());
}
/// @brief Convert operator to "::BeatSaber::BeatAvatarSDK::IAvatarPart"
template <typename T> constexpr BeatSaber::BeatAvatarSDK::AvatarPartSO_1<T>::operator ::BeatSaber::BeatAvatarSDK::IAvatarPart*() noexcept {
  return static_cast<::BeatSaber::BeatAvatarSDK::IAvatarPart*>(static_cast<void*>(this));
}
/// @brief Convert to "::BeatSaber::BeatAvatarSDK::IAvatarPart"
template <typename T> constexpr ::BeatSaber::BeatAvatarSDK::IAvatarPart* BeatSaber::BeatAvatarSDK::AvatarPartSO_1<T>::i___BeatSaber__BeatAvatarSDK__IAvatarPart() noexcept {
  return static_cast<::BeatSaber::BeatAvatarSDK::IAvatarPart*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename T> constexpr ::BeatSaber::BeatAvatarSDK::AvatarPartSO_1<T>::AvatarPartSO_1() {}
