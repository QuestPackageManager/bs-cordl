#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IgnoranceServer)
namespace IgnoranceThirdparty {
template <typename T> class RingBuffer_1;
}
namespace System::Threading {
class Thread;
}
namespace System {
class Object;
}
namespace IgnoranceCore {
struct IgnoranceIncomingPacket;
}
namespace IgnoranceCore {
struct IgnoranceCommandPacket;
}
namespace IgnoranceCore {
struct __IgnoranceServer__ThreadParamInfo;
}
namespace IgnoranceCore {
struct IgnoranceServerStats;
}
namespace IgnoranceCore {
struct IgnoranceOutgoingPacket;
}
namespace IgnoranceCore {
struct IgnoranceConnectionEvent;
}
// Forward declare root types
namespace IgnoranceCore {
class IgnoranceServer;
}
namespace IgnoranceCore {
struct __IgnoranceServer__ThreadParamInfo;
}
// Write type traits
MARK_REF_PTR_T(::IgnoranceCore::IgnoranceServer);
MARK_VAL_T(::IgnoranceCore::__IgnoranceServer__ThreadParamInfo);
// Type: ::ThreadParamInfo
// SizeInfo { instance_size: 80, native_size: 80, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace IgnoranceCore {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15240))
// CS Name: ::IgnoranceServer::ThreadParamInfo
struct CORDL_TYPE __IgnoranceServer__ThreadParamInfo {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "IsFruityDevice", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "BindAllInterfaces", ty: "bool", modifiers: "", def_value: None }, CppParam {
  // name: "Channels", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Peers", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "PollTime", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "Port", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "PacketSizeLimit", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "Verbosity", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Address", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "UseSsl", ty:
  // "bool", modifiers: "", def_value: None }, CppParam { name: "CertificatePath", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "Certificate", ty: "::StringW", modifiers: "",
  // def_value: None }, CppParam { name: "PrivateKeyPath", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "PrivateKey", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr __IgnoranceServer__ThreadParamInfo(bool IsFruityDevice, bool BindAllInterfaces, int32_t Channels, int32_t Peers, int32_t PollTime, int32_t Port, int32_t PacketSizeLimit, int32_t Verbosity,
                                               ::StringW Address, bool UseSsl, ::StringW CertificatePath, ::StringW Certificate, ::StringW PrivateKeyPath, ::StringW PrivateKey) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __IgnoranceServer__ThreadParamInfo();

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

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::IgnoranceCore::__IgnoranceServer__ThreadParamInfo, 0x50>, "Size mismatch!");

} // namespace IgnoranceCore
// Type: IgnoranceCore::IgnoranceServer
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 168, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace IgnoranceCore {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15241))
// CS Name: ::IgnoranceCore::IgnoranceServer*
class CORDL_TYPE IgnoranceServer : public ::System::Object {
public:
  // Declarations
  using ThreadParamInfo = ::IgnoranceCore::__IgnoranceServer__ThreadParamInfo;

  /// @brief Field BindAddress, offset 0x10, size 0x8
  __declspec(property(get = __get_BindAddress, put = __set_BindAddress))::StringW BindAddress;

  /// @brief Field BindPort, offset 0x18, size 0x4
  __declspec(property(get = __get_BindPort, put = __set_BindPort)) int32_t BindPort;

  /// @brief Field MaximumChannels, offset 0x1c, size 0x4
  __declspec(property(get = __get_MaximumChannels, put = __set_MaximumChannels)) int32_t MaximumChannels;

  /// @brief Field MaximumPeers, offset 0x20, size 0x4
  __declspec(property(get = __get_MaximumPeers, put = __set_MaximumPeers)) int32_t MaximumPeers;

  /// @brief Field MaximumPacketSize, offset 0x24, size 0x4
  __declspec(property(get = __get_MaximumPacketSize, put = __set_MaximumPacketSize)) int32_t MaximumPacketSize;

  /// @brief Field PollTime, offset 0x28, size 0x4
  __declspec(property(get = __get_PollTime, put = __set_PollTime)) int32_t PollTime;

  /// @brief Field Verbosity, offset 0x2c, size 0x4
  __declspec(property(get = __get_Verbosity, put = __set_Verbosity)) int32_t Verbosity;

  /// @brief Field IncomingOutgoingBufferSize, offset 0x30, size 0x4
  __declspec(property(get = __get_IncomingOutgoingBufferSize, put = __set_IncomingOutgoingBufferSize)) int32_t IncomingOutgoingBufferSize;

  /// @brief Field ConnectionEventBufferSize, offset 0x34, size 0x4
  __declspec(property(get = __get_ConnectionEventBufferSize, put = __set_ConnectionEventBufferSize)) int32_t ConnectionEventBufferSize;

  /// @brief Field IsFruityDevice, offset 0x38, size 0x1
  __declspec(property(get = __get_IsFruityDevice, put = __set_IsFruityDevice)) bool IsFruityDevice;

