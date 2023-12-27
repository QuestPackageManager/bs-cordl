#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__AvatarPartCollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
template <typename T> constexpr ::System::Collections::Generic::Dictionary_2<::StringW, T>*& BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>::__get__partById() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____partById;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, T>*> const& BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>::__get__partById() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____partById;
}
template <typename T> constexpr void BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>::__set__partById(::System::Collections::Generic::Dictionary_2<::StringW, T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____partById)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*& BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>::__get__partIndexById() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____partIndexById;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*> const&
BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>::__get__partIndexById() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____partIndexById;
}
template <typename T> constexpr void BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>::__set__partIndexById(::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____partIndexById)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::ArrayW<T, ::Array<T>*>& BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>::__get__parts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____parts;
}
template <typename T> constexpr ::ArrayW<T, ::Array<T>*> const& BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>::__get__parts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____parts;
}
template <typename T> constexpr void BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>::__set__parts(::ArrayW<T, ::Array<T>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____parts)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline int32_t BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>::get_count() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>*>::get(),
                                                                             "get_count", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline ::ArrayW<T, ::Array<T>*> BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>::get_parts() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>*>::get(),
                                                                             "get_parts", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T, ::Array<T>*>, false>(this, ___internal_method);
}
template <typename T> inline ::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>* BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>::New_ctor(::ArrayW<T, ::Array<T>*> parts) {
  return THROW_UNLESS(::il2cpp_utils::New<::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>*>(parts));
}
template <typename T> inline void BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>::_ctor(::ArrayW<T, ::Array<T>*> parts) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T, ::Array<T>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parts);
}
template <typename T> inline T BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>::GetById(::StringW id) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>*>::get(), "GetById",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, id);
}
template <typename T> inline T BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>::GetRandom() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>*>::get(),
                                                                             "GetRandom", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline T BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>::GetByIndex(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>*>::get(), "GetByIndex",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, index);
}
template <typename T> inline int32_t BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>::GetIndexById(::StringW id) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>*>::get(), "GetIndexById",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, id);
}
template <typename T> inline T BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>::GetDefault() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>*>::get(),
                                                                             "GetDefault", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>::AvatarPartCollection_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
