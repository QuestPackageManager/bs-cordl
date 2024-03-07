#pragma once
#include "UnityEngine/UIElements/zzzz__BaseVerticalCollectionView_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BindableElement_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ListViewReorderMode_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ListView_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/UIElements/zzzz__AlternatingRowBackground_def.hpp"
#include "UnityEngine/UIElements/zzzz__Button_def.hpp"
#include "UnityEngine/UIElements/zzzz__ChangeEvent_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__CollectionVirtualizationMethod_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__Foldout_def.hpp"
#include "UnityEngine/UIElements/zzzz__ICollectionDragAndDropController_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
#include "UnityEngine/UIElements/zzzz__Label_def.hpp"
#include "UnityEngine/UIElements/zzzz__ListViewController_def.hpp"
#include "UnityEngine/UIElements/zzzz__ListViewDragger_def.hpp"
#include "UnityEngine/UIElements/zzzz__ListViewReorderMode_def.hpp"
#include "UnityEngine/UIElements/zzzz__ListView_def.hpp"
#include "UnityEngine/UIElements/zzzz__SelectionType_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextField_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlBoolAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlEnumAttributeDescription_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlIntAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlStringAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::__ListView__UxmlTraits.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__ListView__UxmlTraits::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext)>(&::UnityEngine::UIElements::__ListView__UxmlTraits::Init)> {
  constexpr static std::size_t size = 0x3d4;
  constexpr static std::size_t addrs = 0x2f94e60;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__ListView__UxmlTraits*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__ListView__UxmlTraits*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__ListView__UxmlTraits._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__ListView__UxmlTraits::*)()>(
    &::UnityEngine::UIElements::__ListView__UxmlTraits::_ctor)> {
  constexpr static std::size_t size = 0x51c;
  constexpr static std::size_t addrs = 0x2f95234;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__ListView__UxmlTraits*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription*& UnityEngine::UIElements::__ListView__UxmlTraits::__cordl_internal_get_m_FixedItemHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FixedItemHeight;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlIntAttributeDescription*> const&
UnityEngine::UIElements::__ListView__UxmlTraits::__cordl_internal_get_m_FixedItemHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FixedItemHeight;
}
constexpr void UnityEngine::UIElements::__ListView__UxmlTraits::__cordl_internal_set_m_FixedItemHeight(::UnityEngine::UIElements::UxmlIntAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_FixedItemHeight)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::CollectionVirtualizationMethod>*&
UnityEngine::UIElements::__ListView__UxmlTraits::__cordl_internal_get_m_VirtualizationMethod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VirtualizationMethod;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::CollectionVirtualizationMethod>*> const&
UnityEngine::UIElements::__ListView__UxmlTraits::__cordl_internal_get_m_VirtualizationMethod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VirtualizationMethod;
}
constexpr void UnityEngine::UIElements::__ListView__UxmlTraits::__cordl_internal_set_m_VirtualizationMethod(
    ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::CollectionVirtualizationMethod>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_VirtualizationMethod)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& UnityEngine::UIElements::__ListView__UxmlTraits::__cordl_internal_get_m_ShowBorder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShowBorder;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlBoolAttributeDescription*> const&
UnityEngine::UIElements::__ListView__UxmlTraits::__cordl_internal_get_m_ShowBorder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShowBorder;
}
constexpr void UnityEngine::UIElements::__ListView__UxmlTraits::__cordl_internal_set_m_ShowBorder(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ShowBorder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SelectionType>*&
UnityEngine::UIElements::__ListView__UxmlTraits::__cordl_internal_get_m_SelectionType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectionType;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SelectionType>*> const&
UnityEngine::UIElements::__ListView__UxmlTraits::__cordl_internal_get_m_SelectionType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectionType;
}
constexpr void
UnityEngine::UIElements::__ListView__UxmlTraits::__cordl_internal_set_m_SelectionType(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SelectionType>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SelectionType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::AlternatingRowBackground>*&
UnityEngine::UIElements::__ListView__UxmlTraits::__cordl_internal_get_m_ShowAlternatingRowBackgrounds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShowAlternatingRowBackgrounds;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::AlternatingRowBackground>*> const&
UnityEngine::UIElements::__ListView__UxmlTraits::__cordl_internal_get_m_ShowAlternatingRowBackgrounds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShowAlternatingRowBackgrounds;
}
constexpr void UnityEngine::UIElements::__ListView__UxmlTraits::__cordl_internal_set_m_ShowAlternatingRowBackgrounds(
    ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::AlternatingRowBackground>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ShowAlternatingRowBackgrounds)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& UnityEngine::UIElements::__ListView__UxmlTraits::__cordl_internal_get_m_ShowFoldoutHeader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShowFoldoutHeader;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlBoolAttributeDescription*> const&
