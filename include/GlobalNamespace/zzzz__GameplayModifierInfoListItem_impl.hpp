#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierInfoListItem_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierParamsSO_def.hpp"
#include "HMUI/zzzz__HoverHint_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameplayModifierInfoListItem.SetModifier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayModifierInfoListItem::*)(::GlobalNamespace::GameplayModifierParamsSO*, bool)>(
    &::GlobalNamespace::GameplayModifierInfoListItem::SetModifier)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x21357a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifierInfoListItem*>::get(), "SetModifier", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifierParamsSO*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifierInfoListItem._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayModifierInfoListItem::*)()>(
    &::GlobalNamespace::GameplayModifierInfoListItem::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21359cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifierInfoListItem*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::HMUI::HoverHint*& GlobalNamespace::GameplayModifierInfoListItem::__get__hoverHint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hoverHint;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::HoverHint*> const& GlobalNamespace::GameplayModifierInfoListItem::__get__hoverHint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hoverHint;
}
constexpr void GlobalNamespace::GameplayModifierInfoListItem::__set__hoverHint(::HMUI::HoverHint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____hoverHint)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UI::Image*& GlobalNamespace::GameplayModifierInfoListItem::__get__iconImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____iconImage;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> const& GlobalNamespace::GameplayModifierInfoListItem::__get__iconImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____iconImage;
}
constexpr void GlobalNamespace::GameplayModifierInfoListItem::__set__iconImage(::UnityEngine::UI::Image* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____iconImage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
/// @param showName: bool (default: false)
inline void GlobalNamespace::GameplayModifierInfoListItem::SetModifier(::GlobalNamespace::GameplayModifierParamsSO* modifierParam, bool showName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifierInfoListItem*>::get(), "SetModifier", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifierParamsSO*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, modifierParam, showName);
}
inline ::GlobalNamespace::GameplayModifierInfoListItem* GlobalNamespace::GameplayModifierInfoListItem::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::GameplayModifierInfoListItem*>());
}
inline void GlobalNamespace::GameplayModifierInfoListItem::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifierInfoListItem*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameplayModifierInfoListItem::GameplayModifierInfoListItem() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
