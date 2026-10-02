#pragma once
// IWYU pragma private; include "UnityEngine/IntegrationInfo.hpp"
#include "UnityEngine/zzzz__IntegrationLimits_impl.hpp"
#include "UnityEngine/zzzz__IntegrationInfo_def.hpp"
#include "UnityEngine/zzzz__IntegrationInfo_def.hpp"
#include "UnityEngine/zzzz__IntegrationLimits_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
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
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::IntegrationInfo__m_Desc_e__FixedBuffer::IntegrationInfo__m_Desc_e__FixedBuffer(uint8_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::UnityEngine::IntegrationInfo__m_Desc_e__FixedBuffer::IntegrationInfo__m_Desc_e__FixedBuffer() {}
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint16_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::IntegrationInfo__m_IntegrationVersion_e__FixedBuffer::IntegrationInfo__m_IntegrationVersion_e__FixedBuffer(uint16_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::UnityEngine::IntegrationInfo__m_IntegrationVersion_e__FixedBuffer::IntegrationInfo__m_IntegrationVersion_e__FixedBuffer() {}
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::IntegrationInfo__m_Name_e__FixedBuffer::IntegrationInfo__m_Name_e__FixedBuffer(uint8_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::UnityEngine::IntegrationInfo__m_Name_e__FixedBuffer::IntegrationInfo__m_Name_e__FixedBuffer() {}
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint16_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::IntegrationInfo__m_SdkVersion_e__FixedBuffer::IntegrationInfo__m_SdkVersion_e__FixedBuffer(uint16_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::UnityEngine::IntegrationInfo__m_SdkVersion_e__FixedBuffer::IntegrationInfo__m_SdkVersion_e__FixedBuffer() {}
//  Writing Method size for method: ::UnityEngine::IntegrationInfo.get_id
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::IntegrationInfo::*)()>(&::UnityEngine::IntegrationInfo::get_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ffe764;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::IntegrationInfo>(), { "get_id", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::IntegrationInfo.get_name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::IntegrationInfo::*)()>(&::UnityEngine::IntegrationInfo::get_name)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6ffe76c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::IntegrationInfo>(), { "get_name", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::IntegrationInfo.get_description
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::IntegrationInfo::*)()>(&::UnityEngine::IntegrationInfo::get_description)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6ffe7c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::IntegrationInfo>(), { "get_description", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::IntegrationInfo.get_sDKMajorVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::UnityEngine::IntegrationInfo::*)()>(&::UnityEngine::IntegrationInfo::get_sDKMajorVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ffe81c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::IntegrationInfo>(), { "get_sDKMajorVersion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::IntegrationInfo.get_sDKMinorVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::UnityEngine::IntegrationInfo::*)()>(&::UnityEngine::IntegrationInfo::get_sDKMinorVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ffe824;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::IntegrationInfo>(), { "get_sDKMinorVersion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::IntegrationInfo.get_sDKPatchVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::UnityEngine::IntegrationInfo::*)()>(&::UnityEngine::IntegrationInfo::get_sDKPatchVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ffe82c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::IntegrationInfo>(), { "get_sDKPatchVersion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::IntegrationInfo.get_majorVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::UnityEngine::IntegrationInfo::*)()>(&::UnityEngine::IntegrationInfo::get_majorVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ffe834;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::IntegrationInfo>(), { "get_majorVersion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::IntegrationInfo.get_minorVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::UnityEngine::IntegrationInfo::*)()>(&::UnityEngine::IntegrationInfo::get_minorVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ffe83c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::IntegrationInfo>(), { "get_minorVersion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::IntegrationInfo.get_patchVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::UnityEngine::IntegrationInfo::*)()>(&::UnityEngine::IntegrationInfo::get_patchVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ffe844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::IntegrationInfo>(), { "get_patchVersion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::IntegrationInfo.get_isFallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::IntegrationInfo::*)()>(&::UnityEngine::IntegrationInfo::get_isFallback)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6ffe84c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::IntegrationInfo>(), { "get_isFallback", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::IntegrationInfo.get_isExperimental
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::IntegrationInfo::*)()>(&::UnityEngine::IntegrationInfo::get_isExperimental)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6ffe864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::IntegrationInfo>(), { "get_isExperimental", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::IntegrationInfo.get_limit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::IntegrationLimits (::UnityEngine::IntegrationInfo::*)()>(&::UnityEngine::IntegrationInfo::get_limit)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6ffe874;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::IntegrationInfo>(), { "get_limit", {}, {} })));
    return ___internal_method;
  }
};
constexpr uint32_t& UnityEngine::IntegrationInfo::__cordl_internal_get_m_Id() {
  return this->___m_Id;
}
constexpr uint32_t const& UnityEngine::IntegrationInfo::__cordl_internal_get_m_Id() const {
  return this->___m_Id;
}
constexpr void UnityEngine::IntegrationInfo::__cordl_internal_set_m_Id(uint32_t value) {
  this->___m_Id = value;
}
constexpr ::UnityEngine::IntegrationInfo__m_IntegrationVersion_e__FixedBuffer& UnityEngine::IntegrationInfo::__cordl_internal_get_m_IntegrationVersion() {
  return this->___m_IntegrationVersion;
}
constexpr ::UnityEngine::IntegrationInfo__m_IntegrationVersion_e__FixedBuffer const& UnityEngine::IntegrationInfo::__cordl_internal_get_m_IntegrationVersion() const {
  return this->___m_IntegrationVersion;
}
constexpr void UnityEngine::IntegrationInfo::__cordl_internal_set_m_IntegrationVersion(::UnityEngine::IntegrationInfo__m_IntegrationVersion_e__FixedBuffer value) {
  this->___m_IntegrationVersion = value;
}
constexpr ::UnityEngine::IntegrationInfo__m_SdkVersion_e__FixedBuffer& UnityEngine::IntegrationInfo::__cordl_internal_get_m_SdkVersion() {
  return this->___m_SdkVersion;
}
constexpr ::UnityEngine::IntegrationInfo__m_SdkVersion_e__FixedBuffer const& UnityEngine::IntegrationInfo::__cordl_internal_get_m_SdkVersion() const {
  return this->___m_SdkVersion;
}
constexpr void UnityEngine::IntegrationInfo::__cordl_internal_set_m_SdkVersion(::UnityEngine::IntegrationInfo__m_SdkVersion_e__FixedBuffer value) {
  this->___m_SdkVersion = value;
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
constexpr ::UnityEngine::IntegrationLimits& UnityEngine::IntegrationInfo::__cordl_internal_get_m_Limit() {
  return this->___m_Limit;
}
constexpr ::UnityEngine::IntegrationLimits const& UnityEngine::IntegrationInfo::__cordl_internal_get_m_Limit() const {
  return this->___m_Limit;
}
constexpr void UnityEngine::IntegrationInfo::__cordl_internal_set_m_Limit(::UnityEngine::IntegrationLimits value) {
  this->___m_Limit = value;
}
inline uint32_t UnityEngine::IntegrationInfo::get_id() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::IntegrationInfo>(), { "get_id", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline ::StringW UnityEngine::IntegrationInfo::get_name() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::IntegrationInfo>(), { "get_name", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW UnityEngine::IntegrationInfo::get_description() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::IntegrationInfo>(), { "get_description", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline uint16_t UnityEngine::IntegrationInfo::get_sDKMajorVersion() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::IntegrationInfo>(), { "get_sDKMajorVersion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint16_t>(*this, ___internal_method);
}
inline uint16_t UnityEngine::IntegrationInfo::get_sDKMinorVersion() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::IntegrationInfo>(), { "get_sDKMinorVersion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint16_t>(*this, ___internal_method);
}
inline uint16_t UnityEngine::IntegrationInfo::get_sDKPatchVersion() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::IntegrationInfo>(), { "get_sDKPatchVersion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint16_t>(*this, ___internal_method);
}
inline uint16_t UnityEngine::IntegrationInfo::get_majorVersion() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::IntegrationInfo>(), { "get_majorVersion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint16_t>(*this, ___internal_method);
}
inline uint16_t UnityEngine::IntegrationInfo::get_minorVersion() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::IntegrationInfo>(), { "get_minorVersion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint16_t>(*this, ___internal_method);
}
inline uint16_t UnityEngine::IntegrationInfo::get_patchVersion() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::IntegrationInfo>(), { "get_patchVersion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint16_t>(*this, ___internal_method);
}
inline bool UnityEngine::IntegrationInfo::get_isFallback() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::IntegrationInfo>(), { "get_isFallback", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool UnityEngine::IntegrationInfo::get_isExperimental() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::IntegrationInfo>(), { "get_isExperimental", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::UnityEngine::IntegrationLimits UnityEngine::IntegrationInfo::get_limit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::IntegrationInfo>(), { "get_limit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::IntegrationLimits>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Id", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_IntegrationVersion", ty:
// "::UnityEngine::IntegrationInfo__m_IntegrationVersion_e__FixedBuffer", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_SdkVersion", ty:
// "::UnityEngine::IntegrationInfo__m_SdkVersion_e__FixedBuffer", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Features", ty:
// "::UnityEngine::IntegrationInfo_SupportedUnityFeatures", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Name", ty:
// "::UnityEngine::IntegrationInfo__m_Name_e__FixedBuffer", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Desc", ty:
// "::UnityEngine::IntegrationInfo__m_Desc_e__FixedBuffer", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Limit", ty: "::UnityEngine::IntegrationLimits", modifiers: "",
// def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::IntegrationInfo::IntegrationInfo(uint32_t m_Id, ::UnityEngine::IntegrationInfo__m_IntegrationVersion_e__FixedBuffer m_IntegrationVersion,
                                                          ::UnityEngine::IntegrationInfo__m_SdkVersion_e__FixedBuffer m_SdkVersion, ::UnityEngine::IntegrationInfo_SupportedUnityFeatures m_Features,
                                                          ::UnityEngine::IntegrationInfo__m_Name_e__FixedBuffer m_Name, ::UnityEngine::IntegrationInfo__m_Desc_e__FixedBuffer m_Desc,
                                                          ::UnityEngine::IntegrationLimits m_Limit) noexcept {
  this->m_Id = m_Id;
  this->m_IntegrationVersion = m_IntegrationVersion;
  this->m_SdkVersion = m_SdkVersion;
  this->m_Features = m_Features;
  this->m_Name = m_Name;
  this->m_Desc = m_Desc;
  this->m_Limit = m_Limit;
}
// Ctor Parameters []
constexpr ::UnityEngine::IntegrationInfo::IntegrationInfo() {}
