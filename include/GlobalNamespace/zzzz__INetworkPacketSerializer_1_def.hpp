#pragma once
// IWYU pragma private; include "GlobalNamespace/INetworkPacketSerializer_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(INetworkPacketSerializer_1)
namespace LiteNetLib::Utils {
class INetSerializable;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename TData> class INetworkPacketSerializer_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::INetworkPacketSerializer_1);
// Dependencies
namespace GlobalNamespace {
// cpp template
template <typename TData>
// Is value type: false
// CS Name: INetworkPacketSerializer`1<TData>
class CORDL_TYPE INetworkPacketSerializer_1 {
public:
  // Declarations
  /// @brief Method ProcessAllPackets, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ProcessAllPackets(::LiteNetLib::Utils::NetDataReader* reader, TData data);

  /// @brief Method SerializePacket, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SerializePacket(::LiteNetLib::Utils::NetDataWriter* writer, ::LiteNetLib::Utils::INetSerializable* packet);

  // Ctor Parameters [CppParam { name: "", ty: "INetworkPacketSerializer_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  INetworkPacketSerializer_1(INetworkPacketSerializer_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14900 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::INetworkPacketSerializer_1, "", "INetworkPacketSerializer`1");
