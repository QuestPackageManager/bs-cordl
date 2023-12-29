#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BeatmapLevelCollection)
namespace GlobalNamespace {
class IBeatmapLevelCollection;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapLevelCollection;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLevelCollection);
// Type: ::BeatmapLevelCollection
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4364))
// CS Name: ::BeatmapLevelCollection*
class CORDL_TYPE BeatmapLevelCollection : public ::System::Object {
public:
  // Declarations
  /// @brief Field _levels, offset 0x10, size 0x8
  __declspec(property(get = __get__levels, put = __set__levels))::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel*>* _levels;

  __declspec(property(get = get_beatmapLevels))::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel*>* beatmapLevels;

  /// @brief Convert operator to "::GlobalNamespace::IBeatmapLevelCollection"
  constexpr operator ::GlobalNamespace::IBeatmapLevelCollection*() noexcept;

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel*>*& __get__levels();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel*>*> const& __get__levels() const;

  constexpr void __set__levels(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel*>* value);

  /// @brief Method get_beatmapLevels addr 0x21f5904 size 0x8 virtual true final true
  inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel*>* get_beatmapLevels();

  static inline ::GlobalNamespace::BeatmapLevelCollection* New_ctor(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel*>* levels);

  /// @brief Method .ctor addr 0x21f590c size 0x28 virtual false final false
  inline void _ctor(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel*>* levels);

  /// @brief Method CreateBeatmapLevelCollectionByUsingBeatmapCharacteristicFiltering addr 0x21f5934 size 0x7cc virtual false final false
  static inline ::GlobalNamespace::BeatmapLevelCollection* CreateBeatmapLevelCollectionByUsingBeatmapCharacteristicFiltering(::GlobalNamespace::IBeatmapLevelCollection* beatmapLevelCollection,
                                                                                                                             ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic);

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLevelCollection(BeatmapLevelCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLevelCollection(BeatmapLevelCollection const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelCollection();

public:
  /// @brief Field _levels, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel*>* ____levels;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelCollection, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelCollection, ____levels) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelCollection);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelCollection*, "", "BeatmapLevelCollection");
