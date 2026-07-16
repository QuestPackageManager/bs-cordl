#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BaseTreeView.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVerticalCollectionView_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BaseTreeView_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseTreeViewController_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseTreeView_def.hpp"
#include "UnityEngine/UIElements/zzzz__CollectionViewController_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__ICollectionDragAndDropController_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
#include "UnityEngine/UIElements/zzzz__TreeViewExpansionChangedArgs_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlBoolAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::BaseTreeView_UxmlTraits.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseTreeView_UxmlTraits::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext)>(&::UnityEngine::UIElements::BaseTreeView_UxmlTraits::Init)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x6d2afec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseTreeView_UxmlTraits*>(), { ::i2c::class_of<::UnityEngine::UIElements::BaseTreeView_UxmlTraits*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseTreeView_UxmlTraits._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseTreeView_UxmlTraits::*)()>(&::UnityEngine::UIElements::BaseTreeView_UxmlTraits::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6d2b104;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseTreeView_UxmlTraits*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& UnityEngine::UIElements::BaseTreeView_UxmlTraits::__cordl_internal_get_m_AutoExpand() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AutoExpand;
}
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& UnityEngine::UIElements::BaseTreeView_UxmlTraits::__cordl_internal_get_m_AutoExpand() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AutoExpand;
}
constexpr void UnityEngine::UIElements::BaseTreeView_UxmlTraits::__cordl_internal_set_m_AutoExpand(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AutoExpand = value;
}
inline void UnityEngine::UIElements::BaseTreeView_UxmlTraits::Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag,
                                                                   ::UnityEngine::UIElements::CreationContext cc) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseTreeView_UxmlTraits*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve, bag, cc);
}
inline void UnityEngine::UIElements::BaseTreeView_UxmlTraits::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseTreeView_UxmlTraits*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::BaseTreeView_UxmlTraits* UnityEngine::UIElements::BaseTreeView_UxmlTraits::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::BaseTreeView_UxmlTraits*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::BaseTreeView_UxmlTraits::BaseTreeView_UxmlTraits() {}
//  Writing Method size for method: ::UnityEngine::UIElements::BaseTreeView.get_itemsSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IList* (::UnityEngine::UIElements::BaseTreeView::*)()>(&::UnityEngine::UIElements::BaseTreeView::get_itemsSource)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6d293d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseTreeView*>(), { "get_itemsSource", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseTreeView.set_itemsSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseTreeView::*)(::System::Collections::IList*)>(&::UnityEngine::UIElements::BaseTreeView::set_itemsSource)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6d2947c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseTreeView*>(), { "set_itemsSource", {}, { ::i2c::type_of<::System::Collections::IList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseTreeView.get_viewController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::BaseTreeViewController* (::UnityEngine::UIElements::BaseTreeView::*)()>(
    &::UnityEngine::UIElements::BaseTreeView::get_viewController)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6d293fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseTreeView*>(), { "get_viewController", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseTreeView.CreateVirtualizationController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseTreeView::*)()>(&::UnityEngine::UIElements::BaseTreeView::CreateVirtualizationController)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6d2952c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseTreeView*>(), { ::i2c::class_of<::UnityEngine::UIElements::BaseTreeView*>(), 140 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseTreeView.SetViewController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseTreeView::*)(::UnityEngine::UIElements::CollectionViewController*)>(
    &::UnityEngine::UIElements::BaseTreeView::SetViewController)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x6d29578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseTreeView*>(), { ::i2c::class_of<::UnityEngine::UIElements::BaseTreeView*>(), 142 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseTreeView.OnItemIndexChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseTreeView::*)(int32_t, int32_t)>(&::UnityEngine::UIElements::BaseTreeView::OnItemIndexChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d29800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseTreeView*>(), { "OnItemIndexChanged", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseTreeView.OnItemExpandedChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseTreeView::*)(::UnityEngine::UIElements::TreeViewExpansionChangedArgs*)>(
    &::UnityEngine::UIElements::BaseTreeView::OnItemExpandedChanged)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6d29a3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseTreeView*>(),
                                                             { "OnItemExpandedChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::TreeViewExpansionChangedArgs*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseTreeView.CreateDragAndDropController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::ICollectionDragAndDropController* (::UnityEngine::UIElements::BaseTreeView::*)()>(
    &::UnityEngine::UIElements::BaseTreeView::CreateDragAndDropController)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6d29a58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseTreeView*>(), { ::i2c::class_of<::UnityEngine::UIElements::BaseTreeView*>(), 144 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseTreeView.get_autoExpand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::BaseTreeView::*)()>(&::UnityEngine::UIElements::BaseTreeView::get_autoExpand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d29ab8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseTreeView*>(), { "get_autoExpand", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseTreeView.set_autoExpand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseTreeView::*)(bool)>(&::UnityEngine::UIElements::BaseTreeView::set_autoExpand)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6d29ac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseTreeView*>(), { "set_autoExpand", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseTreeView.get_expandedItemIds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<int32_t>* (::UnityEngine::UIElements::BaseTreeView::*)()>(
    &::UnityEngine::UIElements::BaseTreeView::get_expandedItemIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d29b58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseTreeView*>(), { "get_expandedItemIds", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseTreeView.set_expandedItemIds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseTreeView::*)(::System::Collections::Generic::List_1<int32_t>*)>(
    &::UnityEngine::UIElements::BaseTreeView::set_expandedItemIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d29b60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseTreeView*>(),
                                                                                           { "set_expandedItemIds", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseTreeView._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseTreeView::*)()>(&::UnityEngine::UIElements::BaseTreeView::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d29b68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseTreeView*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseTreeView._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseTreeView::*)(int32_t)>(&::UnityEngine::UIElements::BaseTreeView::_ctor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6d29b70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseTreeView*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseTreeView.OnViewDataReady
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseTreeView::*)()>(&::UnityEngine::UIElements::BaseTreeView::OnViewDataReady)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6d29d1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseTreeView*>(), { ::i2c::class_of<::UnityEngine::UIElements::BaseTreeView*>(), 132 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseTreeView.HandleItemNavigation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::BaseTreeView::*)(bool, bool)>(&::UnityEngine::UIElements::BaseTreeView::HandleItemNavigation)> {
  constexpr static std::size_t size = 0x520;
  constexpr static std::size_t addrs = 0x6d29d9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseTreeView*>(), { ::i2c::class_of<::UnityEngine::UIElements::BaseTreeView*>(), 147 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseTreeView.SetSelectionById
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseTreeView::*)(int32_t)>(&::UnityEngine::UIElements::BaseTreeView::SetSelectionById)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6d2a420;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseTreeView*>(), { "SetSelectionById", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseTreeView.SetSelectionById
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseTreeView::*)(::System::Collections::Generic::IEnumerable_1<int32_t>*)>(
    &::UnityEngine::UIElements::BaseTreeView::SetSelectionById)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d2a640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseTreeView*>(),
                                                                                           { "SetSelectionById", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseTreeView.SetSelectionInternalById
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseTreeView::*)(::System::Collections::Generic::IEnumerable_1<int32_t>*, bool)>(
    &::UnityEngine::UIElements::BaseTreeView::SetSelectionInternalById)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6d2a648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseTreeView*>(),
                                                { "SetSelectionInternalById", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<int32_t>*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseTreeView.GetItemIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::BaseTreeView::*)(int32_t, bool)>(&::UnityEngine::UIElements::BaseTreeView::GetItemIndex)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x6d2ab60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseTreeView*>(), { "GetItemIndex", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseTreeView.IsExpanded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::BaseTreeView::*)(int32_t)>(&::UnityEngine::UIElements::BaseTreeView::IsExpanded)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6d2ad08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseTreeView*>(), { "IsExpanded", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseTreeView.CollapseItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseTreeView::*)(int32_t, bool, bool)>(&::UnityEngine::UIElements::BaseTreeView::CollapseItem)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6d2ad2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseTreeView*>(),
                                                                                           { "CollapseItem", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseTreeView.ExpandItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseTreeView::*)(int32_t, bool, bool)>(&::UnityEngine::UIElements::BaseTreeView::ExpandItem)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6d2ad68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseTreeView*>(),
                                                                                           { "ExpandItem", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseTreeView.IsExpandedByIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::BaseTreeView::*)(int32_t)>(&::UnityEngine::UIElements::BaseTreeView::IsExpandedByIndex)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6d2a2d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseTreeView*>(), { "IsExpandedByIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseTreeView.CollapseItemByIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseTreeView::*)(int32_t, bool)>(&::UnityEngine::UIElements::BaseTreeView::CollapseItemByIndex)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6d2a370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseTreeView*>(), { "CollapseItemByIndex", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseTreeView.ExpandItemByIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseTreeView::*)(int32_t, bool)>(&::UnityEngine::UIElements::BaseTreeView::ExpandItemByIndex)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6d2a2f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseTreeView*>(), { "ExpandItemByIndex", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseTreeView._SetSelectionInternalById_b__54_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::BaseTreeView::*)(int32_t)>(&::UnityEngine::UIElements::BaseTreeView::_SetSelectionInternalById_b__54_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d2afe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseTreeView*>(), { "<SetSelectionInternalById>b__54_0", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::UnityEngine::UIElements::TreeViewExpansionChangedArgs*>*& UnityEngine::UIElements::BaseTreeView::__cordl_internal_get_itemExpandedChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemExpandedChanged;
}
constexpr ::System::Action_1<::UnityEngine::UIElements::TreeViewExpansionChangedArgs*>* const& UnityEngine::UIElements::BaseTreeView::__cordl_internal_get_itemExpandedChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemExpandedChanged;
}
constexpr void UnityEngine::UIElements::BaseTreeView::__cordl_internal_set_itemExpandedChanged(::System::Action_1<::UnityEngine::UIElements::TreeViewExpansionChangedArgs*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___itemExpandedChanged = value;
}
constexpr bool& UnityEngine::UIElements::BaseTreeView::__cordl_internal_get_m_AutoExpand() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AutoExpand;
}
constexpr bool const& UnityEngine::UIElements::BaseTreeView::__cordl_internal_get_m_AutoExpand() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AutoExpand;
}
constexpr void UnityEngine::UIElements::BaseTreeView::__cordl_internal_set_m_AutoExpand(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AutoExpand = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& UnityEngine::UIElements::BaseTreeView::__cordl_internal_get_m_ExpandedItemIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ExpandedItemIds;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& UnityEngine::UIElements::BaseTreeView::__cordl_internal_get_m_ExpandedItemIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ExpandedItemIds;
}
constexpr void UnityEngine::UIElements::BaseTreeView::__cordl_internal_set_m_ExpandedItemIds(::System::Collections::Generic::List_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ExpandedItemIds = value;
}
inline void UnityEngine::UIElements::BaseTreeView::setStaticF_autoExpandProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "autoExpandProperty", ::UnityEngine::UIElements::BaseTreeView*>(std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::BaseTreeView::getStaticF_autoExpandProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "autoExpandProperty", ::UnityEngine::UIElements::BaseTreeView*>();
}
inline void UnityEngine::UIElements::BaseTreeView::setStaticF_invalidId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "invalidId", ::UnityEngine::UIElements::BaseTreeView*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::UIElements::BaseTreeView::getStaticF_invalidId() {
  return ::cordl_internals::getStaticField<int32_t, "invalidId", ::UnityEngine::UIElements::BaseTreeView*>();
}
inline void UnityEngine::UIElements::BaseTreeView::setStaticF_ussClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ussClassName", ::UnityEngine::UIElements::BaseTreeView*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseTreeView::getStaticF_ussClassName() {
  return ::cordl_internals::getStaticField<::StringW, "ussClassName", ::UnityEngine::UIElements::BaseTreeView*>();
}
inline void UnityEngine::UIElements::BaseTreeView::setStaticF_itemUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "itemUssClassName", ::UnityEngine::UIElements::BaseTreeView*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseTreeView::getStaticF_itemUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "itemUssClassName", ::UnityEngine::UIElements::BaseTreeView*>();
}
inline void UnityEngine::UIElements::BaseTreeView::setStaticF_itemToggleUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "itemToggleUssClassName", ::UnityEngine::UIElements::BaseTreeView*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseTreeView::getStaticF_itemToggleUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "itemToggleUssClassName", ::UnityEngine::UIElements::BaseTreeView*>();
}
inline void UnityEngine::UIElements::BaseTreeView::setStaticF_itemIndentsContainerUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "itemIndentsContainerUssClassName", ::UnityEngine::UIElements::BaseTreeView*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseTreeView::getStaticF_itemIndentsContainerUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "itemIndentsContainerUssClassName", ::UnityEngine::UIElements::BaseTreeView*>();
}
inline void UnityEngine::UIElements::BaseTreeView::setStaticF_itemIndentUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "itemIndentUssClassName", ::UnityEngine::UIElements::BaseTreeView*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseTreeView::getStaticF_itemIndentUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "itemIndentUssClassName", ::UnityEngine::UIElements::BaseTreeView*>();
}
inline void UnityEngine::UIElements::BaseTreeView::setStaticF_itemContentContainerUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "itemContentContainerUssClassName", ::UnityEngine::UIElements::BaseTreeView*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseTreeView::getStaticF_itemContentContainerUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "itemContentContainerUssClassName", ::UnityEngine::UIElements::BaseTreeView*>();
}
inline ::System::Collections::IList* UnityEngine::UIElements::BaseTreeView::get_itemsSource() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseTreeView*>(), { "get_itemsSource", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IList*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseTreeView::set_itemsSource(::System::Collections::IList* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseTreeView*>(), { "set_itemsSource", {}, { ::i2c::type_of<::System::Collections::IList*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::BaseTreeViewController* UnityEngine::UIElements::BaseTreeView::get_viewController() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseTreeView*>(), { "get_viewController", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::BaseTreeViewController*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseTreeView::CreateVirtualizationController() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseTreeView*>(), 140 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseTreeView::SetViewController(::UnityEngine::UIElements::CollectionViewController* controller) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseTreeView*>(), 142 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controller);
}
inline void UnityEngine::UIElements::BaseTreeView::OnItemIndexChanged(int32_t srcIndex, int32_t dstIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseTreeView*>(), { "OnItemIndexChanged", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, srcIndex, dstIndex);
}
inline void UnityEngine::UIElements::BaseTreeView::OnItemExpandedChanged(::UnityEngine::UIElements::TreeViewExpansionChangedArgs* arg) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseTreeView*>(),
                                                           { "OnItemExpandedChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::TreeViewExpansionChangedArgs*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, arg);
}
inline ::UnityEngine::UIElements::ICollectionDragAndDropController* UnityEngine::UIElements::BaseTreeView::CreateDragAndDropController() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseTreeView*>(), 144 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ICollectionDragAndDropController*>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::BaseTreeView::get_autoExpand() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseTreeView*>(), { "get_autoExpand", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseTreeView::set_autoExpand(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseTreeView*>(), { "set_autoExpand", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<int32_t>* UnityEngine::UIElements::BaseTreeView::get_expandedItemIds() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseTreeView*>(), { "get_expandedItemIds", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<int32_t>*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseTreeView::set_expandedItemIds(::System::Collections::Generic::List_1<int32_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseTreeView*>(),
                                                                                         { "set_expandedItemIds", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::BaseTreeView::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseTreeView*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseTreeView::_ctor(int32_t itemHeight) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseTreeView*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, itemHeight);
}
inline void UnityEngine::UIElements::BaseTreeView::OnViewDataReady() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseTreeView*>(), 132 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::BaseTreeView::HandleItemNavigation(bool moveIn, bool altPressed) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseTreeView*>(), 147 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, moveIn, altPressed);
}
inline void UnityEngine::UIElements::BaseTreeView::SetSelectionById(int32_t id) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseTreeView*>(), { "SetSelectionById", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
inline void UnityEngine::UIElements::BaseTreeView::SetSelectionById(::System::Collections::Generic::IEnumerable_1<int32_t>* ids) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseTreeView*>(),
                                                                                         { "SetSelectionById", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ids);
}
inline void UnityEngine::UIElements::BaseTreeView::SetSelectionInternalById(::System::Collections::Generic::IEnumerable_1<int32_t>* ids, bool sendNotification) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseTreeView*>(),
                                                           { "SetSelectionInternalById", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<int32_t>*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ids, sendNotification);
}
inline int32_t UnityEngine::UIElements::BaseTreeView::GetItemIndex(int32_t id, bool expand) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseTreeView*>(), { "GetItemIndex", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, id, expand);
}
inline bool UnityEngine::UIElements::BaseTreeView::IsExpanded(int32_t id) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseTreeView*>(), { "IsExpanded", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id);
}
inline void UnityEngine::UIElements::BaseTreeView::CollapseItem(int32_t id, bool collapseAllChildren, bool refresh) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseTreeView*>(),
                                                                                         { "CollapseItem", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, collapseAllChildren, refresh);
}
inline void UnityEngine::UIElements::BaseTreeView::ExpandItem(int32_t id, bool expandAllChildren, bool refresh) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseTreeView*>(),
                                                                                         { "ExpandItem", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, expandAllChildren, refresh);
}
inline bool UnityEngine::UIElements::BaseTreeView::IsExpandedByIndex(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseTreeView*>(), { "IsExpandedByIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, index);
}
inline void UnityEngine::UIElements::BaseTreeView::CollapseItemByIndex(int32_t index, bool collapseAll) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseTreeView*>(), { "CollapseItemByIndex", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, collapseAll);
}
inline void UnityEngine::UIElements::BaseTreeView::ExpandItemByIndex(int32_t index, bool expandAll) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseTreeView*>(), { "ExpandItemByIndex", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, expandAll);
}
inline int32_t UnityEngine::UIElements::BaseTreeView::_SetSelectionInternalById_b__54_0(int32_t id) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseTreeView*>(), { "<SetSelectionInternalById>b__54_0", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, id);
}
inline ::UnityEngine::UIElements::BaseTreeView* UnityEngine::UIElements::BaseTreeView::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::BaseTreeView*>());
}
inline ::UnityEngine::UIElements::BaseTreeView* UnityEngine::UIElements::BaseTreeView::New_ctor(int32_t itemHeight) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::BaseTreeView*>(itemHeight));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::BaseTreeView::BaseTreeView() {}
