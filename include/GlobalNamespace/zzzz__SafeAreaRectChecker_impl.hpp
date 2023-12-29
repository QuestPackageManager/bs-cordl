#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SafeAreaRectChecker_def.hpp"
#include "GlobalNamespace/zzzz__SafeAreaRectChecker_def.hpp"
#include "GlobalNamespace/zzzz__MainCamera_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__SafeAreaRectChecker__InitData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SafeAreaRectChecker__InitData::*)(bool)>(
    &::GlobalNamespace::__SafeAreaRectChecker__InitData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2139bdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SafeAreaRectChecker__InitData*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::__SafeAreaRectChecker__InitData::__get_checkingEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___checkingEnabled;
}
constexpr bool const& GlobalNamespace::__SafeAreaRectChecker__InitData::__get_checkingEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___checkingEnabled;
}
constexpr void GlobalNamespace::__SafeAreaRectChecker__InitData::__set_checkingEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___checkingEnabled = value;
}
inline ::GlobalNamespace::__SafeAreaRectChecker__InitData* GlobalNamespace::__SafeAreaRectChecker__InitData::New_ctor(bool checkingEnabled) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__SafeAreaRectChecker__InitData*>(checkingEnabled));
}
inline void GlobalNamespace::__SafeAreaRectChecker__InitData::_ctor(bool checkingEnabled) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SafeAreaRectChecker__InitData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, checkingEnabled);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SafeAreaRectChecker__InitData::__SafeAreaRectChecker__InitData() {}
//  Writing Method size for method: ::GlobalNamespace::SafeAreaRectChecker.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SafeAreaRectChecker::*)()>(&::GlobalNamespace::SafeAreaRectChecker::Start)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2139928;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SafeAreaRectChecker*>::get(), "Start",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SafeAreaRectChecker.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SafeAreaRectChecker::*)()>(&::GlobalNamespace::SafeAreaRectChecker::Update)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x213998c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SafeAreaRectChecker*>::get(), "Update",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SafeAreaRectChecker._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SafeAreaRectChecker::*)()>(&::GlobalNamespace::SafeAreaRectChecker::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2139b78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SafeAreaRectChecker*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::SafeAreaRectChecker::__get__minAngleX() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minAngleX;
}
constexpr float_t const& GlobalNamespace::SafeAreaRectChecker::__get__minAngleX() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minAngleX;
}
constexpr void GlobalNamespace::SafeAreaRectChecker::__set__minAngleX(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____minAngleX = value;
}
constexpr float_t& GlobalNamespace::SafeAreaRectChecker::__get__maxAngleX() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxAngleX;
}
constexpr float_t const& GlobalNamespace::SafeAreaRectChecker::__get__maxAngleX() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxAngleX;
}
constexpr void GlobalNamespace::SafeAreaRectChecker::__set__maxAngleX(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxAngleX = value;
}
constexpr float_t& GlobalNamespace::SafeAreaRectChecker::__get__minAngleY() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minAngleY;
}
constexpr float_t const& GlobalNamespace::SafeAreaRectChecker::__get__minAngleY() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minAngleY;
}
constexpr void GlobalNamespace::SafeAreaRectChecker::__set__minAngleY(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____minAngleY = value;
}
constexpr float_t& GlobalNamespace::SafeAreaRectChecker::__get__maxAngleY() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxAngleY;
}
constexpr float_t const& GlobalNamespace::SafeAreaRectChecker::__get__maxAngleY() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxAngleY;
}
constexpr void GlobalNamespace::SafeAreaRectChecker::__set__maxAngleY(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxAngleY = value;
}
constexpr ::UnityEngine::GameObject*& GlobalNamespace::SafeAreaRectChecker::__get__activeObjectWhenInsideSafeArea() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeObjectWhenInsideSafeArea;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& GlobalNamespace::SafeAreaRectChecker::__get__activeObjectWhenInsideSafeArea() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeObjectWhenInsideSafeArea;
}
constexpr void GlobalNamespace::SafeAreaRectChecker::__set__activeObjectWhenInsideSafeArea(::UnityEngine::GameObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____activeObjectWhenInsideSafeArea)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::GameObject*& GlobalNamespace::SafeAreaRectChecker::__get__activeObjectWhenNotInsideSafeArea() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeObjectWhenNotInsideSafeArea;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& GlobalNamespace::SafeAreaRectChecker::__get__activeObjectWhenNotInsideSafeArea() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeObjectWhenNotInsideSafeArea;
}
constexpr void GlobalNamespace::SafeAreaRectChecker::__set__activeObjectWhenNotInsideSafeArea(::UnityEngine::GameObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____activeObjectWhenNotInsideSafeArea)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::RectTransform*& GlobalNamespace::SafeAreaRectChecker::__get__rectTransformToCheck() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rectTransformToCheck;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> const& GlobalNamespace::SafeAreaRectChecker::__get__rectTransformToCheck() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rectTransformToCheck;
}
constexpr void GlobalNamespace::SafeAreaRectChecker::__set__rectTransformToCheck(::UnityEngine::RectTransform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rectTransformToCheck)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& GlobalNamespace::SafeAreaRectChecker::__get__corners() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____corners;
}
constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& GlobalNamespace::SafeAreaRectChecker::__get__corners() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____corners;
}
constexpr void GlobalNamespace::SafeAreaRectChecker::__set__corners(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____corners)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MainCamera*& GlobalNamespace::SafeAreaRectChecker::__get__mainCamera() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainCamera;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainCamera*> const& GlobalNamespace::SafeAreaRectChecker::__get__mainCamera() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainCamera;
}
constexpr void GlobalNamespace::SafeAreaRectChecker::__set__mainCamera(::GlobalNamespace::MainCamera* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mainCamera)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__SafeAreaRectChecker__InitData*& GlobalNamespace::SafeAreaRectChecker::__get__initData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SafeAreaRectChecker__InitData*> const& GlobalNamespace::SafeAreaRectChecker::__get__initData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr void GlobalNamespace::SafeAreaRectChecker::__set__initData(::GlobalNamespace::__SafeAreaRectChecker__InitData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____initData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::SafeAreaRectChecker::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SafeAreaRectChecker*>::get(), "Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SafeAreaRectChecker::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SafeAreaRectChecker*>::get(), "Update",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SafeAreaRectChecker* GlobalNamespace::SafeAreaRectChecker::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SafeAreaRectChecker*>());
}
inline void GlobalNamespace::SafeAreaRectChecker::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SafeAreaRectChecker*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SafeAreaRectChecker::SafeAreaRectChecker() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
