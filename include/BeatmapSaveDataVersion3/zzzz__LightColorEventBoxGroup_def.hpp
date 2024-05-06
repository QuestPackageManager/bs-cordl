#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion3/LightColorEventBoxGroup.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatmapSaveDataVersion3/zzzz__EventBoxGroup_1_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LightColorEventBoxGroup)
namespace BeatmapSaveDataVersion3 {
class LightColorEventBox;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> struct Nullable_1;
}
// Forward declare root types
namespace BeatmapSaveDataVersion3 {
class LightColorEventBoxGroup;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapSaveDataVersion3::LightColorEventBoxGroup);
// Type: BeatmapSaveDataVersion3::LightColorEventBoxGroup
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// CS Name: ::BeatmapSaveDataVersion3::LightColorEventBoxGroup*
class CORDL_TYPE LightColorEventBoxGroup : public ::BeatmapSaveDataVersion3::EventBoxGroup_1<::BeatmapSaveDataVersion3::LightColorEventBox*> {
public:
  // Declarations
  /// @brief Method CopyWith, addr 0x14f1c08, size 0xe0, virtual false, abstract: false, final false
  inline ::BeatmapSaveDataVersion3::LightColorEventBoxGroup* CopyWith(::System::Nullable_1<float_t> newBeat, ::System::Nullable_1<int32_t> newGroupId);

  static inline ::BeatmapSaveDataVersion3::LightColorEventBoxGroup* New_ctor(float_t beat, int32_t groupId,
                                                                             ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightColorEventBox*>* eventBoxes);

  /// @brief Method .ctor, addr 0x14f1b98, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(float_t beat, int32_t groupId, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightColorEventBox*>* eventBoxes);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightColorEventBoxGroup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightColorEventBoxGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightColorEventBoxGroup(LightColorEventBoxGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightColorEventBoxGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightColorEventBoxGroup(LightColorEventBoxGroup const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion3::LightColorEventBoxGroup, 0x20>, "Size mismatch!");

} // namespace BeatmapSaveDataVersion3
NEED_NO_BOX(::BeatmapSaveDataVersion3::LightColorEventBoxGroup);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::LightColorEventBoxGroup*, "BeatmapSaveDataVersion3", "LightColorEventBoxGroup");
