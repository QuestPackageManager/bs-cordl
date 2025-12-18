#pragma once
// IWYU pragma private; include "GlobalNamespace/IBeatmapBoxConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IBeatmapBoxConverter)
namespace BeatmapSaveDataVersion4 {
struct LightRotationEventBox;
}
namespace BeatmapSaveDataVersion4 {
struct LightRotationEvent;
}
namespace GlobalNamespace {
class LightRotationBaseData;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
// Forward declare root types
namespace GlobalNamespace {
class IBeatmapBoxConverter;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IBeatmapBoxConverter);
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: IBeatmapBoxConverter
class CORDL_TYPE IBeatmapBoxConverter {
public:
  // Declarations
  /// @brief Method ConvertBoxEventGroupId, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ConvertBoxEventGroupId(::System::Collections::Generic::List_1<::System::ValueTuple_2<int32_t, int32_t>>* output, int32_t groupId, int32_t boxEventType);

  /// @brief Method ConvertRotationEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::GlobalNamespace::LightRotationBaseData* ConvertRotationEvent(float_t beat, ::BeatmapSaveDataVersion4::LightRotationEvent lightRotationEvent,
                                                                        ::BeatmapSaveDataVersion4::LightRotationEventBox eventBox);

  // Ctor Parameters [CppParam { name: "", ty: "IBeatmapBoxConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IBeatmapBoxConverter(IBeatmapBoxConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15008 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IBeatmapBoxConverter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IBeatmapBoxConverter*, "", "IBeatmapBoxConverter");
