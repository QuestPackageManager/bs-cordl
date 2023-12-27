#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(IBeatmapLevelPackCollection)
namespace GlobalNamespace {
class IBeatmapLevelPack;
}
// Forward declare root types
namespace GlobalNamespace {
class IBeatmapLevelPackCollection;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IBeatmapLevelPackCollection);
// Type: ::IBeatmapLevelPackCollection
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4352))
// CS Name: ::IBeatmapLevelPackCollection*
class CORDL_TYPE IBeatmapLevelPackCollection {
public:
  // Declarations
  __declspec(property(get = get_beatmapLevelPacks))::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*> beatmapLevelPacks;

  /// @brief Method get_beatmapLevelPacks addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*> get_beatmapLevelPacks();

  // Ctor Parameters [CppParam { name: "", ty: "IBeatmapLevelPackCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IBeatmapLevelPackCollection(IBeatmapLevelPackCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IBeatmapLevelPackCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IBeatmapLevelPackCollection(IBeatmapLevelPackCollection const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IBeatmapLevelPackCollection);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IBeatmapLevelPackCollection*, "", "IBeatmapLevelPackCollection");
