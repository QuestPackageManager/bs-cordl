#pragma once
// IWYU pragma private; include "OVR/OpenVR/CVRSettings.hpp"
#include "OVR/OpenVR/zzzz__IVRSettings_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OVR/OpenVR/zzzz__CVRSettings_def.hpp"
#include "OVR/OpenVR/zzzz__EVRSettingsError_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::OVR::OpenVR::CVRSettings._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::CVRSettings::*)(::System::IntPtr)>(&::OVR::OpenVR::CVRSettings::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5e44b28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSettings*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSettings.GetSettingsErrorNameFromEnum
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::OVR::OpenVR::CVRSettings::*)(::OVR::OpenVR::EVRSettingsError)>(&::OVR::OpenVR::CVRSettings::GetSettingsErrorNameFromEnum)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5e44c28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSettings*>(), { "GetSettingsErrorNameFromEnum", {}, { ::i2c::type_of<::OVR::OpenVR::EVRSettingsError>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSettings.Sync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::CVRSettings::*)(bool, ::by_ref<::OVR::OpenVR::EVRSettingsError>)>(&::OVR::OpenVR::CVRSettings::Sync)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e44cb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSettings*>(), { "Sync", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::EVRSettingsError>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSettings.SetBool
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::CVRSettings::*)(::StringW, ::StringW, bool, ::by_ref<::OVR::OpenVR::EVRSettingsError>)>(
    &::OVR::OpenVR::CVRSettings::SetBool)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e44cd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSettings*>(),
                            { "SetBool", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::EVRSettingsError>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSettings.SetInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::CVRSettings::*)(::StringW, ::StringW, int32_t, ::by_ref<::OVR::OpenVR::EVRSettingsError>)>(
    &::OVR::OpenVR::CVRSettings::SetInt32)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e44cfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSettings*>(),
                            { "SetInt32", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::EVRSettingsError>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSettings.SetFloat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::CVRSettings::*)(::StringW, ::StringW, float_t, ::by_ref<::OVR::OpenVR::EVRSettingsError>)>(
    &::OVR::OpenVR::CVRSettings::SetFloat)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e44d1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSettings*>(),
                            { "SetFloat", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::EVRSettingsError>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSettings.SetString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::CVRSettings::*)(::StringW, ::StringW, ::StringW, ::by_ref<::OVR::OpenVR::EVRSettingsError>)>(
    &::OVR::OpenVR::CVRSettings::SetString)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e44d3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::OVR::OpenVR::CVRSettings*>(),
                         { "SetString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::EVRSettingsError>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSettings.GetBool
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::CVRSettings::*)(::StringW, ::StringW, ::by_ref<::OVR::OpenVR::EVRSettingsError>)>(&::OVR::OpenVR::CVRSettings::GetBool)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e44d5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSettings*>(),
                                                { "GetBool", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::EVRSettingsError>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSettings.GetInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::OVR::OpenVR::CVRSettings::*)(::StringW, ::StringW, ::by_ref<::OVR::OpenVR::EVRSettingsError>)>(
    &::OVR::OpenVR::CVRSettings::GetInt32)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e44d7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSettings*>(),
                                                { "GetInt32", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::EVRSettingsError>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSettings.GetFloat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::OVR::OpenVR::CVRSettings::*)(::StringW, ::StringW, ::by_ref<::OVR::OpenVR::EVRSettingsError>)>(
    &::OVR::OpenVR::CVRSettings::GetFloat)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e44d9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSettings*>(),
                                                { "GetFloat", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::EVRSettingsError>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSettings.GetString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::CVRSettings::*)(::StringW, ::StringW, ::System::Text::StringBuilder*, uint32_t, ::by_ref<::OVR::OpenVR::EVRSettingsError>)>(
    &::OVR::OpenVR::CVRSettings::GetString)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e44dbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSettings*>(), { "GetString",
                                                                                           {},
                                                                                           { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Text::StringBuilder*>(),
                                                                                             ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::EVRSettingsError>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSettings.RemoveSection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::CVRSettings::*)(::StringW, ::by_ref<::OVR::OpenVR::EVRSettingsError>)>(&::OVR::OpenVR::CVRSettings::RemoveSection)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e44ddc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSettings*>(), { "RemoveSection", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::EVRSettingsError>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSettings.RemoveKeyInSection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::CVRSettings::*)(::StringW, ::StringW, ::by_ref<::OVR::OpenVR::EVRSettingsError>)>(
    &::OVR::OpenVR::CVRSettings::RemoveKeyInSection)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e44dfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSettings*>(),
                                         { "RemoveKeyInSection", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::EVRSettingsError>>() } })));
    return ___internal_method;
  }
};
constexpr ::OVR::OpenVR::IVRSettings& OVR::OpenVR::CVRSettings::__cordl_internal_get_FnTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FnTable;
}
constexpr ::OVR::OpenVR::IVRSettings const& OVR::OpenVR::CVRSettings::__cordl_internal_get_FnTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FnTable;
}
constexpr void OVR::OpenVR::CVRSettings::__cordl_internal_set_FnTable(::OVR::OpenVR::IVRSettings value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___FnTable = value;
}
inline void OVR::OpenVR::CVRSettings::_ctor(::System::IntPtr pInterface) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSettings*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pInterface);
}
inline ::StringW OVR::OpenVR::CVRSettings::GetSettingsErrorNameFromEnum(::OVR::OpenVR::EVRSettingsError eError) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSettings*>(), { "GetSettingsErrorNameFromEnum", {}, { ::i2c::type_of<::OVR::OpenVR::EVRSettingsError>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, eError);
}
inline bool OVR::OpenVR::CVRSettings::Sync(bool bForce, ::by_ref<::OVR::OpenVR::EVRSettingsError> peError) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSettings*>(), { "Sync", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::EVRSettingsError>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, bForce, peError);
}
inline void OVR::OpenVR::CVRSettings::SetBool(::StringW pchSection, ::StringW pchSettingsKey, bool bValue, ::by_ref<::OVR::OpenVR::EVRSettingsError> peError) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSettings*>(),
                          { "SetBool", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::EVRSettingsError>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pchSection, pchSettingsKey, bValue, peError);
}
inline void OVR::OpenVR::CVRSettings::SetInt32(::StringW pchSection, ::StringW pchSettingsKey, int32_t nValue, ::by_ref<::OVR::OpenVR::EVRSettingsError> peError) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSettings*>(),
                          { "SetInt32", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::EVRSettingsError>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pchSection, pchSettingsKey, nValue, peError);
}
inline void OVR::OpenVR::CVRSettings::SetFloat(::StringW pchSection, ::StringW pchSettingsKey, float_t flValue, ::by_ref<::OVR::OpenVR::EVRSettingsError> peError) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSettings*>(),
                          { "SetFloat", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::EVRSettingsError>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pchSection, pchSettingsKey, flValue, peError);
}
inline void OVR::OpenVR::CVRSettings::SetString(::StringW pchSection, ::StringW pchSettingsKey, ::StringW pchValue, ::by_ref<::OVR::OpenVR::EVRSettingsError> peError) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::OVR::OpenVR::CVRSettings*>(),
                       { "SetString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::EVRSettingsError>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pchSection, pchSettingsKey, pchValue, peError);
}
inline bool OVR::OpenVR::CVRSettings::GetBool(::StringW pchSection, ::StringW pchSettingsKey, ::by_ref<::OVR::OpenVR::EVRSettingsError> peError) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSettings*>(),
                                              { "GetBool", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::EVRSettingsError>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pchSection, pchSettingsKey, peError);
}
inline int32_t OVR::OpenVR::CVRSettings::GetInt32(::StringW pchSection, ::StringW pchSettingsKey, ::by_ref<::OVR::OpenVR::EVRSettingsError> peError) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSettings*>(),
                                              { "GetInt32", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::EVRSettingsError>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, pchSection, pchSettingsKey, peError);
}
inline float_t OVR::OpenVR::CVRSettings::GetFloat(::StringW pchSection, ::StringW pchSettingsKey, ::by_ref<::OVR::OpenVR::EVRSettingsError> peError) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSettings*>(),
                                              { "GetFloat", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::EVRSettingsError>>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, pchSection, pchSettingsKey, peError);
}
inline void OVR::OpenVR::CVRSettings::GetString(::StringW pchSection, ::StringW pchSettingsKey, ::System::Text::StringBuilder* pchValue, uint32_t unValueLen,
                                                ::by_ref<::OVR::OpenVR::EVRSettingsError> peError) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSettings*>(), { "GetString",
                                                                                         {},
                                                                                         { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Text::StringBuilder*>(),
                                                                                           ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::EVRSettingsError>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pchSection, pchSettingsKey, pchValue, unValueLen, peError);
}
inline void OVR::OpenVR::CVRSettings::RemoveSection(::StringW pchSection, ::by_ref<::OVR::OpenVR::EVRSettingsError> peError) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSettings*>(), { "RemoveSection", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::EVRSettingsError>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pchSection, peError);
}
inline void OVR::OpenVR::CVRSettings::RemoveKeyInSection(::StringW pchSection, ::StringW pchSettingsKey, ::by_ref<::OVR::OpenVR::EVRSettingsError> peError) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSettings*>(),
                                       { "RemoveKeyInSection", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::EVRSettingsError>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pchSection, pchSettingsKey, peError);
}
inline ::OVR::OpenVR::CVRSettings* OVR::OpenVR::CVRSettings::New_ctor(::System::IntPtr pInterface) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::CVRSettings*>(pInterface));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::CVRSettings::CVRSettings() {}
