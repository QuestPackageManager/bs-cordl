#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ColorPickerButtonController_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ColorPickerButtonController.get_button
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::Button* (::GlobalNamespace::ColorPickerButtonController::*)()>(
    &::GlobalNamespace::ColorPickerButtonController::get_button)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23e4268;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorPickerButtonController*>::get(),
                                                                               "get_button", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorPickerButtonController.SetColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ColorPickerButtonController::*)(::UnityEngine::Color)>(
    &::GlobalNamespace::ColorPickerButtonController::SetColor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x23e4270;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorPickerButtonController*>::get(), "SetColor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorPickerButtonController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ColorPickerButtonController::*)()>(&::GlobalNamespace::ColorPickerButtonController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23e4298;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorPickerButtonController*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UI::Button*& GlobalNamespace::ColorPickerButtonController::__get__button() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____button;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& GlobalNamespace::ColorPickerButtonController::__get__button() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____button;
}
constexpr void GlobalNamespace::ColorPickerButtonController::__set__button(::UnityEngine::UI::Button* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____button)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UI::Image*& GlobalNamespace::ColorPickerButtonController::__get__colorImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorImage;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> const& GlobalNamespace::ColorPickerButtonController::__get__colorImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorImage;
}
constexpr void GlobalNamespace::ColorPickerButtonController::__set__colorImage(::UnityEngine::UI::Image* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colorImage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::UI::Button* GlobalNamespace::ColorPickerButtonController::get_button() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorPickerButtonController*>::get(),
                                                                             "get_button", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::Button*, false>(this, ___internal_method);
}
inline void GlobalNamespace::ColorPickerButtonController::SetColor(::UnityEngine::Color color) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorPickerButtonController*>::get(), "SetColor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color);
}
inline ::GlobalNamespace::ColorPickerButtonController* GlobalNamespace::ColorPickerButtonController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::ColorPickerButtonController*>());
}
inline void GlobalNamespace::ColorPickerButtonController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorPickerButtonController*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ColorPickerButtonController::ColorPickerButtonController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
