#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ColorSchemeColorToggleController_def.hpp"
#include "UnityEngine/UI/zzzz__Graphic_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ColorSchemeColorToggleController.get_toggle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::Toggle* (::GlobalNamespace::ColorSchemeColorToggleController::*)()>(
    &::GlobalNamespace::ColorSchemeColorToggleController::get_toggle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2275418;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemeColorToggleController*>::get(),
                                                                               "get_toggle", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorSchemeColorToggleController.get_color
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::GlobalNamespace::ColorSchemeColorToggleController::*)()>(
    &::GlobalNamespace::ColorSchemeColorToggleController::get_color)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2274c8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemeColorToggleController*>::get(),
                                                                               "get_color", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorSchemeColorToggleController.set_color
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ColorSchemeColorToggleController::*)(::UnityEngine::Color)>(
    &::GlobalNamespace::ColorSchemeColorToggleController::set_color)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2274cdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemeColorToggleController*>::get(), "set_color",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorSchemeColorToggleController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ColorSchemeColorToggleController::*)()>(
    &::GlobalNamespace::ColorSchemeColorToggleController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2275420;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemeColorToggleController*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::UI::Graphic*, ::Array<::UnityEngine::UI::Graphic*>*>& GlobalNamespace::ColorSchemeColorToggleController::__get__colorGraphics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorGraphics;
}
constexpr ::ArrayW<::UnityEngine::UI::Graphic*, ::Array<::UnityEngine::UI::Graphic*>*> const& GlobalNamespace::ColorSchemeColorToggleController::__get__colorGraphics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorGraphics;
}
constexpr void GlobalNamespace::ColorSchemeColorToggleController::__set__colorGraphics(::ArrayW<::UnityEngine::UI::Graphic*, ::Array<::UnityEngine::UI::Graphic*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colorGraphics)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UI::Toggle*& GlobalNamespace::ColorSchemeColorToggleController::__get__toggle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____toggle;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Toggle*> const& GlobalNamespace::ColorSchemeColorToggleController::__get__toggle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____toggle;
}
constexpr void GlobalNamespace::ColorSchemeColorToggleController::__set__toggle(::UnityEngine::UI::Toggle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____toggle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::UI::Toggle* GlobalNamespace::ColorSchemeColorToggleController::get_toggle() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemeColorToggleController*>::get(),
                                                                             "get_toggle", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::Toggle*, false>(this, ___internal_method);
}
inline ::UnityEngine::Color GlobalNamespace::ColorSchemeColorToggleController::get_color() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemeColorToggleController*>::get(),
                                                                             "get_color", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method);
}
inline void GlobalNamespace::ColorSchemeColorToggleController::set_color(::UnityEngine::Color value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemeColorToggleController*>::get(), "set_color",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::ColorSchemeColorToggleController* GlobalNamespace::ColorSchemeColorToggleController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::ColorSchemeColorToggleController*>());
}
inline void GlobalNamespace::ColorSchemeColorToggleController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemeColorToggleController*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ColorSchemeColorToggleController::ColorSchemeColorToggleController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
