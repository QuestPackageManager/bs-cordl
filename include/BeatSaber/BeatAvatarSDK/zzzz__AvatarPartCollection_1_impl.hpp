#pragma once
// IWYU pragma private; include "BeatSaber\BeatAvatarSDK\AvatarPartCollection_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__AvatarPartCollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
template <typename T> constexpr ::System::Collections::Generic::Dictionary_2<::StringW, T>*& BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>::__cordl_internal_get__partById() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____partById;
}
template <typename T> constexpr ::System::Collections::Generic::Dictionary_2<::StringW, T>* const& BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>::__cordl_internal_get__partById() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____partById;
}
template <typename T> constexpr void BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>::__cordl_internal_set__partById(::System::Collections::Generic::Dictionary_2<::StringW, T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____partById = value;
}
template <typename T> constexpr ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*& BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>::__cordl_internal_get__partIndexById() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____partIndexById;
}
template <typename T>
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* const& BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>::__cordl_internal_get__partIndexById() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____partIndexById;
}
template <typename T> constexpr void BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>::__cordl_internal_set__partIndexById(::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____partIndexById = value;
}
template <typename T> constexpr ::ArrayW<T>& BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>::__cordl_internal_get__parts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parts;
}
template <typename T> constexpr ::ArrayW<T> const& BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>::__cordl_internal_get__parts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parts;
}
template <typename T> constexpr void BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>::__cordl_internal_set__parts(::ArrayW<T> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____parts = value;
}
template <typename T> inline int32_t BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>::get_count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>*>(), { "get_count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename T> inline ::ArrayW<T> BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>::get_parts() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>*>(), { "get_parts", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(this, ___internal_method);
}
template <typename T> inline void BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>::_ctor(::ArrayW<T> parts) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parts);
}
template <typename T> inline T BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>::GetById(::StringW id) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>*>(), { "GetById", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, id);
}
template <typename T> inline T BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>::GetRandom() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>*>(), { "GetRandom", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline T BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>::GetByIndex(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>*>(), { "GetByIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, index);
}
template <typename T> inline int32_t BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>::GetIndexById(::StringW id) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>*>(), { "GetIndexById", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, id);
}
template <typename T> inline T BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>::GetDefault() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>*>(), { "GetDefault", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline ::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>* BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>::New_ctor(::ArrayW<T> parts) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>*>(parts));
}
// Ctor Parameters []
template <typename T> constexpr ::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>::AvatarPartCollection_1() {}
