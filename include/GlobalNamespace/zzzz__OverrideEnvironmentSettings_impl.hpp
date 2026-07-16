#pragma once
// IWYU pragma private; include "GlobalNamespace/OverrideEnvironmentSettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OverrideEnvironmentSettings_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentInfoSO_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentType_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OverrideEnvironmentSettings.get_overrideEnvironments
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OverrideEnvironmentSettings::*)()>(&::GlobalNamespace::OverrideEnvironmentSettings::get_overrideEnvironments)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3741a44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OverrideEnvironmentSettings*>(), { "get_overrideEnvironments", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OverrideEnvironmentSettings.set_overrideEnvironments
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OverrideEnvironmentSettings::*)(bool)>(&::GlobalNamespace::OverrideEnvironmentSettings::set_overrideEnvironments)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3741a4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OverrideEnvironmentSettings*>(), { "set_overrideEnvironments", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OverrideEnvironmentSettings.SetEnvironmentInfoForType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OverrideEnvironmentSettings::*)(::GlobalNamespace::EnvironmentType, ::GlobalNamespace::EnvironmentInfoSO*)>(
    &::GlobalNamespace::OverrideEnvironmentSettings::SetEnvironmentInfoForType)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3741a54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OverrideEnvironmentSettings*>(),
                                         { "SetEnvironmentInfoForType", {}, { ::i2c::type_of<::GlobalNamespace::EnvironmentType>(), ::i2c::type_of<::GlobalNamespace::EnvironmentInfoSO*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OverrideEnvironmentSettings.GetOverrideEnvironmentInfoForType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::EnvironmentInfoSO> (::GlobalNamespace::OverrideEnvironmentSettings::*)(::GlobalNamespace::EnvironmentType)>(
    &::GlobalNamespace::OverrideEnvironmentSettings::GetOverrideEnvironmentInfoForType)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3741ad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OverrideEnvironmentSettings*>(),
                                                                                           { "GetOverrideEnvironmentInfoForType", {}, { ::i2c::type_of<::GlobalNamespace::EnvironmentType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OverrideEnvironmentSettings._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OverrideEnvironmentSettings::*)()>(&::GlobalNamespace::OverrideEnvironmentSettings::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x3741b2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OverrideEnvironmentSettings*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::OverrideEnvironmentSettings::__cordl_internal_get__overrideEnvironments() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideEnvironments;
}
constexpr bool const& GlobalNamespace::OverrideEnvironmentSettings::__cordl_internal_get__overrideEnvironments() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideEnvironments;
}
constexpr void GlobalNamespace::OverrideEnvironmentSettings::__cordl_internal_set__overrideEnvironments(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____overrideEnvironments = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::EnvironmentType, ::UnityW<::GlobalNamespace::EnvironmentInfoSO>>*&
GlobalNamespace::OverrideEnvironmentSettings::__cordl_internal_get__data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____data;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::EnvironmentType, ::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* const&
GlobalNamespace::OverrideEnvironmentSettings::__cordl_internal_get__data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____data;
}
constexpr void GlobalNamespace::OverrideEnvironmentSettings::__cordl_internal_set__data(
    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::EnvironmentType, ::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____data = value;
}
inline bool GlobalNamespace::OverrideEnvironmentSettings::get_overrideEnvironments() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OverrideEnvironmentSettings*>(), { "get_overrideEnvironments", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::OverrideEnvironmentSettings::set_overrideEnvironments(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OverrideEnvironmentSettings*>(), { "set_overrideEnvironments", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::OverrideEnvironmentSettings::SetEnvironmentInfoForType(::GlobalNamespace::EnvironmentType environmentType, ::GlobalNamespace::EnvironmentInfoSO* environmentInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OverrideEnvironmentSettings*>(),
                                              { "SetEnvironmentInfoForType", {}, { ::i2c::type_of<::GlobalNamespace::EnvironmentType>(), ::i2c::type_of<::GlobalNamespace::EnvironmentInfoSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, environmentType, environmentInfo);
}
inline ::UnityW<::GlobalNamespace::EnvironmentInfoSO> GlobalNamespace::OverrideEnvironmentSettings::GetOverrideEnvironmentInfoForType(::GlobalNamespace::EnvironmentType environmentType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OverrideEnvironmentSettings*>(),
                                                                                         { "GetOverrideEnvironmentInfoForType", {}, { ::i2c::type_of<::GlobalNamespace::EnvironmentType>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>(this, ___internal_method, environmentType);
}
inline void GlobalNamespace::OverrideEnvironmentSettings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OverrideEnvironmentSettings*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OverrideEnvironmentSettings* GlobalNamespace::OverrideEnvironmentSettings::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OverrideEnvironmentSettings*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OverrideEnvironmentSettings::OverrideEnvironmentSettings() {}
