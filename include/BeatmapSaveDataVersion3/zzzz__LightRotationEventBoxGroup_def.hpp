#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion3/LightRotationEventBoxGroup.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatmapSaveDataVersion3/zzzz__EventBoxGroup_1_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LightRotationEventBoxGroup)
namespace BeatmapSaveDataVersion3 {
class LightRotationEventBox;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> struct Nullable_1;
}
// Forward declare root types
namespace BeatmapSaveDataVersion3 {
class LightRotationEventBoxGroup;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapSaveDataVersion3::LightRotationEventBoxGroup);
// Dependencies BeatmapSaveDataVersion3.EventBoxGroup`1<T>
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// CS Name: BeatmapSaveDataVersion3.LightRotationEventBoxGroup
class CORDL_TYPE LightRotationEventBoxGroup : public ::BeatmapSaveDataVersion3::EventBoxGroup_1<::BeatmapSaveDataVersion3::LightRotationEventBox*> {
public:
  // Declarations
  /// @brief Method CopyWith, addr 0x2709928, size 0xd8, virtual false, abstract: false, final false
  inline ::BeatmapSaveDataVersion3::LightRotationEventBoxGroup* CopyWith(::System::Nullable_1<float_t> newBeat, ::System::Nullable_1<int32_t> newGroupId);

  static inline ::BeatmapSaveDataVersion3::LightRotationEventBoxGroup* New_ctor(float_t beat, int32_t groupId,
                                                                                ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightRotationEventBox*>* eventBoxes);

  /// @brief Method .ctor, addr 0x27098b8, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(float_t beat, int32_t groupId, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightRotationEventBox*>* eventBoxes);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightRotationEventBoxGroup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightRotationEventBoxGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightRotationEventBoxGroup(LightRotationEventBoxGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightRotationEventBoxGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightRotationEventBoxGroup(LightRotationEventBoxGroup const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13402 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion3::LightRotationEventBoxGroup, 0x20>, "Size mismatch!");

} // namespace BeatmapSaveDataVersion3
NEED_NO_BOX(::BeatmapSaveDataVersion3::LightRotationEventBoxGroup);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::LightRotationEventBoxGroup*, "BeatmapSaveDataVersion3", "LightRotationEventBoxGroup");
