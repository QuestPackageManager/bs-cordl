#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDifficultyMask_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierMask_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMask_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapLevelSelectionMask)
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace GlobalNamespace {
struct SongPackMask;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace GlobalNamespace {
struct GameplayModifierMask;
}
namespace System {
class Object;
}
namespace GlobalNamespace {
struct BeatmapDifficultyMask;
}
// Forward declare root types
namespace GlobalNamespace {
struct BeatmapLevelSelectionMask;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BeatmapLevelSelectionMask);
// Type: ::BeatmapLevelSelectionMask
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15144)), TypeDefinitionIndex(TypeDefinitionIndex(14936)), TypeDefinitionIndex(TypeDefinitionIndex(15192))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12614))
// CS Name: ::BeatmapLevelSelectionMask
struct CORDL_TYPE BeatmapLevelSelectionMask {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::BeatmapLevelSelectionMask>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::BeatmapLevelSelectionMask>*();

  /// @brief Method .ctor addr 0xda3d0c size 0x10 virtual false final false
  inline void _ctor(::GlobalNamespace::BeatmapDifficultyMask difficulties, ::GlobalNamespace::GameplayModifierMask modifiers, ::GlobalNamespace::SongPackMask songPacks);

  /// @brief Method Equals addr 0xda3d1c size 0x90 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals addr 0xda3dac size 0xf8 virtual true final true
  inline bool Equals(::GlobalNamespace::BeatmapLevelSelectionMask other);

  /// @brief Method GetHashCode addr 0xda3ea4 size 0x2c virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method Serialize addr 0xda3ed0 size 0x50 virtual false final false
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer, uint32_t version);

  /// @brief Method Deserialize addr 0xda3f20 size 0x64 virtual false final false
  static inline ::GlobalNamespace::BeatmapLevelSelectionMask Deserialize(::LiteNetLib::Utils::NetDataReader* reader, uint32_t version);

  /// @brief Method op_Equality addr 0xda3f84 size 0x40 virtual false final false
  static inline bool op_Equality(::GlobalNamespace::BeatmapLevelSelectionMask l, ::GlobalNamespace::BeatmapLevelSelectionMask r);

  /// @brief Method op_Inequality addr 0xda3fc4 size 0x40 virtual false final false
  static inline bool op_Inequality(::GlobalNamespace::BeatmapLevelSelectionMask l, ::GlobalNamespace::BeatmapLevelSelectionMask r);

  // Ctor Parameters [CppParam { name: "difficulties", ty: "::GlobalNamespace::BeatmapDifficultyMask", modifiers: "", def_value: None }, CppParam { name: "modifiers", ty:
  // "::GlobalNamespace::GameplayModifierMask", modifiers: "", def_value: None }, CppParam { name: "songPacks", ty: "::GlobalNamespace::SongPackMask", modifiers: "", def_value: None }]
  constexpr BeatmapLevelSelectionMask(::GlobalNamespace::BeatmapDifficultyMask difficulties, ::GlobalNamespace::GameplayModifierMask modifiers, ::GlobalNamespace::SongPackMask songPacks) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelSelectionMask();

  /// @brief Field difficulties, offset: 0x0, size: 0x1, def value: None
  ::GlobalNamespace::BeatmapDifficultyMask difficulties;

  /// @brief Field modifiers, offset: 0x2, size: 0x2, def value: None
  ::GlobalNamespace::GameplayModifierMask modifiers;

  /// @brief Field songPacks, offset: 0x8, size: 0x10, def value: None
  ::GlobalNamespace::SongPackMask songPacks;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelSelectionMask, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelSelectionMask, difficulties) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelSelectionMask, modifiers) == 0x2, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelSelectionMask, songPacks) == 0x8, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelSelectionMask, "", "BeatmapLevelSelectionMask");
