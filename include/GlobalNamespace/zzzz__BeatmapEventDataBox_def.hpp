#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapEventDataBox_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapEventDataBox)
namespace GlobalNamespace {
struct __BeatmapEventDataBox__DistributionParamType;
}
namespace GlobalNamespace {
class IndexFilter;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
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
struct __BeatmapEventDataBox__DistributionParamType;
}
namespace GlobalNamespace {
class BeatmapEventDataBox;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType);
MARK_REF_PTR_T(::GlobalNamespace::BeatmapEventDataBox);
// Type: ::DistributionParamType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4300))
// CS Name: ::BeatmapEventDataBox::DistributionParamType
struct CORDL_TYPE __BeatmapEventDataBox__DistributionParamType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____BeatmapEventDataBox__DistributionParamType_Unwrapped
  enum struct ____BeatmapEventDataBox__DistributionParamType_Unwrapped : int32_t {
    __E_Wave = static_cast<int32_t>(0x1),
    __E_Step = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____BeatmapEventDataBox__DistributionParamType_Unwrapped() const noexcept {
    return static_cast<____BeatmapEventDataBox__DistributionParamType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __BeatmapEventDataBox__DistributionParamType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapEventDataBox__DistributionParamType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Wave value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType const Wave;

  /// @brief Field Step value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType const Step;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::BeatmapEventDataBox
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4300)), TypeDefinitionIndex(TypeDefinitionIndex(16090)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4301))
// CS Name: ::BeatmapEventDataBox*
class CORDL_TYPE BeatmapEventDataBox : public ::System::Object {
public:
  // Declarations
  using DistributionParamType = ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType;

  /// @brief Field <indexFilter>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__indexFilter_k__BackingField, put = __set__indexFilter_k__BackingField))::GlobalNamespace::IndexFilter* _indexFilter_k__BackingField;

  /// @brief Field _beatDistributionParam, offset 0x18, size 0x4
  __declspec(property(get = __get__beatDistributionParam, put = __set__beatDistributionParam)) float_t _beatDistributionParam;

  /// @brief Field _beatDistributionParamType, offset 0x1c, size 0x4
  __declspec(property(get = __get__beatDistributionParamType, put = __set__beatDistributionParamType))::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType _beatDistributionParamType;

  /// @brief Field _eventDistributionCount, offset 0x20, size 0x4
  __declspec(property(get = __get__eventDistributionCount, put = __set__eventDistributionCount)) int32_t _eventDistributionCount;

  /// @brief Field _eventDistributionParamType, offset 0x24, size 0x4
  __declspec(property(get = __get__eventDistributionParamType, put = __set__eventDistributionParamType))::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType _eventDistributionParamType;

  /// @brief Field _eventDistributionParam, offset 0x28, size 0x4
  __declspec(property(get = __get__eventDistributionParam, put = __set__eventDistributionParam)) float_t _eventDistributionParam;

  /// @brief Field _eventDistributionShouldAffectFirstBaseEvent, offset 0x2c, size 0x1
  __declspec(property(get = __get__eventDistributionShouldAffectFirstBaseEvent, put = __set__eventDistributionShouldAffectFirstBaseEvent)) bool _eventDistributionShouldAffectFirstBaseEvent;

  /// @brief Field _eventDistributionEaseType, offset 0x30, size 0x4
  __declspec(property(get = __get__eventDistributionEaseType, put = __set__eventDistributionEaseType))::GlobalNamespace::EaseType _eventDistributionEaseType;

  __declspec(property(get = get_subtypeIdentifier)) int32_t subtypeIdentifier;

  __declspec(property(get = get_beatStep)) float_t beatStep;

  __declspec(property(get = get_indexFilter))::GlobalNamespace::IndexFilter* indexFilter;

  constexpr ::GlobalNamespace::IndexFilter*& __get__indexFilter_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IndexFilter*> const& __get__indexFilter_k__BackingField() const;

  constexpr void __set__indexFilter_k__BackingField(::GlobalNamespace::IndexFilter* value);

  constexpr float_t& __get__beatDistributionParam();

  constexpr float_t const& __get__beatDistributionParam() const;

  constexpr void __set__beatDistributionParam(float_t value);

  constexpr ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType& __get__beatDistributionParamType();

  constexpr ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType const& __get__beatDistributionParamType() const;

  constexpr void __set__beatDistributionParamType(::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType value);

  constexpr int32_t& __get__eventDistributionCount();

  constexpr int32_t const& __get__eventDistributionCount() const;

  constexpr void __set__eventDistributionCount(int32_t value);

  constexpr ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType& __get__eventDistributionParamType();

  constexpr ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType const& __get__eventDistributionParamType() const;

  constexpr void __set__eventDistributionParamType(::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType value);

  constexpr float_t& __get__eventDistributionParam();

  constexpr float_t const& __get__eventDistributionParam() const;

  constexpr void __set__eventDistributionParam(float_t value);

  constexpr bool& __get__eventDistributionShouldAffectFirstBaseEvent();

  constexpr bool const& __get__eventDistributionShouldAffectFirstBaseEvent() const;

