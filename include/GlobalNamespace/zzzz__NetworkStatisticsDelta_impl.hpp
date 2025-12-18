#pragma once
// IWYU pragma private; include "GlobalNamespace/NetworkStatisticsDelta.hpp"
#include "GlobalNamespace/zzzz__NetworkStatisticsDelta_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NetworkStatisticsDelta._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NetworkStatisticsDelta::*)(
    int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t)>(&::GlobalNamespace::NetworkStatisticsDelta::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x323fba0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkStatisticsDelta>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 13>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::NetworkStatisticsDelta::_ctor(int64_t packetsSentDelta, int64_t packetsReceivedDelta, int64_t bytesSentDelta, int64_t bytesReceivedDelta, int64_t packetsLostDelta,
                                                           int64_t packetsSentEncryptedDelta, int64_t packetsSentPlaintextDelta, int64_t packetsSentRejectedDelta,
                                                           int64_t packetsReceivedEncryptedDelta, int64_t packetsReceivedPlaintextDelta, int64_t packetsReceivedRejectedDelta,
                                                           int64_t encryptionProcessingTimeDelta, int64_t decryptionProcessingTimeDelta) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkStatisticsDelta>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 13>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packetsSentDelta, packetsReceivedDelta, bytesSentDelta, bytesReceivedDelta, packetsLostDelta,
                                                          packetsSentEncryptedDelta, packetsSentPlaintextDelta, packetsSentRejectedDelta, packetsReceivedEncryptedDelta, packetsReceivedPlaintextDelta,
                                                          packetsReceivedRejectedDelta, encryptionProcessingTimeDelta, decryptionProcessingTimeDelta);
}
// Ctor Parameters [CppParam { name: "packetsSentDelta", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "packetsReceivedDelta", ty: "int64_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "bytesSentDelta", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "bytesReceivedDelta", ty: "int64_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "packetsLostDelta", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "packetsSentEncryptedDelta", ty: "int64_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "packetsSentPlaintextDelta", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "packetsSentRejectedDelta", ty: "int64_t", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "packetsReceivedEncryptedDelta", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "packetsReceivedPlaintextDelta", ty: "int64_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "packetsReceivedRejectedDelta", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "encryptionProcessingTimeDelta", ty: "int64_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "decryptionProcessingTimeDelta", ty: "int64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::NetworkStatisticsDelta::NetworkStatisticsDelta(int64_t packetsSentDelta, int64_t packetsReceivedDelta, int64_t bytesSentDelta, int64_t bytesReceivedDelta,
                                                                            int64_t packetsLostDelta, int64_t packetsSentEncryptedDelta, int64_t packetsSentPlaintextDelta,
                                                                            int64_t packetsSentRejectedDelta, int64_t packetsReceivedEncryptedDelta, int64_t packetsReceivedPlaintextDelta,
                                                                            int64_t packetsReceivedRejectedDelta, int64_t encryptionProcessingTimeDelta,
                                                                            int64_t decryptionProcessingTimeDelta) noexcept {
  this->packetsSentDelta = packetsSentDelta;
  this->packetsReceivedDelta = packetsReceivedDelta;
  this->bytesSentDelta = bytesSentDelta;
  this->bytesReceivedDelta = bytesReceivedDelta;
  this->packetsLostDelta = packetsLostDelta;
  this->packetsSentEncryptedDelta = packetsSentEncryptedDelta;
  this->packetsSentPlaintextDelta = packetsSentPlaintextDelta;
  this->packetsSentRejectedDelta = packetsSentRejectedDelta;
  this->packetsReceivedEncryptedDelta = packetsReceivedEncryptedDelta;
  this->packetsReceivedPlaintextDelta = packetsReceivedPlaintextDelta;
  this->packetsReceivedRejectedDelta = packetsReceivedRejectedDelta;
  this->encryptionProcessingTimeDelta = encryptionProcessingTimeDelta;
  this->decryptionProcessingTimeDelta = decryptionProcessingTimeDelta;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetworkStatisticsDelta::NetworkStatisticsDelta() {}
