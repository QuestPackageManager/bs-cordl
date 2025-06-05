#pragma once
// IWYU pragma private; include "GlobalNamespace/LightRotationBeatmapEventDataBox.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapEventDataBox_def.hpp"
#include "GlobalNamespace/zzzz__LightAxis_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LightRotationBeatmapEventDataBox)
namespace GlobalNamespace {
struct BeatmapEventDataBox_DistributionParamType;
}
namespace GlobalNamespace {
class BeatmapEventData;
}
namespace GlobalNamespace {
struct EaseType;
}
namespace GlobalNamespace {
class IBeatToTimeConverter;
}
namespace GlobalNamespace {
class IBeatmapLightEventConverter;
}
namespace GlobalNamespace {
class IndexFilter;
}
namespace GlobalNamespace {
struct LightAxis;
}
namespace GlobalNamespace {
class LightRotationBaseData;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class LightRotationBeatmapEventDataBox;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightRotationBeatmapEventDataBox);
// Dependencies BeatmapEventDataBox, LightAxis
namespace GlobalNamespace {
// Is value type: false
// CS Name: LightRotationBeatmapEventDataBox
class CORDL_TYPE LightRotationBeatmapEventDataBox : public ::GlobalNamespace::BeatmapEventDataBox {
public:
  // Declarations
  /// @brief Field _axis, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__axis, put = __cordl_internal_set__axis)) ::GlobalNamespace::LightAxis _axis;

  /// @brief Field _beatStep, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get__beatStep, put = __cordl_internal_set__beatStep)) float_t _beatStep;

  /// @brief Field _lightRotationBaseDataList, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__lightRotationBaseDataList,
                      put = __cordl_internal_set__lightRotationBaseDataList)) ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::LightRotationBaseData*>* _lightRotationBaseDataList;

  /// @brief Field _rotationDirection, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__rotationDirection, put = __cordl_internal_set__rotationDirection)) float_t _rotationDirection;

  /// @brief Field _rotationStep, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__rotationStep, put = __cordl_internal_set__rotationStep)) float_t _rotationStep;

  __declspec(property(get = get_beatStep)) float_t beatStep;

  __declspec(property(get = get_subtypeIdentifier)) int32_t subtypeIdentifier;

  static inline ::GlobalNamespace::LightRotationBeatmapEventDataBox* New_ctor(::GlobalNamespace::IndexFilter* indexFilter, float_t beatDistributionParam,
                                                                              ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType beatDistributionParamType, ::GlobalNamespace::LightAxis axis,
                                                                              bool flipRotation, float_t rotationDistributionParam,
                                                                              ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType rotationDistributionParamType,
                                                                              bool rotationDistributionShouldAffectFirstBaseEvent, ::GlobalNamespace::EaseType rotationDistributionEaseType,
                                                                              ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::LightRotationBaseData*>* lightRotationBaseDataList);

  /// @brief Method Unpack, addr 0x26bf784, size 0x970, virtual true, abstract: false, final false
  inline void Unpack(float_t groupBoxBeat, int32_t groupId, int32_t elementId, int32_t durationOrderIndex, int32_t distributionOrderIndex, float_t maxBeat,
                     ::GlobalNamespace::IBeatToTimeConverter* beatToTimeConverter, ::GlobalNamespace::IBeatmapLightEventConverter* lightEventConverter,
                     ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapEventData*>* output);

  constexpr ::GlobalNamespace::LightAxis const& __cordl_internal_get__axis() const;

  constexpr ::GlobalNamespace::LightAxis& __cordl_internal_get__axis();

  constexpr float_t const& __cordl_internal_get__beatStep() const;

  constexpr float_t& __cordl_internal_get__beatStep();

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::LightRotationBaseData*>* const& __cordl_internal_get__lightRotationBaseDataList() const;

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::LightRotationBaseData*>*& __cordl_internal_get__lightRotationBaseDataList();

  constexpr float_t const& __cordl_internal_get__rotationDirection() const;

  constexpr float_t& __cordl_internal_get__rotationDirection();

  constexpr float_t const& __cordl_internal_get__rotationStep() const;

  constexpr float_t& __cordl_internal_get__rotationStep();

  constexpr void __cordl_internal_set__axis(::GlobalNamespace::LightAxis value);

  constexpr void __cordl_internal_set__beatStep(float_t value);

  constexpr void __cordl_internal_set__lightRotationBaseDataList(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::LightRotationBaseData*>* value);

  constexpr void __cordl_internal_set__rotationDirection(float_t value);

  constexpr void __cordl_internal_set__rotationStep(float_t value);

  /// @brief Method .ctor, addr 0x26bf554, size 0x230, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IndexFilter* indexFilter, float_t beatDistributionParam, ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType beatDistributionParamType,
                    ::GlobalNamespace::LightAxis axis, bool flipRotation, float_t rotationDistributionParam, ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType rotationDistributionParamType,
                    bool rotationDistributionShouldAffectFirstBaseEvent, ::GlobalNamespace::EaseType rotationDistributionEaseType,
                    ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::LightRotationBaseData*>* lightRotationBaseDataList);

  /// @brief Method get_beatStep, addr 0x26bf54c, size 0x8, virtual true, abstract: false, final false
  inline float_t get_beatStep();

  /// @brief Method get_subtypeIdentifier, addr 0x26bf544, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_subtypeIdentifier();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightRotationBeatmapEventDataBox();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightRotationBeatmapEventDataBox", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightRotationBeatmapEventDataBox(LightRotationBeatmapEventDataBox&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightRotationBeatmapEventDataBox", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightRotationBeatmapEventDataBox(LightRotationBeatmapEventDataBox const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12918 };

  /// @brief Field _lightRotationBaseDataList, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::LightRotationBaseData*>* ____lightRotationBaseDataList;

  /// @brief Field _axis, offset: 0x40, size: 0x4, def value: None
  ::GlobalNamespace::LightAxis ____axis;

  /// @brief Field _rotationDirection, offset: 0x44, size: 0x4, def value: None
  float_t ____rotationDirection;

  /// @brief Field _rotationStep, offset: 0x48, size: 0x4, def value: None
  float_t ____rotationStep;

  /// @brief Field _beatStep, offset: 0x4c, size: 0x4, def value: None
  float_t ____beatStep;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LightRotationBeatmapEventDataBox, ____lightRotationBaseDataList) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightRotationBeatmapEventDataBox, ____axis) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightRotationBeatmapEventDataBox, ____rotationDirection) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightRotationBeatmapEventDataBox, ____rotationStep) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightRotationBeatmapEventDataBox, ____beatStep) == 0x4c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightRotationBeatmapEventDataBox, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightRotationBeatmapEventDataBox);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightRotationBeatmapEventDataBox*, "", "LightRotationBeatmapEventDataBox");
