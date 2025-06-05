#pragma once
// IWYU pragma private; include "IgnoranceCore/IgnoranceServer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IgnoranceServer)
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
struct IgnoranceServerStats;
}
namespace IgnoranceCore {
struct IgnoranceServer_ThreadParamInfo;
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
class IgnoranceServer;
}
namespace IgnoranceCore {
struct IgnoranceServer_ThreadParamInfo;
}
// Write type traits
MARK_REF_PTR_T(::IgnoranceCore::IgnoranceServer);
MARK_VAL_T(::IgnoranceCore::IgnoranceServer_ThreadParamInfo);
// Dependencies
namespace IgnoranceCore {
// Is value type: true
// CS Name: IgnoranceCore.IgnoranceServer/ThreadParamInfo
struct CORDL_TYPE IgnoranceServer_ThreadParamInfo {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr IgnoranceServer_ThreadParamInfo();

  // Ctor Parameters [CppParam { name: "IsFruityDevice", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "BindAllInterfaces", ty: "bool", modifiers: "", def_value: None }, CppParam {
  // name: "Channels", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Peers", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "PollTime", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "Port", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "PacketSizeLimit", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "Verbosity", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Address", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "UseSsl", ty:
  // "bool", modifiers: "", def_value: None }, CppParam { name: "CertificatePath", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "Certificate", ty: "::StringW", modifiers: "",
  // def_value: None }, CppParam { name: "PrivateKeyPath", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "PrivateKey", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr IgnoranceServer_ThreadParamInfo(bool IsFruityDevice, bool BindAllInterfaces, int32_t Channels, int32_t Peers, int32_t PollTime, int32_t Port, int32_t PacketSizeLimit, int32_t Verbosity,
                                            ::StringW Address, bool UseSsl, ::StringW CertificatePath, ::StringW Certificate, ::StringW PrivateKeyPath, ::StringW PrivateKey) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17764 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  /// @brief Field IsFruityDevice, offset: 0x0, size: 0x1, def value: None
  bool IsFruityDevice;

  /// @brief Field BindAllInterfaces, offset: 0x1, size: 0x1, def value: None
  bool BindAllInterfaces;

  /// @brief Field Channels, offset: 0x4, size: 0x4, def value: None
  int32_t Channels;

  /// @brief Field Peers, offset: 0x8, size: 0x4, def value: None
  int32_t Peers;

  /// @brief Field PollTime, offset: 0xc, size: 0x4, def value: None
  int32_t PollTime;

  /// @brief Field Port, offset: 0x10, size: 0x4, def value: None
  int32_t Port;

  /// @brief Field PacketSizeLimit, offset: 0x14, size: 0x4, def value: None
  int32_t PacketSizeLimit;

  /// @brief Field Verbosity, offset: 0x18, size: 0x4, def value: None
  int32_t Verbosity;

  /// @brief Field Address, offset: 0x20, size: 0x8, def value: None
  ::StringW Address;

  /// @brief Field UseSsl, offset: 0x28, size: 0x1, def value: None
  bool UseSsl;

  /// @brief Field CertificatePath, offset: 0x30, size: 0x8, def value: None
  ::StringW CertificatePath;

  /// @brief Field Certificate, offset: 0x38, size: 0x8, def value: None
  ::StringW Certificate;

  /// @brief Field PrivateKeyPath, offset: 0x40, size: 0x8, def value: None
  ::StringW PrivateKeyPath;

  /// @brief Field PrivateKey, offset: 0x48, size: 0x8, def value: None
  ::StringW PrivateKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::IgnoranceCore::IgnoranceServer_ThreadParamInfo, IsFruityDevice) == 0x0, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::IgnoranceServer_ThreadParamInfo, BindAllInterfaces) == 0x1, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::IgnoranceServer_ThreadParamInfo, Channels) == 0x4, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::IgnoranceServer_ThreadParamInfo, Peers) == 0x8, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::IgnoranceServer_ThreadParamInfo, PollTime) == 0xc, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::IgnoranceServer_ThreadParamInfo, Port) == 0x10, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::IgnoranceServer_ThreadParamInfo, PacketSizeLimit) == 0x14, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::IgnoranceServer_ThreadParamInfo, Verbosity) == 0x18, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::IgnoranceServer_ThreadParamInfo, Address) == 0x20, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::IgnoranceServer_ThreadParamInfo, UseSsl) == 0x28, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::IgnoranceServer_ThreadParamInfo, CertificatePath) == 0x30, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::IgnoranceServer_ThreadParamInfo, Certificate) == 0x38, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::IgnoranceServer_ThreadParamInfo, PrivateKeyPath) == 0x40, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::IgnoranceServer_ThreadParamInfo, PrivateKey) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::IgnoranceCore::IgnoranceServer_ThreadParamInfo, 0x50>, "Size mismatch!");

} // namespace IgnoranceCore
// Dependencies System.Object
namespace IgnoranceCore {
// Is value type: false
// CS Name: IgnoranceCore.IgnoranceServer
class CORDL_TYPE IgnoranceServer : public ::System::Object {
public:
  // Declarations
  using ThreadParamInfo = ::IgnoranceCore::IgnoranceServer_ThreadParamInfo;

