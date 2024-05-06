#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BaseVerticalCollectionView.hpp"
#include "UnityEngine/UIElements/zzzz__AlternatingRowBackground_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BindableElement_impl.hpp"
#include "UnityEngine/UIElements/zzzz__CollectionVirtualizationMethod_impl.hpp"
#include "UnityEngine/UIElements/zzzz__CustomStyleProperty_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__SelectionType_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVerticalCollectionView_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__AlternatingRowBackground_def.hpp"
#include "UnityEngine/UIElements/zzzz__AttachToPanelEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVerticalCollectionView_def.hpp"
#include "UnityEngine/UIElements/zzzz__CollectionViewController_def.hpp"
#include "UnityEngine/UIElements/zzzz__CollectionVirtualizationController_def.hpp"
#include "UnityEngine/UIElements/zzzz__CollectionVirtualizationMethod_def.hpp"
#include "UnityEngine/UIElements/zzzz__CustomStyleResolvedEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__DetachFromPanelEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__GeometryChangedEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__ICollectionDragAndDropController_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPointerEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__KeyboardNavigationManipulator_def.hpp"
#include "UnityEngine/UIElements/zzzz__KeyboardNavigationOperation_def.hpp"
#include "UnityEngine/UIElements/zzzz__ListViewDragger_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerCancelEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerDownEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerMoveEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerUpEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__ReusableCollectionItem_def.hpp"
#include "UnityEngine/UIElements/zzzz__ScrollView_def.hpp"
#include "UnityEngine/UIElements/zzzz__SelectionType_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
// Ctor Parameters [CppParam { name: "__4__this", ty: "::UnityEngine::UIElements::BaseVerticalCollectionView*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "shiftKey", ty: "bool",
// modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::__BaseVerticalCollectionView____c__DisplayClass164_0::__BaseVerticalCollectionView____c__DisplayClass164_0(
    ::UnityEngine::UIElements::BaseVerticalCollectionView* __4__this, bool shiftKey) noexcept {
  this->__4__this = __4__this;
  this->shiftKey = shiftKey;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__BaseVerticalCollectionView____c__DisplayClass164_0::__BaseVerticalCollectionView____c__DisplayClass164_0() {}
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.add_onItemsChosen
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(
    ::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*)>(&::UnityEngine::UIElements::BaseVerticalCollectionView::add_onItemsChosen)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x3594884;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "add_onItemsChosen", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.remove_onItemsChosen
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(
    ::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*)>(&::UnityEngine::UIElements::BaseVerticalCollectionView::remove_onItemsChosen)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x3594938;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "remove_onItemsChosen", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.add_onSelectionChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(
    ::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*)>(&::UnityEngine::UIElements::BaseVerticalCollectionView::add_onSelectionChange)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x35949ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "add_onSelectionChange", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.remove_onSelectionChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(
    ::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*)>(&::UnityEngine::UIElements::BaseVerticalCollectionView::remove_onSelectionChange)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x3594aa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "remove_onSelectionChange", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.get_getItemId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Func_2<int32_t, int32_t>* (::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(
    &::UnityEngine::UIElements::BaseVerticalCollectionView::get_getItemId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3594b54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                                                               "get_getItemId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.set_getItemId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(::System::Func_2<int32_t, int32_t>*)>(
    &::UnityEngine::UIElements::BaseVerticalCollectionView::set_getItemId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3594b5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "set_getItemId", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<int32_t, int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.get_itemsSource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IList* (::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(
    &::UnityEngine::UIElements::BaseVerticalCollectionView::get_itemsSource)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3594bd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                                                               "get_itemsSource", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.set_itemsSource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(::System::Collections::IList*)>(
    &::UnityEngine::UIElements::BaseVerticalCollectionView::set_itemsSource)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3594be8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "set_itemsSource", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.get_sourceIncludesArraySize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(
    &::UnityEngine::UIElements::BaseVerticalCollectionView::get_sourceIncludesArraySize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3594c64;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), 100));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.get_makeItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Func_1<::UnityEngine::UIElements::VisualElement*>* (
    ::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&::UnityEngine::UIElements::BaseVerticalCollectionView::get_makeItem)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3594c6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                                                               "get_makeItem", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.set_makeItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(
    ::System::Func_1<::UnityEngine::UIElements::VisualElement*>*)>(&::UnityEngine::UIElements::BaseVerticalCollectionView::set_makeItem)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3594c74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "set_makeItem", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<::UnityEngine::UIElements::VisualElement*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.get_bindItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* (
    ::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&::UnityEngine::UIElements::BaseVerticalCollectionView::get_bindItem)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3594ce8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                                                               "get_bindItem", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.set_bindItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(
    ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>*)>(&::UnityEngine::UIElements::BaseVerticalCollectionView::set_bindItem)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3594cf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "set_bindItem", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.get_unbindItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* (
    ::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&::UnityEngine::UIElements::BaseVerticalCollectionView::get_unbindItem)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3594cf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                                                               "get_unbindItem", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.set_unbindItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(
    ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>*)>(&::UnityEngine::UIElements::BaseVerticalCollectionView::set_unbindItem)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3594d00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "set_unbindItem", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.get_destroyItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Action_1<::UnityEngine::UIElements::VisualElement*>* (
    ::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&::UnityEngine::UIElements::BaseVerticalCollectionView::get_destroyItem)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3594d08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                                                               "get_destroyItem", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.set_destroyItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(
    ::System::Action_1<::UnityEngine::UIElements::VisualElement*>*)>(&::UnityEngine::UIElements::BaseVerticalCollectionView::set_destroyItem)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3594d10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "set_destroyItem", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::UIElements::VisualElement*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.get_contentContainer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(
    &::UnityEngine::UIElements::BaseVerticalCollectionView::get_contentContainer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3594d18;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), 95));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.get_selectionType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::SelectionType (::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(
    &::UnityEngine::UIElements::BaseVerticalCollectionView::get_selectionType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3594d20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                                                               "get_selectionType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.set_selectionType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(::UnityEngine::UIElements::SelectionType)>(
    &::UnityEngine::UIElements::BaseVerticalCollectionView::set_selectionType)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x3594d28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "set_selectionType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::SelectionType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.get_selectedIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(
    &::UnityEngine::UIElements::BaseVerticalCollectionView::get_selectedIndex)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3594ee8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                                                               "get_selectedIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.set_selectedIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(int32_t)>(
    &::UnityEngine::UIElements::BaseVerticalCollectionView::set_selectedIndex)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3594f5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "set_selectedIndex",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.get_selectedIndices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<int32_t>* (::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(
    &::UnityEngine::UIElements::BaseVerticalCollectionView::get_selectedIndices)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3594f60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                                                               "get_selectedIndices", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.get_activeItems
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ReusableCollectionItem*>* (
    ::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&::UnityEngine::UIElements::BaseVerticalCollectionView::get_activeItems)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3594f68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                                                               "get_activeItems", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.get_scrollView
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::ScrollView* (::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(
    &::UnityEngine::UIElements::BaseVerticalCollectionView::get_scrollView)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3594fe0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                                                               "get_scrollView", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.get_dragger
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::ListViewDragger* (::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(
    &::UnityEngine::UIElements::BaseVerticalCollectionView::get_dragger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3594fe8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                                                               "get_dragger", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.get_viewController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::CollectionViewController* (::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(
    &::UnityEngine::UIElements::BaseVerticalCollectionView::get_viewController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3594ff0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                                                               "get_viewController", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.get_virtualizationController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::CollectionVirtualizationController* (
    ::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&::UnityEngine::UIElements::BaseVerticalCollectionView::get_virtualizationController)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x3594ff8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                                                               "get_virtualizationController", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.ResolveItemHeight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(float_t)>(
    &::UnityEngine::UIElements::BaseVerticalCollectionView::ResolveItemHeight)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x3595058;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "ResolveItemHeight",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.set_showBorder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(bool)>(
    &::UnityEngine::UIElements::BaseVerticalCollectionView::set_showBorder)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3595110;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "set_showBorder",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.get_reorderable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(
    &::UnityEngine::UIElements::BaseVerticalCollectionView::get_reorderable)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x3595190;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                                                               "get_reorderable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.set_reorderable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(bool)>(
    &::UnityEngine::UIElements::BaseVerticalCollectionView::set_reorderable)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x3595280;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "set_reorderable",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.set_horizontalScrollingEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(bool)>(
    &::UnityEngine::UIElements::BaseVerticalCollectionView::set_horizontalScrollingEnabled)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x3595440;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "set_horizontalScrollingEnabled",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.get_showAlternatingRowBackgrounds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::AlternatingRowBackground (::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(
    &::UnityEngine::UIElements::BaseVerticalCollectionView::get_showAlternatingRowBackgrounds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3595488;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                                 "get_showAlternatingRowBackgrounds", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.set_showAlternatingRowBackgrounds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(::UnityEngine::UIElements::AlternatingRowBackground)>(
    &::UnityEngine::UIElements::BaseVerticalCollectionView::set_showAlternatingRowBackgrounds)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3595490;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "set_showAlternatingRowBackgrounds",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::AlternatingRowBackground>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.get_virtualizationMethod
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::CollectionVirtualizationMethod (
    ::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&::UnityEngine::UIElements::BaseVerticalCollectionView::get_virtualizationMethod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35954a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                                                               "get_virtualizationMethod", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.set_virtualizationMethod
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(
    ::UnityEngine::UIElements::CollectionVirtualizationMethod)>(&::UnityEngine::UIElements::BaseVerticalCollectionView::set_virtualizationMethod)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x35954b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "set_virtualizationMethod", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CollectionVirtualizationMethod>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.get_fixedItemHeight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(
    &::UnityEngine::UIElements::BaseVerticalCollectionView::get_fixedItemHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35954ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                                                               "get_fixedItemHeight", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.set_fixedItemHeight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(float_t)>(
    &::UnityEngine::UIElements::BaseVerticalCollectionView::set_fixedItemHeight)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x35954f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "set_fixedItemHeight",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.get_lastHeight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(
    &::UnityEngine::UIElements::BaseVerticalCollectionView::get_lastHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35955f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                                                               "get_lastHeight", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.CreateVirtualizationController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(
    &::UnityEngine::UIElements::BaseVerticalCollectionView::CreateVirtualizationController)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x35955f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), 101));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.GetOrCreateVirtualizationController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::CollectionVirtualizationController* (
    ::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&::UnityEngine::UIElements::BaseVerticalCollectionView::GetOrCreateVirtualizationController)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x3595028;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                                 "GetOrCreateVirtualizationController", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.GetOrCreateViewController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::CollectionViewController* (::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(
    &::UnityEngine::UIElements::BaseVerticalCollectionView::GetOrCreateViewController)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x3594c34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                                                               "GetOrCreateViewController", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.CreateViewController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(
    &::UnityEngine::UIElements::BaseVerticalCollectionView::CreateViewController)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x3595640;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), 102));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.SetViewController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(
    ::UnityEngine::UIElements::CollectionViewController*)>(&::UnityEngine::UIElements::BaseVerticalCollectionView::SetViewController)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x35956a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "SetViewController", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CollectionViewController*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.CreateDragger
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::ListViewDragger* (::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(
    &::UnityEngine::UIElements::BaseVerticalCollectionView::CreateDragger)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x3595734;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), 103));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.InitializeDragAndDropController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(
    &::UnityEngine::UIElements::BaseVerticalCollectionView::InitializeDragAndDropController)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x35953c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                                 "InitializeDragAndDropController", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.CreateDragAndDropController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::ICollectionDragAndDropController* (
    ::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&::UnityEngine::UIElements::BaseVerticalCollectionView::CreateDragAndDropController)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), 104));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(
    &::UnityEngine::UIElements::BaseVerticalCollectionView::_ctor)> {
  constexpr static std::size_t size = 0x5a0;
  constexpr static std::size_t addrs = 0x3595798;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.HasValidDataAndBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(
    &::UnityEngine::UIElements::BaseVerticalCollectionView::HasValidDataAndBindings)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3595d38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                                                               "HasValidDataAndBindings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.OnItemIndexChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(int32_t, int32_t)>(
    &::UnityEngine::UIElements::BaseVerticalCollectionView::OnItemIndexChanged)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x3595d70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "OnItemIndexChanged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.OnItemsSourceChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(
    &::UnityEngine::UIElements::BaseVerticalCollectionView::OnItemsSourceChanged)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3595f54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                                                               "OnItemsSourceChanged", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.RefreshItems
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(
    &::UnityEngine::UIElements::BaseVerticalCollectionView::RefreshItems)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3594b64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                                                               "RefreshItems", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.Rebuild
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(
    &::UnityEngine::UIElements::BaseVerticalCollectionView::Rebuild)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3594c7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                                                               "Rebuild", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.RefreshSelection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(
    &::UnityEngine::UIElements::BaseVerticalCollectionView::RefreshSelection)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x3595fcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                                                               "RefreshSelection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.PostRefresh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(
    &::UnityEngine::UIElements::BaseVerticalCollectionView::PostRefresh)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x3596264;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), 105));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.ScrollToItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(int32_t)>(
    &::UnityEngine::UIElements::BaseVerticalCollectionView::ScrollToItem)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3596430;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "ScrollToItem",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.OnScroll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(::UnityEngine::Vector2)>(
    &::UnityEngine::UIElements::BaseVerticalCollectionView::OnScroll)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x35964bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "OnScroll", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.Resize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(::UnityEngine::Vector2, int32_t)>(
    &::UnityEngine::UIElements::BaseVerticalCollectionView::Resize)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3596390;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                                                               "Resize", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.OnAttachToPanel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(::UnityEngine::UIElements::AttachToPanelEvent*)>(
    &::UnityEngine::UIElements::BaseVerticalCollectionView::OnAttachToPanel)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x3596550;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "OnAttachToPanel", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::AttachToPanelEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.OnDetachFromPanel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(::UnityEngine::UIElements::DetachFromPanelEvent*)>(
    &::UnityEngine::UIElements::BaseVerticalCollectionView::OnDetachFromPanel)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x35968ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "OnDetachFromPanel", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DetachFromPanelEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.Apply
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(
    ::UnityEngine::UIElements::KeyboardNavigationOperation, bool)>(&::UnityEngine::UIElements::BaseVerticalCollectionView::Apply)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x3596b74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "Apply", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::KeyboardNavigationOperation>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.Apply
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(
    ::UnityEngine::UIElements::KeyboardNavigationOperation, ::UnityEngine::UIElements::EventBase*)>(&::UnityEngine::UIElements::BaseVerticalCollectionView::Apply)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x3597640;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "Apply", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::KeyboardNavigationOperation>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.OnPointerMove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(::UnityEngine::UIElements::PointerMoveEvent*)>(
    &::UnityEngine::UIElements::BaseVerticalCollectionView::OnPointerMove)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x359774c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "OnPointerMove", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerMoveEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.OnPointerDown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(::UnityEngine::UIElements::PointerDownEvent*)>(
    &::UnityEngine::UIElements::BaseVerticalCollectionView::OnPointerDown)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x35981c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "OnPointerDown", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerDownEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.OnPointerCancel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(::UnityEngine::UIElements::PointerCancelEvent*)>(
    &::UnityEngine::UIElements::BaseVerticalCollectionView::OnPointerCancel)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x359827c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "OnPointerCancel", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerCancelEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.OnPointerUp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(::UnityEngine::UIElements::PointerUpEvent*)>(
    &::UnityEngine::UIElements::BaseVerticalCollectionView::OnPointerUp)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x3598308;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "OnPointerUp", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerUpEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.ProcessPointerDown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(::UnityEngine::UIElements::IPointerEvent*)>(
    &::UnityEngine::UIElements::BaseVerticalCollectionView::ProcessPointerDown)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0x3597dc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "ProcessPointerDown", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IPointerEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.ProcessPointerUp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(::UnityEngine::UIElements::IPointerEvent*)>(
    &::UnityEngine::UIElements::BaseVerticalCollectionView::ProcessPointerUp)> {
  constexpr static std::size_t size = 0x5f4;
  constexpr static std::size_t addrs = 0x35977d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "ProcessPointerUp", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IPointerEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.DoSelect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(::UnityEngine::Vector2, int32_t, bool, bool)>(
    &::UnityEngine::UIElements::BaseVerticalCollectionView::DoSelect)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x35983c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "DoSelect", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.DoRangeSelection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(int32_t)>(
    &::UnityEngine::UIElements::BaseVerticalCollectionView::DoRangeSelection)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x359873c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "DoRangeSelection",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.ProcessSingleClick
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(int32_t)>(
    &::UnityEngine::UIElements::BaseVerticalCollectionView::ProcessSingleClick)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3598660;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "ProcessSingleClick",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.SelectAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(
    &::UnityEngine::UIElements::BaseVerticalCollectionView::SelectAll)> {
  constexpr static std::size_t size = 0x5e4;
  constexpr static std::size_t addrs = 0x3596f28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                                                               "SelectAll", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.AddToSelection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(int32_t)>(
    &::UnityEngine::UIElements::BaseVerticalCollectionView::AddToSelection)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x35986c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "AddToSelection",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.AddToSelection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(::System::Collections::Generic::IList_1<int32_t>*)>(
    &::UnityEngine::UIElements::BaseVerticalCollectionView::AddToSelection)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x3598c38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "AddToSelection", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.AddToSelectionWithoutValidation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(int32_t)>(
    &::UnityEngine::UIElements::BaseVerticalCollectionView::AddToSelectionWithoutValidation)> {
  constexpr static std::size_t size = 0x4e0;
  constexpr static std::size_t addrs = 0x3599044;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "AddToSelectionWithoutValidation",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.RemoveFromSelection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(int32_t)>(
    &::UnityEngine::UIElements::BaseVerticalCollectionView::RemoveFromSelection)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3598664;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "RemoveFromSelection",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.RemoveFromSelectionWithoutValidation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(int32_t)>(
    &::UnityEngine::UIElements::BaseVerticalCollectionView::RemoveFromSelectionWithoutValidation)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0x3599524;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "RemoveFromSelectionWithoutValidation",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.SetSelection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(int32_t)>(
    &::UnityEngine::UIElements::BaseVerticalCollectionView::SetSelection)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x3594e60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "SetSelection",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.SetSelection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(
    ::System::Collections::Generic::IEnumerable_1<int32_t>*)>(&::UnityEngine::UIElements::BaseVerticalCollectionView::SetSelection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3599930;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "SetSelection", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.SetSelectionWithoutNotify
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(
    ::System::Collections::Generic::IEnumerable_1<int32_t>*)>(&::UnityEngine::UIElements::BaseVerticalCollectionView::SetSelectionWithoutNotify)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3599c74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "SetSelectionWithoutNotify", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.SetSelectionInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(
    ::System::Collections::Generic::IEnumerable_1<int32_t>*, bool)>(&::UnityEngine::UIElements::BaseVerticalCollectionView::SetSelectionInternal)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0x3599938;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "SetSelectionInternal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.NotifyOfSelectionChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(
    &::UnityEngine::UIElements::BaseVerticalCollectionView::NotifyOfSelectionChange)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3598fc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                                                               "NotifyOfSelectionChange", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.ClearSelection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(
    &::UnityEngine::UIElements::BaseVerticalCollectionView::ClearSelection)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3594dcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                                                               "ClearSelection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.ClearSelectionWithoutValidation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(
    &::UnityEngine::UIElements::BaseVerticalCollectionView::ClearSelectionWithoutValidation)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x35988d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                                 "ClearSelectionWithoutValidation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.OnViewDataReady
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(
    &::UnityEngine::UIElements::BaseVerticalCollectionView::OnViewDataReady)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x3599c7c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), 92));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.ExecuteDefaultAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(::UnityEngine::UIElements::EventBase*)>(
    &::UnityEngine::UIElements::BaseVerticalCollectionView::ExecuteDefaultAction)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x3599cb0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.OnSizeChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(::UnityEngine::UIElements::GeometryChangedEvent*)>(
    &::UnityEngine::UIElements::BaseVerticalCollectionView::OnSizeChanged)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x359a030;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "OnSizeChanged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::GeometryChangedEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.OnCustomStyleResolved
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(
    ::UnityEngine::UIElements::CustomStyleResolvedEvent*)>(&::UnityEngine::UIElements::BaseVerticalCollectionView::OnCustomStyleResolved)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x359a1e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "OnCustomStyleResolved", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CustomStyleResolvedEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(
    &::UnityEngine::UIElements::BaseVerticalCollectionView::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x359a3d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                                 "UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(
    &::UnityEngine::UIElements::BaseVerticalCollectionView::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x359a3d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                    "UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.__ctor_b__143_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(float_t)>(
    &::UnityEngine::UIElements::BaseVerticalCollectionView::__ctor_b__143_0)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x359a688;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "<.ctor>b__143_0",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView._Apply_g__HandleSelectionAndScroll_164_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(int32_t, ByRef<::UnityEngine::UIElements::__BaseVerticalCollectionView____c__DisplayClass164_0>)>(
        &::UnityEngine::UIElements::BaseVerticalCollectionView::_Apply_g__HandleSelectionAndScroll_164_0)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x359750c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "<Apply>g__HandleSelectionAndScroll|164_0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::__BaseVerticalCollectionView____c__DisplayClass164_0>>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr UnityEngine::UIElements::BaseVerticalCollectionView::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* UnityEngine::UIElements::BaseVerticalCollectionView::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
