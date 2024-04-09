#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatmapSaveDataVersion3/zzzz__BeatmapSaveDataItem_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(EventBoxGroup)
namespace BeatmapSaveDataVersion3 {
class EventBox;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
// Forward declare root types
namespace BeatmapSaveDataVersion3 {
class EventBoxGroup;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapSaveDataVersion3::EventBoxGroup);
// Type: BeatmapSaveDataVersion3::EventBoxGroup
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// CS Name: ::BeatmapSaveDataVersion3::EventBoxGroup*
class CORDL_TYPE EventBoxGroup : public ::BeatmapSaveDataVersion3::BeatmapSaveDataItem {
public:
  // Declarations
  __declspec(property(get = get_baseEventBoxes))::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::EventBox*>* baseEventBoxes;

  /// @brief Field g, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_g, put = __cordl_internal_set_g)) int32_t g;

  __declspec(property(get = get_groupId)) int32_t groupId;

  static inline ::BeatmapSaveDataVersion3::EventBoxGroup* New_ctor(float_t beat, int32_t groupId);

  constexpr int32_t const& __cordl_internal_get_g() const;

  constexpr int32_t& __cordl_internal_get_g();

  constexpr void __cordl_internal_set_g(int32_t value);

  /// @brief Method .ctor, addr 0x14001ec, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(float_t beat, int32_t groupId);

  /// @brief Method get_baseEventBoxes, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::EventBox*>* get_baseEventBoxes();

  /// @brief Method get_groupId, addr 0x14001e4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_groupId();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventBoxGroup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventBoxGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventBoxGroup(EventBoxGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventBoxGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventBoxGroup(EventBoxGroup const&) = delete;

  /// @brief Field g, offset: 0x14, size: 0x4, def value: None
  int32_t ___g;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion3::EventBoxGroup, 0x18>, "Size mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::EventBoxGroup, ___g) == 0x14, "Offset mismatch!");

} // namespace BeatmapSaveDataVersion3
NEED_NO_BOX(::BeatmapSaveDataVersion3::EventBoxGroup);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::EventBoxGroup*, "BeatmapSaveDataVersion3", "EventBoxGroup");
