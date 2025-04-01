#pragma once
// IWYU pragma private; include "GlobalNamespace/TabBarViewController.hpp"
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__TabBarViewController_def.hpp"
#include "GlobalNamespace/zzzz__TabBarViewController_def.hpp"
#include "HMUI/zzzz__SegmentedControl_def.hpp"
#include "HMUI/zzzz__TextSegmentedControl_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/UI/zzzz__ContentSizeFitter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TabBarViewController_TabBarItem._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TabBarViewController_TabBarItem::*)(::StringW, ::System::Action*)>(
    &::GlobalNamespace::TabBarViewController_TabBarItem::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3af76f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TabBarViewController_TabBarItem*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::TabBarViewController_TabBarItem::__cordl_internal_get_title() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___title;
}
constexpr ::StringW const& GlobalNamespace::TabBarViewController_TabBarItem::__cordl_internal_get_title() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___title;
}
constexpr void GlobalNamespace::TabBarViewController_TabBarItem::__cordl_internal_set_title(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___title)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::TabBarViewController_TabBarItem::__cordl_internal_get_action() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___action;
}
constexpr ::System::Action* const& GlobalNamespace::TabBarViewController_TabBarItem::__cordl_internal_get_action() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___action;
}
constexpr void GlobalNamespace::TabBarViewController_TabBarItem::__cordl_internal_set_action(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___action)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::TabBarViewController_TabBarItem::_ctor(::StringW title, ::System::Action* action) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TabBarViewController_TabBarItem*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, title, action);
}
inline ::GlobalNamespace::TabBarViewController_TabBarItem* GlobalNamespace::TabBarViewController_TabBarItem::New_ctor(::StringW title, ::System::Action* action) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::TabBarViewController_TabBarItem*>(title, action));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TabBarViewController_TabBarItem::TabBarViewController_TabBarItem() {}
//  Writing Method size for method: ::GlobalNamespace::TabBarViewController.set_sizeToFit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TabBarViewController::*)(bool)>(&::GlobalNamespace::TabBarViewController::set_sizeToFit)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3af72a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TabBarViewController*>::get(), "set_sizeToFit",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TabBarViewController.get_sizeToFit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::TabBarViewController::*)()>(&::GlobalNamespace::TabBarViewController::get_sizeToFit)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3af72c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TabBarViewController*>::get(), "get_sizeToFit",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TabBarViewController.get_selectedCellNumber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::TabBarViewController::*)()>(
    &::GlobalNamespace::TabBarViewController::get_selectedCellNumber)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3af72e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TabBarViewController*>::get(),
                                                                               "get_selectedCellNumber", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TabBarViewController.Setup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TabBarViewController::*)(
    ::ArrayW<::GlobalNamespace::TabBarViewController_TabBarItem*, ::Array<::GlobalNamespace::TabBarViewController_TabBarItem*>*>)>(&::GlobalNamespace::TabBarViewController::Setup)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x3af72fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TabBarViewController*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                        ::ArrayW<::GlobalNamespace::TabBarViewController_TabBarItem*, ::Array<::GlobalNamespace::TabBarViewController_TabBarItem*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TabBarViewController.SelectItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TabBarViewController::*)(int32_t)>(&::GlobalNamespace::TabBarViewController::SelectItem)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3af748c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TabBarViewController*>::get(), "SelectItem", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TabBarViewController.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TabBarViewController::*)()>(&::GlobalNamespace::TabBarViewController::Clear)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x3af74a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TabBarViewController*>::get(), "Clear",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TabBarViewController.DidActivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TabBarViewController::*)(bool, bool, bool)>(
    &::GlobalNamespace::TabBarViewController::DidActivate)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x3af74fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TabBarViewController*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TabBarViewController*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TabBarViewController.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TabBarViewController::*)()>(&::GlobalNamespace::TabBarViewController::OnDestroy)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x3af75c0;

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
  constexpr static std::size_t addrs = 0x3af7698;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TabBarViewController*>::get(), "HandleDidSelectCell", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::SegmentedControl*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TabBarViewController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TabBarViewController::*)()>(&::GlobalNamespace::TabBarViewController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3af76e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TabBarViewController*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::HMUI::TextSegmentedControl>& GlobalNamespace::TabBarViewController::__cordl_internal_get__segmentedControll() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____segmentedControll;
}
constexpr ::UnityW<::HMUI::TextSegmentedControl> const& GlobalNamespace::TabBarViewController::__cordl_internal_get__segmentedControll() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____segmentedControll;
}
constexpr void GlobalNamespace::TabBarViewController::__cordl_internal_set__segmentedControll(::UnityW<::HMUI::TextSegmentedControl> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____segmentedControll)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::UI::ContentSizeFitter>& GlobalNamespace::TabBarViewController::__cordl_internal_get__contentSizeFilter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____contentSizeFilter;
}
constexpr ::UnityW<::UnityEngine::UI::ContentSizeFitter> const& GlobalNamespace::TabBarViewController::__cordl_internal_get__contentSizeFilter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____contentSizeFilter;
}
constexpr void GlobalNamespace::TabBarViewController::__cordl_internal_set__contentSizeFilter(::UnityW<::UnityEngine::UI::ContentSizeFitter> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____contentSizeFilter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& GlobalNamespace::TabBarViewController::__cordl_internal_get__labels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____labels;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& GlobalNamespace::TabBarViewController::__cordl_internal_get__labels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____labels;
}
constexpr void GlobalNamespace::TabBarViewController::__cordl_internal_set__labels(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____labels)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::TabBarViewController_TabBarItem*, ::Array<::GlobalNamespace::TabBarViewController_TabBarItem*>*>&
GlobalNamespace::TabBarViewController::__cordl_internal_get__items() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____items;
}
constexpr ::ArrayW<::GlobalNamespace::TabBarViewController_TabBarItem*, ::Array<::GlobalNamespace::TabBarViewController_TabBarItem*>*> const&
GlobalNamespace::TabBarViewController::__cordl_internal_get__items() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____items;
}
constexpr void
GlobalNamespace::TabBarViewController::__cordl_internal_set__items(::ArrayW<::GlobalNamespace::TabBarViewController_TabBarItem*, ::Array<::GlobalNamespace::TabBarViewController_TabBarItem*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____items)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::TabBarViewController::__cordl_internal_get__shouldReloadData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shouldReloadData;
}
constexpr bool const& GlobalNamespace::TabBarViewController::__cordl_internal_get__shouldReloadData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shouldReloadData;
}
constexpr void GlobalNamespace::TabBarViewController::__cordl_internal_set__shouldReloadData(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shouldReloadData = value;
}
inline void GlobalNamespace::TabBarViewController::set_sizeToFit(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TabBarViewController*>::get(), "set_sizeToFit",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::TabBarViewController::get_sizeToFit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TabBarViewController*>::get(), "get_sizeToFit",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::TabBarViewController::get_selectedCellNumber() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TabBarViewController*>::get(),
                                                                             "get_selectedCellNumber", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::TabBarViewController::Setup(::ArrayW<::GlobalNamespace::TabBarViewController_TabBarItem*, ::Array<::GlobalNamespace::TabBarViewController_TabBarItem*>*> items) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TabBarViewController*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                      ::ArrayW<::GlobalNamespace::TabBarViewController_TabBarItem*, ::Array<::GlobalNamespace::TabBarViewController_TabBarItem*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, items);
}
inline void GlobalNamespace::TabBarViewController::SelectItem(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TabBarViewController*>::get(), "SelectItem",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
inline void GlobalNamespace::TabBarViewController::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TabBarViewController*>::get(), "Clear",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::TabBarViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TabBarViewController*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::TabBarViewController::OnDestroy() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TabBarViewController*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::TabBarViewController::HandleDidSelectCell(::HMUI::SegmentedControl* segmentedControl, int32_t cellNumber) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TabBarViewController*>::get(), "HandleDidSelectCell", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::SegmentedControl*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, segmentedControl, cellNumber);
}
inline void GlobalNamespace::TabBarViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TabBarViewController*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::TabBarViewController* GlobalNamespace::TabBarViewController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::TabBarViewController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TabBarViewController::TabBarViewController() {}
