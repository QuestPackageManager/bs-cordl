#pragma once
// IWYU pragma private; include "GlobalNamespace/SelectLevelCategoryViewController.hpp"
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SelectLevelCategoryViewController_def.hpp"
#include "GlobalNamespace/zzzz__IAnalyticsModel_def.hpp"
#include "GlobalNamespace/zzzz__SelectLevelCategoryViewController_def.hpp"
#include "HMUI/zzzz__IconSegmentedControl_def.hpp"
#include "HMUI/zzzz__SegmentedControl_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory::SelectLevelCategoryViewController_LevelCategory(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory::SelectLevelCategoryViewController_LevelCategory() {}
constexpr ::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory GlobalNamespace::SelectLevelCategoryViewController_LevelCategory::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory GlobalNamespace::SelectLevelCategoryViewController_LevelCategory::MusicPacks{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory GlobalNamespace::SelectLevelCategoryViewController_LevelCategory::CustomSongs{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory GlobalNamespace::SelectLevelCategoryViewController_LevelCategory::Favorites{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory GlobalNamespace::SelectLevelCategoryViewController_LevelCategory::All{ static_cast<int32_t>(0x4) };
//  Writing Method size for method: ::GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo::*)()>(
    &::GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b6598c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory& GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo::__cordl_internal_get_levelCategory() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelCategory;
}
constexpr ::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory const& GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo::__cordl_internal_get_levelCategory() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelCategory;
}
constexpr void GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo::__cordl_internal_set_levelCategory(::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___levelCategory = value;
}
constexpr ::StringW& GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo::__cordl_internal_get_localizedKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localizedKey;
}
constexpr ::StringW const& GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo::__cordl_internal_get_localizedKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localizedKey;
}
constexpr void GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo::__cordl_internal_set_localizedKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___localizedKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Sprite>& GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo::__cordl_internal_get_categoryIcon() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___categoryIcon;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo::__cordl_internal_get_categoryIcon() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___categoryIcon;
}
constexpr void GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo::__cordl_internal_set_categoryIcon(::UnityW<::UnityEngine::Sprite> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___categoryIcon)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo* GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo::SelectLevelCategoryViewController_LevelCategoryInfo() {}
//  Writing Method size for method: ::GlobalNamespace::SelectLevelCategoryViewController___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectLevelCategoryViewController___c::*)()>(
    &::GlobalNamespace::SelectLevelCategoryViewController___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b659f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectLevelCategoryViewController___c*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectLevelCategoryViewController___c._Setup_b__12_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::HMUI::IconSegmentedControl_DataItem* (::GlobalNamespace::SelectLevelCategoryViewController___c::*)(::GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo*)>(
        &::GlobalNamespace::SelectLevelCategoryViewController___c::_Setup_b__12_1)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3b659f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectLevelCategoryViewController___c*>::get(), "<Setup>b__12_1", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectLevelCategoryViewController___c._Setup_b__12_2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory (
    ::GlobalNamespace::SelectLevelCategoryViewController___c::*)(::GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo*)>(
    &::GlobalNamespace::SelectLevelCategoryViewController___c::_Setup_b__12_2)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3b65a78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectLevelCategoryViewController___c*>::get(), "<Setup>b__12_2", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SelectLevelCategoryViewController___c::setStaticF___9(::GlobalNamespace::SelectLevelCategoryViewController___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::SelectLevelCategoryViewController___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectLevelCategoryViewController___c*>::get>(
      std::forward<::GlobalNamespace::SelectLevelCategoryViewController___c*>(value));
}
inline ::GlobalNamespace::SelectLevelCategoryViewController___c* GlobalNamespace::SelectLevelCategoryViewController___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::SelectLevelCategoryViewController___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectLevelCategoryViewController___c*>::get>();
}
inline void GlobalNamespace::SelectLevelCategoryViewController___c::setStaticF___9__12_1(
    ::System::Func_2<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo*, ::HMUI::IconSegmentedControl_DataItem*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo*, ::HMUI::IconSegmentedControl_DataItem*>*, "<>9__12_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectLevelCategoryViewController___c*>::get>(
      std::forward<::System::Func_2<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo*, ::HMUI::IconSegmentedControl_DataItem*>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo*, ::HMUI::IconSegmentedControl_DataItem*>*
GlobalNamespace::SelectLevelCategoryViewController___c::getStaticF___9__12_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo*, ::HMUI::IconSegmentedControl_DataItem*>*, "<>9__12_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectLevelCategoryViewController___c*>::get>();
}
inline void GlobalNamespace::SelectLevelCategoryViewController___c::setStaticF___9__12_2(
    ::System::Func_2<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo*, ::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo*, ::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory>*,
                                    "<>9__12_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectLevelCategoryViewController___c*>::get>(
      std::forward<::System::Func_2<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo*, ::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo*, ::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory>*
GlobalNamespace::SelectLevelCategoryViewController___c::getStaticF___9__12_2() {
  return ::cordl_internals::getStaticField<
      ::System::Func_2<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo*, ::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory>*, "<>9__12_2",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectLevelCategoryViewController___c*>::get>();
}
inline void GlobalNamespace::SelectLevelCategoryViewController___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectLevelCategoryViewController___c*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::HMUI::IconSegmentedControl_DataItem* GlobalNamespace::SelectLevelCategoryViewController___c::_Setup_b__12_1(::GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectLevelCategoryViewController___c*>::get(), "<Setup>b__12_1", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HMUI::IconSegmentedControl_DataItem*, false>(this, ___internal_method, x);
}
inline ::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory
GlobalNamespace::SelectLevelCategoryViewController___c::_Setup_b__12_2(::GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectLevelCategoryViewController___c*>::get(), "<Setup>b__12_2", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory, false>(this, ___internal_method, x);
}
inline ::GlobalNamespace::SelectLevelCategoryViewController___c* GlobalNamespace::SelectLevelCategoryViewController___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SelectLevelCategoryViewController___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SelectLevelCategoryViewController___c::SelectLevelCategoryViewController___c() {}
//  Writing Method size for method: ::GlobalNamespace::SelectLevelCategoryViewController___c__DisplayClass12_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectLevelCategoryViewController___c__DisplayClass12_0::*)()>(
    &::GlobalNamespace::SelectLevelCategoryViewController___c__DisplayClass12_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b65628;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectLevelCategoryViewController___c__DisplayClass12_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectLevelCategoryViewController___c__DisplayClass12_0._Setup_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::SelectLevelCategoryViewController___c__DisplayClass12_0::*)(
    ::GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo*)>(&::GlobalNamespace::SelectLevelCategoryViewController___c__DisplayClass12_0::_Setup_b__0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3b65a90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectLevelCategoryViewController___c__DisplayClass12_0*>::get(), "<Setup>b__0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo*>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory, ::Array<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory>*>&
GlobalNamespace::SelectLevelCategoryViewController___c__DisplayClass12_0::__cordl_internal_get_enabledLevelCategories() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enabledLevelCategories;
}
constexpr ::ArrayW<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory, ::Array<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory>*> const&
GlobalNamespace::SelectLevelCategoryViewController___c__DisplayClass12_0::__cordl_internal_get_enabledLevelCategories() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enabledLevelCategories;
}
constexpr void GlobalNamespace::SelectLevelCategoryViewController___c__DisplayClass12_0::__cordl_internal_set_enabledLevelCategories(
    ::ArrayW<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory, ::Array<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___enabledLevelCategories)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::SelectLevelCategoryViewController___c__DisplayClass12_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectLevelCategoryViewController___c__DisplayClass12_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::SelectLevelCategoryViewController___c__DisplayClass12_0::_Setup_b__0(::GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectLevelCategoryViewController___c__DisplayClass12_0*>::get(), "<Setup>b__0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, data);
}
inline ::GlobalNamespace::SelectLevelCategoryViewController___c__DisplayClass12_0* GlobalNamespace::SelectLevelCategoryViewController___c__DisplayClass12_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SelectLevelCategoryViewController___c__DisplayClass12_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SelectLevelCategoryViewController___c__DisplayClass12_0::SelectLevelCategoryViewController___c__DisplayClass12_0() {}
//  Writing Method size for method: ::GlobalNamespace::SelectLevelCategoryViewController.add_didSelectLevelCategoryEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectLevelCategoryViewController::*)(
    ::System::Action_2<::UnityW<::GlobalNamespace::SelectLevelCategoryViewController>, ::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory>*)>(
    &::GlobalNamespace::SelectLevelCategoryViewController::add_didSelectLevelCategoryEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3b65164;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectLevelCategoryViewController*>::get(), "add_didSelectLevelCategoryEvent",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::System::Action_2<::UnityW<::GlobalNamespace::SelectLevelCategoryViewController>, ::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectLevelCategoryViewController.remove_didSelectLevelCategoryEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectLevelCategoryViewController::*)(
    ::System::Action_2<::UnityW<::GlobalNamespace::SelectLevelCategoryViewController>, ::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory>*)>(
    &::GlobalNamespace::SelectLevelCategoryViewController::remove_didSelectLevelCategoryEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3b65214;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectLevelCategoryViewController*>::get(), "remove_didSelectLevelCategoryEvent",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::System::Action_2<::UnityW<::GlobalNamespace::SelectLevelCategoryViewController>, ::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectLevelCategoryViewController.get_selectedLevelCategory
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory (
    ::GlobalNamespace::SelectLevelCategoryViewController::*)()>(&::GlobalNamespace::SelectLevelCategoryViewController::get_selectedLevelCategory)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3b652c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectLevelCategoryViewController*>::get(),
                                                                               "get_selectedLevelCategory", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectLevelCategoryViewController.Setup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectLevelCategoryViewController::*)(
    ::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory,
    ::ArrayW<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory, ::Array<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory>*>)>(
    &::GlobalNamespace::SelectLevelCategoryViewController::Setup)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x3b6531c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectLevelCategoryViewController*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory, ::Array<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectLevelCategoryViewController.DidActivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectLevelCategoryViewController::*)(bool, bool, bool)>(
    &::GlobalNamespace::SelectLevelCategoryViewController::DidActivate)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3b65630;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectLevelCategoryViewController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectLevelCategoryViewController*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectLevelCategoryViewController.DidDeactivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectLevelCategoryViewController::*)(bool, bool)>(
    &::GlobalNamespace::SelectLevelCategoryViewController::DidDeactivate)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3b656cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectLevelCategoryViewController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectLevelCategoryViewController*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectLevelCategoryViewController.LevelFilterCategoryIconSegmentedControlDidSelectCell
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectLevelCategoryViewController::*)(::HMUI::SegmentedControl*, int32_t)>(
    &::GlobalNamespace::SelectLevelCategoryViewController::LevelFilterCategoryIconSegmentedControlDidSelectCell)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x3b65768;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectLevelCategoryViewController*>::get(),
                                                 "LevelFilterCategoryIconSegmentedControlDidSelectCell", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::SegmentedControl*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectLevelCategoryViewController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectLevelCategoryViewController::*)()>(
    &::GlobalNamespace::SelectLevelCategoryViewController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b65984;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectLevelCategoryViewController*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo*, ::Array<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo*>*>&
GlobalNamespace::SelectLevelCategoryViewController::__cordl_internal_get__allLevelCategoryInfos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allLevelCategoryInfos;
}
constexpr ::ArrayW<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo*, ::Array<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo*>*> const&
GlobalNamespace::SelectLevelCategoryViewController::__cordl_internal_get__allLevelCategoryInfos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allLevelCategoryInfos;
}
constexpr void GlobalNamespace::SelectLevelCategoryViewController::__cordl_internal_set__allLevelCategoryInfos(
    ::ArrayW<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo*, ::Array<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____allLevelCategoryInfos)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::HMUI::IconSegmentedControl>& GlobalNamespace::SelectLevelCategoryViewController::__cordl_internal_get__levelFilterCategoryIconSegmentedControl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelFilterCategoryIconSegmentedControl;
}
constexpr ::UnityW<::HMUI::IconSegmentedControl> const& GlobalNamespace::SelectLevelCategoryViewController::__cordl_internal_get__levelFilterCategoryIconSegmentedControl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelFilterCategoryIconSegmentedControl;
}
constexpr void GlobalNamespace::SelectLevelCategoryViewController::__cordl_internal_set__levelFilterCategoryIconSegmentedControl(::UnityW<::HMUI::IconSegmentedControl> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelFilterCategoryIconSegmentedControl)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IAnalyticsModel*& GlobalNamespace::SelectLevelCategoryViewController::__cordl_internal_get__analyticsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____analyticsModel;
}
constexpr ::GlobalNamespace::IAnalyticsModel* const& GlobalNamespace::SelectLevelCategoryViewController::__cordl_internal_get__analyticsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____analyticsModel;
}
constexpr void GlobalNamespace::SelectLevelCategoryViewController::__cordl_internal_set__analyticsModel(::GlobalNamespace::IAnalyticsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____analyticsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::SelectLevelCategoryViewController>, ::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory>*&
GlobalNamespace::SelectLevelCategoryViewController::__cordl_internal_get_didSelectLevelCategoryEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSelectLevelCategoryEvent;
}
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::SelectLevelCategoryViewController>, ::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory>* const&
GlobalNamespace::SelectLevelCategoryViewController::__cordl_internal_get_didSelectLevelCategoryEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSelectLevelCategoryEvent;
}
constexpr void GlobalNamespace::SelectLevelCategoryViewController::__cordl_internal_set_didSelectLevelCategoryEvent(
    ::System::Action_2<::UnityW<::GlobalNamespace::SelectLevelCategoryViewController>, ::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didSelectLevelCategoryEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory& GlobalNamespace::SelectLevelCategoryViewController::__cordl_internal_get__prevSelectedLevelCategory() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevSelectedLevelCategory;
}
constexpr ::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory const& GlobalNamespace::SelectLevelCategoryViewController::__cordl_internal_get__prevSelectedLevelCategory() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevSelectedLevelCategory;
}
constexpr void GlobalNamespace::SelectLevelCategoryViewController::__cordl_internal_set__prevSelectedLevelCategory(::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prevSelectedLevelCategory = value;
}
constexpr ::ArrayW<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo*, ::Array<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo*>*>&
GlobalNamespace::SelectLevelCategoryViewController::__cordl_internal_get__levelCategoryInfos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelCategoryInfos;
}
constexpr ::ArrayW<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo*, ::Array<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo*>*> const&
GlobalNamespace::SelectLevelCategoryViewController::__cordl_internal_get__levelCategoryInfos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelCategoryInfos;
}
constexpr void GlobalNamespace::SelectLevelCategoryViewController::__cordl_internal_set__levelCategoryInfos(
    ::ArrayW<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo*, ::Array<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelCategoryInfos)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::SelectLevelCategoryViewController::add_didSelectLevelCategoryEvent(
    ::System::Action_2<::UnityW<::GlobalNamespace::SelectLevelCategoryViewController>, ::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectLevelCategoryViewController*>::get(), "add_didSelectLevelCategoryEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Action_2<::UnityW<::GlobalNamespace::SelectLevelCategoryViewController>, ::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::SelectLevelCategoryViewController::remove_didSelectLevelCategoryEvent(
    ::System::Action_2<::UnityW<::GlobalNamespace::SelectLevelCategoryViewController>, ::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectLevelCategoryViewController*>::get(), "remove_didSelectLevelCategoryEvent",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Action_2<::UnityW<::GlobalNamespace::SelectLevelCategoryViewController>, ::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory GlobalNamespace::SelectLevelCategoryViewController::get_selectedLevelCategory() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectLevelCategoryViewController*>::get(),
                                                                             "get_selectedLevelCategory", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory, false>(this, ___internal_method);
}
inline void GlobalNamespace::SelectLevelCategoryViewController::Setup(
    ::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory selectedCategory,
    ::ArrayW<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory, ::Array<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory>*> enabledLevelCategories) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectLevelCategoryViewController*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory, ::Array<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, selectedCategory, enabledLevelCategories);
}
inline void GlobalNamespace::SelectLevelCategoryViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectLevelCategoryViewController*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::SelectLevelCategoryViewController::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectLevelCategoryViewController*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline void GlobalNamespace::SelectLevelCategoryViewController::LevelFilterCategoryIconSegmentedControlDidSelectCell(::HMUI::SegmentedControl* segmentedControl, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectLevelCategoryViewController*>::get(),
                                               "LevelFilterCategoryIconSegmentedControlDidSelectCell", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::SegmentedControl*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, segmentedControl, index);
}
inline void GlobalNamespace::SelectLevelCategoryViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectLevelCategoryViewController*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SelectLevelCategoryViewController* GlobalNamespace::SelectLevelCategoryViewController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SelectLevelCategoryViewController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SelectLevelCategoryViewController::SelectLevelCategoryViewController() {}
