#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__AvatarPartSO_1_def.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__IAvatarPart_def.hpp"
/// @brief Convert operator to "::BeatSaber::BeatAvatarSDK::IAvatarPart"
template <typename T> constexpr BeatSaber::BeatAvatarSDK::AvatarPartSO_1<T>::operator ::BeatSaber::BeatAvatarSDK::IAvatarPart*() noexcept {
  return static_cast<::BeatSaber::BeatAvatarSDK::IAvatarPart*>(static_cast<void*>(this));
}
/// @brief Convert to "::BeatSaber::BeatAvatarSDK::IAvatarPart"
template <typename T> constexpr ::BeatSaber::BeatAvatarSDK::IAvatarPart* BeatSaber::BeatAvatarSDK::AvatarPartSO_1<T>::i___BeatSaber__BeatAvatarSDK__IAvatarPart() noexcept {
  return static_cast<::BeatSaber::BeatAvatarSDK::IAvatarPart*>(static_cast<void*>(this));
}
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____id)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____localizationKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____partAsset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline T BeatSaber::BeatAvatarSDK::AvatarPartSO_1<T>::get_partAsset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarSDK::AvatarPartSO_1<T>*>::get(),
                                                                             "get_partAsset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline ::StringW BeatSaber::BeatAvatarSDK::AvatarPartSO_1<T>::get_id() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarSDK::AvatarPartSO_1<T>*>::get(), "get_id",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename T> inline ::StringW BeatSaber::BeatAvatarSDK::AvatarPartSO_1<T>::get_localizationKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarSDK::AvatarPartSO_1<T>*>::get(),
                                                                             "get_localizationKey", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename T> inline ::BeatSaber::BeatAvatarSDK::AvatarPartSO_1<T>* BeatSaber::BeatAvatarSDK::AvatarPartSO_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::BeatAvatarSDK::AvatarPartSO_1<T>*>());
}
template <typename T> inline void BeatSaber::BeatAvatarSDK::AvatarPartSO_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarSDK::AvatarPartSO_1<T>*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::BeatSaber::BeatAvatarSDK::AvatarPartSO_1<T>::AvatarPartSO_1() {}
