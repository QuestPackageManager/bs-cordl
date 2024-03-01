#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapEventDataBox_def.hpp"
#include "GlobalNamespace/zzzz__LightAxis_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LightTranslationBeatmapEventDataBox)
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
class IndexFilter;
}
namespace GlobalNamespace {
struct LightAxis;
}
namespace GlobalNamespace {
class LightTranslationBaseData;
}
namespace GlobalNamespace {
struct __BeatmapEventDataBox__DistributionParamType;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class LightTranslationBeatmapEventDataBox;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightTranslationBeatmapEventDataBox);
// Type: ::LightTranslationBeatmapEventDataBox
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 76, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LightTranslationBeatmapEventDataBox*
class CORDL_TYPE LightTranslationBeatmapEventDataBox : public ::GlobalNamespace::BeatmapEventDataBox {
public:
  // Declarations
  /// @brief Field _axis, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__axis, put = __cordl_internal_set__axis))::GlobalNamespace::LightAxis _axis;

  /// @brief Field _beatStep, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__beatStep, put = __cordl_internal_set__beatStep)) float_t _beatStep;

  /// @brief Field _lightTranslationBaseDataList, offset 0x38, size 0x8
  __declspec(
      property(get = __cordl_internal_get__lightTranslationBaseDataList,
               put = __cordl_internal_set__lightTranslationBaseDataList))::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::LightTranslationBaseData*>* _lightTranslationBaseDataList;

  /// @brief Field _translationDirection, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__translationDirection, put = __cordl_internal_set__translationDirection)) float_t _translationDirection;

  __declspec(property(get = get_beatStep)) float_t beatStep;

  __declspec(property(get = get_subtypeIdentifier)) int32_t subtypeIdentifier;

  static inline ::GlobalNamespace::LightTranslationBeatmapEventDataBox*
  New_ctor(::GlobalNamespace::IndexFilter* indexFilter, float_t beatDistributionParam, ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType beatDistributionParamType,
           ::GlobalNamespace::LightAxis axis, bool flipTranslation, float_t gapDistributionParam, ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType gapDistributionParamType,
           bool gapDistributionShouldAffectFirstBaseEvent, ::GlobalNamespace::EaseType gapDistributionEaseType,
           ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::LightTranslationBaseData*>* lightTranslationBaseDataList);

  /// @brief Method Unpack, addr 0x12c0cbc, size 0x4e4, virtual true, abstract: false, final false
  inline void Unpack(float_t groupBoxBeat, int32_t groupId, int32_t elementId, int32_t durationOrderIndex, int32_t distributionOrderIndex, float_t maxBeat,
                     ::GlobalNamespace::IBeatToTimeConverter* beatToTimeConverter, ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapEventData*>* output);

  constexpr ::GlobalNamespace::LightAxis const& __cordl_internal_get__axis() const;

  constexpr ::GlobalNamespace::LightAxis& __cordl_internal_get__axis();

  constexpr float_t const& __cordl_internal_get__beatStep() const;

  constexpr float_t& __cordl_internal_get__beatStep();

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::LightTranslationBaseData*>*& __cordl_internal_get__lightTranslationBaseDataList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::LightTranslationBaseData*>*> const&
  __cordl_internal_get__lightTranslationBaseDataList() const;

  constexpr float_t const& __cordl_internal_get__translationDirection() const;

  constexpr float_t& __cordl_internal_get__translationDirection();

  constexpr void __cordl_internal_set__axis(::GlobalNamespace::LightAxis value);

  constexpr void __cordl_internal_set__beatStep(float_t value);

  constexpr void __cordl_internal_set__lightTranslationBaseDataList(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::LightTranslationBaseData*>* value);

  constexpr void __cordl_internal_set__translationDirection(float_t value);

  /// @brief Method .ctor, addr 0x12c0a88, size 0x234, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IndexFilter* indexFilter, float_t beatDistributionParam, ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType beatDistributionParamType,
                    ::GlobalNamespace::LightAxis axis, bool flipTranslation, float_t gapDistributionParam, ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType gapDistributionParamType,
                    bool gapDistributionShouldAffectFirstBaseEvent, ::GlobalNamespace::EaseType gapDistributionEaseType,
                    ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::LightTranslationBaseData*>* lightTranslationBaseDataList);

  /// @brief Method get_beatStep, addr 0x12c0a80, size 0x8, virtual true, abstract: false, final false
  inline float_t get_beatStep();

  /// @brief Method get_subtypeIdentifier, addr 0x12c0a78, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_subtypeIdentifier();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightTranslationBeatmapEventDataBox();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightTranslationBeatmapEventDataBox", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightTranslationBeatmapEventDataBox(LightTranslationBeatmapEventDataBox&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightTranslationBeatmapEventDataBox", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightTranslationBeatmapEventDataBox(LightTranslationBeatmapEventDataBox const&) = delete;

  /// @brief Field _lightTranslationBaseDataList, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::LightTranslationBaseData*>* ____lightTranslationBaseDataList;

  /// @brief Field _axis, offset: 0x40, size: 0x4, def value: None
  ::GlobalNamespace::LightAxis ____axis;

  /// @brief Field _translationDirection, offset: 0x44, size: 0x4, def value: None
  float_t ____translationDirection;

  /// @brief Field _beatStep, offset: 0x48, size: 0x4, def value: None
  float_t ____beatStep;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightTranslationBeatmapEventDataBox, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationBeatmapEventDataBox, ____lightTranslationBaseDataList) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationBeatmapEventDataBox, ____axis) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationBeatmapEventDataBox, ____translationDirection) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationBeatmapEventDataBox, ____beatStep) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightTranslationBeatmapEventDataBox);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightTranslationBeatmapEventDataBox*, "", "LightTranslationBeatmapEventDataBox");
