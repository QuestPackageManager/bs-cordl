#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapLevelMask.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapLevelMask)
namespace GlobalNamespace {
class BitMaskSparse;
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
class BeatmapLevelMask;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLevelMask);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapLevelMask
class CORDL_TYPE BeatmapLevelMask : public ::System::Object {
public:
  // Declarations
  /// @brief Field _bloomFilter, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__bloomFilter, put = __cordl_internal_set__bloomFilter)) ::GlobalNamespace::BitMaskSparse* _bloomFilter;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::BeatmapLevelMask*>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::BeatmapLevelMask*>*() noexcept;

  /// @brief Method AddLevel, addr 0x367a730, size 0x64, virtual false, abstract: false, final false
  inline void AddLevel(::StringW state);

  /// @brief Method Contains, addr 0x367a6cc, size 0x64, virtual false, abstract: false, final false
  inline bool Contains(::StringW state);

  /// @brief Method Deserialize, addr 0x367a980, size 0x14, virtual true, abstract: false, final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Equals, addr 0x367aaf8, size 0x98, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x367aad8, size 0x20, virtual true, abstract: false, final true
  inline bool Equals(::GlobalNamespace::BeatmapLevelMask* other);

  /// @brief Method GetHashCode, addr 0x367aabc, size 0x1c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::GlobalNamespace::BeatmapLevelMask* New_ctor();

  static inline ::GlobalNamespace::BeatmapLevelMask* New_ctor(::StringW level);

  static inline ::GlobalNamespace::BeatmapLevelMask* New_ctor(::System::Collections::Generic::HashSet_1<::StringW>* levelSet);

  /// @brief Method Serialize, addr 0x367a794, size 0x14, virtual true, abstract: false, final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method ToString, addr 0x367aa30, size 0x8c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::GlobalNamespace::BitMaskSparse* const& __cordl_internal_get__bloomFilter() const;

  constexpr ::GlobalNamespace::BitMaskSparse*& __cordl_internal_get__bloomFilter();

  constexpr void __cordl_internal_set__bloomFilter(::GlobalNamespace::BitMaskSparse* value);

  /// @brief Method .ctor, addr 0x367a3ec, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x367a4e0, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::StringW level);

  /// @brief Method .ctor, addr 0x367a574, size 0x158, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::HashSet_1<::StringW>* levelSet);

  /// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
  constexpr ::LiteNetLib::Utils::INetSerializable* i___LiteNetLib__Utils__INetSerializable() noexcept;

  /// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::BeatmapLevelMask*>"
  constexpr ::System::IEquatable_1<::GlobalNamespace::BeatmapLevelMask*>* i___System__IEquatable_1___GlobalNamespace__BeatmapLevelMask__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelMask();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelMask", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLevelMask(BeatmapLevelMask&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelMask", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLevelMask(BeatmapLevelMask const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20832 };

  /// @brief Field kBitCount offset 0xffffffff size 0x4
  static constexpr int32_t kBitCount{ static_cast<int32_t>(0x8000) };

  /// @brief Field kHashBits offset 0xffffffff size 0x4
  static constexpr int32_t kHashBits{ static_cast<int32_t>(0xe) };

  /// @brief Field kHashCount offset 0xffffffff size 0x4
  static constexpr int32_t kHashCount{ static_cast<int32_t>(0x1) };

  /// @brief Field kToStringPrefix offset 0xffffffff size 0x8
  static constexpr ::ConstString kToStringPrefix{ u"[BeatmapLevelMask " };

  /// @brief Field kToStringSuffix offset 0xffffffff size 0x8
  static constexpr ::ConstString kToStringSuffix{ u"]" };

  /// @brief Field _bloomFilter, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::BitMaskSparse* ____bloomFilter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapLevelMask, ____bloomFilter) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelMask, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelMask);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelMask*, "", "BeatmapLevelMask");
