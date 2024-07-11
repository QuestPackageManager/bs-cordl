#pragma once
// IWYU pragma private; include "IgnoranceCore/IgnoranceClient.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IgnoranceClient)
namespace IgnoranceCore {
struct IgnoranceClientStats;
}
namespace IgnoranceCore {
struct IgnoranceCommandPacket;
}
namespace IgnoranceCore {
struct IgnoranceConnectionEvent;
}
namespace IgnoranceCore {
struct IgnoranceIncomingPacket;
}
namespace IgnoranceCore {
struct IgnoranceOutgoingPacket;
}
namespace IgnoranceCore {
struct __IgnoranceClient__ThreadParamInfo;
}
namespace IgnoranceThirdparty {
template <typename T> class RingBuffer_1;
}
namespace System::Threading {
class Thread;
}
namespace System {
class Object;
}
// Forward declare root types
namespace IgnoranceCore {
class IgnoranceClient;
}
namespace IgnoranceCore {
struct __IgnoranceClient__ThreadParamInfo;
}
// Write type traits
MARK_REF_PTR_T(::IgnoranceCore::IgnoranceClient);
MARK_VAL_T(::IgnoranceCore::__IgnoranceClient__ThreadParamInfo);
// Type: ::ThreadParamInfo
// SizeInfo { instance_size: 56, native_size: 56, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace IgnoranceCore {
// Is value type: true
// CS Name: ::IgnoranceClient::ThreadParamInfo
struct CORDL_TYPE __IgnoranceClient__ThreadParamInfo {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IgnoranceClient__ThreadParamInfo();

  // Ctor Parameters [CppParam { name: "Channels", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "PollTime", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "Port", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "PacketSizeLimit", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Verbosity", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "Address", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "UseSsl", ty: "bool", modifiers: "", def_value: None }, CppParam
  // { name: "ValidateCertificate", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "RootCertificatePath", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "RootCertificate", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr __IgnoranceClient__ThreadParamInfo(int32_t Channels, int32_t PollTime, int32_t Port, int32_t PacketSizeLimit, int32_t Verbosity, ::StringW Address, bool UseSsl, bool ValidateCertificate,
                                               ::StringW RootCertificatePath, ::StringW RootCertificate) noexcept;

  /// @brief Field Channels, offset: 0x0, size: 0x4, def value: None
  int32_t Channels;

  /// @brief Field PollTime, offset: 0x4, size: 0x4, def value: None
  int32_t PollTime;

  /// @brief Field Port, offset: 0x8, size: 0x4, def value: None
  int32_t Port;

  /// @brief Field PacketSizeLimit, offset: 0xc, size: 0x4, def value: None
  int32_t PacketSizeLimit;

  /// @brief Field Verbosity, offset: 0x10, size: 0x4, def value: None
  int32_t Verbosity;

  /// @brief Field Address, offset: 0x18, size: 0x8, def value: None
  ::StringW Address;

  /// @brief Field UseSsl, offset: 0x20, size: 0x1, def value: None
  bool UseSsl;

  /// @brief Field ValidateCertificate, offset: 0x21, size: 0x1, def value: None
  bool ValidateCertificate;

  /// @brief Field RootCertificatePath, offset: 0x28, size: 0x8, def value: None
  ::StringW RootCertificatePath;

  /// @brief Field RootCertificate, offset: 0x30, size: 0x8, def value: None
  ::StringW RootCertificate;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::IgnoranceCore::__IgnoranceClient__ThreadParamInfo, 0x38>, "Size mismatch!");

