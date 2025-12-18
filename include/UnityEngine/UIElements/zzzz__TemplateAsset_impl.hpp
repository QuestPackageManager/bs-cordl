#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TemplateAsset.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElementAsset_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TemplateAsset_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__TemplateAsset_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlSerializedData_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualTreeAsset_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::TemplateAsset_AttributeOverride.NamesPathMatchesElementNamesPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::TemplateAsset_AttributeOverride::*)(
    ::System::Collections::Generic::IList_1<::StringW>*)>(&::UnityEngine::UIElements::TemplateAsset_AttributeOverride::NamesPathMatchesElementNamesPath)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x6af19c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TemplateAsset_AttributeOverride>::get(), "NamesPathMatchesElementNamesPath",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
inline bool UnityEngine::UIElements::TemplateAsset_AttributeOverride::NamesPathMatchesElementNamesPath(::System::Collections::Generic::IList_1<::StringW>* elementNamesPath) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TemplateAsset_AttributeOverride>::get(), "NamesPathMatchesElementNamesPath",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, elementNamesPath);
}
// Ctor Parameters [CppParam { name: "m_ElementName", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_NamesPath", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "m_AttributeName", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Value", ty: "::StringW", modifiers: "", def_value:
// Some("{}") }]
constexpr ::UnityEngine::UIElements::TemplateAsset_AttributeOverride::TemplateAsset_AttributeOverride(::StringW m_ElementName, ::ArrayW<::StringW, ::Array<::StringW>*> m_NamesPath,
                                                                                                      ::StringW m_AttributeName, ::StringW m_Value) noexcept {
  this->m_ElementName = m_ElementName;
  this->m_NamesPath = m_NamesPath;
  this->m_AttributeName = m_AttributeName;
  this->m_Value = m_Value;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::TemplateAsset_AttributeOverride::TemplateAsset_AttributeOverride() {}
// Ctor Parameters [CppParam { name: "m_ElementId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ElementIdsPath", ty: "::System::Collections::Generic::List_1<int32_t>*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SerializedData", ty: "::UnityEngine::UIElements::UxmlSerializedData*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::TemplateAsset_UxmlSerializedDataOverride::TemplateAsset_UxmlSerializedDataOverride(int32_t m_ElementId,
                                                                                                                        ::System::Collections::Generic::List_1<int32_t>* m_ElementIdsPath,
                                                                                                                        ::UnityEngine::UIElements::UxmlSerializedData* m_SerializedData) noexcept {
  this->m_ElementId = m_ElementId;
  this->m_ElementIdsPath = m_ElementIdsPath;
  this->m_SerializedData = m_SerializedData;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::TemplateAsset_UxmlSerializedDataOverride::TemplateAsset_UxmlSerializedDataOverride() {}
//  Writing Method size for method: ::UnityEngine::UIElements::TemplateAsset.get_attributeOverrides
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset_AttributeOverride>* (
    ::UnityEngine::UIElements::TemplateAsset::*)()>(&::UnityEngine::UIElements::TemplateAsset::get_attributeOverrides)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6af0270;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TemplateAsset*>::get(),
                                                                               "get_attributeOverrides", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TemplateAsset.get_serializedDataOverrides
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset_UxmlSerializedDataOverride>* (
    ::UnityEngine::UIElements::TemplateAsset::*)()>(&::UnityEngine::UIElements::TemplateAsset::get_serializedDataOverrides)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6af0278;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TemplateAsset*>::get(),
                                                                               "get_serializedDataOverrides", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TemplateAsset.Instantiate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::VisualElement* (
    ::UnityEngine::UIElements::TemplateAsset::*)(::UnityEngine::UIElements::CreationContext)>(&::UnityEngine::UIElements::TemplateAsset::Instantiate)> {
  constexpr static std::size_t size = 0x794;
  constexpr static std::size_t addrs = 0x6af0280;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TemplateAsset*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TemplateAsset*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TemplateAsset.get_slotUsages
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualTreeAsset_SlotUsageEntry>* (
    ::UnityEngine::UIElements::TemplateAsset::*)()>(&::UnityEngine::UIElements::TemplateAsset::get_slotUsages)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6af19b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TemplateAsset*>::get(),
                                                                               "get_slotUsages", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::UIElements::TemplateAsset::__cordl_internal_get_m_TemplateAlias() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TemplateAlias;
}
constexpr ::StringW const& UnityEngine::UIElements::TemplateAsset::__cordl_internal_get_m_TemplateAlias() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TemplateAlias;
}
constexpr void UnityEngine::UIElements::TemplateAsset::__cordl_internal_set_m_TemplateAlias(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TemplateAlias)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset_AttributeOverride>*& UnityEngine::UIElements::TemplateAsset::__cordl_internal_get_m_AttributeOverrides() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AttributeOverrides;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset_AttributeOverride>* const&
UnityEngine::UIElements::TemplateAsset::__cordl_internal_get_m_AttributeOverrides() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AttributeOverrides;
}
constexpr void
UnityEngine::UIElements::TemplateAsset::__cordl_internal_set_m_AttributeOverrides(::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset_AttributeOverride>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AttributeOverrides)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset_UxmlSerializedDataOverride>*&
UnityEngine::UIElements::TemplateAsset::__cordl_internal_get_m_SerializedDataOverride() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SerializedDataOverride;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset_UxmlSerializedDataOverride>* const&
UnityEngine::UIElements::TemplateAsset::__cordl_internal_get_m_SerializedDataOverride() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SerializedDataOverride;
}
constexpr void UnityEngine::UIElements::TemplateAsset::__cordl_internal_set_m_SerializedDataOverride(
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset_UxmlSerializedDataOverride>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SerializedDataOverride)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualTreeAsset_SlotUsageEntry>*& UnityEngine::UIElements::TemplateAsset::__cordl_internal_get_m_SlotUsages() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SlotUsages;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualTreeAsset_SlotUsageEntry>* const& UnityEngine::UIElements::TemplateAsset::__cordl_internal_get_m_SlotUsages() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SlotUsages;
}
constexpr void UnityEngine::UIElements::TemplateAsset::__cordl_internal_set_m_SlotUsages(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualTreeAsset_SlotUsageEntry>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SlotUsages)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset_AttributeOverride>* UnityEngine::UIElements::TemplateAsset::get_attributeOverrides() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TemplateAsset*>::get(),
                                                                             "get_attributeOverrides", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset_AttributeOverride>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset_UxmlSerializedDataOverride>* UnityEngine::UIElements::TemplateAsset::get_serializedDataOverrides() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TemplateAsset*>::get(),
                                                                             "get_serializedDataOverrides", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset_UxmlSerializedDataOverride>*, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::TemplateAsset::Instantiate(::UnityEngine::UIElements::CreationContext cc) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TemplateAsset*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*, false>(this, ___internal_method, cc);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualTreeAsset_SlotUsageEntry>* UnityEngine::UIElements::TemplateAsset::get_slotUsages() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TemplateAsset*>::get(), "get_slotUsages",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualTreeAsset_SlotUsageEntry>*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::TemplateAsset::TemplateAsset() {}
