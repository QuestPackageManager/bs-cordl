#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapDifficultySerializedMethods.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BeatmapDifficultySerializedMethods)
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapDifficultySerializedMethods;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapDifficultySerializedMethods);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapDifficultySerializedMethods
class CORDL_TYPE BeatmapDifficultySerializedMethods : public ::System::Object {
public:
  // Declarations
  /// @brief Method BeatmapDifficultyFromSerializedName, addr 0x223e8cc, size 0x164, virtual false, abstract: false, final false
  static inline bool BeatmapDifficultyFromSerializedName(::StringW name, ::ByRef<::GlobalNamespace::BeatmapDifficulty> difficulty);

  /// @brief Method SerializedName, addr 0x223e834, size 0x98, virtual false, abstract: false, final false
  static inline ::StringW SerializedName(::GlobalNamespace::BeatmapDifficulty difficulty);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDifficultySerializedMethods();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDifficultySerializedMethods", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapDifficultySerializedMethods(BeatmapDifficultySerializedMethods&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDifficultySerializedMethods", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapDifficultySerializedMethods(BeatmapDifficultySerializedMethods const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17042 };

  /// @brief Field kDifficultyEasySerializedName offset 0xffffffff size 0x8
  static constexpr ::ConstString kDifficultyEasySerializedName{ u"Easy" };

  /// @brief Field kDifficultyExpertPlusNameSerializedLegacy offset 0xffffffff size 0x8
  static constexpr ::ConstString kDifficultyExpertPlusNameSerializedLegacy{ u"Expert+" };

  /// @brief Field kDifficultyExpertPlusSerializedName offset 0xffffffff size 0x8
  static constexpr ::ConstString kDifficultyExpertPlusSerializedName{ u"ExpertPlus" };

  /// @brief Field kDifficultyExpertSerializedName offset 0xffffffff size 0x8
  static constexpr ::ConstString kDifficultyExpertSerializedName{ u"Expert" };

  /// @brief Field kDifficultyHardSerializedName offset 0xffffffff size 0x8
  static constexpr ::ConstString kDifficultyHardSerializedName{ u"Hard" };

  /// @brief Field kDifficultyNormalSerializedName offset 0xffffffff size 0x8
  static constexpr ::ConstString kDifficultyNormalSerializedName{ u"Normal" };

  /// @brief Field kDifficultyUnknownSerializedName offset 0xffffffff size 0x8
  static constexpr ::ConstString kDifficultyUnknownSerializedName{ u"Unknown" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapDifficultySerializedMethods, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapDifficultySerializedMethods);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDifficultySerializedMethods*, "", "BeatmapDifficultySerializedMethods");
