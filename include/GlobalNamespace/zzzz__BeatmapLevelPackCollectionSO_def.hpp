#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(BeatmapLevelPackCollectionSO)
namespace GlobalNamespace {
class BeatmapLevelPackSO;
}
namespace GlobalNamespace {
class IBeatmapLevelPackCollection;
}
namespace GlobalNamespace {
class IBeatmapLevelPack;
}
namespace GlobalNamespace {
class PreviewBeatmapLevelPackSO;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapLevelPackCollectionSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLevelPackCollectionSO);
// Type: ::BeatmapLevelPackCollectionSO
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(15857))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4355))
// CS Name: ::BeatmapLevelPackCollectionSO*
class CORDL_TYPE BeatmapLevelPackCollectionSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _beatmapLevelPacks, offset 0x18, size 0x8
  __declspec(
      property(get = __cordl_internal_get__beatmapLevelPacks,
               put = __cordl_internal_set__beatmapLevelPacks))::ArrayW<::UnityW<::GlobalNamespace::BeatmapLevelPackSO>, ::Array<::UnityW<::GlobalNamespace::BeatmapLevelPackSO>>*> _beatmapLevelPacks;

  /// @brief Field _previewBeatmapLevelPack, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__previewBeatmapLevelPack,
                      put = __cordl_internal_set__previewBeatmapLevelPack))::ArrayW<::UnityW<::GlobalNamespace::PreviewBeatmapLevelPackSO>,
                                                                                    ::Array<::UnityW<::GlobalNamespace::PreviewBeatmapLevelPackSO>>*> _previewBeatmapLevelPack;

  /// @brief Field _allBeatmapLevelPacks, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__allBeatmapLevelPacks,
                      put = __cordl_internal_set__allBeatmapLevelPacks))::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*> _allBeatmapLevelPacks;

  __declspec(property(
      get = get_previewBeatmapLevelPack,
      put = set_previewBeatmapLevelPack))::ArrayW<::UnityW<::GlobalNamespace::PreviewBeatmapLevelPackSO>, ::Array<::UnityW<::GlobalNamespace::PreviewBeatmapLevelPackSO>>*> previewBeatmapLevelPack;

  __declspec(property(get = get_beatmapLevelPacks, put = set_beatmapLevelPacks))::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*> beatmapLevelPacks;

  /// @brief Convert operator to "::GlobalNamespace::IBeatmapLevelPackCollection"
  constexpr operator ::GlobalNamespace::IBeatmapLevelPackCollection*() noexcept;

  /// @brief Convert to "::GlobalNamespace::IBeatmapLevelPackCollection"
  constexpr ::GlobalNamespace::IBeatmapLevelPackCollection* i___GlobalNamespace__IBeatmapLevelPackCollection() noexcept;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::BeatmapLevelPackSO>, ::Array<::UnityW<::GlobalNamespace::BeatmapLevelPackSO>>*>& __cordl_internal_get__beatmapLevelPacks();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::BeatmapLevelPackSO>, ::Array<::UnityW<::GlobalNamespace::BeatmapLevelPackSO>>*> const& __cordl_internal_get__beatmapLevelPacks() const;

  constexpr void __cordl_internal_set__beatmapLevelPacks(::ArrayW<::UnityW<::GlobalNamespace::BeatmapLevelPackSO>, ::Array<::UnityW<::GlobalNamespace::BeatmapLevelPackSO>>*> value);

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::PreviewBeatmapLevelPackSO>, ::Array<::UnityW<::GlobalNamespace::PreviewBeatmapLevelPackSO>>*>& __cordl_internal_get__previewBeatmapLevelPack();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::PreviewBeatmapLevelPackSO>, ::Array<::UnityW<::GlobalNamespace::PreviewBeatmapLevelPackSO>>*> const&
  __cordl_internal_get__previewBeatmapLevelPack() const;

  constexpr void
  __cordl_internal_set__previewBeatmapLevelPack(::ArrayW<::UnityW<::GlobalNamespace::PreviewBeatmapLevelPackSO>, ::Array<::UnityW<::GlobalNamespace::PreviewBeatmapLevelPackSO>>*> value);

  constexpr ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*>& __cordl_internal_get__allBeatmapLevelPacks();

  constexpr ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*> const& __cordl_internal_get__allBeatmapLevelPacks() const;

  constexpr void __cordl_internal_set__allBeatmapLevelPacks(::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*> value);

  /// @brief Method get_previewBeatmapLevelPack, addr 0x23424e4, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::GlobalNamespace::PreviewBeatmapLevelPackSO>, ::Array<::UnityW<::GlobalNamespace::PreviewBeatmapLevelPackSO>>*> get_previewBeatmapLevelPack();

  /// @brief Method set_previewBeatmapLevelPack, addr 0x23424ec, size 0x8, virtual false, abstract: false, final false
  inline void set_previewBeatmapLevelPack(::ArrayW<::GlobalNamespace::PreviewBeatmapLevelPackSO*, ::Array<::GlobalNamespace::PreviewBeatmapLevelPackSO*>*> value);

  /// @brief Method get_beatmapLevelPacks, addr 0x23424f4, size 0x24, virtual true, abstract: false, final true
  inline ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*> get_beatmapLevelPacks();

  /// @brief Method set_beatmapLevelPacks, addr 0x23426fc, size 0x8, virtual false, abstract: false, final false
  inline void set_beatmapLevelPacks(::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*> value);

  /// @brief Method LoadAllBeatmapLevelPacks, addr 0x2342518, size 0x1e4, virtual false, abstract: false, final false
  inline void LoadAllBeatmapLevelPacks();

  static inline ::GlobalNamespace::BeatmapLevelPackCollectionSO* New_ctor();

  /// @brief Method .ctor, addr 0x2342704, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelPackCollectionSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLevelPackCollectionSO(BeatmapLevelPackCollectionSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelPackCollectionSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLevelPackCollectionSO(BeatmapLevelPackCollectionSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelPackCollectionSO();

public:
  /// @brief Field _beatmapLevelPacks, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::BeatmapLevelPackSO>, ::Array<::UnityW<::GlobalNamespace::BeatmapLevelPackSO>>*> ____beatmapLevelPacks;

  /// @brief Field _previewBeatmapLevelPack, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::PreviewBeatmapLevelPackSO>, ::Array<::UnityW<::GlobalNamespace::PreviewBeatmapLevelPackSO>>*> ____previewBeatmapLevelPack;

  /// @brief Field _allBeatmapLevelPacks, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*> ____allBeatmapLevelPacks;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelPackCollectionSO, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelPackCollectionSO, ____beatmapLevelPacks) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelPackCollectionSO, ____previewBeatmapLevelPack) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelPackCollectionSO, ____allBeatmapLevelPacks) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelPackCollectionSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelPackCollectionSO*, "", "BeatmapLevelPackCollectionSO");
