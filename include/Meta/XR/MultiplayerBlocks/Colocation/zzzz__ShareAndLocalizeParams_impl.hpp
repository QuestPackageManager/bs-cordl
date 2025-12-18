#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Colocation/ShareAndLocalizeParams.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/zzzz__ShareAndLocalizeParams_def.hpp"
#include "System/zzzz__Guid_def.hpp"
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams::*)(uint64_t, uint64_t, ::System::Guid)>(
    &::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x58cc014;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams::*)(
    uint64_t, uint64_t, ::System::Guid, bool)>(&::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x58ce9c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams::*)()>(
    &::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams::ToString)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x58ce9d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams>::get(), 3));
    return ___internal_method;
  }
};
inline void Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams::_ctor(uint64_t requestingPlayerId, uint64_t requestingPlayerOculusId, ::System::Guid anchorUUID) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, requestingPlayerId, requestingPlayerOculusId, anchorUUID);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams::_ctor(uint64_t requestingPlayerId, uint64_t requestingPlayerOculusId, ::System::Guid anchorUUID,
                                                                                   bool anchorFlowSucceeded) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, requestingPlayerId, requestingPlayerOculusId, anchorUUID, anchorFlowSucceeded);
}
inline ::StringW Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams::ToString() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
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
