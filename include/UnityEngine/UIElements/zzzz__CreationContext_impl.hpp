#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/CreationContext.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__TemplateAsset_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualTreeAsset_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::CreationContext_AttributeOverrideRange._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::CreationContext_AttributeOverrideRange::*)(
    ::UnityEngine::UIElements::VisualTreeAsset*, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset_AttributeOverride>*)>(
    &::UnityEngine::UIElements::CreationContext_AttributeOverrideRange::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6af10f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CreationContext_AttributeOverrideRange>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualTreeAsset*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset_AttributeOverride>*>::get() })));
    return ___internal_method;
  }
};
inline void
UnityEngine::UIElements::CreationContext_AttributeOverrideRange::_ctor(::UnityEngine::UIElements::VisualTreeAsset* sourceAsset,
                                                                       ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset_AttributeOverride>* attributeOverrides) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CreationContext_AttributeOverrideRange>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualTreeAsset*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset_AttributeOverride>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sourceAsset, attributeOverrides);
}
// Ctor Parameters [CppParam { name: "sourceAsset", ty: "::UnityW<::UnityEngine::UIElements::VisualTreeAsset>", modifiers: "", def_value: Some("{}") }, CppParam { name: "attributeOverrides", ty:
// "::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset_AttributeOverride>*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::CreationContext_AttributeOverrideRange::CreationContext_AttributeOverrideRange(
    ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> sourceAsset, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset_AttributeOverride>* attributeOverrides) noexcept {
  this->sourceAsset = sourceAsset;
  this->attributeOverrides = attributeOverrides;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::CreationContext_AttributeOverrideRange::CreationContext_AttributeOverrideRange() {}
//  Writing Method size for method: ::UnityEngine::UIElements::CreationContext_SerializedDataOverrideRange._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::CreationContext_SerializedDataOverrideRange::*)(
    ::UnityEngine::UIElements::VisualTreeAsset*, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset_UxmlSerializedDataOverride>*, int32_t)>(
    &::UnityEngine::UIElements::CreationContext_SerializedDataOverrideRange::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6af10fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CreationContext_SerializedDataOverrideRange>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualTreeAsset*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset_UxmlSerializedDataOverride>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::CreationContext_SerializedDataOverrideRange::_ctor(
    ::UnityEngine::UIElements::VisualTreeAsset* sourceAsset, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset_UxmlSerializedDataOverride>* attributeOverrides,
    int32_t templateId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CreationContext_SerializedDataOverrideRange>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualTreeAsset*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset_UxmlSerializedDataOverride>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sourceAsset, attributeOverrides, templateId);
}
// Ctor Parameters [CppParam { name: "sourceAsset", ty: "::UnityW<::UnityEngine::UIElements::VisualTreeAsset>", modifiers: "", def_value: Some("{}") }, CppParam { name: "templateId", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "attributeOverrides", ty: "::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset_UxmlSerializedDataOverride>*",
// modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::CreationContext_SerializedDataOverrideRange::CreationContext_SerializedDataOverrideRange(
    ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> sourceAsset, int32_t templateId,
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset_UxmlSerializedDataOverride>* attributeOverrides) noexcept {
  this->sourceAsset = sourceAsset;
  this->templateId = templateId;
  this->attributeOverrides = attributeOverrides;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::CreationContext_SerializedDataOverrideRange::CreationContext_SerializedDataOverrideRange() {}
//  Writing Method size for method: ::UnityEngine::UIElements::CreationContext.get_target
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::UIElements::CreationContext::*)()>(
    &::UnityEngine::UIElements::CreationContext::get_target)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6afd4d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CreationContext>::get(), "get_target",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CreationContext.set_target
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::CreationContext::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::CreationContext::set_target)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6afd4e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CreationContext>::get(), "set_target", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CreationContext.get_veaIdsPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<int32_t>* (::UnityEngine::UIElements::CreationContext::*)()>(
    &::UnityEngine::UIElements::CreationContext::get_veaIdsPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6afd4e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CreationContext>::get(),
                                                                               "get_veaIdsPath", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CreationContext.set_veaIdsPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::CreationContext::*)(::System::Collections::Generic::List_1<int32_t>*)>(
    &::UnityEngine::UIElements::CreationContext::set_veaIdsPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6afd4f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CreationContext>::get(), "set_veaIdsPath", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CreationContext.get_visualTreeAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::UIElements::VisualTreeAsset> (::UnityEngine::UIElements::CreationContext::*)()>(
    &::UnityEngine::UIElements::CreationContext::get_visualTreeAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6afd4f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CreationContext>::get(),
                                                                               "get_visualTreeAsset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CreationContext.set_visualTreeAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::CreationContext::*)(::UnityEngine::UIElements::VisualTreeAsset*)>(
    &::UnityEngine::UIElements::CreationContext::set_visualTreeAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6afd500;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CreationContext>::get(), "set_visualTreeAsset", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualTreeAsset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CreationContext.get_slotInsertionPoints
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>* (
    ::UnityEngine::UIElements::CreationContext::*)()>(&::UnityEngine::UIElements::CreationContext::get_slotInsertionPoints)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6afd508;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CreationContext>::get(),
                                                                               "get_slotInsertionPoints", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CreationContext.set_slotInsertionPoints
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::CreationContext::*)(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>*)>(&::UnityEngine::UIElements::CreationContext::set_slotInsertionPoints)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6afd510;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CreationContext>::get(), "set_slotInsertionPoints", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CreationContext.get_attributeOverrides
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_AttributeOverrideRange>* (
    ::UnityEngine::UIElements::CreationContext::*)()>(&::UnityEngine::UIElements::CreationContext::get_attributeOverrides)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6afd518;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CreationContext>::get(),
                                                                               "get_attributeOverrides", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CreationContext.set_attributeOverrides
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::CreationContext::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_AttributeOverrideRange>*)>(&::UnityEngine::UIElements::CreationContext::set_attributeOverrides)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6afd520;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CreationContext>::get(), "set_attributeOverrides", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_AttributeOverrideRange>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CreationContext.get_serializedDataOverrides
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_SerializedDataOverrideRange>* (
    ::UnityEngine::UIElements::CreationContext::*)()>(&::UnityEngine::UIElements::CreationContext::get_serializedDataOverrides)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6afd528;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CreationContext>::get(),
                                                                               "get_serializedDataOverrides", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CreationContext.set_serializedDataOverrides
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::CreationContext::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_SerializedDataOverrideRange>*)>(&::UnityEngine::UIElements::CreationContext::set_serializedDataOverrides)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6afd530;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CreationContext>::get(), "set_serializedDataOverrides", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_SerializedDataOverrideRange>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CreationContext.get_namesPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::UnityEngine::UIElements::CreationContext::*)()>(
    &::UnityEngine::UIElements::CreationContext::get_namesPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6afd538;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CreationContext>::get(),
                                                                               "get_namesPath", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CreationContext.set_namesPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::CreationContext::*)(::System::Collections::Generic::List_1<::StringW>*)>(
    &::UnityEngine::UIElements::CreationContext::set_namesPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6afd540;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CreationContext>::get(), "set_namesPath", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CreationContext.get_hasOverrides
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::CreationContext::*)()>(
    &::UnityEngine::UIElements::CreationContext::get_hasOverrides)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6af62fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CreationContext>::get(),
                                                                               "get_hasOverrides", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CreationContext._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::CreationContext::*)(::UnityEngine::UIElements::VisualTreeAsset*)>(
    &::UnityEngine::UIElements::CreationContext::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6afa39c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CreationContext>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualTreeAsset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CreationContext._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::CreationContext::*)(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>*,
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_AttributeOverrideRange>*)>(&::UnityEngine::UIElements::CreationContext::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6afd5cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CreationContext>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_AttributeOverrideRange>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CreationContext._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::CreationContext::*)(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>*, ::UnityEngine::UIElements::VisualTreeAsset*, ::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::CreationContext::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6afd548;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CreationContext>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualTreeAsset*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CreationContext._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::CreationContext::*)(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>*,
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_AttributeOverrideRange>*, ::UnityEngine::UIElements::VisualTreeAsset*,
    ::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::UIElements::CreationContext::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6afd644;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CreationContext>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_AttributeOverrideRange>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualTreeAsset*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CreationContext._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::CreationContext::*)(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>*,
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_AttributeOverrideRange>*,
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_SerializedDataOverrideRange>*, ::UnityEngine::UIElements::VisualTreeAsset*,
    ::UnityEngine::UIElements::VisualElement*, ::System::Collections::Generic::List_1<int32_t>*, ::System::Collections::Generic::List_1<::StringW>*)>(
    &::UnityEngine::UIElements::CreationContext::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6af110c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CreationContext>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_AttributeOverrideRange>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_SerializedDataOverrideRange>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualTreeAsset*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CreationContext.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::CreationContext::*)(::System::Object*)>(
    &::UnityEngine::UIElements::CreationContext::Equals)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6afd6e4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CreationContext>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CreationContext>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CreationContext.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::CreationContext::*)(::UnityEngine::UIElements::CreationContext)>(
    &::UnityEngine::UIElements::CreationContext::Equals)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x6afd7b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CreationContext>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CreationContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CreationContext.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::CreationContext::*)()>(
    &::UnityEngine::UIElements::CreationContext::GetHashCode)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x6afd91c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CreationContext>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CreationContext>::get(), 2));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::CreationContext::setStaticF_Default(::UnityEngine::UIElements::CreationContext value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::CreationContext, "Default", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CreationContext>::get>(
      std::forward<::UnityEngine::UIElements::CreationContext>(value));
}
inline ::UnityEngine::UIElements::CreationContext UnityEngine::UIElements::CreationContext::getStaticF_Default() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::CreationContext, "Default",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CreationContext>::get>();
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::CreationContext::get_target() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CreationContext>::get(), "get_target",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::CreationContext::set_target(::UnityEngine::UIElements::VisualElement* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CreationContext>::get(), "set_target", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<int32_t>* UnityEngine::UIElements::CreationContext::get_veaIdsPath() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CreationContext>::get(),
                                                                             "get_veaIdsPath", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<int32_t>*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::CreationContext::set_veaIdsPath(::System::Collections::Generic::List_1<int32_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CreationContext>::get(), "set_veaIdsPath", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> UnityEngine::UIElements::CreationContext::get_visualTreeAsset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CreationContext>::get(),
                                                                             "get_visualTreeAsset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::CreationContext::set_visualTreeAsset(::UnityEngine::UIElements::VisualTreeAsset* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CreationContext>::get(), "set_visualTreeAsset", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualTreeAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>* UnityEngine::UIElements::CreationContext::get_slotInsertionPoints() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CreationContext>::get(),
                                                                             "get_slotInsertionPoints", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::CreationContext::set_slotInsertionPoints(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CreationContext>::get(), "set_slotInsertionPoints", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_AttributeOverrideRange>* UnityEngine::UIElements::CreationContext::get_attributeOverrides() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CreationContext>::get(),
                                                                             "get_attributeOverrides", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_AttributeOverrideRange>*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::CreationContext::set_attributeOverrides(::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_AttributeOverrideRange>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CreationContext>::get(), "set_attributeOverrides", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_AttributeOverrideRange>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_SerializedDataOverrideRange>* UnityEngine::UIElements::CreationContext::get_serializedDataOverrides() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CreationContext>::get(),
                                                                             "get_serializedDataOverrides", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_SerializedDataOverrideRange>*, false>(this, ___internal_method);
}
inline void
UnityEngine::UIElements::CreationContext::set_serializedDataOverrides(::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_SerializedDataOverrideRange>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CreationContext>::get(), "set_serializedDataOverrides", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_SerializedDataOverrideRange>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::StringW>* UnityEngine::UIElements::CreationContext::get_namesPath() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CreationContext>::get(), "get_namesPath",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::CreationContext::set_namesPath(::System::Collections::Generic::List_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CreationContext>::get(), "set_namesPath", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::CreationContext::get_hasOverrides() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CreationContext>::get(),
                                                                             "get_hasOverrides", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::CreationContext::_ctor(::UnityEngine::UIElements::VisualTreeAsset* vta) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CreationContext>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualTreeAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, vta);
}
inline void UnityEngine::UIElements::CreationContext::_ctor(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>* slotInsertionPoints,
                                                            ::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_AttributeOverrideRange>* attributeOverrides) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CreationContext>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_AttributeOverrideRange>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, slotInsertionPoints, attributeOverrides);
}
inline void UnityEngine::UIElements::CreationContext::_ctor(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>* slotInsertionPoints,
                                                            ::UnityEngine::UIElements::VisualTreeAsset* vta, ::UnityEngine::UIElements::VisualElement* target) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CreationContext>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>*>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualTreeAsset*>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, slotInsertionPoints, vta, target);
}
inline void UnityEngine::UIElements::CreationContext::_ctor(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>* slotInsertionPoints,
                                                            ::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_AttributeOverrideRange>* attributeOverrides,
                                                            ::UnityEngine::UIElements::VisualTreeAsset* vta, ::UnityEngine::UIElements::VisualElement* target) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CreationContext>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_AttributeOverrideRange>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualTreeAsset*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, slotInsertionPoints, attributeOverrides, vta, target);
}
inline void UnityEngine::UIElements::CreationContext::_ctor(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>* slotInsertionPoints,
                                                            ::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_AttributeOverrideRange>* attributeOverrides,
                                                            ::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_SerializedDataOverrideRange>* serializedDataOverrides,
                                                            ::UnityEngine::UIElements::VisualTreeAsset* vta, ::UnityEngine::UIElements::VisualElement* target,
                                                            ::System::Collections::Generic::List_1<int32_t>* veaIdsPath, ::System::Collections::Generic::List_1<::StringW>* namesPath) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CreationContext>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_AttributeOverrideRange>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_SerializedDataOverrideRange>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualTreeAsset*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, slotInsertionPoints, attributeOverrides, serializedDataOverrides, vta, target, veaIdsPath, namesPath);
}
inline bool UnityEngine::UIElements::CreationContext::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CreationContext>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline bool UnityEngine::UIElements::CreationContext::Equals(::UnityEngine::UIElements::CreationContext other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CreationContext>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CreationContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline int32_t UnityEngine::UIElements::CreationContext::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CreationContext>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::CreationContext>"
constexpr UnityEngine::UIElements::CreationContext::operator ::System::IEquatable_1<::UnityEngine::UIElements::CreationContext>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::CreationContext>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::CreationContext>"
constexpr ::System::IEquatable_1<::UnityEngine::UIElements::CreationContext>* UnityEngine::UIElements::CreationContext::i___System__IEquatable_1___UnityEngine__UIElements__CreationContext_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::CreationContext>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "_target_k__BackingField", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_veaIdsPath_k__BackingField",
// ty: "::System::Collections::Generic::List_1<int32_t>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_visualTreeAsset_k__BackingField", ty:
// "::UnityW<::UnityEngine::UIElements::VisualTreeAsset>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_slotInsertionPoints_k__BackingField", ty:
// "::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::VisualElement*>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_attributeOverrides_k__BackingField",
// ty: "::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_AttributeOverrideRange>*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_serializedDataOverrides_k__BackingField", ty: "::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_SerializedDataOverrideRange>*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "_namesPath_k__BackingField", ty: "::System::Collections::Generic::List_1<::StringW>*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::CreationContext::CreationContext(
    ::UnityEngine::UIElements::VisualElement* _target_k__BackingField, ::System::Collections::Generic::List_1<int32_t>* _veaIdsPath_k__BackingField,
    ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> _visualTreeAsset_k__BackingField,
    ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>* _slotInsertionPoints_k__BackingField,
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_AttributeOverrideRange>* _attributeOverrides_k__BackingField,
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_SerializedDataOverrideRange>* _serializedDataOverrides_k__BackingField,
    ::System::Collections::Generic::List_1<::StringW>* _namesPath_k__BackingField) noexcept {
  this->_target_k__BackingField = _target_k__BackingField;
  this->_veaIdsPath_k__BackingField = _veaIdsPath_k__BackingField;
  this->_visualTreeAsset_k__BackingField = _visualTreeAsset_k__BackingField;
  this->_slotInsertionPoints_k__BackingField = _slotInsertionPoints_k__BackingField;
  this->_attributeOverrides_k__BackingField = _attributeOverrides_k__BackingField;
  this->_serializedDataOverrides_k__BackingField = _serializedDataOverrides_k__BackingField;
  this->_namesPath_k__BackingField = _namesPath_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::CreationContext::CreationContext() {}
