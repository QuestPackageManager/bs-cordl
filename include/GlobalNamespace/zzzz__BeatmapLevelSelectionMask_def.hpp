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
namespace GlobalNamespace {
struct BeatmapDifficultyMask;
}
namespace GlobalNamespace {
struct GameplayModifierMask;
}
namespace GlobalNamespace {
struct SongPackMask;
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
struct BeatmapLevelSelectionMask;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BeatmapLevelSelectionMask);
// Type: ::BeatmapLevelSelectionMask
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(14870)), TypeDefinitionIndex(TypeDefinitionIndex(14920)), TypeDefinitionIndex(TypeDefinitionIndex(15103))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12584))
// CS Name: ::BeatmapLevelSelectionMask
struct CORDL_TYPE BeatmapLevelSelectionMask {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::BeatmapLevelSelectionMask>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::BeatmapLevelSelectionMask>*();

  /// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::BeatmapLevelSelectionMask>"
  constexpr ::System::IEquatable_1<::GlobalNamespace::BeatmapLevelSelectionMask>* i___System__IEquatable_1___GlobalNamespace__BeatmapLevelSelectionMask_();

  /// @brief Method .ctor, addr 0xe547dc, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BeatmapDifficultyMask difficulties, ::GlobalNamespace::GameplayModifierMask modifiers, ::GlobalNamespace::SongPackMask songPacks);

  /// @brief Method Equals, addr 0xe547f4, size 0x90, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0xe54884, size 0x114, virtual true, abstract: false, final true
  inline bool Equals(::GlobalNamespace::BeatmapLevelSelectionMask other);

  /// @brief Method GetHashCode, addr 0xe54998, size 0x2c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Serialize, addr 0xe549c4, size 0x50, virtual false, abstract: false, final false
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer, uint32_t version);

  /// @brief Method Deserialize, addr 0xe54a14, size 0x80, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BeatmapLevelSelectionMask Deserialize(::LiteNetLib::Utils::NetDataReader* reader, uint32_t version);

  /// @brief Method op_Equality, addr 0xe54a94, size 0x88, virtual false, abstract: false, final false
  static inline bool op_Equality(::GlobalNamespace::BeatmapLevelSelectionMask l, ::GlobalNamespace::BeatmapLevelSelectionMask r);

  /// @brief Method op_Inequality, addr 0xe54b1c, size 0x88, virtual false, abstract: false, final false
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

  /// @brief Field songPacks, offset: 0x8, size: 0x20, def value: None
  ::GlobalNamespace::SongPackMask songPacks;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelSelectionMask, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelSelectionMask, difficulties) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelSelectionMask, modifiers) == 0x2, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelSelectionMask, songPacks) == 0x8, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelSelectionMask, "", "BeatmapLevelSelectionMask");
