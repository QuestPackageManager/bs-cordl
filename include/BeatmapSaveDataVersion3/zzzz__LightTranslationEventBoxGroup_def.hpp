#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatmapSaveDataVersion3/zzzz__EventBoxGroup_1_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__LightTranslationEventBox_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LightTranslationEventBoxGroup)
namespace BeatmapSaveDataVersion3 {
class LightTranslationEventBox;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> struct Nullable_1;
}
// Forward declare root types
namespace BeatmapSaveDataVersion3 {
class LightTranslationEventBoxGroup;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapSaveDataVersion3::LightTranslationEventBoxGroup);
// Type: BeatmapSaveDataVersion3::LightTranslationEventBoxGroup
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// CS Name: ::BeatmapSaveDataVersion3::LightTranslationEventBoxGroup*
class CORDL_TYPE LightTranslationEventBoxGroup : public ::BeatmapSaveDataVersion3::EventBoxGroup_1<::BeatmapSaveDataVersion3::LightTranslationEventBox*> {
public:
  // Declarations
  /// @brief Method CopyWith, addr 0x12fc70c, size 0xe0, virtual false, abstract: false, final false
  inline ::BeatmapSaveDataVersion3::LightTranslationEventBoxGroup* CopyWith(::System::Nullable_1<float_t> newBeat, ::System::Nullable_1<int32_t> newGroupId);

  static inline ::BeatmapSaveDataVersion3::LightTranslationEventBoxGroup* New_ctor(float_t beat, int32_t groupId,
                                                                                   ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightTranslationEventBox*>* eventBoxes);

  /// @brief Method .ctor, addr 0x12fc69c, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(float_t beat, int32_t groupId, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightTranslationEventBox*>* eventBoxes);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightTranslationEventBoxGroup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightTranslationEventBoxGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightTranslationEventBoxGroup(LightTranslationEventBoxGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightTranslationEventBoxGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightTranslationEventBoxGroup(LightTranslationEventBoxGroup const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion3::LightTranslationEventBoxGroup, 0x20>, "Size mismatch!");

} // namespace BeatmapSaveDataVersion3
NEED_NO_BOX(::BeatmapSaveDataVersion3::LightTranslationEventBoxGroup);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::LightTranslationEventBoxGroup*, "BeatmapSaveDataVersion3", "LightTranslationEventBoxGroup");
