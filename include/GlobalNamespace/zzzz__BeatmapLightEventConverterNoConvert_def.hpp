#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapLightEventConverterNoConvert.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IBeatmapLightEventConverter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapLightEventConverterNoConvert)
namespace GlobalNamespace {
struct BasicBeatmapEventType;
}
namespace GlobalNamespace {
class BeatmapEventData;
}
namespace GlobalNamespace {
struct EaseType;
}
namespace GlobalNamespace {
struct EnvironmentColorType;
}
namespace GlobalNamespace {
struct LightAxis;
}
namespace GlobalNamespace {
struct LightRotationDirection;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapLightEventConverterNoConvert;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLightEventConverterNoConvert);
// Dependencies IBeatmapLightEventConverter, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapLightEventConverterNoConvert
class CORDL_TYPE BeatmapLightEventConverterNoConvert : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::GlobalNamespace::IBeatmapLightEventConverter"
  constexpr operator ::GlobalNamespace::IBeatmapLightEventConverter*() noexcept;

  /// @brief Method ConvertBasicBeatmapEvent, addr 0x26d4f18, size 0x100, virtual true, abstract: false, final true
  inline void ConvertBasicBeatmapEvent(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapEventData*>* output, int32_t subtypeIdentifier, float_t time,
                                       ::GlobalNamespace::BasicBeatmapEventType basicBeatmapEventType, int32_t value, float_t floatValue);

  /// @brief Method ConvertLightColorBeatmapEvent, addr 0x26d5018, size 0x16c, virtual true, abstract: false, final true
  inline void ConvertLightColorBeatmapEvent(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapEventData*>* output, int32_t subtypeIdentifier, float_t time, int32_t groupId,
                                            int32_t elementId, bool usePreviousValue, ::GlobalNamespace::EaseType easeType, ::GlobalNamespace::EnvironmentColorType colorType, float_t brightness,
                                            int32_t strobeBeatFrequency, float_t strobeBrightness, bool strobeFade);

  /// @brief Method ConvertLightRotationBeatmapEvent, addr 0x26d5184, size 0x158, virtual true, abstract: false, final true
  inline void ConvertLightRotationBeatmapEvent(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapEventData*>* output, int32_t subtypeIdentifier, float_t time, int32_t groupId,
                                               int32_t elementId, bool usePreviousEventValue, ::GlobalNamespace::EaseType easeType, ::GlobalNamespace::LightAxis axis, float_t rotation,
                                               int32_t loopCount, ::GlobalNamespace::LightRotationDirection rotationDirection);

  static inline ::GlobalNamespace::BeatmapLightEventConverterNoConvert* New_ctor();

  /// @brief Method .ctor, addr 0x26d52dc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::GlobalNamespace::IBeatmapLightEventConverter"
  constexpr ::GlobalNamespace::IBeatmapLightEventConverter* i___GlobalNamespace__IBeatmapLightEventConverter() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLightEventConverterNoConvert();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLightEventConverterNoConvert", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLightEventConverterNoConvert(BeatmapLightEventConverterNoConvert&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLightEventConverterNoConvert", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLightEventConverterNoConvert(BeatmapLightEventConverterNoConvert const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13024 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLightEventConverterNoConvert, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapLightEventConverterNoConvert);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLightEventConverterNoConvert*, "", "BeatmapLightEventConverterNoConvert");
