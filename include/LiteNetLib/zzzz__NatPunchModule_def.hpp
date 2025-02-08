#pragma once
// IWYU pragma private; include "LiteNetLib/NatPunchModule.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "LiteNetLib/zzzz__NatAddressType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NatPunchModule)
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib::Utils {
class NetPacketProcessor;
}
namespace LiteNetLib {
class INatPunchListener;
}
namespace LiteNetLib {
class NatPunchModule_NatIntroduceRequestPacket;
}
namespace LiteNetLib {
class NatPunchModule_NatIntroduceResponsePacket;
}
namespace LiteNetLib {
class NatPunchModule_NatPunchPacket;
}
namespace LiteNetLib {
struct NatPunchModule_RequestEventData;
}
namespace LiteNetLib {
struct NatPunchModule_SuccessEventData;
}
namespace LiteNetLib {
class NetPacket;
}
namespace LiteNetLib {
class NetSocket;
}
namespace System::Collections::Generic {
template <typename T> class Queue_1;
}
namespace System::Net {
class IPEndPoint;
}
// Forward declare root types
namespace LiteNetLib {
class NatPunchModule;
}
namespace LiteNetLib {
class NatPunchModule_NatIntroduceRequestPacket;
}
namespace LiteNetLib {
class NatPunchModule_NatIntroduceResponsePacket;
}
namespace LiteNetLib {
class NatPunchModule_NatPunchPacket;
}
namespace LiteNetLib {
struct NatPunchModule_RequestEventData;
}
namespace LiteNetLib {
struct NatPunchModule_SuccessEventData;
}
// Write type traits
MARK_REF_PTR_T(::LiteNetLib::NatPunchModule);
MARK_REF_PTR_T(::LiteNetLib::NatPunchModule_NatIntroduceRequestPacket);
MARK_REF_PTR_T(::LiteNetLib::NatPunchModule_NatIntroduceResponsePacket);
MARK_REF_PTR_T(::LiteNetLib::NatPunchModule_NatPunchPacket);
MARK_VAL_T(::LiteNetLib::NatPunchModule_RequestEventData);
MARK_VAL_T(::LiteNetLib::NatPunchModule_SuccessEventData);
// Dependencies
namespace LiteNetLib {
// Is value type: true
// CS Name: LiteNetLib.NatPunchModule/RequestEventData
struct CORDL_TYPE NatPunchModule_RequestEventData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr NatPunchModule_RequestEventData();

  // Ctor Parameters [CppParam { name: "LocalEndPoint", ty: "::System::Net::IPEndPoint*", modifiers: "", def_value: None }, CppParam { name: "RemoteEndPoint", ty: "::System::Net::IPEndPoint*",
  // modifiers: "", def_value: None }, CppParam { name: "Token", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr NatPunchModule_RequestEventData(::System::Net::IPEndPoint* LocalEndPoint, ::System::Net::IPEndPoint* RemoteEndPoint, ::StringW Token) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16528 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field LocalEndPoint, offset: 0x0, size: 0x8, def value: None
  ::System::Net::IPEndPoint* LocalEndPoint;

  /// @brief Field RemoteEndPoint, offset: 0x8, size: 0x8, def value: None
  ::System::Net::IPEndPoint* RemoteEndPoint;

  /// @brief Field Token, offset: 0x10, size: 0x8, def value: None
  ::StringW Token;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::LiteNetLib::NatPunchModule_RequestEventData, LocalEndPoint) == 0x0, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NatPunchModule_RequestEventData, RemoteEndPoint) == 0x8, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NatPunchModule_RequestEventData, Token) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::LiteNetLib::NatPunchModule_RequestEventData, 0x18>, "Size mismatch!");

} // namespace LiteNetLib
// Dependencies LiteNetLib.NatAddressType
namespace LiteNetLib {
// Is value type: true
// CS Name: LiteNetLib.NatPunchModule/SuccessEventData
struct CORDL_TYPE NatPunchModule_SuccessEventData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr NatPunchModule_SuccessEventData();

