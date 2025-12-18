#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapKeyNetSerializable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapKeyNetSerializable)
namespace GlobalNamespace {
struct BeatmapDifficulty;
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
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapKeyNetSerializable;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapKeyNetSerializable);
// Dependencies BeatmapDifficulty, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapKeyNetSerializable
class CORDL_TYPE BeatmapKeyNetSerializable : public ::System::Object {
public:
  // Declarations
  /// @brief Field <beatmapCharacteristicSerializedName>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCharacteristicSerializedName_k__BackingField,
                      put = __cordl_internal_set__beatmapCharacteristicSerializedName_k__BackingField)) ::StringW _beatmapCharacteristicSerializedName_k__BackingField;

  /// @brief Field <difficulty>k__BackingField, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__difficulty_k__BackingField, put = __cordl_internal_set__difficulty_k__BackingField)) ::GlobalNamespace::BeatmapDifficulty _difficulty_k__BackingField;

  /// @brief Field <levelID>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__levelID_k__BackingField, put = __cordl_internal_set__levelID_k__BackingField)) ::StringW _levelID_k__BackingField;

  __declspec(property(get = get_beatmapCharacteristicSerializedName, put = set_beatmapCharacteristicSerializedName)) ::StringW beatmapCharacteristicSerializedName;

  __declspec(property(get = get_difficulty, put = set_difficulty)) ::GlobalNamespace::BeatmapDifficulty difficulty;

  __declspec(property(get = get_levelID, put = set_levelID)) ::StringW levelID;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::BeatmapKeyNetSerializable*>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::BeatmapKeyNetSerializable*>*() noexcept;

  /// @brief Method Deserialize, addr 0x367a094, size 0x50, virtual true, abstract: false, final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Equals, addr 0x367a1dc, size 0xf4, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x367a16c, size 0x70, virtual true, abstract: false, final true
  inline bool Equals(::GlobalNamespace::BeatmapKeyNetSerializable* other);

  /// @brief Method GetHashCode, addr 0x367a2d0, size 0x64, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::GlobalNamespace::BeatmapKeyNetSerializable* New_ctor();

  static inline ::GlobalNamespace::BeatmapKeyNetSerializable* New_ctor(::StringW levelID, ::StringW beatmapCharacteristicSerializedName, ::GlobalNamespace::BeatmapDifficulty difficulty);

  /// @brief Method Serialize, addr 0x367a0f4, size 0x70, virtual true, abstract: false, final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method ToString, addr 0x367a334, size 0xb8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::StringW const& __cordl_internal_get__beatmapCharacteristicSerializedName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__beatmapCharacteristicSerializedName_k__BackingField();

  constexpr ::GlobalNamespace::BeatmapDifficulty const& __cordl_internal_get__difficulty_k__BackingField() const;

  constexpr ::GlobalNamespace::BeatmapDifficulty& __cordl_internal_get__difficulty_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__levelID_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__levelID_k__BackingField();

  constexpr void __cordl_internal_set__beatmapCharacteristicSerializedName_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__difficulty_k__BackingField(::GlobalNamespace::BeatmapDifficulty value);

  constexpr void __cordl_internal_set__levelID_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x367a084, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x367a088, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::StringW levelID, ::StringW beatmapCharacteristicSerializedName, ::GlobalNamespace::BeatmapDifficulty difficulty);

  /// @brief Method get_beatmapCharacteristicSerializedName, addr 0x367a064, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_beatmapCharacteristicSerializedName();

  /// @brief Method get_difficulty, addr 0x367a074, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapDifficulty get_difficulty();

  /// @brief Method get_levelID, addr 0x367a054, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_levelID();

  /// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
  constexpr ::LiteNetLib::Utils::INetSerializable* i___LiteNetLib__Utils__INetSerializable() noexcept;

  /// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::BeatmapKeyNetSerializable*>"
  constexpr ::System::IEquatable_1<::GlobalNamespace::BeatmapKeyNetSerializable*>* i___System__IEquatable_1___GlobalNamespace__BeatmapKeyNetSerializable__() noexcept;

  /// @brief Method set_beatmapCharacteristicSerializedName, addr 0x367a06c, size 0x8, virtual false, abstract: false, final false
  inline void set_beatmapCharacteristicSerializedName(::StringW value);

  /// @brief Method set_difficulty, addr 0x367a07c, size 0x8, virtual false, abstract: false, final false
  inline void set_difficulty(::GlobalNamespace::BeatmapDifficulty value);

  /// @brief Method set_levelID, addr 0x367a05c, size 0x8, virtual false, abstract: false, final false
  inline void set_levelID(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapKeyNetSerializable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapKeyNetSerializable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapKeyNetSerializable(BeatmapKeyNetSerializable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapKeyNetSerializable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapKeyNetSerializable(BeatmapKeyNetSerializable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20831 };

  /// @brief Field <levelID>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____levelID_k__BackingField;

  /// @brief Field <beatmapCharacteristicSerializedName>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____beatmapCharacteristicSerializedName_k__BackingField;

  /// @brief Field <difficulty>k__BackingField, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapDifficulty ____difficulty_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapKeyNetSerializable, ____levelID_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapKeyNetSerializable, ____beatmapCharacteristicSerializedName_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapKeyNetSerializable, ____difficulty_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapKeyNetSerializable, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapKeyNetSerializable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapKeyNetSerializable*, "", "BeatmapKeyNetSerializable");
