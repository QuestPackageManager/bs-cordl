#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapDataAddTestSlidersTransform)
namespace GlobalNamespace {
class BeatmapDataItem;
}
namespace GlobalNamespace {
struct ColorType;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace GlobalNamespace {
class NoteData;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapDataAddTestSlidersTransform;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapDataAddTestSlidersTransform);
// Type: ::BeatmapDataAddTestSlidersTransform
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapDataAddTestSlidersTransform*
class CORDL_TYPE BeatmapDataAddTestSlidersTransform : public ::System::Object {
public:
  // Declarations
  /// @brief Method CreateTransformedData, addr 0x149a3b0, size 0x320, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::IReadonlyBeatmapData* CreateTransformedData(::GlobalNamespace::IReadonlyBeatmapData* beatmapData);

  /// @brief Method FindNextSameColorTypeNote, addr 0x149a6d0, size 0x1ec, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::NoteData* FindNextSameColorTypeNote(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapDataItem*>* beatmapDataItems, int32_t startIndex,
                                                                       ::GlobalNamespace::ColorType colorType);

  static inline ::GlobalNamespace::BeatmapDataAddTestSlidersTransform* New_ctor();

  /// @brief Method .ctor, addr 0x149a8bc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataAddTestSlidersTransform();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataAddTestSlidersTransform", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapDataAddTestSlidersTransform(BeatmapDataAddTestSlidersTransform&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataAddTestSlidersTransform", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapDataAddTestSlidersTransform(BeatmapDataAddTestSlidersTransform const&) = delete;

  /// @brief Field kMaxTimeDiff offset 0xffffffff size 0x4
  static constexpr float_t kMaxTimeDiff{ 2.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapDataAddTestSlidersTransform, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapDataAddTestSlidersTransform);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDataAddTestSlidersTransform*, "", "BeatmapDataAddTestSlidersTransform");
