#pragma once
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_impl.hpp"
#include "HMUI/zzzz__InteractableTextMeshPro_def.hpp"
#include "UnityEngine/zzzz__CanvasGroup_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
//  Writing Method size for method: ::HMUI::InteractableTextMeshPro.OnCanvasGroupChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InteractableTextMeshPro::*)()>(&::HMUI::InteractableTextMeshPro::OnCanvasGroupChanged)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x211c390;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InteractableTextMeshPro*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InteractableTextMeshPro*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InteractableTextMeshPro._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InteractableTextMeshPro::*)()>(&::HMUI::InteractableTextMeshPro::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x211c524;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InteractableTextMeshPro*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr float_t& HMUI::InteractableTextMeshPro::__get__interactionAlpha() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____interactionAlpha;
}
constexpr float_t const& HMUI::InteractableTextMeshPro::__get__interactionAlpha() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____interactionAlpha;
}
constexpr void HMUI::InteractableTextMeshPro::__set__interactionAlpha(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____interactionAlpha = value;
}
constexpr float_t& HMUI::InteractableTextMeshPro::__get__noInteractionAlpha() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noInteractionAlpha;
}
constexpr float_t const& HMUI::InteractableTextMeshPro::__get__noInteractionAlpha() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noInteractionAlpha;
}
constexpr void HMUI::InteractableTextMeshPro::__set__noInteractionAlpha(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noInteractionAlpha = value;
}
constexpr ::TMPro::TextMeshProUGUI*& HMUI::InteractableTextMeshPro::__get__text() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& HMUI::InteractableTextMeshPro::__get__text() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr void HMUI::InteractableTextMeshPro::__set__text(::TMPro::TextMeshProUGUI* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____text)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::CanvasGroup*>*& HMUI::InteractableTextMeshPro::__get__canvasGroupCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canvasGroupCache;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::CanvasGroup*>*> const& HMUI::InteractableTextMeshPro::__get__canvasGroupCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canvasGroupCache;
}
constexpr void HMUI::InteractableTextMeshPro::__set__canvasGroupCache(::System::Collections::Generic::List_1<::UnityEngine::CanvasGroup*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____canvasGroupCache)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void HMUI::InteractableTextMeshPro::OnCanvasGroupChanged() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InteractableTextMeshPro*>::get(), "OnCanvasGroupChanged",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::HMUI::InteractableTextMeshPro* HMUI::InteractableTextMeshPro::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::HMUI::InteractableTextMeshPro*>());
}
inline void HMUI::InteractableTextMeshPro::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InteractableTextMeshPro*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HMUI::InteractableTextMeshPro::InteractableTextMeshPro() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
