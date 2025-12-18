#pragma once
// IWYU pragma private; include "HMUI/InteractableTextMeshPro.hpp"
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_impl.hpp"
#include "HMUI/zzzz__InteractableTextMeshPro_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/zzzz__CanvasGroup_def.hpp"
//  Writing Method size for method: ::HMUI::InteractableTextMeshPro.OnCanvasGroupChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InteractableTextMeshPro::*)()>(&::HMUI::InteractableTextMeshPro::OnCanvasGroupChanged)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x56c5154;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InteractableTextMeshPro*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InteractableTextMeshPro*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InteractableTextMeshPro._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InteractableTextMeshPro::*)()>(&::HMUI::InteractableTextMeshPro::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x56c533c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InteractableTextMeshPro*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr float_t& HMUI::InteractableTextMeshPro::__cordl_internal_get__interactionAlpha() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____interactionAlpha;
}
constexpr float_t const& HMUI::InteractableTextMeshPro::__cordl_internal_get__interactionAlpha() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____interactionAlpha;
}
constexpr void HMUI::InteractableTextMeshPro::__cordl_internal_set__interactionAlpha(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____interactionAlpha = value;
}
constexpr float_t& HMUI::InteractableTextMeshPro::__cordl_internal_get__noInteractionAlpha() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noInteractionAlpha;
}
constexpr float_t const& HMUI::InteractableTextMeshPro::__cordl_internal_get__noInteractionAlpha() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noInteractionAlpha;
}
constexpr void HMUI::InteractableTextMeshPro::__cordl_internal_set__noInteractionAlpha(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noInteractionAlpha = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& HMUI::InteractableTextMeshPro::__cordl_internal_get__text() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& HMUI::InteractableTextMeshPro::__cordl_internal_get__text() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr void HMUI::InteractableTextMeshPro::__cordl_internal_set__text(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____text)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::CanvasGroup>>*& HMUI::InteractableTextMeshPro::__cordl_internal_get__canvasGroupCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canvasGroupCache;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::CanvasGroup>>* const& HMUI::InteractableTextMeshPro::__cordl_internal_get__canvasGroupCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canvasGroupCache;
}
constexpr void HMUI::InteractableTextMeshPro::__cordl_internal_set__canvasGroupCache(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::CanvasGroup>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____canvasGroupCache)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void HMUI::InteractableTextMeshPro::OnCanvasGroupChanged() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InteractableTextMeshPro*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::InteractableTextMeshPro::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InteractableTextMeshPro*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::HMUI::InteractableTextMeshPro* HMUI::InteractableTextMeshPro::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::InteractableTextMeshPro*>());
}
// Ctor Parameters []
constexpr ::HMUI::InteractableTextMeshPro::InteractableTextMeshPro() {}
