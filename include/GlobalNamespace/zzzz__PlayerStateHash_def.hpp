#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BitMask128_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerStateHash)
namespace GlobalNamespace {
struct BitMask128;
}
namespace LiteNetLib::Utils {
template <typename T> class INetImmutableSerializable_1;
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
template <typename T> class IEquatable_1;
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
// Type: ::PlayerStateHash
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::PlayerStateHash
struct CORDL_TYPE PlayerStateHash {
public:
  // Declarations
  /// @brief Convert operator to "::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::PlayerStateHash>"
  constexpr operator ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::PlayerStateHash>*();

  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::PlayerStateHash>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::PlayerStateHash>*();

  /// @brief Method AddState, addr 0x10b19cc, size 0x60, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerStateHash AddState(::StringW state);

  /// @brief Method Contains, addr 0x10b196c, size 0x60, virtual false, abstract: false, final false
  inline bool Contains(::StringW state);

  /// @brief Method CreateFromSerializedData, addr 0x10b1a34, size 0xc, virtual true, abstract: false, final true
  inline ::GlobalNamespace::PlayerStateHash CreateFromSerializedData(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Deserialize, addr 0x10b1a40, size 0x8, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::PlayerStateHash Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Equals, addr 0x10b1b84, size 0x8c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x10b1b5c, size 0x28, virtual true, abstract: false, final true
  inline bool Equals(::GlobalNamespace::PlayerStateHash other);

  /// @brief Method FromBytes, addr 0x10b1dc8, size 0x58, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::PlayerStateHash FromBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t offset);

  /// @brief Method GetHashCode, addr 0x10b1b54, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Parse, addr 0x10b1d38, size 0x90, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::PlayerStateHash Parse(::StringW stringSerializedMask);

  /// @brief Method Serialize, addr 0x10b1a2c, size 0x8, virtual true, abstract: false, final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method ToBytes, addr 0x10b1b0c, size 0x48, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ToBytes();

  /// @brief Method ToShortString, addr 0x10b1ac4, size 0x48, virtual false, abstract: false, final false
  inline ::StringW ToShortString();

  /// @brief Method ToString, addr 0x10b1a48, size 0x7c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method TryParse, addr 0x10b1c10, size 0x128, virtual false, abstract: false, final false
  static inline bool TryParse(::StringW stringSerializedMask, ByRef<::GlobalNamespace::PlayerStateHash> playerStateHash);

  /// @brief Method .ctor, addr 0x10b189c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BitMask128 bloomFilter);

  /// @brief Method .ctor, addr 0x10b18a4, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::StringW state);

  /// @brief Method .ctor, addr 0x10b1908, size 0x64, virtual false, abstract: false, final false
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

  /// @brief Field _bloomFilter, offset: 0x0, size: 0x10, def value: None
  ::GlobalNamespace::BitMask128 _bloomFilter;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field kToStringPrefix offset 0xffffffff size 0x8
  static constexpr ::ConstString kToStringPrefix{ u"[PlayerStateMask " };

  /// @brief Field kToStringSuffix offset 0xffffffff size 0x8
  static constexpr ::ConstString kToStringSuffix{ u"]" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerStateHash, 0x10>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerStateHash, _bloomFilter) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerStateHash, "", "PlayerStateHash");
