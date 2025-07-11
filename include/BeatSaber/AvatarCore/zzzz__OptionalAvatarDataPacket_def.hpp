#pragma once
// IWYU pragma private; include "BeatSaber/AvatarCore/OptionalAvatarDataPacket.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IPoolablePacket_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OptionalAvatarDataPacket)
namespace BeatSaber::AvatarCore {
struct OptionalAvatarData;
}
namespace GlobalNamespace {
class ByteArrayNetSerializable;
}
namespace GlobalNamespace {
template <typename T> class PacketPool_1;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
// Forward declare root types
namespace BeatSaber::AvatarCore {
class OptionalAvatarDataPacket;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::AvatarCore::OptionalAvatarDataPacket);
// Dependencies IPoolablePacket, LiteNetLib.Utils.INetSerializable, System.Object
namespace BeatSaber::AvatarCore {
// Is value type: false
// CS Name: BeatSaber.AvatarCore.OptionalAvatarDataPacket
class CORDL_TYPE OptionalAvatarDataPacket : public ::System::Object {
public:
  // Declarations
  /// @brief Field data, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data)) ::GlobalNamespace::ByteArrayNetSerializable* data;

  /// @brief Field dataType, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_dataType, put = __cordl_internal_set_dataType)) uint32_t dataType;

  /// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
  constexpr operator ::GlobalNamespace::IPoolablePacket*() noexcept;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Method Deserialize, addr 0x2251108, size 0x48, virtual true, abstract: false, final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Init, addr 0x22511bc, size 0x34, virtual false, abstract: false, final false
  inline ::BeatSaber::AvatarCore::OptionalAvatarDataPacket* Init(uint32_t dataType, ::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t length);

  /// @brief Method Init, addr 0x22511b4, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::AvatarCore::OptionalAvatarDataPacket* Init(::BeatSaber::AvatarCore::OptionalAvatarData optionalAvatarData);

  static inline ::BeatSaber::AvatarCore::OptionalAvatarDataPacket* New_ctor();

  /// @brief Method Release, addr 0x2251150, size 0x64, virtual true, abstract: false, final true
  inline void Release();

  /// @brief Method Serialize, addr 0x22510c4, size 0x44, virtual true, abstract: false, final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  constexpr ::GlobalNamespace::ByteArrayNetSerializable* const& __cordl_internal_get_data() const;

  constexpr ::GlobalNamespace::ByteArrayNetSerializable*& __cordl_internal_get_data();

  constexpr uint32_t const& __cordl_internal_get_dataType() const;

  constexpr uint32_t& __cordl_internal_get_dataType();

  constexpr void __cordl_internal_set_data(::GlobalNamespace::ByteArrayNetSerializable* value);

  constexpr void __cordl_internal_set_dataType(uint32_t value);

  /// @brief Method .ctor, addr 0x22511f0, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_pool, addr 0x2251084, size 0x40, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::PacketPool_1<::BeatSaber::AvatarCore::OptionalAvatarDataPacket*>* get_pool();

  /// @brief Convert to "::GlobalNamespace::IPoolablePacket"
  constexpr ::GlobalNamespace::IPoolablePacket* i___GlobalNamespace__IPoolablePacket() noexcept;

  /// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
  constexpr ::LiteNetLib::Utils::INetSerializable* i___LiteNetLib__Utils__INetSerializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OptionalAvatarDataPacket();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OptionalAvatarDataPacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OptionalAvatarDataPacket(OptionalAvatarDataPacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OptionalAvatarDataPacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OptionalAvatarDataPacket(OptionalAvatarDataPacket const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17599 };

  /// @brief Field dataType, offset: 0x10, size: 0x4, def value: None
  uint32_t ___dataType;

  /// @brief Field data, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::ByteArrayNetSerializable* ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::AvatarCore::OptionalAvatarDataPacket, ___dataType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::OptionalAvatarDataPacket, ___data) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::AvatarCore::OptionalAvatarDataPacket, 0x20>, "Size mismatch!");

} // namespace BeatSaber::AvatarCore
NEED_NO_BOX(::BeatSaber::AvatarCore::OptionalAvatarDataPacket);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::OptionalAvatarDataPacket*, "BeatSaber.AvatarCore", "OptionalAvatarDataPacket");
