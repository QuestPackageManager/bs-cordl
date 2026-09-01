#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\CollectionViewController.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__CollectionViewController_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyViewModel_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVerticalCollectionView_def.hpp"
#include "UnityEngine/UIElements/zzzz__ReusableCollectionItem_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::CollectionViewController.add_itemsSourceChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::CollectionViewController::*)(::System::Action*)>(
    &::UnityEngine::UIElements::CollectionViewController::add_itemsSourceChanged)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6c52e68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CollectionViewController*>(), { "add_itemsSourceChanged", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CollectionViewController.remove_itemsSourceChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::CollectionViewController::*)(::System::Action*)>(
    &::UnityEngine::UIElements::CollectionViewController::remove_itemsSourceChanged)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6c52f14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CollectionViewController*>(), { "remove_itemsSourceChanged", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CollectionViewController.add_itemIndexChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::CollectionViewController::*)(::System::Action_2<int32_t, int32_t>*)>(
    &::UnityEngine::UIElements::CollectionViewController::add_itemIndexChanged)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6c52fc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CollectionViewController*>(),
                                                                                           { "add_itemIndexChanged", {}, { ::i2c::type_of<::System::Action_2<int32_t, int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CollectionViewController.remove_itemIndexChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::CollectionViewController::*)(::System::Action_2<int32_t, int32_t>*)>(
    &::UnityEngine::UIElements::CollectionViewController::remove_itemIndexChanged)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6c53080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CollectionViewController*>(),
                                                                                           { "remove_itemIndexChanged", {}, { ::i2c::type_of<::System::Action_2<int32_t, int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CollectionViewController.get_itemsSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IList* (::UnityEngine::UIElements::CollectionViewController::*)()>(
    &::UnityEngine::UIElements::CollectionViewController::get_itemsSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c53140;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CollectionViewController*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::CollectionViewController*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CollectionViewController.set_itemsSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::CollectionViewController::*)(::System::Collections::IList*)>(
    &::UnityEngine::UIElements::CollectionViewController::set_itemsSource)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6c53148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CollectionViewController*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::CollectionViewController*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CollectionViewController.SetHierarchyViewModelWithoutNotify
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::CollectionViewController::*)(::Unity::Hierarchy::HierarchyViewModel*)>(
    &::UnityEngine::UIElements::CollectionViewController::SetHierarchyViewModelWithoutNotify)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6c53220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CollectionViewController*>(),
                                                             { "SetHierarchyViewModelWithoutNotify", {}, { ::i2c::type_of<::Unity::Hierarchy::HierarchyViewModel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CollectionViewController.get_view
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::BaseVerticalCollectionView* (::UnityEngine::UIElements::CollectionViewController::*)()>(
    &::UnityEngine::UIElements::CollectionViewController::get_view)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c53280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CollectionViewController*>(), { "get_view", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CollectionViewController.SetView
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::CollectionViewController::*)(::UnityEngine::UIElements::BaseVerticalCollectionView*)>(
    &::UnityEngine::UIElements::CollectionViewController::SetView)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6c53288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CollectionViewController*>(),
                                                                                           { "SetView", {}, { ::i2c::type_of<::UnityEngine::UIElements::BaseVerticalCollectionView*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CollectionViewController.PrepareView
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::CollectionViewController::*)()>(&::UnityEngine::UIElements::CollectionViewController::PrepareView)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6c5333c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CollectionViewController*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::CollectionViewController*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CollectionViewController.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::CollectionViewController::*)()>(&::UnityEngine::UIElements::CollectionViewController::Dispose)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6c53340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CollectionViewController*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::CollectionViewController*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CollectionViewController.GetItemsCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::CollectionViewController::*)()>(&::UnityEngine::UIElements::CollectionViewController::GetItemsCount)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6c5334c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CollectionViewController*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::CollectionViewController*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CollectionViewController.GetItemsMinCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::CollectionViewController::*)()>(&::UnityEngine::UIElements::CollectionViewController::GetItemsMinCount)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6c53400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CollectionViewController*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::CollectionViewController*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CollectionViewController.GetIndexForId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::CollectionViewController::*)(int32_t)>(
    &::UnityEngine::UIElements::CollectionViewController::GetIndexForId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c5340c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CollectionViewController*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::CollectionViewController*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CollectionViewController.GetIdForIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::CollectionViewController::*)(int32_t)>(
    &::UnityEngine::UIElements::CollectionViewController::GetIdForIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c53414;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CollectionViewController*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::CollectionViewController*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CollectionViewController.GetItemForIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::UIElements::CollectionViewController::*)(int32_t)>(
    &::UnityEngine::UIElements::CollectionViewController::GetItemForIndex)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6c5341c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CollectionViewController*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::CollectionViewController*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CollectionViewController.InvokeMakeItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::CollectionViewController::*)(::UnityEngine::UIElements::ReusableCollectionItem*)>(
    &::UnityEngine::UIElements::CollectionViewController::InvokeMakeItem)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6c5356c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CollectionViewController*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::CollectionViewController*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CollectionViewController.SetBindingContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::CollectionViewController::*)(::UnityEngine::UIElements::ReusableCollectionItem*, int32_t)>(
    &::UnityEngine::UIElements::CollectionViewController::SetBindingContext)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6c4c1e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CollectionViewController*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::CollectionViewController*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CollectionViewController.InvokeBindItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::CollectionViewController::*)(::UnityEngine::UIElements::ReusableCollectionItem*, int32_t)>(
    &::UnityEngine::UIElements::CollectionViewController::InvokeBindItem)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6c4c428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CollectionViewController*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::CollectionViewController*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CollectionViewController.InvokeUnbindItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::CollectionViewController::*)(::UnityEngine::UIElements::ReusableCollectionItem*, int32_t)>(
    &::UnityEngine::UIElements::CollectionViewController::InvokeUnbindItem)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6c535a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CollectionViewController*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::CollectionViewController*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CollectionViewController.InvokeDestroyItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::CollectionViewController::*)(::UnityEngine::UIElements::ReusableCollectionItem*)>(
    &::UnityEngine::UIElements::CollectionViewController::InvokeDestroyItem)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6c4f938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CollectionViewController*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::CollectionViewController*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CollectionViewController.PreRefresh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::CollectionViewController::*)()>(&::UnityEngine::UIElements::CollectionViewController::PreRefresh)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6c535dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CollectionViewController*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::CollectionViewController*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CollectionViewController.MakeItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::UIElements::CollectionViewController::*)()>(
    &::UnityEngine::UIElements::CollectionViewController::MakeItem)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CollectionViewController*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::CollectionViewController*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CollectionViewController.BindItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::CollectionViewController::*)(::UnityEngine::UIElements::VisualElement*, int32_t)>(
    &::UnityEngine::UIElements::CollectionViewController::BindItem)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CollectionViewController*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::CollectionViewController*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CollectionViewController.UnbindItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::CollectionViewController::*)(::UnityEngine::UIElements::VisualElement*, int32_t)>(
    &::UnityEngine::UIElements::CollectionViewController::UnbindItem)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CollectionViewController*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::CollectionViewController*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CollectionViewController.DestroyItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::CollectionViewController::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::CollectionViewController::DestroyItem)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CollectionViewController*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::CollectionViewController*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CollectionViewController.RaiseItemsSourceChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::CollectionViewController::*)()>(
    &::UnityEngine::UIElements::CollectionViewController::RaiseItemsSourceChanged)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6c53204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CollectionViewController*>(), { "RaiseItemsSourceChanged", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CollectionViewController.RaiseItemIndexChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::CollectionViewController::*)(int32_t, int32_t)>(
    &::UnityEngine::UIElements::CollectionViewController::RaiseItemIndexChanged)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6c4d244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CollectionViewController*>(),
                                                                                           { "RaiseItemIndexChanged", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CollectionViewController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::CollectionViewController::*)()>(&::UnityEngine::UIElements::CollectionViewController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6c4dc2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CollectionViewController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::BaseVerticalCollectionView*& UnityEngine::UIElements::CollectionViewController::__cordl_internal_get_m_View() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_View;
}
constexpr ::UnityEngine::UIElements::BaseVerticalCollectionView* const& UnityEngine::UIElements::CollectionViewController::__cordl_internal_get_m_View() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_View;
}
constexpr void UnityEngine::UIElements::CollectionViewController::__cordl_internal_set_m_View(::UnityEngine::UIElements::BaseVerticalCollectionView* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_View = value;
}
constexpr ::System::Collections::IList*& UnityEngine::UIElements::CollectionViewController::__cordl_internal_get_m_ItemsSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ItemsSource;
}
constexpr ::System::Collections::IList* const& UnityEngine::UIElements::CollectionViewController::__cordl_internal_get_m_ItemsSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ItemsSource;
}
constexpr void UnityEngine::UIElements::CollectionViewController::__cordl_internal_set_m_ItemsSource(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ItemsSource = value;
}
constexpr ::System::Action*& UnityEngine::UIElements::CollectionViewController::__cordl_internal_get_itemsSourceChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemsSourceChanged;
}
constexpr ::System::Action* const& UnityEngine::UIElements::CollectionViewController::__cordl_internal_get_itemsSourceChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemsSourceChanged;
}
constexpr void UnityEngine::UIElements::CollectionViewController::__cordl_internal_set_itemsSourceChanged(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___itemsSourceChanged = value;
}
constexpr ::System::Action_2<int32_t, int32_t>*& UnityEngine::UIElements::CollectionViewController::__cordl_internal_get_itemIndexChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemIndexChanged;
}
constexpr ::System::Action_2<int32_t, int32_t>* const& UnityEngine::UIElements::CollectionViewController::__cordl_internal_get_itemIndexChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemIndexChanged;
}
constexpr void UnityEngine::UIElements::CollectionViewController::__cordl_internal_set_itemIndexChanged(::System::Action_2<int32_t, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___itemIndexChanged = value;
}
inline void UnityEngine::UIElements::CollectionViewController::add_itemsSourceChanged(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CollectionViewController*>(), { "add_itemsSourceChanged", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::CollectionViewController::remove_itemsSourceChanged(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CollectionViewController*>(), { "remove_itemsSourceChanged", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::CollectionViewController::add_itemIndexChanged(::System::Action_2<int32_t, int32_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CollectionViewController*>(),
                                                                                         { "add_itemIndexChanged", {}, { ::i2c::type_of<::System::Action_2<int32_t, int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::CollectionViewController::remove_itemIndexChanged(::System::Action_2<int32_t, int32_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CollectionViewController*>(),
                                                                                         { "remove_itemIndexChanged", {}, { ::i2c::type_of<::System::Action_2<int32_t, int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::IList* UnityEngine::UIElements::CollectionViewController::get_itemsSource() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::CollectionViewController*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IList*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::CollectionViewController::set_itemsSource(::System::Collections::IList* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::CollectionViewController*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::CollectionViewController::SetHierarchyViewModelWithoutNotify(::Unity::Hierarchy::HierarchyViewModel* source) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CollectionViewController*>(),
                                                                                         { "SetHierarchyViewModelWithoutNotify", {}, { ::i2c::type_of<::Unity::Hierarchy::HierarchyViewModel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source);
}
inline ::UnityEngine::UIElements::BaseVerticalCollectionView* UnityEngine::UIElements::CollectionViewController::get_view() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CollectionViewController*>(), { "get_view", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::BaseVerticalCollectionView*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::CollectionViewController::SetView(::UnityEngine::UIElements::BaseVerticalCollectionView* collectionView) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CollectionViewController*>(),
                                                                                         { "SetView", {}, { ::i2c::type_of<::UnityEngine::UIElements::BaseVerticalCollectionView*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collectionView);
}
inline void UnityEngine::UIElements::CollectionViewController::PrepareView() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::CollectionViewController*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::CollectionViewController::Dispose() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::CollectionViewController*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::UIElements::CollectionViewController::GetItemsCount() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::CollectionViewController*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::UIElements::CollectionViewController::GetItemsMinCount() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::CollectionViewController*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::UIElements::CollectionViewController::GetIndexForId(int32_t id) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::CollectionViewController*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, id);
}
inline int32_t UnityEngine::UIElements::CollectionViewController::GetIdForIndex(int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::CollectionViewController*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, index);
}
inline ::System::Object* UnityEngine::UIElements::CollectionViewController::GetItemForIndex(int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::CollectionViewController*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, index);
}
inline void UnityEngine::UIElements::CollectionViewController::InvokeMakeItem(::UnityEngine::UIElements::ReusableCollectionItem* reusableItem) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::CollectionViewController*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reusableItem);
}
inline void UnityEngine::UIElements::CollectionViewController::SetBindingContext(::UnityEngine::UIElements::ReusableCollectionItem* reusableItem, int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::CollectionViewController*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reusableItem, index);
}
inline void UnityEngine::UIElements::CollectionViewController::InvokeBindItem(::UnityEngine::UIElements::ReusableCollectionItem* reusableItem, int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::CollectionViewController*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reusableItem, index);
}
inline void UnityEngine::UIElements::CollectionViewController::InvokeUnbindItem(::UnityEngine::UIElements::ReusableCollectionItem* reusableItem, int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::CollectionViewController*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reusableItem, index);
}
inline void UnityEngine::UIElements::CollectionViewController::InvokeDestroyItem(::UnityEngine::UIElements::ReusableCollectionItem* reusableItem) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::CollectionViewController*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reusableItem);
}
inline void UnityEngine::UIElements::CollectionViewController::PreRefresh() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::CollectionViewController*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::CollectionViewController::MakeItem() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::CollectionViewController*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::CollectionViewController::BindItem(::UnityEngine::UIElements::VisualElement* element, int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::CollectionViewController*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, element, index);
}
inline void UnityEngine::UIElements::CollectionViewController::UnbindItem(::UnityEngine::UIElements::VisualElement* element, int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::CollectionViewController*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, element, index);
}
inline void UnityEngine::UIElements::CollectionViewController::DestroyItem(::UnityEngine::UIElements::VisualElement* element) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::CollectionViewController*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, element);
}
inline void UnityEngine::UIElements::CollectionViewController::RaiseItemsSourceChanged() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CollectionViewController*>(), { "RaiseItemsSourceChanged", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::CollectionViewController::RaiseItemIndexChanged(int32_t srcIndex, int32_t dstIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CollectionViewController*>(),
                                                                                         { "RaiseItemIndexChanged", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, srcIndex, dstIndex);
}
inline void UnityEngine::UIElements::CollectionViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CollectionViewController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::CollectionViewController* UnityEngine::UIElements::CollectionViewController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::CollectionViewController*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::UIElements::CollectionViewController::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::UIElements::CollectionViewController::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::CollectionViewController::CollectionViewController() {}
