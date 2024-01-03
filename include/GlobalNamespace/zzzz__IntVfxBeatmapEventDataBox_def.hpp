#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapEventDataBox_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IntVfxBeatmapEventDataBox)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace GlobalNamespace {
class IndexFilter;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace GlobalNamespace {
struct EaseType;
}
namespace GlobalNamespace {
class IBeatToTimeConvertor;
}
namespace GlobalNamespace {
struct __BeatmapEventDataBox__DistributionParamType;
}
namespace GlobalNamespace {
class IntFxBaseData;
}
namespace GlobalNamespace {
class BeatmapEventData;
}
// Forward declare root types
namespace GlobalNamespace {
class IntVfxBeatmapEventDataBox;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IntVfxBeatmapEventDataBox);
// Type: ::IntVfxBeatmapEventDataBox
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 68, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4301))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4310))
// CS Name: ::IntVfxBeatmapEventDataBox*
class CORDL_TYPE IntVfxBeatmapEventDataBox : public ::GlobalNamespace::BeatmapEventDataBox {
public:
  // Declarations
  /// @brief Field _vfxBaseDataList, offset 0x38, size 0x8
  __declspec(property(get = __get__vfxBaseDataList, put = __set__vfxBaseDataList))::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IntFxBaseData*>* _vfxBaseDataList;

  /// @brief Field _beatStep, offset 0x40, size 0x4
  __declspec(property(get = __get__beatStep, put = __set__beatStep)) float_t _beatStep;

  __declspec(property(get = get_subtypeIdentifier)) int32_t subtypeIdentifier;

  __declspec(property(get = get_beatStep)) float_t beatStep;

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IntFxBaseData*>*& __get__vfxBaseDataList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IntFxBaseData*>*> const& __get__vfxBaseDataList() const;

  constexpr void __set__vfxBaseDataList(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IntFxBaseData*>* value);

  constexpr float_t& __get__beatStep();

  constexpr float_t const& __get__beatStep() const;

  constexpr void __set__beatStep(float_t value);

  /// @brief Method get_subtypeIdentifier, addr 0x233ade0, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_subtypeIdentifier();

  /// @brief Method get_beatStep, addr 0x233ade8, size 0x8, virtual true, abstract: false, final false
  inline float_t get_beatStep();

  static inline ::GlobalNamespace::IntVfxBeatmapEventDataBox* New_ctor(::GlobalNamespace::IndexFilter* indexFilter,
                                                                       ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType beatDistributionParamType, float_t beatDistributionParam,
                                                                       ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType eventDistributionParamType, float_t eventDistributionParam,
                                                                       bool eventDistributionShouldAffectFirstBaseEvent, ::GlobalNamespace::EaseType eventDistributionEaseType,
                                                                       ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IntFxBaseData*>* vfxBaseDataList);

  /// @brief Method .ctor, addr 0x23356d4, size 0x208, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IndexFilter* indexFilter, ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType beatDistributionParamType, float_t beatDistributionParam,
                    ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType eventDistributionParamType, float_t eventDistributionParam, bool eventDistributionShouldAffectFirstBaseEvent,
                    ::GlobalNamespace::EaseType eventDistributionEaseType, ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IntFxBaseData*>* vfxBaseDataList);

  /// @brief Method Unpack, addr 0x233adf0, size 0x4, virtual true, abstract: false, final false
  inline void Unpack(float_t groupBoxBeat, int32_t groupId, int32_t elementId, int32_t durationOrderIndex, int32_t distributionOrderIndex, float_t maxBeat,
                     ::GlobalNamespace::IBeatToTimeConvertor* beatToTimeConvertor, ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapEventData*>* output);

  // Ctor Parameters [CppParam { name: "", ty: "IntVfxBeatmapEventDataBox", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IntVfxBeatmapEventDataBox(IntVfxBeatmapEventDataBox&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IntVfxBeatmapEventDataBox", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IntVfxBeatmapEventDataBox(IntVfxBeatmapEventDataBox const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IntVfxBeatmapEventDataBox();

public:
  /// @brief Field _vfxBaseDataList, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IntFxBaseData*>* ____vfxBaseDataList;

  /// @brief Field _beatStep, offset: 0x40, size: 0x4, def value: None
  float_t ____beatStep;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::IntVfxBeatmapEventDataBox, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::IntVfxBeatmapEventDataBox, ____vfxBaseDataList) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IntVfxBeatmapEventDataBox, ____beatStep) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IntVfxBeatmapEventDataBox);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IntVfxBeatmapEventDataBox*, "", "IntVfxBeatmapEventDataBox");
