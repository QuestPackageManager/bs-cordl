#pragma once
// IWYU pragma private; include "GlobalNamespace\GameplayModifierInfoListItem.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierInfoListItem_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierParamsSO_def.hpp"
#include "HMUI/zzzz__HoverHint_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameplayModifierInfoListItem.SetModifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayModifierInfoListItem::*)(::GlobalNamespace::GameplayModifierParamsSO*, bool)>(
    &::GlobalNamespace::GameplayModifierInfoListItem::SetModifier)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x5a30abc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifierInfoListItem*>(),
                                                             { "SetModifier", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifierParamsSO*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifierInfoListItem._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayModifierInfoListItem::*)()>(&::GlobalNamespace::GameplayModifierInfoListItem::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a30c48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifierInfoListItem*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::HMUI::HoverHint>& GlobalNamespace::GameplayModifierInfoListItem::__cordl_internal_get__hoverHint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hoverHint;
}
constexpr ::UnityW<::HMUI::HoverHint> const& GlobalNamespace::GameplayModifierInfoListItem::__cordl_internal_get__hoverHint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hoverHint;
}
constexpr void GlobalNamespace::GameplayModifierInfoListItem::__cordl_internal_set__hoverHint(::UnityW<::HMUI::HoverHint> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hoverHint = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::GameplayModifierInfoListItem::__cordl_internal_get__iconImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____iconImage;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::GameplayModifierInfoListItem::__cordl_internal_get__iconImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____iconImage;
}
constexpr void GlobalNamespace::GameplayModifierInfoListItem::__cordl_internal_set__iconImage(::UnityW<::UnityEngine::UI::Image> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____iconImage = value;
}
inline void GlobalNamespace::GameplayModifierInfoListItem::SetModifier(::GlobalNamespace::GameplayModifierParamsSO* modifierParam, bool showName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifierInfoListItem*>(),
                                                           { "SetModifier", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifierParamsSO*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, modifierParam, showName);
}
inline void GlobalNamespace::GameplayModifierInfoListItem::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifierInfoListItem*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameplayModifierInfoListItem* GlobalNamespace::GameplayModifierInfoListItem::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameplayModifierInfoListItem*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameplayModifierInfoListItem::GameplayModifierInfoListItem() {}
