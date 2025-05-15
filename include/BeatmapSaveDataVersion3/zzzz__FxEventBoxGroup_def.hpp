#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion3/FxEventBoxGroup.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatmapSaveDataVersion3/zzzz__EventBoxGroup_1_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__FxEventType_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FxEventBoxGroup)
namespace BeatmapSaveDataVersion3 {
class FxEventBox;
}
namespace BeatmapSaveDataVersion3 {
struct FxEventType;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace BeatmapSaveDataVersion3 {
class FxEventBoxGroup;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapSaveDataVersion3::FxEventBoxGroup);
// Dependencies BeatmapSaveDataVersion3.EventBoxGroup`1<T>, BeatmapSaveDataVersion3.FxEventType
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// CS Name: BeatmapSaveDataVersion3.FxEventBoxGroup
class CORDL_TYPE FxEventBoxGroup : public ::BeatmapSaveDataVersion3::EventBoxGroup_1<::BeatmapSaveDataVersion3::FxEventBox*> {
public:
  // Declarations
  /// @brief Field t, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_t, put = __cordl_internal_set_t)) ::BeatmapSaveDataVersion3::FxEventType t;

  __declspec(property(get = get_type)) ::BeatmapSaveDataVersion3::FxEventType type;

  static inline ::BeatmapSaveDataVersion3::FxEventBoxGroup* New_ctor(float_t beat, int32_t groupId, ::BeatmapSaveDataVersion3::FxEventType type,
                                                                     ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::FxEventBox*>* eventBoxes);

  constexpr ::BeatmapSaveDataVersion3::FxEventType const& __cordl_internal_get_t() const;

  constexpr ::BeatmapSaveDataVersion3::FxEventType& __cordl_internal_get_t();

  constexpr void __cordl_internal_set_t(::BeatmapSaveDataVersion3::FxEventType value);

  /// @brief Method .ctor, addr 0x2709760, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(float_t beat, int32_t groupId, ::BeatmapSaveDataVersion3::FxEventType type, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::FxEventBox*>* eventBoxes);

  /// @brief Method get_type, addr 0x2709758, size 0x8, virtual false, abstract: false, final false
  inline ::BeatmapSaveDataVersion3::FxEventType get_type();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FxEventBoxGroup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FxEventBoxGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FxEventBoxGroup(FxEventBoxGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FxEventBoxGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FxEventBoxGroup(FxEventBoxGroup const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13399 };

  /// @brief Field t, offset: 0x20, size: 0x4, def value: None
  ::BeatmapSaveDataVersion3::FxEventType ___t;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatmapSaveDataVersion3::FxEventBoxGroup, ___t) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion3::FxEventBoxGroup, 0x28>, "Size mismatch!");

} // namespace BeatmapSaveDataVersion3
NEED_NO_BOX(::BeatmapSaveDataVersion3::FxEventBoxGroup);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::FxEventBoxGroup*, "BeatmapSaveDataVersion3", "FxEventBoxGroup");
