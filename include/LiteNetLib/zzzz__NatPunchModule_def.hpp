#pragma once
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
struct NatAddressType;
}
namespace LiteNetLib {
class NetPacket;
}
namespace LiteNetLib {
class NetSocket;
}
namespace LiteNetLib {
class __NatPunchModule__NatIntroduceRequestPacket;
}
namespace LiteNetLib {
class __NatPunchModule__NatIntroduceResponsePacket;
}
namespace LiteNetLib {
class __NatPunchModule__NatPunchPacket;
}
namespace LiteNetLib {
struct __NatPunchModule__RequestEventData;
}
namespace LiteNetLib {
struct __NatPunchModule__SuccessEventData;
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
class __NatPunchModule__NatIntroduceRequestPacket;
}
namespace LiteNetLib {
class __NatPunchModule__NatIntroduceResponsePacket;
}
namespace LiteNetLib {
class __NatPunchModule__NatPunchPacket;
}
namespace LiteNetLib {
struct __NatPunchModule__RequestEventData;
}
namespace LiteNetLib {
struct __NatPunchModule__SuccessEventData;
}
// Write type traits
MARK_REF_PTR_T(::LiteNetLib::NatPunchModule);
MARK_REF_PTR_T(::LiteNetLib::__NatPunchModule__NatIntroduceRequestPacket);
MARK_REF_PTR_T(::LiteNetLib::__NatPunchModule__NatIntroduceResponsePacket);
MARK_REF_PTR_T(::LiteNetLib::__NatPunchModule__NatPunchPacket);
MARK_VAL_T(::LiteNetLib::__NatPunchModule__RequestEventData);
MARK_VAL_T(::LiteNetLib::__NatPunchModule__SuccessEventData);
// Type: ::RequestEventData
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace LiteNetLib {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14149))
// CS Name: ::NatPunchModule::RequestEventData
struct CORDL_TYPE __NatPunchModule__RequestEventData {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "LocalEndPoint", ty: "::System::Net::IPEndPoint*", modifiers: "", def_value: None }, CppParam { name: "RemoteEndPoint", ty: "::System::Net::IPEndPoint*",
  // modifiers: "", def_value: None }, CppParam { name: "Token", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr __NatPunchModule__RequestEventData(::System::Net::IPEndPoint* LocalEndPoint, ::System::Net::IPEndPoint* RemoteEndPoint, ::StringW Token) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __NatPunchModule__RequestEventData();

  /// @brief Field LocalEndPoint, offset: 0x0, size: 0x8, def value: None
  ::System::Net::IPEndPoint* LocalEndPoint;

  /// @brief Field RemoteEndPoint, offset: 0x8, size: 0x8, def value: None
  ::System::Net::IPEndPoint* RemoteEndPoint;

  /// @brief Field Token, offset: 0x10, size: 0x8, def value: None
  ::StringW Token;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::__NatPunchModule__RequestEventData, 0x18>, "Size mismatch!");

static_assert(offsetof(::LiteNetLib::__NatPunchModule__RequestEventData, LocalEndPoint) == 0x0, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::__NatPunchModule__RequestEventData, RemoteEndPoint) == 0x8, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::__NatPunchModule__RequestEventData, Token) == 0x10, "Offset mismatch!");

} // namespace LiteNetLib
// Type: ::SuccessEventData
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace LiteNetLib {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14144))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14150))
// CS Name: ::NatPunchModule::SuccessEventData
struct CORDL_TYPE __NatPunchModule__SuccessEventData {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "TargetEndPoint", ty: "::System::Net::IPEndPoint*", modifiers: "", def_value: None }, CppParam { name: "Type", ty: "::LiteNetLib::NatAddressType", modifiers: "",
  // def_value: None }, CppParam { name: "Token", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr __NatPunchModule__SuccessEventData(::System::Net::IPEndPoint* TargetEndPoint, ::LiteNetLib::NatAddressType Type, ::StringW Token) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __NatPunchModule__SuccessEventData();

  /// @brief Field TargetEndPoint, offset: 0x0, size: 0x8, def value: None
  ::System::Net::IPEndPoint* TargetEndPoint;

