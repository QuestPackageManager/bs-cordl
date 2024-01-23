#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapIdentifierNetSerializable)
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
class BeatmapIdentifierNetSerializable;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapIdentifierNetSerializable);
// Type: ::BeatmapIdentifierNetSerializable
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(14717))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14987))
// CS Name: ::BeatmapIdentifierNetSerializable*
class CORDL_TYPE BeatmapIdentifierNetSerializable : public ::System::Object {
public:
  // Declarations
  /// @brief Field <levelID>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__levelID_k__BackingField, put = __cordl_internal_set__levelID_k__BackingField))::StringW _levelID_k__BackingField;

  /// @brief Field <beatmapCharacteristicSerializedName>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCharacteristicSerializedName_k__BackingField,
                      put = __cordl_internal_set__beatmapCharacteristicSerializedName_k__BackingField))::StringW _beatmapCharacteristicSerializedName_k__BackingField;

  /// @brief Field <difficulty>k__BackingField, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__difficulty_k__BackingField, put = __cordl_internal_set__difficulty_k__BackingField))::GlobalNamespace::BeatmapDifficulty _difficulty_k__BackingField;

  __declspec(property(get = get_levelID, put = set_levelID))::StringW levelID;

  __declspec(property(get = get_beatmapCharacteristicSerializedName, put = set_beatmapCharacteristicSerializedName))::StringW beatmapCharacteristicSerializedName;

  __declspec(property(get = get_difficulty, put = set_difficulty))::GlobalNamespace::BeatmapDifficulty difficulty;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
  constexpr ::LiteNetLib::Utils::INetSerializable* i___LiteNetLib__Utils__INetSerializable() noexcept;

  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::BeatmapIdentifierNetSerializable*>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::BeatmapIdentifierNetSerializable*>*() noexcept;

  /// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::BeatmapIdentifierNetSerializable*>"
  constexpr ::System::IEquatable_1<::GlobalNamespace::BeatmapIdentifierNetSerializable*>* i___System__IEquatable_1___GlobalNamespace__BeatmapIdentifierNetSerializable__() noexcept;

  constexpr ::StringW& __cordl_internal_get__levelID_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__levelID_k__BackingField() const;

  constexpr void __cordl_internal_set__levelID_k__BackingField(::StringW value);

  constexpr ::StringW& __cordl_internal_get__beatmapCharacteristicSerializedName_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__beatmapCharacteristicSerializedName_k__BackingField() const;

  constexpr void __cordl_internal_set__beatmapCharacteristicSerializedName_k__BackingField(::StringW value);

  constexpr ::GlobalNamespace::BeatmapDifficulty& __cordl_internal_get__difficulty_k__BackingField();

  constexpr ::GlobalNamespace::BeatmapDifficulty const& __cordl_internal_get__difficulty_k__BackingField() const;

  constexpr void __cordl_internal_set__difficulty_k__BackingField(::GlobalNamespace::BeatmapDifficulty value);

  /// @brief Method get_levelID, addr 0x12a0078, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_levelID();

  /// @brief Method set_levelID, addr 0x12a0080, size 0x8, virtual false, abstract: false, final false
  inline void set_levelID(::StringW value);

  /// @brief Method get_beatmapCharacteristicSerializedName, addr 0x12a0088, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_beatmapCharacteristicSerializedName();

  /// @brief Method set_beatmapCharacteristicSerializedName, addr 0x12a0090, size 0x8, virtual false, abstract: false, final false
  inline void set_beatmapCharacteristicSerializedName(::StringW value);

  /// @brief Method get_difficulty, addr 0x12a0098, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapDifficulty get_difficulty();

  /// @brief Method set_difficulty, addr 0x12a00a0, size 0x8, virtual false, abstract: false, final false
  inline void set_difficulty(::GlobalNamespace::BeatmapDifficulty value);

  static inline ::GlobalNamespace::BeatmapIdentifierNetSerializable* New_ctor();

  /// @brief Method .ctor, addr 0x12a00a8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::BeatmapIdentifierNetSerializable* New_ctor(::StringW levelID, ::StringW beatmapCharacteristicSerializedName, ::GlobalNamespace::BeatmapDifficulty difficulty);

  /// @brief Method .ctor, addr 0x12a00b0, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::StringW levelID, ::StringW beatmapCharacteristicSerializedName, ::GlobalNamespace::BeatmapDifficulty difficulty);

  /// @brief Method LiteNetLib.Utils.INetSerializable.Deserialize, addr 0x12a00ec, size 0x50, virtual true, abstract: false, final true
  inline void LiteNetLib_Utils_INetSerializable_Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method LiteNetLib.Utils.INetSerializable.Serialize, addr 0x12a014c, size 0x4c, virtual true, abstract: false, final true
  inline void LiteNetLib_Utils_INetSerializable_Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method Equals, addr 0x12a01a0, size 0x70, virtual true, abstract: false, final true
  inline bool Equals(::GlobalNamespace::BeatmapIdentifierNetSerializable* other);

  /// @brief Method Equals, addr 0x12a0210, size 0x10c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x12a031c, size 0x64, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x12a0380, size 0x90, virtual true, abstract: false, final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapIdentifierNetSerializable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapIdentifierNetSerializable(BeatmapIdentifierNetSerializable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapIdentifierNetSerializable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapIdentifierNetSerializable(BeatmapIdentifierNetSerializable const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapIdentifierNetSerializable();

public:
  /// @brief Field <levelID>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____levelID_k__BackingField;

  /// @brief Field <beatmapCharacteristicSerializedName>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____beatmapCharacteristicSerializedName_k__BackingField;

  /// @brief Field <difficulty>k__BackingField, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapDifficulty ____difficulty_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapIdentifierNetSerializable, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapIdentifierNetSerializable, ____levelID_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapIdentifierNetSerializable, ____beatmapCharacteristicSerializedName_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapIdentifierNetSerializable, ____difficulty_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapIdentifierNetSerializable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapIdentifierNetSerializable*, "", "BeatmapIdentifierNetSerializable");
