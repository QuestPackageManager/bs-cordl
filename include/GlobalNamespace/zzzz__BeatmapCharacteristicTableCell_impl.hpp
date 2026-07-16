#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapCharacteristicTableCell.hpp"
#include "HMUI/zzzz__TableCell_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicTableCell_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicCollection_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristic_def.hpp"
#include "HMUI/zzzz__SelectableCell_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicTableCell.SetData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapCharacteristicTableCell::*)(
    ::GlobalNamespace::BeatmapCharacteristicCollection*, ::GlobalNamespace::BeatmapCharacteristic)>(&::GlobalNamespace::BeatmapCharacteristicTableCell::SetData)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x59208e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicTableCell*>(),
                                         { "SetData", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristicCollection*>(), ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicTableCell.SelectionDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapCharacteristicTableCell::*)(::HMUI::SelectableCell_TransitionType)>(
    &::GlobalNamespace::BeatmapCharacteristicTableCell::SelectionDidChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x592099c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicTableCell*>(), { ::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicTableCell*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicTableCell.HighlightDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapCharacteristicTableCell::*)(::HMUI::SelectableCell_TransitionType)>(
    &::GlobalNamespace::BeatmapCharacteristicTableCell::HighlightDidChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5920a24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicTableCell*>(), { ::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicTableCell*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicTableCell.RefreshVisuals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapCharacteristicTableCell::*)()>(&::GlobalNamespace::BeatmapCharacteristicTableCell::RefreshVisuals)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x59209a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicTableCell*>(), { "RefreshVisuals", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicTableCell._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapCharacteristicTableCell::*)()>(&::GlobalNamespace::BeatmapCharacteristicTableCell::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5920a28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicTableCell*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::BeatmapCharacteristicTableCell::__cordl_internal_get__nameText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nameText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::BeatmapCharacteristicTableCell::__cordl_internal_get__nameText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nameText;
}
constexpr void GlobalNamespace::BeatmapCharacteristicTableCell::__cordl_internal_set__nameText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nameText = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::BeatmapCharacteristicTableCell::__cordl_internal_get__iconImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____iconImage;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::BeatmapCharacteristicTableCell::__cordl_internal_get__iconImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____iconImage;
}
constexpr void GlobalNamespace::BeatmapCharacteristicTableCell::__cordl_internal_set__iconImage(::UnityW<::UnityEngine::UI::Image> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____iconImage = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::BeatmapCharacteristicTableCell::__cordl_internal_get__bgImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bgImage;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::BeatmapCharacteristicTableCell::__cordl_internal_get__bgImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bgImage;
}
constexpr void GlobalNamespace::BeatmapCharacteristicTableCell::__cordl_internal_set__bgImage(::UnityW<::UnityEngine::UI::Image> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bgImage = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::BeatmapCharacteristicTableCell::__cordl_internal_get__selectionImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectionImage;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::BeatmapCharacteristicTableCell::__cordl_internal_get__selectionImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectionImage;
}
constexpr void GlobalNamespace::BeatmapCharacteristicTableCell::__cordl_internal_set__selectionImage(::UnityW<::UnityEngine::UI::Image> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectionImage = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::BeatmapCharacteristicTableCell::__cordl_internal_get__bgNormalColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bgNormalColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::BeatmapCharacteristicTableCell::__cordl_internal_get__bgNormalColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bgNormalColor;
}
constexpr void GlobalNamespace::BeatmapCharacteristicTableCell::__cordl_internal_set__bgNormalColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bgNormalColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::BeatmapCharacteristicTableCell::__cordl_internal_get__bgHighlightColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bgHighlightColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::BeatmapCharacteristicTableCell::__cordl_internal_get__bgHighlightColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bgHighlightColor;
}
constexpr void GlobalNamespace::BeatmapCharacteristicTableCell::__cordl_internal_set__bgHighlightColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bgHighlightColor = value;
}
inline void GlobalNamespace::BeatmapCharacteristicTableCell::SetData(::GlobalNamespace::BeatmapCharacteristicCollection* beatmapCharacteristicCollection,
                                                                     ::GlobalNamespace::BeatmapCharacteristic beatmapCharacteristic) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicTableCell*>(),
                                       { "SetData", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristicCollection*>(), ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapCharacteristicCollection, beatmapCharacteristic);
}
inline void GlobalNamespace::BeatmapCharacteristicTableCell::SelectionDidChange(::HMUI::SelectableCell_TransitionType transitionType) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicTableCell*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transitionType);
}
inline void GlobalNamespace::BeatmapCharacteristicTableCell::HighlightDidChange(::HMUI::SelectableCell_TransitionType transitionType) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicTableCell*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transitionType);
}
inline void GlobalNamespace::BeatmapCharacteristicTableCell::RefreshVisuals() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicTableCell*>(), { "RefreshVisuals", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapCharacteristicTableCell::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicTableCell*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapCharacteristicTableCell* GlobalNamespace::BeatmapCharacteristicTableCell::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapCharacteristicTableCell*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapCharacteristicTableCell::BeatmapCharacteristicTableCell() {}
