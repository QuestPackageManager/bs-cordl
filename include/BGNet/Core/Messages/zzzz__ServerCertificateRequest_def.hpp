#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGNet/Core/Messages/zzzz__BaseReliableResponse_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ServerCertificateRequest)
namespace BGNet::Core::Messages {
class IUnconnectedMessage;
}
namespace GlobalNamespace {
class IPoolablePacket;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace BGNet::Core::Messages {
class IHandshakeServerToClientMessage;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace BGNet::Core::Messages {
class IHandshakeMessage;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class INetSerializable;
}
namespace GlobalNamespace {
class ByteArrayNetSerializable;
}
namespace BGNet::Core::Messages {
class __ServerCertificateRequest___get_certificateList_d__5;
}
namespace GlobalNamespace {
template <typename T> class PacketPool_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
// Forward declare root types
namespace BGNet::Core::Messages {
class ServerCertificateRequest;
}
namespace BGNet::Core::Messages {
class __ServerCertificateRequest___get_certificateList_d__5;
}
// Write type traits
MARK_REF_PTR_T(::BGNet::Core::Messages::ServerCertificateRequest);
MARK_REF_PTR_T(::BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5);
// Type: ::<get_certificateList>d__5
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGNet::Core::Messages {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12973))
// CS Name: ::ServerCertificateRequest::<get_certificateList>d__5*
class CORDL_TYPE __ServerCertificateRequest___get_certificateList_d__5 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::ArrayW<uint8_t, ::Array<uint8_t>*> __2__current;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __get___l__initialThreadId, put = __set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::BGNet::Core::Messages::ServerCertificateRequest* __4__this;

  /// @brief Field <i>5__2, offset 0x30, size 0x4
  __declspec(property(get = __get__i_5__2, put = __set__i_5__2)) int32_t _i_5__2;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Byte____get_Current))::ArrayW<uint8_t, ::Array<uint8_t>*> System_Collections_Generic_IEnumerator_System_Byte____Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::ArrayW<uint8_t,::Array<uint8_t>*>>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::ArrayW<uint8_t,::Array<uint8_t>*>>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get___2__current();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get___2__current() const;

  constexpr void __set___2__current(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __get___l__initialThreadId();

  constexpr int32_t const& __get___l__initialThreadId() const;

  constexpr void __set___l__initialThreadId(int32_t value);

  constexpr ::BGNet::Core::Messages::ServerCertificateRequest*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::BGNet::Core::Messages::ServerCertificateRequest*> const& __get___4__this() const;

  constexpr void __set___4__this(::BGNet::Core::Messages::ServerCertificateRequest* value);

  constexpr int32_t& __get__i_5__2();

  constexpr int32_t const& __get__i_5__2() const;

  constexpr void __set__i_5__2(int32_t value);

  static inline ::BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0xde32a0 size 0x34 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0xde398c size 0x4 virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0xde3990 size 0x9c virtual true final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Byte[]>.get_Current addr 0xde3a2c size 0x8 virtual true final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System_Collections_Generic_IEnumerator_System_Byte____get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0xde3a34 size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0xde3a74 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.Collections.Generic.IEnumerable<System.Byte[]>.GetEnumerator addr 0xde3a7c size 0xa4 virtual true final true
  inline ::System::Collections::Generic::IEnumerator_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* System_Collections_Generic_IEnumerable_System_Byte____GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0xde3b20 size 0x4 virtual true final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  // Ctor Parameters [CppParam { name: "", ty: "__ServerCertificateRequest___get_certificateList_d__5", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ServerCertificateRequest___get_certificateList_d__5(__ServerCertificateRequest___get_certificateList_d__5&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ServerCertificateRequest___get_certificateList_d__5", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ServerCertificateRequest___get_certificateList_d__5(__ServerCertificateRequest___get_certificateList_d__5 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ServerCertificateRequest___get_certificateList_d__5();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::BGNet::Core::Messages::ServerCertificateRequest* _____4__this;

  /// @brief Field <i>5__2, offset: 0x30, size: 0x4, def value: None
  int32_t ____i_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5, 0x38>, "Size mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5, ____i_5__2) == 0x30, "Offset mismatch!");

} // namespace BGNet::Core::Messages
// Type: BGNet.Core.Messages::ServerCertificateRequest
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGNet::Core::Messages {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12954))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12974))
// CS Name: ::BGNet.Core.Messages::ServerCertificateRequest*
class CORDL_TYPE ServerCertificateRequest : public ::BGNet::Core::Messages::BaseReliableResponse {
public:
  // Declarations
  using _get_certificateList_d__5 = ::BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5;

