#pragma once
// IWYU pragma private; include "OculusStudios\Platform\Core\RichPresenceRuntimeInstance.hpp"
#include "OculusStudios/Platform/Core/zzzz__PartyInfo_impl.hpp"
#include "OculusStudios/Platform/Core/zzzz__RichPresenceTimestamp_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "OculusStudios/Platform/Core/zzzz__RichPresenceRuntimeInstance_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__IRichPresenceDefinition_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__PartyInfo_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__RichPresenceTimestamp_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::OculusStudios::Platform::Core::RichPresenceRuntimeInstance.get_definition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OculusStudios::Platform::Core::IRichPresenceDefinition* (::OculusStudios::Platform::Core::RichPresenceRuntimeInstance::*)()>(
    &::OculusStudios::Platform::Core::RichPresenceRuntimeInstance::get_definition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f2e4ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::RichPresenceRuntimeInstance>(), { "get_definition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::RichPresenceRuntimeInstance.get_state
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::OculusStudios::Platform::Core::RichPresenceRuntimeInstance::*)()>(
    &::OculusStudios::Platform::Core::RichPresenceRuntimeInstance::get_state)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f2e4b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::RichPresenceRuntimeInstance>(), { "get_state", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::RichPresenceRuntimeInstance.get_partyInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::OculusStudios::Platform::Core::PartyInfo> (::OculusStudios::Platform::Core::RichPresenceRuntimeInstance::*)()>(
    &::OculusStudios::Platform::Core::RichPresenceRuntimeInstance::get_partyInfo)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f2e4bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::RichPresenceRuntimeInstance>(), { "get_partyInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::RichPresenceRuntimeInstance.get_timestamp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::OculusStudios::Platform::Core::RichPresenceTimestamp> (
    ::OculusStudios::Platform::Core::RichPresenceRuntimeInstance::*)()>(&::OculusStudios::Platform::Core::RichPresenceRuntimeInstance::get_timestamp)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f2e4c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::RichPresenceRuntimeInstance>(), { "get_timestamp", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::RichPresenceRuntimeInstance._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::Platform::Core::RichPresenceRuntimeInstance::*)(
    ::OculusStudios::Platform::Core::IRichPresenceDefinition*, ::StringW, ::System::Nullable_1<::OculusStudios::Platform::Core::PartyInfo>,
    ::System::Nullable_1<::OculusStudios::Platform::Core::RichPresenceTimestamp>)>(&::OculusStudios::Platform::Core::RichPresenceRuntimeInstance::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f2e4dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::RichPresenceRuntimeInstance>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<::OculusStudios::Platform::Core::IRichPresenceDefinition*>(), ::i2c::type_of<::StringW>(),
                                                                                               ::i2c::type_of<::System::Nullable_1<::OculusStudios::Platform::Core::PartyInfo>>(),
                                                                                               ::i2c::type_of<::System::Nullable_1<::OculusStudios::Platform::Core::RichPresenceTimestamp>>() } })));
    return ___internal_method;
  }
};
inline ::OculusStudios::Platform::Core::IRichPresenceDefinition* OculusStudios::Platform::Core::RichPresenceRuntimeInstance::get_definition() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::RichPresenceRuntimeInstance>(), { "get_definition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::OculusStudios::Platform::Core::IRichPresenceDefinition*>(*this, ___internal_method);
}
inline ::StringW OculusStudios::Platform::Core::RichPresenceRuntimeInstance::get_state() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::RichPresenceRuntimeInstance>(), { "get_state", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::System::Nullable_1<::OculusStudios::Platform::Core::PartyInfo> OculusStudios::Platform::Core::RichPresenceRuntimeInstance::get_partyInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::RichPresenceRuntimeInstance>(), { "get_partyInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::OculusStudios::Platform::Core::PartyInfo>>(*this, ___internal_method);
}
inline ::System::Nullable_1<::OculusStudios::Platform::Core::RichPresenceTimestamp> OculusStudios::Platform::Core::RichPresenceRuntimeInstance::get_timestamp() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::RichPresenceRuntimeInstance>(), { "get_timestamp", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::OculusStudios::Platform::Core::RichPresenceTimestamp>>(*this, ___internal_method);
}
inline void OculusStudios::Platform::Core::RichPresenceRuntimeInstance::_ctor(::OculusStudios::Platform::Core::IRichPresenceDefinition* definition, ::StringW state,
                                                                              ::System::Nullable_1<::OculusStudios::Platform::Core::PartyInfo> partyInfo,
                                                                              ::System::Nullable_1<::OculusStudios::Platform::Core::RichPresenceTimestamp> timestamp) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::RichPresenceRuntimeInstance>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::OculusStudios::Platform::Core::IRichPresenceDefinition*>(), ::i2c::type_of<::StringW>(),
                                                                                             ::i2c::type_of<::System::Nullable_1<::OculusStudios::Platform::Core::PartyInfo>>(),
                                                                                             ::i2c::type_of<::System::Nullable_1<::OculusStudios::Platform::Core::RichPresenceTimestamp>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, definition, state, partyInfo, timestamp);
}
// Ctor Parameters [CppParam { name: "_definition_k__BackingField", ty: "::OculusStudios::Platform::Core::IRichPresenceDefinition*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_state_k__BackingField", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "_partyInfo_k__BackingField", ty:
// "::System::Nullable_1<::OculusStudios::Platform::Core::PartyInfo>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_timestamp_k__BackingField", ty:
// "::System::Nullable_1<::OculusStudios::Platform::Core::RichPresenceTimestamp>", modifiers: "", def_value: Some("{}") }]
constexpr ::OculusStudios::Platform::Core::RichPresenceRuntimeInstance::RichPresenceRuntimeInstance(
    ::OculusStudios::Platform::Core::IRichPresenceDefinition* _definition_k__BackingField, ::StringW _state_k__BackingField,
    ::System::Nullable_1<::OculusStudios::Platform::Core::PartyInfo> _partyInfo_k__BackingField,
    ::System::Nullable_1<::OculusStudios::Platform::Core::RichPresenceTimestamp> _timestamp_k__BackingField) noexcept {
  this->_definition_k__BackingField = _definition_k__BackingField;
  this->_state_k__BackingField = _state_k__BackingField;
  this->_partyInfo_k__BackingField = _partyInfo_k__BackingField;
  this->_timestamp_k__BackingField = _timestamp_k__BackingField;
}
// Ctor Parameters []
constexpr ::OculusStudios::Platform::Core::RichPresenceRuntimeInstance::RichPresenceRuntimeInstance() {}
