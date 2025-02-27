#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapCharacteristicCollectionSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(BeatmapCharacteristicCollectionSO)
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapCharacteristicCollectionSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapCharacteristicCollectionSO);
// Dependencies PersistentScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapCharacteristicCollectionSO
class CORDL_TYPE BeatmapCharacteristicCollectionSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _beatmapCharacteristics, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCharacteristics,
                      put =
                          __cordl_internal_set__beatmapCharacteristics)) ::ArrayW<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::Array<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*>
      _beatmapCharacteristics;

  __declspec(property(get = get_allBeatmapCharacteristics)) ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* allBeatmapCharacteristics;

  static inline ::GlobalNamespace::BeatmapCharacteristicCollectionSO* New_ctor();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::Array<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*> const& __cordl_internal_get__beatmapCharacteristics() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::Array<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*>& __cordl_internal_get__beatmapCharacteristics();

  constexpr void __cordl_internal_set__beatmapCharacteristics(::ArrayW<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::Array<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*> value);

  /// @brief Method .ctor, addr 0x26ba718, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_allBeatmapCharacteristics, addr 0x26ba710, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* get_allBeatmapCharacteristics();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapCharacteristicCollectionSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapCharacteristicCollectionSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapCharacteristicCollectionSO(BeatmapCharacteristicCollectionSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapCharacteristicCollectionSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapCharacteristicCollectionSO(BeatmapCharacteristicCollectionSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12869 };

  /// @brief Field _beatmapCharacteristics, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::Array<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*> ____beatmapCharacteristics;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicCollectionSO, ____beatmapCharacteristics) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapCharacteristicCollectionSO, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapCharacteristicCollectionSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapCharacteristicCollectionSO*, "", "BeatmapCharacteristicCollectionSO");
