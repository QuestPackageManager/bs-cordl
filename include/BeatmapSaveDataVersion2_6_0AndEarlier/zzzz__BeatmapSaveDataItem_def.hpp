#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapSaveDataItem)
namespace System {
template <typename T> class IComparable_1;
}
// Forward declare root types
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
class BeatmapSaveDataItem;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem);
// Type: BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14843))
// CS Name: ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem*
class CORDL_TYPE BeatmapSaveDataItem : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_time)) float_t time;

  /// @brief Convert operator to "::System::IComparable_1<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem*>"
  constexpr operator ::System::IComparable_1<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem*>*() noexcept;

  /// @brief Method get_time, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t get_time();

  /// @brief Method CompareTo, addr 0xe0914c, size 0x10b0, virtual true, abstract: false, final true
  inline int32_t CompareTo(::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem* other);

  static inline ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem* New_ctor();

  /// @brief Method .ctor, addr 0xe08e7c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveDataItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapSaveDataItem(BeatmapSaveDataItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveDataItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapSaveDataItem(BeatmapSaveDataItem const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapSaveDataItem();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem, 0x10>, "Size mismatch!");

} // namespace BeatmapSaveDataVersion2_6_0AndEarlier
NEED_NO_BOX(::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem*, "BeatmapSaveDataVersion2_6_0AndEarlier", "BeatmapSaveDataItem");
