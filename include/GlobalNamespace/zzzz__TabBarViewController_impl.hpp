#pragma once
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__TabBarViewController_def.hpp"
#include "GlobalNamespace/zzzz__TabBarViewController_def.hpp"
#include "HMUI/zzzz__SegmentedControl_def.hpp"
#include "HMUI/zzzz__TextSegmentedControl_def.hpp"
#include "UnityEngine/UI/zzzz__ContentSizeFitter_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__TabBarViewController__TabBarItem._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__TabBarViewController__TabBarItem::*)(::StringW, ::System::Action*)>(
    &::GlobalNamespace::__TabBarViewController__TabBarItem::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x22dc454;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TabBarViewController__TabBarItem*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::__TabBarViewController__TabBarItem::__get_title() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___title;
}
constexpr ::StringW const& GlobalNamespace::__TabBarViewController__TabBarItem::__get_title() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___title;
}
constexpr void GlobalNamespace::__TabBarViewController__TabBarItem::__set_title(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___title)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::__TabBarViewController__TabBarItem::__get_action() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___action;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::__TabBarViewController__TabBarItem::__get_action() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___action;
}
constexpr void GlobalNamespace::__TabBarViewController__TabBarItem::__set_action(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___action)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__TabBarViewController__TabBarItem* GlobalNamespace::__TabBarViewController__TabBarItem::New_ctor(::StringW title, ::System::Action* action) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__TabBarViewController__TabBarItem*>(title, action));
}
inline void GlobalNamespace::__TabBarViewController__TabBarItem::_ctor(::StringW title, ::System::Action* action) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TabBarViewController__TabBarItem*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, title, action);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__TabBarViewController__TabBarItem::__TabBarViewController__TabBarItem() {}
//  Writing Method size for method: ::GlobalNamespace::TabBarViewController.set_sizeToFit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TabBarViewController::*)(bool)>(&::GlobalNamespace::TabBarViewController::set_sizeToFit)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x22dc008;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TabBarViewController*>::get(), "set_sizeToFit", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TabBarViewController.get_sizeToFit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::TabBarViewController::*)()>(&::GlobalNamespace::TabBarViewController::get_sizeToFit)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x22dc028;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TabBarViewController*>::get(), "get_sizeToFit",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TabBarViewController.get_selectedCellNumber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::TabBarViewController::*)()>(
    &::GlobalNamespace::TabBarViewController::get_selectedCellNumber)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x22dc044;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TabBarViewController*>::get(),
                                                                               "get_selectedCellNumber", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TabBarViewController.Setup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TabBarViewController::*)(
    ::ArrayW<::GlobalNamespace::__TabBarViewController__TabBarItem*, ::Array<::GlobalNamespace::__TabBarViewController__TabBarItem*>*>)>(&::GlobalNamespace::TabBarViewController::Setup)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x22dc060;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TabBarViewController*>::get(), "Setup", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                                     ::ArrayW<::GlobalNamespace::__TabBarViewController__TabBarItem*, ::Array<::GlobalNamespace::__TabBarViewController__TabBarItem*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TabBarViewController.SelectItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TabBarViewController::*)(int32_t)>(&::GlobalNamespace::TabBarViewController::SelectItem)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x22dc1ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TabBarViewController*>::get(), "SelectItem", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TabBarViewController.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TabBarViewController::*)()>(&::GlobalNamespace::TabBarViewController::Clear)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x22dc208;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TabBarViewController*>::get(), "Clear",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TabBarViewController.DidActivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TabBarViewController::*)(bool, bool, bool)>(
    &::GlobalNamespace::TabBarViewController::DidActivate)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x22dc25c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TabBarViewController*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TabBarViewController*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TabBarViewController.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TabBarViewController::*)()>(&::GlobalNamespace::TabBarViewController::OnDestroy)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x22dc320;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TabBarViewController*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TabBarViewController*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TabBarViewController.HandleDidSelectCell
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TabBarViewController::*)(::HMUI::SegmentedControl*, int32_t)>(
    &::GlobalNamespace::TabBarViewController::HandleDidSelectCell)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x22dc3fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TabBarViewController*>::get(), "HandleDidSelectCell", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::SegmentedControl*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TabBarViewController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TabBarViewController::*)()>(&::GlobalNamespace::TabBarViewController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22dc44c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TabBarViewController*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::HMUI::TextSegmentedControl*& GlobalNamespace::TabBarViewController::__get__segmentedControll() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____segmentedControll;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::TextSegmentedControl*> const& GlobalNamespace::TabBarViewController::__get__segmentedControll() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____segmentedControll;
}
constexpr void GlobalNamespace::TabBarViewController::__set__segmentedControll(::HMUI::TextSegmentedControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____segmentedControll)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UI::ContentSizeFitter*& GlobalNamespace::TabBarViewController::__get__contentSizeFilter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____contentSizeFilter;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::ContentSizeFitter*> const& GlobalNamespace::TabBarViewController::__get__contentSizeFilter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____contentSizeFilter;
}
constexpr void GlobalNamespace::TabBarViewController::__set__contentSizeFilter(::UnityEngine::UI::ContentSizeFitter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____contentSizeFilter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& GlobalNamespace::TabBarViewController::__get__labels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____labels;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& GlobalNamespace::TabBarViewController::__get__labels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____labels;
}
constexpr void GlobalNamespace::TabBarViewController::__set__labels(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____labels)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::__TabBarViewController__TabBarItem*, ::Array<::GlobalNamespace::__TabBarViewController__TabBarItem*>*>& GlobalNamespace::TabBarViewController::__get__items() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____items;
}
constexpr ::ArrayW<::GlobalNamespace::__TabBarViewController__TabBarItem*, ::Array<::GlobalNamespace::__TabBarViewController__TabBarItem*>*> const&
GlobalNamespace::TabBarViewController::__get__items() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____items;
}
constexpr void
GlobalNamespace::TabBarViewController::__set__items(::ArrayW<::GlobalNamespace::__TabBarViewController__TabBarItem*, ::Array<::GlobalNamespace::__TabBarViewController__TabBarItem*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____items)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::TabBarViewController::__get__shouldReloadData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____shouldReloadData;
}
constexpr bool const& GlobalNamespace::TabBarViewController::__get__shouldReloadData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____shouldReloadData;
}
constexpr void GlobalNamespace::TabBarViewController::__set__shouldReloadData(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____shouldReloadData = value;
}
inline void GlobalNamespace::TabBarViewController::set_sizeToFit(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TabBarViewController*>::get(), "set_sizeToFit", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::TabBarViewController::get_sizeToFit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TabBarViewController*>::get(), "get_sizeToFit",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::TabBarViewController::get_selectedCellNumber() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TabBarViewController*>::get(),
                                                                             "get_selectedCellNumber", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::TabBarViewController::Setup(::ArrayW<::GlobalNamespace::__TabBarViewController__TabBarItem*, ::Array<::GlobalNamespace::__TabBarViewController__TabBarItem*>*> items) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TabBarViewController*>::get(), "Setup", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                                   ::ArrayW<::GlobalNamespace::__TabBarViewController__TabBarItem*, ::Array<::GlobalNamespace::__TabBarViewController__TabBarItem*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, items);
}
inline void GlobalNamespace::TabBarViewController::SelectItem(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TabBarViewController*>::get(), "SelectItem", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
inline void GlobalNamespace::TabBarViewController::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TabBarViewController*>::get(), "Clear",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::TabBarViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TabBarViewController*>::get(), "DidActivate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::TabBarViewController::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TabBarViewController*>::get(), "OnDestroy",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::TabBarViewController::HandleDidSelectCell(::HMUI::SegmentedControl* segmentedControl, int32_t cellNumber) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TabBarViewController*>::get(), "HandleDidSelectCell", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::SegmentedControl*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, segmentedControl, cellNumber);
}
inline ::GlobalNamespace::TabBarViewController* GlobalNamespace::TabBarViewController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::TabBarViewController*>());
}
inline void GlobalNamespace::TabBarViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TabBarViewController*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TabBarViewController::TabBarViewController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
