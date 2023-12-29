#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__AvatarPartSO_1_def.hpp"
#include "GlobalNamespace/zzzz__IAvatarPart_def.hpp"
/// @brief Convert operator to "::GlobalNamespace::IAvatarPart"
template <typename T> constexpr GlobalNamespace::AvatarPartSO_1<T>::operator ::GlobalNamespace::IAvatarPart*() noexcept {
  return static_cast<::GlobalNamespace::IAvatarPart*>(static_cast<void*>(this));
}
template <typename T> constexpr ::StringW& GlobalNamespace::AvatarPartSO_1<T>::__get__id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____id;
}
template <typename T> constexpr ::StringW const& GlobalNamespace::AvatarPartSO_1<T>::__get__id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____id;
}
template <typename T> constexpr void GlobalNamespace::AvatarPartSO_1<T>::__set__id(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____id)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::StringW& GlobalNamespace::AvatarPartSO_1<T>::__get__localizationKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localizationKey;
}
template <typename T> constexpr ::StringW const& GlobalNamespace::AvatarPartSO_1<T>::__get__localizationKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localizationKey;
}
template <typename T> constexpr void GlobalNamespace::AvatarPartSO_1<T>::__set__localizationKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____localizationKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr T& GlobalNamespace::AvatarPartSO_1<T>::__get__partAsset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____partAsset;
}
template <typename T> constexpr T const& GlobalNamespace::AvatarPartSO_1<T>::__get__partAsset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____partAsset;
}
template <typename T> constexpr void GlobalNamespace::AvatarPartSO_1<T>::__set__partAsset(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____partAsset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline T GlobalNamespace::AvatarPartSO_1<T>::get_partAsset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarPartSO_1<T>*>::get(), "get_partAsset",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline ::StringW GlobalNamespace::AvatarPartSO_1<T>::get_id() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarPartSO_1<T>*>::get(), "get_id",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename T> inline ::StringW GlobalNamespace::AvatarPartSO_1<T>::get_localizationKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarPartSO_1<T>*>::get(),
                                                                             "get_localizationKey", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename T> inline ::StringW GlobalNamespace::AvatarPartSO_1<T>::get_localizedName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarPartSO_1<T>*>::get(), "get_localizedName",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename T> inline ::GlobalNamespace::AvatarPartSO_1<T>* GlobalNamespace::AvatarPartSO_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::AvatarPartSO_1<T>*>());
}
template <typename T> inline void GlobalNamespace::AvatarPartSO_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarPartSO_1<T>*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::AvatarPartSO_1<T>::AvatarPartSO_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