  /// @brief Field BindAllInterfaces, offset 0x39, size 0x1
  __declspec(property(get = __get_BindAllInterfaces, put = __set_BindAllInterfaces)) bool BindAllInterfaces;

  /// @brief Field UseSsl, offset 0x3a, size 0x1
  __declspec(property(get = __get_UseSsl, put = __set_UseSsl)) bool UseSsl;

  /// @brief Field CertificatePath, offset 0x40, size 0x8
  __declspec(property(get = __get_CertificatePath, put = __set_CertificatePath))::StringW CertificatePath;

  /// @brief Field Certificate, offset 0x48, size 0x8
  __declspec(property(get = __get_Certificate, put = __set_Certificate))::StringW Certificate;

  /// @brief Field PrivateKeyPath, offset 0x50, size 0x8
  __declspec(property(get = __get_PrivateKeyPath, put = __set_PrivateKeyPath))::StringW PrivateKeyPath;

  /// @brief Field PrivateKey, offset 0x58, size 0x8
  __declspec(property(get = __get_PrivateKey, put = __set_PrivateKey))::StringW PrivateKey;

  /// @brief Field CeaseOperation, offset 0x60, size 0x1
  __declspec(property(get = __get_CeaseOperation, put = __set_CeaseOperation)) bool CeaseOperation;

  /// @brief Field Incoming, offset 0x68, size 0x8
  __declspec(property(get = __get_Incoming, put = __set_Incoming))::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceIncomingPacket>* Incoming;

  /// @brief Field Outgoing, offset 0x70, size 0x8
  __declspec(property(get = __get_Outgoing, put = __set_Outgoing))::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceOutgoingPacket>* Outgoing;

  /// @brief Field Commands, offset 0x78, size 0x8
  __declspec(property(get = __get_Commands, put = __set_Commands))::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceCommandPacket>* Commands;

  /// @brief Field ConnectionEvents, offset 0x80, size 0x8
  __declspec(property(get = __get_ConnectionEvents, put = __set_ConnectionEvents))::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent>* ConnectionEvents;

  /// @brief Field DisconnectionEvents, offset 0x88, size 0x8
  __declspec(property(get = __get_DisconnectionEvents, put = __set_DisconnectionEvents))::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent>* DisconnectionEvents;

  /// @brief Field StatusUpdates, offset 0x90, size 0x8
  __declspec(property(get = __get_StatusUpdates, put = __set_StatusUpdates))::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceServerStats>* StatusUpdates;

  /// @brief Field RecycledServerStatBlocks, offset 0x98, size 0x8
  __declspec(property(get = __get_RecycledServerStatBlocks, put = __set_RecycledServerStatBlocks))::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceServerStats>* RecycledServerStatBlocks;

  /// @brief Field WorkerThread, offset 0xa0, size 0x8
  __declspec(property(get = __get_WorkerThread, put = __set_WorkerThread))::System::Threading::Thread* WorkerThread;

  __declspec(property(get = get_IsAlive)) bool IsAlive;

  constexpr ::StringW& __get_BindAddress();

  constexpr ::StringW const& __get_BindAddress() const;

  constexpr void __set_BindAddress(::StringW value);

  constexpr int32_t& __get_BindPort();

  constexpr int32_t const& __get_BindPort() const;

  constexpr void __set_BindPort(int32_t value);

  constexpr int32_t& __get_MaximumChannels();

  constexpr int32_t const& __get_MaximumChannels() const;

  constexpr void __set_MaximumChannels(int32_t value);

  constexpr int32_t& __get_MaximumPeers();

  constexpr int32_t const& __get_MaximumPeers() const;

  constexpr void __set_MaximumPeers(int32_t value);

  constexpr int32_t& __get_MaximumPacketSize();

  constexpr int32_t const& __get_MaximumPacketSize() const;

  constexpr void __set_MaximumPacketSize(int32_t value);

  constexpr int32_t& __get_PollTime();

  constexpr int32_t const& __get_PollTime() const;

  constexpr void __set_PollTime(int32_t value);

  constexpr int32_t& __get_Verbosity();

  constexpr int32_t const& __get_Verbosity() const;

  constexpr void __set_Verbosity(int32_t value);

  constexpr int32_t& __get_IncomingOutgoingBufferSize();

  constexpr int32_t const& __get_IncomingOutgoingBufferSize() const;

  constexpr void __set_IncomingOutgoingBufferSize(int32_t value);

  constexpr int32_t& __get_ConnectionEventBufferSize();

  constexpr int32_t const& __get_ConnectionEventBufferSize() const;

  constexpr void __set_ConnectionEventBufferSize(int32_t value);

  constexpr bool& __get_IsFruityDevice();

  constexpr bool const& __get_IsFruityDevice() const;

  constexpr void __set_IsFruityDevice(bool value);

