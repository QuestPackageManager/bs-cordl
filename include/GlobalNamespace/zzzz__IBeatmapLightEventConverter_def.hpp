#pragma once
// IWYU pragma private; include "GlobalNamespace/IBeatmapLightEventConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IBeatmapLightEventConverter)
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
class IBeatmapLightEventConverter;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IBeatmapLightEventConverter);
// Type: ::IBeatmapLightEventConverter
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::IBeatmapLightEventConverter*
class CORDL_TYPE IBeatmapLightEventConverter {
public:
  // Declarations
  /// @brief Method ConvertBasicBeatmapEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ConvertBasicBeatmapEvent(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapEventData*>* output, int32_t subtypeIdentifier, float_t time,
                                       ::GlobalNamespace::BasicBeatmapEventType basicBeatmapEventType, int32_t value, float_t floatValue);

  /// @brief Method ConvertLightColorBeatmapEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ConvertLightColorBeatmapEvent(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapEventData*>* output, int32_t subtypeIdentifier, float_t time, int32_t groupId,
                                            int32_t elementId, bool usePreviousValue, ::GlobalNamespace::EaseType easeType, ::GlobalNamespace::EnvironmentColorType colorType, float_t brightness,
                                            int32_t strobeBeatFrequency, float_t strobeBrightness, bool strobeFade);

  /// @brief Method ConvertLightRotationBeatmapEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ConvertLightRotationBeatmapEvent(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapEventData*>* output, int32_t subtypeIdentifier, float_t time, int32_t groupId,
                                               int32_t elementId, bool usePreviousEventValue, ::GlobalNamespace::EaseType easeType, ::GlobalNamespace::LightAxis axis, float_t rotation,
                                               int32_t loopCount, ::GlobalNamespace::LightRotationDirection rotationDirection);

  // Ctor Parameters [CppParam { name: "", ty: "IBeatmapLightEventConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IBeatmapLightEventConverter(IBeatmapLightEventConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IBeatmapLightEventConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IBeatmapLightEventConverter(IBeatmapLightEventConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12985 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IBeatmapLightEventConverter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IBeatmapLightEventConverter*, "", "IBeatmapLightEventConverter");
