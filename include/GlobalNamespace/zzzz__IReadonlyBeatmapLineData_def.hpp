#pragma once
// IWYU pragma private; include "GlobalNamespace/IReadonlyBeatmapLineData.hpp"
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
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: IReadonlyBeatmapLineData
class CORDL_TYPE IReadonlyBeatmapLineData {
public:
  // Declarations
  __declspec(property(get = get_beatmapObjectsData)) ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapObjectData*>* beatmapObjectsData;

  /// @brief Method get_beatmapObjectsData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapObjectData*>* get_beatmapObjectsData();

  // Ctor Parameters [CppParam { name: "", ty: "IReadonlyBeatmapLineData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IReadonlyBeatmapLineData(IReadonlyBeatmapLineData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17063 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IReadonlyBeatmapLineData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IReadonlyBeatmapLineData*, "", "IReadonlyBeatmapLineData");
