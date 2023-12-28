#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RemoteProcedureCall)
namespace LiteNetLib::Utils {
class INetSerializable;
}
namespace GlobalNamespace {
class IPoolablePacket;
}
namespace GlobalNamespace {
template <typename T> class __RemoteProcedureCall__TypeWrapper_1;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace GlobalNamespace {
class IRemoteProcedureCall;
}
// Forward declare root types
namespace GlobalNamespace {
class RemoteProcedureCall;
}
namespace GlobalNamespace {
template <typename T> class __RemoteProcedureCall__TypeWrapper_1;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RemoteProcedureCall);
MARK_GEN_REF_PTR_T(::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1);
// Type: ::TypeWrapper`1
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12935))
// CS Name: ::RemoteProcedureCall::TypeWrapper`1<T>*
class CORDL_TYPE __RemoteProcedureCall__TypeWrapper_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field _v, offset 0x10, size 0x8
  __declspec(property(get = __get__v, put = __set__v)) T _v;

  __declspec(property(get = get_hasValue)) bool hasValue;

  __declspec(property(get = get_value)) T value;

  constexpr T& __get__v();

  constexpr T const& __get__v() const;

  constexpr void __set__v(T value);

  /// @brief Method get_hasValue addr 0x0 size 0xffffffffffffffff virtual false final false
  inline bool get_hasValue();

  /// @brief Method get_value addr 0x0 size 0xffffffffffffffff virtual false final false
  inline T get_value();

  /// @brief Method Set addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void Set(T v);

  /// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void Clear();

  /// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void Release();

  /// @brief Method Serialize addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method Deserialize addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  static inline ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__RemoteProcedureCall__TypeWrapper_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RemoteProcedureCall__TypeWrapper_1(__RemoteProcedureCall__TypeWrapper_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RemoteProcedureCall__TypeWrapper_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RemoteProcedureCall__TypeWrapper_1(__RemoteProcedureCall__TypeWrapper_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RemoteProcedureCall__TypeWrapper_1();

public:
  /// @brief Field _v, offset: 0x10, size: 0x8, def value: None
  T ____v;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::RemoteProcedureCall
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12936))
// CS Name: ::RemoteProcedureCall*
class CORDL_TYPE RemoteProcedureCall : public ::System::Object {
public:
  // Declarations
  template <typename T> using TypeWrapper_1 = ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T>;

  /// @brief Field <syncTime>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__syncTime_k__BackingField, put = __set__syncTime_k__BackingField)) int64_t _syncTime_k__BackingField;

  __declspec(property(get = get_syncTime, put = set_syncTime)) int64_t syncTime;

  /// @brief Convert operator to "::GlobalNamespace::IRemoteProcedureCall"
  constexpr operator ::GlobalNamespace::IRemoteProcedureCall*() noexcept;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
  constexpr operator ::GlobalNamespace::IPoolablePacket*() noexcept;

  constexpr int64_t& __get__syncTime_k__BackingField();

  constexpr int64_t const& __get__syncTime_k__BackingField() const;

  constexpr void __set__syncTime_k__BackingField(int64_t value);

  /// @brief Method get_syncTime addr 0xe543f4 size 0x8 virtual true final true
  inline int64_t get_syncTime();

  /// @brief Method set_syncTime addr 0xe543fc size 0x8 virtual false final false
  inline void set_syncTime(int64_t value);

  /// @brief Method SerializeData addr 0xe54404 size 0x4 virtual true final false
  inline void SerializeData(::LiteNetLib::Utils::NetDataWriter* writer, uint32_t protocolVersion);

  /// @brief Method DeserializeData addr 0xe54408 size 0x4 virtual true final false
  inline void DeserializeData(::LiteNetLib::Utils::NetDataReader* reader, uint32_t protocolVersion);

  /// @brief Method LiteNetLib.Utils.INetSerializable.Serialize addr 0xe5440c size 0x44 virtual true final true
  inline void LiteNetLib_Utils_INetSerializable_Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method LiteNetLib.Utils.INetSerializable.Deserialize addr 0xe54450 size 0x40 virtual true final true
  inline void LiteNetLib_Utils_INetSerializable_Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Release addr 0xe54490 size 0x4 virtual true final false
  inline void Release();

  /// @brief Method Init addr 0xe54590 size 0x8 virtual false final false
  inline ::GlobalNamespace::IRemoteProcedureCall* Init(int64_t syncTime);

  static inline ::GlobalNamespace::RemoteProcedureCall* New_ctor();

  /// @brief Method .ctor addr 0xe49244 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "RemoteProcedureCall", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RemoteProcedureCall(RemoteProcedureCall&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RemoteProcedureCall", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RemoteProcedureCall(RemoteProcedureCall const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RemoteProcedureCall();

public:
  /// @brief Field <syncTime>k__BackingField, offset: 0x10, size: 0x8, def value: None
  int64_t ____syncTime_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RemoteProcedureCall, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RemoteProcedureCall);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RemoteProcedureCall*, "", "RemoteProcedureCall");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1, "", "RemoteProcedureCall/TypeWrapper`1");
