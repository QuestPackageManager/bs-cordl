#pragma once
#include "HMUI/zzzz__SegmentedControl_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "HMUI/zzzz__IconSegmentedControl_def.hpp"
#include "HMUI/zzzz__IconSegmentedControlCell_def.hpp"
#include "HMUI/zzzz__IconSegmentedControl_def.hpp"
#include "HMUI/zzzz__SegmentedControlCell_def.hpp"
#include "HMUI/zzzz__SegmentedControl_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
//  Writing Method size for method: ::HMUI::__IconSegmentedControl__DataItem.get_icon
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Sprite* (::HMUI::__IconSegmentedControl__DataItem::*)()>(
    &::HMUI::__IconSegmentedControl__DataItem::get_icon)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x211f950;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__IconSegmentedControl__DataItem*>::get(), "get_icon",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__IconSegmentedControl__DataItem.set_icon
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__IconSegmentedControl__DataItem::*)(::UnityEngine::Sprite*)>(
    &::HMUI::__IconSegmentedControl__DataItem::set_icon)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x211f958;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__IconSegmentedControl__DataItem*>::get(), "set_icon", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Sprite*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__IconSegmentedControl__DataItem.get_hintText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HMUI::__IconSegmentedControl__DataItem::*)()>(&::HMUI::__IconSegmentedControl__DataItem::get_hintText)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x211f960;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__IconSegmentedControl__DataItem*>::get(), "get_hintText",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__IconSegmentedControl__DataItem.set_hintText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__IconSegmentedControl__DataItem::*)(::StringW)>(
    &::HMUI::__IconSegmentedControl__DataItem::set_hintText)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x211f968;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__IconSegmentedControl__DataItem*>::get(), "set_hintText", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__IconSegmentedControl__DataItem._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__IconSegmentedControl__DataItem::*)(::UnityEngine::Sprite*, ::StringW)>(
    &::HMUI::__IconSegmentedControl__DataItem::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x211f970;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__IconSegmentedControl__DataItem*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Sprite*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Sprite*& HMUI::__IconSegmentedControl__DataItem::__get__icon_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____icon_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> const& HMUI::__IconSegmentedControl__DataItem::__get__icon_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____icon_k__BackingField;
}
constexpr void HMUI::__IconSegmentedControl__DataItem::__set__icon_k__BackingField(::UnityEngine::Sprite* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____icon_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& HMUI::__IconSegmentedControl__DataItem::__get__hintText_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hintText_k__BackingField;
}
constexpr ::StringW const& HMUI::__IconSegmentedControl__DataItem::__get__hintText_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hintText_k__BackingField;
}
constexpr void HMUI::__IconSegmentedControl__DataItem::__set__hintText_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____hintText_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::Sprite* HMUI::__IconSegmentedControl__DataItem::get_icon() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__IconSegmentedControl__DataItem*>::get(), "get_icon",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Sprite*, false>(this, ___internal_method);
}
inline void HMUI::__IconSegmentedControl__DataItem::set_icon(::UnityEngine::Sprite* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__IconSegmentedControl__DataItem*>::get(), "set_icon", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Sprite*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW HMUI::__IconSegmentedControl__DataItem::get_hintText() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__IconSegmentedControl__DataItem*>::get(), "get_hintText",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void HMUI::__IconSegmentedControl__DataItem::set_hintText(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__IconSegmentedControl__DataItem*>::get(), "set_hintText", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::HMUI::__IconSegmentedControl__DataItem* HMUI::__IconSegmentedControl__DataItem::New_ctor(::UnityEngine::Sprite* icon, ::StringW hintText) {
  return THROW_UNLESS(::il2cpp_utils::New<::HMUI::__IconSegmentedControl__DataItem*>(icon, hintText));
}
inline void HMUI::__IconSegmentedControl__DataItem::_ctor(::UnityEngine::Sprite* icon, ::StringW hintText) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__IconSegmentedControl__DataItem*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Sprite*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, icon, hintText);
}
// Ctor Parameters []
constexpr ::HMUI::__IconSegmentedControl__DataItem::__IconSegmentedControl__DataItem() {}
//  Writing Method size for method: ::HMUI::IconSegmentedControl.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::IconSegmentedControl::*)()>(&::HMUI::IconSegmentedControl::Init)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x211efa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::IconSegmentedControl*>::get(), "Init",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::IconSegmentedControl.SetData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::IconSegmentedControl::*)(
    ::ArrayW<::HMUI::__IconSegmentedControl__DataItem*, ::Array<::HMUI::__IconSegmentedControl__DataItem*>*>)>(&::HMUI::IconSegmentedControl::SetData)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x211efc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::IconSegmentedControl*>::get(), "SetData", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::HMUI::__IconSegmentedControl__DataItem*, ::Array<::HMUI::__IconSegmentedControl__DataItem*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::IconSegmentedControl.NumberOfCells
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HMUI::IconSegmentedControl::*)()>(&::HMUI::IconSegmentedControl::NumberOfCells)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x211f40c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::IconSegmentedControl*>::get(), "NumberOfCells",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::IconSegmentedControl.CellForCellNumber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HMUI::SegmentedControlCell* (::HMUI::IconSegmentedControl::*)(int32_t)>(
    &::HMUI::IconSegmentedControl::CellForCellNumber)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x211f424;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::IconSegmentedControl*>::get(), "CellForCellNumber", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::IconSegmentedControl.InstantiateCell
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HMUI::IconSegmentedControlCell* (::HMUI::IconSegmentedControl::*)(::UnityEngine::Object*)>(
    &::HMUI::IconSegmentedControl::InstantiateCell)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x211f5a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::IconSegmentedControl*>::get(), "InstantiateCell", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::IconSegmentedControl._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::IconSegmentedControl::*)()>(&::HMUI::IconSegmentedControl::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x211f834;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::IconSegmentedControl*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::HMUI::__SegmentedControl__IDataSource"
constexpr HMUI::IconSegmentedControl::operator ::HMUI::__SegmentedControl__IDataSource*() noexcept {
  return static_cast<::HMUI::__SegmentedControl__IDataSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::HMUI::__SegmentedControl__IDataSource"
constexpr ::HMUI::__SegmentedControl__IDataSource* HMUI::IconSegmentedControl::i___HMUI____SegmentedControl__IDataSource() noexcept {
  return static_cast<::HMUI::__SegmentedControl__IDataSource*>(static_cast<void*>(this));
}
constexpr float_t& HMUI::IconSegmentedControl::__get__iconSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____iconSize;
}
constexpr float_t const& HMUI::IconSegmentedControl::__get__iconSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____iconSize;
}
constexpr void HMUI::IconSegmentedControl::__set__iconSize(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____iconSize = value;
}
constexpr bool& HMUI::IconSegmentedControl::__get__overrideCellSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideCellSize;
}
constexpr bool const& HMUI::IconSegmentedControl::__get__overrideCellSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideCellSize;
}
constexpr void HMUI::IconSegmentedControl::__set__overrideCellSize(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____overrideCellSize = value;
}
constexpr float_t& HMUI::IconSegmentedControl::__get__padding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____padding;
}
constexpr float_t const& HMUI::IconSegmentedControl::__get__padding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____padding;
}
constexpr void HMUI::IconSegmentedControl::__set__padding(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____padding = value;
}
constexpr bool& HMUI::IconSegmentedControl::__get__hideCellBackground() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hideCellBackground;
}
constexpr bool const& HMUI::IconSegmentedControl::__get__hideCellBackground() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hideCellBackground;
}
constexpr void HMUI::IconSegmentedControl::__set__hideCellBackground(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hideCellBackground = value;
}
constexpr ::HMUI::IconSegmentedControlCell*& HMUI::IconSegmentedControl::__get__firstCellPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____firstCellPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::IconSegmentedControlCell*> const& HMUI::IconSegmentedControl::__get__firstCellPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____firstCellPrefab;
}
constexpr void HMUI::IconSegmentedControl::__set__firstCellPrefab(::HMUI::IconSegmentedControlCell* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____firstCellPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HMUI::IconSegmentedControlCell*& HMUI::IconSegmentedControl::__get__lastCellPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastCellPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::IconSegmentedControlCell*> const& HMUI::IconSegmentedControl::__get__lastCellPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastCellPrefab;
}
constexpr void HMUI::IconSegmentedControl::__set__lastCellPrefab(::HMUI::IconSegmentedControlCell* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lastCellPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HMUI::IconSegmentedControlCell*& HMUI::IconSegmentedControl::__get__middleCellPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____middleCellPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::IconSegmentedControlCell*> const& HMUI::IconSegmentedControl::__get__middleCellPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____middleCellPrefab;
}
constexpr void HMUI::IconSegmentedControl::__set__middleCellPrefab(::HMUI::IconSegmentedControlCell* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____middleCellPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HMUI::IconSegmentedControlCell*& HMUI::IconSegmentedControl::__get__singleCellPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____singleCellPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::IconSegmentedControlCell*> const& HMUI::IconSegmentedControl::__get__singleCellPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____singleCellPrefab;
}
constexpr void HMUI::IconSegmentedControl::__set__singleCellPrefab(::HMUI::IconSegmentedControlCell* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____singleCellPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Zenject::DiContainer*& HMUI::IconSegmentedControl::__get__container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& HMUI::IconSegmentedControl::__get__container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr void HMUI::IconSegmentedControl::__set__container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____container)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::HMUI::__IconSegmentedControl__DataItem*, ::Array<::HMUI::__IconSegmentedControl__DataItem*>*>& HMUI::IconSegmentedControl::__get__dataItems() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataItems;
}
constexpr ::ArrayW<::HMUI::__IconSegmentedControl__DataItem*, ::Array<::HMUI::__IconSegmentedControl__DataItem*>*> const& HMUI::IconSegmentedControl::__get__dataItems() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataItems;
}
constexpr void HMUI::IconSegmentedControl::__set__dataItems(::ArrayW<::HMUI::__IconSegmentedControl__DataItem*, ::Array<::HMUI::__IconSegmentedControl__DataItem*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dataItems)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& HMUI::IconSegmentedControl::__get__isInitialized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isInitialized;
}
constexpr bool const& HMUI::IconSegmentedControl::__get__isInitialized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isInitialized;
}
constexpr void HMUI::IconSegmentedControl::__set__isInitialized(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isInitialized = value;
}
inline void HMUI::IconSegmentedControl::Init() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::IconSegmentedControl*>::get(), "Init",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::IconSegmentedControl::SetData(::ArrayW<::HMUI::__IconSegmentedControl__DataItem*, ::Array<::HMUI::__IconSegmentedControl__DataItem*>*> dataItems) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::IconSegmentedControl*>::get(), "SetData", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::HMUI::__IconSegmentedControl__DataItem*, ::Array<::HMUI::__IconSegmentedControl__DataItem*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dataItems);
}
inline int32_t HMUI::IconSegmentedControl::NumberOfCells() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::IconSegmentedControl*>::get(), "NumberOfCells",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::HMUI::SegmentedControlCell* HMUI::IconSegmentedControl::CellForCellNumber(int32_t cellNumber) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::IconSegmentedControl*>::get(), "CellForCellNumber", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HMUI::SegmentedControlCell*, false>(this, ___internal_method, cellNumber);
}
inline ::HMUI::IconSegmentedControlCell* HMUI::IconSegmentedControl::InstantiateCell(::UnityEngine::Object* prefab) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::IconSegmentedControl*>::get(), "InstantiateCell", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HMUI::IconSegmentedControlCell*, false>(this, ___internal_method, prefab);
}
inline ::HMUI::IconSegmentedControl* HMUI::IconSegmentedControl::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::HMUI::IconSegmentedControl*>());
}
inline void HMUI::IconSegmentedControl::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::IconSegmentedControl*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HMUI::IconSegmentedControl::IconSegmentedControl() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
