#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerStateHash.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BitMask128_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetImmutableSerializable_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerStateHash)
namespace GlobalNamespace {
struct BitMask128;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct PlayerStateHash;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PlayerStateHash);
// Dependencies BitMask128, LiteNetLib.Utils.INetImmutableSerializable`1<T>, System.IEquatable`1<T>
namespace GlobalNamespace {
// Is value type: true
// CS Name: PlayerStateHash
struct CORDL_TYPE PlayerStateHash {
public:
  // Declarations
  /// @brief Convert operator to "::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::PlayerStateHash>"
  constexpr operator ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::PlayerStateHash>*();

  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::PlayerStateHash>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::PlayerStateHash>*();

  /// @brief Method AddState, addr 0x22e34ec, size 0x60, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerStateHash AddState(::StringW state);

  /// @brief Method Contains, addr 0x22e348c, size 0x60, virtual false, abstract: false, final false
  inline bool Contains(::StringW state);

  /// @brief Method CreateFromSerializedData, addr 0x22e3554, size 0xc, virtual true, abstract: false, final true
  inline ::GlobalNamespace::PlayerStateHash CreateFromSerializedData(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Deserialize, addr 0x22e3560, size 0x8, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::PlayerStateHash Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Equals, addr 0x22e36a4, size 0x8c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x22e367c, size 0x28, virtual true, abstract: false, final true
  inline bool Equals(::GlobalNamespace::PlayerStateHash other);

  /// @brief Method FromBytes, addr 0x22e38e0, size 0x58, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::PlayerStateHash FromBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t offset);

  /// @brief Method GetHashCode, addr 0x22e3674, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Parse, addr 0x22e3858, size 0x88, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::PlayerStateHash Parse(::StringW stringSerializedMask);

  /// @brief Method Serialize, addr 0x22e354c, size 0x8, virtual true, abstract: false, final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method ToBytes, addr 0x22e362c, size 0x48, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ToBytes();

  /// @brief Method ToShortString, addr 0x22e35e4, size 0x48, virtual false, abstract: false, final false
  inline ::StringW ToShortString();

  /// @brief Method ToString, addr 0x22e3568, size 0x7c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method TryParse, addr 0x22e3730, size 0x128, virtual false, abstract: false, final false
  static inline bool TryParse(::StringW stringSerializedMask, ::ByRef<::GlobalNamespace::PlayerStateHash> playerStateHash);

  /// @brief Method .ctor, addr 0x22e33bc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BitMask128 bloomFilter);

  /// @brief Method .ctor, addr 0x22e33c4, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::StringW state);

  /// @brief Method .ctor, addr 0x22e3428, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::HashSet_1<::StringW>* stateHashSet);

  /// @brief Convert to "::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::PlayerStateHash>"
  constexpr ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::PlayerStateHash>* i___LiteNetLib__Utils__INetImmutableSerializable_1___GlobalNamespace__PlayerStateHash_();

  /// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::PlayerStateHash>"
  constexpr ::System::IEquatable_1<::GlobalNamespace::PlayerStateHash>* i___System__IEquatable_1___GlobalNamespace__PlayerStateHash_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerStateHash();

  // Ctor Parameters [CppParam { name: "_bloomFilter", ty: "::GlobalNamespace::BitMask128", modifiers: "", def_value: None }]
  constexpr PlayerStateHash(::GlobalNamespace::BitMask128 _bloomFilter) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14940 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field kToStringPrefix offset 0xffffffff size 0x8
  static constexpr ::ConstString kToStringPrefix{ u"[PlayerStateMask " };

  /// @brief Field kToStringSuffix offset 0xffffffff size 0x8
  static constexpr ::ConstString kToStringSuffix{ u"]" };

  /// @brief Field _bloomFilter, offset: 0x0, size: 0x10, def value: None
  ::GlobalNamespace::BitMask128 _bloomFilter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerStateHash, _bloomFilter) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerStateHash, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerStateHash, "", "PlayerStateHash");