  /// @brief Field Type, offset: 0x8, size: 0x4, def value: None
  ::LiteNetLib::NatAddressType Type;

  /// @brief Field Token, offset: 0x10, size: 0x8, def value: None
  ::StringW Token;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::__NatPunchModule__SuccessEventData, 0x18>, "Size mismatch!");

static_assert(offsetof(::LiteNetLib::__NatPunchModule__SuccessEventData, TargetEndPoint) == 0x0, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::__NatPunchModule__SuccessEventData, Type) == 0x8, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::__NatPunchModule__SuccessEventData, Token) == 0x10, "Offset mismatch!");

} // namespace LiteNetLib
// Type: ::NatIntroduceRequestPacket
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace LiteNetLib {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14151))
// CS Name: ::NatPunchModule::NatIntroduceRequestPacket*
class CORDL_TYPE __NatPunchModule__NatIntroduceRequestPacket : public ::System::Object {
public:
  // Declarations
  /// @brief Field <Internal>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__Internal_k__BackingField, put = __set__Internal_k__BackingField))::System::Net::IPEndPoint* _Internal_k__BackingField;

  /// @brief Field <Token>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __get__Token_k__BackingField, put = __set__Token_k__BackingField))::StringW _Token_k__BackingField;

  __declspec(property(get = get_Internal, put = set_Internal))::System::Net::IPEndPoint* Internal;

  __declspec(property(get = get_Token, put = set_Token))::StringW Token;

  constexpr ::System::Net::IPEndPoint*& __get__Internal_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::IPEndPoint*> const& __get__Internal_k__BackingField() const;

  constexpr void __set__Internal_k__BackingField(::System::Net::IPEndPoint* value);

  constexpr ::StringW& __get__Token_k__BackingField();

  constexpr ::StringW const& __get__Token_k__BackingField() const;

  constexpr void __set__Token_k__BackingField(::StringW value);

  /// @brief Method get_Internal, addr 0x21fbda8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::IPEndPoint* get_Internal();

  /// @brief Method set_Internal, addr 0x21fbdb0, size 0x8, virtual false, abstract: false, final false
  inline void set_Internal(::System::Net::IPEndPoint* value);

  /// @brief Method get_Token, addr 0x21fbdb8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Token();

  /// @brief Method set_Token, addr 0x21fbdc0, size 0x8, virtual false, abstract: false, final false
  inline void set_Token(::StringW value);

  static inline ::LiteNetLib::__NatPunchModule__NatIntroduceRequestPacket* New_ctor();

  /// @brief Method .ctor, addr 0x21fb654, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__NatPunchModule__NatIntroduceRequestPacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NatPunchModule__NatIntroduceRequestPacket(__NatPunchModule__NatIntroduceRequestPacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NatPunchModule__NatIntroduceRequestPacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NatPunchModule__NatIntroduceRequestPacket(__NatPunchModule__NatIntroduceRequestPacket const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NatPunchModule__NatIntroduceRequestPacket();

public:
  /// @brief Field <Internal>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Net::IPEndPoint* ____Internal_k__BackingField;