  /// @brief Field BindAddress, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_BindAddress, put = __cordl_internal_set_BindAddress)) ::StringW BindAddress;

  /// @brief Field BindAllInterfaces, offset 0x39, size 0x1
  __declspec(property(get = __cordl_internal_get_BindAllInterfaces, put = __cordl_internal_set_BindAllInterfaces)) bool BindAllInterfaces;

  /// @brief Field BindPort, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_BindPort, put = __cordl_internal_set_BindPort)) int32_t BindPort;

  /// @brief Field CeaseOperation, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get_CeaseOperation, put = __cordl_internal_set_CeaseOperation)) bool CeaseOperation;

  /// @brief Field Certificate, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_Certificate, put = __cordl_internal_set_Certificate)) ::StringW Certificate;

  /// @brief Field CertificatePath, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_CertificatePath, put = __cordl_internal_set_CertificatePath)) ::StringW CertificatePath;

  /// @brief Field Commands, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_Commands, put = __cordl_internal_set_Commands)) ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceCommandPacket>* Commands;

  /// @brief Field ConnectionEventBufferSize, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_ConnectionEventBufferSize, put = __cordl_internal_set_ConnectionEventBufferSize)) int32_t ConnectionEventBufferSize;

  /// @brief Field ConnectionEvents, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_ConnectionEvents,
                      put = __cordl_internal_set_ConnectionEvents)) ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent>* ConnectionEvents;

  /// @brief Field DisconnectionEvents, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_DisconnectionEvents,
                      put = __cordl_internal_set_DisconnectionEvents)) ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent>* DisconnectionEvents;

  /// @brief Field Incoming, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_Incoming, put = __cordl_internal_set_Incoming)) ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceIncomingPacket>* Incoming;

  /// @brief Field IncomingOutgoingBufferSize, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_IncomingOutgoingBufferSize, put = __cordl_internal_set_IncomingOutgoingBufferSize)) int32_t IncomingOutgoingBufferSize;

  __declspec(property(get = get_IsAlive)) bool IsAlive;

  /// @brief Field IsFruityDevice, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_IsFruityDevice, put = __cordl_internal_set_IsFruityDevice)) bool IsFruityDevice;

  /// @brief Field MaximumChannels, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_MaximumChannels, put = __cordl_internal_set_MaximumChannels)) int32_t MaximumChannels;

  /// @brief Field MaximumPacketSize, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_MaximumPacketSize, put = __cordl_internal_set_MaximumPacketSize)) int32_t MaximumPacketSize;

  /// @brief Field MaximumPeers, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_MaximumPeers, put = __cordl_internal_set_MaximumPeers)) int32_t MaximumPeers;

  /// @brief Field Outgoing, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_Outgoing, put = __cordl_internal_set_Outgoing)) ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceOutgoingPacket>* Outgoing;

  /// @brief Field PollTime, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_PollTime, put = __cordl_internal_set_PollTime)) int32_t PollTime;

  /// @brief Field PrivateKey, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_PrivateKey, put = __cordl_internal_set_PrivateKey)) ::StringW PrivateKey;

  /// @brief Field PrivateKeyPath, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_PrivateKeyPath, put = __cordl_internal_set_PrivateKeyPath)) ::StringW PrivateKeyPath;

  /// @brief Field RecycledServerStatBlocks, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_RecycledServerStatBlocks,
                      put = __cordl_internal_set_RecycledServerStatBlocks)) ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceServerStats>* RecycledServerStatBlocks;

  /// @brief Field StatusUpdates, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_StatusUpdates, put = __cordl_internal_set_StatusUpdates)) ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceServerStats>* StatusUpdates;

  /// @brief Field UseSsl, offset 0x3a, size 0x1
  __declspec(property(get = __cordl_internal_get_UseSsl, put = __cordl_internal_set_UseSsl)) bool UseSsl;

  /// @brief Field Verbosity, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_Verbosity, put = __cordl_internal_set_Verbosity)) int32_t Verbosity;

  /// @brief Field WorkerThread, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_WorkerThread, put = __cordl_internal_set_WorkerThread)) ::System::Threading::Thread* WorkerThread;

  static inline ::IgnoranceCore::IgnoranceServer* New_ctor();

  /// @brief Method SetupRingBuffersIfNull, addr 0x3aa9030, size 0x230, virtual false, abstract: false, final false
  inline void SetupRingBuffersIfNull();

  /// @brief Method Start, addr 0x3aa8c94, size 0x39c, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Stop, addr 0x3aa9260, size 0x9c, virtual false, abstract: false, final false
  inline void Stop();

  /// @brief Method ThreadWorker, addr 0x3aa92fc, size 0x11c0, virtual false, abstract: false, final false
  inline void ThreadWorker(::System::Object* parameters);

  constexpr ::StringW const& __cordl_internal_get_BindAddress() const;

  constexpr ::StringW& __cordl_internal_get_BindAddress();

  constexpr bool const& __cordl_internal_get_BindAllInterfaces() const;

  constexpr bool& __cordl_internal_get_BindAllInterfaces();

  constexpr int32_t const& __cordl_internal_get_BindPort() const;

  constexpr int32_t& __cordl_internal_get_BindPort();

  constexpr bool const& __cordl_internal_get_CeaseOperation() const;

  constexpr bool& __cordl_internal_get_CeaseOperation();

  constexpr ::StringW const& __cordl_internal_get_Certificate() const;

  constexpr ::StringW& __cordl_internal_get_Certificate();

  constexpr ::StringW const& __cordl_internal_get_CertificatePath() const;

  constexpr ::StringW& __cordl_internal_get_CertificatePath();

  constexpr ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceCommandPacket>* const& __cordl_internal_get_Commands() const;

  constexpr ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceCommandPacket>*& __cordl_internal_get_Commands();

  constexpr int32_t const& __cordl_internal_get_ConnectionEventBufferSize() const;

  constexpr int32_t& __cordl_internal_get_ConnectionEventBufferSize();

  constexpr ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent>* const& __cordl_internal_get_ConnectionEvents() const;

  constexpr ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent>*& __cordl_internal_get_ConnectionEvents();

  constexpr ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent>* const& __cordl_internal_get_DisconnectionEvents() const;

  constexpr ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent>*& __cordl_internal_get_DisconnectionEvents();

  constexpr ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceIncomingPacket>* const& __cordl_internal_get_Incoming() const;

  constexpr ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceIncomingPacket>*& __cordl_internal_get_Incoming();

  constexpr int32_t const& __cordl_internal_get_IncomingOutgoingBufferSize() const;

  constexpr int32_t& __cordl_internal_get_IncomingOutgoingBufferSize();

  constexpr bool const& __cordl_internal_get_IsFruityDevice() const;

  constexpr bool& __cordl_internal_get_IsFruityDevice();

  constexpr int32_t const& __cordl_internal_get_MaximumChannels() const;

  constexpr int32_t& __cordl_internal_get_MaximumChannels();

  constexpr int32_t const& __cordl_internal_get_MaximumPacketSize() const;

  constexpr int32_t& __cordl_internal_get_MaximumPacketSize();

  constexpr int32_t const& __cordl_internal_get_MaximumPeers() const;

  constexpr int32_t& __cordl_internal_get_MaximumPeers();

  constexpr ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceOutgoingPacket>* const& __cordl_internal_get_Outgoing() const;

  constexpr ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceOutgoingPacket>*& __cordl_internal_get_Outgoing();

  constexpr int32_t const& __cordl_internal_get_PollTime() const;

  constexpr int32_t& __cordl_internal_get_PollTime();

  constexpr ::StringW const& __cordl_internal_get_PrivateKey() const;

  constexpr ::StringW& __cordl_internal_get_PrivateKey();

  constexpr ::StringW const& __cordl_internal_get_PrivateKeyPath() const;

  constexpr ::StringW& __cordl_internal_get_PrivateKeyPath();

  constexpr ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceServerStats>* const& __cordl_internal_get_RecycledServerStatBlocks() const;

  constexpr ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceServerStats>*& __cordl_internal_get_RecycledServerStatBlocks();

  constexpr ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceServerStats>* const& __cordl_internal_get_StatusUpdates() const;

  constexpr ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceServerStats>*& __cordl_internal_get_StatusUpdates();

  constexpr bool const& __cordl_internal_get_UseSsl() const;

  constexpr bool& __cordl_internal_get_UseSsl();

  constexpr int32_t const& __cordl_internal_get_Verbosity() const;

  constexpr int32_t& __cordl_internal_get_Verbosity();

  constexpr ::System::Threading::Thread* const& __cordl_internal_get_WorkerThread() const;

  constexpr ::System::Threading::Thread*& __cordl_internal_get_WorkerThread();

  constexpr void __cordl_internal_set_BindAddress(::StringW value);

  constexpr void __cordl_internal_set_BindAllInterfaces(bool value);

  constexpr void __cordl_internal_set_BindPort(int32_t value);

  constexpr void __cordl_internal_set_CeaseOperation(bool value);

  constexpr void __cordl_internal_set_Certificate(::StringW value);

  constexpr void __cordl_internal_set_CertificatePath(::StringW value);

  constexpr void __cordl_internal_set_Commands(::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceCommandPacket>* value);

  constexpr void __cordl_internal_set_ConnectionEventBufferSize(int32_t value);

  constexpr void __cordl_internal_set_ConnectionEvents(::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent>* value);

  constexpr void __cordl_internal_set_DisconnectionEvents(::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent>* value);

  constexpr void __cordl_internal_set_Incoming(::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceIncomingPacket>* value);

  constexpr void __cordl_internal_set_IncomingOutgoingBufferSize(int32_t value);

  constexpr void __cordl_internal_set_IsFruityDevice(bool value);

  constexpr void __cordl_internal_set_MaximumChannels(int32_t value);

  constexpr void __cordl_internal_set_MaximumPacketSize(int32_t value);

  constexpr void __cordl_internal_set_MaximumPeers(int32_t value);

  constexpr void __cordl_internal_set_Outgoing(::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceOutgoingPacket>* value);

  constexpr void __cordl_internal_set_PollTime(int32_t value);

  constexpr void __cordl_internal_set_PrivateKey(::StringW value);

  constexpr void __cordl_internal_set_PrivateKeyPath(::StringW value);

  constexpr void __cordl_internal_set_RecycledServerStatBlocks(::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceServerStats>* value);

  constexpr void __cordl_internal_set_StatusUpdates(::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceServerStats>* value);

  constexpr void __cordl_internal_set_UseSsl(bool value);

  constexpr void __cordl_internal_set_Verbosity(int32_t value);

  constexpr void __cordl_internal_set_WorkerThread(::System::Threading::Thread* value);

  /// @brief Method .ctor, addr 0x3aaa4bc, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsAlive, addr 0x3aa8c80, size 0x14, virtual false, abstract: false, final false
  inline bool get_IsAlive();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IgnoranceServer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IgnoranceServer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IgnoranceServer(IgnoranceServer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IgnoranceServer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IgnoranceServer(IgnoranceServer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17765 };

  /// @brief Field BindAddress, offset: 0x10, size: 0x8, def value: None
  ::StringW ___BindAddress;

  /// @brief Field BindPort, offset: 0x18, size: 0x4, def value: None
  int32_t ___BindPort;

  /// @brief Field MaximumChannels, offset: 0x1c, size: 0x4, def value: None
  int32_t ___MaximumChannels;

  /// @brief Field MaximumPeers, offset: 0x20, size: 0x4, def value: None
  int32_t ___MaximumPeers;

  /// @brief Field MaximumPacketSize, offset: 0x24, size: 0x4, def value: None
  int32_t ___MaximumPacketSize;

  /// @brief Field PollTime, offset: 0x28, size: 0x4, def value: None
  int32_t ___PollTime;

  /// @brief Field Verbosity, offset: 0x2c, size: 0x4, def value: None
  int32_t ___Verbosity;

  /// @brief Field IncomingOutgoingBufferSize, offset: 0x30, size: 0x4, def value: None
  int32_t ___IncomingOutgoingBufferSize;

  /// @brief Field ConnectionEventBufferSize, offset: 0x34, size: 0x4, def value: None
  int32_t ___ConnectionEventBufferSize;

  /// @brief Field IsFruityDevice, offset: 0x38, size: 0x1, def value: None
  bool ___IsFruityDevice;

  /// @brief Field BindAllInterfaces, offset: 0x39, size: 0x1, def value: None
  bool ___BindAllInterfaces;

  /// @brief Field UseSsl, offset: 0x3a, size: 0x1, def value: None
  bool ___UseSsl;

  /// @brief Field CertificatePath, offset: 0x40, size: 0x8, def value: None
  ::StringW ___CertificatePath;

  /// @brief Field Certificate, offset: 0x48, size: 0x8, def value: None
  ::StringW ___Certificate;

  /// @brief Field PrivateKeyPath, offset: 0x50, size: 0x8, def value: None
  ::StringW ___PrivateKeyPath;

  /// @brief Field PrivateKey, offset: 0x58, size: 0x8, def value: None
  ::StringW ___PrivateKey;

  /// @brief Field CeaseOperation, offset: 0x60, size: 0x1, def value: None
  bool ___CeaseOperation;

  /// @brief Field Incoming, offset: 0x68, size: 0x8, def value: None
  ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceIncomingPacket>* ___Incoming;

  /// @brief Field Outgoing, offset: 0x70, size: 0x8, def value: None
  ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceOutgoingPacket>* ___Outgoing;

  /// @brief Field Commands, offset: 0x78, size: 0x8, def value: None
  ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceCommandPacket>* ___Commands;

  /// @brief Field ConnectionEvents, offset: 0x80, size: 0x8, def value: None
  ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent>* ___ConnectionEvents;

  /// @brief Field DisconnectionEvents, offset: 0x88, size: 0x8, def value: None
  ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent>* ___DisconnectionEvents;

  /// @brief Field StatusUpdates, offset: 0x90, size: 0x8, def value: None
  ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceServerStats>* ___StatusUpdates;

  /// @brief Field RecycledServerStatBlocks, offset: 0x98, size: 0x8, def value: None
  ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceServerStats>* ___RecycledServerStatBlocks;

  /// @brief Field WorkerThread, offset: 0xa0, size: 0x8, def value: None
  ::System::Threading::Thread* ___WorkerThread;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::IgnoranceCore::IgnoranceServer, ___BindAddress) == 0x10, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::IgnoranceServer, ___BindPort) == 0x18, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::IgnoranceServer, ___MaximumChannels) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::IgnoranceServer, ___MaximumPeers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::IgnoranceServer, ___MaximumPacketSize) == 0x24, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::IgnoranceServer, ___PollTime) == 0x28, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::IgnoranceServer, ___Verbosity) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::IgnoranceServer, ___IncomingOutgoingBufferSize) == 0x30, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::IgnoranceServer, ___ConnectionEventBufferSize) == 0x34, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::IgnoranceServer, ___IsFruityDevice) == 0x38, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::IgnoranceServer, ___BindAllInterfaces) == 0x39, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::IgnoranceServer, ___UseSsl) == 0x3a, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::IgnoranceServer, ___CertificatePath) == 0x40, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::IgnoranceServer, ___Certificate) == 0x48, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::IgnoranceServer, ___PrivateKeyPath) == 0x50, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::IgnoranceServer, ___PrivateKey) == 0x58, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::IgnoranceServer, ___CeaseOperation) == 0x60, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::IgnoranceServer, ___Incoming) == 0x68, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::IgnoranceServer, ___Outgoing) == 0x70, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::IgnoranceServer, ___Commands) == 0x78, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::IgnoranceServer, ___ConnectionEvents) == 0x80, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::IgnoranceServer, ___DisconnectionEvents) == 0x88, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::IgnoranceServer, ___StatusUpdates) == 0x90, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::IgnoranceServer, ___RecycledServerStatBlocks) == 0x98, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::IgnoranceServer, ___WorkerThread) == 0xa0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::IgnoranceCore::IgnoranceServer, 0xa8>, "Size mismatch!");

} // namespace IgnoranceCore
NEED_NO_BOX(::IgnoranceCore::IgnoranceServer);
DEFINE_IL2CPP_ARG_TYPE(::IgnoranceCore::IgnoranceServer*, "IgnoranceCore", "IgnoranceServer");
DEFINE_IL2CPP_ARG_TYPE(::IgnoranceCore::IgnoranceServer_ThreadParamInfo, "IgnoranceCore", "IgnoranceServer/ThreadParamInfo");