  constexpr void __set__eventDistributionShouldAffectFirstBaseEvent(bool value);

  constexpr ::GlobalNamespace::EaseType& __get__eventDistributionEaseType();

  constexpr ::GlobalNamespace::EaseType const& __get__eventDistributionEaseType() const;

  constexpr void __set__eventDistributionEaseType(::GlobalNamespace::EaseType value);

  /// @brief Method get_subtypeIdentifier, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_subtypeIdentifier();

  /// @brief Method get_beatStep, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t get_beatStep();

  /// @brief Method get_indexFilter, addr 0x2338804, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::IndexFilter* get_indexFilter();

  static inline ::GlobalNamespace::BeatmapEventDataBox* New_ctor(::GlobalNamespace::IndexFilter* indexFilter, ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType beatDistributionParamType,
                                                                 float_t beatDistributionParam, ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType eventDistributionParamType,
                                                                 float_t eventDistributionParam, bool eventDistributionShouldAffectFirstBaseEvent,
                                                                 ::GlobalNamespace::EaseType eventDistributionEaseType);

  /// @brief Method .ctor, addr 0x233880c, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IndexFilter* indexFilter, ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType beatDistributionParamType, float_t beatDistributionParam,
                    ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType eventDistributionParamType, float_t eventDistributionParam, bool eventDistributionShouldAffectFirstBaseEvent,
                    ::GlobalNamespace::EaseType eventDistributionEaseType);

  /// @brief Method Unpack, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Unpack(float_t groupBoxBeat, int32_t groupId, int32_t elementId, int32_t durationOrderIndex, int32_t distributionOrderIndex, float_t maxBeat,
                     ::GlobalNamespace::IBeatToTimeConvertor* beatToTimeConvertor, ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapEventData*>* output);

  /// @brief Method GetBeatStep, addr 0x23388ac, size 0x20, virtual false, abstract: false, final false
  inline float_t GetBeatStep(float_t lastBaseEventRelativeBeat);

  /// @brief Method GetDistribution, addr 0x2338920, size 0x2c, virtual false, abstract: false, final false
  inline float_t GetDistribution(bool isFirstBaseDataEvent, int32_t distributionOrderIndex);

  /// @brief Method BeatDistributionParamToStep, addr 0x23389b8, size 0x20, virtual false, abstract: false, final false
  static inline float_t BeatDistributionParamToStep(float_t distributionParam, ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType distributionParamType, int32_t count);

  /// @brief Method GetBeatStep, addr 0x23388cc, size 0x54, virtual false, abstract: false, final false
  static inline float_t GetBeatStep(::GlobalNamespace::IndexFilter* indexFilter, ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType distributionParamType, float_t distributionParam,
                                    float_t lastBaseEventRelativeBeat);

  /// @brief Method EventDistributionParamToStep, addr 0x233894c, size 0x6c, virtual false, abstract: false, final false
  static inline float_t EventDistributionParamToStep(int32_t index, float_t distributionParam, ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType distributionParamType, int32_t count,
                                                     ::GlobalNamespace::EaseType easeType);

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapEventDataBox", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapEventDataBox(BeatmapEventDataBox&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapEventDataBox", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapEventDataBox(BeatmapEventDataBox const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapEventDataBox();

public:
  /// @brief Field <indexFilter>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IndexFilter* ____indexFilter_k__BackingField;

  /// @brief Field _beatDistributionParam, offset: 0x18, size: 0x4, def value: None
  float_t ____beatDistributionParam;

  /// @brief Field _beatDistributionParamType, offset: 0x1c, size: 0x4, def value: None
  ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType ____beatDistributionParamType;

  /// @brief Field _eventDistributionCount, offset: 0x20, size: 0x4, def value: None
  int32_t ____eventDistributionCount;

  /// @brief Field _eventDistributionParamType, offset: 0x24, size: 0x4, def value: None
  ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType ____eventDistributionParamType;

  /// @brief Field _eventDistributionParam, offset: 0x28, size: 0x4, def value: None
  float_t ____eventDistributionParam;

  /// @brief Field _eventDistributionShouldAffectFirstBaseEvent, offset: 0x2c, size: 0x1, def value: None
  bool ____eventDistributionShouldAffectFirstBaseEvent;

  /// @brief Field _eventDistributionEaseType, offset: 0x30, size: 0x4, def value: None
  ::GlobalNamespace::EaseType ____eventDistributionEaseType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapEventDataBox, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEventDataBox, ____indexFilter_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEventDataBox, ____beatDistributionParam) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEventDataBox, ____beatDistributionParamType) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEventDataBox, ____eventDistributionCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEventDataBox, ____eventDistributionParamType) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEventDataBox, ____eventDistributionParam) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEventDataBox, ____eventDistributionShouldAffectFirstBaseEvent) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEventDataBox, ____eventDistributionEaseType) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType, "", "BeatmapEventDataBox/DistributionParamType");
NEED_NO_BOX(::GlobalNamespace::BeatmapEventDataBox);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapEventDataBox*, "", "BeatmapEventDataBox");
