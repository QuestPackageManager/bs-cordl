#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion3/BeatmapSaveDataItem.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BeatmapSaveDataItem)
namespace BeatmapSaveDataCommon {
class IBeat;
}
namespace System {
template <typename T> class IComparable_1;
}
// Forward declare root types
namespace BeatmapSaveDataVersion3 {
class BeatmapSaveDataItem;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapSaveDataVersion3::BeatmapSaveDataItem);
// Type: BeatmapSaveDataVersion3::BeatmapSaveDataItem
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// CS Name: ::BeatmapSaveDataVersion3::BeatmapSaveDataItem*
class CORDL_TYPE BeatmapSaveDataItem : public ::System::Object {
public:
  // Declarations
  /// @brief Field b, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_b, put = __cordl_internal_set_b)) float_t b;

  __declspec(property(get = get_beat)) float_t beat;

  /// @brief Convert operator to "::BeatmapSaveDataCommon::IBeat"
  constexpr operator ::BeatmapSaveDataCommon::IBeat*() noexcept;

  /// @brief Convert operator to "::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>"
  constexpr operator ::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>*() noexcept;

  static inline ::BeatmapSaveDataVersion3::BeatmapSaveDataItem* New_ctor(float_t beat);

  constexpr float_t const& __cordl_internal_get_b() const;

  constexpr float_t& __cordl_internal_get_b();

  constexpr void __cordl_internal_set_b(float_t value);

  /// @brief Method .ctor, addr 0x14f7c94, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(float_t beat);

  /// @brief Method get_beat, addr 0x14f7c8c, size 0x8, virtual true, abstract: false, final true
  inline float_t get_beat();

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

  /// @brief Field b, offset: 0x10, size: 0x4, def value: None
  float_t ___b;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion3::BeatmapSaveDataItem, 0x18>, "Size mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::BeatmapSaveDataItem, ___b) == 0x10, "Offset mismatch!");

} // namespace BeatmapSaveDataVersion3
NEED_NO_BOX(::BeatmapSaveDataVersion3::BeatmapSaveDataItem);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::BeatmapSaveDataItem*, "BeatmapSaveDataVersion3", "BeatmapSaveDataItem");