  // Ctor Parameters [CppParam { name: "TargetEndPoint", ty: "::System::Net::IPEndPoint*", modifiers: "", def_value: None }, CppParam { name: "Type", ty: "::LiteNetLib::NatAddressType", modifiers: "",
  // def_value: None }, CppParam { name: "Token", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr NatPunchModule_SuccessEventData(::System::Net::IPEndPoint* TargetEndPoint, ::LiteNetLib::NatAddressType Type, ::StringW Token) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16529 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field TargetEndPoint, offset: 0x0, size: 0x8, def value: None
  ::System::Net::IPEndPoint* TargetEndPoint;

  /// @brief Field Type, offset: 0x8, size: 0x4, def value: None
  ::LiteNetLib::NatAddressType Type;

  /// @brief Field Token, offset: 0x10, size: 0x8, def value: None
  ::StringW Token;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::LiteNetLib::NatPunchModule_SuccessEventData, TargetEndPoint) == 0x0, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NatPunchModule_SuccessEventData, Type) == 0x8, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NatPunchModule_SuccessEventData, Token) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::LiteNetLib::NatPunchModule_SuccessEventData, 0x18>, "Size mismatch!");

} // namespace LiteNetLib
// Dependencies System.Object
namespace LiteNetLib {
// Is value type: false
// CS Name: LiteNetLib.NatPunchModule/NatIntroduceRequestPacket
class CORDL_TYPE NatPunchModule_NatIntroduceRequestPacket : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Internal, put = set_Internal)) ::System::Net::IPEndPoint* Internal;

  __declspec(property(get = get_Token, put = set_Token)) ::StringW Token;

  /// @brief Field <Internal>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Internal_k__BackingField, put = __cordl_internal_set__Internal_k__BackingField)) ::System::Net::IPEndPoint* _Internal_k__BackingField;

  /// @brief Field <Token>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Token_k__BackingField, put = __cordl_internal_set__Token_k__BackingField)) ::StringW _Token_k__BackingField;

  static inline ::LiteNetLib::NatPunchModule_NatIntroduceRequestPacket* New_ctor();

  constexpr ::System::Net::IPEndPoint* const& __cordl_internal_get__Internal_k__BackingField() const;

  constexpr ::System::Net::IPEndPoint*& __cordl_internal_get__Internal_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Token_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Token_k__BackingField();

  constexpr void __cordl_internal_set__Internal_k__BackingField(::System::Net::IPEndPoint* value);

  constexpr void __cordl_internal_set__Token_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x3ab4208, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Internal, addr 0x3ab493c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::IPEndPoint* get_Internal();

  /// @brief Method get_Token, addr 0x3ab494c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Token();

  /// @brief Method set_Internal, addr 0x3ab4944, size 0x8, virtual false, abstract: false, final false
  inline void set_Internal(::System::Net::IPEndPoint* value);

  /// @brief Method set_Token, addr 0x3ab4954, size 0x8, virtual false, abstract: false, final false
  inline void set_Token(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NatPunchModule_NatIntroduceRequestPacket();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NatPunchModule_NatIntroduceRequestPacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NatPunchModule_NatIntroduceRequestPacket(NatPunchModule_NatIntroduceRequestPacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NatPunchModule_NatIntroduceRequestPacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NatPunchModule_NatIntroduceRequestPacket(NatPunchModule_NatIntroduceRequestPacket const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16530 };

  /// @brief Field <Internal>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Net::IPEndPoint* ____Internal_k__BackingField;

  /// @brief Field <Token>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Token_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::LiteNetLib::NatPunchModule_NatIntroduceRequestPacket, ____Internal_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NatPunchModule_NatIntroduceRequestPacket, ____Token_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::LiteNetLib::NatPunchModule_NatIntroduceRequestPacket, 0x20>, "Size mismatch!");

} // namespace LiteNetLib
// Dependencies System.Object
namespace LiteNetLib {
// Is value type: false
// CS Name: LiteNetLib.NatPunchModule/NatIntroduceResponsePacket
class CORDL_TYPE NatPunchModule_NatIntroduceResponsePacket : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_External, put = set_External)) ::System::Net::IPEndPoint* External;

  __declspec(property(get = get_Internal, put = set_Internal)) ::System::Net::IPEndPoint* Internal;

  __declspec(property(get = get_Token, put = set_Token)) ::StringW Token;

  /// @brief Field <External>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__External_k__BackingField, put = __cordl_internal_set__External_k__BackingField)) ::System::Net::IPEndPoint* _External_k__BackingField;

  /// @brief Field <Internal>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Internal_k__BackingField, put = __cordl_internal_set__Internal_k__BackingField)) ::System::Net::IPEndPoint* _Internal_k__BackingField;

  /// @brief Field <Token>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__Token_k__BackingField, put = __cordl_internal_set__Token_k__BackingField)) ::StringW _Token_k__BackingField;

  static inline ::LiteNetLib::NatPunchModule_NatIntroduceResponsePacket* New_ctor();

  constexpr ::System::Net::IPEndPoint* const& __cordl_internal_get__External_k__BackingField() const;

  constexpr ::System::Net::IPEndPoint*& __cordl_internal_get__External_k__BackingField();

  constexpr ::System::Net::IPEndPoint* const& __cordl_internal_get__Internal_k__BackingField() const;

  constexpr ::System::Net::IPEndPoint*& __cordl_internal_get__Internal_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Token_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Token_k__BackingField();

  constexpr void __cordl_internal_set__External_k__BackingField(::System::Net::IPEndPoint* value);

  constexpr void __cordl_internal_set__Internal_k__BackingField(::System::Net::IPEndPoint* value);

  constexpr void __cordl_internal_set__Token_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x3ab3a48, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_External, addr 0x3ab496c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::IPEndPoint* get_External();

  /// @brief Method get_Internal, addr 0x3ab495c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::IPEndPoint* get_Internal();

  /// @brief Method get_Token, addr 0x3ab497c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Token();

  /// @brief Method set_External, addr 0x3ab4974, size 0x8, virtual false, abstract: false, final false
  inline void set_External(::System::Net::IPEndPoint* value);

  /// @brief Method set_Internal, addr 0x3ab4964, size 0x8, virtual false, abstract: false, final false
  inline void set_Internal(::System::Net::IPEndPoint* value);

  /// @brief Method set_Token, addr 0x3ab4984, size 0x8, virtual false, abstract: false, final false
  inline void set_Token(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NatPunchModule_NatIntroduceResponsePacket();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NatPunchModule_NatIntroduceResponsePacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NatPunchModule_NatIntroduceResponsePacket(NatPunchModule_NatIntroduceResponsePacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NatPunchModule_NatIntroduceResponsePacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NatPunchModule_NatIntroduceResponsePacket(NatPunchModule_NatIntroduceResponsePacket const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16531 };

  /// @brief Field <Internal>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Net::IPEndPoint* ____Internal_k__BackingField;

  /// @brief Field <External>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Net::IPEndPoint* ____External_k__BackingField;

  /// @brief Field <Token>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____Token_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::LiteNetLib::NatPunchModule_NatIntroduceResponsePacket, ____Internal_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NatPunchModule_NatIntroduceResponsePacket, ____External_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NatPunchModule_NatIntroduceResponsePacket, ____Token_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::LiteNetLib::NatPunchModule_NatIntroduceResponsePacket, 0x28>, "Size mismatch!");

} // namespace LiteNetLib
// Dependencies System.Object
namespace LiteNetLib {
// Is value type: false
// CS Name: LiteNetLib.NatPunchModule/NatPunchPacket
class CORDL_TYPE NatPunchModule_NatPunchPacket : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IsExternal, put = set_IsExternal)) bool IsExternal;

  __declspec(property(get = get_Token, put = set_Token)) ::StringW Token;

  /// @brief Field <IsExternal>k__BackingField, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__IsExternal_k__BackingField, put = __cordl_internal_set__IsExternal_k__BackingField)) bool _IsExternal_k__BackingField;

  /// @brief Field <Token>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Token_k__BackingField, put = __cordl_internal_set__Token_k__BackingField)) ::StringW _Token_k__BackingField;

  static inline ::LiteNetLib::NatPunchModule_NatPunchPacket* New_ctor();

  constexpr bool const& __cordl_internal_get__IsExternal_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsExternal_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Token_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Token_k__BackingField();

  constexpr void __cordl_internal_set__IsExternal_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Token_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x3ab4484, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsExternal, addr 0x3ab499c, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsExternal();

  /// @brief Method get_Token, addr 0x3ab498c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Token();

  /// @brief Method set_IsExternal, addr 0x3ab49a4, size 0xc, virtual false, abstract: false, final false
  inline void set_IsExternal(bool value);

  /// @brief Method set_Token, addr 0x3ab4994, size 0x8, virtual false, abstract: false, final false
  inline void set_Token(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NatPunchModule_NatPunchPacket();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NatPunchModule_NatPunchPacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NatPunchModule_NatPunchPacket(NatPunchModule_NatPunchPacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NatPunchModule_NatPunchPacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NatPunchModule_NatPunchPacket(NatPunchModule_NatPunchPacket const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16532 };

  /// @brief Field <Token>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Token_k__BackingField;

  /// @brief Field <IsExternal>k__BackingField, offset: 0x18, size: 0x1, def value: None
  bool ____IsExternal_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::LiteNetLib::NatPunchModule_NatPunchPacket, ____Token_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NatPunchModule_NatPunchPacket, ____IsExternal_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::LiteNetLib::NatPunchModule_NatPunchPacket, 0x20>, "Size mismatch!");

} // namespace LiteNetLib
// Dependencies System.Object
namespace LiteNetLib {
// Is value type: false
// CS Name: LiteNetLib.NatPunchModule
class CORDL_TYPE NatPunchModule : public ::System::Object {
public:
  // Declarations
  using NatIntroduceRequestPacket = ::LiteNetLib::NatPunchModule_NatIntroduceRequestPacket;