  /// @brief Field <Token>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Token_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::__NatPunchModule__NatIntroduceRequestPacket, 0x20>, "Size mismatch!");

static_assert(offsetof(::LiteNetLib::__NatPunchModule__NatIntroduceRequestPacket, ____Internal_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::__NatPunchModule__NatIntroduceRequestPacket, ____Token_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace LiteNetLib
// Type: ::NatIntroduceResponsePacket
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace LiteNetLib {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14152))
// CS Name: ::NatPunchModule::NatIntroduceResponsePacket*
class CORDL_TYPE __NatPunchModule__NatIntroduceResponsePacket : public ::System::Object {
public:
  // Declarations
  /// @brief Field <Internal>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__Internal_k__BackingField, put = __set__Internal_k__BackingField))::System::Net::IPEndPoint* _Internal_k__BackingField;

  /// @brief Field <External>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __get__External_k__BackingField, put = __set__External_k__BackingField))::System::Net::IPEndPoint* _External_k__BackingField;

  /// @brief Field <Token>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __get__Token_k__BackingField, put = __set__Token_k__BackingField))::StringW _Token_k__BackingField;

  __declspec(property(get = get_Internal, put = set_Internal))::System::Net::IPEndPoint* Internal;

  __declspec(property(get = get_External, put = set_External))::System::Net::IPEndPoint* External;

  __declspec(property(get = get_Token, put = set_Token))::StringW Token;

  constexpr ::System::Net::IPEndPoint*& __get__Internal_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::IPEndPoint*> const& __get__Internal_k__BackingField() const;

  constexpr void __set__Internal_k__BackingField(::System::Net::IPEndPoint* value);

  constexpr ::System::Net::IPEndPoint*& __get__External_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::IPEndPoint*> const& __get__External_k__BackingField() const;

  constexpr void __set__External_k__BackingField(::System::Net::IPEndPoint* value);

  constexpr ::StringW& __get__Token_k__BackingField();

  constexpr ::StringW const& __get__Token_k__BackingField() const;

  constexpr void __set__Token_k__BackingField(::StringW value);

  /// @brief Method get_Internal, addr 0x21fbdc8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::IPEndPoint* get_Internal();

  /// @brief Method set_Internal, addr 0x21fbdd0, size 0x8, virtual false, abstract: false, final false
  inline void set_Internal(::System::Net::IPEndPoint* value);

  /// @brief Method get_External, addr 0x21fbdd8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::IPEndPoint* get_External();

  /// @brief Method set_External, addr 0x21fbde0, size 0x8, virtual false, abstract: false, final false
  inline void set_External(::System::Net::IPEndPoint* value);

  /// @brief Method get_Token, addr 0x21fbde8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Token();

  /// @brief Method set_Token, addr 0x21fbdf0, size 0x8, virtual false, abstract: false, final false
  inline void set_Token(::StringW value);

  static inline ::LiteNetLib::__NatPunchModule__NatIntroduceResponsePacket* New_ctor();

  /// @brief Method .ctor, addr 0x21fae7c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__NatPunchModule__NatIntroduceResponsePacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NatPunchModule__NatIntroduceResponsePacket(__NatPunchModule__NatIntroduceResponsePacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NatPunchModule__NatIntroduceResponsePacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NatPunchModule__NatIntroduceResponsePacket(__NatPunchModule__NatIntroduceResponsePacket const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NatPunchModule__NatIntroduceResponsePacket();

public:
  /// @brief Field <Internal>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Net::IPEndPoint* ____Internal_k__BackingField;

  /// @brief Field <External>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Net::IPEndPoint* ____External_k__BackingField;

  /// @brief Field <Token>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____Token_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::__NatPunchModule__NatIntroduceResponsePacket, 0x28>, "Size mismatch!");

static_assert(offsetof(::LiteNetLib::__NatPunchModule__NatIntroduceResponsePacket, ____Internal_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::__NatPunchModule__NatIntroduceResponsePacket, ____External_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::__NatPunchModule__NatIntroduceResponsePacket, ____Token_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace LiteNetLib
// Type: ::NatPunchPacket
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace LiteNetLib {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14153))
// CS Name: ::NatPunchModule::NatPunchPacket*
class CORDL_TYPE __NatPunchModule__NatPunchPacket : public ::System::Object {
public:
  // Declarations
  /// @brief Field <Token>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__Token_k__BackingField, put = __set__Token_k__BackingField))::StringW _Token_k__BackingField;

  /// @brief Field <IsExternal>k__BackingField, offset 0x18, size 0x1
  __declspec(property(get = __get__IsExternal_k__BackingField, put = __set__IsExternal_k__BackingField)) bool _IsExternal_k__BackingField;

  __declspec(property(get = get_Token, put = set_Token))::StringW Token;

  __declspec(property(get = get_IsExternal, put = set_IsExternal)) bool IsExternal;

  constexpr ::StringW& __get__Token_k__BackingField();

  constexpr ::StringW const& __get__Token_k__BackingField() const;

  constexpr void __set__Token_k__BackingField(::StringW value);

  constexpr bool& __get__IsExternal_k__BackingField();

  constexpr bool const& __get__IsExternal_k__BackingField() const;

  constexpr void __set__IsExternal_k__BackingField(bool value);

  /// @brief Method get_Token, addr 0x21fbdf8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Token();

  /// @brief Method set_Token, addr 0x21fbe00, size 0x8, virtual false, abstract: false, final false
  inline void set_Token(::StringW value);

  /// @brief Method get_IsExternal, addr 0x21fbe08, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsExternal();

  /// @brief Method set_IsExternal, addr 0x21fbe10, size 0xc, virtual false, abstract: false, final false
  inline void set_IsExternal(bool value);

  static inline ::LiteNetLib::__NatPunchModule__NatPunchPacket* New_ctor();

  /// @brief Method .ctor, addr 0x21fb8d4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__NatPunchModule__NatPunchPacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NatPunchModule__NatPunchPacket(__NatPunchModule__NatPunchPacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NatPunchModule__NatPunchPacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NatPunchModule__NatPunchPacket(__NatPunchModule__NatPunchPacket const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NatPunchModule__NatPunchPacket();

public:
  /// @brief Field <Token>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Token_k__BackingField;

  /// @brief Field <IsExternal>k__BackingField, offset: 0x18, size: 0x1, def value: None
  bool ____IsExternal_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::__NatPunchModule__NatPunchPacket, 0x20>, "Size mismatch!");

static_assert(offsetof(::LiteNetLib::__NatPunchModule__NatPunchPacket, ____Token_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::__NatPunchModule__NatPunchPacket, ____IsExternal_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace LiteNetLib
// Type: LiteNetLib::NatPunchModule
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace LiteNetLib {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14154))
// CS Name: ::LiteNetLib::NatPunchModule*
class CORDL_TYPE NatPunchModule : public ::System::Object {
public:
  // Declarations
  using NatPunchPacket = ::LiteNetLib::__NatPunchModule__NatPunchPacket;

  using NatIntroduceResponsePacket = ::LiteNetLib::__NatPunchModule__NatIntroduceResponsePacket;

  using NatIntroduceRequestPacket = ::LiteNetLib::__NatPunchModule__NatIntroduceRequestPacket;

  using SuccessEventData = ::LiteNetLib::__NatPunchModule__SuccessEventData;

  using RequestEventData = ::LiteNetLib::__NatPunchModule__RequestEventData;

  /// @brief Field _socket, offset 0x10, size 0x8
  __declspec(property(get = __get__socket, put = __set__socket))::LiteNetLib::NetSocket* _socket;

  /// @brief Field _requestEvents, offset 0x18, size 0x8
  __declspec(property(get = __get__requestEvents, put = __set__requestEvents))::System::Collections::Generic::Queue_1<::LiteNetLib::__NatPunchModule__RequestEventData>* _requestEvents;

  /// @brief Field _successEvents, offset 0x20, size 0x8
  __declspec(property(get = __get__successEvents, put = __set__successEvents))::System::Collections::Generic::Queue_1<::LiteNetLib::__NatPunchModule__SuccessEventData>* _successEvents;

  /// @brief Field _cacheReader, offset 0x28, size 0x8
  __declspec(property(get = __get__cacheReader, put = __set__cacheReader))::LiteNetLib::Utils::NetDataReader* _cacheReader;

  /// @brief Field _cacheWriter, offset 0x30, size 0x8
  __declspec(property(get = __get__cacheWriter, put = __set__cacheWriter))::LiteNetLib::Utils::NetDataWriter* _cacheWriter;

  /// @brief Field _netPacketProcessor, offset 0x38, size 0x8
  __declspec(property(get = __get__netPacketProcessor, put = __set__netPacketProcessor))::LiteNetLib::Utils::NetPacketProcessor* _netPacketProcessor;

  /// @brief Field _natPunchListener, offset 0x40, size 0x8
  __declspec(property(get = __get__natPunchListener, put = __set__natPunchListener))::LiteNetLib::INatPunchListener* _natPunchListener;

  constexpr ::LiteNetLib::NetSocket*& __get__socket();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::NetSocket*> const& __get__socket() const;

  constexpr void __set__socket(::LiteNetLib::NetSocket* value);

  constexpr ::System::Collections::Generic::Queue_1<::LiteNetLib::__NatPunchModule__RequestEventData>*& __get__requestEvents();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<::LiteNetLib::__NatPunchModule__RequestEventData>*> const& __get__requestEvents() const;

  constexpr void __set__requestEvents(::System::Collections::Generic::Queue_1<::LiteNetLib::__NatPunchModule__RequestEventData>* value);

  constexpr ::System::Collections::Generic::Queue_1<::LiteNetLib::__NatPunchModule__SuccessEventData>*& __get__successEvents();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<::LiteNetLib::__NatPunchModule__SuccessEventData>*> const& __get__successEvents() const;

  constexpr void __set__successEvents(::System::Collections::Generic::Queue_1<::LiteNetLib::__NatPunchModule__SuccessEventData>* value);

  constexpr ::LiteNetLib::Utils::NetDataReader*& __get__cacheReader();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::Utils::NetDataReader*> const& __get__cacheReader() const;

  constexpr void __set__cacheReader(::LiteNetLib::Utils::NetDataReader* value);

  constexpr ::LiteNetLib::Utils::NetDataWriter*& __get__cacheWriter();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::Utils::NetDataWriter*> const& __get__cacheWriter() const;

  constexpr void __set__cacheWriter(::LiteNetLib::Utils::NetDataWriter* value);

  constexpr ::LiteNetLib::Utils::NetPacketProcessor*& __get__netPacketProcessor();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::Utils::NetPacketProcessor*> const& __get__netPacketProcessor() const;

  constexpr void __set__netPacketProcessor(::LiteNetLib::Utils::NetPacketProcessor* value);

  constexpr ::LiteNetLib::INatPunchListener*& __get__natPunchListener();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::INatPunchListener*> const& __get__natPunchListener() const;

  constexpr void __set__natPunchListener(::LiteNetLib::INatPunchListener* value);

  static inline ::LiteNetLib::NatPunchModule* New_ctor(::LiteNetLib::NetSocket* socket);

  /// @brief Method .ctor, addr 0x21fa9b4, size 0x2c4, virtual false, abstract: false, final false
  inline void _ctor(::LiteNetLib::NetSocket* socket);

  /// @brief Method ProcessMessage, addr 0x21fac8c, size 0x10c, virtual false, abstract: false, final false
  inline void ProcessMessage(::System::Net::IPEndPoint* senderEndPoint, ::LiteNetLib::NetPacket* packet);

  /// @brief Method Init, addr 0x21fada8, size 0x8, virtual false, abstract: false, final false
  inline void Init(::LiteNetLib::INatPunchListener* listener);

  /// @brief Method Send, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void Send(T packet, ::System::Net::IPEndPoint* target);

  /// @brief Method NatIntroduce, addr 0x21fadb0, size 0xcc, virtual false, abstract: false, final false
  inline void NatIntroduce(::System::Net::IPEndPoint* hostInternal, ::System::Net::IPEndPoint* hostExternal, ::System::Net::IPEndPoint* clientInternal, ::System::Net::IPEndPoint* clientExternal,
                           ::StringW additionalInfo);

  /// @brief Method PollEvents, addr 0x21fae84, size 0x36c, virtual false, abstract: false, final false
  inline void PollEvents();

  /// @brief Method SendNatIntroduceRequest, addr 0x21fb1f0, size 0x84, virtual false, abstract: false, final false
  inline void SendNatIntroduceRequest(::StringW host, int32_t port, ::StringW additionalInfo);

  /// @brief Method SendNatIntroduceRequest, addr 0x21fb31c, size 0x11c, virtual false, abstract: false, final false
  inline void SendNatIntroduceRequest(::System::Net::IPEndPoint* masterServerEndPoint, ::StringW additionalInfo);

  /// @brief Method OnNatIntroductionRequest, addr 0x21fb65c, size 0x120, virtual false, abstract: false, final false
  inline void OnNatIntroductionRequest(::LiteNetLib::__NatPunchModule__NatIntroduceRequestPacket* req, ::System::Net::IPEndPoint* senderEndPoint);

  /// @brief Method OnNatIntroductionResponse, addr 0x21fb77c, size 0x158, virtual false, abstract: false, final false
  inline void OnNatIntroductionResponse(::LiteNetLib::__NatPunchModule__NatIntroduceResponsePacket* req);

  /// @brief Method OnNatPunch, addr 0x21fbc58, size 0x150, virtual false, abstract: false, final false
  inline void OnNatPunch(::LiteNetLib::__NatPunchModule__NatPunchPacket* req, ::System::Net::IPEndPoint* senderEndPoint);

  // Ctor Parameters [CppParam { name: "", ty: "NatPunchModule", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NatPunchModule(NatPunchModule&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NatPunchModule", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NatPunchModule(NatPunchModule const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NatPunchModule();

public:
  /// @brief Field _socket, offset: 0x10, size: 0x8, def value: None
  ::LiteNetLib::NetSocket* ____socket;

  /// @brief Field _requestEvents, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Queue_1<::LiteNetLib::__NatPunchModule__RequestEventData>* ____requestEvents;

  /// @brief Field _successEvents, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Queue_1<::LiteNetLib::__NatPunchModule__SuccessEventData>* ____successEvents;

  /// @brief Field _cacheReader, offset: 0x28, size: 0x8, def value: None
  ::LiteNetLib::Utils::NetDataReader* ____cacheReader;

  /// @brief Field _cacheWriter, offset: 0x30, size: 0x8, def value: None
  ::LiteNetLib::Utils::NetDataWriter* ____cacheWriter;

  /// @brief Field _netPacketProcessor, offset: 0x38, size: 0x8, def value: None
  ::LiteNetLib::Utils::NetPacketProcessor* ____netPacketProcessor;

  /// @brief Field _natPunchListener, offset: 0x40, size: 0x8, def value: None
  ::LiteNetLib::INatPunchListener* ____natPunchListener;

  /// @brief Field MaxTokenLength offset 0xffffffff size 0x4
  static constexpr int32_t MaxTokenLength{ static_cast<int32_t>(0x100) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::NatPunchModule, 0x48>, "Size mismatch!");

static_assert(offsetof(::LiteNetLib::NatPunchModule, ____socket) == 0x10, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NatPunchModule, ____requestEvents) == 0x18, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NatPunchModule, ____successEvents) == 0x20, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NatPunchModule, ____cacheReader) == 0x28, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NatPunchModule, ____cacheWriter) == 0x30, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NatPunchModule, ____netPacketProcessor) == 0x38, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NatPunchModule, ____natPunchListener) == 0x40, "Offset mismatch!");

} // namespace LiteNetLib
NEED_NO_BOX(::LiteNetLib::NatPunchModule);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::NatPunchModule*, "LiteNetLib", "NatPunchModule");
NEED_NO_BOX(::LiteNetLib::__NatPunchModule__NatIntroduceRequestPacket);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::__NatPunchModule__NatIntroduceRequestPacket*, "LiteNetLib", "NatPunchModule/NatIntroduceRequestPacket");
NEED_NO_BOX(::LiteNetLib::__NatPunchModule__NatIntroduceResponsePacket);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::__NatPunchModule__NatIntroduceResponsePacket*, "LiteNetLib", "NatPunchModule/NatIntroduceResponsePacket");
NEED_NO_BOX(::LiteNetLib::__NatPunchModule__NatPunchPacket);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::__NatPunchModule__NatPunchPacket*, "LiteNetLib", "NatPunchModule/NatPunchPacket");
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::__NatPunchModule__RequestEventData, "LiteNetLib", "NatPunchModule/RequestEventData");
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::__NatPunchModule__SuccessEventData, "LiteNetLib", "NatPunchModule/SuccessEventData");
