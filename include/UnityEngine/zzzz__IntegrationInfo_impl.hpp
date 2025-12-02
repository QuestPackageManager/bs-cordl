#pragma once
// IWYU pragma private; include "UnityEngine/IntegrationInfo.hpp"
#include "UnityEngine/zzzz__IntegrationInfo_def.hpp"
#include "UnityEngine/zzzz__IntegrationInfo_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::IntegrationInfo_SupportedUnityFeatures::IntegrationInfo_SupportedUnityFeatures(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::IntegrationInfo_SupportedUnityFeatures::IntegrationInfo_SupportedUnityFeatures() {}
constexpr ::UnityEngine::IntegrationInfo_SupportedUnityFeatures UnityEngine::IntegrationInfo_SupportedUnityFeatures::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::IntegrationInfo_SupportedUnityFeatures UnityEngine::IntegrationInfo_SupportedUnityFeatures::DynamicsSupport{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::IntegrationInfo_SupportedUnityFeatures UnityEngine::IntegrationInfo_SupportedUnityFeatures::SDKVisualDebuggerSupport{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::IntegrationInfo_SupportedUnityFeatures UnityEngine::IntegrationInfo_SupportedUnityFeatures::ArticulationSupport{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::IntegrationInfo_SupportedUnityFeatures UnityEngine::IntegrationInfo_SupportedUnityFeatures::ImmediateModeSupport{ static_cast<int32_t>(0x10) };
constexpr ::UnityEngine::IntegrationInfo_SupportedUnityFeatures UnityEngine::IntegrationInfo_SupportedUnityFeatures::VehicleSupport{ static_cast<int32_t>(0x20) };
constexpr ::UnityEngine::IntegrationInfo_SupportedUnityFeatures UnityEngine::IntegrationInfo_SupportedUnityFeatures::CharacterControllerSupport{ static_cast<int32_t>(0x40) };
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::IntegrationInfo__IntegrationVersion_e__FixedBuffer::IntegrationInfo__IntegrationVersion_e__FixedBuffer(uint16_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::UnityEngine::IntegrationInfo__IntegrationVersion_e__FixedBuffer::IntegrationInfo__IntegrationVersion_e__FixedBuffer() {}
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::IntegrationInfo__SdkVersion_e__FixedBuffer::IntegrationInfo__SdkVersion_e__FixedBuffer(uint16_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::UnityEngine::IntegrationInfo__SdkVersion_e__FixedBuffer::IntegrationInfo__SdkVersion_e__FixedBuffer() {}
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::IntegrationInfo__m_Desc_e__FixedBuffer::IntegrationInfo__m_Desc_e__FixedBuffer(uint8_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::UnityEngine::IntegrationInfo__m_Desc_e__FixedBuffer::IntegrationInfo__m_Desc_e__FixedBuffer() {}
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::IntegrationInfo__m_Name_e__FixedBuffer::IntegrationInfo__m_Name_e__FixedBuffer(uint8_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::UnityEngine::IntegrationInfo__m_Name_e__FixedBuffer::IntegrationInfo__m_Name_e__FixedBuffer() {}
//  Writing Method size for method: ::UnityEngine::IntegrationInfo.get_Name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::IntegrationInfo::*)()>(&::UnityEngine::IntegrationInfo::get_Name)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x695eac0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::IntegrationInfo>::get(), "get_Name",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::IntegrationInfo.get_Description
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::IntegrationInfo::*)()>(&::UnityEngine::IntegrationInfo::get_Description)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x695eb18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::IntegrationInfo>::get(), "get_Description",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr uint32_t& UnityEngine::IntegrationInfo::__cordl_internal_get_Id() {
  return this->___Id;
}
constexpr uint32_t const& UnityEngine::IntegrationInfo::__cordl_internal_get_Id() const {
  return this->___Id;
}
constexpr void UnityEngine::IntegrationInfo::__cordl_internal_set_Id(uint32_t value) {
  this->___Id = value;
}
constexpr ::UnityEngine::IntegrationInfo__IntegrationVersion_e__FixedBuffer& UnityEngine::IntegrationInfo::__cordl_internal_get_IntegrationVersion() {
  return this->___IntegrationVersion;
}
constexpr ::UnityEngine::IntegrationInfo__IntegrationVersion_e__FixedBuffer const& UnityEngine::IntegrationInfo::__cordl_internal_get_IntegrationVersion() const {
  return this->___IntegrationVersion;
}
constexpr void UnityEngine::IntegrationInfo::__cordl_internal_set_IntegrationVersion(::UnityEngine::IntegrationInfo__IntegrationVersion_e__FixedBuffer value) {
  this->___IntegrationVersion = value;
}
constexpr ::UnityEngine::IntegrationInfo__SdkVersion_e__FixedBuffer& UnityEngine::IntegrationInfo::__cordl_internal_get_SdkVersion() {
  return this->___SdkVersion;
}
constexpr ::UnityEngine::IntegrationInfo__SdkVersion_e__FixedBuffer const& UnityEngine::IntegrationInfo::__cordl_internal_get_SdkVersion() const {
  return this->___SdkVersion;
}
constexpr void UnityEngine::IntegrationInfo::__cordl_internal_set_SdkVersion(::UnityEngine::IntegrationInfo__SdkVersion_e__FixedBuffer value) {
  this->___SdkVersion = value;
}
constexpr ::UnityEngine::IntegrationInfo_SupportedUnityFeatures& UnityEngine::IntegrationInfo::__cordl_internal_get_m_Features() {
  return this->___m_Features;
}
constexpr ::UnityEngine::IntegrationInfo_SupportedUnityFeatures const& UnityEngine::IntegrationInfo::__cordl_internal_get_m_Features() const {
  return this->___m_Features;
}
constexpr void UnityEngine::IntegrationInfo::__cordl_internal_set_m_Features(::UnityEngine::IntegrationInfo_SupportedUnityFeatures value) {
  this->___m_Features = value;
}
constexpr ::UnityEngine::IntegrationInfo__m_Name_e__FixedBuffer& UnityEngine::IntegrationInfo::__cordl_internal_get_m_Name() {
  return this->___m_Name;
}
constexpr ::UnityEngine::IntegrationInfo__m_Name_e__FixedBuffer const& UnityEngine::IntegrationInfo::__cordl_internal_get_m_Name() const {
  return this->___m_Name;
}
constexpr void UnityEngine::IntegrationInfo::__cordl_internal_set_m_Name(::UnityEngine::IntegrationInfo__m_Name_e__FixedBuffer value) {
  this->___m_Name = value;
}
constexpr ::UnityEngine::IntegrationInfo__m_Desc_e__FixedBuffer& UnityEngine::IntegrationInfo::__cordl_internal_get_m_Desc() {
  return this->___m_Desc;
}
constexpr ::UnityEngine::IntegrationInfo__m_Desc_e__FixedBuffer const& UnityEngine::IntegrationInfo::__cordl_internal_get_m_Desc() const {
  return this->___m_Desc;
}
constexpr void UnityEngine::IntegrationInfo::__cordl_internal_set_m_Desc(::UnityEngine::IntegrationInfo__m_Desc_e__FixedBuffer value) {
  this->___m_Desc = value;
}
inline ::StringW UnityEngine::IntegrationInfo::get_Name() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::IntegrationInfo>::get(), "get_Name",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::IntegrationInfo::get_Description() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::IntegrationInfo>::get(), "get_Description",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Id", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "IntegrationVersion", ty:
// "::UnityEngine::IntegrationInfo__IntegrationVersion_e__FixedBuffer", modifiers: "", def_value: Some("{}") }, CppParam { name: "SdkVersion", ty:
// "::UnityEngine::IntegrationInfo__SdkVersion_e__FixedBuffer", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Features", ty: "::UnityEngine::IntegrationInfo_SupportedUnityFeatures",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Name", ty: "::UnityEngine::IntegrationInfo__m_Name_e__FixedBuffer", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Desc",
// ty: "::UnityEngine::IntegrationInfo__m_Desc_e__FixedBuffer", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::IntegrationInfo::IntegrationInfo(uint32_t Id, ::UnityEngine::IntegrationInfo__IntegrationVersion_e__FixedBuffer IntegrationVersion,
                                                          ::UnityEngine::IntegrationInfo__SdkVersion_e__FixedBuffer SdkVersion, ::UnityEngine::IntegrationInfo_SupportedUnityFeatures m_Features,
                                                          ::UnityEngine::IntegrationInfo__m_Name_e__FixedBuffer m_Name, ::UnityEngine::IntegrationInfo__m_Desc_e__FixedBuffer m_Desc) noexcept {
  this->Id = Id;
  this->IntegrationVersion = IntegrationVersion;
  this->SdkVersion = SdkVersion;
  this->m_Features = m_Features;
  this->m_Name = m_Name;
  this->m_Desc = m_Desc;
}
// Ctor Parameters []
constexpr ::UnityEngine::IntegrationInfo::IntegrationInfo() {}
