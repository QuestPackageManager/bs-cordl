#pragma once
// IWYU pragma private; include "GlobalNamespace/LightColorBeatmapEventDataBox.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapEventDataBox_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LightColorBeatmapEventDataBox)
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
class LightColorBaseData;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class LightColorBeatmapEventDataBox;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightColorBeatmapEventDataBox);
// Dependencies BeatmapEventDataBox
namespace GlobalNamespace {
// Is value type: false
// CS Name: LightColorBeatmapEventDataBox
class CORDL_TYPE LightColorBeatmapEventDataBox : public ::GlobalNamespace::BeatmapEventDataBox {
public:
  // Declarations
  /// @brief Field _beatStep, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__beatStep, put = __cordl_internal_set__beatStep)) float_t _beatStep;

  /// @brief Field _brightnessDistributionShouldAffectFirstBaseEvent, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get__brightnessDistributionShouldAffectFirstBaseEvent,
                      put = __cordl_internal_set__brightnessDistributionShouldAffectFirstBaseEvent)) bool _brightnessDistributionShouldAffectFirstBaseEvent;

  /// @brief Field _brightnessStep, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__brightnessStep, put = __cordl_internal_set__brightnessStep)) float_t _brightnessStep;

  /// @brief Field _lightColorBaseDataList, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__lightColorBaseDataList,
                      put = __cordl_internal_set__lightColorBaseDataList)) ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::LightColorBaseData*>* _lightColorBaseDataList;

  __declspec(property(get = get_beatStep)) float_t beatStep;

  __declspec(property(get = get_subtypeIdentifier)) int32_t subtypeIdentifier;

  static inline ::GlobalNamespace::LightColorBeatmapEventDataBox* New_ctor(::GlobalNamespace::IndexFilter* indexFilter, float_t beatDistributionParam,
                                                                           ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType beatDistributionParamType, float_t brightnessDistributionParam,
                                                                           ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType brightnessDistributionParamType,
                                                                           bool brightnessDistributionShouldAffectFirstBaseEvent, ::GlobalNamespace::EaseType brightnessDistributionEaseType,
                                                                           ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::LightColorBaseData*>* lightColorBaseDataList);

  /// @brief Method Unpack, addr 0x26bb520, size 0x518, virtual true, abstract: false, final false
  inline void Unpack(float_t groupBoxBeat, int32_t groupId, int32_t elementId, int32_t durationOrderIndex, int32_t distributionOrderIndex, float_t maxBeat,
                     ::GlobalNamespace::IBeatToTimeConverter* beatToTimeConverter, ::GlobalNamespace::IBeatmapLightEventConverter* lightEventConverter,
                     ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapEventData*>* output);

  constexpr float_t const& __cordl_internal_get__beatStep() const;

  constexpr float_t& __cordl_internal_get__beatStep();

  constexpr bool const& __cordl_internal_get__brightnessDistributionShouldAffectFirstBaseEvent() const;

  constexpr bool& __cordl_internal_get__brightnessDistributionShouldAffectFirstBaseEvent();

  constexpr float_t const& __cordl_internal_get__brightnessStep() const;

  constexpr float_t& __cordl_internal_get__brightnessStep();

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::LightColorBaseData*>* const& __cordl_internal_get__lightColorBaseDataList() const;

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::LightColorBaseData*>*& __cordl_internal_get__lightColorBaseDataList();

  constexpr void __cordl_internal_set__beatStep(float_t value);

  constexpr void __cordl_internal_set__brightnessDistributionShouldAffectFirstBaseEvent(bool value);

  constexpr void __cordl_internal_set__brightnessStep(float_t value);

  constexpr void __cordl_internal_set__lightColorBaseDataList(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::LightColorBaseData*>* value);

  /// @brief Method .ctor, addr 0x26bb318, size 0x208, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IndexFilter* indexFilter, float_t beatDistributionParam, ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType beatDistributionParamType,
                    float_t brightnessDistributionParam, ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType brightnessDistributionParamType,
                    bool brightnessDistributionShouldAffectFirstBaseEvent, ::GlobalNamespace::EaseType brightnessDistributionEaseType,
                    ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::LightColorBaseData*>* lightColorBaseDataList);

  /// @brief Method get_beatStep, addr 0x26bb310, size 0x8, virtual true, abstract: false, final false
  inline float_t get_beatStep();

  /// @brief Method get_subtypeIdentifier, addr 0x26bb308, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_subtypeIdentifier();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightColorBeatmapEventDataBox();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightColorBeatmapEventDataBox", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightColorBeatmapEventDataBox(LightColorBeatmapEventDataBox&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightColorBeatmapEventDataBox", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightColorBeatmapEventDataBox(LightColorBeatmapEventDataBox const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12916 };

  /// @brief Field _lightColorBaseDataList, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::LightColorBaseData*>* ____lightColorBaseDataList;

  /// @brief Field _brightnessStep, offset: 0x40, size: 0x4, def value: None
  float_t ____brightnessStep;

  /// @brief Field _beatStep, offset: 0x44, size: 0x4, def value: None
  float_t ____beatStep;

  /// @brief Field _brightnessDistributionShouldAffectFirstBaseEvent, offset: 0x48, size: 0x1, def value: None
  bool ____brightnessDistributionShouldAffectFirstBaseEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LightColorBeatmapEventDataBox, ____lightColorBaseDataList) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorBeatmapEventDataBox, ____brightnessStep) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorBeatmapEventDataBox, ____beatStep) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorBeatmapEventDataBox, ____brightnessDistributionShouldAffectFirstBaseEvent) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightColorBeatmapEventDataBox, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightColorBeatmapEventDataBox);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightColorBeatmapEventDataBox*, "", "LightColorBeatmapEventDataBox");