static_assert(offsetof(::IgnoranceCore::__IgnoranceClient__ThreadParamInfo, Channels) == 0x0, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::__IgnoranceClient__ThreadParamInfo, PollTime) == 0x4, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::__IgnoranceClient__ThreadParamInfo, Port) == 0x8, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::__IgnoranceClient__ThreadParamInfo, PacketSizeLimit) == 0xc, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::__IgnoranceClient__ThreadParamInfo, Verbosity) == 0x10, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::__IgnoranceClient__ThreadParamInfo, Address) == 0x18, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::__IgnoranceClient__ThreadParamInfo, UseSsl) == 0x20, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::__IgnoranceClient__ThreadParamInfo, ValidateCertificate) == 0x21, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::__IgnoranceClient__ThreadParamInfo, RootCertificatePath) == 0x28, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::__IgnoranceClient__ThreadParamInfo, RootCertificate) == 0x30, "Offset mismatch!");

} // namespace IgnoranceCore
// Type: IgnoranceCore::IgnoranceClient
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace IgnoranceCore {
// Is value type: false
// CS Name: ::IgnoranceCore::IgnoranceClient*
class CORDL_TYPE IgnoranceClient : public ::System::Object {
public:
  // Declarations
  using ThreadParamInfo = ::IgnoranceCore::__IgnoranceClient__ThreadParamInfo;

  /// @brief Field CeaseOperation, offset 0x78, size 0x1
  __declspec(property(get = __cordl_internal_get_CeaseOperation, put = __cordl_internal_set_CeaseOperation)) bool CeaseOperation;

  /// @brief Field Commands, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_Commands, put = __cordl_internal_set_Commands))::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceCommandPacket>* Commands;

  /// @brief Field ConnectAddress, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_ConnectAddress, put = __cordl_internal_set_ConnectAddress))::StringW ConnectAddress;

  /// @brief Field ConnectPort, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_ConnectPort, put = __cordl_internal_set_ConnectPort)) int32_t ConnectPort;

  /// @brief Field ConnectionEventBufferSize, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_ConnectionEventBufferSize, put = __cordl_internal_set_ConnectionEventBufferSize)) int32_t ConnectionEventBufferSize;

  /// @brief Field ConnectionEvents, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_ConnectionEvents,
                      put = __cordl_internal_set_ConnectionEvents))::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent>* ConnectionEvents;

  /// @brief Field DisconnectionEvents, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_DisconnectionEvents,
                      put = __cordl_internal_set_DisconnectionEvents))::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent>* DisconnectionEvents;

  /// @brief Field ExpectedChannels, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_ExpectedChannels, put = __cordl_internal_set_ExpectedChannels)) int32_t ExpectedChannels;

  /// @brief Field Incoming, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_Incoming, put = __cordl_internal_set_Incoming))::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceIncomingPacket>* Incoming;

  /// @brief Field IncomingOutgoingBufferSize, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_IncomingOutgoingBufferSize, put = __cordl_internal_set_IncomingOutgoingBufferSize)) int32_t IncomingOutgoingBufferSize;

  __declspec(property(get = get_IsAlive)) bool IsAlive;

  /// @brief Field MaximumPacketSize, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_MaximumPacketSize, put = __cordl_internal_set_MaximumPacketSize)) int32_t MaximumPacketSize;

  /// @brief Field Outgoing, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_Outgoing, put = __cordl_internal_set_Outgoing))::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceOutgoingPacket>* Outgoing;

  /// @brief Field PollTime, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_PollTime, put = __cordl_internal_set_PollTime)) int32_t PollTime;

  /// @brief Field RootCertificate, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_RootCertificate, put = __cordl_internal_set_RootCertificate))::StringW RootCertificate;

  /// @brief Field RootCertificatePath, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_RootCertificatePath, put = __cordl_internal_set_RootCertificatePath))::StringW RootCertificatePath;

  /// @brief Field StatusUpdates, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_StatusUpdates, put = __cordl_internal_set_StatusUpdates))::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceClientStats>* StatusUpdates;

  /// @brief Field UseSsl, offset 0x34, size 0x1
  __declspec(property(get = __cordl_internal_get_UseSsl, put = __cordl_internal_set_UseSsl)) bool UseSsl;

  /// @brief Field ValidateCertificate, offset 0x35, size 0x1
  __declspec(property(get = __cordl_internal_get_ValidateCertificate, put = __cordl_internal_set_ValidateCertificate)) bool ValidateCertificate;

  /// @brief Field Verbosity, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_Verbosity, put = __cordl_internal_set_Verbosity)) int32_t Verbosity;

  /// @brief Field WorkerThread, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_WorkerThread, put = __cordl_internal_set_WorkerThread))::System::Threading::Thread* WorkerThread;

  static inline ::IgnoranceCore::IgnoranceClient* New_ctor();

  /// @brief Method SetupRingBuffersIfNull, addr 0x2604708, size 0x244, virtual false, abstract: false, final false
  inline void SetupRingBuffersIfNull();

  /// @brief Method Start, addr 0x2604398, size 0x370, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Stop, addr 0x260494c, size 0x90, virtual false, abstract: false, final false
  inline void Stop();

  /// @brief Method ThreadWorker, addr 0x26049dc, size 0xe90, virtual false, abstract: false, final false
  inline void ThreadWorker(::System::Object* parameters);

  constexpr bool const& __cordl_internal_get_CeaseOperation() const;

  constexpr bool& __cordl_internal_get_CeaseOperation();

  constexpr ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceCommandPacket>*& __cordl_internal_get_Commands();

  constexpr ::cordl_internals::to_const_pointer<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceCommandPacket>*> const& __cordl_internal_get_Commands() const;

  constexpr ::StringW const& __cordl_internal_get_ConnectAddress() const;

  constexpr ::StringW& __cordl_internal_get_ConnectAddress();

  constexpr int32_t const& __cordl_internal_get_ConnectPort() const;

  constexpr int32_t& __cordl_internal_get_ConnectPort();

  constexpr int32_t const& __cordl_internal_get_ConnectionEventBufferSize() const;

  constexpr int32_t& __cordl_internal_get_ConnectionEventBufferSize();

  constexpr ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent>*& __cordl_internal_get_ConnectionEvents();

  constexpr ::cordl_internals::to_const_pointer<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent>*> const& __cordl_internal_get_ConnectionEvents() const;

  constexpr ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent>*& __cordl_internal_get_DisconnectionEvents();

  constexpr ::cordl_internals::to_const_pointer<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent>*> const& __cordl_internal_get_DisconnectionEvents() const;

  constexpr int32_t const& __cordl_internal_get_ExpectedChannels() const;

  constexpr int32_t& __cordl_internal_get_ExpectedChannels();

  constexpr ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceIncomingPacket>*& __cordl_internal_get_Incoming();

  constexpr ::cordl_internals::to_const_pointer<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceIncomingPacket>*> const& __cordl_internal_get_Incoming() const;

  constexpr int32_t const& __cordl_internal_get_IncomingOutgoingBufferSize() const;

  constexpr int32_t& __cordl_internal_get_IncomingOutgoingBufferSize();

  constexpr int32_t const& __cordl_internal_get_MaximumPacketSize() const;

  constexpr int32_t& __cordl_internal_get_MaximumPacketSize();

  constexpr ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceOutgoingPacket>*& __cordl_internal_get_Outgoing();

  constexpr ::cordl_internals::to_const_pointer<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceOutgoingPacket>*> const& __cordl_internal_get_Outgoing() const;

  constexpr int32_t const& __cordl_internal_get_PollTime() const;

  constexpr int32_t& __cordl_internal_get_PollTime();

  constexpr ::StringW const& __cordl_internal_get_RootCertificate() const;

  constexpr ::StringW& __cordl_internal_get_RootCertificate();

  constexpr ::StringW const& __cordl_internal_get_RootCertificatePath() const;

  constexpr ::StringW& __cordl_internal_get_RootCertificatePath();

  constexpr ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceClientStats>*& __cordl_internal_get_StatusUpdates();

  constexpr ::cordl_internals::to_const_pointer<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceClientStats>*> const& __cordl_internal_get_StatusUpdates() const;

  constexpr bool const& __cordl_internal_get_UseSsl() const;

  constexpr bool& __cordl_internal_get_UseSsl();

  constexpr bool const& __cordl_internal_get_ValidateCertificate() const;

  constexpr bool& __cordl_internal_get_ValidateCertificate();

  constexpr int32_t const& __cordl_internal_get_Verbosity() const;

  constexpr int32_t& __cordl_internal_get_Verbosity();

  constexpr ::System::Threading::Thread*& __cordl_internal_get_WorkerThread();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Thread*> const& __cordl_internal_get_WorkerThread() const;

  constexpr void __cordl_internal_set_CeaseOperation(bool value);

  constexpr void __cordl_internal_set_Commands(::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceCommandPacket>* value);

  constexpr void __cordl_internal_set_ConnectAddress(::StringW value);

  constexpr void __cordl_internal_set_ConnectPort(int32_t value);

  constexpr void __cordl_internal_set_ConnectionEventBufferSize(int32_t value);

  constexpr void __cordl_internal_set_ConnectionEvents(::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent>* value);

  constexpr void __cordl_internal_set_DisconnectionEvents(::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent>* value);

  constexpr void __cordl_internal_set_ExpectedChannels(int32_t value);

  constexpr void __cordl_internal_set_Incoming(::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceIncomingPacket>* value);

  constexpr void __cordl_internal_set_IncomingOutgoingBufferSize(int32_t value);

  constexpr void __cordl_internal_set_MaximumPacketSize(int32_t value);

  constexpr void __cordl_internal_set_Outgoing(::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceOutgoingPacket>* value);

  constexpr void __cordl_internal_set_PollTime(int32_t value);

  constexpr void __cordl_internal_set_RootCertificate(::StringW value);

  constexpr void __cordl_internal_set_RootCertificatePath(::StringW value);

  constexpr void __cordl_internal_set_StatusUpdates(::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceClientStats>* value);

  constexpr void __cordl_internal_set_UseSsl(bool value);

  constexpr void __cordl_internal_set_ValidateCertificate(bool value);

  constexpr void __cordl_internal_set_Verbosity(int32_t value);

  constexpr void __cordl_internal_set_WorkerThread(::System::Threading::Thread* value);

  /// @brief Method .ctor, addr 0x260586c, size 0x78, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsAlive, addr 0x2604384, size 0x14, virtual false, abstract: false, final false
  inline bool get_IsAlive();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IgnoranceClient();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IgnoranceClient", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IgnoranceClient(IgnoranceClient&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IgnoranceClient", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IgnoranceClient(IgnoranceClient const&) = delete;

  /// @brief Field ConnectAddress, offset: 0x10, size: 0x8, def value: None
  ::StringW ___ConnectAddress;

  /// @brief Field ConnectPort, offset: 0x18, size: 0x4, def value: None
  int32_t ___ConnectPort;

  /// @brief Field ExpectedChannels, offset: 0x1c, size: 0x4, def value: None
  int32_t ___ExpectedChannels;

  /// @brief Field PollTime, offset: 0x20, size: 0x4, def value: None
  int32_t ___PollTime;

  /// @brief Field MaximumPacketSize, offset: 0x24, size: 0x4, def value: None
  int32_t ___MaximumPacketSize;

  /// @brief Field Verbosity, offset: 0x28, size: 0x4, def value: None
  int32_t ___Verbosity;

  /// @brief Field IncomingOutgoingBufferSize, offset: 0x2c, size: 0x4, def value: None
  int32_t ___IncomingOutgoingBufferSize;

  /// @brief Field ConnectionEventBufferSize, offset: 0x30, size: 0x4, def value: None
  int32_t ___ConnectionEventBufferSize;

  /// @brief Field UseSsl, offset: 0x34, size: 0x1, def value: None
  bool ___UseSsl;

  /// @brief Field ValidateCertificate, offset: 0x35, size: 0x1, def value: None
  bool ___ValidateCertificate;

  /// @brief Field RootCertificatePath, offset: 0x38, size: 0x8, def value: None
  ::StringW ___RootCertificatePath;

  /// @brief Field RootCertificate, offset: 0x40, size: 0x8, def value: None
  ::StringW ___RootCertificate;

  /// @brief Field Incoming, offset: 0x48, size: 0x8, def value: None
  ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceIncomingPacket>* ___Incoming;

  /// @brief Field Outgoing, offset: 0x50, size: 0x8, def value: None
  ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceOutgoingPacket>* ___Outgoing;

  /// @brief Field Commands, offset: 0x58, size: 0x8, def value: None
  ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceCommandPacket>* ___Commands;

  /// @brief Field ConnectionEvents, offset: 0x60, size: 0x8, def value: None
  ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent>* ___ConnectionEvents;

  /// @brief Field DisconnectionEvents, offset: 0x68, size: 0x8, def value: None
  ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent>* ___DisconnectionEvents;

  /// @brief Field StatusUpdates, offset: 0x70, size: 0x8, def value: None
  ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceClientStats>* ___StatusUpdates;

  /// @brief Field CeaseOperation, offset: 0x78, size: 0x1, def value: None
  bool ___CeaseOperation;

  /// @brief Field WorkerThread, offset: 0x80, size: 0x8, def value: None
  ::System::Threading::Thread* ___WorkerThread;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::IgnoranceCore::IgnoranceClient, 0x88>, "Size mismatch!");

