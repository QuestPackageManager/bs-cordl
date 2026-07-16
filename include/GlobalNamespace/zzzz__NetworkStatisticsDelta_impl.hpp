#pragma once
// IWYU pragma private; include "GlobalNamespace/NetworkStatisticsDelta.hpp"
#include "GlobalNamespace/zzzz__NetworkStatisticsDelta_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NetworkStatisticsDelta._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkStatisticsDelta::*)(int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t,
                                                                                                           int64_t, int64_t, int64_t)>(&::GlobalNamespace::NetworkStatisticsDelta::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x333921c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkStatisticsDelta>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(),
                                                                 ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(),
                                                                 ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::NetworkStatisticsDelta::_ctor(int64_t packetsSentDelta, int64_t packetsReceivedDelta, int64_t bytesSentDelta, int64_t bytesReceivedDelta, int64_t packetsLostDelta,
                                                           int64_t packetsSentEncryptedDelta, int64_t packetsSentPlaintextDelta, int64_t packetsSentRejectedDelta,
                                                           int64_t packetsReceivedEncryptedDelta, int64_t packetsReceivedPlaintextDelta, int64_t packetsReceivedRejectedDelta,
                                                           int64_t encryptionProcessingTimeDelta, int64_t decryptionProcessingTimeDelta) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkStatisticsDelta>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(),
                                                               ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(),
                                                               ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, packetsSentDelta, packetsReceivedDelta, bytesSentDelta, bytesReceivedDelta, packetsLostDelta, packetsSentEncryptedDelta,
                                                   packetsSentPlaintextDelta, packetsSentRejectedDelta, packetsReceivedEncryptedDelta, packetsReceivedPlaintextDelta, packetsReceivedRejectedDelta,
                                                   encryptionProcessingTimeDelta, decryptionProcessingTimeDelta);
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