  constexpr bool& __get_BindAllInterfaces();

  constexpr bool const& __get_BindAllInterfaces() const;

  constexpr void __set_BindAllInterfaces(bool value);

  constexpr bool& __get_UseSsl();

  constexpr bool const& __get_UseSsl() const;

  constexpr void __set_UseSsl(bool value);

  constexpr ::StringW& __get_CertificatePath();

  constexpr ::StringW const& __get_CertificatePath() const;

  constexpr void __set_CertificatePath(::StringW value);

  constexpr ::StringW& __get_Certificate();

  constexpr ::StringW const& __get_Certificate() const;

  constexpr void __set_Certificate(::StringW value);

  constexpr ::StringW& __get_PrivateKeyPath();

  constexpr ::StringW const& __get_PrivateKeyPath() const;

  constexpr void __set_PrivateKeyPath(::StringW value);

  constexpr ::StringW& __get_PrivateKey();

  constexpr ::StringW const& __get_PrivateKey() const;

  constexpr void __set_PrivateKey(::StringW value);

  constexpr bool& __get_CeaseOperation();

  constexpr bool const& __get_CeaseOperation() const;

  constexpr void __set_CeaseOperation(bool value);

  constexpr ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceIncomingPacket>*& __get_Incoming();

  constexpr ::cordl_internals::to_const_pointer<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceIncomingPacket>*> const& __get_Incoming() const;

  constexpr void __set_Incoming(::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceIncomingPacket>* value);

  constexpr ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceOutgoingPacket>*& __get_Outgoing();

  constexpr ::cordl_internals::to_const_pointer<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceOutgoingPacket>*> const& __get_Outgoing() const;

  constexpr void __set_Outgoing(::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceOutgoingPacket>* value);

  constexpr ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceCommandPacket>*& __get_Commands();

  constexpr ::cordl_internals::to_const_pointer<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceCommandPacket>*> const& __get_Commands() const;

  constexpr void __set_Commands(::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceCommandPacket>* value);

  constexpr ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent>*& __get_ConnectionEvents();

  constexpr ::cordl_internals::to_const_pointer<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent>*> const& __get_ConnectionEvents() const;

  constexpr void __set_ConnectionEvents(::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent>* value);

  constexpr ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent>*& __get_DisconnectionEvents();

  constexpr ::cordl_internals::to_const_pointer<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent>*> const& __get_DisconnectionEvents() const;

  constexpr void __set_DisconnectionEvents(::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent>* value);

  constexpr ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceServerStats>*& __get_StatusUpdates();

  constexpr ::cordl_internals::to_const_pointer<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceServerStats>*> const& __get_StatusUpdates() const;

  constexpr void __set_StatusUpdates(::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceServerStats>* value);

  constexpr ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceServerStats>*& __get_RecycledServerStatBlocks();

  constexpr ::cordl_internals::to_const_pointer<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceServerStats>*> const& __get_RecycledServerStatBlocks() const;

  constexpr void __set_RecycledServerStatBlocks(::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceServerStats>* value);

  constexpr ::System::Threading::Thread*& __get_WorkerThread();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Thread*> const& __get_WorkerThread() const;

  constexpr void __set_WorkerThread(::System::Threading::Thread* value);

  /// @brief Method get_IsAlive addr 0x21f57f0 size 0x14 virtual false final false
  inline bool get_IsAlive();

  /// @brief Method Start addr 0x21f5804 size 0x3b8 virtual false final false
  inline void Start();

  /// @brief Method Stop addr 0x21f5e00 size 0x9c virtual false final false
  inline void Stop();

  /// @brief Method ThreadWorker addr 0x21f5e9c size 0x1180 virtual false final false
  inline void ThreadWorker(::System::Object* parameters);

  /// @brief Method SetupRingBuffersIfNull addr 0x21f5bbc size 0x244 virtual false final false
  inline void SetupRingBuffersIfNull();

  static inline ::IgnoranceCore::IgnoranceServer* New_ctor();

  /// @brief Method .ctor addr 0x21f701c size 0xbc virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "IgnoranceServer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IgnoranceServer(IgnoranceServer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IgnoranceServer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IgnoranceServer(IgnoranceServer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IgnoranceServer();

public:
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
static_assert(::cordl_internals::size_check_v<::IgnoranceCore::IgnoranceServer, 0xa8>, "Size mismatch!");

} // namespace IgnoranceCore
NEED_NO_BOX(::IgnoranceCore::IgnoranceServer);
DEFINE_IL2CPP_ARG_TYPE(::IgnoranceCore::IgnoranceServer*, "IgnoranceCore", "IgnoranceServer");
DEFINE_IL2CPP_ARG_TYPE(::IgnoranceCore::__IgnoranceServer__ThreadParamInfo, "IgnoranceCore", "IgnoranceServer/ThreadParamInfo");
