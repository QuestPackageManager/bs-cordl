#pragma once
// IWYU pragma private; include "GlobalNamespace/KickPlayerPacket.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__DisconnectedReason_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(KickPlayerPacket)
namespace GlobalNamespace {
struct DisconnectedReason;
}
namespace GlobalNamespace {
class IPoolablePacket;
}
namespace GlobalNamespace {
template <typename T> class PacketPool_1;
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
// Forward declare root types
namespace GlobalNamespace {
class KickPlayerPacket;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::KickPlayerPacket);
// Dependencies DisconnectedReason, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: KickPlayerPacket
class CORDL_TYPE KickPlayerPacket : public ::System::Object {
public:
  // Declarations
  /// @brief Field disconnectedReason, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_disconnectedReason, put = __cordl_internal_set_disconnectedReason)) ::GlobalNamespace::DisconnectedReason disconnectedReason;

  /// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
  constexpr operator ::GlobalNamespace::IPoolablePacket*() noexcept;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Method Deserialize, addr 0x32324a4, size 0x2c, virtual true, abstract: false, final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Init, addr 0x3232474, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::KickPlayerPacket* Init(::GlobalNamespace::DisconnectedReason disconnectedReason);

  static inline ::GlobalNamespace::KickPlayerPacket* New_ctor();

  /// @brief Method Release, addr 0x32324d0, size 0x58, virtual true, abstract: false, final true
  inline void Release();

  /// @brief Method Serialize, addr 0x323247c, size 0x28, virtual true, abstract: false, final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  constexpr ::GlobalNamespace::DisconnectedReason const& __cordl_internal_get_disconnectedReason() const;

  constexpr ::GlobalNamespace::DisconnectedReason& __cordl_internal_get_disconnectedReason();

  constexpr void __cordl_internal_set_disconnectedReason(::GlobalNamespace::DisconnectedReason value);

  /// @brief Method .ctor, addr 0x3232528, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_pool, addr 0x3232430, size 0x44, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::PacketPool_1<::GlobalNamespace::KickPlayerPacket*>* get_pool();

  /// @brief Convert to "::GlobalNamespace::IPoolablePacket"
  constexpr ::GlobalNamespace::IPoolablePacket* i___GlobalNamespace__IPoolablePacket() noexcept;

  /// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
  constexpr ::LiteNetLib::Utils::INetSerializable* i___LiteNetLib__Utils__INetSerializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KickPlayerPacket();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KickPlayerPacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KickPlayerPacket(KickPlayerPacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KickPlayerPacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KickPlayerPacket(KickPlayerPacket const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18099 };

  /// @brief Field disconnectedReason, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::DisconnectedReason ___disconnectedReason;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KickPlayerPacket, ___disconnectedReason) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::KickPlayerPacket, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::KickPlayerPacket);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::KickPlayerPacket*, "", "KickPlayerPacket");
