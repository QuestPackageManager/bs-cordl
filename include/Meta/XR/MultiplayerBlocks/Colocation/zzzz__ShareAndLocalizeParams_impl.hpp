#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Colocation/ShareAndLocalizeParams.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/zzzz__ShareAndLocalizeParams_def.hpp"
#include "System/zzzz__Guid_def.hpp"
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams::*)(uint64_t, uint64_t, ::System::Guid)>(
    &::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5a79560;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams>(),
                                                             { ".ctor", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::Guid>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams::*)(uint64_t, uint64_t, ::System::Guid, bool)>(
    &::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5a7bf14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams>(),
                                                             { ".ctor", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::Guid>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams::*)()>(
    &::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams::ToString)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x5a7bf24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams>(),
                                                                                          { ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams>(), 3 }));
    return ___internal_method;
  }
};
inline void Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams::_ctor(uint64_t requestingPlayerId, uint64_t requestingPlayerOculusId, ::System::Guid anchorUUID) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams>(),
                                                           { ".ctor", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::Guid>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, requestingPlayerId, requestingPlayerOculusId, anchorUUID);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams::_ctor(uint64_t requestingPlayerId, uint64_t requestingPlayerOculusId, ::System::Guid anchorUUID,
                                                                                   bool anchorFlowSucceeded) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams>(),
                                                           { ".ctor", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::Guid>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, requestingPlayerId, requestingPlayerOculusId, anchorUUID, anchorFlowSucceeded);
}
inline ::StringW Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "requestingPlayerId", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "requestingPlayerOculusId", ty: "uint64_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "anchorUUID", ty: "::System::Guid", modifiers: "", def_value: Some("{}") }, CppParam { name: "anchorFlowSucceeded", ty: "bool", modifiers: "", def_value:
// Some("{}") }]
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams::ShareAndLocalizeParams(uint64_t requestingPlayerId, uint64_t requestingPlayerOculusId, ::System::Guid anchorUUID,
                                                                                                    bool anchorFlowSucceeded) noexcept {
  this->requestingPlayerId = requestingPlayerId;
  this->requestingPlayerOculusId = requestingPlayerOculusId;
  this->anchorUUID = anchorUUID;
  this->anchorFlowSucceeded = anchorFlowSucceeded;
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams::ShareAndLocalizeParams() {}
