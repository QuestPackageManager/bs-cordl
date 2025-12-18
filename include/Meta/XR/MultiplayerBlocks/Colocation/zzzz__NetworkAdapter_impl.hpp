#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Colocation/NetworkAdapter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/zzzz__NetworkAdapter_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/zzzz__INetworkData_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/zzzz__INetworkMessenger_def.hpp"
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::NetworkAdapter.get_NetworkData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::XR::MultiplayerBlocks::Colocation::INetworkData* (*)()>(
    &::Meta::XR::MultiplayerBlocks::Colocation::NetworkAdapter::get_NetworkData)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x58cdf38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::NetworkAdapter*>::get(), "get_NetworkData",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::NetworkAdapter.set_NetworkData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Meta::XR::MultiplayerBlocks::Colocation::INetworkData*)>(
    &::Meta::XR::MultiplayerBlocks::Colocation::NetworkAdapter::set_NetworkData)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x58cdf84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::NetworkAdapter*>::get(), "set_NetworkData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::MultiplayerBlocks::Colocation::INetworkData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::NetworkAdapter.get_NetworkMessenger
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::XR::MultiplayerBlocks::Colocation::INetworkMessenger* (*)()>(
    &::Meta::XR::MultiplayerBlocks::Colocation::NetworkAdapter::get_NetworkMessenger)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x58cdfd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::NetworkAdapter*>::get(), "get_NetworkMessenger",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::NetworkAdapter.set_NetworkMessenger
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Meta::XR::MultiplayerBlocks::Colocation::INetworkMessenger*)>(
    &::Meta::XR::MultiplayerBlocks::Colocation::NetworkAdapter::set_NetworkMessenger)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x58ce020;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::NetworkAdapter*>::get(), "set_NetworkMessenger", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::MultiplayerBlocks::Colocation::INetworkMessenger*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::NetworkAdapter.SetConfig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::Meta::XR::MultiplayerBlocks::Colocation::INetworkData*, ::Meta::XR::MultiplayerBlocks::Colocation::INetworkMessenger*)>(&::Meta::XR::MultiplayerBlocks::Colocation::NetworkAdapter::SetConfig)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x58c3108;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::NetworkAdapter*>::get(), "SetConfig", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::MultiplayerBlocks::Colocation::INetworkData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::MultiplayerBlocks::Colocation::INetworkMessenger*>::get() })));
    return ___internal_method;
  }
};
inline void Meta::XR::MultiplayerBlocks::Colocation::NetworkAdapter::setStaticF__NetworkData_k__BackingField(::Meta::XR::MultiplayerBlocks::Colocation::INetworkData* value) {
  ::cordl_internals::setStaticField<::Meta::XR::MultiplayerBlocks::Colocation::INetworkData*, "<NetworkData>k__BackingField",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::NetworkAdapter*>::get>(
      std::forward<::Meta::XR::MultiplayerBlocks::Colocation::INetworkData*>(value));
}
inline ::Meta::XR::MultiplayerBlocks::Colocation::INetworkData* Meta::XR::MultiplayerBlocks::Colocation::NetworkAdapter::getStaticF__NetworkData_k__BackingField() {
  return ::cordl_internals::getStaticField<::Meta::XR::MultiplayerBlocks::Colocation::INetworkData*, "<NetworkData>k__BackingField",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::NetworkAdapter*>::get>();
}
inline void Meta::XR::MultiplayerBlocks::Colocation::NetworkAdapter::setStaticF__NetworkMessenger_k__BackingField(::Meta::XR::MultiplayerBlocks::Colocation::INetworkMessenger* value) {
  ::cordl_internals::setStaticField<::Meta::XR::MultiplayerBlocks::Colocation::INetworkMessenger*, "<NetworkMessenger>k__BackingField",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::NetworkAdapter*>::get>(
      std::forward<::Meta::XR::MultiplayerBlocks::Colocation::INetworkMessenger*>(value));
}
inline ::Meta::XR::MultiplayerBlocks::Colocation::INetworkMessenger* Meta::XR::MultiplayerBlocks::Colocation::NetworkAdapter::getStaticF__NetworkMessenger_k__BackingField() {
  return ::cordl_internals::getStaticField<::Meta::XR::MultiplayerBlocks::Colocation::INetworkMessenger*, "<NetworkMessenger>k__BackingField",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::NetworkAdapter*>::get>();
}
inline ::Meta::XR::MultiplayerBlocks::Colocation::INetworkData* Meta::XR::MultiplayerBlocks::Colocation::NetworkAdapter::get_NetworkData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::NetworkAdapter*>::get(),
                                                                             "get_NetworkData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Meta::XR::MultiplayerBlocks::Colocation::INetworkData*, false>(nullptr, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::NetworkAdapter::set_NetworkData(::Meta::XR::MultiplayerBlocks::Colocation::INetworkData* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::NetworkAdapter*>::get(), "set_NetworkData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::MultiplayerBlocks::Colocation::INetworkData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::Meta::XR::MultiplayerBlocks::Colocation::INetworkMessenger* Meta::XR::MultiplayerBlocks::Colocation::NetworkAdapter::get_NetworkMessenger() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::NetworkAdapter*>::get(),
                                                                             "get_NetworkMessenger", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Meta::XR::MultiplayerBlocks::Colocation::INetworkMessenger*, false>(nullptr, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::NetworkAdapter::set_NetworkMessenger(::Meta::XR::MultiplayerBlocks::Colocation::INetworkMessenger* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::NetworkAdapter*>::get(), "set_NetworkMessenger", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::MultiplayerBlocks::Colocation::INetworkMessenger*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::NetworkAdapter::SetConfig(::Meta::XR::MultiplayerBlocks::Colocation::INetworkData* networkData,
                                                                               ::Meta::XR::MultiplayerBlocks::Colocation::INetworkMessenger* networkMessenger) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::NetworkAdapter*>::get(), "SetConfig", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::MultiplayerBlocks::Colocation::INetworkData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::MultiplayerBlocks::Colocation::INetworkMessenger*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, networkData, networkMessenger);
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::NetworkAdapter::NetworkAdapter() {}
