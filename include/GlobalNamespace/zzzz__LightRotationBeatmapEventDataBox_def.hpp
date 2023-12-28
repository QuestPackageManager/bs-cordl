#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapEventDataBox_def.hpp"
#include "GlobalNamespace/zzzz__LightAxis_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LightRotationBeatmapEventDataBox)
namespace GlobalNamespace {
struct __BeatmapEventDataBox__DistributionParamType;
}
namespace GlobalNamespace {
class IndexFilter;
}
namespace GlobalNamespace {
struct LightAxis;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace GlobalNamespace {
class LightRotationBaseData;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace GlobalNamespace {
class IBeatToTimeConvertor;
}
namespace GlobalNamespace {
struct EaseType;
}
namespace GlobalNamespace {
class BeatmapEventData;
}
// Forward declare root types
namespace GlobalNamespace {
class LightRotationBeatmapEventDataBox;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightRotationBeatmapEventDataBox);
// Type: ::LightRotationBeatmapEventDataBox
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14733)), TypeDefinitionIndex(TypeDefinitionIndex(4301))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4322))
// CS Name: ::LightRotationBeatmapEventDataBox*
class CORDL_TYPE LightRotationBeatmapEventDataBox : public ::GlobalNamespace::BeatmapEventDataBox {
public:
  // Declarations
  /// @brief Field _lightRotationBaseDataList, offset 0x38, size 0x8
  __declspec(property(get = __get__lightRotationBaseDataList,
                      put = __set__lightRotationBaseDataList))::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::LightRotationBaseData*>* _lightRotationBaseDataList;

  /// @brief Field _axis, offset 0x40, size 0x4
  __declspec(property(get = __get__axis, put = __set__axis))::GlobalNamespace::LightAxis _axis;

  /// @brief Field _rotationDirection, offset 0x44, size 0x4
  __declspec(property(get = __get__rotationDirection, put = __set__rotationDirection)) float_t _rotationDirection;

  /// @brief Field _rotationStep, offset 0x48, size 0x4
  __declspec(property(get = __get__rotationStep, put = __set__rotationStep)) float_t _rotationStep;

  /// @brief Field _beatStep, offset 0x4c, size 0x4
  __declspec(property(get = __get__beatStep, put = __set__beatStep)) float_t _beatStep;

  __declspec(property(get = get_subtypeIdentifier)) int32_t subtypeIdentifier;

  __declspec(property(get = get_beatStep)) float_t beatStep;

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::LightRotationBaseData*>*& __get__lightRotationBaseDataList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::LightRotationBaseData*>*> const& __get__lightRotationBaseDataList() const;

  constexpr void __set__lightRotationBaseDataList(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::LightRotationBaseData*>* value);

  constexpr ::GlobalNamespace::LightAxis& __get__axis();

  constexpr ::GlobalNamespace::LightAxis const& __get__axis() const;

  constexpr void __set__axis(::GlobalNamespace::LightAxis value);

  constexpr float_t& __get__rotationDirection();

  constexpr float_t const& __get__rotationDirection() const;

  constexpr void __set__rotationDirection(float_t value);

  constexpr float_t& __get__rotationStep();

  constexpr float_t const& __get__rotationStep() const;

  constexpr void __set__rotationStep(float_t value);

  constexpr float_t& __get__beatStep();

  constexpr float_t const& __get__beatStep() const;

  constexpr void __set__beatStep(float_t value);

  /// @brief Method get_subtypeIdentifier addr 0x233cd90 size 0x8 virtual true final false
  inline int32_t get_subtypeIdentifier();

  /// @brief Method get_beatStep addr 0x233cd98 size 0x8 virtual true final false
  inline float_t get_beatStep();

  static inline ::GlobalNamespace::LightRotationBeatmapEventDataBox* New_ctor(::GlobalNamespace::IndexFilter* indexFilter, float_t beatDistributionParam,
                                                                              ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType beatDistributionParamType,
                                                                              ::GlobalNamespace::LightAxis axis, bool flipRotation, float_t rotationDistributionParam,
                                                                              ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType rotationDistributionParamType,
                                                                              bool rotationDistributionShouldAffectFirstBaseEvent, ::GlobalNamespace::EaseType rotationDistributionEaseType,
                                                                              ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::LightRotationBaseData*>* lightRotationBaseDataList);

  /// @brief Method .ctor addr 0x233cda0 size 0x234 virtual false final false
  inline void _ctor(::GlobalNamespace::IndexFilter* indexFilter, float_t beatDistributionParam, ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType beatDistributionParamType,
                    ::GlobalNamespace::LightAxis axis, bool flipRotation, float_t rotationDistributionParam,
                    ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType rotationDistributionParamType, bool rotationDistributionShouldAffectFirstBaseEvent,
                    ::GlobalNamespace::EaseType rotationDistributionEaseType, ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::LightRotationBaseData*>* lightRotationBaseDataList);

  /// @brief Method Unpack addr 0x233cfd4 size 0x584 virtual true final false
  inline void Unpack(float_t groupBoxBeat, int32_t groupId, int32_t elementId, int32_t durationOrderIndex, int32_t distributionOrderIndex, float_t maxBeat,
                     ::GlobalNamespace::IBeatToTimeConvertor* beatToTimeConvertor, ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapEventData*>* output);

  // Ctor Parameters [CppParam { name: "", ty: "LightRotationBeatmapEventDataBox", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightRotationBeatmapEventDataBox(LightRotationBeatmapEventDataBox&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightRotationBeatmapEventDataBox", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightRotationBeatmapEventDataBox(LightRotationBeatmapEventDataBox const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightRotationBeatmapEventDataBox();

public:
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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightRotationBeatmapEventDataBox, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightRotationBeatmapEventDataBox);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightRotationBeatmapEventDataBox*, "", "LightRotationBeatmapEventDataBox");
