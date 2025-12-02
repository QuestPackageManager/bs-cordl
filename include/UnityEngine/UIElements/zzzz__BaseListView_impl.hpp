#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BaseListView.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVerticalCollectionView_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BindingSourceSelectionMode_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ListViewReorderMode_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BaseListView_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseListViewController_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseListView_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingSourceSelectionMode_def.hpp"
#include "UnityEngine/UIElements/zzzz__Button_def.hpp"
#include "UnityEngine/UIElements/zzzz__ChangeEvent_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__CollectionViewController_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__Foldout_def.hpp"
#include "UnityEngine/UIElements/zzzz__ICollectionDragAndDropController_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
#include "UnityEngine/UIElements/zzzz__IVisualElementScheduledItem_def.hpp"
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
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x6af7510;

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
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x6af7ae0;

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
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& UnityEngine::UIElements::BaseListView_UxmlTraits::__cordl_internal_get_m_AllowAdd() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllowAdd;
}
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& UnityEngine::UIElements::BaseListView_UxmlTraits::__cordl_internal_get_m_AllowAdd() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllowAdd;
}
constexpr void UnityEngine::UIElements::BaseListView_UxmlTraits::__cordl_internal_set_m_AllowAdd(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AllowAdd)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& UnityEngine::UIElements::BaseListView_UxmlTraits::__cordl_internal_get_m_AllowRemove() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllowRemove;
}
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& UnityEngine::UIElements::BaseListView_UxmlTraits::__cordl_internal_get_m_AllowRemove() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllowRemove;
}
constexpr void UnityEngine::UIElements::BaseListView_UxmlTraits::__cordl_internal_set_m_AllowRemove(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AllowRemove)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::BindingSourceSelectionMode>*&
UnityEngine::UIElements::BaseListView_UxmlTraits::__cordl_internal_get_m_BindingSourceSelectionMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BindingSourceSelectionMode;
}
constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::BindingSourceSelectionMode>* const&
UnityEngine::UIElements::BaseListView_UxmlTraits::__cordl_internal_get_m_BindingSourceSelectionMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BindingSourceSelectionMode;
}
constexpr void UnityEngine::UIElements::BaseListView_UxmlTraits::__cordl_internal_set_m_BindingSourceSelectionMode(
    ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::BindingSourceSelectionMode>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_BindingSourceSelectionMode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  constexpr static std::size_t addrs = 0x6a24464;

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
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6a2446c;

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
  constexpr static std::size_t addrs = 0x6a24834;

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
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x6a2483c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), "set_showFoldoutHeader",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.AddFoldout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)()>(&::UnityEngine::UIElements::BaseListView::AddFoldout)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x6a24abc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), "AddFoldout",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.RemoveFoldout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)()>(&::UnityEngine::UIElements::BaseListView::RemoveFoldout)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a24c08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), "RemoveFoldout",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.SetupArraySizeField
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)()>(&::UnityEngine::UIElements::BaseListView::SetupArraySizeField)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x6a24508;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(),
                                                                               "SetupArraySizeField", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.get_headerTitle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::UIElements::BaseListView::*)()>(
    &::UnityEngine::UIElements::BaseListView::get_headerTitle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a25434;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(),
                                                                               "get_headerTitle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.set_headerTitle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)(::StringW)>(
    &::UnityEngine::UIElements::BaseListView::set_headerTitle)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6a2543c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), "set_headerTitle",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.get_makeHeader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Func_1<::UnityEngine::UIElements::VisualElement*>* (::UnityEngine::UIElements::BaseListView::*)()>(
    &::UnityEngine::UIElements::BaseListView::get_makeHeader)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a254f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(),
                                                                               "get_makeHeader", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.set_makeHeader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)(::System::Func_1<::UnityEngine::UIElements::VisualElement*>*)>(
    &::UnityEngine::UIElements::BaseListView::set_makeHeader)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x6a254fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), "set_makeHeader", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<::UnityEngine::UIElements::VisualElement*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.get_makeFooter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Func_1<::UnityEngine::UIElements::VisualElement*>* (::UnityEngine::UIElements::BaseListView::*)()>(
    &::UnityEngine::UIElements::BaseListView::get_makeFooter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a256fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(),
                                                                               "get_makeFooter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.set_makeFooter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)(::System::Func_1<::UnityEngine::UIElements::VisualElement*>*)>(
    &::UnityEngine::UIElements::BaseListView::set_makeFooter)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x6a25704;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), "set_makeFooter", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<::UnityEngine::UIElements::VisualElement*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.get_showAddRemoveFooter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::BaseListView::*)()>(
    &::UnityEngine::UIElements::BaseListView::get_showAddRemoveFooter)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6a24f6c;

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
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6a258c0;

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
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0x6a24f7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), "EnableFooter",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.get_trackItemCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::IVisualElementScheduledItem* (::UnityEngine::UIElements::BaseListView::*)()>(
    &::UnityEngine::UIElements::BaseListView::get_trackItemCount)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x6a259c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(),
                                                                               "get_trackItemCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.get_trackCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Action* (::UnityEngine::UIElements::BaseListView::*)()>(
    &::UnityEngine::UIElements::BaseListView::get_trackCount)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6a25b0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(),
                                                                               "get_trackCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.get_untilManualBindingSourceSelectionMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Func_1<bool>* (::UnityEngine::UIElements::BaseListView::*)()>(
    &::UnityEngine::UIElements::BaseListView::get_untilManualBindingSourceSelectionMode)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6a25bc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), "get_untilManualBindingSourceSelectionMode",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.get_bindingSourceSelectionMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::BindingSourceSelectionMode (::UnityEngine::UIElements::BaseListView::*)()>(
    &::UnityEngine::UIElements::BaseListView::get_bindingSourceSelectionMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a25c7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(),
                                                                               "get_bindingSourceSelectionMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.set_bindingSourceSelectionMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)(::UnityEngine::UIElements::BindingSourceSelectionMode)>(
    &::UnityEngine::UIElements::BaseListView::set_bindingSourceSelectionMode)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6a25c84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), "set_bindingSourceSelectionMode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BindingSourceSelectionMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.get_autoAssignSource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::BaseListView::*)()>(
    &::UnityEngine::UIElements::BaseListView::get_autoAssignSource)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6a17aa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(),
                                                                               "get_autoAssignSource", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.AddItems
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)(int32_t)>(&::UnityEngine::UIElements::BaseListView::AddItems)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6a25db8;

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
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x6a25e8c;

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
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6a2535c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(),
                                                                               "UpdateArraySizeField", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.UpdateListViewLabel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)()>(&::UnityEngine::UIElements::BaseListView::UpdateListViewLabel)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x6a24c4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(),
                                                                               "UpdateListViewLabel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.OnAddClicked
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)()>(&::UnityEngine::UIElements::BaseListView::OnAddClicked)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x6a260ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), "OnAddClicked",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.OnRemoveClicked
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)()>(&::UnityEngine::UIElements::BaseListView::OnRemoveClicked)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x6a26518;

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
  constexpr static std::size_t addrs = 0x6a2677c;

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
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a2606c;

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
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6a26784;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), 140));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.SetViewController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)(::UnityEngine::UIElements::CollectionViewController*)>(
    &::UnityEngine::UIElements::BaseListView::SetViewController)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x6a267d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), 142));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.OnItemAdded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)(::System::Collections::Generic::IEnumerable_1<int32_t>*)>(
    &::UnityEngine::UIElements::BaseListView::OnItemAdded)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6a269e0;

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
  constexpr static std::size_t addrs = 0x6a269fc;

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
  constexpr static std::size_t addrs = 0x6a2648c;

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
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6a1fd24;

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
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6a1fe88;

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
  constexpr static std::size_t addrs = 0x6a26a18;

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
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6a26a20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), "set_reorderMode", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ListViewReorderMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.get_makeNoneElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Func_1<::UnityEngine::UIElements::VisualElement*>* (::UnityEngine::UIElements::BaseListView::*)()>(
    &::UnityEngine::UIElements::BaseListView::get_makeNoneElement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a26af4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(),
                                                                               "get_makeNoneElement", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.set_makeNoneElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)(::System::Func_1<::UnityEngine::UIElements::VisualElement*>*)>(
    &::UnityEngine::UIElements::BaseListView::set_makeNoneElement)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6a26afc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), "set_makeNoneElement", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<::UnityEngine::UIElements::VisualElement*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.get_allowAdd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::BaseListView::*)()>(&::UnityEngine::UIElements::BaseListView::get_allowAdd)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a26bcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), "get_allowAdd",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.set_allowAdd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)(bool)>(&::UnityEngine::UIElements::BaseListView::set_allowAdd)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6a26bd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), "set_allowAdd",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.get_overridingAddButtonBehavior
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Action_2<::UnityEngine::UIElements::BaseListView*, ::UnityEngine::UIElements::Button*>* (
    ::UnityEngine::UIElements::BaseListView::*)()>(&::UnityEngine::UIElements::BaseListView::get_overridingAddButtonBehavior)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a26c7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), "get_overridingAddButtonBehavior",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.set_overridingAddButtonBehavior
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)(
    ::System::Action_2<::UnityEngine::UIElements::BaseListView*, ::UnityEngine::UIElements::Button*>*)>(&::UnityEngine::UIElements::BaseListView::set_overridingAddButtonBehavior)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6a26c84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), "set_overridingAddButtonBehavior", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::UIElements::BaseListView*, ::UnityEngine::UIElements::Button*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.get_onAdd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Action_1<::UnityEngine::UIElements::BaseListView*>* (::UnityEngine::UIElements::BaseListView::*)()>(
    &::UnityEngine::UIElements::BaseListView::get_onAdd)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a26d40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), "get_onAdd",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.set_onAdd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)(::System::Action_1<::UnityEngine::UIElements::BaseListView*>*)>(
    &::UnityEngine::UIElements::BaseListView::set_onAdd)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6a26d48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), "set_onAdd", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::UIElements::BaseListView*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.get_allowRemove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::BaseListView::*)()>(&::UnityEngine::UIElements::BaseListView::get_allowRemove)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a26e04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(),
                                                                               "get_allowRemove", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.set_allowRemove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)(bool)>(&::UnityEngine::UIElements::BaseListView::set_allowRemove)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6a26e0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), "set_allowRemove",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.get_onRemove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Action_1<::UnityEngine::UIElements::BaseListView*>* (::UnityEngine::UIElements::BaseListView::*)()>(
    &::UnityEngine::UIElements::BaseListView::get_onRemove)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a26eb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), "get_onRemove",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.set_onRemove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)(::System::Action_1<::UnityEngine::UIElements::BaseListView*>*)>(
    &::UnityEngine::UIElements::BaseListView::set_onRemove)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6a26ebc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), "set_onRemove", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::UIElements::BaseListView*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.CreateDragger
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::ListViewDragger* (::UnityEngine::UIElements::BaseListView::*)()>(
    &::UnityEngine::UIElements::BaseListView::CreateDragger)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6a26f78;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), 143));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.CreateDragAndDropController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::ICollectionDragAndDropController* (::UnityEngine::UIElements::BaseListView::*)()>(
    &::UnityEngine::UIElements::BaseListView::CreateDragAndDropController)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6a27018;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), 144));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)()>(&::UnityEngine::UIElements::BaseListView::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6a2707c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)(::System::Collections::IList*, float_t)>(
    &::UnityEngine::UIElements::BaseListView::_ctor)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6a27088;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.PostRefresh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)()>(&::UnityEngine::UIElements::BaseListView::PostRefresh)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6a27180;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), 146));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.HandleItemNavigation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::BaseListView::*)(bool, bool)>(
    &::UnityEngine::UIElements::BaseListView::HandleItemNavigation)> {
  constexpr static std::size_t size = 0x61c;
  constexpr static std::size_t addrs = 0x6a271a4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), 147));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView._get_trackCount_b__65_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)()>(
    &::UnityEngine::UIElements::BaseListView::_get_trackCount_b__65_0)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x6a284f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(),
                                                                               "<get_trackCount>b__65_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView._get_untilManualBindingSourceSelectionMode_b__68_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::BaseListView::*)()>(
    &::UnityEngine::UIElements::BaseListView::_get_untilManualBindingSourceSelectionMode_b__68_0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6a28608;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(),
                                                 "<get_untilManualBindingSourceSelectionMode>b__68_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView._OnAddClicked_b__81_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)()>(
    &::UnityEngine::UIElements::BaseListView::_OnAddClicked_b__81_0)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x6a28618;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(),
                                                                               "<OnAddClicked>b__81_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::BaseListView::__cordl_internal_get_drawnHeader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___drawnHeader;
}
constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::BaseListView::__cordl_internal_get_drawnHeader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___drawnHeader;
}
constexpr void UnityEngine::UIElements::BaseListView::__cordl_internal_set_drawnHeader(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___drawnHeader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Func_1<::UnityEngine::UIElements::VisualElement*>*& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_MakeHeader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MakeHeader;
}
constexpr ::System::Func_1<::UnityEngine::UIElements::VisualElement*>* const& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_MakeHeader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MakeHeader;
}
constexpr void UnityEngine::UIElements::BaseListView::__cordl_internal_set_m_MakeHeader(::System::Func_1<::UnityEngine::UIElements::VisualElement*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_MakeHeader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::BaseListView::__cordl_internal_get_drawnFooter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___drawnFooter;
}
constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::BaseListView::__cordl_internal_get_drawnFooter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___drawnFooter;
}
constexpr void UnityEngine::UIElements::BaseListView::__cordl_internal_set_drawnFooter(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___drawnFooter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Func_1<::UnityEngine::UIElements::VisualElement*>*& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_MakeFooter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MakeFooter;
}
constexpr ::System::Func_1<::UnityEngine::UIElements::VisualElement*>* const& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_MakeFooter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MakeFooter;
}
constexpr void UnityEngine::UIElements::BaseListView::__cordl_internal_set_m_MakeFooter(::System::Func_1<::UnityEngine::UIElements::VisualElement*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_MakeFooter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_ShowAddRemoveFooter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShowAddRemoveFooter;
}
constexpr bool const& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_ShowAddRemoveFooter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShowAddRemoveFooter;
}
constexpr void UnityEngine::UIElements::BaseListView::__cordl_internal_set_m_ShowAddRemoveFooter(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ShowAddRemoveFooter = value;
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
constexpr ::UnityEngine::UIElements::IVisualElementScheduledItem*& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_TrackedItem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TrackedItem;
}
constexpr ::UnityEngine::UIElements::IVisualElementScheduledItem* const& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_TrackedItem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TrackedItem;
}
constexpr void UnityEngine::UIElements::BaseListView::__cordl_internal_set_m_TrackedItem(::UnityEngine::UIElements::IVisualElementScheduledItem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TrackedItem)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_TrackCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TrackCount;
}
constexpr ::System::Action* const& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_TrackCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TrackCount;
}
constexpr void UnityEngine::UIElements::BaseListView::__cordl_internal_set_m_TrackCount(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TrackCount)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Func_1<bool>*& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_WhileAutoAssign() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WhileAutoAssign;
}
constexpr ::System::Func_1<bool>* const& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_WhileAutoAssign() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WhileAutoAssign;
}
constexpr void UnityEngine::UIElements::BaseListView::__cordl_internal_set_m_WhileAutoAssign(::System::Func_1<bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_WhileAutoAssign)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::BindingSourceSelectionMode& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_BindingSourceSelectionMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BindingSourceSelectionMode;
}
constexpr ::UnityEngine::UIElements::BindingSourceSelectionMode const& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_BindingSourceSelectionMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BindingSourceSelectionMode;
}
constexpr void UnityEngine::UIElements::BaseListView::__cordl_internal_set_m_BindingSourceSelectionMode(::UnityEngine::UIElements::BindingSourceSelectionMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BindingSourceSelectionMode = value;
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
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_NoneElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NoneElement;
}
constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_NoneElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NoneElement;
}
constexpr void UnityEngine::UIElements::BaseListView::__cordl_internal_set_m_NoneElement(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_NoneElement)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Func_1<::UnityEngine::UIElements::VisualElement*>*& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_MakeNoneElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MakeNoneElement;
}
constexpr ::System::Func_1<::UnityEngine::UIElements::VisualElement*>* const& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_MakeNoneElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MakeNoneElement;
}
constexpr void UnityEngine::UIElements::BaseListView::__cordl_internal_set_m_MakeNoneElement(::System::Func_1<::UnityEngine::UIElements::VisualElement*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_MakeNoneElement)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_AllowAdd() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllowAdd;
}
constexpr bool const& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_AllowAdd() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllowAdd;
}
constexpr void UnityEngine::UIElements::BaseListView::__cordl_internal_set_m_AllowAdd(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AllowAdd = value;
}
constexpr ::System::Action_2<::UnityEngine::UIElements::BaseListView*, ::UnityEngine::UIElements::Button*>*&
UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_OverridingAddButtonBehavior() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OverridingAddButtonBehavior;
}
constexpr ::System::Action_2<::UnityEngine::UIElements::BaseListView*, ::UnityEngine::UIElements::Button*>* const&
UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_OverridingAddButtonBehavior() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OverridingAddButtonBehavior;
}
constexpr void
UnityEngine::UIElements::BaseListView::__cordl_internal_set_m_OverridingAddButtonBehavior(::System::Action_2<::UnityEngine::UIElements::BaseListView*, ::UnityEngine::UIElements::Button*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OverridingAddButtonBehavior)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::UnityEngine::UIElements::BaseListView*>*& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_OnAdd() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnAdd;
}
constexpr ::System::Action_1<::UnityEngine::UIElements::BaseListView*>* const& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_OnAdd() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnAdd;
}
constexpr void UnityEngine::UIElements::BaseListView::__cordl_internal_set_m_OnAdd(::System::Action_1<::UnityEngine::UIElements::BaseListView*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OnAdd)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_AllowRemove() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllowRemove;
}
constexpr bool const& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_AllowRemove() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllowRemove;
}
constexpr void UnityEngine::UIElements::BaseListView::__cordl_internal_set_m_AllowRemove(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AllowRemove = value;
}
constexpr ::System::Action_1<::UnityEngine::UIElements::BaseListView*>*& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_OnRemove() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnRemove;
}
constexpr ::System::Action_1<::UnityEngine::UIElements::BaseListView*>* const& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_OnRemove() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnRemove;
}
constexpr void UnityEngine::UIElements::BaseListView::__cordl_internal_set_m_OnRemove(::System::Action_1<::UnityEngine::UIElements::BaseListView*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OnRemove)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
inline void UnityEngine::UIElements::BaseListView::setStaticF_showBoundCollectionSizeProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "showBoundCollectionSizeProperty",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get>(std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::BaseListView::getStaticF_showBoundCollectionSizeProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "showBoundCollectionSizeProperty",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get>();
}
inline void UnityEngine::UIElements::BaseListView::setStaticF_showFoldoutHeaderProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "showFoldoutHeaderProperty",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get>(std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::BaseListView::getStaticF_showFoldoutHeaderProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "showFoldoutHeaderProperty",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get>();
}
inline void UnityEngine::UIElements::BaseListView::setStaticF_headerTitleProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "headerTitleProperty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get>(
      std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::BaseListView::getStaticF_headerTitleProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "headerTitleProperty",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get>();
}
inline void UnityEngine::UIElements::BaseListView::setStaticF_makeHeaderProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "makeHeaderProperty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get>(
      std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::BaseListView::getStaticF_makeHeaderProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "makeHeaderProperty",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get>();
}
inline void UnityEngine::UIElements::BaseListView::setStaticF_makeFooterProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "makeFooterProperty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get>(
      std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::BaseListView::getStaticF_makeFooterProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "makeFooterProperty",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get>();
}
inline void UnityEngine::UIElements::BaseListView::setStaticF_showAddRemoveFooterProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "showAddRemoveFooterProperty",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get>(std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::BaseListView::getStaticF_showAddRemoveFooterProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "showAddRemoveFooterProperty",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get>();
}
inline void UnityEngine::UIElements::BaseListView::setStaticF_bindingSourceSelectionModeProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "bindingSourceSelectionModeProperty",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get>(std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::BaseListView::getStaticF_bindingSourceSelectionModeProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "bindingSourceSelectionModeProperty",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get>();
}
inline void UnityEngine::UIElements::BaseListView::setStaticF_reorderModeProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "reorderModeProperty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get>(
      std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::BaseListView::getStaticF_reorderModeProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "reorderModeProperty",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get>();
}
inline void UnityEngine::UIElements::BaseListView::setStaticF_makeNoneElementProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "makeNoneElementProperty",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get>(std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::BaseListView::getStaticF_makeNoneElementProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "makeNoneElementProperty",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get>();
}
inline void UnityEngine::UIElements::BaseListView::setStaticF_allowAddProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "allowAddProperty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get>(
      std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::BaseListView::getStaticF_allowAddProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "allowAddProperty",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get>();
}
inline void UnityEngine::UIElements::BaseListView::setStaticF_overridingAddButtonBehaviorProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "overridingAddButtonBehaviorProperty",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get>(std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::BaseListView::getStaticF_overridingAddButtonBehaviorProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "overridingAddButtonBehaviorProperty",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get>();
}
inline void UnityEngine::UIElements::BaseListView::setStaticF_onAddProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "onAddProperty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get>(
      std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::BaseListView::getStaticF_onAddProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "onAddProperty",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get>();
}
inline void UnityEngine::UIElements::BaseListView::setStaticF_allowRemoveProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "allowRemoveProperty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get>(
      std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::BaseListView::getStaticF_allowRemoveProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "allowRemoveProperty",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get>();
}
inline void UnityEngine::UIElements::BaseListView::setStaticF_onRemoveProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "onRemoveProperty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get>(
      std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::BaseListView::getStaticF_onRemoveProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "onRemoveProperty",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get>();
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
inline void UnityEngine::UIElements::BaseListView::AddFoldout() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), "AddFoldout",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseListView::RemoveFoldout() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), "RemoveFoldout",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseListView::SetupArraySizeField() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(),
                                                                             "SetupArraySizeField", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::UIElements::BaseListView::get_headerTitle() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), "get_headerTitle",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseListView::set_headerTitle(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), "set_headerTitle", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Func_1<::UnityEngine::UIElements::VisualElement*>* UnityEngine::UIElements::BaseListView::get_makeHeader() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), "get_makeHeader",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Func_1<::UnityEngine::UIElements::VisualElement*>*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseListView::set_makeHeader(::System::Func_1<::UnityEngine::UIElements::VisualElement*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), "set_makeHeader", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<::UnityEngine::UIElements::VisualElement*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Func_1<::UnityEngine::UIElements::VisualElement*>* UnityEngine::UIElements::BaseListView::get_makeFooter() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), "get_makeFooter",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Func_1<::UnityEngine::UIElements::VisualElement*>*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseListView::set_makeFooter(::System::Func_1<::UnityEngine::UIElements::VisualElement*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), "set_makeFooter", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<::UnityEngine::UIElements::VisualElement*>*>::get() })));
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
inline ::UnityEngine::UIElements::IVisualElementScheduledItem* UnityEngine::UIElements::BaseListView::get_trackItemCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(),
                                                                             "get_trackItemCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IVisualElementScheduledItem*, false>(this, ___internal_method);
}
inline ::System::Action* UnityEngine::UIElements::BaseListView::get_trackCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), "get_trackCount",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Action*, false>(this, ___internal_method);
}
inline ::System::Func_1<bool>* UnityEngine::UIElements::BaseListView::get_untilManualBindingSourceSelectionMode() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), "get_untilManualBindingSourceSelectionMode",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Func_1<bool>*, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::BindingSourceSelectionMode UnityEngine::UIElements::BaseListView::get_bindingSourceSelectionMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(),
                                                                             "get_bindingSourceSelectionMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::BindingSourceSelectionMode, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseListView::set_bindingSourceSelectionMode(::UnityEngine::UIElements::BindingSourceSelectionMode value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), "set_bindingSourceSelectionMode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BindingSourceSelectionMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::BaseListView::get_autoAssignSource() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(),
                                                                             "get_autoAssignSource", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
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
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), 140)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseListView::SetViewController(::UnityEngine::UIElements::CollectionViewController* controller) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), 142)));
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
inline ::System::Func_1<::UnityEngine::UIElements::VisualElement*>* UnityEngine::UIElements::BaseListView::get_makeNoneElement() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(),
                                                                             "get_makeNoneElement", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Func_1<::UnityEngine::UIElements::VisualElement*>*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseListView::set_makeNoneElement(::System::Func_1<::UnityEngine::UIElements::VisualElement*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), "set_makeNoneElement", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<::UnityEngine::UIElements::VisualElement*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::BaseListView::get_allowAdd() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), "get_allowAdd",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseListView::set_allowAdd(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), "set_allowAdd",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Action_2<::UnityEngine::UIElements::BaseListView*, ::UnityEngine::UIElements::Button*>* UnityEngine::UIElements::BaseListView::get_overridingAddButtonBehavior() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(),
                                                                             "get_overridingAddButtonBehavior", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Action_2<::UnityEngine::UIElements::BaseListView*, ::UnityEngine::UIElements::Button*>*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseListView::set_overridingAddButtonBehavior(::System::Action_2<::UnityEngine::UIElements::BaseListView*, ::UnityEngine::UIElements::Button*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), "set_overridingAddButtonBehavior", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::UIElements::BaseListView*, ::UnityEngine::UIElements::Button*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Action_1<::UnityEngine::UIElements::BaseListView*>* UnityEngine::UIElements::BaseListView::get_onAdd() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), "get_onAdd",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Action_1<::UnityEngine::UIElements::BaseListView*>*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseListView::set_onAdd(::System::Action_1<::UnityEngine::UIElements::BaseListView*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), "set_onAdd", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::UIElements::BaseListView*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::BaseListView::get_allowRemove() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), "get_allowRemove",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseListView::set_allowRemove(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), "set_allowRemove",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Action_1<::UnityEngine::UIElements::BaseListView*>* UnityEngine::UIElements::BaseListView::get_onRemove() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), "get_onRemove",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Action_1<::UnityEngine::UIElements::BaseListView*>*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseListView::set_onRemove(::System::Action_1<::UnityEngine::UIElements::BaseListView*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), "set_onRemove", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::UIElements::BaseListView*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::ListViewDragger* UnityEngine::UIElements::BaseListView::CreateDragger() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), 143)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ListViewDragger*, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::ICollectionDragAndDropController* UnityEngine::UIElements::BaseListView::CreateDragAndDropController() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), 144)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ICollectionDragAndDropController*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseListView::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseListView::_ctor(::System::Collections::IList* itemsSource, float_t itemHeight) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, itemsSource, itemHeight);
}
inline void UnityEngine::UIElements::BaseListView::PostRefresh() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), 146)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::BaseListView::HandleItemNavigation(bool moveIn, bool altPressed) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(), 147)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, moveIn, altPressed);
}
inline void UnityEngine::UIElements::BaseListView::_get_trackCount_b__65_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(),
                                                                             "<get_trackCount>b__65_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::BaseListView::_get_untilManualBindingSourceSelectionMode_b__68_0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(),
                                               "<get_untilManualBindingSourceSelectionMode>b__68_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseListView::_OnAddClicked_b__81_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseListView*>::get(),
                                                                             "<OnAddClicked>b__81_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::BaseListView* UnityEngine::UIElements::BaseListView::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::BaseListView*>());
}
inline ::UnityEngine::UIElements::BaseListView* UnityEngine::UIElements::BaseListView::New_ctor(::System::Collections::IList* itemsSource, float_t itemHeight) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::BaseListView*>(itemsSource, itemHeight));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::BaseListView::BaseListView() {}
