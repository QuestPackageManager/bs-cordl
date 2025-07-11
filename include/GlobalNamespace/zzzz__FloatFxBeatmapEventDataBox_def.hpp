#pragma once
// IWYU pragma private; include "GlobalNamespace/FloatFxBeatmapEventDataBox.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FxBeatmapEventDataBox_2_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FloatFxBeatmapEventDataBox)
namespace GlobalNamespace {
struct BeatmapEventDataBox_DistributionParamType;
}
namespace GlobalNamespace {
struct EaseType;
}
namespace GlobalNamespace {
class FloatFxBaseData;
}
namespace GlobalNamespace {
class FloatFxBeatmapEventData;
}
namespace GlobalNamespace {
class IndexFilter;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
// Forward declare root types
namespace GlobalNamespace {
class FloatFxBeatmapEventDataBox;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FloatFxBeatmapEventDataBox);
// Dependencies FxBeatmapEventDataBox`2<TIn, TOut>
namespace GlobalNamespace {
// Is value type: false
// CS Name: FloatFxBeatmapEventDataBox
class CORDL_TYPE FloatFxBeatmapEventDataBox : public ::GlobalNamespace::FxBeatmapEventDataBox_2<::GlobalNamespace::FloatFxBaseData*, ::GlobalNamespace::FloatFxBeatmapEventData*> {
public:
  // Declarations
  /// @brief Field _beatStep, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__beatStep, put = __cordl_internal_set__beatStep)) float_t _beatStep;

  /// @brief Field _vfxBaseDataList, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__vfxBaseDataList,
                      put = __cordl_internal_set__vfxBaseDataList)) ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::FloatFxBaseData*>* _vfxBaseDataList;

  __declspec(property(get = get_beatStep)) float_t beatStep;

  __declspec(property(get = get_subtypeIdentifier)) int32_t subtypeIdentifier;

  /// @brief Method CreateVfxBeatmapEventData, addr 0x26bddcc, size 0xac, virtual true, abstract: false, final false
  inline ::GlobalNamespace::FloatFxBeatmapEventData* CreateVfxBeatmapEventData(::GlobalNamespace::FloatFxBaseData* data, float_t time, int32_t groupId, int32_t elementId, float_t distributionOffset);

  static inline ::GlobalNamespace::FloatFxBeatmapEventDataBox* New_ctor(::GlobalNamespace::IndexFilter* indexFilter,
                                                                        ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType beatDistributionParamType, float_t beatDistributionParam,
                                                                        ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType eventDistributionParamType, float_t eventDistributionParam,
                                                                        bool eventDistributionShouldAffectFirstBaseEvent, ::GlobalNamespace::EaseType eventDistributionEaseType,
                                                                        ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::FloatFxBaseData*>* fxBaseDataList);

  constexpr float_t const& __cordl_internal_get__beatStep() const;

  constexpr float_t& __cordl_internal_get__beatStep();

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::FloatFxBaseData*>* const& __cordl_internal_get__vfxBaseDataList() const;

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::FloatFxBaseData*>*& __cordl_internal_get__vfxBaseDataList();

  constexpr void __cordl_internal_set__beatStep(float_t value);

  constexpr void __cordl_internal_set__vfxBaseDataList(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::FloatFxBaseData*>* value);

  /// @brief Method .ctor, addr 0x26bdd24, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IndexFilter* indexFilter, ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType beatDistributionParamType, float_t beatDistributionParam,
                    ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType eventDistributionParamType, float_t eventDistributionParam, bool eventDistributionShouldAffectFirstBaseEvent,
                    ::GlobalNamespace::EaseType eventDistributionEaseType, ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::FloatFxBaseData*>* fxBaseDataList);

  /// @brief Method get_beatStep, addr 0x26bdd1c, size 0x8, virtual true, abstract: false, final false
  inline float_t get_beatStep();

  /// @brief Method get_subtypeIdentifier, addr 0x26bdd14, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_subtypeIdentifier();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FloatFxBeatmapEventDataBox();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FloatFxBeatmapEventDataBox", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FloatFxBeatmapEventDataBox(FloatFxBeatmapEventDataBox&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FloatFxBeatmapEventDataBox", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FloatFxBeatmapEventDataBox(FloatFxBeatmapEventDataBox const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12907 };

  /// @brief Field _vfxBaseDataList, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::FloatFxBaseData*>* ____vfxBaseDataList;

  /// @brief Field _beatStep, offset: 0x48, size: 0x4, def value: None
  float_t ____beatStep;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FloatFxBeatmapEventDataBox, ____vfxBaseDataList) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatFxBeatmapEventDataBox, ____beatStep) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FloatFxBeatmapEventDataBox, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FloatFxBeatmapEventDataBox);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FloatFxBeatmapEventDataBox*, "", "FloatFxBeatmapEventDataBox");
