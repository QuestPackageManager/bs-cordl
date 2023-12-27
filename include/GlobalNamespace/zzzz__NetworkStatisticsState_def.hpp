#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkStatisticsState)
namespace System {
class IAsyncResult;
}
namespace System {
class AsyncCallback;
}
namespace System {
class Object;
}
namespace GlobalNamespace {
class __NetworkStatisticsState__NetworkStatisticsUpdateDelegate;
}
namespace GlobalNamespace {
struct NetworkStatisticsDelta;
}
// Forward declare root types
namespace GlobalNamespace {
class __NetworkStatisticsState__NetworkStatisticsUpdateDelegate;
}
namespace GlobalNamespace {
struct NetworkStatisticsState;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::__NetworkStatisticsState__NetworkStatisticsUpdateDelegate);
MARK_VAL_T(::GlobalNamespace::NetworkStatisticsState);
// Type: ::NetworkStatisticsUpdateDelegate
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12899))
// CS Name: ::NetworkStatisticsState::NetworkStatisticsUpdateDelegate*
class CORDL_TYPE __NetworkStatisticsState__NetworkStatisticsUpdateDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::GlobalNamespace::__NetworkStatisticsState__NetworkStatisticsUpdateDelegate* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor addr 0xe4d0c4 size 0xd4 virtual false final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke addr 0xe4d198 size 0x14 virtual true final false
  inline void Invoke(ByRef<::GlobalNamespace::NetworkStatisticsState> statisticsState);

  /// @brief Method BeginInvoke addr 0xe4d1ac size 0x8c virtual true final false
  inline ::System::IAsyncResult* BeginInvoke(ByRef<::GlobalNamespace::NetworkStatisticsState> statisticsState, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke addr 0xe4d238 size 0xc virtual true final false
  inline void EndInvoke(ByRef<::GlobalNamespace::NetworkStatisticsState> statisticsState, ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__NetworkStatisticsState__NetworkStatisticsUpdateDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NetworkStatisticsState__NetworkStatisticsUpdateDelegate(__NetworkStatisticsState__NetworkStatisticsUpdateDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NetworkStatisticsState__NetworkStatisticsUpdateDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NetworkStatisticsState__NetworkStatisticsUpdateDelegate(__NetworkStatisticsState__NetworkStatisticsUpdateDelegate const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NetworkStatisticsState__NetworkStatisticsUpdateDelegate();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__NetworkStatisticsState__NetworkStatisticsUpdateDelegate, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::NetworkStatisticsState
// SizeInfo { instance_size: 104, native_size: 104, calculated_instance_size: 104, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12900))
// CS Name: ::NetworkStatisticsState
struct CORDL_TYPE NetworkStatisticsState {
public:
  // Declarations
  using NetworkStatisticsUpdateDelegate = ::GlobalNamespace::__NetworkStatisticsState__NetworkStatisticsUpdateDelegate;

  /// @brief Method .ctor addr 0xe4d024 size 0x28 virtual false final false
  inline void _ctor(int64_t packetsSent, int64_t packetsReceived, int64_t bytesSent, int64_t bytesReceived, int64_t packetsLost, int64_t packetsSentEncrypted, int64_t packetsSentPlaintext,
                    int64_t packetsSentRejected, int64_t packetsReceivedEncrypted, int64_t packetsReceivedPlaintext, int64_t packetsReceivedRejected, int64_t encryptionProcessingTime,
                    int64_t decryptionProcessingTime);

  /// @brief Method op_Subtraction addr 0xe4d04c size 0x50 virtual false final false
  static inline ::GlobalNamespace::NetworkStatisticsDelta op_Subtraction(ByRef<::GlobalNamespace::NetworkStatisticsState> a, ByRef<::GlobalNamespace::NetworkStatisticsState> b);

  // Ctor Parameters [CppParam { name: "packetsSent", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "packetsReceived", ty: "int64_t", modifiers: "", def_value: None }, CppParam {
  // name: "bytesSent", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "bytesReceived", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "packetsLost", ty:
  // "int64_t", modifiers: "", def_value: None }, CppParam { name: "packetsSentEncrypted", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "packetsSentPlaintext", ty: "int64_t",
  // modifiers: "", def_value: None }, CppParam { name: "packetsSentRejected", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "packetsReceivedEncrypted", ty: "int64_t", modifiers:
  // "", def_value: None }, CppParam { name: "packetsReceivedPlaintext", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "packetsReceivedRejected", ty: "int64_t", modifiers: "",
  // def_value: None }, CppParam { name: "encryptionProcessingTime", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "decryptionProcessingTime", ty: "int64_t", modifiers: "",
  // def_value: None }]
  constexpr NetworkStatisticsState(int64_t packetsSent, int64_t packetsReceived, int64_t bytesSent, int64_t bytesReceived, int64_t packetsLost, int64_t packetsSentEncrypted,
                                   int64_t packetsSentPlaintext, int64_t packetsSentRejected, int64_t packetsReceivedEncrypted, int64_t packetsReceivedPlaintext, int64_t packetsReceivedRejected,
                                   int64_t encryptionProcessingTime, int64_t decryptionProcessingTime) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr NetworkStatisticsState();

  /// @brief Field packetsSent, offset: 0x0, size: 0x8, def value: None
  int64_t packetsSent;

  /// @brief Field packetsReceived, offset: 0x8, size: 0x8, def value: None
  int64_t packetsReceived;

  /// @brief Field bytesSent, offset: 0x10, size: 0x8, def value: None
  int64_t bytesSent;

  /// @brief Field bytesReceived, offset: 0x18, size: 0x8, def value: None
  int64_t bytesReceived;

  /// @brief Field packetsLost, offset: 0x20, size: 0x8, def value: None
  int64_t packetsLost;

  /// @brief Field packetsSentEncrypted, offset: 0x28, size: 0x8, def value: None
  int64_t packetsSentEncrypted;

  /// @brief Field packetsSentPlaintext, offset: 0x30, size: 0x8, def value: None
  int64_t packetsSentPlaintext;

  /// @brief Field packetsSentRejected, offset: 0x38, size: 0x8, def value: None
  int64_t packetsSentRejected;

  /// @brief Field packetsReceivedEncrypted, offset: 0x40, size: 0x8, def value: None
  int64_t packetsReceivedEncrypted;

  /// @brief Field packetsReceivedPlaintext, offset: 0x48, size: 0x8, def value: None
  int64_t packetsReceivedPlaintext;

  /// @brief Field packetsReceivedRejected, offset: 0x50, size: 0x8, def value: None
  int64_t packetsReceivedRejected;

  /// @brief Field encryptionProcessingTime, offset: 0x58, size: 0x8, def value: None
  int64_t encryptionProcessingTime;

  /// @brief Field decryptionProcessingTime, offset: 0x60, size: 0x8, def value: None
  int64_t decryptionProcessingTime;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x68 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NetworkStatisticsState, 0x68>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::__NetworkStatisticsState__NetworkStatisticsUpdateDelegate);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__NetworkStatisticsState__NetworkStatisticsUpdateDelegate*, "", "NetworkStatisticsState/NetworkStatisticsUpdateDelegate");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NetworkStatisticsState, "", "NetworkStatisticsState");
