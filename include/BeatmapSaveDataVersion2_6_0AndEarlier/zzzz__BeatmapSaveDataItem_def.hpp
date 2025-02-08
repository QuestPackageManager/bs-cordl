#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion2_6_0AndEarlier/BeatmapSaveDataItem.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatmapSaveDataCommon/zzzz__IBeat_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BeatmapSaveDataItem)
namespace BeatmapSaveDataCommon {
class IBeat;
}
// Forward declare root types
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
class BeatmapSaveDataItem;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem);
// Dependencies BeatmapSaveDataCommon.IBeat, System.IComparable`1<T>, System.Object
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
// Is value type: false
// CS Name: BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapSaveDataItem
class CORDL_TYPE BeatmapSaveDataItem : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_beat)) float_t beat;

  __declspec(property(get = get_time)) float_t time;

  /// @brief Convert operator to "::BeatmapSaveDataCommon::IBeat"
  constexpr operator ::BeatmapSaveDataCommon::IBeat*() noexcept;

  /// @brief Convert operator to "::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>"
  constexpr operator ::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>*() noexcept;

  static inline ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem* New_ctor();

  /// @brief Method .ctor, addr 0x270aba0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_beat, addr 0x270ae04, size 0xc, virtual true, abstract: false, final true
  inline float_t get_beat();

  /// @brief Method get_time, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline float_t get_time();

  /// @brief Convert to "::BeatmapSaveDataCommon::IBeat"
  constexpr ::BeatmapSaveDataCommon::IBeat* i___BeatmapSaveDataCommon__IBeat() noexcept;

  /// @brief Convert to "::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>"
  constexpr ::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>* i___System__IComparable_1___BeatmapSaveDataCommon__IBeat__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapSaveDataItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveDataItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapSaveDataItem(BeatmapSaveDataItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveDataItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapSaveDataItem(BeatmapSaveDataItem const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13439 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem, 0x10>, "Size mismatch!");

} // namespace BeatmapSaveDataVersion2_6_0AndEarlier
NEED_NO_BOX(::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem*, "BeatmapSaveDataVersion2_6_0AndEarlier", "BeatmapSaveDataItem");
