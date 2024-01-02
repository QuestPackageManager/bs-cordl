#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DifficultyBeatmapSetExtensions)
namespace GlobalNamespace {
class PreviewDifficultyBeatmapSet;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
// Forward declare root types
namespace GlobalNamespace {
class DifficultyBeatmapSetExtensions;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DifficultyBeatmapSetExtensions);
// Type: ::DifficultyBeatmapSetExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4398))
// CS Name: ::DifficultyBeatmapSetExtensions*
class CORDL_TYPE DifficultyBeatmapSetExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetDifficultyBeatmapSetsWithout360Movement, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline ::System::Collections::Generic::IReadOnlyList_1<T>* GetDifficultyBeatmapSetsWithout360Movement(::System::Collections::Generic::IReadOnlyList_1<T>* difficultyBeatmapSets);

  /// @brief Method GetPreviewDifficultyBeatmapSets, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*
  GetPreviewDifficultyBeatmapSets(::System::Collections::Generic::IReadOnlyList_1<T>* difficultyBeatmapSets);

  // Ctor Parameters [CppParam { name: "", ty: "DifficultyBeatmapSetExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DifficultyBeatmapSetExtensions(DifficultyBeatmapSetExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DifficultyBeatmapSetExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DifficultyBeatmapSetExtensions(DifficultyBeatmapSetExtensions const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DifficultyBeatmapSetExtensions();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DifficultyBeatmapSetExtensions, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DifficultyBeatmapSetExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DifficultyBeatmapSetExtensions*, "", "DifficultyBeatmapSetExtensions");
