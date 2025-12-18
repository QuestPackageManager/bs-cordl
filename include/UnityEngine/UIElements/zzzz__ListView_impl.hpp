#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ListView.hpp"
#include "UnityEngine/UIElements/zzzz__BaseListView_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ListView_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__CollectionViewController_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
#include "UnityEngine/UIElements/zzzz__ListView_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlAssetAttributeDescription_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualTreeAsset_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::ListView_UxmlFactory._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ListView_UxmlFactory::*)()>(
    &::UnityEngine::UIElements::ListView_UxmlFactory::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6b841dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView_UxmlFactory*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::ListView_UxmlFactory::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView_UxmlFactory*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::ListView_UxmlFactory* UnityEngine::UIElements::ListView_UxmlFactory::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::ListView_UxmlFactory*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ListView_UxmlFactory::ListView_UxmlFactory() {}
//  Writing Method size for method: ::UnityEngine::UIElements::ListView_UxmlTraits.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ListView_UxmlTraits::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext)>(&::UnityEngine::UIElements::ListView_UxmlTraits::Init)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x6b84244;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView_UxmlTraits*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView_UxmlTraits*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListView_UxmlTraits._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ListView_UxmlTraits::*)()>(&::UnityEngine::UIElements::ListView_UxmlTraits::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6b8437c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView_UxmlTraits*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::UxmlAssetAttributeDescription_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>*&
UnityEngine::UIElements::ListView_UxmlTraits::__cordl_internal_get_m_ItemTemplate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ItemTemplate;
}
constexpr ::UnityEngine::UIElements::UxmlAssetAttributeDescription_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>* const&
UnityEngine::UIElements::ListView_UxmlTraits::__cordl_internal_get_m_ItemTemplate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ItemTemplate;
}
constexpr void UnityEngine::UIElements::ListView_UxmlTraits::__cordl_internal_set_m_ItemTemplate(
    ::UnityEngine::UIElements::UxmlAssetAttributeDescription_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ItemTemplate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::UIElements::ListView_UxmlTraits::Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag,
                                                               ::UnityEngine::UIElements::CreationContext cc) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView_UxmlTraits*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, bag, cc);
}
inline void UnityEngine::UIElements::ListView_UxmlTraits::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView_UxmlTraits*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::ListView_UxmlTraits* UnityEngine::UIElements::ListView_UxmlTraits::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::ListView_UxmlTraits*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ListView_UxmlTraits::ListView_UxmlTraits() {}
//  Writing Method size for method: ::UnityEngine::UIElements::ListView.get_makeItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Func_1<::UnityEngine::UIElements::VisualElement*>* (::UnityEngine::UIElements::ListView::*)()>(
    &::UnityEngine::UIElements::ListView::get_makeItem)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b83858;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(), "get_makeItem",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListView.set_makeItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ListView::*)(::System::Func_1<::UnityEngine::UIElements::VisualElement*>*)>(
    &::UnityEngine::UIElements::ListView::set_makeItem)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6b83860;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(), "set_makeItem", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<::UnityEngine::UIElements::VisualElement*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListView.get_itemTemplate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::UIElements::VisualTreeAsset> (::UnityEngine::UIElements::ListView::*)()>(
    &::UnityEngine::UIElements::ListView::get_itemTemplate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b8391c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(), "get_itemTemplate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListView.set_itemTemplate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ListView::*)(::UnityEngine::UIElements::VisualTreeAsset*)>(
    &::UnityEngine::UIElements::ListView::set_itemTemplate)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6b83924;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(), "set_itemTemplate", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualTreeAsset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListView.TemplateMakeItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::UIElements::ListView::*)()>(
    &::UnityEngine::UIElements::ListView::TemplateMakeItem)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6b83a2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(), "TemplateMakeItem",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListView.get_bindItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* (::UnityEngine::UIElements::ListView::*)()>(
    &::UnityEngine::UIElements::ListView::get_bindItem)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b83b18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(), "get_bindItem",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListView.set_bindItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::UIElements::ListView::*)(::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>*)>(&::UnityEngine::UIElements::ListView::set_bindItem)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6b83b20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(), "set_bindItem", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListView.get_unbindItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* (::UnityEngine::UIElements::ListView::*)()>(
    &::UnityEngine::UIElements::ListView::get_unbindItem)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b83bdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(), "get_unbindItem",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListView.set_unbindItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::UIElements::ListView::*)(::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>*)>(&::UnityEngine::UIElements::ListView::set_unbindItem)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6b83be4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(), "set_unbindItem", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListView.get_destroyItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Action_1<::UnityEngine::UIElements::VisualElement*>* (::UnityEngine::UIElements::ListView::*)()>(
    &::UnityEngine::UIElements::ListView::get_destroyItem)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b83c94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(), "get_destroyItem",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListView.set_destroyItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ListView::*)(::System::Action_1<::UnityEngine::UIElements::VisualElement*>*)>(
    &::UnityEngine::UIElements::ListView::set_destroyItem)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6b83c9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(), "set_destroyItem", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::UIElements::VisualElement*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListView.HasValidDataAndBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::ListView::*)()>(&::UnityEngine::UIElements::ListView::HasValidDataAndBindings)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6b83d4c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(), 145));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListView.CreateViewController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::CollectionViewController* (::UnityEngine::UIElements::ListView::*)()>(
    &::UnityEngine::UIElements::ListView::CreateViewController)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b83da8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(), 141));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListView._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ListView::*)()>(&::UnityEngine::UIElements::ListView::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6b83dec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Func_1<::UnityEngine::UIElements::VisualElement*>*& UnityEngine::UIElements::ListView::__cordl_internal_get_m_MakeItem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MakeItem;
}
constexpr ::System::Func_1<::UnityEngine::UIElements::VisualElement*>* const& UnityEngine::UIElements::ListView::__cordl_internal_get_m_MakeItem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MakeItem;
}
constexpr void UnityEngine::UIElements::ListView::__cordl_internal_set_m_MakeItem(::System::Func_1<::UnityEngine::UIElements::VisualElement*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_MakeItem)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Func_1<::UnityEngine::UIElements::VisualElement*>*& UnityEngine::UIElements::ListView::__cordl_internal_get_m_TemplateMakeItem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TemplateMakeItem;
}
constexpr ::System::Func_1<::UnityEngine::UIElements::VisualElement*>* const& UnityEngine::UIElements::ListView::__cordl_internal_get_m_TemplateMakeItem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TemplateMakeItem;
}
constexpr void UnityEngine::UIElements::ListView::__cordl_internal_set_m_TemplateMakeItem(::System::Func_1<::UnityEngine::UIElements::VisualElement*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TemplateMakeItem)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::UIElements::VisualTreeAsset>& UnityEngine::UIElements::ListView::__cordl_internal_get_m_ItemTemplate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ItemTemplate;
}
constexpr ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> const& UnityEngine::UIElements::ListView::__cordl_internal_get_m_ItemTemplate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ItemTemplate;
}
constexpr void UnityEngine::UIElements::ListView::__cordl_internal_set_m_ItemTemplate(::UnityW<::UnityEngine::UIElements::VisualTreeAsset> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ItemTemplate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>*& UnityEngine::UIElements::ListView::__cordl_internal_get_m_BindItem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BindItem;
}
constexpr ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* const& UnityEngine::UIElements::ListView::__cordl_internal_get_m_BindItem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BindItem;
}
constexpr void UnityEngine::UIElements::ListView::__cordl_internal_set_m_BindItem(::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_BindItem)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>*& UnityEngine::UIElements::ListView::__cordl_internal_get_m_UnbindItem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UnbindItem;
}
constexpr ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* const& UnityEngine::UIElements::ListView::__cordl_internal_get_m_UnbindItem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UnbindItem;
}
constexpr void UnityEngine::UIElements::ListView::__cordl_internal_set_m_UnbindItem(::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_UnbindItem)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::UnityEngine::UIElements::VisualElement*>*& UnityEngine::UIElements::ListView::__cordl_internal_get_m_DestroyItem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DestroyItem;
}
constexpr ::System::Action_1<::UnityEngine::UIElements::VisualElement*>* const& UnityEngine::UIElements::ListView::__cordl_internal_get_m_DestroyItem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DestroyItem;
}
constexpr void UnityEngine::UIElements::ListView::__cordl_internal_set_m_DestroyItem(::System::Action_1<::UnityEngine::UIElements::VisualElement*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DestroyItem)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::UIElements::ListView::setStaticF_itemTemplateProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "itemTemplateProperty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get>(
      std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::ListView::getStaticF_itemTemplateProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "itemTemplateProperty",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get>();
}
inline void UnityEngine::UIElements::ListView::setStaticF_makeItemProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "makeItemProperty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get>(
      std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::ListView::getStaticF_makeItemProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "makeItemProperty",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get>();
}
inline void UnityEngine::UIElements::ListView::setStaticF_bindItemProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "bindItemProperty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get>(
      std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::ListView::getStaticF_bindItemProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "bindItemProperty",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get>();
}
inline void UnityEngine::UIElements::ListView::setStaticF_unbindItemProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "unbindItemProperty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get>(
      std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::ListView::getStaticF_unbindItemProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "unbindItemProperty",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get>();
}
inline void UnityEngine::UIElements::ListView::setStaticF_destroyItemProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "destroyItemProperty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get>(
      std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::ListView::getStaticF_destroyItemProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "destroyItemProperty",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get>();
}
inline ::System::Func_1<::UnityEngine::UIElements::VisualElement*>* UnityEngine::UIElements::ListView::get_makeItem() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(), "get_makeItem",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Func_1<::UnityEngine::UIElements::VisualElement*>*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ListView::set_makeItem(::System::Func_1<::UnityEngine::UIElements::VisualElement*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(), "set_makeItem", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<::UnityEngine::UIElements::VisualElement*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> UnityEngine::UIElements::ListView::get_itemTemplate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(), "get_itemTemplate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ListView::set_itemTemplate(::UnityEngine::UIElements::VisualTreeAsset* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(), "set_itemTemplate", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualTreeAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::ListView::TemplateMakeItem() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(), "TemplateMakeItem",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*, false>(this, ___internal_method);
}
inline ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* UnityEngine::UIElements::ListView::get_bindItem() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(), "get_bindItem",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ListView::set_bindItem(::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(), "set_bindItem", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* UnityEngine::UIElements::ListView::get_unbindItem() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(), "get_unbindItem",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ListView::set_unbindItem(::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(), "set_unbindItem", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Action_1<::UnityEngine::UIElements::VisualElement*>* UnityEngine::UIElements::ListView::get_destroyItem() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(), "get_destroyItem",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Action_1<::UnityEngine::UIElements::VisualElement*>*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ListView::set_destroyItem(::System::Action_1<::UnityEngine::UIElements::VisualElement*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(), "set_destroyItem", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::UIElements::VisualElement*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::ListView::HasValidDataAndBindings() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(), 145)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::CollectionViewController* UnityEngine::UIElements::ListView::CreateViewController() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(), 141)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::CollectionViewController*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ListView::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListView*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::ListView* UnityEngine::UIElements::ListView::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::ListView*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ListView::ListView() {}
