#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapEventDataBox.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapEventDataBox)
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
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct BeatmapEventDataBox_DistributionParamType;
}
namespace GlobalNamespace {
class BeatmapEventDataBox;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BeatmapEventDataBox_DistributionParamType);
MARK_REF_PTR_T(::GlobalNamespace::BeatmapEventDataBox);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: BeatmapEventDataBox/DistributionParamType
struct CORDL_TYPE BeatmapEventDataBox_DistributionParamType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __BeatmapEventDataBox_DistributionParamType_Unwrapped
  enum struct __BeatmapEventDataBox_DistributionParamType_Unwrapped : int32_t {
    __E_Wave = static_cast<int32_t>(0x1),
    __E_Step = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __BeatmapEventDataBox_DistributionParamType_Unwrapped() const noexcept {
    return static_cast<__BeatmapEventDataBox_DistributionParamType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapEventDataBox_DistributionParamType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr BeatmapEventDataBox_DistributionParamType(int32_t value__) noexcept;

  /// @brief Field Step value: I32(2)
  static ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType const Step;

  /// @brief Field Wave value: I32(1)
  static ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType const Wave;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12896 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapEventDataBox_DistributionParamType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapEventDataBox_DistributionParamType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BeatmapEventDataBox::DistributionParamType, EaseType, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapEventDataBox
class CORDL_TYPE BeatmapEventDataBox : public ::System::Object {
public:
  // Declarations
  using DistributionParamType = ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType;

  /// @brief Field _beatDistributionParam, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__beatDistributionParam, put = __cordl_internal_set__beatDistributionParam)) float_t _beatDistributionParam;

  /// @brief Field _beatDistributionParamType, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__beatDistributionParamType,
                      put = __cordl_internal_set__beatDistributionParamType)) ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType _beatDistributionParamType;

  /// @brief Field _eventDistributionCount, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__eventDistributionCount, put = __cordl_internal_set__eventDistributionCount)) int32_t _eventDistributionCount;

  /// @brief Field _eventDistributionEaseType, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__eventDistributionEaseType, put = __cordl_internal_set__eventDistributionEaseType)) ::GlobalNamespace::EaseType _eventDistributionEaseType;

  /// @brief Field _eventDistributionParam, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__eventDistributionParam, put = __cordl_internal_set__eventDistributionParam)) float_t _eventDistributionParam;

  /// @brief Field _eventDistributionParamType, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__eventDistributionParamType,
                      put = __cordl_internal_set__eventDistributionParamType)) ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType _eventDistributionParamType;

  /// @brief Field _eventDistributionShouldAffectFirstBaseEvent, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get__eventDistributionShouldAffectFirstBaseEvent,
                      put = __cordl_internal_set__eventDistributionShouldAffectFirstBaseEvent)) bool _eventDistributionShouldAffectFirstBaseEvent;

  /// @brief Field <indexFilter>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__indexFilter_k__BackingField, put = __cordl_internal_set__indexFilter_k__BackingField)) ::GlobalNamespace::IndexFilter* _indexFilter_k__BackingField;

  __declspec(property(get = get_beatStep)) float_t beatStep;

  __declspec(property(get = get_indexFilter)) ::GlobalNamespace::IndexFilter* indexFilter;

  __declspec(property(get = get_subtypeIdentifier)) int32_t subtypeIdentifier;

  /// @brief Method BeatDistributionParamToStep, addr 0x26b9f38, size 0x20, virtual false, abstract: false, final false
  static inline float_t BeatDistributionParamToStep(float_t distributionParam, ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType distributionParamType, int32_t count);

  /// @brief Method EventDistributionParamToStep, addr 0x26b9ecc, size 0x6c, virtual false, abstract: false, final false
  static inline float_t EventDistributionParamToStep(int32_t index, float_t distributionParam, ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType distributionParamType, int32_t count,
                                                     ::GlobalNamespace::EaseType easeType);

  /// @brief Method GetBeatStep, addr 0x26b9e4c, size 0x54, virtual false, abstract: false, final false
  static inline float_t GetBeatStep(::GlobalNamespace::IndexFilter* indexFilter, ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType distributionParamType, float_t distributionParam,
                                    float_t lastBaseEventRelativeBeat);

  /// @brief Method GetBeatStep, addr 0x26b9e2c, size 0x20, virtual false, abstract: false, final false
  inline float_t GetBeatStep(float_t lastBaseEventRelativeBeat);

  /// @brief Method GetDistribution, addr 0x26b9ea0, size 0x2c, virtual false, abstract: false, final false
  inline float_t GetDistribution(bool isFirstBaseDataEvent, int32_t distributionOrderIndex);

  static inline ::GlobalNamespace::BeatmapEventDataBox* New_ctor(::GlobalNamespace::IndexFilter* indexFilter, ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType beatDistributionParamType,
                                                                 float_t beatDistributionParam, ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType eventDistributionParamType,
                                                                 float_t eventDistributionParam, bool eventDistributionShouldAffectFirstBaseEvent,
                                                                 ::GlobalNamespace::EaseType eventDistributionEaseType);

  /// @brief Method Unpack, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Unpack(float_t groupBoxBeat, int32_t groupId, int32_t elementId, int32_t durationOrderIndex, int32_t distributionOrderIndex, float_t maxBeat,
                     ::GlobalNamespace::IBeatToTimeConverter* beatToTimeConverter, ::GlobalNamespace::IBeatmapLightEventConverter* lightEventConverter,
                     ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapEventData*>* output);

  constexpr float_t const& __cordl_internal_get__beatDistributionParam() const;

  constexpr float_t& __cordl_internal_get__beatDistributionParam();

  constexpr ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType const& __cordl_internal_get__beatDistributionParamType() const;

  constexpr ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType& __cordl_internal_get__beatDistributionParamType();

  constexpr int32_t const& __cordl_internal_get__eventDistributionCount() const;

  constexpr int32_t& __cordl_internal_get__eventDistributionCount();

  constexpr ::GlobalNamespace::EaseType const& __cordl_internal_get__eventDistributionEaseType() const;

  constexpr ::GlobalNamespace::EaseType& __cordl_internal_get__eventDistributionEaseType();

  constexpr float_t const& __cordl_internal_get__eventDistributionParam() const;

  constexpr float_t& __cordl_internal_get__eventDistributionParam();

  constexpr ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType const& __cordl_internal_get__eventDistributionParamType() const;

  constexpr ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType& __cordl_internal_get__eventDistributionParamType();

  constexpr bool const& __cordl_internal_get__eventDistributionShouldAffectFirstBaseEvent() const;

  constexpr bool& __cordl_internal_get__eventDistributionShouldAffectFirstBaseEvent();

  constexpr ::GlobalNamespace::IndexFilter* const& __cordl_internal_get__indexFilter_k__BackingField() const;

  constexpr ::GlobalNamespace::IndexFilter*& __cordl_internal_get__indexFilter_k__BackingField();

  constexpr void __cordl_internal_set__beatDistributionParam(float_t value);

  constexpr void __cordl_internal_set__beatDistributionParamType(::GlobalNamespace::BeatmapEventDataBox_DistributionParamType value);

  constexpr void __cordl_internal_set__eventDistributionCount(int32_t value);

  constexpr void __cordl_internal_set__eventDistributionEaseType(::GlobalNamespace::EaseType value);

  constexpr void __cordl_internal_set__eventDistributionParam(float_t value);

  constexpr void __cordl_internal_set__eventDistributionParamType(::GlobalNamespace::BeatmapEventDataBox_DistributionParamType value);

  constexpr void __cordl_internal_set__eventDistributionShouldAffectFirstBaseEvent(bool value);

  constexpr void __cordl_internal_set__indexFilter_k__BackingField(::GlobalNamespace::IndexFilter* value);

  /// @brief Method .ctor, addr 0x26b9d8c, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IndexFilter* indexFilter, ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType beatDistributionParamType, float_t beatDistributionParam,
                    ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType eventDistributionParamType, float_t eventDistributionParam, bool eventDistributionShouldAffectFirstBaseEvent,
                    ::GlobalNamespace::EaseType eventDistributionEaseType);

  /// @brief Method get_beatStep, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline float_t get_beatStep();

  /// @brief Method get_indexFilter, addr 0x26b9d84, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::IndexFilter* get_indexFilter();

  /// @brief Method get_subtypeIdentifier, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_subtypeIdentifier();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapEventDataBox();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapEventDataBox", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapEventDataBox(BeatmapEventDataBox&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapEventDataBox", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapEventDataBox(BeatmapEventDataBox const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12897 };

  /// @brief Field <indexFilter>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IndexFilter* ____indexFilter_k__BackingField;

  /// @brief Field _beatDistributionParam, offset: 0x18, size: 0x4, def value: None
  float_t ____beatDistributionParam;

  /// @brief Field _beatDistributionParamType, offset: 0x1c, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType ____beatDistributionParamType;

  /// @brief Field _eventDistributionCount, offset: 0x20, size: 0x4, def value: None
  int32_t ____eventDistributionCount;

  /// @brief Field _eventDistributionParamType, offset: 0x24, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType ____eventDistributionParamType;

  /// @brief Field _eventDistributionParam, offset: 0x28, size: 0x4, def value: None
  float_t ____eventDistributionParam;

  /// @brief Field _eventDistributionShouldAffectFirstBaseEvent, offset: 0x2c, size: 0x1, def value: None
  bool ____eventDistributionShouldAffectFirstBaseEvent;

  /// @brief Field _eventDistributionEaseType, offset: 0x30, size: 0x4, def value: None
  ::GlobalNamespace::EaseType ____eventDistributionEaseType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapEventDataBox, ____indexFilter_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEventDataBox, ____beatDistributionParam) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEventDataBox, ____beatDistributionParamType) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEventDataBox, ____eventDistributionCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEventDataBox, ____eventDistributionParamType) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEventDataBox, ____eventDistributionParam) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEventDataBox, ____eventDistributionShouldAffectFirstBaseEvent) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEventDataBox, ____eventDistributionEaseType) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapEventDataBox, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapEventDataBox_DistributionParamType, "", "BeatmapEventDataBox/DistributionParamType");
NEED_NO_BOX(::GlobalNamespace::BeatmapEventDataBox);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapEventDataBox*, "", "BeatmapEventDataBox");
