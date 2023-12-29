#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(BeatmapLevelPackCollection)
namespace GlobalNamespace {
class IBeatmapLevelPackCollection;
}
namespace GlobalNamespace {
class IBeatmapLevelPack;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapLevelPackCollection;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLevelPackCollection);
// Type: ::BeatmapLevelPackCollection
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4376))
// CS Name: ::BeatmapLevelPackCollection*
class CORDL_TYPE BeatmapLevelPackCollection : public ::System::Object {
public:
  // Declarations
  /// @brief Field _beatmapLevelPacks, offset 0x10, size 0x8
  __declspec(property(get = __get__beatmapLevelPacks,
                      put = __set__beatmapLevelPacks))::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*> _beatmapLevelPacks;

  __declspec(property(get = get_beatmapLevelPacks))::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*> beatmapLevelPacks;

  /// @brief Convert operator to "::GlobalNamespace::IBeatmapLevelPackCollection"
  constexpr operator ::GlobalNamespace::IBeatmapLevelPackCollection*() noexcept;

  constexpr ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*>& __get__beatmapLevelPacks();

  constexpr ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*> const& __get__beatmapLevelPacks() const;

  constexpr void __set__beatmapLevelPacks(::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*> value);

  /// @brief Method get_beatmapLevelPacks addr 0x21f7f54 size 0x8 virtual true final true
  inline ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*> get_beatmapLevelPacks();

  static inline ::GlobalNamespace::BeatmapLevelPackCollection* New_ctor(::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*> beatmapLevelPacks);

  /// @brief Method .ctor addr 0x21f7f5c size 0x28 virtual false final false
  inline void _ctor(::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*> beatmapLevelPacks);

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelPackCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLevelPackCollection(BeatmapLevelPackCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelPackCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLevelPackCollection(BeatmapLevelPackCollection const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelPackCollection();

public:
  /// @brief Field _beatmapLevelPacks, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*> ____beatmapLevelPacks;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelPackCollection, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelPackCollection, ____beatmapLevelPacks) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelPackCollection);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelPackCollection*, "", "BeatmapLevelPackCollection");
