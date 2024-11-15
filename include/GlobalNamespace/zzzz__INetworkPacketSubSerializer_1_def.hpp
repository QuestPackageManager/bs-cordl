#pragma once
// IWYU pragma private; include "GlobalNamespace/INetworkPacketSubSerializer_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(INetworkPacketSubSerializer_1)
namespace LiteNetLib::Utils {
class INetSerializable;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace System {
class Type;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename TData> class INetworkPacketSubSerializer_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::INetworkPacketSubSerializer_1);
// Type: ::INetworkPacketSubSerializer`1
// SizeInfo { instance_size: 0, native_size: 0, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename TData>
// Is value type: false
// CS Name: ::INetworkPacketSubSerializer`1<TData>*
class CORDL_TYPE INetworkPacketSubSerializer_1 {
public:
  // Declarations
  /// @brief Method Deserialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader, int32_t length, TData data);

  /// @brief Method HandlesType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool HandlesType(::System::Type* type);

  /// @brief Method Serialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer, ::LiteNetLib::Utils::INetSerializable* packet);

  // Ctor Parameters [CppParam { name: "", ty: "INetworkPacketSubSerializer_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  INetworkPacketSubSerializer_1(INetworkPacketSubSerializer_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "INetworkPacketSubSerializer_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  INetworkPacketSubSerializer_1(INetworkPacketSubSerializer_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14862 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::INetworkPacketSubSerializer_1, "", "INetworkPacketSubSerializer`1");
