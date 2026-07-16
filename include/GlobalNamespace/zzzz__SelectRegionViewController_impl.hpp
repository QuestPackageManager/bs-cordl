#pragma once
// IWYU pragma private; include "GlobalNamespace/SelectRegionViewController.hpp"
#include "GlobalNamespace/zzzz__CompletableViewController_1_impl.hpp"
#include "GlobalNamespace/zzzz__RegionToLocalizationKeyPair_impl.hpp"
#include "GlobalNamespace/zzzz__Region_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SelectRegionViewController_def.hpp"
#include "GlobalNamespace/zzzz__RegionToLocalizationKeyPair_def.hpp"
#include "GlobalNamespace/zzzz__SelectRegionViewController_def.hpp"
#include "HMUI/zzzz__DropdownWithTableView_def.hpp"
#include "HMUI/zzzz__SimpleTextDropdown_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SelectRegionViewController___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelectRegionViewController___c::*)()>(&::GlobalNamespace::SelectRegionViewController___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5965b18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectRegionViewController___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectRegionViewController___c._DidActivate_b__3_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::SelectRegionViewController___c::*)(::GlobalNamespace::RegionToLocalizationKeyPair)>(
    &::GlobalNamespace::SelectRegionViewController___c::_DidActivate_b__3_1)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5965b1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectRegionViewController___c*>(),
                                                                                           { "<DidActivate>b__3_1", {}, { ::i2c::type_of<::GlobalNamespace::RegionToLocalizationKeyPair>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SelectRegionViewController___c::setStaticF___9(::GlobalNamespace::SelectRegionViewController___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::SelectRegionViewController___c*, "<>9", ::GlobalNamespace::SelectRegionViewController___c*>(
      std::forward<::GlobalNamespace::SelectRegionViewController___c*>(value));
}
inline ::GlobalNamespace::SelectRegionViewController___c* GlobalNamespace::SelectRegionViewController___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::SelectRegionViewController___c*, "<>9", ::GlobalNamespace::SelectRegionViewController___c*>();
}
inline void GlobalNamespace::SelectRegionViewController___c::setStaticF___9__3_1(::System::Func_2<::GlobalNamespace::RegionToLocalizationKeyPair, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::RegionToLocalizationKeyPair, ::StringW>*, "<>9__3_1", ::GlobalNamespace::SelectRegionViewController___c*>(
      std::forward<::System::Func_2<::GlobalNamespace::RegionToLocalizationKeyPair, ::StringW>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::RegionToLocalizationKeyPair, ::StringW>* GlobalNamespace::SelectRegionViewController___c::getStaticF___9__3_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::RegionToLocalizationKeyPair, ::StringW>*, "<>9__3_1", ::GlobalNamespace::SelectRegionViewController___c*>();
}
inline void GlobalNamespace::SelectRegionViewController___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectRegionViewController___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::SelectRegionViewController___c::_DidActivate_b__3_1(::GlobalNamespace::RegionToLocalizationKeyPair p) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectRegionViewController___c*>(),
                                                                                         { "<DidActivate>b__3_1", {}, { ::i2c::type_of<::GlobalNamespace::RegionToLocalizationKeyPair>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, p);
}
inline ::GlobalNamespace::SelectRegionViewController___c* GlobalNamespace::SelectRegionViewController___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SelectRegionViewController___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SelectRegionViewController___c::SelectRegionViewController___c() {}
//  Writing Method size for method: ::GlobalNamespace::SelectRegionViewController.DidActivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelectRegionViewController::*)(bool, bool, bool)>(&::GlobalNamespace::SelectRegionViewController::DidActivate)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x5965690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectRegionViewController*>(), { ::i2c::class_of<::GlobalNamespace::SelectRegionViewController*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectRegionViewController.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelectRegionViewController::*)()>(&::GlobalNamespace::SelectRegionViewController::OnDestroy)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x59658d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectRegionViewController*>(), { ::i2c::class_of<::GlobalNamespace::SelectRegionViewController*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectRegionViewController.HandleRegionSelectionDropdownDidSelectCell
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelectRegionViewController::*)(::HMUI::DropdownWithTableView*, int32_t)>(
    &::GlobalNamespace::SelectRegionViewController::HandleRegionSelectionDropdownDidSelectCell)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x59659c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectRegionViewController*>(),
                                                             { "HandleRegionSelectionDropdownDidSelectCell", {}, { ::i2c::type_of<::HMUI::DropdownWithTableView*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectRegionViewController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelectRegionViewController::*)()>(&::GlobalNamespace::SelectRegionViewController::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5965a04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectRegionViewController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectRegionViewController._DidActivate_b__3_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelectRegionViewController::*)()>(&::GlobalNamespace::SelectRegionViewController::_DidActivate_b__3_0)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5965a48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectRegionViewController*>(), { "<DidActivate>b__3_0", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::SelectRegionViewController::__cordl_internal_get__continueButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____continueButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::SelectRegionViewController::__cordl_internal_get__continueButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____continueButton;
}
constexpr void GlobalNamespace::SelectRegionViewController::__cordl_internal_set__continueButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____continueButton = value;
}
constexpr ::UnityW<::HMUI::SimpleTextDropdown>& GlobalNamespace::SelectRegionViewController::__cordl_internal_get__regionSelectionDropdown() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____regionSelectionDropdown;
}
constexpr ::UnityW<::HMUI::SimpleTextDropdown> const& GlobalNamespace::SelectRegionViewController::__cordl_internal_get__regionSelectionDropdown() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____regionSelectionDropdown;
}
constexpr void GlobalNamespace::SelectRegionViewController::__cordl_internal_set__regionSelectionDropdown(::UnityW<::HMUI::SimpleTextDropdown> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____regionSelectionDropdown = value;
}
constexpr ::ArrayW<::GlobalNamespace::RegionToLocalizationKeyPair>& GlobalNamespace::SelectRegionViewController::__cordl_internal_get__regionLocalizationKeys() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____regionLocalizationKeys;
}
constexpr ::ArrayW<::GlobalNamespace::RegionToLocalizationKeyPair> const& GlobalNamespace::SelectRegionViewController::__cordl_internal_get__regionLocalizationKeys() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____regionLocalizationKeys;
}
constexpr void GlobalNamespace::SelectRegionViewController::__cordl_internal_set__regionLocalizationKeys(::ArrayW<::GlobalNamespace::RegionToLocalizationKeyPair> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____regionLocalizationKeys = value;
}
inline void GlobalNamespace::SelectRegionViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SelectRegionViewController*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::SelectRegionViewController::OnDestroy() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SelectRegionViewController*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SelectRegionViewController::HandleRegionSelectionDropdownDidSelectCell(::HMUI::DropdownWithTableView* dropdown, int32_t idx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectRegionViewController*>(),
                                                           { "HandleRegionSelectionDropdownDidSelectCell", {}, { ::i2c::type_of<::HMUI::DropdownWithTableView*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dropdown, idx);
}
inline void GlobalNamespace::SelectRegionViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectRegionViewController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SelectRegionViewController::_DidActivate_b__3_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectRegionViewController*>(), { "<DidActivate>b__3_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SelectRegionViewController* GlobalNamespace::SelectRegionViewController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SelectRegionViewController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SelectRegionViewController::SelectRegionViewController() {}
