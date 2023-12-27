#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(BeatmapLevelPackCollectionContainerSO)
namespace GlobalNamespace {
class BeatmapLevelPackCollectionSO;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapLevelPackCollectionContainerSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLevelPackCollectionContainerSO);
// Type: ::BeatmapLevelPackCollectionContainerSO
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4354))
// CS Name: ::BeatmapLevelPackCollectionContainerSO*
class CORDL_TYPE BeatmapLevelPackCollectionContainerSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _beatmapLevelPackCollection, offset 0x18, size 0x8
  __declspec(property(get = __get__beatmapLevelPackCollection, put = __set__beatmapLevelPackCollection))::GlobalNamespace::BeatmapLevelPackCollectionSO* _beatmapLevelPackCollection;

  __declspec(property(get = get_beatmapLevelPackCollection))::GlobalNamespace::BeatmapLevelPackCollectionSO* beatmapLevelPackCollection;

  constexpr ::GlobalNamespace::BeatmapLevelPackCollectionSO*& __get__beatmapLevelPackCollection();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelPackCollectionSO*> const& __get__beatmapLevelPackCollection() const;

  constexpr void __set__beatmapLevelPackCollection(::GlobalNamespace::BeatmapLevelPackCollectionSO* value);

  /// @brief Method get_beatmapLevelPackCollection addr 0x23424d4 size 0x8 virtual false final false
  inline ::GlobalNamespace::BeatmapLevelPackCollectionSO* get_beatmapLevelPackCollection();

  static inline ::GlobalNamespace::BeatmapLevelPackCollectionContainerSO* New_ctor();

  /// @brief Method .ctor addr 0x23424dc size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelPackCollectionContainerSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLevelPackCollectionContainerSO(BeatmapLevelPackCollectionContainerSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelPackCollectionContainerSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLevelPackCollectionContainerSO(BeatmapLevelPackCollectionContainerSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelPackCollectionContainerSO();

public:
  /// @brief Field _beatmapLevelPackCollection, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelPackCollectionSO* ____beatmapLevelPackCollection;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelPackCollectionContainerSO, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelPackCollectionContainerSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelPackCollectionContainerSO*, "", "BeatmapLevelPackCollectionContainerSO");
