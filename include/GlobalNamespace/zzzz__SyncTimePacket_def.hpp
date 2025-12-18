#pragma once
// IWYU pragma private; include "GlobalNamespace/SyncTimePacket.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SyncTimePacket)
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
class SyncTimePacket;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SyncTimePacket);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SyncTimePacket
class CORDL_TYPE SyncTimePacket : public ::System::Object {
public:
  // Declarations
  /// @brief Field syncTime, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_syncTime, put = __cordl_internal_set_syncTime)) int64_t syncTime;

  /// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
  constexpr operator ::GlobalNamespace::IPoolablePacket*() noexcept;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Method Deserialize, addr 0x3232584, size 0x20, virtual true, abstract: false, final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Init, addr 0x32325a4, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::SyncTimePacket* Init(int64_t syncTime);

  static inline ::GlobalNamespace::SyncTimePacket* New_ctor();

  /// @brief Method Release, addr 0x32325ac, size 0x58, virtual true, abstract: false, final true
  inline void Release();

  /// @brief Method Serialize, addr 0x3232570, size 0x14, virtual true, abstract: false, final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  constexpr int64_t const& __cordl_internal_get_syncTime() const;

  constexpr int64_t& __cordl_internal_get_syncTime();

  constexpr void __cordl_internal_set_syncTime(int64_t value);

  /// @brief Method .ctor, addr 0x3232604, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_pool, addr 0x323252c, size 0x44, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::PacketPool_1<::GlobalNamespace::SyncTimePacket*>* get_pool();

  /// @brief Convert to "::GlobalNamespace::IPoolablePacket"
  constexpr ::GlobalNamespace::IPoolablePacket* i___GlobalNamespace__IPoolablePacket() noexcept;

  /// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
  constexpr ::LiteNetLib::Utils::INetSerializable* i___LiteNetLib__Utils__INetSerializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SyncTimePacket();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SyncTimePacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SyncTimePacket(SyncTimePacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SyncTimePacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SyncTimePacket(SyncTimePacket const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18100 };

  /// @brief Field syncTime, offset: 0x10, size: 0x8, def value: None
  int64_t ___syncTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SyncTimePacket, ___syncTime) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SyncTimePacket, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SyncTimePacket);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SyncTimePacket*, "", "SyncTimePacket");
