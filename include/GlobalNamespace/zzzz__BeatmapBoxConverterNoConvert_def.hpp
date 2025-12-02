#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapBoxConverterNoConvert.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapBoxConverterNoConvert)
namespace BeatmapSaveDataVersion4 {
struct LightRotationEventBox;
}
namespace BeatmapSaveDataVersion4 {
struct LightRotationEvent;
}
namespace GlobalNamespace {
class IBeatmapBoxConverter;
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
class BeatmapBoxConverterNoConvert;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapBoxConverterNoConvert);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapBoxConverterNoConvert
class CORDL_TYPE BeatmapBoxConverterNoConvert : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::GlobalNamespace::IBeatmapBoxConverter"
  constexpr operator ::GlobalNamespace::IBeatmapBoxConverter*() noexcept;

  /// @brief Method ConvertBoxEventGroupId, addr 0x3606244, size 0xc8, virtual true, abstract: false, final true
  inline void ConvertBoxEventGroupId(::System::Collections::Generic::List_1<::System::ValueTuple_2<int32_t, int32_t>>* output, int32_t groupId, int32_t boxEventType);

  /// @brief Method ConvertRotationEvent, addr 0x360630c, size 0x9c, virtual true, abstract: false, final true
  inline ::GlobalNamespace::LightRotationBaseData* ConvertRotationEvent(float_t beat, ::BeatmapSaveDataVersion4::LightRotationEvent lightRotationEvent,
                                                                        ::BeatmapSaveDataVersion4::LightRotationEventBox eventBox);

  static inline ::GlobalNamespace::BeatmapBoxConverterNoConvert* New_ctor();

  /// @brief Method .ctor, addr 0x36063a8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::GlobalNamespace::IBeatmapBoxConverter"
  constexpr ::GlobalNamespace::IBeatmapBoxConverter* i___GlobalNamespace__IBeatmapBoxConverter() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapBoxConverterNoConvert();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapBoxConverterNoConvert", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapBoxConverterNoConvert(BeatmapBoxConverterNoConvert&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapBoxConverterNoConvert", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapBoxConverterNoConvert(BeatmapBoxConverterNoConvert const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14993 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapBoxConverterNoConvert, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapBoxConverterNoConvert);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapBoxConverterNoConvert*, "", "BeatmapBoxConverterNoConvert");
