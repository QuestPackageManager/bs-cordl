#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TemplateAsset.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElementAsset_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TemplateAsset_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__TemplateAsset_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlSerializedData_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualTreeAsset_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::TemplateAsset_AttributeOverride.NamesPathMatchesElementNamesPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::TemplateAsset_AttributeOverride::*)(::System::Collections::Generic::IList_1<::StringW>*)>(
    &::UnityEngine::UIElements::TemplateAsset_AttributeOverride::NamesPathMatchesElementNamesPath)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x7143e6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TemplateAsset_AttributeOverride>(),
                                                             { "NamesPathMatchesElementNamesPath", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
inline bool UnityEngine::UIElements::TemplateAsset_AttributeOverride::NamesPathMatchesElementNamesPath(::System::Collections::Generic::IList_1<::StringW>* elementNamesPath) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TemplateAsset_AttributeOverride>(),
                                                           { "NamesPathMatchesElementNamesPath", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, elementNamesPath);
}
// Ctor Parameters [CppParam { name: "m_ElementName", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_NamesPath", ty: "::ArrayW<::StringW>", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "m_AttributeName", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Value", ty: "::StringW",
// modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::UIElements::TemplateAsset_AttributeOverride::TemplateAsset_AttributeOverride(::StringW m_ElementName, ::ArrayW<::StringW> m_NamesPath, ::StringW m_AttributeName,
                                                                                                      ::StringW m_Value) noexcept {
  this->m_ElementName = m_ElementName;
  this->m_NamesPath = m_NamesPath;
  this->m_AttributeName = m_AttributeName;
  this->m_Value = m_Value;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::TemplateAsset_AttributeOverride::TemplateAsset_AttributeOverride() {}
// Ctor Parameters [CppParam { name: "m_ElementId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_ElementIdsPath", ty:
// "::System::Collections::Generic::List_1<int32_t>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_SerializedData", ty: "::UnityEngine::UIElements::UxmlSerializedData*",
// modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::UIElements::TemplateAsset_UxmlSerializedDataOverride::TemplateAsset_UxmlSerializedDataOverride(int32_t m_ElementId,
                                                                                                                        ::System::Collections::Generic::List_1<int32_t>* m_ElementIdsPath,
                                                                                                                        ::UnityEngine::UIElements::UxmlSerializedData* m_SerializedData) noexcept {
  this->m_ElementId = m_ElementId;
  this->m_ElementIdsPath = m_ElementIdsPath;
  this->m_SerializedData = m_SerializedData;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::TemplateAsset_UxmlSerializedDataOverride::TemplateAsset_UxmlSerializedDataOverride() {}
//  Writing Method size for method: ::UnityEngine::UIElements::TemplateAsset.get_templateAlias
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::UIElements::TemplateAsset::*)()>(&::UnityEngine::UIElements::TemplateAsset::get_templateAlias)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7143dec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TemplateAsset*>(), { "get_templateAlias", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TemplateAsset.get_attributeOverrides
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset_AttributeOverride>* (
    ::UnityEngine::UIElements::TemplateAsset::*)()>(&::UnityEngine::UIElements::TemplateAsset::get_attributeOverrides)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7143df4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TemplateAsset*>(), { "get_attributeOverrides", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TemplateAsset.get_slotUsages
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualTreeAsset_SlotUsageEntry>* (
    ::UnityEngine::UIElements::TemplateAsset::*)()>(&::UnityEngine::UIElements::TemplateAsset::get_slotUsages)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7143dfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TemplateAsset*>(), { "get_slotUsages", {}, {} })));
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
  this->___m_TemplateAlias = value;
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
  this->___m_AttributeOverrides = value;
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
  this->___m_SlotUsages = value;
}
inline void UnityEngine::UIElements::TemplateAsset::setStaticF_UxmlInstanceTypeName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "UxmlInstanceTypeName", ::UnityEngine::UIElements::TemplateAsset*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::TemplateAsset::getStaticF_UxmlInstanceTypeName() {
  return ::cordl_internals::getStaticField<::StringW, "UxmlInstanceTypeName", ::UnityEngine::UIElements::TemplateAsset*>();
}
inline ::StringW UnityEngine::UIElements::TemplateAsset::get_templateAlias() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TemplateAsset*>(), { "get_templateAlias", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset_AttributeOverride>* UnityEngine::UIElements::TemplateAsset::get_attributeOverrides() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TemplateAsset*>(), { "get_attributeOverrides", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset_AttributeOverride>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualTreeAsset_SlotUsageEntry>* UnityEngine::UIElements::TemplateAsset::get_slotUsages() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TemplateAsset*>(), { "get_slotUsages", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualTreeAsset_SlotUsageEntry>*>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::TemplateAsset::TemplateAsset() {}
