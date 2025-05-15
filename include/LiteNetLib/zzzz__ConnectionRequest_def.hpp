#pragma once
// IWYU pragma private; include "LiteNetLib/ConnectionRequest.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "LiteNetLib/zzzz__ConnectionRequestResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ConnectionRequest)
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib {
struct ConnectionRequestResult;
}
namespace LiteNetLib {
class NetConnectRequestPacket;
}
namespace LiteNetLib {
class NetManager;
}
namespace LiteNetLib {
class NetPeer;
}
namespace System::Net {
class IPEndPoint;
}
// Forward declare root types
namespace LiteNetLib {
class ConnectionRequest;
}
// Write type traits
MARK_REF_PTR_T(::LiteNetLib::ConnectionRequest);
// Dependencies LiteNetLib.ConnectionRequestResult, System.Object
namespace LiteNetLib {
// Is value type: false
// CS Name: LiteNetLib.ConnectionRequest
class CORDL_TYPE ConnectionRequest : public ::System::Object {
public:
  // Declarations
  /// @brief Field ConnectionNumber, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_ConnectionNumber, put = __cordl_internal_set_ConnectionNumber)) uint8_t ConnectionNumber;

  /// @brief Field ConnectionTime, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_ConnectionTime, put = __cordl_internal_set_ConnectionTime)) int64_t ConnectionTime;

  /// @brief Field Data, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_Data, put = __cordl_internal_set_Data)) ::LiteNetLib::Utils::NetDataReader* Data;

  /// @brief Field RemoteEndPoint, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_RemoteEndPoint, put = __cordl_internal_set_RemoteEndPoint)) ::System::Net::IPEndPoint* RemoteEndPoint;

  __declspec(property(get = get_Result, put = set_Result)) ::LiteNetLib::ConnectionRequestResult Result;

  /// @brief Field <Result>k__BackingField, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__Result_k__BackingField, put = __cordl_internal_set__Result_k__BackingField)) ::LiteNetLib::ConnectionRequestResult _Result_k__BackingField;

  /// @brief Field _listener, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__listener, put = __cordl_internal_set__listener)) ::LiteNetLib::NetManager* _listener;

  /// @brief Field _used, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__used, put = __cordl_internal_set__used)) int32_t _used;

  /// @brief Method Accept, addr 0x3aac55c, size 0x64, virtual false, abstract: false, final false
  inline ::LiteNetLib::NetPeer* Accept();

  /// @brief Method AcceptIfKey, addr 0x3aabe7c, size 0x1b8, virtual false, abstract: false, final false
  inline ::LiteNetLib::NetPeer* AcceptIfKey(::StringW key);

  static inline ::LiteNetLib::ConnectionRequest* New_ctor(int64_t connectionId, uint8_t connectionNumber, ::LiteNetLib::Utils::NetDataReader* netDataReader, ::System::Net::IPEndPoint* endPoint,
                                                          ::LiteNetLib::NetManager* listener);

  /// @brief Method Reject, addr 0x3aac6b4, size 0x14, virtual false, abstract: false, final false
  inline void Reject();

  /// @brief Method Reject, addr 0x3aac6c8, size 0x20, virtual false, abstract: false, final false
  inline void Reject(::ArrayW<uint8_t, ::Array<uint8_t>*> rejectData);

  /// @brief Method Reject, addr 0x3aac648, size 0x8, virtual false, abstract: false, final false
  inline void Reject(::ArrayW<uint8_t, ::Array<uint8_t>*> rejectData, int32_t start, int32_t length);

  /// @brief Method Reject, addr 0x3aac5c0, size 0x88, virtual false, abstract: false, final false
  inline void Reject(::ArrayW<uint8_t, ::Array<uint8_t>*> rejectData, int32_t start, int32_t length, bool force);

  /// @brief Method Reject, addr 0x3aac6e8, size 0x28, virtual false, abstract: false, final false
  inline void Reject(::LiteNetLib::Utils::NetDataWriter* rejectData);

  /// @brief Method RejectForce, addr 0x3aac658, size 0x14, virtual false, abstract: false, final false
  inline void RejectForce();

  /// @brief Method RejectForce, addr 0x3aac66c, size 0x20, virtual false, abstract: false, final false
  inline void RejectForce(::ArrayW<uint8_t, ::Array<uint8_t>*> rejectData);

  /// @brief Method RejectForce, addr 0x3aac650, size 0x8, virtual false, abstract: false, final false
  inline void RejectForce(::ArrayW<uint8_t, ::Array<uint8_t>*> rejectData, int32_t start, int32_t length);

  /// @brief Method RejectForce, addr 0x3aac68c, size 0x28, virtual false, abstract: false, final false
  inline void RejectForce(::LiteNetLib::Utils::NetDataWriter* rejectData);

