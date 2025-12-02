#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapTypeConverters.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapTypeConverters)
namespace BeatmapSaveDataCommon {
struct Axis;
}
namespace BeatmapSaveDataCommon {
struct BeatmapEventType;
}
namespace BeatmapSaveDataCommon {
struct DistributionParamType;
}
namespace BeatmapSaveDataCommon {
struct EaseType;
}
namespace BeatmapSaveDataCommon {
struct EnvironmentColorType;
}
namespace BeatmapSaveDataCommon {
struct NoteColorType;
}
namespace BeatmapSaveDataCommon {
struct NoteCutDirection;
}
namespace BeatmapSaveDataCommon {
struct NoteLineLayer;
}
namespace BeatmapSaveDataCommon {
struct OffsetDirection;
}
namespace BeatmapSaveDataCommon {
struct RotationDirection;
}
namespace BeatmapSaveDataCommon {
struct SliderMidAnchorMode;
}
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
struct ColorType;
}
namespace BeatmapSaveDataVersion3 {
struct SliderType;
}
namespace BeatmapSaveDataVersion3 {
struct TransitionType;
}
namespace GlobalNamespace {
struct BasicBeatmapEventType;
}
namespace GlobalNamespace {
struct BeatmapEventDataBox_DistributionParamType;
}
namespace GlobalNamespace {
struct ColorType;
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
namespace GlobalNamespace {
struct NoteCutDirection;
}
namespace GlobalNamespace {
struct NoteLineLayer;
}
namespace GlobalNamespace {
struct OffsetDirection;
}
namespace GlobalNamespace {
struct SliderData_Type;
}
namespace GlobalNamespace {
struct SliderMidAnchorMode;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapTypeConverters;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapTypeConverters);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapTypeConverters
class CORDL_TYPE BeatmapTypeConverters : public ::System::Object {
public:
  // Declarations
  /// @brief Method ConvertBasicBeatmapEventType, addr 0x35eba9c, size 0x4, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BasicBeatmapEventType ConvertBasicBeatmapEventType(::BeatmapSaveDataCommon::BeatmapEventType beatmapEventType);

  /// @brief Method ConvertDistributionParamType, addr 0x35ebaa0, size 0x10, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType ConvertDistributionParamType(::BeatmapSaveDataCommon::DistributionParamType distributionParamType);

  /// @brief Method ConvertEaseType, addr 0x35eb964, size 0xe0, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::EaseType ConvertEaseType(::BeatmapSaveDataCommon::EaseType easeType);

  /// @brief Method ConvertEnvironmentColorType, addr 0x35eb93c, size 0x14, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::EnvironmentColorType ConvertEnvironmentColorType(::BeatmapSaveDataCommon::EnvironmentColorType environmentColorType);

  /// @brief Method ConvertLightAxis, addr 0x35eb950, size 0x14, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::LightAxis ConvertLightAxis(::BeatmapSaveDataCommon::Axis axis);

  /// @brief Method ConvertLightRotationDirection, addr 0x35eba88, size 0x14, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::LightRotationDirection ConvertLightRotationDirection(::BeatmapSaveDataCommon::RotationDirection rotationDirection);

  /// @brief Method ConvertNoteColorType, addr 0x35eb928, size 0x14, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::ColorType ConvertNoteColorType(::BeatmapSaveDataCommon::NoteColorType noteType);

  /// @brief Method ConvertNoteColorType, addr 0x35eb914, size 0x14, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::ColorType ConvertNoteColorType(::BeatmapSaveDataVersion2_6_0AndEarlier::ColorType noteType);

  /// @brief Method ConvertNoteCutDirection, addr 0x35ebab0, size 0x10, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::NoteCutDirection ConvertNoteCutDirection(::BeatmapSaveDataCommon::NoteCutDirection noteCutDirection);

  /// @brief Method ConvertNoteLineLayer, addr 0x35eba68, size 0x14, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::NoteLineLayer ConvertNoteLineLayer(::BeatmapSaveDataCommon::NoteLineLayer layer);

  /// @brief Method ConvertNoteLineLayer, addr 0x35eba44, size 0x14, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::NoteLineLayer ConvertNoteLineLayer(int32_t layer);

  /// @brief Method ConvertObstacleLineLayer, addr 0x35eba58, size 0x10, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::NoteLineLayer ConvertObstacleLineLayer(int32_t layer);

  /// @brief Method ConvertOffsetDirection, addr 0x35ebad4, size 0x20, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OffsetDirection ConvertOffsetDirection(::BeatmapSaveDataCommon::OffsetDirection offsetDirection);

  /// @brief Method ConvertSliderDataType, addr 0x35eba7c, size 0xc, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::SliderData_Type ConvertSliderDataType(::BeatmapSaveDataVersion3::SliderType sliderType);

  /// @brief Method ConvertSliderMidAnchorMode, addr 0x35ebac0, size 0x14, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::SliderMidAnchorMode ConvertSliderMidAnchorMode(::BeatmapSaveDataCommon::SliderMidAnchorMode sliderMidAnchorMode);

  /// @brief Method ConvertTransitionTypeToEaseType, addr 0x35ebb00, size 0xc, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::EaseType ConvertTransitionTypeToEaseType(::BeatmapSaveDataVersion3::TransitionType transitionType);

  /// @brief Method ConvertTransitionTypeToExtension, addr 0x35ebaf4, size 0xc, virtual false, abstract: false, final false
  static inline bool ConvertTransitionTypeToExtension(::BeatmapSaveDataVersion3::TransitionType transitionType);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapTypeConverters();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapTypeConverters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapTypeConverters(BeatmapTypeConverters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapTypeConverters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapTypeConverters(BeatmapTypeConverters const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14858 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapTypeConverters, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapTypeConverters);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapTypeConverters*, "", "BeatmapTypeConverters");