constexpr ::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*& UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_get_onItemsChosen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onItemsChosen;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*> const&
UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_get_onItemsChosen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onItemsChosen;
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_set_onItemsChosen(::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onItemsChosen)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*& UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_get_onSelectionChange() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onSelectionChange;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*> const&
UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_get_onSelectionChange() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onSelectionChange;
}
constexpr void
UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_set_onSelectionChange(::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onSelectionChange)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*& UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_get_onSelectedIndicesChange() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onSelectedIndicesChange;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*> const&
UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_get_onSelectedIndicesChange() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onSelectedIndicesChange;
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_set_onSelectedIndicesChange(::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onSelectedIndicesChange)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<int32_t, int32_t>*& UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_get_itemIndexChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemIndexChanged;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<int32_t, int32_t>*> const& UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_get_itemIndexChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemIndexChanged;
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_set_itemIndexChanged(::System::Action_2<int32_t, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___itemIndexChanged)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_get_itemsSourceChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemsSourceChanged;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_get_itemsSourceChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemsSourceChanged;
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_set_itemsSourceChanged(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___itemsSourceChanged)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Func_2<int32_t, int32_t>*& UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_get_m_GetItemId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GetItemId;
}
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<int32_t, int32_t>*> const& UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_get_m_GetItemId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GetItemId;
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_set_m_GetItemId(::System::Func_2<int32_t, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_GetItemId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Func_1<::UnityEngine::UIElements::VisualElement*>*& UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_get_m_MakeItem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MakeItem;
}
constexpr ::cordl_internals::to_const_pointer<::System::Func_1<::UnityEngine::UIElements::VisualElement*>*> const&
UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_get_m_MakeItem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MakeItem;
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_set_m_MakeItem(::System::Func_1<::UnityEngine::UIElements::VisualElement*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_MakeItem)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>*& UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_get_m_BindItem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BindItem;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>*> const&
UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_get_m_BindItem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BindItem;
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_set_m_BindItem(::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_BindItem)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>*& UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_get__unbindItem_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unbindItem_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>*> const&
UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_get__unbindItem_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unbindItem_k__BackingField;
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_set__unbindItem_k__BackingField(::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____unbindItem_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::UnityEngine::UIElements::VisualElement*>*& UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_get__destroyItem_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____destroyItem_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::UIElements::VisualElement*>*> const&
UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_get__destroyItem_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____destroyItem_k__BackingField;
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_set__destroyItem_k__BackingField(::System::Action_1<::UnityEngine::UIElements::VisualElement*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____destroyItem_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::SelectionType& UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_get_m_SelectionType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectionType;
}
constexpr ::UnityEngine::UIElements::SelectionType const& UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_get_m_SelectionType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectionType;
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_set_m_SelectionType(::UnityEngine::UIElements::SelectionType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SelectionType = value;
}
constexpr bool& UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_get_m_HorizontalScrollingEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HorizontalScrollingEnabled;
}
constexpr bool const& UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_get_m_HorizontalScrollingEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HorizontalScrollingEnabled;
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_set_m_HorizontalScrollingEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HorizontalScrollingEnabled = value;
}
constexpr ::UnityEngine::UIElements::AlternatingRowBackground& UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_get_m_ShowAlternatingRowBackgrounds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShowAlternatingRowBackgrounds;
}
constexpr ::UnityEngine::UIElements::AlternatingRowBackground const& UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_get_m_ShowAlternatingRowBackgrounds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShowAlternatingRowBackgrounds;
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_set_m_ShowAlternatingRowBackgrounds(::UnityEngine::UIElements::AlternatingRowBackground value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ShowAlternatingRowBackgrounds = value;
}
constexpr float_t& UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_get_m_FixedItemHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FixedItemHeight;
}
constexpr float_t const& UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_get_m_FixedItemHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FixedItemHeight;
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_set_m_FixedItemHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FixedItemHeight = value;
}
constexpr bool& UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_get_m_ItemHeightIsInline() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ItemHeightIsInline;
}
constexpr bool const& UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_get_m_ItemHeightIsInline() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ItemHeightIsInline;
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_set_m_ItemHeightIsInline(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ItemHeightIsInline = value;
}
constexpr ::UnityEngine::UIElements::CollectionVirtualizationMethod& UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_get_m_VirtualizationMethod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VirtualizationMethod;
}
constexpr ::UnityEngine::UIElements::CollectionVirtualizationMethod const& UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_get_m_VirtualizationMethod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VirtualizationMethod;
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_set_m_VirtualizationMethod(::UnityEngine::UIElements::CollectionVirtualizationMethod value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_VirtualizationMethod = value;
}
constexpr ::UnityEngine::UIElements::ScrollView*& UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_get_m_ScrollView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScrollView;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::ScrollView*> const& UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_get_m_ScrollView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScrollView;
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_set_m_ScrollView(::UnityEngine::UIElements::ScrollView* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ScrollView)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::CollectionViewController*& UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_get_m_ViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ViewController;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::CollectionViewController*> const&
UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_get_m_ViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ViewController;
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_set_m_ViewController(::UnityEngine::UIElements::CollectionViewController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::CollectionVirtualizationController*& UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_get_m_VirtualizationController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VirtualizationController;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::CollectionVirtualizationController*> const&
UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_get_m_VirtualizationController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VirtualizationController;
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_set_m_VirtualizationController(::UnityEngine::UIElements::CollectionVirtualizationController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_VirtualizationController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::KeyboardNavigationManipulator*& UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_get_m_NavigationManipulator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NavigationManipulator;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::KeyboardNavigationManipulator*> const&
UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_get_m_NavigationManipulator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NavigationManipulator;
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_set_m_NavigationManipulator(::UnityEngine::UIElements::KeyboardNavigationManipulator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_NavigationManipulator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector2& UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_get_m_ScrollOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScrollOffset;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_get_m_ScrollOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScrollOffset;
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_set_m_ScrollOffset(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ScrollOffset = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_get_m_SelectedIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectedIds;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> const& UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_get_m_SelectedIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectedIds;
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_set_m_SelectedIds(::System::Collections::Generic::List_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SelectedIds)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_get_m_SelectedIndices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectedIndices;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> const&
UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_get_m_SelectedIndices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectedIndices;
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_set_m_SelectedIndices(::System::Collections::Generic::List_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SelectedIndices)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::System::Object*>*& UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_get_m_SelectedItems() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectedItems;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Object*>*> const&
UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_get_m_SelectedItems() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectedItems;
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_set_m_SelectedItems(::System::Collections::Generic::List_1<::System::Object*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SelectedItems)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_get_m_LastHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastHeight;
}
constexpr float_t const& UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_get_m_LastHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastHeight;
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_set_m_LastHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LastHeight = value;
}
constexpr bool& UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_get_m_IsRangeSelectionDirectionUp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsRangeSelectionDirectionUp;
}
constexpr bool const& UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_get_m_IsRangeSelectionDirectionUp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsRangeSelectionDirectionUp;
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_set_m_IsRangeSelectionDirectionUp(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsRangeSelectionDirectionUp = value;
}
constexpr ::UnityEngine::UIElements::ListViewDragger*& UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_get_m_Dragger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Dragger;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::ListViewDragger*> const& UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_get_m_Dragger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Dragger;
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_set_m_Dragger(::UnityEngine::UIElements::ListViewDragger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Dragger)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<int32_t, int32_t>*& UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_get_m_ItemIndexChangedCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ItemIndexChangedCallback;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<int32_t, int32_t>*> const&
UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_get_m_ItemIndexChangedCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ItemIndexChangedCallback;
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_set_m_ItemIndexChangedCallback(::System::Action_2<int32_t, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ItemIndexChangedCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_get_m_ItemsSourceChangedCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ItemsSourceChangedCallback;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_get_m_ItemsSourceChangedCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ItemsSourceChangedCallback;
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_set_m_ItemsSourceChangedCallback(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ItemsSourceChangedCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_get_m_TouchDownPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TouchDownPosition;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_get_m_TouchDownPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TouchDownPosition;
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__cordl_internal_set_m_TouchDownPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TouchDownPosition = value;
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::setStaticF_k_EmptyItems(::System::Collections::Generic::List_1<::UnityEngine::UIElements::ReusableCollectionItem*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::ReusableCollectionItem*>*, "k_EmptyItems",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get>(
      std::forward<::System::Collections::Generic::List_1<::UnityEngine::UIElements::ReusableCollectionItem*>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::ReusableCollectionItem*>* UnityEngine::UIElements::BaseVerticalCollectionView::getStaticF_k_EmptyItems() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::ReusableCollectionItem*>*, "k_EmptyItems",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get>();
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::setStaticF_s_DefaultItemHeight(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_DefaultItemHeight", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::UIElements::BaseVerticalCollectionView::getStaticF_s_DefaultItemHeight() {
  return ::cordl_internals::getStaticField<int32_t, "s_DefaultItemHeight", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get>();
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::setStaticF_s_ItemHeightProperty(::UnityEngine::UIElements::CustomStyleProperty_1<int32_t> value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::CustomStyleProperty_1<int32_t>, "s_ItemHeightProperty",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get>(
      std::forward<::UnityEngine::UIElements::CustomStyleProperty_1<int32_t>>(value));
}
inline ::UnityEngine::UIElements::CustomStyleProperty_1<int32_t> UnityEngine::UIElements::BaseVerticalCollectionView::getStaticF_s_ItemHeightProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::CustomStyleProperty_1<int32_t>, "s_ItemHeightProperty",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get>();
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::setStaticF_ussClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseVerticalCollectionView::getStaticF_ussClassName() {
  return ::cordl_internals::getStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get>();
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::setStaticF_borderUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "borderUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseVerticalCollectionView::getStaticF_borderUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "borderUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get>();
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::setStaticF_itemUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "itemUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseVerticalCollectionView::getStaticF_itemUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "itemUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get>();
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::setStaticF_dragHoverBarUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "dragHoverBarUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseVerticalCollectionView::getStaticF_dragHoverBarUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "dragHoverBarUssClassName",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get>();
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::setStaticF_itemDragHoverUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "itemDragHoverUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseVerticalCollectionView::getStaticF_itemDragHoverUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "itemDragHoverUssClassName",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get>();
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::setStaticF_itemSelectedVariantUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "itemSelectedVariantUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseVerticalCollectionView::getStaticF_itemSelectedVariantUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "itemSelectedVariantUssClassName",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get>();
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::setStaticF_itemAlternativeBackgroundUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "itemAlternativeBackgroundUssClassName",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseVerticalCollectionView::getStaticF_itemAlternativeBackgroundUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "itemAlternativeBackgroundUssClassName",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get>();
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::setStaticF_listScrollViewUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "listScrollViewUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseVerticalCollectionView::getStaticF_listScrollViewUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "listScrollViewUssClassName",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get>();
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::setStaticF_backgroundFillUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "backgroundFillUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseVerticalCollectionView::getStaticF_backgroundFillUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "backgroundFillUssClassName",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get>();
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::add_onItemsChosen(::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "add_onItemsChosen", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::remove_onItemsChosen(::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "remove_onItemsChosen", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::add_onSelectionChange(::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "add_onSelectionChange", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::remove_onSelectionChange(::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "remove_onSelectionChange", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Func_2<int32_t, int32_t>* UnityEngine::UIElements::BaseVerticalCollectionView::get_getItemId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                                                             "get_getItemId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Func_2<int32_t, int32_t>*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::set_getItemId(::System::Func_2<int32_t, int32_t>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "set_getItemId", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<int32_t, int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::IList* UnityEngine::UIElements::BaseVerticalCollectionView::get_itemsSource() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                                                             "get_itemsSource", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IList*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::set_itemsSource(::System::Collections::IList* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "set_itemsSource", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::BaseVerticalCollectionView::get_sourceIncludesArraySize() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), 100)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Func_1<::UnityEngine::UIElements::VisualElement*>* UnityEngine::UIElements::BaseVerticalCollectionView::get_makeItem() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                                                             "get_makeItem", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Func_1<::UnityEngine::UIElements::VisualElement*>*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::set_makeItem(::System::Func_1<::UnityEngine::UIElements::VisualElement*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "set_makeItem", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<::UnityEngine::UIElements::VisualElement*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* UnityEngine::UIElements::BaseVerticalCollectionView::get_bindItem() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                                                             "get_bindItem", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::set_bindItem(::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "set_bindItem", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* UnityEngine::UIElements::BaseVerticalCollectionView::get_unbindItem() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                                                             "get_unbindItem", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::set_unbindItem(::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "set_unbindItem", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Action_1<::UnityEngine::UIElements::VisualElement*>* UnityEngine::UIElements::BaseVerticalCollectionView::get_destroyItem() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                                                             "get_destroyItem", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Action_1<::UnityEngine::UIElements::VisualElement*>*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::set_destroyItem(::System::Action_1<::UnityEngine::UIElements::VisualElement*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "set_destroyItem", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::UIElements::VisualElement*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::BaseVerticalCollectionView::get_contentContainer() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), 95)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::SelectionType UnityEngine::UIElements::BaseVerticalCollectionView::get_selectionType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                                                             "get_selectionType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::SelectionType, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::set_selectionType(::UnityEngine::UIElements::SelectionType value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "set_selectionType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::SelectionType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::UIElements::BaseVerticalCollectionView::get_selectedIndex() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                                                             "get_selectedIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::set_selectedIndex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "set_selectedIndex",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IEnumerable_1<int32_t>* UnityEngine::UIElements::BaseVerticalCollectionView::get_selectedIndices() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                                                             "get_selectedIndices", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<int32_t>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ReusableCollectionItem*>* UnityEngine::UIElements::BaseVerticalCollectionView::get_activeItems() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                                                             "get_activeItems", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ReusableCollectionItem*>*, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::ScrollView* UnityEngine::UIElements::BaseVerticalCollectionView::get_scrollView() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                                                             "get_scrollView", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ScrollView*, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::ListViewDragger* UnityEngine::UIElements::BaseVerticalCollectionView::get_dragger() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                                                             "get_dragger", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ListViewDragger*, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::CollectionViewController* UnityEngine::UIElements::BaseVerticalCollectionView::get_viewController() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                                                             "get_viewController", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::CollectionViewController*, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::CollectionVirtualizationController* UnityEngine::UIElements::BaseVerticalCollectionView::get_virtualizationController() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                                                             "get_virtualizationController", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::CollectionVirtualizationController*, false>(this, ___internal_method);
}
/// @param height: float_t (default: -1.0)
inline float_t UnityEngine::UIElements::BaseVerticalCollectionView::ResolveItemHeight(float_t height) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "ResolveItemHeight",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, height);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::set_showBorder(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "set_showBorder",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::BaseVerticalCollectionView::get_reorderable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                                                             "get_reorderable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::set_reorderable(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "set_reorderable",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::set_horizontalScrollingEnabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "set_horizontalScrollingEnabled",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::AlternatingRowBackground UnityEngine::UIElements::BaseVerticalCollectionView::get_showAlternatingRowBackgrounds() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                               "get_showAlternatingRowBackgrounds", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::AlternatingRowBackground, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::set_showAlternatingRowBackgrounds(::UnityEngine::UIElements::AlternatingRowBackground value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "set_showAlternatingRowBackgrounds",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::AlternatingRowBackground>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::CollectionVirtualizationMethod UnityEngine::UIElements::BaseVerticalCollectionView::get_virtualizationMethod() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                                                             "get_virtualizationMethod", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::CollectionVirtualizationMethod, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::set_virtualizationMethod(::UnityEngine::UIElements::CollectionVirtualizationMethod value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "set_virtualizationMethod", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CollectionVirtualizationMethod>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::UIElements::BaseVerticalCollectionView::get_fixedItemHeight() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                                                             "get_fixedItemHeight", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::set_fixedItemHeight(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "set_fixedItemHeight",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::UIElements::BaseVerticalCollectionView::get_lastHeight() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                                                             "get_lastHeight", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::CreateVirtualizationController() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), 101)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::CollectionVirtualizationController* UnityEngine::UIElements::BaseVerticalCollectionView::GetOrCreateVirtualizationController() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                               "GetOrCreateVirtualizationController", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::CollectionVirtualizationController*, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::BaseVerticalCollectionView::CreateVirtualizationController() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "CreateVirtualizationController",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::CollectionViewController* UnityEngine::UIElements::BaseVerticalCollectionView::GetOrCreateViewController() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                                                             "GetOrCreateViewController", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::CollectionViewController*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::CreateViewController() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), 102)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::SetViewController(::UnityEngine::UIElements::CollectionViewController* controller) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "SetViewController", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CollectionViewController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, controller);
}
inline ::UnityEngine::UIElements::ListViewDragger* UnityEngine::UIElements::BaseVerticalCollectionView::CreateDragger() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), 103)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ListViewDragger*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::InitializeDragAndDropController() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                                                             "InitializeDragAndDropController", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::ICollectionDragAndDropController* UnityEngine::UIElements::BaseVerticalCollectionView::CreateDragAndDropController() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), 104)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ICollectionDragAndDropController*, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::BaseVerticalCollectionView* UnityEngine::UIElements::BaseVerticalCollectionView::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::BaseVerticalCollectionView*>());
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::BaseVerticalCollectionView::HasValidDataAndBindings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                                                             "HasValidDataAndBindings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::OnItemIndexChanged(int32_t srcIndex, int32_t dstIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "OnItemIndexChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, srcIndex, dstIndex);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::OnItemsSourceChanged() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                                                             "OnItemsSourceChanged", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::RefreshItems() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                                                             "RefreshItems", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::Rebuild() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                                                             "Rebuild", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::RefreshSelection() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                                                             "RefreshSelection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::PostRefresh() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), 105)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::ScrollToItem(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "ScrollToItem",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::OnScroll(::UnityEngine::Vector2 offset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "OnScroll", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, offset);
}
/// @param layoutPass: int32_t (default: static_cast<int32_t>(0xffffffff))
inline void UnityEngine::UIElements::BaseVerticalCollectionView::Resize(::UnityEngine::Vector2 size, int32_t layoutPass) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                                                             "Resize", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, size, layoutPass);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::OnAttachToPanel(::UnityEngine::UIElements::AttachToPanelEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "OnAttachToPanel", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::AttachToPanelEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::OnDetachFromPanel(::UnityEngine::UIElements::DetachFromPanelEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "OnDetachFromPanel", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DetachFromPanelEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline bool UnityEngine::UIElements::BaseVerticalCollectionView::Apply(::UnityEngine::UIElements::KeyboardNavigationOperation op, bool shiftKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "Apply", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::KeyboardNavigationOperation>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, op, shiftKey);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::Apply(::UnityEngine::UIElements::KeyboardNavigationOperation op, ::UnityEngine::UIElements::EventBase* sourceEvent) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "Apply", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::KeyboardNavigationOperation>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, op, sourceEvent);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::OnPointerMove(::UnityEngine::UIElements::PointerMoveEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "OnPointerMove", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerMoveEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::OnPointerDown(::UnityEngine::UIElements::PointerDownEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "OnPointerDown", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerDownEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::OnPointerCancel(::UnityEngine::UIElements::PointerCancelEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "OnPointerCancel", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerCancelEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::OnPointerUp(::UnityEngine::UIElements::PointerUpEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "OnPointerUp", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerUpEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::ProcessPointerDown(::UnityEngine::UIElements::IPointerEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "ProcessPointerDown", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IPointerEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::ProcessPointerUp(::UnityEngine::UIElements::IPointerEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "ProcessPointerUp", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IPointerEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::DoSelect(::UnityEngine::Vector2 localPosition, int32_t clickCount, bool actionKey, bool shiftKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "DoSelect", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, localPosition, clickCount, actionKey, shiftKey);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::DoRangeSelection(int32_t rangeSelectionFinalIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "DoRangeSelection",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rangeSelectionFinalIndex);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::ProcessSingleClick(int32_t clickedIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "ProcessSingleClick",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, clickedIndex);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::SelectAll() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                                                             "SelectAll", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::AddToSelection(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "AddToSelection",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::AddToSelection(::System::Collections::Generic::IList_1<int32_t>* indexes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "AddToSelection", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, indexes);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::AddToSelectionWithoutValidation(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "AddToSelectionWithoutValidation",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::RemoveFromSelection(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "RemoveFromSelection",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::RemoveFromSelectionWithoutValidation(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "RemoveFromSelectionWithoutValidation",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::SetSelection(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "SetSelection",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::SetSelection(::System::Collections::Generic::IEnumerable_1<int32_t>* indices) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "SetSelection", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, indices);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::SetSelectionWithoutNotify(::System::Collections::Generic::IEnumerable_1<int32_t>* indices) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "SetSelectionWithoutNotify", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, indices);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::SetSelectionInternal(::System::Collections::Generic::IEnumerable_1<int32_t>* indices, bool sendNotification) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "SetSelectionInternal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, indices, sendNotification);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::NotifyOfSelectionChange() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                                                             "NotifyOfSelectionChange", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::ClearSelection() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                                                             "ClearSelection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::ClearSelectionWithoutValidation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                                                             "ClearSelectionWithoutValidation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::OnViewDataReady() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), 92)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::ExecuteDefaultAction(::UnityEngine::UIElements::EventBase* evt) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::OnSizeChanged(::UnityEngine::UIElements::GeometryChangedEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "OnSizeChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::GeometryChangedEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::OnCustomStyleResolved(::UnityEngine::UIElements::CustomStyleResolvedEvent* e) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "OnCustomStyleResolved", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CustomStyleResolvedEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                               "UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                               "UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::__ctor_b__143_0(float_t v) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "<.ctor>b__143_0",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, v);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::_Apply_g__HandleSelectionAndScroll_164_0(
    int32_t index, ByRef<::UnityEngine::UIElements::__BaseVerticalCollectionView____c__DisplayClass164_0> _cordl_fixed_empty_name_whitespace) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(), "<Apply>g__HandleSelectionAndScroll|164_0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::__BaseVerticalCollectionView____c__DisplayClass164_0>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, _cordl_fixed_empty_name_whitespace);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::BaseVerticalCollectionView::BaseVerticalCollectionView() {}
