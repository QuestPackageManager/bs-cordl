#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SetBlocksBladeSaberGlowColor_def.hpp"
#include "GlobalNamespace/zzzz__BlocksBlade_def.hpp"
#include "GlobalNamespace/zzzz__ColorManager_def.hpp"
#include "GlobalNamespace/zzzz__SaberTypeObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SetBlocksBladeSaberGlowColor.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SetBlocksBladeSaberGlowColor::*)()>(
    &::GlobalNamespace::SetBlocksBladeSaberGlowColor::Start)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x21205d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetBlocksBladeSaberGlowColor*>::get(), "Start",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SetBlocksBladeSaberGlowColor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SetBlocksBladeSaberGlowColor::*)()>(
    &::GlobalNamespace::SetBlocksBladeSaberGlowColor::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2120618;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetBlocksBladeSaberGlowColor*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::SaberTypeObject*& GlobalNamespace::SetBlocksBladeSaberGlowColor::__get__saber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saber;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SaberTypeObject*> const& GlobalNamespace::SetBlocksBladeSaberGlowColor::__get__saber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saber;
}
constexpr void GlobalNamespace::SetBlocksBladeSaberGlowColor::__set__saber(::GlobalNamespace::SaberTypeObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____saber)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ColorManager*& GlobalNamespace::SetBlocksBladeSaberGlowColor::__get__colorManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorManager*> const& GlobalNamespace::SetBlocksBladeSaberGlowColor::__get__colorManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorManager;
}
constexpr void GlobalNamespace::SetBlocksBladeSaberGlowColor::__set__colorManager(::GlobalNamespace::ColorManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colorManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BlocksBlade*& GlobalNamespace::SetBlocksBladeSaberGlowColor::__get__blocksBlade() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____blocksBlade;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BlocksBlade*> const& GlobalNamespace::SetBlocksBladeSaberGlowColor::__get__blocksBlade() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____blocksBlade;
}
constexpr void GlobalNamespace::SetBlocksBladeSaberGlowColor::__set__blocksBlade(::GlobalNamespace::BlocksBlade* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____blocksBlade)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::SetBlocksBladeSaberGlowColor::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetBlocksBladeSaberGlowColor*>::get(), "Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SetBlocksBladeSaberGlowColor* GlobalNamespace::SetBlocksBladeSaberGlowColor::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SetBlocksBladeSaberGlowColor*>());
}
inline void GlobalNamespace::SetBlocksBladeSaberGlowColor::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetBlocksBladeSaberGlowColor*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SetBlocksBladeSaberGlowColor::SetBlocksBladeSaberGlowColor() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
