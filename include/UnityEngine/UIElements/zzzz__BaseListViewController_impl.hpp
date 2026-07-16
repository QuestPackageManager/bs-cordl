#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BaseListViewController.hpp"
#include "UnityEngine/UIElements/zzzz__CollectionViewController_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BaseListViewController_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseListView_def.hpp"
#include "UnityEngine/UIElements/zzzz__ReusableCollectionItem_def.hpp"
#include "UnityEngine/UIElements/zzzz__ReusableListViewItem_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListViewController.add_itemsSourceSizeChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseListViewController::*)(::System::Action*)>(
    &::UnityEngine::UIElements::BaseListViewController::add_itemsSourceSizeChanged)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6c48108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListViewController*>(), { "add_itemsSourceSizeChanged", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListViewController.remove_itemsSourceSizeChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseListViewController::*)(::System::Action*)>(
    &::UnityEngine::UIElements::BaseListViewController::remove_itemsSourceSizeChanged)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6c481b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListViewController*>(), { "remove_itemsSourceSizeChanged", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListViewController.add_itemsAdded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseListViewController::*)(::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*)>(
    &::UnityEngine::UIElements::BaseListViewController::add_itemsAdded)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6c48260;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListViewController*>(),
                                                             { "add_itemsAdded", {}, { ::i2c::type_of<::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListViewController.remove_itemsAdded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseListViewController::*)(::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*)>(
    &::UnityEngine::UIElements::BaseListViewController::remove_itemsAdded)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6c48320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListViewController*>(),
                                                             { "remove_itemsAdded", {}, { ::i2c::type_of<::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListViewController.add_itemsRemoved
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseListViewController::*)(::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*)>(
    &::UnityEngine::UIElements::BaseListViewController::add_itemsRemoved)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6c483e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListViewController*>(),
                                                             { "add_itemsRemoved", {}, { ::i2c::type_of<::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListViewController.remove_itemsRemoved
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseListViewController::*)(::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*)>(
    &::UnityEngine::UIElements::BaseListViewController::remove_itemsRemoved)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6c484a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListViewController*>(),
                                                             { "remove_itemsRemoved", {}, { ::i2c::type_of<::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListViewController.get_baseListView
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::BaseListView* (::UnityEngine::UIElements::BaseListViewController::*)()>(
    &::UnityEngine::UIElements::BaseListViewController::get_baseListView)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c48560;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListViewController*>(), { "get_baseListView", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListViewController.InvokeMakeItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseListViewController::*)(::UnityEngine::UIElements::ReusableCollectionItem*)>(
    &::UnityEngine::UIElements::BaseListViewController::InvokeMakeItem)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6c485e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListViewController*>(), { ::i2c::class_of<::UnityEngine::UIElements::BaseListViewController*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListViewController.PostInitRegistration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseListViewController::*)(::UnityEngine::UIElements::ReusableListViewItem*)>(
    &::UnityEngine::UIElements::BaseListViewController::PostInitRegistration)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x6c48798;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListViewController*>(),
                                                                                           { "PostInitRegistration", {}, { ::i2c::type_of<::UnityEngine::UIElements::ReusableListViewItem*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListViewController.SetBindingContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseListViewController::*)(::UnityEngine::UIElements::ReusableCollectionItem*, int32_t)>(
    &::UnityEngine::UIElements::BaseListViewController::SetBindingContext)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6c48b68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListViewController*>(), { ::i2c::class_of<::UnityEngine::UIElements::BaseListViewController*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListViewController.InvokeBindItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseListViewController::*)(::UnityEngine::UIElements::ReusableCollectionItem*, int32_t)>(
    &::UnityEngine::UIElements::BaseListViewController::InvokeBindItem)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6c48c6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListViewController*>(), { ::i2c::class_of<::UnityEngine::UIElements::BaseListViewController*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListViewController.NeedsDragHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::BaseListViewController::*)(int32_t)>(&::UnityEngine::UIElements::BaseListViewController::NeedsDragHandle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c48f90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListViewController*>(), { ::i2c::class_of<::UnityEngine::UIElements::BaseListViewController*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListViewController.AddItems
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseListViewController::*)(int32_t)>(&::UnityEngine::UIElements::BaseListViewController::AddItems)> {
  constexpr static std::size_t size = 0x6cc;
  constexpr static std::size_t addrs = 0x6c48f98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListViewController*>(), { ::i2c::class_of<::UnityEngine::UIElements::BaseListViewController*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListViewController.Move
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseListViewController::*)(int32_t, int32_t)>(&::UnityEngine::UIElements::BaseListViewController::Move)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x6c49900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListViewController*>(), { ::i2c::class_of<::UnityEngine::UIElements::BaseListViewController*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListViewController.RemoveItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseListViewController::*)(int32_t)>(&::UnityEngine::UIElements::BaseListViewController::RemoveItem)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x6c49cd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListViewController*>(), { ::i2c::class_of<::UnityEngine::UIElements::BaseListViewController*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListViewController.RemoveItems
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseListViewController::*)(::System::Collections::Generic::List_1<int32_t>*)>(
    &::UnityEngine::UIElements::BaseListViewController::RemoveItems)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x6c49e84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListViewController*>(), { ::i2c::class_of<::UnityEngine::UIElements::BaseListViewController*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListViewController.RemoveItems
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseListViewController::*)(int32_t)>(&::UnityEngine::UIElements::BaseListViewController::RemoveItems)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x6c4a2fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListViewController*>(), { ::i2c::class_of<::UnityEngine::UIElements::BaseListViewController*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListViewController.ClearItems
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseListViewController::*)()>(&::UnityEngine::UIElements::BaseListViewController::ClearItems)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x6c4a4ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListViewController*>(), { ::i2c::class_of<::UnityEngine::UIElements::BaseListViewController*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListViewController.RaiseOnSizeChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseListViewController::*)()>(&::UnityEngine::UIElements::BaseListViewController::RaiseOnSizeChanged)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6c498e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListViewController*>(), { "RaiseOnSizeChanged", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListViewController.RaiseItemsAdded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseListViewController::*)(::System::Collections::Generic::IEnumerable_1<int32_t>*)>(
    &::UnityEngine::UIElements::BaseListViewController::RaiseItemsAdded)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6c498c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListViewController*>(),
                                                                                           { "RaiseItemsAdded", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListViewController.RaiseItemsRemoved
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseListViewController::*)(::System::Collections::Generic::IEnumerable_1<int32_t>*)>(
    &::UnityEngine::UIElements::BaseListViewController::RaiseItemsRemoved)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6c4a11c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListViewController*>(),
                                                             { "RaiseItemsRemoved", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListViewController.AddToArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Array* (*)(::System::Array*, int32_t)>(&::UnityEngine::UIElements::BaseListViewController::AddToArray)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6c497d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListViewController*>(),
                                                                                           { "AddToArray", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListViewController.RemoveFromArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Array* (*)(::System::Array*, ::System::Collections::Generic::List_1<int32_t>*)>(
    &::UnityEngine::UIElements::BaseListViewController::RemoveFromArray)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x6c4a138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListViewController*>(),
                                                             { "RemoveFromArray", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListViewController.Swap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseListViewController::*)(int32_t, int32_t)>(&::UnityEngine::UIElements::BaseListViewController::Swap)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x6c49a78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListViewController*>(), { "Swap", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListViewController.EnsureItemSourceCanBeResized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseListViewController::*)()>(
    &::UnityEngine::UIElements::BaseListViewController::EnsureItemSourceCanBeResized)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x6c49664;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListViewController*>(), { "EnsureItemSourceCanBeResized", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListViewController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseListViewController::*)()>(&::UnityEngine::UIElements::BaseListViewController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6c4a6a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListViewController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListViewController._AddItems_g__IsGenericList_19_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::UnityEngine::UIElements::BaseListViewController::_AddItems_g__IsGenericList_19_0)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6c4a6a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListViewController*>(), { "<AddItems>g__IsGenericList|19_0", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Action*& UnityEngine::UIElements::BaseListViewController::__cordl_internal_get_itemsSourceSizeChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemsSourceSizeChanged;
}
constexpr ::System::Action* const& UnityEngine::UIElements::BaseListViewController::__cordl_internal_get_itemsSourceSizeChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemsSourceSizeChanged;
}
constexpr void UnityEngine::UIElements::BaseListViewController::__cordl_internal_set_itemsSourceSizeChanged(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___itemsSourceSizeChanged = value;
}
constexpr ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*& UnityEngine::UIElements::BaseListViewController::__cordl_internal_get_itemsAdded() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemsAdded;
}
constexpr ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* const& UnityEngine::UIElements::BaseListViewController::__cordl_internal_get_itemsAdded() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemsAdded;
}
constexpr void UnityEngine::UIElements::BaseListViewController::__cordl_internal_set_itemsAdded(::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___itemsAdded = value;
}
constexpr ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*& UnityEngine::UIElements::BaseListViewController::__cordl_internal_get_itemsRemoved() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemsRemoved;
}
constexpr ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* const& UnityEngine::UIElements::BaseListViewController::__cordl_internal_get_itemsRemoved() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemsRemoved;
}
constexpr void UnityEngine::UIElements::BaseListViewController::__cordl_internal_set_itemsRemoved(::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___itemsRemoved = value;
}
inline void UnityEngine::UIElements::BaseListViewController::add_itemsSourceSizeChanged(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListViewController*>(), { "add_itemsSourceSizeChanged", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::BaseListViewController::remove_itemsSourceSizeChanged(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListViewController*>(), { "remove_itemsSourceSizeChanged", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::BaseListViewController::add_itemsAdded(::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListViewController*>(),
                                                           { "add_itemsAdded", {}, { ::i2c::type_of<::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::BaseListViewController::remove_itemsAdded(::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListViewController*>(),
                                                           { "remove_itemsAdded", {}, { ::i2c::type_of<::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::BaseListViewController::add_itemsRemoved(::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListViewController*>(),
                                                           { "add_itemsRemoved", {}, { ::i2c::type_of<::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::BaseListViewController::remove_itemsRemoved(::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListViewController*>(),
                                                           { "remove_itemsRemoved", {}, { ::i2c::type_of<::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::BaseListView* UnityEngine::UIElements::BaseListViewController::get_baseListView() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListViewController*>(), { "get_baseListView", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::BaseListView*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseListViewController::InvokeMakeItem(::UnityEngine::UIElements::ReusableCollectionItem* reusableItem) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseListViewController*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reusableItem);
}
inline void UnityEngine::UIElements::BaseListViewController::PostInitRegistration(::UnityEngine::UIElements::ReusableListViewItem* listItem) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListViewController*>(),
                                                                                         { "PostInitRegistration", {}, { ::i2c::type_of<::UnityEngine::UIElements::ReusableListViewItem*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, listItem);
}
inline void UnityEngine::UIElements::BaseListViewController::SetBindingContext(::UnityEngine::UIElements::ReusableCollectionItem* reusableItem, int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseListViewController*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reusableItem, index);
}
inline void UnityEngine::UIElements::BaseListViewController::InvokeBindItem(::UnityEngine::UIElements::ReusableCollectionItem* reusableItem, int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseListViewController*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reusableItem, index);
}
inline bool UnityEngine::UIElements::BaseListViewController::NeedsDragHandle(int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseListViewController*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, index);
}
inline void UnityEngine::UIElements::BaseListViewController::AddItems(int32_t itemCount) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseListViewController*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, itemCount);
}
inline void UnityEngine::UIElements::BaseListViewController::Move(int32_t index, int32_t newIndex) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseListViewController*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, newIndex);
}
inline void UnityEngine::UIElements::BaseListViewController::RemoveItem(int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseListViewController*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void UnityEngine::UIElements::BaseListViewController::RemoveItems(::System::Collections::Generic::List_1<int32_t>* indices) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseListViewController*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, indices);
}
inline void UnityEngine::UIElements::BaseListViewController::RemoveItems(int32_t itemCount) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseListViewController*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, itemCount);
}
inline void UnityEngine::UIElements::BaseListViewController::ClearItems() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseListViewController*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseListViewController::RaiseOnSizeChanged() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListViewController*>(), { "RaiseOnSizeChanged", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseListViewController::RaiseItemsAdded(::System::Collections::Generic::IEnumerable_1<int32_t>* indices) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListViewController*>(),
                                                                                         { "RaiseItemsAdded", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, indices);
}
inline void UnityEngine::UIElements::BaseListViewController::RaiseItemsRemoved(::System::Collections::Generic::IEnumerable_1<int32_t>* indices) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListViewController*>(),
                                                                                         { "RaiseItemsRemoved", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, indices);
}
inline ::System::Array* UnityEngine::UIElements::BaseListViewController::AddToArray(::System::Array* source, int32_t itemCount) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListViewController*>(),
                                                                                         { "AddToArray", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Array*>(nullptr, ___internal_method, source, itemCount);
}
inline ::System::Array* UnityEngine::UIElements::BaseListViewController::RemoveFromArray(::System::Array* source, ::System::Collections::Generic::List_1<int32_t>* indicesToRemove) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListViewController*>(),
                                                           { "RemoveFromArray", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Array*>(nullptr, ___internal_method, source, indicesToRemove);
}
inline void UnityEngine::UIElements::BaseListViewController::Swap(int32_t lhs, int32_t rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListViewController*>(), { "Swap", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lhs, rhs);
}
inline void UnityEngine::UIElements::BaseListViewController::EnsureItemSourceCanBeResized() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListViewController*>(), { "EnsureItemSourceCanBeResized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseListViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListViewController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::BaseListViewController::_AddItems_g__IsGenericList_19_0(::System::Type* t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListViewController*>(), { "<AddItems>g__IsGenericList|19_0", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, t);
}
inline ::UnityEngine::UIElements::BaseListViewController* UnityEngine::UIElements::BaseListViewController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::BaseListViewController*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::BaseListViewController::BaseListViewController() {}
