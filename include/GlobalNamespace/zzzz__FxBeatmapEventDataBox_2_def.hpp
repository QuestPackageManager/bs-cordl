#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapEventDataBox_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FxBeatmapEventDataBox_2)
namespace GlobalNamespace {
class IndexFilter;
}
namespace GlobalNamespace {
struct EaseType;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace GlobalNamespace {
class IBeatToTimeConvertor;
}
namespace GlobalNamespace {
class BeatmapEventData;
}
namespace GlobalNamespace {
struct __BeatmapEventDataBox__DistributionParamType;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename TIn, typename TOut> class FxBeatmapEventDataBox_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::FxBeatmapEventDataBox_2);
// Type: ::FxBeatmapEventDataBox`2
// SizeInfo { instance_size: 64, native_size: 64, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename TIn, typename TOut>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4301))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4309))
// CS Name: ::FxBeatmapEventDataBox`2<TIn,TOut>*
class CORDL_TYPE FxBeatmapEventDataBox_2 : public ::GlobalNamespace::BeatmapEventDataBox {
public:
  // Declarations
  /// @brief Field _beatStep, offset 0x34, size 0x4
  __declspec(property(get = __get__beatStep, put = __set__beatStep)) float_t _beatStep;

  /// @brief Field _fxBaseDataList, offset 0x38, size 0x8
  __declspec(property(get = __get__fxBaseDataList, put = __set__fxBaseDataList))::System::Collections::Generic::IReadOnlyList_1<TIn>* _fxBaseDataList;

  constexpr float_t& __get__beatStep();

  constexpr float_t const& __get__beatStep() const;

  constexpr void __set__beatStep(float_t value);

  constexpr ::System::Collections::Generic::IReadOnlyList_1<TIn>*& __get__fxBaseDataList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<TIn>*> const& __get__fxBaseDataList() const;

  constexpr void __set__fxBaseDataList(::System::Collections::Generic::IReadOnlyList_1<TIn>* value);

  static inline ::GlobalNamespace::FxBeatmapEventDataBox_2<TIn, TOut>*
  New_ctor(::GlobalNamespace::IndexFilter* indexFilter, ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType beatDistributionParamType, float_t beatDistributionParam,
           ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType eventDistributionParamType, float_t eventDistributionParam, bool eventDistributionShouldAffectFirstBaseEvent,
           ::GlobalNamespace::EaseType eventDistributionEaseType, ::System::Collections::Generic::IReadOnlyList_1<TIn>* fxBaseDataList);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(::GlobalNamespace::IndexFilter* indexFilter, ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType beatDistributionParamType, float_t beatDistributionParam,
                    ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType eventDistributionParamType, float_t eventDistributionParam, bool eventDistributionShouldAffectFirstBaseEvent,
                    ::GlobalNamespace::EaseType eventDistributionEaseType, ::System::Collections::Generic::IReadOnlyList_1<TIn>* fxBaseDataList);

  /// @brief Method Unpack addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Unpack(float_t groupBoxBeat, int32_t groupId, int32_t elementId, int32_t durationOrderIndex, int32_t distributionOrderIndex, float_t maxBeat,
                     ::GlobalNamespace::IBeatToTimeConvertor* beatToTimeConvertor, ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapEventData*>* output);

  /// @brief Method CreateVfxBeatmapEventData addr 0x0 size 0xffffffffffffffff virtual true final false
  inline TOut CreateVfxBeatmapEventData(TIn data, float_t time, int32_t groupId, int32_t elementId, float_t distributionOffset);

  // Ctor Parameters [CppParam { name: "", ty: "FxBeatmapEventDataBox_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FxBeatmapEventDataBox_2(FxBeatmapEventDataBox_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FxBeatmapEventDataBox_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FxBeatmapEventDataBox_2(FxBeatmapEventDataBox_2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FxBeatmapEventDataBox_2();

public:
  /// @brief Field _beatStep, offset: 0x34, size: 0x4, def value: None
  float_t ____beatStep;

  /// @brief Field _fxBaseDataList, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<TIn>* ____fxBaseDataList;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::FxBeatmapEventDataBox_2, "", "FxBeatmapEventDataBox`2");