  /// @brief Field _certificateList, offset 0x18, size 0x8
  __declspec(property(get = __get__certificateList,
                      put = __set__certificateList))::ArrayW<::GlobalNamespace::ByteArrayNetSerializable*, ::Array<::GlobalNamespace::ByteArrayNetSerializable*>*> _certificateList;

  /// @brief Field _certificateCount, offset 0x20, size 0x4
  __declspec(property(get = __get__certificateCount, put = __set__certificateCount)) int32_t _certificateCount;

  __declspec(property(get = get_certificateList))::System::Collections::Generic::IEnumerable_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* certificateList;

  /// @brief Convert operator to "::BGNet::Core::Messages::IHandshakeServerToClientMessage"
  constexpr operator ::BGNet::Core::Messages::IHandshakeServerToClientMessage*() noexcept;

  /// @brief Convert operator to "::BGNet::Core::Messages::IHandshakeMessage"
  constexpr operator ::BGNet::Core::Messages::IHandshakeMessage*() noexcept;

  /// @brief Convert operator to "::BGNet::Core::Messages::IUnconnectedMessage"
  constexpr operator ::BGNet::Core::Messages::IUnconnectedMessage*() noexcept;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
  constexpr operator ::GlobalNamespace::IPoolablePacket*() noexcept;

  constexpr ::ArrayW<::GlobalNamespace::ByteArrayNetSerializable*, ::Array<::GlobalNamespace::ByteArrayNetSerializable*>*>& __get__certificateList();

  constexpr ::ArrayW<::GlobalNamespace::ByteArrayNetSerializable*, ::Array<::GlobalNamespace::ByteArrayNetSerializable*>*> const& __get__certificateList() const;

  constexpr void __set__certificateList(::ArrayW<::GlobalNamespace::ByteArrayNetSerializable*, ::Array<::GlobalNamespace::ByteArrayNetSerializable*>*> value);

  constexpr int32_t& __get__certificateCount();

  constexpr int32_t const& __get__certificateCount() const;

  constexpr void __set__certificateCount(int32_t value);

  /// @brief Method get_pool addr 0xde00ac size 0x40 virtual false final false
  static inline ::GlobalNamespace::PacketPool_1<::BGNet::Core::Messages::ServerCertificateRequest*>* get_pool();

  /// @brief Method get_certificateList addr 0xdddb74 size 0x78 virtual false final false
  inline ::System::Collections::Generic::IEnumerable_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* get_certificateList();

  /// @brief Method Init addr 0xde1b34 size 0x3c0 virtual false final false
  inline ::BGNet::Core::Messages::ServerCertificateRequest* Init(::System::Collections::Generic::IEnumerable_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* certificateList);

  /// @brief Method Serialize addr 0xde32d4 size 0x84 virtual true final false
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method Deserialize addr 0xde3358 size 0x144 virtual true final false
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Release addr 0xde349c size 0xa0 virtual true final false
  inline void Release();

  static inline ::BGNet::Core::Messages::ServerCertificateRequest* New_ctor();

  /// @brief Method .ctor addr 0xde353c size 0x450 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ServerCertificateRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ServerCertificateRequest(ServerCertificateRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ServerCertificateRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ServerCertificateRequest(ServerCertificateRequest const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ServerCertificateRequest();

public:
  /// @brief Field _certificateList, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::ByteArrayNetSerializable*, ::Array<::GlobalNamespace::ByteArrayNetSerializable*>*> ____certificateList;

  /// @brief Field _certificateCount, offset: 0x20, size: 0x4, def value: None
  int32_t ____certificateCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Core::Messages::ServerCertificateRequest, 0x28>, "Size mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::ServerCertificateRequest, ____certificateList) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::ServerCertificateRequest, ____certificateCount) == 0x20, "Offset mismatch!");

} // namespace BGNet::Core::Messages
NEED_NO_BOX(::BGNet::Core::Messages::ServerCertificateRequest);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::ServerCertificateRequest*, "BGNet.Core.Messages", "ServerCertificateRequest");
NEED_NO_BOX(::BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::__ServerCertificateRequest___get_certificateList_d__5*, "BGNet.Core.Messages", "ServerCertificateRequest/<get_certificateList>d__5");
