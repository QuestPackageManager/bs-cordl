#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ConditionalImageMaterialSwitcher_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "GlobalNamespace/zzzz__BoolSO_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ConditionalImageMaterialSwitcher.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConditionalImageMaterialSwitcher::*)()>(
    &::GlobalNamespace::ConditionalImageMaterialSwitcher::Awake)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x226bfb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConditionalImageMaterialSwitcher*>::get(),
                                                                               "Awake", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConditionalImageMaterialSwitcher._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConditionalImageMaterialSwitcher::*)()>(
    &::GlobalNamespace::ConditionalImageMaterialSwitcher::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x226c038;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConditionalImageMaterialSwitcher*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Material*& GlobalNamespace::ConditionalImageMaterialSwitcher::__get__material0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____material0;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& GlobalNamespace::ConditionalImageMaterialSwitcher::__get__material0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____material0;
}
constexpr void GlobalNamespace::ConditionalImageMaterialSwitcher::__set__material0(::UnityEngine::Material* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____material0)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Material*& GlobalNamespace::ConditionalImageMaterialSwitcher::__get__material1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____material1;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& GlobalNamespace::ConditionalImageMaterialSwitcher::__get__material1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____material1;
}
constexpr void GlobalNamespace::ConditionalImageMaterialSwitcher::__set__material1(::UnityEngine::Material* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____material1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BoolSO*& GlobalNamespace::ConditionalImageMaterialSwitcher::__get__value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____value;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> const& GlobalNamespace::ConditionalImageMaterialSwitcher::__get__value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____value;
}
constexpr void GlobalNamespace::ConditionalImageMaterialSwitcher::__set__value(::GlobalNamespace::BoolSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____value)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UI::Image*& GlobalNamespace::ConditionalImageMaterialSwitcher::__get__image() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____image;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> const& GlobalNamespace::ConditionalImageMaterialSwitcher::__get__image() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____image;
}
constexpr void GlobalNamespace::ConditionalImageMaterialSwitcher::__set__image(::UnityEngine::UI::Image* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____image)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::ConditionalImageMaterialSwitcher::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConditionalImageMaterialSwitcher*>::get(),
                                                                             "Awake", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ConditionalImageMaterialSwitcher* GlobalNamespace::ConditionalImageMaterialSwitcher::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::ConditionalImageMaterialSwitcher*>());
}
inline void GlobalNamespace::ConditionalImageMaterialSwitcher::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConditionalImageMaterialSwitcher*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ConditionalImageMaterialSwitcher::ConditionalImageMaterialSwitcher() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