static_assert(offsetof(::IgnoranceCore::IgnoranceClient, ___ConnectAddress) == 0x10, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::IgnoranceClient, ___ConnectPort) == 0x18, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::IgnoranceClient, ___ExpectedChannels) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::IgnoranceClient, ___PollTime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::IgnoranceClient, ___MaximumPacketSize) == 0x24, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::IgnoranceClient, ___Verbosity) == 0x28, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::IgnoranceClient, ___IncomingOutgoingBufferSize) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::IgnoranceClient, ___ConnectionEventBufferSize) == 0x30, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::IgnoranceClient, ___UseSsl) == 0x34, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::IgnoranceClient, ___ValidateCertificate) == 0x35, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::IgnoranceClient, ___RootCertificatePath) == 0x38, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::IgnoranceClient, ___RootCertificate) == 0x40, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::IgnoranceClient, ___Incoming) == 0x48, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::IgnoranceClient, ___Outgoing) == 0x50, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::IgnoranceClient, ___Commands) == 0x58, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::IgnoranceClient, ___ConnectionEvents) == 0x60, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::IgnoranceClient, ___DisconnectionEvents) == 0x68, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::IgnoranceClient, ___StatusUpdates) == 0x70, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::IgnoranceClient, ___CeaseOperation) == 0x78, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::IgnoranceClient, ___WorkerThread) == 0x80, "Offset mismatch!");

} // namespace IgnoranceCore
NEED_NO_BOX(::IgnoranceCore::IgnoranceClient);
DEFINE_IL2CPP_ARG_TYPE(::IgnoranceCore::IgnoranceClient*, "IgnoranceCore", "IgnoranceClient");
DEFINE_IL2CPP_ARG_TYPE(::IgnoranceCore::__IgnoranceClient__ThreadParamInfo, "IgnoranceCore", "IgnoranceClient/ThreadParamInfo");
