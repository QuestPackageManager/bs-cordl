#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BaseListView.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVerticalCollectionView_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ListViewReorderMode_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BaseListView_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseListViewController_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseListView_def.hpp"
#include "UnityEngine/UIElements/zzzz__Button_def.hpp"
#include "UnityEngine/UIElements/zzzz__ChangeEvent_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__CollectionViewController_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__Foldout_def.hpp"
#include "UnityEngine/UIElements/zzzz__ICollectionDragAndDropController_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
#include "UnityEngine/UIElements/zzzz__Label_def.hpp"
#include "UnityEngine/UIElements/zzzz__ListViewDragger_def.hpp"
#include "UnityEngine/UIElements/zzzz__ListViewReorderMode_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextField_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlBoolAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlEnumAttributeDescription_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlStringAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView_UxmlTraits.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseListView_UxmlTraits::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext)>(&::UnityEngine::UIElements::BaseListView_UxmlTraits::Init)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x49839bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView_UxmlTraits*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView_UxmlTraits*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView_UxmlTraits._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseListView_UxmlTraits::*)()>(
    &::UnityEngine::UIElements::BaseListView_UxmlTraits::_ctor)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x4983e5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView_UxmlTraits*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& UnityEngine::UIElements::BaseListView_UxmlTraits::__cordl_internal_get_m_ShowFoldoutHeader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShowFoldoutHeader;
}
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& UnityEngine::UIElements::BaseListView_UxmlTraits::__cordl_internal_get_m_ShowFoldoutHeader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShowFoldoutHeader;
}
constexpr void UnityEngine::UIElements::BaseListView_UxmlTraits::__cordl_internal_set_m_ShowFoldoutHeader(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ShowFoldoutHeader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& UnityEngine::UIElements::BaseListView_UxmlTraits::__cordl_internal_get_m_HeaderTitle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HeaderTitle;
}
constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* const& UnityEngine::UIElements::BaseListView_UxmlTraits::__cordl_internal_get_m_HeaderTitle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HeaderTitle;
}
constexpr void UnityEngine::UIElements::BaseListView_UxmlTraits::__cordl_internal_set_m_HeaderTitle(::UnityEngine::UIElements::UxmlStringAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_HeaderTitle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& UnityEngine::UIElements::BaseListView_UxmlTraits::__cordl_internal_get_m_ShowAddRemoveFooter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShowAddRemoveFooter;
}
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& UnityEngine::UIElements::BaseListView_UxmlTraits::__cordl_internal_get_m_ShowAddRemoveFooter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShowAddRemoveFooter;
}
constexpr void UnityEngine::UIElements::BaseListView_UxmlTraits::__cordl_internal_set_m_ShowAddRemoveFooter(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ShowAddRemoveFooter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ListViewReorderMode>*&
UnityEngine::UIElements::BaseListView_UxmlTraits::__cordl_internal_get_m_ReorderMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReorderMode;
}
constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ListViewReorderMode>* const&
UnityEngine::UIElements::BaseListView_UxmlTraits::__cordl_internal_get_m_ReorderMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReorderMode;
}
constexpr void
UnityEngine::UIElements::BaseListView_UxmlTraits::__cordl_internal_set_m_ReorderMode(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ListViewReorderMode>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ReorderMode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& UnityEngine::UIElements::BaseListView_UxmlTraits::__cordl_internal_get_m_ShowBoundCollectionSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShowBoundCollectionSize;
}
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& UnityEngine::UIElements::BaseListView_UxmlTraits::__cordl_internal_get_m_ShowBoundCollectionSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShowBoundCollectionSize;
}
constexpr void UnityEngine::UIElements::BaseListView_UxmlTraits::__cordl_internal_set_m_ShowBoundCollectionSize(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ShowBoundCollectionSize)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::UIElements::BaseListView_UxmlTraits::Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag,
                                                                   ::UnityEngine::UIElements::CreationContext cc) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView_UxmlTraits*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, bag, cc);
}
inline void UnityEngine::UIElements::BaseListView_UxmlTraits::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView_UxmlTraits*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::BaseListView_UxmlTraits* UnityEngine::UIElements::BaseListView_UxmlTraits::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::BaseListView_UxmlTraits*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::BaseListView_UxmlTraits::BaseListView_UxmlTraits() {}
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.get_showBoundCollectionSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::BaseListView::*)()>(
    &::UnityEngine::UIElements::BaseListView::get_showBoundCollectionSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x498164c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(),
                                                                               "get_showBoundCollectionSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.set_showBoundCollectionSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)(bool)>(
    &::UnityEngine::UIElements::BaseListView::set_showBoundCollectionSize)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x4981654;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), "set_showBoundCollectionSize",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.get_showFoldoutHeader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::BaseListView::*)()>(
    &::UnityEngine::UIElements::BaseListView::get_showFoldoutHeader)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4981968;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(),
                                                                               "get_showFoldoutHeader", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.set_showFoldoutHeader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)(bool)>(
    &::UnityEngine::UIElements::BaseListView::set_showFoldoutHeader)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x4981970;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), "set_showFoldoutHeader",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.SetupArraySizeField
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)()>(&::UnityEngine::UIElements::BaseListView::SetupArraySizeField)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x4981670;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(),
                                                                               "SetupArraySizeField", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.set_headerTitle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)(::StringW)>(
    &::UnityEngine::UIElements::BaseListView::set_headerTitle)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x498224c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), "set_headerTitle",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.get_showAddRemoveFooter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::BaseListView::*)()>(
    &::UnityEngine::UIElements::BaseListView::get_showAddRemoveFooter)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x4981e20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(),
                                                                               "get_showAddRemoveFooter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.set_showAddRemoveFooter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)(bool)>(
    &::UnityEngine::UIElements::BaseListView::set_showAddRemoveFooter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4982268;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), "set_showAddRemoveFooter",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.EnableFooter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)(bool)>(&::UnityEngine::UIElements::BaseListView::EnableFooter)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x4981e30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), "EnableFooter",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.AddItems
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)(int32_t)>(&::UnityEngine::UIElements::BaseListView::AddItems)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4982270;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), "AddItems", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.OnArraySizeFieldChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)(::UnityEngine::UIElements::ChangeEvent_1<::StringW>*)>(
    &::UnityEngine::UIElements::BaseListView::OnArraySizeFieldChanged)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x4982318;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), "OnArraySizeFieldChanged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ChangeEvent_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.UpdateArraySizeField
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)()>(
    &::UnityEngine::UIElements::BaseListView::UpdateArraySizeField)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x4982188;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(),
                                                                               "UpdateArraySizeField", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.UpdateListViewLabel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)()>(&::UnityEngine::UIElements::BaseListView::UpdateListViewLabel)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x4981bcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(),
                                                                               "UpdateListViewLabel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.OnAddClicked
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)()>(&::UnityEngine::UIElements::BaseListView::OnAddClicked)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x49824e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), "OnAddClicked",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.OnRemoveClicked
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)()>(&::UnityEngine::UIElements::BaseListView::OnRemoveClicked)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x4982760;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(),
                                                                               "OnRemoveClicked", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.get_footer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::UIElements::BaseListView::*)()>(
    &::UnityEngine::UIElements::BaseListView::get_footer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4982978;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), "get_footer",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.get_viewController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::BaseListViewController* (::UnityEngine::UIElements::BaseListView::*)()>(
    &::UnityEngine::UIElements::BaseListView::get_viewController)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x498229c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(),
                                                                               "get_viewController", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.CreateVirtualizationController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)()>(
    &::UnityEngine::UIElements::BaseListView::CreateVirtualizationController)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x4982980;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), 104));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.SetViewController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)(::UnityEngine::UIElements::CollectionViewController*)>(
    &::UnityEngine::UIElements::BaseListView::SetViewController)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x49829c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), 106));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.OnItemAdded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)(::System::Collections::Generic::IEnumerable_1<int32_t>*)>(
    &::UnityEngine::UIElements::BaseListView::OnItemAdded)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x4982b88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), "OnItemAdded", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.OnItemsRemoved
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)(::System::Collections::Generic::IEnumerable_1<int32_t>*)>(
    &::UnityEngine::UIElements::BaseListView::OnItemsRemoved)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x4982ba4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), "OnItemsRemoved", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.OnItemsSourceSizeChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)()>(
    &::UnityEngine::UIElements::BaseListView::OnItemsSourceSizeChanged)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4982bc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(),
                                                                               "OnItemsSourceSizeChanged", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.add_reorderModeChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)(::System::Action*)>(
    &::UnityEngine::UIElements::BaseListView::add_reorderModeChanged)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x497d5c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), "add_reorderModeChanged",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.remove_reorderModeChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)(::System::Action*)>(
    &::UnityEngine::UIElements::BaseListView::remove_reorderModeChanged)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x497d718;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), "remove_reorderModeChanged",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.get_reorderMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::ListViewReorderMode (::UnityEngine::UIElements::BaseListView::*)()>(
    &::UnityEngine::UIElements::BaseListView::get_reorderMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4982c4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(),
                                                                               "get_reorderMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.set_reorderMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)(::UnityEngine::UIElements::ListViewReorderMode)>(
    &::UnityEngine::UIElements::BaseListView::set_reorderMode)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x4982c54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), "set_reorderMode", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ListViewReorderMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.CreateDragger
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::ListViewDragger* (::UnityEngine::UIElements::BaseListView::*)()>(
    &::UnityEngine::UIElements::BaseListView::CreateDragger)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x4982cb4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), 107));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.CreateDragAndDropController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::ICollectionDragAndDropController* (::UnityEngine::UIElements::BaseListView::*)()>(
    &::UnityEngine::UIElements::BaseListView::CreateDragAndDropController)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x4982d48;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), 108));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)()>(&::UnityEngine::UIElements::BaseListView::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x4982da4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.PostRefresh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)()>(&::UnityEngine::UIElements::BaseListView::PostRefresh)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x4982e50;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), 110));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.HandleItemNavigation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::BaseListView::*)(bool, bool)>(
    &::UnityEngine::UIElements::BaseListView::HandleItemNavigation)> {
  constexpr static std::size_t size = 0x694;
  constexpr static std::size_t addrs = 0x4982e74;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), 111));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView._OnAddClicked_b__36_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)()>(
    &::UnityEngine::UIElements::BaseListView::_OnAddClicked_b__36_0)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x49838ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(),
                                                                               "<OnAddClicked>b__36_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_ShowBoundCollectionSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShowBoundCollectionSize;
}
constexpr bool const& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_ShowBoundCollectionSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShowBoundCollectionSize;
}
constexpr void UnityEngine::UIElements::BaseListView::__cordl_internal_set_m_ShowBoundCollectionSize(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ShowBoundCollectionSize = value;
}
constexpr bool& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_ShowFoldoutHeader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShowFoldoutHeader;
}
constexpr bool const& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_ShowFoldoutHeader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShowFoldoutHeader;
}
constexpr void UnityEngine::UIElements::BaseListView::__cordl_internal_set_m_ShowFoldoutHeader(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ShowFoldoutHeader = value;
}
constexpr ::StringW& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_HeaderTitle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HeaderTitle;
}
constexpr ::StringW const& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_HeaderTitle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HeaderTitle;
}
constexpr void UnityEngine::UIElements::BaseListView::__cordl_internal_set_m_HeaderTitle(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_HeaderTitle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*& UnityEngine::UIElements::BaseListView::__cordl_internal_get_itemsAdded() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemsAdded;
}
constexpr ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* const& UnityEngine::UIElements::BaseListView::__cordl_internal_get_itemsAdded() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemsAdded;
}
constexpr void UnityEngine::UIElements::BaseListView::__cordl_internal_set_itemsAdded(::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___itemsAdded)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*& UnityEngine::UIElements::BaseListView::__cordl_internal_get_itemsRemoved() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemsRemoved;
}
constexpr ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* const& UnityEngine::UIElements::BaseListView::__cordl_internal_get_itemsRemoved() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemsRemoved;
}
constexpr void UnityEngine::UIElements::BaseListView::__cordl_internal_set_itemsRemoved(::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___itemsRemoved)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& UnityEngine::UIElements::BaseListView::__cordl_internal_get_itemsSourceSizeChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemsSourceSizeChanged;
}
constexpr ::System::Action* const& UnityEngine::UIElements::BaseListView::__cordl_internal_get_itemsSourceSizeChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemsSourceSizeChanged;
}
constexpr void UnityEngine::UIElements::BaseListView::__cordl_internal_set_itemsSourceSizeChanged(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___itemsSourceSizeChanged)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::Label*& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_ListViewLabel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ListViewLabel;
}
constexpr ::UnityEngine::UIElements::Label* const& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_ListViewLabel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ListViewLabel;
}
constexpr void UnityEngine::UIElements::BaseListView::__cordl_internal_set_m_ListViewLabel(::UnityEngine::UIElements::Label* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ListViewLabel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::Foldout*& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_Foldout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Foldout;
}
constexpr ::UnityEngine::UIElements::Foldout* const& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_Foldout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Foldout;
}
constexpr void UnityEngine::UIElements::BaseListView::__cordl_internal_set_m_Foldout(::UnityEngine::UIElements::Foldout* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Foldout)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::TextField*& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_ArraySizeField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ArraySizeField;
}
constexpr ::UnityEngine::UIElements::TextField* const& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_ArraySizeField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ArraySizeField;
}
constexpr void UnityEngine::UIElements::BaseListView::__cordl_internal_set_m_ArraySizeField(::UnityEngine::UIElements::TextField* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ArraySizeField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_IsOverMultiEditLimit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsOverMultiEditLimit;
}
constexpr bool const& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_IsOverMultiEditLimit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsOverMultiEditLimit;
}
constexpr void UnityEngine::UIElements::BaseListView::__cordl_internal_set_m_IsOverMultiEditLimit(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsOverMultiEditLimit = value;
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_Footer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Footer;
}
constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_Footer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Footer;
}
constexpr void UnityEngine::UIElements::BaseListView::__cordl_internal_set_m_Footer(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Footer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::Button*& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_AddButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AddButton;
}
constexpr ::UnityEngine::UIElements::Button* const& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_AddButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AddButton;
}
constexpr void UnityEngine::UIElements::BaseListView::__cordl_internal_set_m_AddButton(::UnityEngine::UIElements::Button* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AddButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::Button*& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_RemoveButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RemoveButton;
}
constexpr ::UnityEngine::UIElements::Button* const& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_RemoveButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RemoveButton;
}
constexpr void UnityEngine::UIElements::BaseListView::__cordl_internal_set_m_RemoveButton(::UnityEngine::UIElements::Button* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RemoveButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_ItemAddedCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ItemAddedCallback;
}
constexpr ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* const& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_ItemAddedCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ItemAddedCallback;
}
constexpr void UnityEngine::UIElements::BaseListView::__cordl_internal_set_m_ItemAddedCallback(::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ItemAddedCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_ItemRemovedCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ItemRemovedCallback;
}
constexpr ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* const& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_ItemRemovedCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ItemRemovedCallback;
}
constexpr void UnityEngine::UIElements::BaseListView::__cordl_internal_set_m_ItemRemovedCallback(::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ItemRemovedCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_ItemsSourceSizeChangedCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ItemsSourceSizeChangedCallback;
}
constexpr ::System::Action* const& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_ItemsSourceSizeChangedCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ItemsSourceSizeChangedCallback;
}
constexpr void UnityEngine::UIElements::BaseListView::__cordl_internal_set_m_ItemsSourceSizeChangedCallback(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ItemsSourceSizeChangedCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::ListViewReorderMode& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_ReorderMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReorderMode;
}
constexpr ::UnityEngine::UIElements::ListViewReorderMode const& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_ReorderMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReorderMode;
}
constexpr void UnityEngine::UIElements::BaseListView::__cordl_internal_set_m_ReorderMode(::UnityEngine::UIElements::ListViewReorderMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ReorderMode = value;
}
constexpr ::System::Action*& UnityEngine::UIElements::BaseListView::__cordl_internal_get_reorderModeChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reorderModeChanged;
}
constexpr ::System::Action* const& UnityEngine::UIElements::BaseListView::__cordl_internal_get_reorderModeChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reorderModeChanged;
}
constexpr void UnityEngine::UIElements::BaseListView::__cordl_internal_set_reorderModeChanged(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___reorderModeChanged)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_MaxMultiEditStr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxMultiEditStr;
}
constexpr ::StringW const& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_MaxMultiEditStr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxMultiEditStr;
}
constexpr void UnityEngine::UIElements::BaseListView::__cordl_internal_set_m_MaxMultiEditStr(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_MaxMultiEditStr)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::UIElements::BaseListView::setStaticF_k_SizeFieldLabel(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "k_SizeFieldLabel", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseListView::getStaticF_k_SizeFieldLabel() {
  return ::cordl_internals::getStaticField<::StringW, "k_SizeFieldLabel", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get>();
}
inline void UnityEngine::UIElements::BaseListView::setStaticF_ussClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseListView::getStaticF_ussClassName() {
  return ::cordl_internals::getStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get>();
}
inline void UnityEngine::UIElements::BaseListView::setStaticF_itemUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "itemUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseListView::getStaticF_itemUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "itemUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get>();
}
inline void UnityEngine::UIElements::BaseListView::setStaticF_emptyLabelUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "emptyLabelUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseListView::getStaticF_emptyLabelUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "emptyLabelUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get>();
}
inline void UnityEngine::UIElements::BaseListView::setStaticF_overMaxMultiEditLimitClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "overMaxMultiEditLimitClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseListView::getStaticF_overMaxMultiEditLimitClassName() {
  return ::cordl_internals::getStaticField<::StringW, "overMaxMultiEditLimitClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get>();
}
inline void UnityEngine::UIElements::BaseListView::setStaticF_reorderableUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "reorderableUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseListView::getStaticF_reorderableUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "reorderableUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get>();
}
inline void UnityEngine::UIElements::BaseListView::setStaticF_reorderableItemUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "reorderableItemUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseListView::getStaticF_reorderableItemUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "reorderableItemUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get>();
}
inline void UnityEngine::UIElements::BaseListView::setStaticF_reorderableItemContainerUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "reorderableItemContainerUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseListView::getStaticF_reorderableItemContainerUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "reorderableItemContainerUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get>();
}
inline void UnityEngine::UIElements::BaseListView::setStaticF_reorderableItemHandleUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "reorderableItemHandleUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseListView::getStaticF_reorderableItemHandleUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "reorderableItemHandleUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get>();
}
inline void UnityEngine::UIElements::BaseListView::setStaticF_reorderableItemHandleBarUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "reorderableItemHandleBarUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseListView::getStaticF_reorderableItemHandleBarUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "reorderableItemHandleBarUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get>();
}
inline void UnityEngine::UIElements::BaseListView::setStaticF_footerUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "footerUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseListView::getStaticF_footerUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "footerUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get>();
}
inline void UnityEngine::UIElements::BaseListView::setStaticF_foldoutHeaderUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "foldoutHeaderUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseListView::getStaticF_foldoutHeaderUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "foldoutHeaderUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get>();
}
inline void UnityEngine::UIElements::BaseListView::setStaticF_arraySizeFieldUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "arraySizeFieldUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseListView::getStaticF_arraySizeFieldUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "arraySizeFieldUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get>();
}
inline void UnityEngine::UIElements::BaseListView::setStaticF_arraySizeFieldWithHeaderUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "arraySizeFieldWithHeaderUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseListView::getStaticF_arraySizeFieldWithHeaderUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "arraySizeFieldWithHeaderUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get>();
}
inline void UnityEngine::UIElements::BaseListView::setStaticF_arraySizeFieldWithFooterUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "arraySizeFieldWithFooterUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseListView::getStaticF_arraySizeFieldWithFooterUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "arraySizeFieldWithFooterUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get>();
}
inline void UnityEngine::UIElements::BaseListView::setStaticF_listViewWithHeaderUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "listViewWithHeaderUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseListView::getStaticF_listViewWithHeaderUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "listViewWithHeaderUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get>();
}
inline void UnityEngine::UIElements::BaseListView::setStaticF_listViewWithFooterUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "listViewWithFooterUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseListView::getStaticF_listViewWithFooterUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "listViewWithFooterUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get>();
}
inline void UnityEngine::UIElements::BaseListView::setStaticF_scrollViewWithFooterUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "scrollViewWithFooterUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseListView::getStaticF_scrollViewWithFooterUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "scrollViewWithFooterUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get>();
}
inline void UnityEngine::UIElements::BaseListView::setStaticF_footerAddButtonName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "footerAddButtonName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseListView::getStaticF_footerAddButtonName() {
  return ::cordl_internals::getStaticField<::StringW, "footerAddButtonName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get>();
}
inline void UnityEngine::UIElements::BaseListView::setStaticF_footerRemoveButtonName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "footerRemoveButtonName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseListView::getStaticF_footerRemoveButtonName() {
  return ::cordl_internals::getStaticField<::StringW, "footerRemoveButtonName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get>();
}
inline void UnityEngine::UIElements::BaseListView::setStaticF_k_EmptyListStr(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "k_EmptyListStr", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseListView::getStaticF_k_EmptyListStr() {
  return ::cordl_internals::getStaticField<::StringW, "k_EmptyListStr", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get>();
}
inline bool UnityEngine::UIElements::BaseListView::get_showBoundCollectionSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(),
                                                                             "get_showBoundCollectionSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseListView::set_showBoundCollectionSize(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), "set_showBoundCollectionSize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::BaseListView::get_showFoldoutHeader() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(),
                                                                             "get_showFoldoutHeader", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseListView::set_showFoldoutHeader(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), "set_showFoldoutHeader",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::BaseListView::SetupArraySizeField() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(),
                                                                             "SetupArraySizeField", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseListView::set_headerTitle(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), "set_headerTitle", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::BaseListView::get_showAddRemoveFooter() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(),
                                                                             "get_showAddRemoveFooter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseListView::set_showAddRemoveFooter(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), "set_showAddRemoveFooter",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::BaseListView::EnableFooter(bool enabled) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), "EnableFooter",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, enabled);
}
inline void UnityEngine::UIElements::BaseListView::AddItems(int32_t itemCount) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), "AddItems",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, itemCount);
}
inline void UnityEngine::UIElements::BaseListView::OnArraySizeFieldChanged(::UnityEngine::UIElements::ChangeEvent_1<::StringW>* evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), "OnArraySizeFieldChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ChangeEvent_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::BaseListView::UpdateArraySizeField() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(),
                                                                             "UpdateArraySizeField", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseListView::UpdateListViewLabel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(),
                                                                             "UpdateListViewLabel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseListView::OnAddClicked() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), "OnAddClicked",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseListView::OnRemoveClicked() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), "OnRemoveClicked",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::BaseListView::get_footer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), "get_footer",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::BaseListViewController* UnityEngine::UIElements::BaseListView::get_viewController() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(),
                                                                             "get_viewController", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::BaseListViewController*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseListView::CreateVirtualizationController() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), 104)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseListView::SetViewController(::UnityEngine::UIElements::CollectionViewController* controller) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), 106)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, controller);
}
inline void UnityEngine::UIElements::BaseListView::OnItemAdded(::System::Collections::Generic::IEnumerable_1<int32_t>* indices) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), "OnItemAdded", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, indices);
}
inline void UnityEngine::UIElements::BaseListView::OnItemsRemoved(::System::Collections::Generic::IEnumerable_1<int32_t>* indices) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), "OnItemsRemoved", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, indices);
}
inline void UnityEngine::UIElements::BaseListView::OnItemsSourceSizeChanged() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(),
                                                                             "OnItemsSourceSizeChanged", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseListView::add_reorderModeChanged(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), "add_reorderModeChanged",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::BaseListView::remove_reorderModeChanged(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), "remove_reorderModeChanged",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::ListViewReorderMode UnityEngine::UIElements::BaseListView::get_reorderMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), "get_reorderMode",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ListViewReorderMode, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseListView::set_reorderMode(::UnityEngine::UIElements::ListViewReorderMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), "set_reorderMode", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ListViewReorderMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::ListViewDragger* UnityEngine::UIElements::BaseListView::CreateDragger() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), 107)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ListViewDragger*, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::ICollectionDragAndDropController* UnityEngine::UIElements::BaseListView::CreateDragAndDropController() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), 108)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ICollectionDragAndDropController*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseListView::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseListView::PostRefresh() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), 110)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::BaseListView::HandleItemNavigation(bool moveIn, bool altPressed) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), 111)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, moveIn, altPressed);
}
inline void UnityEngine::UIElements::BaseListView::_OnAddClicked_b__36_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(),
                                                                             "<OnAddClicked>b__36_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::BaseListView* UnityEngine::UIElements::BaseListView::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::BaseListView*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::BaseListView::BaseListView() {}