  using NatIntroduceResponsePacket = ::LiteNetLib::NatPunchModule_NatIntroduceResponsePacket;

  using NatPunchPacket = ::LiteNetLib::NatPunchModule_NatPunchPacket;

  using RequestEventData = ::LiteNetLib::NatPunchModule_RequestEventData;

  using SuccessEventData = ::LiteNetLib::NatPunchModule_SuccessEventData;

  /// @brief Field _cacheReader, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__cacheReader, put = __cordl_internal_set__cacheReader)) ::LiteNetLib::Utils::NetDataReader* _cacheReader;

  /// @brief Field _cacheWriter, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__cacheWriter, put = __cordl_internal_set__cacheWriter)) ::LiteNetLib::Utils::NetDataWriter* _cacheWriter;

  /// @brief Field _natPunchListener, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__natPunchListener, put = __cordl_internal_set__natPunchListener)) ::LiteNetLib::INatPunchListener* _natPunchListener;

  /// @brief Field _netPacketProcessor, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__netPacketProcessor, put = __cordl_internal_set__netPacketProcessor)) ::LiteNetLib::Utils::NetPacketProcessor* _netPacketProcessor;

  /// @brief Field _requestEvents, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__requestEvents,
                      put = __cordl_internal_set__requestEvents)) ::System::Collections::Generic::Queue_1<::LiteNetLib::NatPunchModule_RequestEventData>* _requestEvents;

  /// @brief Field _socket, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__socket, put = __cordl_internal_set__socket)) ::LiteNetLib::NetSocket* _socket;

  /// @brief Field _successEvents, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__successEvents,
                      put = __cordl_internal_set__successEvents)) ::System::Collections::Generic::Queue_1<::LiteNetLib::NatPunchModule_SuccessEventData>* _successEvents;

  /// @brief Method Init, addr 0x3ab3974, size 0x8, virtual false, abstract: false, final false
  inline void Init(::LiteNetLib::INatPunchListener* listener);

  /// @brief Method NatIntroduce, addr 0x3ab397c, size 0xcc, virtual false, abstract: false, final false
  inline void NatIntroduce(::System::Net::IPEndPoint* hostInternal, ::System::Net::IPEndPoint* hostExternal, ::System::Net::IPEndPoint* clientInternal, ::System::Net::IPEndPoint* clientExternal,
                           ::StringW additionalInfo);

  static inline ::LiteNetLib::NatPunchModule* New_ctor(::LiteNetLib::NetSocket* socket);

  /// @brief Method OnNatIntroductionRequest, addr 0x3ab4210, size 0x120, virtual false, abstract: false, final false
  inline void OnNatIntroductionRequest(::LiteNetLib::NatPunchModule_NatIntroduceRequestPacket* req, ::System::Net::IPEndPoint* senderEndPoint);

  /// @brief Method OnNatIntroductionResponse, addr 0x3ab4330, size 0x154, virtual false, abstract: false, final false
  inline void OnNatIntroductionResponse(::LiteNetLib::NatPunchModule_NatIntroduceResponsePacket* req);

  /// @brief Method OnNatPunch, addr 0x3ab480c, size 0x130, virtual false, abstract: false, final false
  inline void OnNatPunch(::LiteNetLib::NatPunchModule_NatPunchPacket* req, ::System::Net::IPEndPoint* senderEndPoint);

  /// @brief Method PollEvents, addr 0x3ab3a50, size 0x360, virtual false, abstract: false, final false
  inline void PollEvents();

  /// @brief Method ProcessMessage, addr 0x3ab3858, size 0x10c, virtual false, abstract: false, final false
  inline void ProcessMessage(::System::Net::IPEndPoint* senderEndPoint, ::LiteNetLib::NetPacket* packet);

  /// @brief Method Send, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void Send(T packet, ::System::Net::IPEndPoint* target);

  /// @brief Method SendNatIntroduceRequest, addr 0x3ab3db0, size 0x84, virtual false, abstract: false, final false
  inline void SendNatIntroduceRequest(::StringW host, int32_t port, ::StringW additionalInfo);

  /// @brief Method SendNatIntroduceRequest, addr 0x3ab3ed4, size 0x11c, virtual false, abstract: false, final false
  inline void SendNatIntroduceRequest(::System::Net::IPEndPoint* masterServerEndPoint, ::StringW additionalInfo);

  constexpr ::LiteNetLib::Utils::NetDataReader* const& __cordl_internal_get__cacheReader() const;

  constexpr ::LiteNetLib::Utils::NetDataReader*& __cordl_internal_get__cacheReader();

  constexpr ::LiteNetLib::Utils::NetDataWriter* const& __cordl_internal_get__cacheWriter() const;

  constexpr ::LiteNetLib::Utils::NetDataWriter*& __cordl_internal_get__cacheWriter();

  constexpr ::LiteNetLib::INatPunchListener* const& __cordl_internal_get__natPunchListener() const;

  constexpr ::LiteNetLib::INatPunchListener*& __cordl_internal_get__natPunchListener();

  constexpr ::LiteNetLib::Utils::NetPacketProcessor* const& __cordl_internal_get__netPacketProcessor() const;

  constexpr ::LiteNetLib::Utils::NetPacketProcessor*& __cordl_internal_get__netPacketProcessor();

  constexpr ::System::Collections::Generic::Queue_1<::LiteNetLib::NatPunchModule_RequestEventData>* const& __cordl_internal_get__requestEvents() const;

  constexpr ::System::Collections::Generic::Queue_1<::LiteNetLib::NatPunchModule_RequestEventData>*& __cordl_internal_get__requestEvents();

  constexpr ::LiteNetLib::NetSocket* const& __cordl_internal_get__socket() const;

  constexpr ::LiteNetLib::NetSocket*& __cordl_internal_get__socket();

  constexpr ::System::Collections::Generic::Queue_1<::LiteNetLib::NatPunchModule_SuccessEventData>* const& __cordl_internal_get__successEvents() const;

  constexpr ::System::Collections::Generic::Queue_1<::LiteNetLib::NatPunchModule_SuccessEventData>*& __cordl_internal_get__successEvents();

  constexpr void __cordl_internal_set__cacheReader(::LiteNetLib::Utils::NetDataReader* value);

  constexpr void __cordl_internal_set__cacheWriter(::LiteNetLib::Utils::NetDataWriter* value);

  constexpr void __cordl_internal_set__natPunchListener(::LiteNetLib::INatPunchListener* value);

  constexpr void __cordl_internal_set__netPacketProcessor(::LiteNetLib::Utils::NetPacketProcessor* value);

  constexpr void __cordl_internal_set__requestEvents(::System::Collections::Generic::Queue_1<::LiteNetLib::NatPunchModule_RequestEventData>* value);

  constexpr void __cordl_internal_set__socket(::LiteNetLib::NetSocket* value);

  constexpr void __cordl_internal_set__successEvents(::System::Collections::Generic::Queue_1<::LiteNetLib::NatPunchModule_SuccessEventData>* value);

  /// @brief Method .ctor, addr 0x3ab3588, size 0x2bc, virtual false, abstract: false, final false
  inline void _ctor(::LiteNetLib::NetSocket* socket);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NatPunchModule();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NatPunchModule", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NatPunchModule(NatPunchModule&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NatPunchModule", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NatPunchModule(NatPunchModule const&) = delete;

  /// @brief Field MaxTokenLength offset 0xffffffff size 0x4
  static constexpr int32_t MaxTokenLength{ static_cast<int32_t>(0x100) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16533 };

  /// @brief Field _socket, offset: 0x10, size: 0x8, def value: None
  ::LiteNetLib::NetSocket* ____socket;

  /// @brief Field _requestEvents, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Queue_1<::LiteNetLib::NatPunchModule_RequestEventData>* ____requestEvents;

  /// @brief Field _successEvents, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Queue_1<::LiteNetLib::NatPunchModule_SuccessEventData>* ____successEvents;

  /// @brief Field _cacheReader, offset: 0x28, size: 0x8, def value: None
  ::LiteNetLib::Utils::NetDataReader* ____cacheReader;

  /// @brief Field _cacheWriter, offset: 0x30, size: 0x8, def value: None
  ::LiteNetLib::Utils::NetDataWriter* ____cacheWriter;

  /// @brief Field _netPacketProcessor, offset: 0x38, size: 0x8, def value: None
  ::LiteNetLib::Utils::NetPacketProcessor* ____netPacketProcessor;

  /// @brief Field _natPunchListener, offset: 0x40, size: 0x8, def value: None
  ::LiteNetLib::INatPunchListener* ____natPunchListener;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::LiteNetLib::NatPunchModule, ____socket) == 0x10, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NatPunchModule, ____requestEvents) == 0x18, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NatPunchModule, ____successEvents) == 0x20, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NatPunchModule, ____cacheReader) == 0x28, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NatPunchModule, ____cacheWriter) == 0x30, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NatPunchModule, ____netPacketProcessor) == 0x38, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NatPunchModule, ____natPunchListener) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::LiteNetLib::NatPunchModule, 0x48>, "Size mismatch!");

} // namespace LiteNetLib
NEED_NO_BOX(::LiteNetLib::NatPunchModule);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::NatPunchModule*, "LiteNetLib", "NatPunchModule");
NEED_NO_BOX(::LiteNetLib::NatPunchModule_NatIntroduceRequestPacket);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::NatPunchModule_NatIntroduceRequestPacket*, "LiteNetLib", "NatPunchModule/NatIntroduceRequestPacket");
NEED_NO_BOX(::LiteNetLib::NatPunchModule_NatIntroduceResponsePacket);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::NatPunchModule_NatIntroduceResponsePacket*, "LiteNetLib", "NatPunchModule/NatIntroduceResponsePacket");
NEED_NO_BOX(::LiteNetLib::NatPunchModule_NatPunchPacket);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::NatPunchModule_NatPunchPacket*, "LiteNetLib", "NatPunchModule/NatPunchPacket");
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::NatPunchModule_RequestEventData, "LiteNetLib", "NatPunchModule/RequestEventData");
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::NatPunchModule_SuccessEventData, "LiteNetLib", "NatPunchModule/SuccessEventData");
