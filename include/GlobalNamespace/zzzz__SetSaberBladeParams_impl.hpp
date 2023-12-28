#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SetSaberBladeParams_def.hpp"
#include "GlobalNamespace/zzzz__ColorManager_def.hpp"
#include "GlobalNamespace/zzzz__SaberTypeObject_def.hpp"
#include "GlobalNamespace/zzzz__SetSaberBladeParams_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__SetSaberBladeParams__PropertyTintColorPair._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SetSaberBladeParams__PropertyTintColorPair::*)()>(
    &::GlobalNamespace::__SetSaberBladeParams__PropertyTintColorPair::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2264988;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SetSaberBladeParams__PropertyTintColorPair*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Color& GlobalNamespace::__SetSaberBladeParams__PropertyTintColorPair::__get_tintColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tintColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::__SetSaberBladeParams__PropertyTintColorPair::__get_tintColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tintColor;
}
constexpr void GlobalNamespace::__SetSaberBladeParams__PropertyTintColorPair::__set_tintColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tintColor = value;
}
constexpr ::StringW& GlobalNamespace::__SetSaberBladeParams__PropertyTintColorPair::__get_property() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___property;
}
constexpr ::StringW const& GlobalNamespace::__SetSaberBladeParams__PropertyTintColorPair::__get_property() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___property;
}
constexpr void GlobalNamespace::__SetSaberBladeParams__PropertyTintColorPair::__set_property(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___property)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__SetSaberBladeParams__PropertyTintColorPair* GlobalNamespace::__SetSaberBladeParams__PropertyTintColorPair::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__SetSaberBladeParams__PropertyTintColorPair*>());
}
inline void GlobalNamespace::__SetSaberBladeParams__PropertyTintColorPair::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SetSaberBladeParams__PropertyTintColorPair*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SetSaberBladeParams__PropertyTintColorPair::__SetSaberBladeParams__PropertyTintColorPair() {}
//  Writing Method size for method: ::GlobalNamespace::SetSaberBladeParams.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SetSaberBladeParams::*)()>(&::GlobalNamespace::SetSaberBladeParams::Start)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x226487c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetSaberBladeParams*>::get(), "Start",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SetSaberBladeParams._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SetSaberBladeParams::*)()>(&::GlobalNamespace::SetSaberBladeParams::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2264980;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetSaberBladeParams*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::SaberTypeObject*& GlobalNamespace::SetSaberBladeParams::__get__saber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saber;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SaberTypeObject*> const& GlobalNamespace::SetSaberBladeParams::__get__saber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saber;
}
constexpr void GlobalNamespace::SetSaberBladeParams::__set__saber(::GlobalNamespace::SaberTypeObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____saber)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::MeshRenderer*& GlobalNamespace::SetSaberBladeParams::__get__meshRenderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshRenderer;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshRenderer*> const& GlobalNamespace::SetSaberBladeParams::__get__meshRenderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshRenderer;
}
constexpr void GlobalNamespace::SetSaberBladeParams::__set__meshRenderer(::UnityEngine::MeshRenderer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____meshRenderer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::__SetSaberBladeParams__PropertyTintColorPair*, ::Array<::GlobalNamespace::__SetSaberBladeParams__PropertyTintColorPair*>*>&
GlobalNamespace::SetSaberBladeParams::__get__propertyTintColorPairs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____propertyTintColorPairs;
}
constexpr ::ArrayW<::GlobalNamespace::__SetSaberBladeParams__PropertyTintColorPair*, ::Array<::GlobalNamespace::__SetSaberBladeParams__PropertyTintColorPair*>*> const&
GlobalNamespace::SetSaberBladeParams::__get__propertyTintColorPairs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____propertyTintColorPairs;
}
constexpr void GlobalNamespace::SetSaberBladeParams::__set__propertyTintColorPairs(
    ::ArrayW<::GlobalNamespace::__SetSaberBladeParams__PropertyTintColorPair*, ::Array<::GlobalNamespace::__SetSaberBladeParams__PropertyTintColorPair*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____propertyTintColorPairs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ColorManager*& GlobalNamespace::SetSaberBladeParams::__get__colorManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorManager*> const& GlobalNamespace::SetSaberBladeParams::__get__colorManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorManager;
}
constexpr void GlobalNamespace::SetSaberBladeParams::__set__colorManager(::GlobalNamespace::ColorManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colorManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::SetSaberBladeParams::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetSaberBladeParams*>::get(), "Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SetSaberBladeParams* GlobalNamespace::SetSaberBladeParams::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SetSaberBladeParams*>());
}
inline void GlobalNamespace::SetSaberBladeParams::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetSaberBladeParams*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SetSaberBladeParams::SetSaberBladeParams() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