  /// @brief Method TryActivate, addr 0x3aabdcc, size 0x28, virtual false, abstract: false, final false
  inline bool TryActivate();

  /// @brief Method UpdateRequest, addr 0x3aabdf4, size 0x30, virtual false, abstract: false, final false
  inline void UpdateRequest(::LiteNetLib::NetConnectRequestPacket* connRequest);

  constexpr uint8_t const& __cordl_internal_get_ConnectionNumber() const;

  constexpr uint8_t& __cordl_internal_get_ConnectionNumber();

  constexpr int64_t const& __cordl_internal_get_ConnectionTime() const;

  constexpr int64_t& __cordl_internal_get_ConnectionTime();

  constexpr ::LiteNetLib::Utils::NetDataReader* const& __cordl_internal_get_Data() const;

  constexpr ::LiteNetLib::Utils::NetDataReader*& __cordl_internal_get_Data();

  constexpr ::System::Net::IPEndPoint* const& __cordl_internal_get_RemoteEndPoint() const;

  constexpr ::System::Net::IPEndPoint*& __cordl_internal_get_RemoteEndPoint();

  constexpr ::LiteNetLib::ConnectionRequestResult const& __cordl_internal_get__Result_k__BackingField() const;

  constexpr ::LiteNetLib::ConnectionRequestResult& __cordl_internal_get__Result_k__BackingField();

  constexpr ::LiteNetLib::NetManager* const& __cordl_internal_get__listener() const;

  constexpr ::LiteNetLib::NetManager*& __cordl_internal_get__listener();

  constexpr int32_t const& __cordl_internal_get__used() const;

  constexpr int32_t& __cordl_internal_get__used();

  constexpr void __cordl_internal_set_ConnectionNumber(uint8_t value);

  constexpr void __cordl_internal_set_ConnectionTime(int64_t value);

  constexpr void __cordl_internal_set_Data(::LiteNetLib::Utils::NetDataReader* value);

  constexpr void __cordl_internal_set_RemoteEndPoint(::System::Net::IPEndPoint* value);

  constexpr void __cordl_internal_set__Result_k__BackingField(::LiteNetLib::ConnectionRequestResult value);

  constexpr void __cordl_internal_set__listener(::LiteNetLib::NetManager* value);

  constexpr void __cordl_internal_set__used(int32_t value);

  /// @brief Method .ctor, addr 0x3aabe24, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(int64_t connectionId, uint8_t connectionNumber, ::LiteNetLib::Utils::NetDataReader* netDataReader, ::System::Net::IPEndPoint* endPoint, ::LiteNetLib::NetManager* listener);

  /// @brief Method get_Result, addr 0x3aabdbc, size 0x8, virtual false, abstract: false, final false
  inline ::LiteNetLib::ConnectionRequestResult get_Result();

  /// @brief Method set_Result, addr 0x3aabdc4, size 0x8, virtual false, abstract: false, final false
  inline void set_Result(::LiteNetLib::ConnectionRequestResult value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConnectionRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConnectionRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConnectionRequest(ConnectionRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConnectionRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConnectionRequest(ConnectionRequest const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16515 };

  /// @brief Field _listener, offset: 0x10, size: 0x8, def value: None
  ::LiteNetLib::NetManager* ____listener;

  /// @brief Field _used, offset: 0x18, size: 0x4, def value: None
  int32_t ____used;

  /// @brief Field Data, offset: 0x20, size: 0x8, def value: None
  ::LiteNetLib::Utils::NetDataReader* ___Data;

  /// @brief Field <Result>k__BackingField, offset: 0x28, size: 0x4, def value: None
  ::LiteNetLib::ConnectionRequestResult ____Result_k__BackingField;

  /// @brief Field ConnectionTime, offset: 0x30, size: 0x8, def value: None
  int64_t ___ConnectionTime;

  /// @brief Field ConnectionNumber, offset: 0x38, size: 0x1, def value: None
  uint8_t ___ConnectionNumber;

  /// @brief Field RemoteEndPoint, offset: 0x40, size: 0x8, def value: None
  ::System::Net::IPEndPoint* ___RemoteEndPoint;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::LiteNetLib::ConnectionRequest, ____listener) == 0x10, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::ConnectionRequest, ____used) == 0x18, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::ConnectionRequest, ___Data) == 0x20, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::ConnectionRequest, ____Result_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::ConnectionRequest, ___ConnectionTime) == 0x30, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::ConnectionRequest, ___ConnectionNumber) == 0x38, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::ConnectionRequest, ___RemoteEndPoint) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::LiteNetLib::ConnectionRequest, 0x48>, "Size mismatch!");

} // namespace LiteNetLib
NEED_NO_BOX(::LiteNetLib::ConnectionRequest);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::ConnectionRequest*, "LiteNetLib", "ConnectionRequest");
