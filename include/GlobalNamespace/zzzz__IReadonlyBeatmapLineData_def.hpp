#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IReadonlyBeatmapLineData)
namespace GlobalNamespace {
class BeatmapObjectData;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
// Forward declare root types
namespace GlobalNamespace {
class IReadonlyBeatmapLineData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IReadonlyBeatmapLineData);
// Type: ::IReadonlyBeatmapLineData
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::IReadonlyBeatmapLineData*
class CORDL_TYPE IReadonlyBeatmapLineData {
public:
  // Declarations
  __declspec(property(get = get_beatmapObjectsData))::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapObjectData*>* beatmapObjectsData;

  /// @brief Method get_beatmapObjectsData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapObjectData*>* get_beatmapObjectsData();

  // Ctor Parameters [CppParam { name: "", ty: "IReadonlyBeatmapLineData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IReadonlyBeatmapLineData(IReadonlyBeatmapLineData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IReadonlyBeatmapLineData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IReadonlyBeatmapLineData(IReadonlyBeatmapLineData const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IReadonlyBeatmapLineData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IReadonlyBeatmapLineData*, "", "IReadonlyBeatmapLineData");
