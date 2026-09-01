#pragma once
// IWYU pragma private; include "Meta\XR\MultiplayerBlocks\Colocation\NetworkAdapter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/zzzz__NetworkAdapter_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/zzzz__INetworkData_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/zzzz__INetworkMessenger_def.hpp"
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::NetworkAdapter.get_NetworkData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::XR::MultiplayerBlocks::Colocation::INetworkData* (*)()>(&::Meta::XR::MultiplayerBlocks::Colocation::NetworkAdapter::get_NetworkData)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5a7d784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::NetworkAdapter*>(), { "get_NetworkData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::NetworkAdapter.set_NetworkData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Meta::XR::MultiplayerBlocks::Colocation::INetworkData*)>(
    &::Meta::XR::MultiplayerBlocks::Colocation::NetworkAdapter::set_NetworkData)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5a7d7d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::NetworkAdapter*>(),
                                                                                           { "set_NetworkData", {}, { ::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::INetworkData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::NetworkAdapter.get_NetworkMessenger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::XR::MultiplayerBlocks::Colocation::INetworkMessenger* (*)()>(
    &::Meta::XR::MultiplayerBlocks::Colocation::NetworkAdapter::get_NetworkMessenger)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5a7d820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::NetworkAdapter*>(), { "get_NetworkMessenger", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::NetworkAdapter.set_NetworkMessenger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Meta::XR::MultiplayerBlocks::Colocation::INetworkMessenger*)>(
    &::Meta::XR::MultiplayerBlocks::Colocation::NetworkAdapter::set_NetworkMessenger)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5a7d86c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::NetworkAdapter*>(),
                                                             { "set_NetworkMessenger", {}, { ::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::INetworkMessenger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::NetworkAdapter.SetConfig
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Meta::XR::MultiplayerBlocks::Colocation::INetworkData*, ::Meta::XR::MultiplayerBlocks::Colocation::INetworkMessenger*)>(
    &::Meta::XR::MultiplayerBlocks::Colocation::NetworkAdapter::SetConfig)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5a72954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::NetworkAdapter*>(),
            { "SetConfig", {}, { ::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::INetworkData*>(), ::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::INetworkMessenger*>() } })));
    return ___internal_method;
  }
};
inline void Meta::XR::MultiplayerBlocks::Colocation::NetworkAdapter::setStaticF__NetworkData_k__BackingField(::Meta::XR::MultiplayerBlocks::Colocation::INetworkData* value) {
  ::cordl_internals::setStaticField<::Meta::XR::MultiplayerBlocks::Colocation::INetworkData*, "<NetworkData>k__BackingField", ::Meta::XR::MultiplayerBlocks::Colocation::NetworkAdapter*>(
      std::forward<::Meta::XR::MultiplayerBlocks::Colocation::INetworkData*>(value));
}
inline ::Meta::XR::MultiplayerBlocks::Colocation::INetworkData* Meta::XR::MultiplayerBlocks::Colocation::NetworkAdapter::getStaticF__NetworkData_k__BackingField() {
  return ::cordl_internals::getStaticField<::Meta::XR::MultiplayerBlocks::Colocation::INetworkData*, "<NetworkData>k__BackingField", ::Meta::XR::MultiplayerBlocks::Colocation::NetworkAdapter*>();
}
inline void Meta::XR::MultiplayerBlocks::Colocation::NetworkAdapter::setStaticF__NetworkMessenger_k__BackingField(::Meta::XR::MultiplayerBlocks::Colocation::INetworkMessenger* value) {
  ::cordl_internals::setStaticField<::Meta::XR::MultiplayerBlocks::Colocation::INetworkMessenger*, "<NetworkMessenger>k__BackingField", ::Meta::XR::MultiplayerBlocks::Colocation::NetworkAdapter*>(
      std::forward<::Meta::XR::MultiplayerBlocks::Colocation::INetworkMessenger*>(value));
}
inline ::Meta::XR::MultiplayerBlocks::Colocation::INetworkMessenger* Meta::XR::MultiplayerBlocks::Colocation::NetworkAdapter::getStaticF__NetworkMessenger_k__BackingField() {
  return ::cordl_internals::getStaticField<::Meta::XR::MultiplayerBlocks::Colocation::INetworkMessenger*, "<NetworkMessenger>k__BackingField",
                                           ::Meta::XR::MultiplayerBlocks::Colocation::NetworkAdapter*>();
}
inline ::Meta::XR::MultiplayerBlocks::Colocation::INetworkData* Meta::XR::MultiplayerBlocks::Colocation::NetworkAdapter::get_NetworkData() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::NetworkAdapter*>(), { "get_NetworkData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Meta::XR::MultiplayerBlocks::Colocation::INetworkData*>(nullptr, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::NetworkAdapter::set_NetworkData(::Meta::XR::MultiplayerBlocks::Colocation::INetworkData* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::NetworkAdapter*>(),
                                                                                         { "set_NetworkData", {}, { ::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::INetworkData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::Meta::XR::MultiplayerBlocks::Colocation::INetworkMessenger* Meta::XR::MultiplayerBlocks::Colocation::NetworkAdapter::get_NetworkMessenger() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::NetworkAdapter*>(), { "get_NetworkMessenger", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Meta::XR::MultiplayerBlocks::Colocation::INetworkMessenger*>(nullptr, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::NetworkAdapter::set_NetworkMessenger(::Meta::XR::MultiplayerBlocks::Colocation::INetworkMessenger* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::NetworkAdapter*>(),
                                                           { "set_NetworkMessenger", {}, { ::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::INetworkMessenger*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::NetworkAdapter::SetConfig(::Meta::XR::MultiplayerBlocks::Colocation::INetworkData* networkData,
                                                                               ::Meta::XR::MultiplayerBlocks::Colocation::INetworkMessenger* networkMessenger) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::NetworkAdapter*>(),
          { "SetConfig", {}, { ::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::INetworkData*>(), ::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::INetworkMessenger*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, networkData, networkMessenger);
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::NetworkAdapter::NetworkAdapter() {}
