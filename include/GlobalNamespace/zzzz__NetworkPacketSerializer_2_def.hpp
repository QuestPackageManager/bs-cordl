#pragma once
// IWYU pragma private; include "GlobalNamespace/NetworkPacketSerializer_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__INetworkPacketSerializer_1_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPacketSubSerializer_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkPacketSerializer_2)
namespace GlobalNamespace {
template <typename TData> class INetworkPacketSubSerializer_1;
}
namespace GlobalNamespace {
template <typename TType, typename TData, typename TPacket> class NetworkPacketSerializer_2___c__6_1;
}
namespace GlobalNamespace {
template <typename TType, typename TData> class NetworkPacketSerializer_2___c__DisplayClass10_0;
}
namespace GlobalNamespace {
template <typename TType, typename TData, typename TPacket> class NetworkPacketSerializer_2___c__DisplayClass4_0_1;
}
namespace GlobalNamespace {
template <typename TType, typename TData, typename TPacket> class NetworkPacketSerializer_2___c__DisplayClass5_0_1;
}
namespace GlobalNamespace {
template <typename TType, typename TData, typename TPacket> class NetworkPacketSerializer_2___c__DisplayClass7_0_1;
}
namespace GlobalNamespace {
template <typename TType, typename TData, typename TPacket> class NetworkPacketSerializer_2___c__DisplayClass8_0_1;
}
namespace LiteNetLib::Utils {
class INetSerializable;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
template <typename T1, typename T2, typename T3> class Action_3;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
template <typename T1, typename T2, typename T3, typename TResult> class Func_4;
}
namespace System {
class Type;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename TType, typename TData> class NetworkPacketSerializer_2;
}
namespace GlobalNamespace {
template <typename TType, typename TData, typename TPacket> class NetworkPacketSerializer_2___c__6_1;
}
namespace GlobalNamespace {
template <typename TType, typename TData> class NetworkPacketSerializer_2___c__DisplayClass10_0;
}
namespace GlobalNamespace {
template <typename TType, typename TData, typename TPacket> class NetworkPacketSerializer_2___c__DisplayClass4_0_1;
}
namespace GlobalNamespace {
template <typename TType, typename TData, typename TPacket> class NetworkPacketSerializer_2___c__DisplayClass5_0_1;
}
namespace GlobalNamespace {
template <typename TType, typename TData, typename TPacket> class NetworkPacketSerializer_2___c__DisplayClass7_0_1;
}
namespace GlobalNamespace {
template <typename TType, typename TData, typename TPacket> class NetworkPacketSerializer_2___c__DisplayClass8_0_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::NetworkPacketSerializer_2);
MARK_GEN_REF_PTR_T(::GlobalNamespace::NetworkPacketSerializer_2___c__6_1);
MARK_GEN_REF_PTR_T(::GlobalNamespace::NetworkPacketSerializer_2___c__DisplayClass10_0);
MARK_GEN_REF_PTR_T(::GlobalNamespace::NetworkPacketSerializer_2___c__DisplayClass4_0_1);
MARK_GEN_REF_PTR_T(::GlobalNamespace::NetworkPacketSerializer_2___c__DisplayClass5_0_1);
MARK_GEN_REF_PTR_T(::GlobalNamespace::NetworkPacketSerializer_2___c__DisplayClass7_0_1);
MARK_GEN_REF_PTR_T(::GlobalNamespace::NetworkPacketSerializer_2___c__DisplayClass8_0_1);
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template <typename TType, typename TData, typename TPacket>
// Is value type: false
// CS Name: NetworkPacketSerializer`2/<>c__6`1<TType,TData,TPacket>
class CORDL_TYPE NetworkPacketSerializer_2___c__6_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::NetworkPacketSerializer_2___c__6_1<TType, TData, TPacket>* __9;

  /// @brief Field <>9__6_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__6_0, put = setStaticF___9__6_0)) ::System::Func_2<TData, TPacket>* __9__6_0;

  static inline ::GlobalNamespace::NetworkPacketSerializer_2___c__6_1<TType, TData, TPacket>* New_ctor();

  /// @brief Method <RegisterCallback>b__6_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TPacket _RegisterCallback_b__6_0(TData data);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::NetworkPacketSerializer_2___c__6_1<TType, TData, TPacket>* getStaticF___9();

  static inline ::System::Func_2<TData, TPacket>* getStaticF___9__6_0();

  static inline void setStaticF___9(::GlobalNamespace::NetworkPacketSerializer_2___c__6_1<TType, TData, TPacket>* value);

  static inline void setStaticF___9__6_0(::System::Func_2<TData, TPacket>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetworkPacketSerializer_2___c__6_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NetworkPacketSerializer_2___c__6_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetworkPacketSerializer_2___c__6_1(NetworkPacketSerializer_2___c__6_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetworkPacketSerializer_2___c__6_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetworkPacketSerializer_2___c__6_1(NetworkPacketSerializer_2___c__6_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14902 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template <typename TType, typename TData>
// Is value type: false
// CS Name: NetworkPacketSerializer`2/<>c__DisplayClass10_0<TType,TData>
class CORDL_TYPE NetworkPacketSerializer_2___c__DisplayClass10_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field subSubSerializer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_subSubSerializer, put = __cordl_internal_set_subSubSerializer)) ::GlobalNamespace::INetworkPacketSubSerializer_1<TData>* subSubSerializer;

  static inline ::GlobalNamespace::NetworkPacketSerializer_2___c__DisplayClass10_0<TType, TData>* New_ctor();

  /// @brief Method <RegisterSubSerializer>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _RegisterSubSerializer_b__0(::LiteNetLib::Utils::NetDataReader* reader, int32_t size, TData data);

  constexpr ::GlobalNamespace::INetworkPacketSubSerializer_1<TData>* const& __cordl_internal_get_subSubSerializer() const;

  constexpr ::GlobalNamespace::INetworkPacketSubSerializer_1<TData>*& __cordl_internal_get_subSubSerializer();

  constexpr void __cordl_internal_set_subSubSerializer(::GlobalNamespace::INetworkPacketSubSerializer_1<TData>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetworkPacketSerializer_2___c__DisplayClass10_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NetworkPacketSerializer_2___c__DisplayClass10_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetworkPacketSerializer_2___c__DisplayClass10_0(NetworkPacketSerializer_2___c__DisplayClass10_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetworkPacketSerializer_2___c__DisplayClass10_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetworkPacketSerializer_2___c__DisplayClass10_0(NetworkPacketSerializer_2___c__DisplayClass10_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14903 };

  /// @brief Field subSubSerializer, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::INetworkPacketSubSerializer_1<TData>* ___subSubSerializer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template <typename TType, typename TData, typename TPacket>
// Is value type: false
// CS Name: NetworkPacketSerializer`2/<>c__DisplayClass4_0`1<TType,TData,TPacket>
class CORDL_TYPE NetworkPacketSerializer_2___c__DisplayClass4_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field callback, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_callback, put = __cordl_internal_set_callback)) ::System::Action_1<TPacket>* callback;

  static inline ::GlobalNamespace::NetworkPacketSerializer_2___c__DisplayClass4_0_1<TType, TData, TPacket>* New_ctor();

  /// @brief Method <RegisterCallback>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _RegisterCallback_b__0(TPacket packet, TData data);

  constexpr ::System::Action_1<TPacket>* const& __cordl_internal_get_callback() const;

  constexpr ::System::Action_1<TPacket>*& __cordl_internal_get_callback();

  constexpr void __cordl_internal_set_callback(::System::Action_1<TPacket>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetworkPacketSerializer_2___c__DisplayClass4_0_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NetworkPacketSerializer_2___c__DisplayClass4_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetworkPacketSerializer_2___c__DisplayClass4_0_1(NetworkPacketSerializer_2___c__DisplayClass4_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetworkPacketSerializer_2___c__DisplayClass4_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetworkPacketSerializer_2___c__DisplayClass4_0_1(NetworkPacketSerializer_2___c__DisplayClass4_0_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14904 };

  /// @brief Field callback, offset: 0x10, size: 0x8, def value: None
  ::System::Action_1<TPacket>* ___callback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template <typename TType, typename TData, typename TPacket>
// Is value type: false
// CS Name: NetworkPacketSerializer`2/<>c__DisplayClass5_0`1<TType,TData,TPacket>
class CORDL_TYPE NetworkPacketSerializer_2___c__DisplayClass5_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field callback, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_callback, put = __cordl_internal_set_callback)) ::System::Action_1<TPacket>* callback;

  /// @brief Field constructor, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_constructor, put = __cordl_internal_set_constructor)) ::System::Func_1<TPacket>* constructor;

  static inline ::GlobalNamespace::NetworkPacketSerializer_2___c__DisplayClass5_0_1<TType, TData, TPacket>* New_ctor();

  /// @brief Method <RegisterCallback>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _RegisterCallback_b__0(TPacket packet, TData data);

  /// @brief Method <RegisterCallback>b__1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TPacket _RegisterCallback_b__1(TData data);

  constexpr ::System::Action_1<TPacket>* const& __cordl_internal_get_callback() const;

  constexpr ::System::Action_1<TPacket>*& __cordl_internal_get_callback();

  constexpr ::System::Func_1<TPacket>* const& __cordl_internal_get_constructor() const;

  constexpr ::System::Func_1<TPacket>*& __cordl_internal_get_constructor();

  constexpr void __cordl_internal_set_callback(::System::Action_1<TPacket>* value);

  constexpr void __cordl_internal_set_constructor(::System::Func_1<TPacket>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetworkPacketSerializer_2___c__DisplayClass5_0_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NetworkPacketSerializer_2___c__DisplayClass5_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetworkPacketSerializer_2___c__DisplayClass5_0_1(NetworkPacketSerializer_2___c__DisplayClass5_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetworkPacketSerializer_2___c__DisplayClass5_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetworkPacketSerializer_2___c__DisplayClass5_0_1(NetworkPacketSerializer_2___c__DisplayClass5_0_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14905 };

  /// @brief Field callback, offset: 0x10, size: 0x8, def value: None
  ::System::Action_1<TPacket>* ___callback;

  /// @brief Field constructor, offset: 0x18, size: 0x8, def value: None
  ::System::Func_1<TPacket>* ___constructor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template <typename TType, typename TData, typename TPacket>
// Is value type: false
// CS Name: NetworkPacketSerializer`2/<>c__DisplayClass7_0`1<TType,TData,TPacket>
class CORDL_TYPE NetworkPacketSerializer_2___c__DisplayClass7_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field constructor, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_constructor, put = __cordl_internal_set_constructor)) ::System::Func_1<TPacket>* constructor;

  static inline ::GlobalNamespace::NetworkPacketSerializer_2___c__DisplayClass7_0_1<TType, TData, TPacket>* New_ctor();

  /// @brief Method <RegisterCallback>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TPacket _RegisterCallback_b__0(TData data);

  constexpr ::System::Func_1<TPacket>* const& __cordl_internal_get_constructor() const;

  constexpr ::System::Func_1<TPacket>*& __cordl_internal_get_constructor();

  constexpr void __cordl_internal_set_constructor(::System::Func_1<TPacket>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetworkPacketSerializer_2___c__DisplayClass7_0_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NetworkPacketSerializer_2___c__DisplayClass7_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetworkPacketSerializer_2___c__DisplayClass7_0_1(NetworkPacketSerializer_2___c__DisplayClass7_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetworkPacketSerializer_2___c__DisplayClass7_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetworkPacketSerializer_2___c__DisplayClass7_0_1(NetworkPacketSerializer_2___c__DisplayClass7_0_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14906 };

  /// @brief Field constructor, offset: 0x10, size: 0x8, def value: None
  ::System::Func_1<TPacket>* ___constructor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template <typename TType, typename TData, typename TPacket>
// Is value type: false
// CS Name: NetworkPacketSerializer`2/<>c__DisplayClass8_0`1<TType,TData,TPacket>
class CORDL_TYPE NetworkPacketSerializer_2___c__DisplayClass8_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field callback, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_callback, put = __cordl_internal_set_callback)) ::System::Action_2<TPacket, TData>* callback;

  /// @brief Field constructor, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_constructor, put = __cordl_internal_set_constructor)) ::System::Func_2<TData, TPacket>* constructor;

  /// @brief Field deserialize, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_deserialize, put = __cordl_internal_set_deserialize)) ::System::Func_4<::LiteNetLib::Utils::NetDataReader*, int32_t, TData, TPacket>* deserialize;

  static inline ::GlobalNamespace::NetworkPacketSerializer_2___c__DisplayClass8_0_1<TType, TData, TPacket>* New_ctor();

  /// @brief Method <RegisterCallback>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TPacket _RegisterCallback_b__0(::LiteNetLib::Utils::NetDataReader* reader, int32_t size, TData data);

  /// @brief Method <RegisterCallback>b__1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _RegisterCallback_b__1(::LiteNetLib::Utils::NetDataReader* reader, int32_t size, TData data);

  constexpr ::System::Action_2<TPacket, TData>* const& __cordl_internal_get_callback() const;

  constexpr ::System::Action_2<TPacket, TData>*& __cordl_internal_get_callback();

  constexpr ::System::Func_2<TData, TPacket>* const& __cordl_internal_get_constructor() const;

  constexpr ::System::Func_2<TData, TPacket>*& __cordl_internal_get_constructor();

  constexpr ::System::Func_4<::LiteNetLib::Utils::NetDataReader*, int32_t, TData, TPacket>* const& __cordl_internal_get_deserialize() const;

  constexpr ::System::Func_4<::LiteNetLib::Utils::NetDataReader*, int32_t, TData, TPacket>*& __cordl_internal_get_deserialize();

  constexpr void __cordl_internal_set_callback(::System::Action_2<TPacket, TData>* value);

  constexpr void __cordl_internal_set_constructor(::System::Func_2<TData, TPacket>* value);

  constexpr void __cordl_internal_set_deserialize(::System::Func_4<::LiteNetLib::Utils::NetDataReader*, int32_t, TData, TPacket>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetworkPacketSerializer_2___c__DisplayClass8_0_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NetworkPacketSerializer_2___c__DisplayClass8_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetworkPacketSerializer_2___c__DisplayClass8_0_1(NetworkPacketSerializer_2___c__DisplayClass8_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetworkPacketSerializer_2___c__DisplayClass8_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetworkPacketSerializer_2___c__DisplayClass8_0_1(NetworkPacketSerializer_2___c__DisplayClass8_0_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14907 };

  /// @brief Field constructor, offset: 0x10, size: 0x8, def value: None
  ::System::Func_2<TData, TPacket>* ___constructor;

  /// @brief Field callback, offset: 0x18, size: 0x8, def value: None
  ::System::Action_2<TPacket, TData>* ___callback;

  /// @brief Field deserialize, offset: 0x20, size: 0x8, def value: None
  ::System::Func_4<::LiteNetLib::Utils::NetDataReader*, int32_t, TData, TPacket>* ___deserialize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies INetworkPacketSerializer`1<TData>, INetworkPacketSubSerializer`1<TData>, System.Object
namespace GlobalNamespace {
// cpp template
template <typename TType, typename TData>
// Is value type: false
// CS Name: NetworkPacketSerializer`2<TType,TData>
class CORDL_TYPE NetworkPacketSerializer_2 : public ::System::Object {
public:
  // Declarations
  template <typename TPacket> using __c__6_1 = ::GlobalNamespace::NetworkPacketSerializer_2___c__6_1<TType, TData, TPacket>;

  using __c__DisplayClass10_0 = ::GlobalNamespace::NetworkPacketSerializer_2___c__DisplayClass10_0<TType, TData>;

  template <typename TPacket> using __c__DisplayClass4_0_1 = ::GlobalNamespace::NetworkPacketSerializer_2___c__DisplayClass4_0_1<TType, TData, TPacket>;

  template <typename TPacket> using __c__DisplayClass5_0_1 = ::GlobalNamespace::NetworkPacketSerializer_2___c__DisplayClass5_0_1<TType, TData, TPacket>;

  template <typename TPacket> using __c__DisplayClass7_0_1 = ::GlobalNamespace::NetworkPacketSerializer_2___c__DisplayClass7_0_1<TType, TData, TPacket>;

  template <typename TPacket> using __c__DisplayClass8_0_1 = ::GlobalNamespace::NetworkPacketSerializer_2___c__DisplayClass8_0_1<TType, TData, TPacket>;

  /// @brief Field _internalWriter, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__internalWriter, put = __cordl_internal_set__internalWriter)) ::LiteNetLib::Utils::NetDataWriter* _internalWriter;

  /// @brief Field _messsageHandlers, offset 0x10, size 0x8
  __declspec(property(
      get = __cordl_internal_get__messsageHandlers,
      put = __cordl_internal_set__messsageHandlers)) ::System::Collections::Generic::Dictionary_2<uint8_t, ::System::Action_3<::LiteNetLib::Utils::NetDataReader*, int32_t, TData>*>* _messsageHandlers;

  /// @brief Field _subSerializerRegistry, offset 0x20, size 0x8
  __declspec(property(
      get = __cordl_internal_get__subSerializerRegistry,
      put = __cordl_internal_set__subSerializerRegistry)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::INetworkPacketSubSerializer_1<TData>*, uint8_t>* _subSerializerRegistry;

  /// @brief Field _typeRegistry, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__typeRegistry, put = __cordl_internal_set__typeRegistry)) ::System::Collections::Generic::Dictionary_2<::System::Type*, uint8_t>* _typeRegistry;

  /// @brief Convert operator to "::GlobalNamespace::INetworkPacketSerializer_1<TData>"
  constexpr operator ::GlobalNamespace::INetworkPacketSerializer_1<TData>*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::INetworkPacketSubSerializer_1<TData>"
  constexpr operator ::GlobalNamespace::INetworkPacketSubSerializer_1<TData>*() noexcept;

  /// @brief Method CopyFrom, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void CopyFrom(::GlobalNamespace::NetworkPacketSerializer_2<TType, TData>* other);

  /// @brief Method HandlesType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool HandlesType(::System::Type* type);

  /// @brief Method INetworkPacketSubSerializer<TData>.Deserialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void INetworkPacketSubSerializer_TData__Deserialize(::LiteNetLib::Utils::NetDataReader* reader, int32_t length, TData data);

  /// @brief Method INetworkPacketSubSerializer<TData>.Serialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void INetworkPacketSubSerializer_TData__Serialize(::LiteNetLib::Utils::NetDataWriter* writer, ::LiteNetLib::Utils::INetSerializable* packet);

  /// @brief Method Log, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Log(::StringW message);

  static inline ::GlobalNamespace::NetworkPacketSerializer_2<TType, TData>* New_ctor();

  /// @brief Method ProcessAllPackets, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void ProcessAllPackets(::LiteNetLib::Utils::NetDataReader* reader, TData data);

  /// @brief Method ProcessPacket, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool ProcessPacket(::LiteNetLib::Utils::NetDataReader* reader, TData data);

  /// @brief Method ProcessPacketInternal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ProcessPacketInternal(::LiteNetLib::Utils::NetDataReader* reader, int32_t length, TData data);

  /// @brief Method RegisterCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TPacket> inline void RegisterCallback(TType packetType, ::System::Action_1<TPacket>* callback);

  /// @brief Method RegisterCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TPacket> inline void RegisterCallback(TType packetType, ::System::Action_1<TPacket>* callback, ::System::Func_1<TPacket>* constructor);

  /// @brief Method RegisterCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TPacket> inline void RegisterCallback(TType packetType, ::System::Action_2<TPacket, TData>* callback);

  /// @brief Method RegisterCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TPacket> inline void RegisterCallback(TType packetType, ::System::Action_2<TPacket, TData>* callback, ::System::Func_1<TPacket>* constructor);

  /// @brief Method RegisterCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TPacket> inline void RegisterCallback(TType packetType, ::System::Action_2<TPacket, TData>* callback, ::System::Func_2<TData, TPacket>* constructor);

  /// @brief Method RegisterSubSerializer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void RegisterSubSerializer(TType packetType, ::GlobalNamespace::INetworkPacketSubSerializer_1<TData>* subSubSerializer);

  /// @brief Method SerializePacket, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void SerializePacket(::LiteNetLib::Utils::NetDataWriter* writer, ::LiteNetLib::Utils::INetSerializable* packet);

  /// @brief Method SerializePacketInternal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SerializePacketInternal(::LiteNetLib::Utils::NetDataWriter* externalWriter, ::LiteNetLib::Utils::INetSerializable* packet, bool prependLength);

  /// @brief Method TryGetPacketType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryGetPacketType(::System::Type* type, ::ByRef<uint8_t> packetType, ::ByRef<::GlobalNamespace::INetworkPacketSubSerializer_1<TData>*> subSerializer);

  /// @brief Method UnregisterCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TPacket> inline void UnregisterCallback(TType packetType);

  /// @brief Method UnregisterSubSerializer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void UnregisterSubSerializer(TType packetType, ::GlobalNamespace::INetworkPacketSubSerializer_1<TData>* subSubSerializer);

  constexpr ::LiteNetLib::Utils::NetDataWriter* const& __cordl_internal_get__internalWriter() const;

  constexpr ::LiteNetLib::Utils::NetDataWriter*& __cordl_internal_get__internalWriter();

  constexpr ::System::Collections::Generic::Dictionary_2<uint8_t, ::System::Action_3<::LiteNetLib::Utils::NetDataReader*, int32_t, TData>*>* const& __cordl_internal_get__messsageHandlers() const;

  constexpr ::System::Collections::Generic::Dictionary_2<uint8_t, ::System::Action_3<::LiteNetLib::Utils::NetDataReader*, int32_t, TData>*>*& __cordl_internal_get__messsageHandlers();

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::INetworkPacketSubSerializer_1<TData>*, uint8_t>* const& __cordl_internal_get__subSerializerRegistry() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::INetworkPacketSubSerializer_1<TData>*, uint8_t>*& __cordl_internal_get__subSerializerRegistry();

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, uint8_t>* const& __cordl_internal_get__typeRegistry() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, uint8_t>*& __cordl_internal_get__typeRegistry();

  constexpr void __cordl_internal_set__internalWriter(::LiteNetLib::Utils::NetDataWriter* value);

  constexpr void __cordl_internal_set__messsageHandlers(::System::Collections::Generic::Dictionary_2<uint8_t, ::System::Action_3<::LiteNetLib::Utils::NetDataReader*, int32_t, TData>*>* value);

  constexpr void __cordl_internal_set__subSerializerRegistry(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::INetworkPacketSubSerializer_1<TData>*, uint8_t>* value);

  constexpr void __cordl_internal_set__typeRegistry(::System::Collections::Generic::Dictionary_2<::System::Type*, uint8_t>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::GlobalNamespace::INetworkPacketSerializer_1<TData>"
  constexpr ::GlobalNamespace::INetworkPacketSerializer_1<TData>* i___GlobalNamespace__INetworkPacketSerializer_1_TData_() noexcept;

  /// @brief Convert to "::GlobalNamespace::INetworkPacketSubSerializer_1<TData>"
  constexpr ::GlobalNamespace::INetworkPacketSubSerializer_1<TData>* i___GlobalNamespace__INetworkPacketSubSerializer_1_TData_() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetworkPacketSerializer_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NetworkPacketSerializer_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetworkPacketSerializer_2(NetworkPacketSerializer_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetworkPacketSerializer_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetworkPacketSerializer_2(NetworkPacketSerializer_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14908 };

  /// @brief Field _messsageHandlers, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<uint8_t, ::System::Action_3<::LiteNetLib::Utils::NetDataReader*, int32_t, TData>*>* ____messsageHandlers;

  /// @brief Field _typeRegistry, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Type*, uint8_t>* ____typeRegistry;

  /// @brief Field _subSerializerRegistry, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::INetworkPacketSubSerializer_1<TData>*, uint8_t>* ____subSerializerRegistry;

  /// @brief Field _internalWriter, offset: 0x28, size: 0x8, def value: None
  ::LiteNetLib::Utils::NetDataWriter* ____internalWriter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::NetworkPacketSerializer_2, "", "NetworkPacketSerializer`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::NetworkPacketSerializer_2___c__6_1, "", "NetworkPacketSerializer`2/<>c__6`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::NetworkPacketSerializer_2___c__DisplayClass10_0, "", "NetworkPacketSerializer`2/<>c__DisplayClass10_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::NetworkPacketSerializer_2___c__DisplayClass4_0_1, "", "NetworkPacketSerializer`2/<>c__DisplayClass4_0`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::NetworkPacketSerializer_2___c__DisplayClass5_0_1, "", "NetworkPacketSerializer`2/<>c__DisplayClass5_0`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::NetworkPacketSerializer_2___c__DisplayClass7_0_1, "", "NetworkPacketSerializer`2/<>c__DisplayClass7_0`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::NetworkPacketSerializer_2___c__DisplayClass8_0_1, "", "NetworkPacketSerializer`2/<>c__DisplayClass8_0`1");
