#pragma once
// IWYU pragma private; include "GlobalNamespace/RemoteProcedureCall.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IPoolablePacket_def.hpp"
#include "GlobalNamespace/zzzz__IRemoteProcedureCall_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RemoteProcedureCall)
namespace GlobalNamespace {
class IRemoteProcedureCall;
}
namespace GlobalNamespace {
template <typename T> class RemoteProcedureCall_TypeWrapper_1;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
// Forward declare root types
namespace GlobalNamespace {
class RemoteProcedureCall;
}
namespace GlobalNamespace {
template <typename T> class RemoteProcedureCall_TypeWrapper_1;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RemoteProcedureCall);
MARK_GEN_REF_PTR_T(::GlobalNamespace::RemoteProcedureCall_TypeWrapper_1);
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: RemoteProcedureCall/TypeWrapper`1<T>
class CORDL_TYPE RemoteProcedureCall_TypeWrapper_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field _v, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__v, put = __cordl_internal_set__v)) T _v;

  __declspec(property(get = get_hasValue)) bool hasValue;

  __declspec(property(get = get_value)) T value;

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Deserialize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  static inline ::GlobalNamespace::RemoteProcedureCall_TypeWrapper_1<T>* New_ctor();

  /// @brief Method Release, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Release();

  /// @brief Method Serialize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method Set, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Set(T v);

  constexpr T const& __cordl_internal_get__v() const;

  constexpr T& __cordl_internal_get__v();

  constexpr void __cordl_internal_set__v(T value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_hasValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_hasValue();

  /// @brief Method get_value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T get_value();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RemoteProcedureCall_TypeWrapper_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RemoteProcedureCall_TypeWrapper_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RemoteProcedureCall_TypeWrapper_1(RemoteProcedureCall_TypeWrapper_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RemoteProcedureCall_TypeWrapper_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RemoteProcedureCall_TypeWrapper_1(RemoteProcedureCall_TypeWrapper_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14940 };

  /// @brief Field _v, offset: 0x10, size: 0x8, def value: None
  T ____v;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies IPoolablePacket, IRemoteProcedureCall, LiteNetLib.Utils.INetSerializable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: RemoteProcedureCall
class CORDL_TYPE RemoteProcedureCall : public ::System::Object {
public:
  // Declarations
  template <typename T> using TypeWrapper_1 = ::GlobalNamespace::RemoteProcedureCall_TypeWrapper_1<T>;

  /// @brief Field <syncTime>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__syncTime_k__BackingField, put = __cordl_internal_set__syncTime_k__BackingField)) int64_t _syncTime_k__BackingField;

  __declspec(property(get = get_syncTime, put = set_syncTime)) int64_t syncTime;

  /// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
  constexpr operator ::GlobalNamespace::IPoolablePacket*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IRemoteProcedureCall"
  constexpr operator ::GlobalNamespace::IRemoteProcedureCall*() noexcept;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Method DeserializeData, addr 0x22e231c, size 0x4, virtual true, abstract: false, final false
  inline void DeserializeData(::LiteNetLib::Utils::NetDataReader* reader, uint32_t protocolVersion);

  /// @brief Method Init, addr 0x22e24a4, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::IRemoteProcedureCall* Init(int64_t syncTime);

  /// @brief Method LiteNetLib.Utils.INetSerializable.Deserialize, addr 0x22e2364, size 0x40, virtual true, abstract: false, final true
  inline void LiteNetLib_Utils_INetSerializable_Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method LiteNetLib.Utils.INetSerializable.Serialize, addr 0x22e2320, size 0x44, virtual true, abstract: false, final true
  inline void LiteNetLib_Utils_INetSerializable_Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  static inline ::GlobalNamespace::RemoteProcedureCall* New_ctor();

  /// @brief Method Release, addr 0x22e23a4, size 0x4, virtual true, abstract: false, final false
  inline void Release();

  /// @brief Method SerializeData, addr 0x22e2318, size 0x4, virtual true, abstract: false, final false
  inline void SerializeData(::LiteNetLib::Utils::NetDataWriter* writer, uint32_t protocolVersion);

  constexpr int64_t const& __cordl_internal_get__syncTime_k__BackingField() const;

  constexpr int64_t& __cordl_internal_get__syncTime_k__BackingField();

  constexpr void __cordl_internal_set__syncTime_k__BackingField(int64_t value);

  /// @brief Method .ctor, addr 0x22d7120, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_syncTime, addr 0x22e2308, size 0x8, virtual true, abstract: false, final true
  inline int64_t get_syncTime();

  /// @brief Convert to "::GlobalNamespace::IPoolablePacket"
  constexpr ::GlobalNamespace::IPoolablePacket* i___GlobalNamespace__IPoolablePacket() noexcept;

  /// @brief Convert to "::GlobalNamespace::IRemoteProcedureCall"
  constexpr ::GlobalNamespace::IRemoteProcedureCall* i___GlobalNamespace__IRemoteProcedureCall() noexcept;

  /// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
  constexpr ::LiteNetLib::Utils::INetSerializable* i___LiteNetLib__Utils__INetSerializable() noexcept;

  /// @brief Method set_syncTime, addr 0x22e2310, size 0x8, virtual false, abstract: false, final false
  inline void set_syncTime(int64_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RemoteProcedureCall();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RemoteProcedureCall", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RemoteProcedureCall(RemoteProcedureCall&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RemoteProcedureCall", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RemoteProcedureCall(RemoteProcedureCall const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14941 };

  /// @brief Field <syncTime>k__BackingField, offset: 0x10, size: 0x8, def value: None
  int64_t ____syncTime_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RemoteProcedureCall, ____syncTime_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RemoteProcedureCall, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RemoteProcedureCall);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RemoteProcedureCall*, "", "RemoteProcedureCall");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::RemoteProcedureCall_TypeWrapper_1, "", "RemoteProcedureCall/TypeWrapper`1");