UnityEngine::UIElements::__ListView__UxmlTraits::__cordl_internal_get_m_ShowFoldoutHeader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShowFoldoutHeader;
}
constexpr void UnityEngine::UIElements::__ListView__UxmlTraits::__cordl_internal_set_m_ShowFoldoutHeader(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ShowFoldoutHeader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& UnityEngine::UIElements::__ListView__UxmlTraits::__cordl_internal_get_m_HeaderTitle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HeaderTitle;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlStringAttributeDescription*> const&
UnityEngine::UIElements::__ListView__UxmlTraits::__cordl_internal_get_m_HeaderTitle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HeaderTitle;
}
constexpr void UnityEngine::UIElements::__ListView__UxmlTraits::__cordl_internal_set_m_HeaderTitle(::UnityEngine::UIElements::UxmlStringAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_HeaderTitle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& UnityEngine::UIElements::__ListView__UxmlTraits::__cordl_internal_get_m_ShowAddRemoveFooter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShowAddRemoveFooter;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlBoolAttributeDescription*> const&
UnityEngine::UIElements::__ListView__UxmlTraits::__cordl_internal_get_m_ShowAddRemoveFooter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShowAddRemoveFooter;
}
constexpr void UnityEngine::UIElements::__ListView__UxmlTraits::__cordl_internal_set_m_ShowAddRemoveFooter(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ShowAddRemoveFooter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& UnityEngine::UIElements::__ListView__UxmlTraits::__cordl_internal_get_m_Reorderable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Reorderable;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlBoolAttributeDescription*> const&
UnityEngine::UIElements::__ListView__UxmlTraits::__cordl_internal_get_m_Reorderable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Reorderable;
}
constexpr void UnityEngine::UIElements::__ListView__UxmlTraits::__cordl_internal_set_m_Reorderable(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Reorderable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ListViewReorderMode>*&
UnityEngine::UIElements::__ListView__UxmlTraits::__cordl_internal_get_m_ReorderMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReorderMode;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ListViewReorderMode>*> const&
UnityEngine::UIElements::__ListView__UxmlTraits::__cordl_internal_get_m_ReorderMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReorderMode;
}
constexpr void
UnityEngine::UIElements::__ListView__UxmlTraits::__cordl_internal_set_m_ReorderMode(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ListViewReorderMode>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ReorderMode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& UnityEngine::UIElements::__ListView__UxmlTraits::__cordl_internal_get_m_ShowBoundCollectionSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShowBoundCollectionSize;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlBoolAttributeDescription*> const&
UnityEngine::UIElements::__ListView__UxmlTraits::__cordl_internal_get_m_ShowBoundCollectionSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShowBoundCollectionSize;
}
constexpr void UnityEngine::UIElements::__ListView__UxmlTraits::__cordl_internal_set_m_ShowBoundCollectionSize(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ShowBoundCollectionSize)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& UnityEngine::UIElements::__ListView__UxmlTraits::__cordl_internal_get_m_HorizontalScrollingEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HorizontalScrollingEnabled;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlBoolAttributeDescription*> const&
UnityEngine::UIElements::__ListView__UxmlTraits::__cordl_internal_get_m_HorizontalScrollingEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HorizontalScrollingEnabled;
}
constexpr void UnityEngine::UIElements::__ListView__UxmlTraits::__cordl_internal_set_m_HorizontalScrollingEnabled(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_HorizontalScrollingEnabled)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::UIElements::__ListView__UxmlTraits::Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag,
                                                                  ::UnityEngine::UIElements::CreationContext cc) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__ListView__UxmlTraits*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, bag, cc);
}
inline ::UnityEngine::UIElements::__ListView__UxmlTraits* UnityEngine::UIElements::__ListView__UxmlTraits::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::__ListView__UxmlTraits*>());
}
inline void UnityEngine::UIElements::__ListView__UxmlTraits::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__ListView__UxmlTraits*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__ListView__UxmlTraits::__ListView__UxmlTraits() {}
//  Writing Method size for method: ::UnityEngine::UIElements::ListView.get_showBoundCollectionSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::ListView::*)()>(&::UnityEngine::UIElements::ListView::get_showBoundCollectionSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f93094;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(),
                                                                               "get_showBoundCollectionSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListView.set_showBoundCollectionSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ListView::*)(bool)>(
    &::UnityEngine::UIElements::ListView::set_showBoundCollectionSize)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2f9309c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(), "set_showBoundCollectionSize",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListView.get_sourceIncludesArraySize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::ListView::*)()>(&::UnityEngine::UIElements::ListView::get_sourceIncludesArraySize)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2f9328c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(), 100));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListView.get_showFoldoutHeader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::ListView::*)()>(&::UnityEngine::UIElements::ListView::get_showFoldoutHeader)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f932b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(),
                                                                               "get_showFoldoutHeader", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListView.set_showFoldoutHeader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ListView::*)(bool)>(&::UnityEngine::UIElements::ListView::set_showFoldoutHeader)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x2f932bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(), "set_showFoldoutHeader",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListView.SetupArraySizeField
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ListView::*)()>(&::UnityEngine::UIElements::ListView::SetupArraySizeField)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x2f930b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(),
                                                                               "SetupArraySizeField", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListView.set_headerTitle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ListView::*)(::StringW)>(&::UnityEngine::UIElements::ListView::set_headerTitle)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2f93e1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(), "set_headerTitle", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListView.get_showAddRemoveFooter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::ListView::*)()>(&::UnityEngine::UIElements::ListView::get_showAddRemoveFooter)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2f93a70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(),
                                                                               "get_showAddRemoveFooter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListView.set_showAddRemoveFooter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ListView::*)(bool)>(&::UnityEngine::UIElements::ListView::set_showAddRemoveFooter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f93e34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(), "set_showAddRemoveFooter",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListView.EnableFooter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ListView::*)(bool)>(&::UnityEngine::UIElements::ListView::EnableFooter)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x2f93a80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(), "EnableFooter",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListView.AddItems
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ListView::*)(int32_t)>(&::UnityEngine::UIElements::ListView::AddItems)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2f94004;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(), "AddItems", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListView.OnArraySizeFieldChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ListView::*)(::UnityEngine::UIElements::ChangeEvent_1<::StringW>*)>(
    &::UnityEngine::UIElements::ListView::OnArraySizeFieldChanged)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x2f94028;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(), "OnArraySizeFieldChanged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ChangeEvent_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListView.UpdateArraySizeField
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ListView::*)()>(&::UnityEngine::UIElements::ListView::UpdateArraySizeField)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2f93dac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(),
                                                                               "UpdateArraySizeField", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListView.UpdateEmpty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ListView::*)()>(&::UnityEngine::UIElements::ListView::UpdateEmpty)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x2f938b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(), "UpdateEmpty",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListView.OnAddClicked
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ListView::*)()>(&::UnityEngine::UIElements::ListView::OnAddClicked)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x2f94130;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(), "OnAddClicked",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListView.OnRemoveClicked
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ListView::*)()>(&::UnityEngine::UIElements::ListView::OnRemoveClicked)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x2f9437c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(), "OnRemoveClicked",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListView.get_viewController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::ListViewController* (::UnityEngine::UIElements::ListView::*)()>(
    &::UnityEngine::UIElements::ListView::get_viewController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f94548;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(),
                                                                               "get_viewController", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListView.CreateVirtualizationController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ListView::*)()>(
    &::UnityEngine::UIElements::ListView::CreateVirtualizationController)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2f94550;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(), 101));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListView.CreateViewController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ListView::*)()>(&::UnityEngine::UIElements::ListView::CreateViewController)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2f94598;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(), 102));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListView.SetViewController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ListView::*)(::UnityEngine::UIElements::ListViewController*)>(
    &::UnityEngine::UIElements::ListView::SetViewController)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x2f945fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(), "SetViewController", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ListViewController*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListView.OnItemAdded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ListView::*)(::System::Collections::Generic::IEnumerable_1<int32_t>*)>(
    &::UnityEngine::UIElements::ListView::OnItemAdded)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2f947b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(), "OnItemAdded", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListView.OnItemsRemoved
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ListView::*)(::System::Collections::Generic::IEnumerable_1<int32_t>*)>(
    &::UnityEngine::UIElements::ListView::OnItemsRemoved)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2f947d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(), "OnItemsRemoved", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListView.OnItemsSourceSizeChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ListView::*)()>(&::UnityEngine::UIElements::ListView::OnItemsSourceSizeChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f947f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(),
                                                                               "OnItemsSourceSizeChanged", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListView.get_reorderMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::ListViewReorderMode (::UnityEngine::UIElements::ListView::*)()>(
    &::UnityEngine::UIElements::ListView::get_reorderMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f947f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(), "get_reorderMode",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListView.set_reorderMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ListView::*)(::UnityEngine::UIElements::ListViewReorderMode)>(
    &::UnityEngine::UIElements::ListView::set_reorderMode)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2f94800;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(), "set_reorderMode", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ListViewReorderMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListView.CreateDragger
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::ListViewDragger* (::UnityEngine::UIElements::ListView::*)()>(
    &::UnityEngine::UIElements::ListView::CreateDragger)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2f94838;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(), 103));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListView.CreateDragAndDropController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::ICollectionDragAndDropController* (::UnityEngine::UIElements::ListView::*)()>(
    &::UnityEngine::UIElements::ListView::CreateDragAndDropController)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2f948d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(), 104));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListView._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ListView::*)()>(&::UnityEngine::UIElements::ListView::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2f9493c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListView.PostRefresh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ListView::*)()>(&::UnityEngine::UIElements::ListView::PostRefresh)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2f949d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(), 105));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListView._OnAddClicked_b__35_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ListView::*)()>(&::UnityEngine::UIElements::ListView::_OnAddClicked_b__35_0)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2f94d48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(),
                                                                               "<OnAddClicked>b__35_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::UIElements::ListView::__cordl_internal_get_m_ShowBoundCollectionSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShowBoundCollectionSize;
}
constexpr bool const& UnityEngine::UIElements::ListView::__cordl_internal_get_m_ShowBoundCollectionSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShowBoundCollectionSize;
}
constexpr void UnityEngine::UIElements::ListView::__cordl_internal_set_m_ShowBoundCollectionSize(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ShowBoundCollectionSize = value;
}
constexpr bool& UnityEngine::UIElements::ListView::__cordl_internal_get_m_ShowFoldoutHeader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShowFoldoutHeader;
}
constexpr bool const& UnityEngine::UIElements::ListView::__cordl_internal_get_m_ShowFoldoutHeader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShowFoldoutHeader;
}
constexpr void UnityEngine::UIElements::ListView::__cordl_internal_set_m_ShowFoldoutHeader(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ShowFoldoutHeader = value;
}
constexpr ::StringW& UnityEngine::UIElements::ListView::__cordl_internal_get_m_HeaderTitle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HeaderTitle;
}
constexpr ::StringW const& UnityEngine::UIElements::ListView::__cordl_internal_get_m_HeaderTitle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HeaderTitle;
}
constexpr void UnityEngine::UIElements::ListView::__cordl_internal_set_m_HeaderTitle(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_HeaderTitle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*& UnityEngine::UIElements::ListView::__cordl_internal_get_itemsAdded() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemsAdded;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*> const&
UnityEngine::UIElements::ListView::__cordl_internal_get_itemsAdded() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemsAdded;
}
constexpr void UnityEngine::UIElements::ListView::__cordl_internal_set_itemsAdded(::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___itemsAdded)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*& UnityEngine::UIElements::ListView::__cordl_internal_get_itemsRemoved() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemsRemoved;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*> const&
UnityEngine::UIElements::ListView::__cordl_internal_get_itemsRemoved() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemsRemoved;
}
constexpr void UnityEngine::UIElements::ListView::__cordl_internal_set_itemsRemoved(::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___itemsRemoved)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::Label*& UnityEngine::UIElements::ListView::__cordl_internal_get_m_EmptyListLabel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EmptyListLabel;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Label*> const& UnityEngine::UIElements::ListView::__cordl_internal_get_m_EmptyListLabel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EmptyListLabel;
}
constexpr void UnityEngine::UIElements::ListView::__cordl_internal_set_m_EmptyListLabel(::UnityEngine::UIElements::Label* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_EmptyListLabel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::Foldout*& UnityEngine::UIElements::ListView::__cordl_internal_get_m_Foldout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Foldout;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Foldout*> const& UnityEngine::UIElements::ListView::__cordl_internal_get_m_Foldout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Foldout;
}
constexpr void UnityEngine::UIElements::ListView::__cordl_internal_set_m_Foldout(::UnityEngine::UIElements::Foldout* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Foldout)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::TextField*& UnityEngine::UIElements::ListView::__cordl_internal_get_m_ArraySizeField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ArraySizeField;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::TextField*> const& UnityEngine::UIElements::ListView::__cordl_internal_get_m_ArraySizeField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ArraySizeField;
}
constexpr void UnityEngine::UIElements::ListView::__cordl_internal_set_m_ArraySizeField(::UnityEngine::UIElements::TextField* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ArraySizeField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::ListView::__cordl_internal_get_m_Footer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Footer;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& UnityEngine::UIElements::ListView::__cordl_internal_get_m_Footer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Footer;
}
constexpr void UnityEngine::UIElements::ListView::__cordl_internal_set_m_Footer(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Footer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::Button*& UnityEngine::UIElements::ListView::__cordl_internal_get_m_AddButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AddButton;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Button*> const& UnityEngine::UIElements::ListView::__cordl_internal_get_m_AddButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AddButton;
}
constexpr void UnityEngine::UIElements::ListView::__cordl_internal_set_m_AddButton(::UnityEngine::UIElements::Button* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AddButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::Button*& UnityEngine::UIElements::ListView::__cordl_internal_get_m_RemoveButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RemoveButton;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Button*> const& UnityEngine::UIElements::ListView::__cordl_internal_get_m_RemoveButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RemoveButton;
}
constexpr void UnityEngine::UIElements::ListView::__cordl_internal_set_m_RemoveButton(::UnityEngine::UIElements::Button* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RemoveButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*& UnityEngine::UIElements::ListView::__cordl_internal_get_m_ItemAddedCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ItemAddedCallback;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*> const&
UnityEngine::UIElements::ListView::__cordl_internal_get_m_ItemAddedCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ItemAddedCallback;
}
constexpr void UnityEngine::UIElements::ListView::__cordl_internal_set_m_ItemAddedCallback(::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ItemAddedCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*& UnityEngine::UIElements::ListView::__cordl_internal_get_m_ItemRemovedCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ItemRemovedCallback;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*> const&
UnityEngine::UIElements::ListView::__cordl_internal_get_m_ItemRemovedCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ItemRemovedCallback;
}
constexpr void UnityEngine::UIElements::ListView::__cordl_internal_set_m_ItemRemovedCallback(::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ItemRemovedCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& UnityEngine::UIElements::ListView::__cordl_internal_get_m_ItemsSourceSizeChangedCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ItemsSourceSizeChangedCallback;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& UnityEngine::UIElements::ListView::__cordl_internal_get_m_ItemsSourceSizeChangedCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ItemsSourceSizeChangedCallback;
}
constexpr void UnityEngine::UIElements::ListView::__cordl_internal_set_m_ItemsSourceSizeChangedCallback(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ItemsSourceSizeChangedCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::ListViewController*& UnityEngine::UIElements::ListView::__cordl_internal_get_m_ListViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ListViewController;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::ListViewController*> const& UnityEngine::UIElements::ListView::__cordl_internal_get_m_ListViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ListViewController;
}
constexpr void UnityEngine::UIElements::ListView::__cordl_internal_set_m_ListViewController(::UnityEngine::UIElements::ListViewController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ListViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::ListViewReorderMode& UnityEngine::UIElements::ListView::__cordl_internal_get_m_ReorderMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReorderMode;
}
constexpr ::UnityEngine::UIElements::ListViewReorderMode const& UnityEngine::UIElements::ListView::__cordl_internal_get_m_ReorderMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReorderMode;
}
constexpr void UnityEngine::UIElements::ListView::__cordl_internal_set_m_ReorderMode(::UnityEngine::UIElements::ListViewReorderMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ReorderMode = value;
}
inline void UnityEngine::UIElements::ListView::setStaticF_ussClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::ListView::getStaticF_ussClassName() {
  return ::cordl_internals::getStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get>();
}
inline void UnityEngine::UIElements::ListView::setStaticF_itemUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "itemUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::ListView::getStaticF_itemUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "itemUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get>();
}
inline void UnityEngine::UIElements::ListView::setStaticF_emptyLabelUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "emptyLabelUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::ListView::getStaticF_emptyLabelUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "emptyLabelUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get>();
}
inline void UnityEngine::UIElements::ListView::setStaticF_reorderableUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "reorderableUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::ListView::getStaticF_reorderableUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "reorderableUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get>();
}
inline void UnityEngine::UIElements::ListView::setStaticF_reorderableItemUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "reorderableItemUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::ListView::getStaticF_reorderableItemUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "reorderableItemUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get>();
}
inline void UnityEngine::UIElements::ListView::setStaticF_reorderableItemContainerUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "reorderableItemContainerUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::ListView::getStaticF_reorderableItemContainerUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "reorderableItemContainerUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get>();
}
inline void UnityEngine::UIElements::ListView::setStaticF_reorderableItemHandleUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "reorderableItemHandleUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::ListView::getStaticF_reorderableItemHandleUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "reorderableItemHandleUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get>();
}
inline void UnityEngine::UIElements::ListView::setStaticF_reorderableItemHandleBarUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "reorderableItemHandleBarUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::ListView::getStaticF_reorderableItemHandleBarUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "reorderableItemHandleBarUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get>();
}
inline void UnityEngine::UIElements::ListView::setStaticF_footerUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "footerUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::ListView::getStaticF_footerUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "footerUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get>();
}
inline void UnityEngine::UIElements::ListView::setStaticF_foldoutHeaderUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "foldoutHeaderUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::ListView::getStaticF_foldoutHeaderUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "foldoutHeaderUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get>();
}
inline void UnityEngine::UIElements::ListView::setStaticF_arraySizeFieldUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "arraySizeFieldUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::ListView::getStaticF_arraySizeFieldUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "arraySizeFieldUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get>();
}
inline void UnityEngine::UIElements::ListView::setStaticF_listViewWithHeaderUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "listViewWithHeaderUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::ListView::getStaticF_listViewWithHeaderUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "listViewWithHeaderUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get>();
}
inline void UnityEngine::UIElements::ListView::setStaticF_listViewWithFooterUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "listViewWithFooterUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::ListView::getStaticF_listViewWithFooterUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "listViewWithFooterUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get>();
}
inline void UnityEngine::UIElements::ListView::setStaticF_scrollViewWithFooterUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "scrollViewWithFooterUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::ListView::getStaticF_scrollViewWithFooterUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "scrollViewWithFooterUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get>();
}
inline void UnityEngine::UIElements::ListView::setStaticF_footerAddButtonName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "footerAddButtonName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::ListView::getStaticF_footerAddButtonName() {
  return ::cordl_internals::getStaticField<::StringW, "footerAddButtonName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get>();
}
inline void UnityEngine::UIElements::ListView::setStaticF_footerRemoveButtonName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "footerRemoveButtonName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::ListView::getStaticF_footerRemoveButtonName() {
  return ::cordl_internals::getStaticField<::StringW, "footerRemoveButtonName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get>();
}
inline bool UnityEngine::UIElements::ListView::get_showBoundCollectionSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(),
                                                                             "get_showBoundCollectionSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ListView::set_showBoundCollectionSize(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(), "set_showBoundCollectionSize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::ListView::get_sourceIncludesArraySize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(), 100)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::ListView::get_showFoldoutHeader() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(),
                                                                             "get_showFoldoutHeader", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ListView::set_showFoldoutHeader(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(), "set_showFoldoutHeader",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::ListView::SetupArraySizeField() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(), "SetupArraySizeField",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ListView::set_headerTitle(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(), "set_headerTitle", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::ListView::get_showAddRemoveFooter() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(),
                                                                             "get_showAddRemoveFooter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ListView::set_showAddRemoveFooter(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(), "set_showAddRemoveFooter",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::ListView::EnableFooter(bool enabled) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(), "EnableFooter",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, enabled);
}
inline void UnityEngine::UIElements::ListView::AddItems(int32_t itemCount) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(), "AddItems",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, itemCount);
}
inline void UnityEngine::UIElements::ListView::OnArraySizeFieldChanged(::UnityEngine::UIElements::ChangeEvent_1<::StringW>* evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(), "OnArraySizeFieldChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ChangeEvent_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::ListView::UpdateArraySizeField() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(),
                                                                             "UpdateArraySizeField", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ListView::UpdateEmpty() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(), "UpdateEmpty",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ListView::OnAddClicked() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(), "OnAddClicked",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ListView::OnRemoveClicked() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(), "OnRemoveClicked",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::ListViewController* UnityEngine::UIElements::ListView::get_viewController() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(), "get_viewController",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ListViewController*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ListView::CreateVirtualizationController() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(), 101)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ListView::CreateViewController() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(), 102)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ListView::SetViewController(::UnityEngine::UIElements::ListViewController* controller) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(), "SetViewController", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ListViewController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, controller);
}
inline void UnityEngine::UIElements::ListView::OnItemAdded(::System::Collections::Generic::IEnumerable_1<int32_t>* indices) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(), "OnItemAdded", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, indices);
}
inline void UnityEngine::UIElements::ListView::OnItemsRemoved(::System::Collections::Generic::IEnumerable_1<int32_t>* indices) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(), "OnItemsRemoved", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, indices);
}
inline void UnityEngine::UIElements::ListView::OnItemsSourceSizeChanged() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(),
                                                                             "OnItemsSourceSizeChanged", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::ListViewReorderMode UnityEngine::UIElements::ListView::get_reorderMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(), "get_reorderMode",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ListViewReorderMode, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ListView::set_reorderMode(::UnityEngine::UIElements::ListViewReorderMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(), "set_reorderMode", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ListViewReorderMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::ListViewDragger* UnityEngine::UIElements::ListView::CreateDragger() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(), 103)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ListViewDragger*, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::ICollectionDragAndDropController* UnityEngine::UIElements::ListView::CreateDragAndDropController() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(), 104)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ICollectionDragAndDropController*, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::ListView* UnityEngine::UIElements::ListView::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::ListView*>());
}
inline void UnityEngine::UIElements::ListView::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ListView::PostRefresh() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(), 105)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ListView::_OnAddClicked_b__35_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(),
                                                                             "<OnAddClicked>b__35_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ListView::ListView() {}
//  Writing Method size for method: ::UnityEngine::UIElements::__ListView__UxmlFactory._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__ListView__UxmlFactory::*)()>(
    &::UnityEngine::UIElements::__ListView__UxmlFactory::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2f94e18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__ListView__UxmlFactory*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::__ListView__UxmlFactory* UnityEngine::UIElements::__ListView__UxmlFactory::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::__ListView__UxmlFactory*>());
}
inline void UnityEngine::UIElements::__ListView__UxmlFactory::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__ListView__UxmlFactory*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__ListView__UxmlFactory::__ListView__UxmlFactory() {}
