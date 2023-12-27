#pragma once
#include "GlobalNamespace/zzzz__LightGroupSubsystem_impl.hpp"
#include "GlobalNamespace/zzzz__LightTransformGroup_3_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
template <typename TX, typename TY, typename TZ> constexpr bool& GlobalNamespace::LightTransformGroup_3<TX, TY, TZ>::__get__mirrorX() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____mirrorX;
}
template <typename TX, typename TY, typename TZ> constexpr bool const& GlobalNamespace::LightTransformGroup_3<TX, TY, TZ>::__get__mirrorX() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____mirrorX;
}
template <typename TX, typename TY, typename TZ> constexpr void GlobalNamespace::LightTransformGroup_3<TX, TY, TZ>::__set__mirrorX(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____mirrorX = value;
}
template <typename TX, typename TY, typename TZ> constexpr bool& GlobalNamespace::LightTransformGroup_3<TX, TY, TZ>::__get__mirrorY() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____mirrorY;
}
template <typename TX, typename TY, typename TZ> constexpr bool const& GlobalNamespace::LightTransformGroup_3<TX, TY, TZ>::__get__mirrorY() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____mirrorY;
}
template <typename TX, typename TY, typename TZ> constexpr void GlobalNamespace::LightTransformGroup_3<TX, TY, TZ>::__set__mirrorY(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____mirrorY = value;
}
template <typename TX, typename TY, typename TZ> constexpr bool& GlobalNamespace::LightTransformGroup_3<TX, TY, TZ>::__get__mirrorZ() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____mirrorZ;
}
template <typename TX, typename TY, typename TZ> constexpr bool const& GlobalNamespace::LightTransformGroup_3<TX, TY, TZ>::__get__mirrorZ() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____mirrorZ;
}
template <typename TX, typename TY, typename TZ> constexpr void GlobalNamespace::LightTransformGroup_3<TX, TY, TZ>::__set__mirrorZ(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____mirrorZ = value;
}
template <typename TX, typename TY, typename TZ>
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*& GlobalNamespace::LightTransformGroup_3<TX, TY, TZ>::__get__xTransforms() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____xTransforms;
}
template <typename TX, typename TY, typename TZ>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Transform*>*> const&
GlobalNamespace::LightTransformGroup_3<TX, TY, TZ>::__get__xTransforms() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____xTransforms;
}
template <typename TX, typename TY, typename TZ>
constexpr void GlobalNamespace::LightTransformGroup_3<TX, TY, TZ>::__set__xTransforms(::System::Collections::Generic::List_1<::UnityEngine::Transform*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____xTransforms)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TX, typename TY, typename TZ>
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*& GlobalNamespace::LightTransformGroup_3<TX, TY, TZ>::__get__yTransforms() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____yTransforms;
}
template <typename TX, typename TY, typename TZ>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Transform*>*> const&
GlobalNamespace::LightTransformGroup_3<TX, TY, TZ>::__get__yTransforms() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____yTransforms;
}
template <typename TX, typename TY, typename TZ>
constexpr void GlobalNamespace::LightTransformGroup_3<TX, TY, TZ>::__set__yTransforms(::System::Collections::Generic::List_1<::UnityEngine::Transform*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____yTransforms)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TX, typename TY, typename TZ>
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*& GlobalNamespace::LightTransformGroup_3<TX, TY, TZ>::__get__zTransforms() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____zTransforms;
}
template <typename TX, typename TY, typename TZ>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Transform*>*> const&
GlobalNamespace::LightTransformGroup_3<TX, TY, TZ>::__get__zTransforms() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____zTransforms;
}
template <typename TX, typename TY, typename TZ>
constexpr void GlobalNamespace::LightTransformGroup_3<TX, TY, TZ>::__set__zTransforms(::System::Collections::Generic::List_1<::UnityEngine::Transform*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____zTransforms)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TX, typename TY, typename TZ> inline bool GlobalNamespace::LightTransformGroup_3<TX, TY, TZ>::get_mirrorX() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightTransformGroup_3<TX, TY, TZ>*>::get(),
                                                                             "get_mirrorX", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TX, typename TY, typename TZ> inline bool GlobalNamespace::LightTransformGroup_3<TX, TY, TZ>::get_mirrorY() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightTransformGroup_3<TX, TY, TZ>*>::get(),
                                                                             "get_mirrorY", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TX, typename TY, typename TZ> inline bool GlobalNamespace::LightTransformGroup_3<TX, TY, TZ>::get_mirrorZ() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightTransformGroup_3<TX, TY, TZ>*>::get(),
                                                                             "get_mirrorZ", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TX, typename TY, typename TZ> inline ::System::Collections::Generic::List_1<::UnityEngine::Transform*>* GlobalNamespace::LightTransformGroup_3<TX, TY, TZ>::get_xTransforms() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightTransformGroup_3<TX, TY, TZ>*>::get(),
                                                                             "get_xTransforms", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Transform*>*, false>(this, ___internal_method);
}
template <typename TX, typename TY, typename TZ> inline ::System::Collections::Generic::List_1<::UnityEngine::Transform*>* GlobalNamespace::LightTransformGroup_3<TX, TY, TZ>::get_yTransforms() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightTransformGroup_3<TX, TY, TZ>*>::get(),
                                                                             "get_yTransforms", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Transform*>*, false>(this, ___internal_method);
}
template <typename TX, typename TY, typename TZ> inline ::System::Collections::Generic::List_1<::UnityEngine::Transform*>* GlobalNamespace::LightTransformGroup_3<TX, TY, TZ>::get_zTransforms() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightTransformGroup_3<TX, TY, TZ>*>::get(),
                                                                             "get_zTransforms", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Transform*>*, false>(this, ___internal_method);
}
template <typename TX, typename TY, typename TZ> inline int32_t GlobalNamespace::LightTransformGroup_3<TX, TY, TZ>::get_count() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightTransformGroup_3<TX, TY, TZ>*>::get(),
                                                                             "get_count", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename TX, typename TY, typename TZ> inline ::GlobalNamespace::LightTransformGroup_3<TX, TY, TZ>* GlobalNamespace::LightTransformGroup_3<TX, TY, TZ>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::LightTransformGroup_3<TX, TY, TZ>*>());
}
template <typename TX, typename TY, typename TZ> inline void GlobalNamespace::LightTransformGroup_3<TX, TY, TZ>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightTransformGroup_3<TX, TY, TZ>*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TX, typename TY, typename TZ> constexpr ::GlobalNamespace::LightTransformGroup_3<TX, TY, TZ>::LightTransformGroup_3() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
