#pragma once
// IWYU pragma private; include "HMUI\IconAndTextSegmentedControl.hpp"
#include "HMUI/zzzz__SegmentedControl_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "HMUI/zzzz__IconAndTextSegmentedControl_def.hpp"
#include "HMUI/zzzz__IconAndTextSegmentedControlCell_def.hpp"
#include "HMUI/zzzz__IconAndTextSegmentedControl_def.hpp"
#include "HMUI/zzzz__SegmentedControlCell_def.hpp"
#include "HMUI/zzzz__SegmentedControl_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::HMUI::IconAndTextSegmentedControl_DataItem.get_icon
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Sprite> (::HMUI::IconAndTextSegmentedControl_DataItem::*)()>(&::HMUI::IconAndTextSegmentedControl_DataItem::get_icon)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f56078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::IconAndTextSegmentedControl_DataItem*>(), { "get_icon", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::IconAndTextSegmentedControl_DataItem.set_icon
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::IconAndTextSegmentedControl_DataItem::*)(::UnityEngine::Sprite*)>(&::HMUI::IconAndTextSegmentedControl_DataItem::set_icon)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f56080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::IconAndTextSegmentedControl_DataItem*>(), { "set_icon", {}, { ::i2c::type_of<::UnityEngine::Sprite*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::IconAndTextSegmentedControl_DataItem.get_text
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::HMUI::IconAndTextSegmentedControl_DataItem::*)()>(&::HMUI::IconAndTextSegmentedControl_DataItem::get_text)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f56088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::IconAndTextSegmentedControl_DataItem*>(), { "get_text", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::IconAndTextSegmentedControl_DataItem.set_text
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::IconAndTextSegmentedControl_DataItem::*)(::StringW)>(&::HMUI::IconAndTextSegmentedControl_DataItem::set_text)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f56090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::IconAndTextSegmentedControl_DataItem*>(), { "set_text", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::IconAndTextSegmentedControl_DataItem.get_interactable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::HMUI::IconAndTextSegmentedControl_DataItem::*)()>(&::HMUI::IconAndTextSegmentedControl_DataItem::get_interactable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f56098;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::IconAndTextSegmentedControl_DataItem*>(), { "get_interactable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::IconAndTextSegmentedControl_DataItem.set_interactable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::IconAndTextSegmentedControl_DataItem::*)(bool)>(&::HMUI::IconAndTextSegmentedControl_DataItem::set_interactable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f560a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::IconAndTextSegmentedControl_DataItem*>(), { "set_interactable", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::IconAndTextSegmentedControl_DataItem._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::IconAndTextSegmentedControl_DataItem::*)(::UnityEngine::Sprite*, ::StringW, bool)>(
    &::HMUI::IconAndTextSegmentedControl_DataItem::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f560a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::IconAndTextSegmentedControl_DataItem*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Sprite*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Sprite>& HMUI::IconAndTextSegmentedControl_DataItem::__cordl_internal_get__icon_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____icon_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& HMUI::IconAndTextSegmentedControl_DataItem::__cordl_internal_get__icon_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____icon_k__BackingField;
}
constexpr void HMUI::IconAndTextSegmentedControl_DataItem::__cordl_internal_set__icon_k__BackingField(::UnityW<::UnityEngine::Sprite> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____icon_k__BackingField = value;
}
constexpr ::StringW& HMUI::IconAndTextSegmentedControl_DataItem::__cordl_internal_get__text_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text_k__BackingField;
}
constexpr ::StringW const& HMUI::IconAndTextSegmentedControl_DataItem::__cordl_internal_get__text_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text_k__BackingField;
}
constexpr void HMUI::IconAndTextSegmentedControl_DataItem::__cordl_internal_set__text_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____text_k__BackingField = value;
}
constexpr bool& HMUI::IconAndTextSegmentedControl_DataItem::__cordl_internal_get__interactable_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____interactable_k__BackingField;
}
constexpr bool const& HMUI::IconAndTextSegmentedControl_DataItem::__cordl_internal_get__interactable_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____interactable_k__BackingField;
}
constexpr void HMUI::IconAndTextSegmentedControl_DataItem::__cordl_internal_set__interactable_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____interactable_k__BackingField = value;
}
inline ::UnityW<::UnityEngine::Sprite> HMUI::IconAndTextSegmentedControl_DataItem::get_icon() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::IconAndTextSegmentedControl_DataItem*>(), { "get_icon", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Sprite>>(this, ___internal_method);
}
inline void HMUI::IconAndTextSegmentedControl_DataItem::set_icon(::UnityEngine::Sprite* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::IconAndTextSegmentedControl_DataItem*>(), { "set_icon", {}, { ::i2c::type_of<::UnityEngine::Sprite*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW HMUI::IconAndTextSegmentedControl_DataItem::get_text() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::IconAndTextSegmentedControl_DataItem*>(), { "get_text", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void HMUI::IconAndTextSegmentedControl_DataItem::set_text(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::IconAndTextSegmentedControl_DataItem*>(), { "set_text", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool HMUI::IconAndTextSegmentedControl_DataItem::get_interactable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::IconAndTextSegmentedControl_DataItem*>(), { "get_interactable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void HMUI::IconAndTextSegmentedControl_DataItem::set_interactable(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::IconAndTextSegmentedControl_DataItem*>(), { "set_interactable", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::IconAndTextSegmentedControl_DataItem::_ctor(::UnityEngine::Sprite* icon, ::StringW text, bool interactable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::IconAndTextSegmentedControl_DataItem*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Sprite*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, icon, text, interactable);
}
inline ::HMUI::IconAndTextSegmentedControl_DataItem* HMUI::IconAndTextSegmentedControl_DataItem::New_ctor(::UnityEngine::Sprite* icon, ::StringW text, bool interactable) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::IconAndTextSegmentedControl_DataItem*>(icon, text, interactable));
}
// Ctor Parameters []
constexpr ::HMUI::IconAndTextSegmentedControl_DataItem::IconAndTextSegmentedControl_DataItem() {}
//  Writing Method size for method: ::HMUI::IconAndTextSegmentedControl.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::IconAndTextSegmentedControl::*)()>(&::HMUI::IconAndTextSegmentedControl::Init)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5f554a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::IconAndTextSegmentedControl*>(), { "Init", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::IconAndTextSegmentedControl.SetData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::IconAndTextSegmentedControl::*)(::ArrayW<::HMUI::IconAndTextSegmentedControl_DataItem*>)>(
    &::HMUI::IconAndTextSegmentedControl::SetData)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5f554c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::HMUI::IconAndTextSegmentedControl*>(), { "SetData", {}, { ::i2c::type_of<::ArrayW<::HMUI::IconAndTextSegmentedControl_DataItem*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::IconAndTextSegmentedControl.NumberOfCells
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::HMUI::IconAndTextSegmentedControl::*)()>(&::HMUI::IconAndTextSegmentedControl::NumberOfCells)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f5597c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::IconAndTextSegmentedControl*>(), { "NumberOfCells", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::IconAndTextSegmentedControl.CellForCellNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::HMUI::SegmentedControlCell> (::HMUI::IconAndTextSegmentedControl::*)(int32_t)>(
    &::HMUI::IconAndTextSegmentedControl::CellForCellNumber)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5f55994;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::IconAndTextSegmentedControl*>(), { "CellForCellNumber", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::IconAndTextSegmentedControl.SetTextsActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::IconAndTextSegmentedControl::*)(bool)>(&::HMUI::IconAndTextSegmentedControl::SetTextsActive)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x5f55b34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::IconAndTextSegmentedControl*>(), { "SetTextsActive", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::IconAndTextSegmentedControl._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::IconAndTextSegmentedControl::*)()>(&::HMUI::IconAndTextSegmentedControl::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f55e68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::IconAndTextSegmentedControl*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::HMUI::IconAndTextSegmentedControlCell>& HMUI::IconAndTextSegmentedControl::__cordl_internal_get__firstCellPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____firstCellPrefab;
}
constexpr ::UnityW<::HMUI::IconAndTextSegmentedControlCell> const& HMUI::IconAndTextSegmentedControl::__cordl_internal_get__firstCellPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____firstCellPrefab;
}
constexpr void HMUI::IconAndTextSegmentedControl::__cordl_internal_set__firstCellPrefab(::UnityW<::HMUI::IconAndTextSegmentedControlCell> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____firstCellPrefab = value;
}
constexpr ::UnityW<::HMUI::IconAndTextSegmentedControlCell>& HMUI::IconAndTextSegmentedControl::__cordl_internal_get__lastCellPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastCellPrefab;
}
constexpr ::UnityW<::HMUI::IconAndTextSegmentedControlCell> const& HMUI::IconAndTextSegmentedControl::__cordl_internal_get__lastCellPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastCellPrefab;
}
constexpr void HMUI::IconAndTextSegmentedControl::__cordl_internal_set__lastCellPrefab(::UnityW<::HMUI::IconAndTextSegmentedControlCell> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastCellPrefab = value;
}
constexpr ::UnityW<::HMUI::IconAndTextSegmentedControlCell>& HMUI::IconAndTextSegmentedControl::__cordl_internal_get__singleCellPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____singleCellPrefab;
}
constexpr ::UnityW<::HMUI::IconAndTextSegmentedControlCell> const& HMUI::IconAndTextSegmentedControl::__cordl_internal_get__singleCellPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____singleCellPrefab;
}
constexpr void HMUI::IconAndTextSegmentedControl::__cordl_internal_set__singleCellPrefab(::UnityW<::HMUI::IconAndTextSegmentedControlCell> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____singleCellPrefab = value;
}
constexpr ::UnityW<::HMUI::IconAndTextSegmentedControlCell>& HMUI::IconAndTextSegmentedControl::__cordl_internal_get__middleCellPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____middleCellPrefab;
}
constexpr ::UnityW<::HMUI::IconAndTextSegmentedControlCell> const& HMUI::IconAndTextSegmentedControl::__cordl_internal_get__middleCellPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____middleCellPrefab;
}
constexpr void HMUI::IconAndTextSegmentedControl::__cordl_internal_set__middleCellPrefab(::UnityW<::HMUI::IconAndTextSegmentedControlCell> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____middleCellPrefab = value;
}
constexpr ::ArrayW<::HMUI::IconAndTextSegmentedControl_DataItem*>& HMUI::IconAndTextSegmentedControl::__cordl_internal_get__dataItems() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataItems;
}
constexpr ::ArrayW<::HMUI::IconAndTextSegmentedControl_DataItem*> const& HMUI::IconAndTextSegmentedControl::__cordl_internal_get__dataItems() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataItems;
}
constexpr void HMUI::IconAndTextSegmentedControl::__cordl_internal_set__dataItems(::ArrayW<::HMUI::IconAndTextSegmentedControl_DataItem*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dataItems = value;
}
constexpr bool& HMUI::IconAndTextSegmentedControl::__cordl_internal_get__isInitialized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isInitialized;
}
constexpr bool const& HMUI::IconAndTextSegmentedControl::__cordl_internal_get__isInitialized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isInitialized;
}
constexpr void HMUI::IconAndTextSegmentedControl::__cordl_internal_set__isInitialized(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isInitialized = value;
}
inline void HMUI::IconAndTextSegmentedControl::Init() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::IconAndTextSegmentedControl*>(), { "Init", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::IconAndTextSegmentedControl::SetData(::ArrayW<::HMUI::IconAndTextSegmentedControl_DataItem*> dataItems) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::HMUI::IconAndTextSegmentedControl*>(), { "SetData", {}, { ::i2c::type_of<::ArrayW<::HMUI::IconAndTextSegmentedControl_DataItem*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataItems);
}
inline int32_t HMUI::IconAndTextSegmentedControl::NumberOfCells() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::IconAndTextSegmentedControl*>(), { "NumberOfCells", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityW<::HMUI::SegmentedControlCell> HMUI::IconAndTextSegmentedControl::CellForCellNumber(int32_t cellNumber) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::IconAndTextSegmentedControl*>(), { "CellForCellNumber", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HMUI::SegmentedControlCell>>(this, ___internal_method, cellNumber);
}
inline void HMUI::IconAndTextSegmentedControl::SetTextsActive(bool active) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::IconAndTextSegmentedControl*>(), { "SetTextsActive", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, active);
}
inline void HMUI::IconAndTextSegmentedControl::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::IconAndTextSegmentedControl*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HMUI::IconAndTextSegmentedControl* HMUI::IconAndTextSegmentedControl::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::IconAndTextSegmentedControl*>());
}
/// @brief Convert operator to "::HMUI::SegmentedControl_IDataSource"
constexpr HMUI::IconAndTextSegmentedControl::operator ::HMUI::SegmentedControl_IDataSource*() noexcept {
  return static_cast<::HMUI::SegmentedControl_IDataSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::HMUI::SegmentedControl_IDataSource"
constexpr ::HMUI::SegmentedControl_IDataSource* HMUI::IconAndTextSegmentedControl::i___HMUI__SegmentedControl_IDataSource() noexcept {
  return static_cast<::HMUI::SegmentedControl_IDataSource*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::HMUI::IconAndTextSegmentedControl::IconAndTextSegmentedControl() {}
