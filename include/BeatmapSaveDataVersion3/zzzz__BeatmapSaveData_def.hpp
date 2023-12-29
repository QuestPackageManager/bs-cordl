#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatmapSaveDataVersion2_6_0AndEarlier/zzzz__BeatmapSaveData_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__BeatmapSaveData_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutDirection_def.hpp"
#include "GlobalNamespace/zzzz__OffsetDirection_def.hpp"
#include "GlobalNamespace/zzzz__SliderMidAnchorMode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapSaveData)
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
struct __BeatmapSaveData__ObstacleType;
}
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
class BeatmapSaveDataItem;
}
namespace BeatmapSaveDataVersion3 {
struct __BeatmapSaveData__EaseType;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__LightTranslationEventBoxGroup;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__WaypointData;
}
namespace BeatmapSaveDataVersion3 {
struct __BeatmapSaveData__TransitionType;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__LightRotationBaseData;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__LightTranslationEventBox;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__BombNoteData;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__LightColorBaseData;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__BasicEventData;
}
namespace BeatmapSaveDataVersion3 {
template <typename T> class __BeatmapSaveData__EventBoxGroup_1;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__LightColorEventBoxGroup;
}
namespace BeatmapSaveDataVersion3 {
struct __BeatmapSaveData__SliderType;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__EventBoxGroup;
}
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
struct __BeatmapSaveData__SliderType;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__BasicEventTypesWithKeywords;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__IndexFilter;
}
namespace BeatmapSaveDataVersion3 {
struct __BeatmapSaveData__ExecutionTime;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__LightColorEventBox;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__LightRotationEventBox;
}
namespace BeatmapSaveDataVersion3 {
struct __BeatmapSaveData__Axis;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__LightTranslationBaseData;
}
namespace BeatmapSaveDataVersion3 {
struct __BeatmapSaveData__NoteColorType;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__BpmChangeEventData;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__ColorBoostEventData;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__SliderData;
}
namespace BeatmapSaveDataVersion3 {
struct __BeatmapSaveData__IndexFilterLimitAlsoAffectsType;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__RotationEventData;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__BurstSliderData;
}
namespace BeatmapSaveDataVersion3 {
struct __BeatmapSaveData__EnvironmentColorType;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
class BeatmapSaveData;
}
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
struct __BeatmapSaveData__NoteType;
}
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
struct __BeatmapSaveData__ColorType;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__BeatmapSaveDataItem;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__ColorNoteData;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__EventBox;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__LightRotationEventBoxGroup;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__BaseSliderData;
}
namespace BeatmapSaveDataVersion3 {
struct __BeatmapSaveData__IndexFilterRandomType;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__ObstacleData;
}
namespace System {
class Version;
}
namespace GlobalNamespace {
struct NoteCutDirection;
}
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
struct __BeatmapSaveData__BeatmapEventType;
}
namespace GlobalNamespace {
class __BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword;
}
namespace System {
template <typename T> class IComparable_1;
}
namespace GlobalNamespace {
struct __BeatmapSaveData__EventBox__DistributionParamType;
}
namespace GlobalNamespace {
struct __BeatmapSaveData__IndexFilter__IndexFilterType;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace GlobalNamespace {
struct __BeatmapSaveData__LightRotationBaseData__RotationDirection;
}
namespace GlobalNamespace {
struct SliderMidAnchorMode;
}
namespace GlobalNamespace {
struct OffsetDirection;
}
// Forward declare root types
namespace BeatmapSaveDataVersion3 {
struct __BeatmapSaveData__Axis;
}
namespace BeatmapSaveDataVersion3 {
struct __BeatmapSaveData__EaseType;
}
namespace BeatmapSaveDataVersion3 {
struct __BeatmapSaveData__EnvironmentColorType;
}
namespace BeatmapSaveDataVersion3 {
struct __BeatmapSaveData__ExecutionTime;
}
namespace BeatmapSaveDataVersion3 {
struct __BeatmapSaveData__IndexFilterLimitAlsoAffectsType;
}
namespace BeatmapSaveDataVersion3 {
struct __BeatmapSaveData__IndexFilterRandomType;
}
namespace BeatmapSaveDataVersion3 {
struct __BeatmapSaveData__NoteColorType;
}
namespace BeatmapSaveDataVersion3 {
struct __BeatmapSaveData__SliderType;
}
namespace BeatmapSaveDataVersion3 {
struct __BeatmapSaveData__TransitionType;
}
namespace GlobalNamespace {
struct __BeatmapSaveData__EventBox__DistributionParamType;
}
namespace GlobalNamespace {
struct __BeatmapSaveData__IndexFilter__IndexFilterType;
}
namespace GlobalNamespace {
struct __BeatmapSaveData__LightRotationBaseData__RotationDirection;
}
namespace BeatmapSaveDataVersion3 {
class BeatmapSaveData;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__BaseSliderData;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__BasicEventData;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__BasicEventTypesWithKeywords;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__BeatmapSaveDataItem;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__BombNoteData;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__BpmChangeEventData;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__BurstSliderData;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__ColorBoostEventData;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__ColorNoteData;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__EventBox;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__EventBoxGroup;
}
namespace BeatmapSaveDataVersion3 {
template <typename T> class __BeatmapSaveData__EventBoxGroup_1;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__IndexFilter;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__LightColorBaseData;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__LightColorEventBox;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__LightColorEventBoxGroup;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__LightRotationBaseData;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__LightRotationEventBox;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__LightRotationEventBoxGroup;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__LightTranslationBaseData;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__LightTranslationEventBox;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__LightTranslationEventBoxGroup;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__ObstacleData;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__RotationEventData;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__SliderData;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__WaypointData;
}
namespace GlobalNamespace {
class __BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword;
}
// Write type traits
MARK_VAL_T(::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis);
MARK_VAL_T(::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType);
MARK_VAL_T(::BeatmapSaveDataVersion3::__BeatmapSaveData__EnvironmentColorType);
MARK_VAL_T(::BeatmapSaveDataVersion3::__BeatmapSaveData__ExecutionTime);
MARK_VAL_T(::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterLimitAlsoAffectsType);
MARK_VAL_T(::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterRandomType);
MARK_VAL_T(::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType);
MARK_VAL_T(::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderType);
MARK_VAL_T(::BeatmapSaveDataVersion3::__BeatmapSaveData__TransitionType);
MARK_VAL_T(::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType);
MARK_VAL_T(::GlobalNamespace::__BeatmapSaveData__IndexFilter__IndexFilterType);
MARK_VAL_T(::GlobalNamespace::__BeatmapSaveData__LightRotationBaseData__RotationDirection);
MARK_REF_PTR_T(::BeatmapSaveDataVersion3::BeatmapSaveData);
MARK_REF_PTR_T(::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData);
MARK_REF_PTR_T(::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData);
MARK_REF_PTR_T(::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventTypesWithKeywords);
MARK_REF_PTR_T(::BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem);
MARK_REF_PTR_T(::BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData);
MARK_REF_PTR_T(::BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData);
MARK_REF_PTR_T(::BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData);
MARK_REF_PTR_T(::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData);
MARK_REF_PTR_T(::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData);
MARK_REF_PTR_T(::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox);
MARK_REF_PTR_T(::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup);
MARK_GEN_REF_PTR_T(::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup_1);
MARK_REF_PTR_T(::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter);
MARK_REF_PTR_T(::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData);
MARK_REF_PTR_T(::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox);
MARK_REF_PTR_T(::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup);
MARK_REF_PTR_T(::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData);
MARK_REF_PTR_T(::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox);
MARK_REF_PTR_T(::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup);
MARK_REF_PTR_T(::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData);
MARK_REF_PTR_T(::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox);
MARK_REF_PTR_T(::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup);
MARK_REF_PTR_T(::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData);
MARK_REF_PTR_T(::BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData);
MARK_REF_PTR_T(::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData);
MARK_REF_PTR_T(::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword);
// Type: ::BeatmapSaveDataItem
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14994))
// CS Name: ::BeatmapSaveData::BeatmapSaveDataItem*
class CORDL_TYPE __BeatmapSaveData__BeatmapSaveDataItem : public ::System::Object {
public:
  // Declarations
  /// @brief Field b, offset 0x10, size 0x4
  __declspec(property(get = __get_b, put = __set_b)) float_t b;

  __declspec(property(get = get_beat)) float_t beat;

  /// @brief Convert operator to "::System::IComparable_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem*>"
  constexpr operator ::System::IComparable_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem*>*() noexcept;

  constexpr float_t& __get_b();

  constexpr float_t const& __get_b() const;

  constexpr void __set_b(float_t value);

  /// @brief Method get_beat addr 0xda1c28 size 0x8 virtual false final false
  inline float_t get_beat();

  static inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem* New_ctor(float_t beat);

  /// @brief Method .ctor addr 0xda1c30 size 0x28 virtual false final false
  inline void _ctor(float_t beat);

  /// @brief Method CompareTo addr 0xda1c58 size 0x2c virtual true final true
  inline int32_t CompareTo(::BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem* other);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapSaveData__BeatmapSaveDataItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapSaveData__BeatmapSaveDataItem(__BeatmapSaveData__BeatmapSaveDataItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapSaveData__BeatmapSaveDataItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapSaveData__BeatmapSaveDataItem(__BeatmapSaveData__BeatmapSaveDataItem const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapSaveData__BeatmapSaveDataItem();

public:
  /// @brief Field b, offset: 0x10, size: 0x4, def value: None
  float_t ___b;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem, 0x18>, "Size mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem, ___b) == 0x10, "Offset mismatch!");

} // namespace BeatmapSaveDataVersion3
// Type: ::BasicEventData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14994)), TypeDefinitionIndex(TypeDefinitionIndex(15034))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14995))
// CS Name: ::BeatmapSaveData::BasicEventData*
class CORDL_TYPE __BeatmapSaveData__BasicEventData : public ::BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem {
public:
  // Declarations
  /// @brief Field et, offset 0x14, size 0x4
  __declspec(property(get = __get_et, put = __set_et))::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType et;

  /// @brief Field i, offset 0x18, size 0x4
  __declspec(property(get = __get_i, put = __set_i)) int32_t i;

  /// @brief Field f, offset 0x1c, size 0x4
  __declspec(property(get = __get_f, put = __set_f)) float_t f;

  __declspec(property(get = get_eventType))::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType eventType;

  __declspec(property(get = get_value)) int32_t value;

  __declspec(property(get = get_floatValue)) float_t floatValue;

  constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType& __get_et();

  constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType const& __get_et() const;

  constexpr void __set_et(::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType value);

  constexpr int32_t& __get_i();

  constexpr int32_t const& __get_i() const;

  constexpr void __set_i(int32_t value);

  constexpr float_t& __get_f();

  constexpr float_t const& __get_f() const;

  constexpr void __set_f(float_t value);

  /// @brief Method get_eventType addr 0xda1c84 size 0x8 virtual false final false
  inline ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType get_eventType();

  /// @brief Method get_value addr 0xda1c8c size 0x8 virtual false final false
  inline int32_t get_value();

  /// @brief Method get_floatValue addr 0xda1c94 size 0x8 virtual false final false
  inline float_t get_floatValue();

  static inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData* New_ctor(float_t beat, ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType eventType,
                                                                                       int32_t value, float_t floatValue);

  /// @brief Method .ctor addr 0xda1a9c size 0x44 virtual false final false
  inline void _ctor(float_t beat, ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType eventType, int32_t value, float_t floatValue);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapSaveData__BasicEventData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapSaveData__BasicEventData(__BeatmapSaveData__BasicEventData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapSaveData__BasicEventData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapSaveData__BasicEventData(__BeatmapSaveData__BasicEventData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapSaveData__BasicEventData();

public:
  /// @brief Field et, offset: 0x14, size: 0x4, def value: None
  ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType ___et;

  /// @brief Field i, offset: 0x18, size: 0x4, def value: None
  int32_t ___i;

  /// @brief Field f, offset: 0x1c, size: 0x4, def value: None
  float_t ___f;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData, 0x20>, "Size mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData, ___et) == 0x14, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData, ___i) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData, ___f) == 0x1c, "Offset mismatch!");

} // namespace BeatmapSaveDataVersion3
// Type: ::ColorBoostEventData
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 21, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14994))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14996))
// CS Name: ::BeatmapSaveData::ColorBoostEventData*
class CORDL_TYPE __BeatmapSaveData__ColorBoostEventData : public ::BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem {
public:
  // Declarations
  /// @brief Field o, offset 0x14, size 0x1
  __declspec(property(get = __get_o, put = __set_o)) bool o;

  __declspec(property(get = get_boost)) bool boost;

  constexpr bool& __get_o();

  constexpr bool const& __get_o() const;

  constexpr void __set_o(bool value);

  /// @brief Method get_boost addr 0xda1c9c size 0x8 virtual false final false
  inline bool get_boost();

  static inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData* New_ctor(float_t beat, bool boost);

  /// @brief Method .ctor addr 0xda1a64 size 0x38 virtual false final false
  inline void _ctor(float_t beat, bool boost);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapSaveData__ColorBoostEventData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapSaveData__ColorBoostEventData(__BeatmapSaveData__ColorBoostEventData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapSaveData__ColorBoostEventData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapSaveData__ColorBoostEventData(__BeatmapSaveData__ColorBoostEventData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapSaveData__ColorBoostEventData();

public:
  /// @brief Field o, offset: 0x14, size: 0x1, def value: None
  bool ___o;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData, 0x18>, "Size mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData, ___o) == 0x14, "Offset mismatch!");

} // namespace BeatmapSaveDataVersion3
// Type: ::BpmChangeEventData
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14994))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14997))
// CS Name: ::BeatmapSaveData::BpmChangeEventData*
class CORDL_TYPE __BeatmapSaveData__BpmChangeEventData : public ::BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem {
public:
  // Declarations
  /// @brief Field m, offset 0x14, size 0x4
  __declspec(property(get = __get_m, put = __set_m)) float_t m;

  __declspec(property(get = get_bpm)) float_t bpm;

  constexpr float_t& __get_m();

  constexpr float_t const& __get_m() const;

  constexpr void __set_m(float_t value);

  /// @brief Method get_bpm addr 0xda1ca4 size 0x8 virtual false final false
  inline float_t get_bpm();

  static inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData* New_ctor(float_t beat, float_t bpm);

  /// @brief Method .ctor addr 0xda1940 size 0x2c virtual false final false
  inline void _ctor(float_t beat, float_t bpm);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapSaveData__BpmChangeEventData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapSaveData__BpmChangeEventData(__BeatmapSaveData__BpmChangeEventData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapSaveData__BpmChangeEventData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapSaveData__BpmChangeEventData(__BeatmapSaveData__BpmChangeEventData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapSaveData__BpmChangeEventData();

public:
  /// @brief Field m, offset: 0x14, size: 0x4, def value: None
  float_t ___m;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData, 0x18>, "Size mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData, ___m) == 0x14, "Offset mismatch!");

} // namespace BeatmapSaveDataVersion3
// Type: ::ExecutionTime
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion3 {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14998))
// CS Name: ::BeatmapSaveData::ExecutionTime
struct CORDL_TYPE __BeatmapSaveData__ExecutionTime {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____BeatmapSaveData__ExecutionTime_Unwrapped
  enum struct ____BeatmapSaveData__ExecutionTime_Unwrapped : int32_t {
    __E_Early = static_cast<int32_t>(0x0),
    __E_Late = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____BeatmapSaveData__ExecutionTime_Unwrapped() const noexcept {
    return static_cast<____BeatmapSaveData__ExecutionTime_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __BeatmapSaveData__ExecutionTime(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapSaveData__ExecutionTime();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Early value: static_cast<int32_t>(0x0)
  static ::BeatmapSaveDataVersion3::__BeatmapSaveData__ExecutionTime const Early;

  /// @brief Field Late value: static_cast<int32_t>(0x1)
  static ::BeatmapSaveDataVersion3::__BeatmapSaveData__ExecutionTime const Late;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion3::__BeatmapSaveData__ExecutionTime, 0x4>, "Size mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__ExecutionTime, value__) == 0x0, "Offset mismatch!");

} // namespace BeatmapSaveDataVersion3
// Type: ::RotationEventData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14998)), TypeDefinitionIndex(TypeDefinitionIndex(14994))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14999))
// CS Name: ::BeatmapSaveData::RotationEventData*
class CORDL_TYPE __BeatmapSaveData__RotationEventData : public ::BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem {
public:
  // Declarations
  /// @brief Field e, offset 0x14, size 0x4
  __declspec(property(get = __get_e, put = __set_e))::BeatmapSaveDataVersion3::__BeatmapSaveData__ExecutionTime e;

  /// @brief Field r, offset 0x18, size 0x4
  __declspec(property(get = __get_r, put = __set_r)) float_t r;

  __declspec(property(get = get_executionTime))::BeatmapSaveDataVersion3::__BeatmapSaveData__ExecutionTime executionTime;

  __declspec(property(get = get_rotation)) float_t rotation;

  constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__ExecutionTime& __get_e();

  constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__ExecutionTime const& __get_e() const;

  constexpr void __set_e(::BeatmapSaveDataVersion3::__BeatmapSaveData__ExecutionTime value);

  constexpr float_t& __get_r();

  constexpr float_t const& __get_r() const;

  constexpr void __set_r(float_t value);

  /// @brief Method get_executionTime addr 0xda1cac size 0x8 virtual false final false
  inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__ExecutionTime get_executionTime();

  /// @brief Method get_rotation addr 0xda1cb4 size 0x8 virtual false final false
  inline float_t get_rotation();

  static inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData* New_ctor(float_t beat, ::BeatmapSaveDataVersion3::__BeatmapSaveData__ExecutionTime executionTime, float_t rotation);

  /// @brief Method .ctor addr 0xda1a24 size 0x40 virtual false final false
  inline void _ctor(float_t beat, ::BeatmapSaveDataVersion3::__BeatmapSaveData__ExecutionTime executionTime, float_t rotation);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapSaveData__RotationEventData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapSaveData__RotationEventData(__BeatmapSaveData__RotationEventData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapSaveData__RotationEventData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapSaveData__RotationEventData(__BeatmapSaveData__RotationEventData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapSaveData__RotationEventData();

public:
  /// @brief Field e, offset: 0x14, size: 0x4, def value: None
  ::BeatmapSaveDataVersion3::__BeatmapSaveData__ExecutionTime ___e;

  /// @brief Field r, offset: 0x18, size: 0x4, def value: None
  float_t ___r;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData, 0x20>, "Size mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData, ___e) == 0x14, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData, ___r) == 0x18, "Offset mismatch!");

} // namespace BeatmapSaveDataVersion3
// Type: ::BasicEventTypesForKeyword
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15000))
// CS Name: ::BeatmapSaveData::BasicEventTypesWithKeywords::BasicEventTypesForKeyword*
class CORDL_TYPE __BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword : public ::System::Object {
public:
  // Declarations
  /// @brief Field k, offset 0x10, size 0x8
  __declspec(property(get = __get_k, put = __set_k))::StringW k;

  /// @brief Field e, offset 0x18, size 0x8
  __declspec(property(get = __get_e, put = __set_e))::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>* e;

  __declspec(property(get = get_keyword))::StringW keyword;

  __declspec(property(get = get_eventTypes))::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>* eventTypes;

  constexpr ::StringW& __get_k();

  constexpr ::StringW const& __get_k() const;

  constexpr void __set_k(::StringW value);

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>*& __get_e();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>*> const& __get_e() const;

  constexpr void __set_e(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>* value);

  /// @brief Method get_keyword addr 0xda1cc4 size 0x8 virtual false final false
  inline ::StringW get_keyword();

  /// @brief Method get_eventTypes addr 0xda1ccc size 0x8 virtual false final false
  inline ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>* get_eventTypes();

  static inline ::GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*
  New_ctor(::StringW keyword, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>* eventTypes);

  /// @brief Method .ctor addr 0xda1ae0 size 0x2c virtual false final false
  inline void _ctor(::StringW keyword, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>* eventTypes);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword(__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword(__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword();

public:
  /// @brief Field k, offset: 0x10, size: 0x8, def value: None
  ::StringW ___k;

  /// @brief Field e, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>* ___e;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword, ___k) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword, ___e) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::BasicEventTypesWithKeywords
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15001))
// CS Name: ::BeatmapSaveData::BasicEventTypesWithKeywords*
class CORDL_TYPE __BeatmapSaveData__BasicEventTypesWithKeywords : public ::System::Object {
public:
  // Declarations
  using BasicEventTypesForKeyword = ::GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword;

  /// @brief Field d, offset 0x10, size 0x8
  __declspec(property(get = __get_d, put = __set_d))::System::Collections::Generic::List_1<::GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*>* d;

  __declspec(property(get = get_data))::System::Collections::Generic::List_1<::GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*>* data;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*>*& __get_d();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*>*> const&
  __get_d() const;

  constexpr void __set_d(::System::Collections::Generic::List_1<::GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*>* value);

  /// @brief Method get_data addr 0xda1cbc size 0x8 virtual false final false
  inline ::System::Collections::Generic::List_1<::GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*>* get_data();

  static inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventTypesWithKeywords*
  New_ctor(::System::Collections::Generic::List_1<::GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*>* data);

  /// @brief Method .ctor addr 0xda1b0c size 0x28 virtual false final false
  inline void _ctor(::System::Collections::Generic::List_1<::GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*>* data);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapSaveData__BasicEventTypesWithKeywords", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapSaveData__BasicEventTypesWithKeywords(__BeatmapSaveData__BasicEventTypesWithKeywords&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapSaveData__BasicEventTypesWithKeywords", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapSaveData__BasicEventTypesWithKeywords(__BeatmapSaveData__BasicEventTypesWithKeywords const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapSaveData__BasicEventTypesWithKeywords();

public:
  /// @brief Field d, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*>* ___d;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventTypesWithKeywords, 0x18>, "Size mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventTypesWithKeywords, ___d) == 0x10, "Offset mismatch!");

} // namespace BeatmapSaveDataVersion3
// Type: ::EnvironmentColorType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion3 {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15002))
// CS Name: ::BeatmapSaveData::EnvironmentColorType
struct CORDL_TYPE __BeatmapSaveData__EnvironmentColorType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____BeatmapSaveData__EnvironmentColorType_Unwrapped
  enum struct ____BeatmapSaveData__EnvironmentColorType_Unwrapped : int32_t {
    __E_Color0 = static_cast<int32_t>(0x0),
    __E_Color1 = static_cast<int32_t>(0x1),
    __E_ColorWhite = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____BeatmapSaveData__EnvironmentColorType_Unwrapped() const noexcept {
    return static_cast<____BeatmapSaveData__EnvironmentColorType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __BeatmapSaveData__EnvironmentColorType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapSaveData__EnvironmentColorType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Color0 value: static_cast<int32_t>(0x0)
  static ::BeatmapSaveDataVersion3::__BeatmapSaveData__EnvironmentColorType const Color0;

  /// @brief Field Color1 value: static_cast<int32_t>(0x1)
  static ::BeatmapSaveDataVersion3::__BeatmapSaveData__EnvironmentColorType const Color1;

  /// @brief Field ColorWhite value: static_cast<int32_t>(0x2)
  static ::BeatmapSaveDataVersion3::__BeatmapSaveData__EnvironmentColorType const ColorWhite;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion3::__BeatmapSaveData__EnvironmentColorType, 0x4>, "Size mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__EnvironmentColorType, value__) == 0x0, "Offset mismatch!");

} // namespace BeatmapSaveDataVersion3
// Type: ::TransitionType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion3 {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15003))
// CS Name: ::BeatmapSaveData::TransitionType
struct CORDL_TYPE __BeatmapSaveData__TransitionType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____BeatmapSaveData__TransitionType_Unwrapped
  enum struct ____BeatmapSaveData__TransitionType_Unwrapped : int32_t {
    __E_Instant = static_cast<int32_t>(0x0),
    __E_Interpolate = static_cast<int32_t>(0x1),
    __E_Extend = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____BeatmapSaveData__TransitionType_Unwrapped() const noexcept {
    return static_cast<____BeatmapSaveData__TransitionType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __BeatmapSaveData__TransitionType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapSaveData__TransitionType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Instant value: static_cast<int32_t>(0x0)
  static ::BeatmapSaveDataVersion3::__BeatmapSaveData__TransitionType const Instant;

  /// @brief Field Interpolate value: static_cast<int32_t>(0x1)
  static ::BeatmapSaveDataVersion3::__BeatmapSaveData__TransitionType const Interpolate;

  /// @brief Field Extend value: static_cast<int32_t>(0x2)
  static ::BeatmapSaveDataVersion3::__BeatmapSaveData__TransitionType const Extend;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion3::__BeatmapSaveData__TransitionType, 0x4>, "Size mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__TransitionType, value__) == 0x0, "Offset mismatch!");

} // namespace BeatmapSaveDataVersion3
// Type: ::Axis
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion3 {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15004))
// CS Name: ::BeatmapSaveData::Axis
struct CORDL_TYPE __BeatmapSaveData__Axis {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____BeatmapSaveData__Axis_Unwrapped
  enum struct ____BeatmapSaveData__Axis_Unwrapped : int32_t {
    __E_X = static_cast<int32_t>(0x0),
    __E_Y = static_cast<int32_t>(0x1),
    __E_Z = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____BeatmapSaveData__Axis_Unwrapped() const noexcept {
    return static_cast<____BeatmapSaveData__Axis_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __BeatmapSaveData__Axis(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapSaveData__Axis();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field X value: static_cast<int32_t>(0x0)
  static ::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis const X;

  /// @brief Field Y value: static_cast<int32_t>(0x1)
  static ::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis const Y;

  /// @brief Field Z value: static_cast<int32_t>(0x2)
  static ::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis const Z;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis, 0x4>, "Size mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis, value__) == 0x0, "Offset mismatch!");

} // namespace BeatmapSaveDataVersion3
// Type: ::EaseType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion3 {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15005))
// CS Name: ::BeatmapSaveData::EaseType
struct CORDL_TYPE __BeatmapSaveData__EaseType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____BeatmapSaveData__EaseType_Unwrapped
  enum struct ____BeatmapSaveData__EaseType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0xffffffff),
    __E_Linear = static_cast<int32_t>(0x0),
    __E_InQuad = static_cast<int32_t>(0x1),
    __E_OutQuad = static_cast<int32_t>(0x2),
    __E_InOutQuad = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____BeatmapSaveData__EaseType_Unwrapped() const noexcept {
    return static_cast<____BeatmapSaveData__EaseType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __BeatmapSaveData__EaseType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapSaveData__EaseType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0xffffffff)
  static ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType const None;

  /// @brief Field Linear value: static_cast<int32_t>(0x0)
  static ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType const Linear;

  /// @brief Field InQuad value: static_cast<int32_t>(0x1)
  static ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType const InQuad;

  /// @brief Field OutQuad value: static_cast<int32_t>(0x2)
  static ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType const OutQuad;

  /// @brief Field InOutQuad value: static_cast<int32_t>(0x3)
  static ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType const InOutQuad;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType, 0x4>, "Size mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType, value__) == 0x0, "Offset mismatch!");

} // namespace BeatmapSaveDataVersion3
// Type: ::DistributionParamType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15006))
// CS Name: ::BeatmapSaveData::EventBox::DistributionParamType
struct CORDL_TYPE __BeatmapSaveData__EventBox__DistributionParamType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____BeatmapSaveData__EventBox__DistributionParamType_Unwrapped
  enum struct ____BeatmapSaveData__EventBox__DistributionParamType_Unwrapped : int32_t {
    __E_Wave = static_cast<int32_t>(0x1),
    __E_Step = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____BeatmapSaveData__EventBox__DistributionParamType_Unwrapped() const noexcept {
    return static_cast<____BeatmapSaveData__EventBox__DistributionParamType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __BeatmapSaveData__EventBox__DistributionParamType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapSaveData__EventBox__DistributionParamType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Wave value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType const Wave;

  /// @brief Field Step value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType const Step;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::EventBox
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15006)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15007))
// CS Name: ::BeatmapSaveData::EventBox*
class CORDL_TYPE __BeatmapSaveData__EventBox : public ::System::Object {
public:
  // Declarations
  using DistributionParamType = ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType;

  /// @brief Field f, offset 0x10, size 0x8
  __declspec(property(get = __get_f, put = __set_f))::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter* f;

  /// @brief Field w, offset 0x18, size 0x4
  __declspec(property(get = __get_w, put = __set_w)) float_t w;

  /// @brief Field d, offset 0x1c, size 0x4
  __declspec(property(get = __get_d, put = __set_d))::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType d;

  __declspec(property(get = get_indexFilter))::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter* indexFilter;

  __declspec(property(get = get_beatDistributionParam)) float_t beatDistributionParam;

  __declspec(property(get = get_beatDistributionParamType))::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType beatDistributionParamType;

  constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*& __get_f();

  constexpr ::cordl_internals::to_const_pointer<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*> const& __get_f() const;

  constexpr void __set_f(::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter* value);

  constexpr float_t& __get_w();

  constexpr float_t const& __get_w() const;

  constexpr void __set_w(float_t value);

  constexpr ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType& __get_d();

  constexpr ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType const& __get_d() const;

  constexpr void __set_d(::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType value);

  /// @brief Method get_indexFilter addr 0xda1cd4 size 0x8 virtual false final false
  inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter* get_indexFilter();

  /// @brief Method get_beatDistributionParam addr 0xda1cdc size 0x8 virtual false final false
  inline float_t get_beatDistributionParam();

  /// @brief Method get_beatDistributionParamType addr 0xda1ce4 size 0x8 virtual false final false
  inline ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType get_beatDistributionParamType();

  static inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox* New_ctor(::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter* indexFilter, float_t beatDistributionParam,
                                                                                 ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType beatDistributionParamType);

  /// @brief Method .ctor addr 0xda1cec size 0x40 virtual false final false
  inline void _ctor(::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter* indexFilter, float_t beatDistributionParam,
                    ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType beatDistributionParamType);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapSaveData__EventBox", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapSaveData__EventBox(__BeatmapSaveData__EventBox&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapSaveData__EventBox", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapSaveData__EventBox(__BeatmapSaveData__EventBox const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapSaveData__EventBox();

public:
  /// @brief Field f, offset: 0x10, size: 0x8, def value: None
  ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter* ___f;

  /// @brief Field w, offset: 0x18, size: 0x4, def value: None
  float_t ___w;

  /// @brief Field d, offset: 0x1c, size: 0x4, def value: None
  ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType ___d;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox, 0x20>, "Size mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox, ___f) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox, ___w) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox, ___d) == 0x1c, "Offset mismatch!");

} // namespace BeatmapSaveDataVersion3
// Type: ::IndexFilterRandomType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion3 {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15008))
// CS Name: ::BeatmapSaveData::IndexFilterRandomType
struct CORDL_TYPE __BeatmapSaveData__IndexFilterRandomType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____BeatmapSaveData__IndexFilterRandomType_Unwrapped
  enum struct ____BeatmapSaveData__IndexFilterRandomType_Unwrapped : int32_t {
    __E_NoRandom = static_cast<int32_t>(0x0),
    __E_KeepOrder = static_cast<int32_t>(0x1),
    __E_RandomElements = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____BeatmapSaveData__IndexFilterRandomType_Unwrapped() const noexcept {
    return static_cast<____BeatmapSaveData__IndexFilterRandomType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __BeatmapSaveData__IndexFilterRandomType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapSaveData__IndexFilterRandomType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field NoRandom value: static_cast<int32_t>(0x0)
  static ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterRandomType const NoRandom;

  /// @brief Field KeepOrder value: static_cast<int32_t>(0x1)
  static ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterRandomType const KeepOrder;

  /// @brief Field RandomElements value: static_cast<int32_t>(0x2)
  static ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterRandomType const RandomElements;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterRandomType, 0x4>, "Size mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterRandomType, value__) == 0x0, "Offset mismatch!");

} // namespace BeatmapSaveDataVersion3
// Type: ::IndexFilterLimitAlsoAffectsType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion3 {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15009))
// CS Name: ::BeatmapSaveData::IndexFilterLimitAlsoAffectsType
struct CORDL_TYPE __BeatmapSaveData__IndexFilterLimitAlsoAffectsType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____BeatmapSaveData__IndexFilterLimitAlsoAffectsType_Unwrapped
  enum struct ____BeatmapSaveData__IndexFilterLimitAlsoAffectsType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Duration = static_cast<int32_t>(0x1),
    __E_Distribution = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____BeatmapSaveData__IndexFilterLimitAlsoAffectsType_Unwrapped() const noexcept {
    return static_cast<____BeatmapSaveData__IndexFilterLimitAlsoAffectsType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __BeatmapSaveData__IndexFilterLimitAlsoAffectsType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapSaveData__IndexFilterLimitAlsoAffectsType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterLimitAlsoAffectsType const None;

  /// @brief Field Duration value: static_cast<int32_t>(0x1)
  static ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterLimitAlsoAffectsType const Duration;

  /// @brief Field Distribution value: static_cast<int32_t>(0x2)
  static ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterLimitAlsoAffectsType const Distribution;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterLimitAlsoAffectsType, 0x4>, "Size mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterLimitAlsoAffectsType, value__) == 0x0, "Offset mismatch!");

} // namespace BeatmapSaveDataVersion3
// Type: ::IndexFilterType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15010))
// CS Name: ::BeatmapSaveData::IndexFilter::IndexFilterType
struct CORDL_TYPE __BeatmapSaveData__IndexFilter__IndexFilterType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____BeatmapSaveData__IndexFilter__IndexFilterType_Unwrapped
  enum struct ____BeatmapSaveData__IndexFilter__IndexFilterType_Unwrapped : int32_t {
    __E_Division = static_cast<int32_t>(0x1),
    __E_StepAndOffset = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____BeatmapSaveData__IndexFilter__IndexFilterType_Unwrapped() const noexcept {
    return static_cast<____BeatmapSaveData__IndexFilter__IndexFilterType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __BeatmapSaveData__IndexFilter__IndexFilterType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapSaveData__IndexFilter__IndexFilterType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Division value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__BeatmapSaveData__IndexFilter__IndexFilterType const Division;

  /// @brief Field StepAndOffset value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__BeatmapSaveData__IndexFilter__IndexFilterType const StepAndOffset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapSaveData__IndexFilter__IndexFilterType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapSaveData__IndexFilter__IndexFilterType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::IndexFilter
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(15008)), TypeDefinitionIndex(TypeDefinitionIndex(15009)),
// TypeDefinitionIndex(TypeDefinitionIndex(15010))} Self: TypeDefinitionIndex(TypeDefinitionIndex(15011)) CS Name: ::BeatmapSaveData::IndexFilter*
class CORDL_TYPE __BeatmapSaveData__IndexFilter : public ::System::Object {
public:
  // Declarations
  using IndexFilterType = ::GlobalNamespace::__BeatmapSaveData__IndexFilter__IndexFilterType;

  /// @brief Field f, offset 0x10, size 0x4
  __declspec(property(get = __get_f, put = __set_f))::GlobalNamespace::__BeatmapSaveData__IndexFilter__IndexFilterType f;

  /// @brief Field p, offset 0x14, size 0x4
  __declspec(property(get = __get_p, put = __set_p)) int32_t p;

  /// @brief Field t, offset 0x18, size 0x4
  __declspec(property(get = __get_t, put = __set_t)) int32_t t;

  /// @brief Field r, offset 0x1c, size 0x4
  __declspec(property(get = __get_r, put = __set_r)) int32_t r;

  /// @brief Field c, offset 0x20, size 0x4
  __declspec(property(get = __get_c, put = __set_c)) int32_t c;

  /// @brief Field n, offset 0x24, size 0x4
  __declspec(property(get = __get_n, put = __set_n))::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterRandomType n;

  /// @brief Field s, offset 0x28, size 0x4
  __declspec(property(get = __get_s, put = __set_s)) int32_t s;

  /// @brief Field l, offset 0x2c, size 0x4
  __declspec(property(get = __get_l, put = __set_l)) float_t l;

  /// @brief Field d, offset 0x30, size 0x4
  __declspec(property(get = __get_d, put = __set_d))::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterLimitAlsoAffectsType d;

  __declspec(property(get = get_type))::GlobalNamespace::__BeatmapSaveData__IndexFilter__IndexFilterType type;

  __declspec(property(get = get_param0)) int32_t param0;

  __declspec(property(get = get_param1)) int32_t param1;

  __declspec(property(get = get_reversed)) bool reversed;

  __declspec(property(get = get_chunks)) int32_t chunks;

  __declspec(property(get = get_limit)) float_t limit;

  __declspec(property(get = get_limitAlsoAffectsType))::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterLimitAlsoAffectsType limitAlsoAffectsType;

  __declspec(property(get = get_random))::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterRandomType random;

  __declspec(property(get = get_seed)) int32_t seed;

  constexpr ::GlobalNamespace::__BeatmapSaveData__IndexFilter__IndexFilterType& __get_f();

  constexpr ::GlobalNamespace::__BeatmapSaveData__IndexFilter__IndexFilterType const& __get_f() const;

  constexpr void __set_f(::GlobalNamespace::__BeatmapSaveData__IndexFilter__IndexFilterType value);

  constexpr int32_t& __get_p();

  constexpr int32_t const& __get_p() const;

  constexpr void __set_p(int32_t value);

  constexpr int32_t& __get_t();

  constexpr int32_t const& __get_t() const;

  constexpr void __set_t(int32_t value);

  constexpr int32_t& __get_r();

  constexpr int32_t const& __get_r() const;

  constexpr void __set_r(int32_t value);

  constexpr int32_t& __get_c();

  constexpr int32_t const& __get_c() const;

  constexpr void __set_c(int32_t value);

  constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterRandomType& __get_n();

  constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterRandomType const& __get_n() const;

  constexpr void __set_n(::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterRandomType value);

  constexpr int32_t& __get_s();

  constexpr int32_t const& __get_s() const;

  constexpr void __set_s(int32_t value);

  constexpr float_t& __get_l();

  constexpr float_t const& __get_l() const;

  constexpr void __set_l(float_t value);

  constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterLimitAlsoAffectsType& __get_d();

  constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterLimitAlsoAffectsType const& __get_d() const;

  constexpr void __set_d(::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterLimitAlsoAffectsType value);

  /// @brief Method get_type addr 0xda1d2c size 0x8 virtual false final false
  inline ::GlobalNamespace::__BeatmapSaveData__IndexFilter__IndexFilterType get_type();

  /// @brief Method get_param0 addr 0xda1d34 size 0x8 virtual false final false
  inline int32_t get_param0();

  /// @brief Method get_param1 addr 0xda1d3c size 0x8 virtual false final false
  inline int32_t get_param1();

  /// @brief Method get_reversed addr 0xda1d44 size 0x10 virtual false final false
  inline bool get_reversed();

  /// @brief Method get_chunks addr 0xda1d54 size 0x8 virtual false final false
  inline int32_t get_chunks();

  /// @brief Method get_limit addr 0xda1d5c size 0x8 virtual false final false
  inline float_t get_limit();

  /// @brief Method get_limitAlsoAffectsType addr 0xda1d64 size 0x8 virtual false final false
  inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterLimitAlsoAffectsType get_limitAlsoAffectsType();

  /// @brief Method get_random addr 0xda1d6c size 0x8 virtual false final false
  inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterRandomType get_random();

  /// @brief Method get_seed addr 0xda1d74 size 0x8 virtual false final false
  inline int32_t get_seed();

  static inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter* New_ctor(::GlobalNamespace::__BeatmapSaveData__IndexFilter__IndexFilterType type, int32_t param0, int32_t param1,
                                                                                    bool reversed, ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterRandomType random, int32_t seed,
                                                                                    int32_t chunks, float_t limit,
                                                                                    ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterLimitAlsoAffectsType limitAlsoAffectsType);

  /// @brief Method .ctor addr 0xda1d7c size 0x88 virtual false final false
  inline void _ctor(::GlobalNamespace::__BeatmapSaveData__IndexFilter__IndexFilterType type, int32_t param0, int32_t param1, bool reversed,
                    ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterRandomType random, int32_t seed, int32_t chunks, float_t limit,
                    ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterLimitAlsoAffectsType limitAlsoAffectsType);

  static inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter* New_ctor(::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter* other);

  /// @brief Method .ctor addr 0xda1e04 size 0x44 virtual false final false
  inline void _ctor(::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter* other);

  /// @brief Method CreateDivisionIndexFilter addr 0xda1e48 size 0x88 virtual false final false
  static inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter* CreateDivisionIndexFilter(int32_t numberOfSections, int32_t divisionIdx, bool reversed);

  /// @brief Method CreateStepFilter addr 0xda1ed0 size 0x88 virtual false final false
  static inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter* CreateStepFilter(int32_t offset, int32_t step, bool reversed);

  /// @brief Method CreateForExtension addr 0xda1f58 size 0x74 virtual false final false
  static inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter* CreateForExtension();

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapSaveData__IndexFilter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapSaveData__IndexFilter(__BeatmapSaveData__IndexFilter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapSaveData__IndexFilter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapSaveData__IndexFilter(__BeatmapSaveData__IndexFilter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapSaveData__IndexFilter();

public:
  /// @brief Field f, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::__BeatmapSaveData__IndexFilter__IndexFilterType ___f;

  /// @brief Field p, offset: 0x14, size: 0x4, def value: None
  int32_t ___p;

  /// @brief Field t, offset: 0x18, size: 0x4, def value: None
  int32_t ___t;

  /// @brief Field r, offset: 0x1c, size: 0x4, def value: None
  int32_t ___r;

  /// @brief Field c, offset: 0x20, size: 0x4, def value: None
  int32_t ___c;

  /// @brief Field n, offset: 0x24, size: 0x4, def value: None
  ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterRandomType ___n;

  /// @brief Field s, offset: 0x28, size: 0x4, def value: None
  int32_t ___s;

  /// @brief Field l, offset: 0x2c, size: 0x4, def value: None
  float_t ___l;

  /// @brief Field d, offset: 0x30, size: 0x4, def value: None
  ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterLimitAlsoAffectsType ___d;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter, 0x38>, "Size mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter, ___f) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter, ___p) == 0x14, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter, ___t) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter, ___r) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter, ___c) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter, ___n) == 0x24, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter, ___s) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter, ___l) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter, ___d) == 0x30, "Offset mismatch!");

} // namespace BeatmapSaveDataVersion3
// Type: ::LightColorEventBox
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15005)), TypeDefinitionIndex(TypeDefinitionIndex(15007)), TypeDefinitionIndex(TypeDefinitionIndex(15006))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15012))
// CS Name: ::BeatmapSaveData::LightColorEventBox*
class CORDL_TYPE __BeatmapSaveData__LightColorEventBox : public ::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox {
public:
  // Declarations
  /// @brief Field r, offset 0x20, size 0x4
  __declspec(property(get = __get_r, put = __set_r)) float_t r;

  /// @brief Field t, offset 0x24, size 0x4
  __declspec(property(get = __get_t, put = __set_t))::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType t;

  /// @brief Field b, offset 0x28, size 0x4
  __declspec(property(get = __get_b, put = __set_b)) int32_t b;

  /// @brief Field i, offset 0x2c, size 0x4
  __declspec(property(get = __get_i, put = __set_i))::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType i;

  /// @brief Field e, offset 0x30, size 0x8
  __declspec(property(get = __get_e, put = __set_e))::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData*>* e;

  __declspec(property(get = get_brightnessDistributionParam)) float_t brightnessDistributionParam;

  __declspec(property(get = get_brightnessDistributionParamType))::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType brightnessDistributionParamType;

  __declspec(property(get = get_brightnessDistributionShouldAffectFirstBaseEvent)) bool brightnessDistributionShouldAffectFirstBaseEvent;

  __declspec(property(get = get_brightnessDistributionEaseType))::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType brightnessDistributionEaseType;

  __declspec(property(get = get_lightColorBaseDataList))::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData*>* lightColorBaseDataList;

  constexpr float_t& __get_r();

  constexpr float_t const& __get_r() const;

  constexpr void __set_r(float_t value);

  constexpr ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType& __get_t();

  constexpr ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType const& __get_t() const;

  constexpr void __set_t(::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType value);

  constexpr int32_t& __get_b();

  constexpr int32_t const& __get_b() const;

  constexpr void __set_b(int32_t value);

  constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType& __get_i();

  constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType const& __get_i() const;

  constexpr void __set_i(::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType value);

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData*>*& __get_e();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData*>*> const& __get_e() const;

  constexpr void __set_e(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData*>* value);

  /// @brief Method get_brightnessDistributionParam addr 0xda1fcc size 0x8 virtual false final false
  inline float_t get_brightnessDistributionParam();

  /// @brief Method get_brightnessDistributionParamType addr 0xda1fd4 size 0x8 virtual false final false
  inline ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType get_brightnessDistributionParamType();

  /// @brief Method get_brightnessDistributionShouldAffectFirstBaseEvent addr 0xda1fdc size 0x10 virtual false final false
  inline bool get_brightnessDistributionShouldAffectFirstBaseEvent();

  /// @brief Method get_brightnessDistributionEaseType addr 0xda1fec size 0x8 virtual false final false
  inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType get_brightnessDistributionEaseType();

  /// @brief Method get_lightColorBaseDataList addr 0xda1ff4 size 0x8 virtual false final false
  inline ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData*>* get_lightColorBaseDataList();

  static inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox*
  New_ctor(::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter* indexFilter, float_t beatDistributionParam,
           ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType beatDistributionParamType, float_t brightnessDistributionParam, bool brightnessDistributionShouldAffectFirstBaseEvent,
           ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType brightnessDistributionParamType, ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType brightnessDistributionEaseType,
           ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData*>* lightColorBaseDataList);

  /// @brief Method .ctor addr 0xda1ffc size 0x80 virtual false final false
  inline void _ctor(::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter* indexFilter, float_t beatDistributionParam,
                    ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType beatDistributionParamType, float_t brightnessDistributionParam,
                    bool brightnessDistributionShouldAffectFirstBaseEvent, ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType brightnessDistributionParamType,
                    ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType brightnessDistributionEaseType,
                    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData*>* lightColorBaseDataList);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapSaveData__LightColorEventBox", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapSaveData__LightColorEventBox(__BeatmapSaveData__LightColorEventBox&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapSaveData__LightColorEventBox", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapSaveData__LightColorEventBox(__BeatmapSaveData__LightColorEventBox const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapSaveData__LightColorEventBox();

public:
  /// @brief Field r, offset: 0x20, size: 0x4, def value: None
  float_t ___r;

  /// @brief Field t, offset: 0x24, size: 0x4, def value: None
  ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType ___t;

  /// @brief Field b, offset: 0x28, size: 0x4, def value: None
  int32_t ___b;

  /// @brief Field i, offset: 0x2c, size: 0x4, def value: None
  ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType ___i;

  /// @brief Field e, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData*>* ___e;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox, 0x38>, "Size mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox, ___r) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox, ___t) == 0x24, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox, ___b) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox, ___i) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox, ___e) == 0x30, "Offset mismatch!");

} // namespace BeatmapSaveDataVersion3
// Type: ::LightColorBaseData
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15002)), TypeDefinitionIndex(TypeDefinitionIndex(15003)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15013))
// CS Name: ::BeatmapSaveData::LightColorBaseData*
class CORDL_TYPE __BeatmapSaveData__LightColorBaseData : public ::System::Object {
public:
  // Declarations
  /// @brief Field b, offset 0x10, size 0x4
  __declspec(property(get = __get_b, put = __set_b)) float_t b;

  /// @brief Field i, offset 0x14, size 0x4
  __declspec(property(get = __get_i, put = __set_i))::BeatmapSaveDataVersion3::__BeatmapSaveData__TransitionType i;

  /// @brief Field c, offset 0x18, size 0x4
  __declspec(property(get = __get_c, put = __set_c))::BeatmapSaveDataVersion3::__BeatmapSaveData__EnvironmentColorType c;

  /// @brief Field s, offset 0x1c, size 0x4
  __declspec(property(get = __get_s, put = __set_s)) float_t s;

  /// @brief Field f, offset 0x20, size 0x4
  __declspec(property(get = __get_f, put = __set_f)) int32_t f;

  __declspec(property(get = get_beat)) float_t beat;

  __declspec(property(get = get_transitionType))::BeatmapSaveDataVersion3::__BeatmapSaveData__TransitionType transitionType;

  __declspec(property(get = get_colorType))::BeatmapSaveDataVersion3::__BeatmapSaveData__EnvironmentColorType colorType;

  __declspec(property(get = get_brightness)) float_t brightness;

  __declspec(property(get = get_strobeBeatFrequency)) int32_t strobeBeatFrequency;

  constexpr float_t& __get_b();

  constexpr float_t const& __get_b() const;

  constexpr void __set_b(float_t value);

  constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__TransitionType& __get_i();

  constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__TransitionType const& __get_i() const;

  constexpr void __set_i(::BeatmapSaveDataVersion3::__BeatmapSaveData__TransitionType value);

  constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EnvironmentColorType& __get_c();

  constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EnvironmentColorType const& __get_c() const;

  constexpr void __set_c(::BeatmapSaveDataVersion3::__BeatmapSaveData__EnvironmentColorType value);

  constexpr float_t& __get_s();

  constexpr float_t const& __get_s() const;

  constexpr void __set_s(float_t value);

  constexpr int32_t& __get_f();

  constexpr int32_t const& __get_f() const;

  constexpr void __set_f(int32_t value);

  /// @brief Method get_beat addr 0xda207c size 0x8 virtual false final false
  inline float_t get_beat();

  /// @brief Method get_transitionType addr 0xda2084 size 0x8 virtual false final false
  inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__TransitionType get_transitionType();

  /// @brief Method get_colorType addr 0xda208c size 0x8 virtual false final false
  inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__EnvironmentColorType get_colorType();

  /// @brief Method get_brightness addr 0xda2094 size 0x8 virtual false final false
  inline float_t get_brightness();

  /// @brief Method get_strobeBeatFrequency addr 0xda209c size 0x8 virtual false final false
  inline int32_t get_strobeBeatFrequency();

  static inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData* New_ctor(float_t beat, ::BeatmapSaveDataVersion3::__BeatmapSaveData__TransitionType transitionType,
                                                                                           ::BeatmapSaveDataVersion3::__BeatmapSaveData__EnvironmentColorType colorType, float_t brightness,
                                                                                           int32_t strobeFrequency);

  /// @brief Method .ctor addr 0xda20a4 size 0x54 virtual false final false
  inline void _ctor(float_t beat, ::BeatmapSaveDataVersion3::__BeatmapSaveData__TransitionType transitionType, ::BeatmapSaveDataVersion3::__BeatmapSaveData__EnvironmentColorType colorType,
                    float_t brightness, int32_t strobeFrequency);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapSaveData__LightColorBaseData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapSaveData__LightColorBaseData(__BeatmapSaveData__LightColorBaseData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapSaveData__LightColorBaseData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapSaveData__LightColorBaseData(__BeatmapSaveData__LightColorBaseData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapSaveData__LightColorBaseData();

public:
  /// @brief Field b, offset: 0x10, size: 0x4, def value: None
  float_t ___b;

  /// @brief Field i, offset: 0x14, size: 0x4, def value: None
  ::BeatmapSaveDataVersion3::__BeatmapSaveData__TransitionType ___i;

  /// @brief Field c, offset: 0x18, size: 0x4, def value: None
  ::BeatmapSaveDataVersion3::__BeatmapSaveData__EnvironmentColorType ___c;

  /// @brief Field s, offset: 0x1c, size: 0x4, def value: None
  float_t ___s;

  /// @brief Field f, offset: 0x20, size: 0x4, def value: None
  int32_t ___f;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData, 0x28>, "Size mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData, ___b) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData, ___i) == 0x14, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData, ___c) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData, ___s) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData, ___f) == 0x20, "Offset mismatch!");

} // namespace BeatmapSaveDataVersion3
// Type: ::LightRotationEventBox
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15006)), TypeDefinitionIndex(TypeDefinitionIndex(15004)), TypeDefinitionIndex(TypeDefinitionIndex(15007)),
// TypeDefinitionIndex(TypeDefinitionIndex(15005))} Self: TypeDefinitionIndex(TypeDefinitionIndex(15014)) CS Name: ::BeatmapSaveData::LightRotationEventBox*
class CORDL_TYPE __BeatmapSaveData__LightRotationEventBox : public ::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox {
public:
  // Declarations
  /// @brief Field s, offset 0x20, size 0x4
  __declspec(property(get = __get_s, put = __set_s)) float_t s;

  /// @brief Field t, offset 0x24, size 0x4
  __declspec(property(get = __get_t, put = __set_t))::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType t;

  /// @brief Field a, offset 0x28, size 0x4
  __declspec(property(get = __get_a, put = __set_a))::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis a;

  /// @brief Field r, offset 0x2c, size 0x4
  __declspec(property(get = __get_r, put = __set_r)) int32_t r;

  /// @brief Field b, offset 0x30, size 0x4
  __declspec(property(get = __get_b, put = __set_b)) int32_t b;

  /// @brief Field i, offset 0x34, size 0x4
  __declspec(property(get = __get_i, put = __set_i))::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType i;

  /// @brief Field l, offset 0x38, size 0x8
  __declspec(property(get = __get_l, put = __set_l))::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData*>* l;

  __declspec(property(get = get_rotationDistributionParam)) float_t rotationDistributionParam;

  __declspec(property(get = get_rotationDistributionParamType))::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType rotationDistributionParamType;

  __declspec(property(get = get_axis))::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis axis;

  __declspec(property(get = get_flipRotation)) bool flipRotation;

  __declspec(property(get = get_rotationDistributionShouldAffectFirstBaseEvent)) bool rotationDistributionShouldAffectFirstBaseEvent;

  __declspec(property(get = get_rotationDistributionEaseType))::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType rotationDistributionEaseType;

  __declspec(
      property(get = get_lightRotationBaseDataList))::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData*>* lightRotationBaseDataList;

  constexpr float_t& __get_s();

  constexpr float_t const& __get_s() const;

  constexpr void __set_s(float_t value);

  constexpr ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType& __get_t();

  constexpr ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType const& __get_t() const;

  constexpr void __set_t(::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType value);

  constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis& __get_a();

  constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis const& __get_a() const;

  constexpr void __set_a(::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis value);

  constexpr int32_t& __get_r();

  constexpr int32_t const& __get_r() const;

  constexpr void __set_r(int32_t value);

  constexpr int32_t& __get_b();

  constexpr int32_t const& __get_b() const;

  constexpr void __set_b(int32_t value);

  constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType& __get_i();

  constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType const& __get_i() const;

  constexpr void __set_i(::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType value);

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData*>*& __get_l();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData*>*> const& __get_l() const;

  constexpr void __set_l(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData*>* value);

  /// @brief Method get_rotationDistributionParam addr 0xda20f8 size 0x8 virtual false final false
  inline float_t get_rotationDistributionParam();

  /// @brief Method get_rotationDistributionParamType addr 0xda2100 size 0x8 virtual false final false
  inline ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType get_rotationDistributionParamType();

  /// @brief Method get_axis addr 0xda2108 size 0x8 virtual false final false
  inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis get_axis();

  /// @brief Method get_flipRotation addr 0xda2110 size 0x10 virtual false final false
  inline bool get_flipRotation();

  /// @brief Method get_rotationDistributionShouldAffectFirstBaseEvent addr 0xda2120 size 0x10 virtual false final false
  inline bool get_rotationDistributionShouldAffectFirstBaseEvent();

  /// @brief Method get_rotationDistributionEaseType addr 0xda2130 size 0x8 virtual false final false
  inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType get_rotationDistributionEaseType();

  /// @brief Method get_lightRotationBaseDataList addr 0xda2138 size 0x8 virtual false final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData*>* get_lightRotationBaseDataList();

  static inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox*
  New_ctor(::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter* indexFilter, float_t beatDistributionParam,
           ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType beatDistributionParamType, float_t rotationDistributionParam,
           ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType rotationDistributionParamType, bool rotationDistributionShouldAffectFirstBaseEvent,
           ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType rotationDistributionEaseType, ::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis axis, bool flipRotation,
           ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData*>* lightRotationBaseDataList);

  /// @brief Method .ctor addr 0xda2140 size 0x98 virtual false final false
  inline void _ctor(::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter* indexFilter, float_t beatDistributionParam,
                    ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType beatDistributionParamType, float_t rotationDistributionParam,
                    ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType rotationDistributionParamType, bool rotationDistributionShouldAffectFirstBaseEvent,
                    ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType rotationDistributionEaseType, ::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis axis, bool flipRotation,
                    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData*>* lightRotationBaseDataList);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapSaveData__LightRotationEventBox", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapSaveData__LightRotationEventBox(__BeatmapSaveData__LightRotationEventBox&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapSaveData__LightRotationEventBox", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapSaveData__LightRotationEventBox(__BeatmapSaveData__LightRotationEventBox const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapSaveData__LightRotationEventBox();

public:
  /// @brief Field s, offset: 0x20, size: 0x4, def value: None
  float_t ___s;

  /// @brief Field t, offset: 0x24, size: 0x4, def value: None
  ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType ___t;

  /// @brief Field a, offset: 0x28, size: 0x4, def value: None
  ::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis ___a;

  /// @brief Field r, offset: 0x2c, size: 0x4, def value: None
  int32_t ___r;

  /// @brief Field b, offset: 0x30, size: 0x4, def value: None
  int32_t ___b;

  /// @brief Field i, offset: 0x34, size: 0x4, def value: None
  ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType ___i;

  /// @brief Field l, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData*>* ___l;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox, 0x40>, "Size mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox, ___s) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox, ___t) == 0x24, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox, ___a) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox, ___r) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox, ___b) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox, ___i) == 0x34, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox, ___l) == 0x38, "Offset mismatch!");

} // namespace BeatmapSaveDataVersion3
// Type: ::RotationDirection
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15015))
// CS Name: ::BeatmapSaveData::LightRotationBaseData::RotationDirection
struct CORDL_TYPE __BeatmapSaveData__LightRotationBaseData__RotationDirection {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____BeatmapSaveData__LightRotationBaseData__RotationDirection_Unwrapped
  enum struct ____BeatmapSaveData__LightRotationBaseData__RotationDirection_Unwrapped : int32_t {
    __E_Automatic = static_cast<int32_t>(0x0),
    __E_Clockwise = static_cast<int32_t>(0x1),
    __E_Counterclockwise = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____BeatmapSaveData__LightRotationBaseData__RotationDirection_Unwrapped() const noexcept {
    return static_cast<____BeatmapSaveData__LightRotationBaseData__RotationDirection_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __BeatmapSaveData__LightRotationBaseData__RotationDirection(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapSaveData__LightRotationBaseData__RotationDirection();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Automatic value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__BeatmapSaveData__LightRotationBaseData__RotationDirection const Automatic;

  /// @brief Field Clockwise value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__BeatmapSaveData__LightRotationBaseData__RotationDirection const Clockwise;

  /// @brief Field Counterclockwise value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__BeatmapSaveData__LightRotationBaseData__RotationDirection const Counterclockwise;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapSaveData__LightRotationBaseData__RotationDirection, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapSaveData__LightRotationBaseData__RotationDirection, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LightRotationBaseData
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(15005)), TypeDefinitionIndex(TypeDefinitionIndex(15015))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15016))
// CS Name: ::BeatmapSaveData::LightRotationBaseData*
class CORDL_TYPE __BeatmapSaveData__LightRotationBaseData : public ::System::Object {
public:
  // Declarations
  using RotationDirection = ::GlobalNamespace::__BeatmapSaveData__LightRotationBaseData__RotationDirection;

  /// @brief Field b, offset 0x10, size 0x4
  __declspec(property(get = __get_b, put = __set_b)) float_t b;

  /// @brief Field p, offset 0x14, size 0x4
  __declspec(property(get = __get_p, put = __set_p)) int32_t p;

  /// @brief Field e, offset 0x18, size 0x4
  __declspec(property(get = __get_e, put = __set_e))::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType e;

  /// @brief Field l, offset 0x1c, size 0x4
  __declspec(property(get = __get_l, put = __set_l)) int32_t l;

  /// @brief Field r, offset 0x20, size 0x4
  __declspec(property(get = __get_r, put = __set_r)) float_t r;

  /// @brief Field o, offset 0x24, size 0x4
  __declspec(property(get = __get_o, put = __set_o))::GlobalNamespace::__BeatmapSaveData__LightRotationBaseData__RotationDirection o;

  __declspec(property(get = get_beat)) float_t beat;

  __declspec(property(get = get_usePreviousEventRotationValue)) bool usePreviousEventRotationValue;

  __declspec(property(get = get_easeType))::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType easeType;

  __declspec(property(get = get_loopsCount)) int32_t loopsCount;

  __declspec(property(get = get_rotation)) float_t rotation;

  __declspec(property(get = get_rotationDirection))::GlobalNamespace::__BeatmapSaveData__LightRotationBaseData__RotationDirection rotationDirection;

  constexpr float_t& __get_b();

  constexpr float_t const& __get_b() const;

  constexpr void __set_b(float_t value);

  constexpr int32_t& __get_p();

  constexpr int32_t const& __get_p() const;

  constexpr void __set_p(int32_t value);

  constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType& __get_e();

  constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType const& __get_e() const;

  constexpr void __set_e(::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType value);

  constexpr int32_t& __get_l();

  constexpr int32_t const& __get_l() const;

  constexpr void __set_l(int32_t value);

  constexpr float_t& __get_r();

  constexpr float_t const& __get_r() const;

  constexpr void __set_r(float_t value);

  constexpr ::GlobalNamespace::__BeatmapSaveData__LightRotationBaseData__RotationDirection& __get_o();

  constexpr ::GlobalNamespace::__BeatmapSaveData__LightRotationBaseData__RotationDirection const& __get_o() const;

  constexpr void __set_o(::GlobalNamespace::__BeatmapSaveData__LightRotationBaseData__RotationDirection value);

  /// @brief Method get_beat addr 0xda21d8 size 0x8 virtual false final false
  inline float_t get_beat();

  /// @brief Method get_usePreviousEventRotationValue addr 0xda21e0 size 0x10 virtual false final false
  inline bool get_usePreviousEventRotationValue();

  /// @brief Method get_easeType addr 0xda21f0 size 0x8 virtual false final false
  inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType get_easeType();

  /// @brief Method get_loopsCount addr 0xda21f8 size 0x8 virtual false final false
  inline int32_t get_loopsCount();

  /// @brief Method get_rotation addr 0xda2200 size 0x8 virtual false final false
  inline float_t get_rotation();

  /// @brief Method get_rotationDirection addr 0xda2208 size 0x8 virtual false final false
  inline ::GlobalNamespace::__BeatmapSaveData__LightRotationBaseData__RotationDirection get_rotationDirection();

  static inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData* New_ctor(float_t beat, bool usePreviousEventRotationValue,
                                                                                              ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType easeType, int32_t loopsCount, float_t rotation,
                                                                                              ::GlobalNamespace::__BeatmapSaveData__LightRotationBaseData__RotationDirection rotationDirection);

  /// @brief Method .ctor addr 0xda2210 size 0x68 virtual false final false
  inline void _ctor(float_t beat, bool usePreviousEventRotationValue, ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType easeType, int32_t loopsCount, float_t rotation,
                    ::GlobalNamespace::__BeatmapSaveData__LightRotationBaseData__RotationDirection rotationDirection);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapSaveData__LightRotationBaseData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapSaveData__LightRotationBaseData(__BeatmapSaveData__LightRotationBaseData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapSaveData__LightRotationBaseData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapSaveData__LightRotationBaseData(__BeatmapSaveData__LightRotationBaseData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapSaveData__LightRotationBaseData();

public:
  /// @brief Field b, offset: 0x10, size: 0x4, def value: None
  float_t ___b;

  /// @brief Field p, offset: 0x14, size: 0x4, def value: None
  int32_t ___p;

  /// @brief Field e, offset: 0x18, size: 0x4, def value: None
  ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType ___e;

  /// @brief Field l, offset: 0x1c, size: 0x4, def value: None
  int32_t ___l;

  /// @brief Field r, offset: 0x20, size: 0x4, def value: None
  float_t ___r;

  /// @brief Field o, offset: 0x24, size: 0x4, def value: None
  ::GlobalNamespace::__BeatmapSaveData__LightRotationBaseData__RotationDirection ___o;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData, 0x28>, "Size mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData, ___b) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData, ___p) == 0x14, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData, ___e) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData, ___l) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData, ___r) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData, ___o) == 0x24, "Offset mismatch!");

} // namespace BeatmapSaveDataVersion3
// Type: ::LightTranslationEventBox
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15006)), TypeDefinitionIndex(TypeDefinitionIndex(15005)), TypeDefinitionIndex(TypeDefinitionIndex(15007)),
// TypeDefinitionIndex(TypeDefinitionIndex(15004))} Self: TypeDefinitionIndex(TypeDefinitionIndex(15017)) CS Name: ::BeatmapSaveData::LightTranslationEventBox*
class CORDL_TYPE __BeatmapSaveData__LightTranslationEventBox : public ::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox {
public:
  // Declarations
  /// @brief Field s, offset 0x20, size 0x4
  __declspec(property(get = __get_s, put = __set_s)) float_t s;

  /// @brief Field t, offset 0x24, size 0x4
  __declspec(property(get = __get_t, put = __set_t))::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType t;

  /// @brief Field a, offset 0x28, size 0x4
  __declspec(property(get = __get_a, put = __set_a))::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis a;

  /// @brief Field r, offset 0x2c, size 0x4
  __declspec(property(get = __get_r, put = __set_r)) int32_t r;

  /// @brief Field b, offset 0x30, size 0x4
  __declspec(property(get = __get_b, put = __set_b)) int32_t b;

  /// @brief Field i, offset 0x34, size 0x4
  __declspec(property(get = __get_i, put = __set_i))::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType i;

  /// @brief Field l, offset 0x38, size 0x8
  __declspec(property(get = __get_l, put = __set_l))::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData*>* l;

  __declspec(property(get = get_gapDistributionParam)) float_t gapDistributionParam;

  __declspec(property(get = get_gapDistributionParamType))::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType gapDistributionParamType;

  __declspec(property(get = get_axis))::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis axis;

  __declspec(property(get = get_flipTranslation)) bool flipTranslation;

  __declspec(property(get = get_gapDistributionShouldAffectFirstBaseEvent)) bool gapDistributionShouldAffectFirstBaseEvent;

  __declspec(property(get = get_gapDistributionEaseType))::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType gapDistributionEaseType;

  __declspec(property(
      get = get_lightTranslationBaseDataList))::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData*>* lightTranslationBaseDataList;

  constexpr float_t& __get_s();

  constexpr float_t const& __get_s() const;

  constexpr void __set_s(float_t value);

  constexpr ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType& __get_t();

  constexpr ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType const& __get_t() const;

  constexpr void __set_t(::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType value);

  constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis& __get_a();

  constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis const& __get_a() const;

  constexpr void __set_a(::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis value);

  constexpr int32_t& __get_r();

  constexpr int32_t const& __get_r() const;

  constexpr void __set_r(int32_t value);

  constexpr int32_t& __get_b();

  constexpr int32_t const& __get_b() const;

  constexpr void __set_b(int32_t value);

  constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType& __get_i();

  constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType const& __get_i() const;

  constexpr void __set_i(::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType value);

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData*>*& __get_l();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData*>*> const& __get_l() const;

  constexpr void __set_l(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData*>* value);

  /// @brief Method get_gapDistributionParam addr 0xda2278 size 0x8 virtual false final false
  inline float_t get_gapDistributionParam();

  /// @brief Method get_gapDistributionParamType addr 0xda2280 size 0x8 virtual false final false
  inline ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType get_gapDistributionParamType();

  /// @brief Method get_axis addr 0xda2288 size 0x8 virtual false final false
  inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis get_axis();

  /// @brief Method get_flipTranslation addr 0xda2290 size 0x10 virtual false final false
  inline bool get_flipTranslation();

  /// @brief Method get_gapDistributionShouldAffectFirstBaseEvent addr 0xda22a0 size 0x10 virtual false final false
  inline bool get_gapDistributionShouldAffectFirstBaseEvent();

  /// @brief Method get_gapDistributionEaseType addr 0xda22b0 size 0x8 virtual false final false
  inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType get_gapDistributionEaseType();

  /// @brief Method get_lightTranslationBaseDataList addr 0xda22b8 size 0x8 virtual false final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData*>* get_lightTranslationBaseDataList();

  static inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox*
  New_ctor(::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter* indexFilter, float_t beatDistributionPara,
           ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType beatDistributionParamType, float_t gapDistributionParam,
           ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType gapDistributionParamType, bool gapDistributionShouldAffectFirstBaseEvent,
           ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType gapDistributionEaseType, ::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis axis, bool flipTranslation,
           ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData*>* lightTranslationBaseDataList);

  /// @brief Method .ctor addr 0xda22c0 size 0x98 virtual false final false
  inline void _ctor(::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter* indexFilter, float_t beatDistributionPara,
                    ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType beatDistributionParamType, float_t gapDistributionParam,
                    ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType gapDistributionParamType, bool gapDistributionShouldAffectFirstBaseEvent,
                    ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType gapDistributionEaseType, ::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis axis, bool flipTranslation,
                    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData*>* lightTranslationBaseDataList);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapSaveData__LightTranslationEventBox", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapSaveData__LightTranslationEventBox(__BeatmapSaveData__LightTranslationEventBox&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapSaveData__LightTranslationEventBox", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapSaveData__LightTranslationEventBox(__BeatmapSaveData__LightTranslationEventBox const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapSaveData__LightTranslationEventBox();

public:
  /// @brief Field s, offset: 0x20, size: 0x4, def value: None
  float_t ___s;

  /// @brief Field t, offset: 0x24, size: 0x4, def value: None
  ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType ___t;

  /// @brief Field a, offset: 0x28, size: 0x4, def value: None
  ::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis ___a;

  /// @brief Field r, offset: 0x2c, size: 0x4, def value: None
  int32_t ___r;

  /// @brief Field b, offset: 0x30, size: 0x4, def value: None
  int32_t ___b;

  /// @brief Field i, offset: 0x34, size: 0x4, def value: None
  ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType ___i;

  /// @brief Field l, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData*>* ___l;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox, 0x40>, "Size mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox, ___s) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox, ___t) == 0x24, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox, ___a) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox, ___r) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox, ___b) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox, ___i) == 0x34, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox, ___l) == 0x38, "Offset mismatch!");

} // namespace BeatmapSaveDataVersion3
// Type: ::LightTranslationBaseData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(15005))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15018))
// CS Name: ::BeatmapSaveData::LightTranslationBaseData*
class CORDL_TYPE __BeatmapSaveData__LightTranslationBaseData : public ::System::Object {
public:
  // Declarations
  /// @brief Field b, offset 0x10, size 0x4
  __declspec(property(get = __get_b, put = __set_b)) float_t b;

  /// @brief Field p, offset 0x14, size 0x4
  __declspec(property(get = __get_p, put = __set_p)) int32_t p;

  /// @brief Field e, offset 0x18, size 0x4
  __declspec(property(get = __get_e, put = __set_e))::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType e;

  /// @brief Field t, offset 0x1c, size 0x4
  __declspec(property(get = __get_t, put = __set_t)) float_t t;

  __declspec(property(get = get_beat)) float_t beat;

  __declspec(property(get = get_usePreviousEventTranslationValue)) bool usePreviousEventTranslationValue;

  __declspec(property(get = get_easeType))::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType easeType;

  __declspec(property(get = get_translation)) float_t translation;

  constexpr float_t& __get_b();

  constexpr float_t const& __get_b() const;

  constexpr void __set_b(float_t value);

  constexpr int32_t& __get_p();

  constexpr int32_t const& __get_p() const;

  constexpr void __set_p(int32_t value);

  constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType& __get_e();

  constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType const& __get_e() const;

  constexpr void __set_e(::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType value);

  constexpr float_t& __get_t();

  constexpr float_t const& __get_t() const;

  constexpr void __set_t(float_t value);

  /// @brief Method get_beat addr 0xda2358 size 0x8 virtual false final false
  inline float_t get_beat();

  /// @brief Method get_usePreviousEventTranslationValue addr 0xda2360 size 0x10 virtual false final false
  inline bool get_usePreviousEventTranslationValue();

  /// @brief Method get_easeType addr 0xda2370 size 0x8 virtual false final false
  inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType get_easeType();

  /// @brief Method get_translation addr 0xda2378 size 0x8 virtual false final false
  inline float_t get_translation();

  static inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData* New_ctor(float_t beat, bool usePreviousEventTranslationValue,
                                                                                                 ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType easeType, float_t translation);

  /// @brief Method .ctor addr 0xda2380 size 0x50 virtual false final false
  inline void _ctor(float_t beat, bool usePreviousEventTranslationValue, ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType easeType, float_t translation);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapSaveData__LightTranslationBaseData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapSaveData__LightTranslationBaseData(__BeatmapSaveData__LightTranslationBaseData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapSaveData__LightTranslationBaseData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapSaveData__LightTranslationBaseData(__BeatmapSaveData__LightTranslationBaseData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapSaveData__LightTranslationBaseData();

public:
  /// @brief Field b, offset: 0x10, size: 0x4, def value: None
  float_t ___b;

  /// @brief Field p, offset: 0x14, size: 0x4, def value: None
  int32_t ___p;

  /// @brief Field e, offset: 0x18, size: 0x4, def value: None
  ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType ___e;

  /// @brief Field t, offset: 0x1c, size: 0x4, def value: None
  float_t ___t;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData, 0x20>, "Size mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData, ___b) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData, ___p) == 0x14, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData, ___e) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData, ___t) == 0x1c, "Offset mismatch!");

} // namespace BeatmapSaveDataVersion3
// Type: ::EventBoxGroup
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14994))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15019))
// CS Name: ::BeatmapSaveData::EventBoxGroup*
class CORDL_TYPE __BeatmapSaveData__EventBoxGroup : public ::BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem {
public:
  // Declarations
  /// @brief Field g, offset 0x14, size 0x4
  __declspec(property(get = __get_g, put = __set_g)) int32_t g;

  __declspec(property(get = get_groupId)) int32_t groupId;

  __declspec(property(get = get_baseEventBoxes))::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox*>* baseEventBoxes;

  constexpr int32_t& __get_g();

  constexpr int32_t const& __get_g() const;

  constexpr void __set_g(int32_t value);

  /// @brief Method get_groupId addr 0xda23d0 size 0x8 virtual false final false
  inline int32_t get_groupId();

  /// @brief Method get_baseEventBoxes addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox*>* get_baseEventBoxes();

  static inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup* New_ctor(float_t beat, int32_t groupId);

  /// @brief Method .ctor addr 0xda23d8 size 0x38 virtual false final false
  inline void _ctor(float_t beat, int32_t groupId);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapSaveData__EventBoxGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapSaveData__EventBoxGroup(__BeatmapSaveData__EventBoxGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapSaveData__EventBoxGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapSaveData__EventBoxGroup(__BeatmapSaveData__EventBoxGroup const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapSaveData__EventBoxGroup();

public:
  /// @brief Field g, offset: 0x14, size: 0x4, def value: None
  int32_t ___g;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup, 0x18>, "Size mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup, ___g) == 0x14, "Offset mismatch!");

} // namespace BeatmapSaveDataVersion3
// Type: ::EventBoxGroup`1
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion3 {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15019))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15020))
// CS Name: ::BeatmapSaveData::EventBoxGroup`1<T>*
class CORDL_TYPE __BeatmapSaveData__EventBoxGroup_1 : public ::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup {
public:
  // Declarations
  /// @brief Field e, offset 0x18, size 0x8
  __declspec(property(get = __get_e, put = __set_e))::System::Collections::Generic::List_1<T>* e;

  __declspec(property(get = get_baseEventBoxes))::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox*>* baseEventBoxes;

  __declspec(property(get = get_eventBoxes))::System::Collections::Generic::IReadOnlyList_1<T>* eventBoxes;

  constexpr ::System::Collections::Generic::List_1<T>*& __get_e();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<T>*> const& __get_e() const;

  constexpr void __set_e(::System::Collections::Generic::List_1<T>* value);

  /// @brief Method get_baseEventBoxes addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox*>* get_baseEventBoxes();

  /// @brief Method get_eventBoxes addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::System::Collections::Generic::IReadOnlyList_1<T>* get_eventBoxes();

  static inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup_1<T>* New_ctor(float_t beat, int32_t groupId, ::System::Collections::Generic::List_1<T>* eventBoxes);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(float_t beat, int32_t groupId, ::System::Collections::Generic::List_1<T>* eventBoxes);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapSaveData__EventBoxGroup_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapSaveData__EventBoxGroup_1(__BeatmapSaveData__EventBoxGroup_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapSaveData__EventBoxGroup_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapSaveData__EventBoxGroup_1(__BeatmapSaveData__EventBoxGroup_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapSaveData__EventBoxGroup_1();

public:
  /// @brief Field e, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<T>* ___e;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace BeatmapSaveDataVersion3
// Type: ::LightColorEventBoxGroup
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15020)), TypeDefinitionIndex(TypeDefinitionIndex(15012)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15020), inst:
// 1659 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(15021)) CS Name: ::BeatmapSaveData::LightColorEventBoxGroup*
class CORDL_TYPE __BeatmapSaveData__LightColorEventBoxGroup : public ::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox*> {
public:
  // Declarations
  static inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup*
  New_ctor(float_t beat, int32_t groupId, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox*>* eventBoxes);

  /// @brief Method .ctor addr 0xda2410 size 0x70 virtual false final false
  inline void _ctor(float_t beat, int32_t groupId, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox*>* eventBoxes);

  /// @brief Method CopyWith addr 0xda2480 size 0xe0 virtual false final false
  inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup* CopyWith(::System::Nullable_1<float_t> newBeat, ::System::Nullable_1<int32_t> newGroupId);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapSaveData__LightColorEventBoxGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapSaveData__LightColorEventBoxGroup(__BeatmapSaveData__LightColorEventBoxGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapSaveData__LightColorEventBoxGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapSaveData__LightColorEventBoxGroup(__BeatmapSaveData__LightColorEventBoxGroup const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapSaveData__LightColorEventBoxGroup();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup, 0x20>, "Size mismatch!");

} // namespace BeatmapSaveDataVersion3
// Type: ::LightRotationEventBoxGroup
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15020), inst: 1660 }), TypeDefinitionIndex(TypeDefinitionIndex(15020)),
// TypeDefinitionIndex(TypeDefinitionIndex(15014))} Self: TypeDefinitionIndex(TypeDefinitionIndex(15022)) CS Name: ::BeatmapSaveData::LightRotationEventBoxGroup*
class CORDL_TYPE __BeatmapSaveData__LightRotationEventBoxGroup
    : public ::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox*> {
public:
  // Declarations
  static inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup*
  New_ctor(float_t beat, int32_t groupId, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox*>* eventBoxes);

  /// @brief Method .ctor addr 0xda2560 size 0x70 virtual false final false
  inline void _ctor(float_t beat, int32_t groupId, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox*>* eventBoxes);

  /// @brief Method CopyWith addr 0xda25d0 size 0xe0 virtual false final false
  inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup* CopyWith(::System::Nullable_1<float_t> newBeat, ::System::Nullable_1<int32_t> newGroupId);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapSaveData__LightRotationEventBoxGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapSaveData__LightRotationEventBoxGroup(__BeatmapSaveData__LightRotationEventBoxGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapSaveData__LightRotationEventBoxGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapSaveData__LightRotationEventBoxGroup(__BeatmapSaveData__LightRotationEventBoxGroup const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapSaveData__LightRotationEventBoxGroup();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup, 0x20>, "Size mismatch!");

} // namespace BeatmapSaveDataVersion3
// Type: ::LightTranslationEventBoxGroup
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15020)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15020), inst: 1661 }),
// TypeDefinitionIndex(TypeDefinitionIndex(15017))} Self: TypeDefinitionIndex(TypeDefinitionIndex(15023)) CS Name: ::BeatmapSaveData::LightTranslationEventBoxGroup*
class CORDL_TYPE __BeatmapSaveData__LightTranslationEventBoxGroup
    : public ::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox*> {
public:
  // Declarations
  static inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup*
  New_ctor(float_t beat, int32_t groupId, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox*>* eventBoxes);

  /// @brief Method .ctor addr 0xda26b0 size 0x70 virtual false final false
  inline void _ctor(float_t beat, int32_t groupId, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox*>* eventBoxes);

  /// @brief Method CopyWith addr 0xda2720 size 0xe0 virtual false final false
  inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup* CopyWith(::System::Nullable_1<float_t> newBeat, ::System::Nullable_1<int32_t> newGroupId);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapSaveData__LightTranslationEventBoxGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapSaveData__LightTranslationEventBoxGroup(__BeatmapSaveData__LightTranslationEventBoxGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapSaveData__LightTranslationEventBoxGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapSaveData__LightTranslationEventBoxGroup(__BeatmapSaveData__LightTranslationEventBoxGroup const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapSaveData__LightTranslationEventBoxGroup();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup, 0x20>, "Size mismatch!");

} // namespace BeatmapSaveDataVersion3
// Type: ::NoteColorType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion3 {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15024))
// CS Name: ::BeatmapSaveData::NoteColorType
struct CORDL_TYPE __BeatmapSaveData__NoteColorType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____BeatmapSaveData__NoteColorType_Unwrapped
  enum struct ____BeatmapSaveData__NoteColorType_Unwrapped : int32_t {
    __E_ColorA = static_cast<int32_t>(0x0),
    __E_ColorB = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____BeatmapSaveData__NoteColorType_Unwrapped() const noexcept {
    return static_cast<____BeatmapSaveData__NoteColorType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __BeatmapSaveData__NoteColorType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapSaveData__NoteColorType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field ColorA value: static_cast<int32_t>(0x0)
  static ::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType const ColorA;

  /// @brief Field ColorB value: static_cast<int32_t>(0x1)
  static ::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType const ColorB;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType, 0x4>, "Size mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType, value__) == 0x0, "Offset mismatch!");

} // namespace BeatmapSaveDataVersion3
// Type: ::ColorNoteData
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14968)), TypeDefinitionIndex(TypeDefinitionIndex(14994)), TypeDefinitionIndex(TypeDefinitionIndex(15024))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15025))
// CS Name: ::BeatmapSaveData::ColorNoteData*
class CORDL_TYPE __BeatmapSaveData__ColorNoteData : public ::BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem {
public:
  // Declarations
  /// @brief Field x, offset 0x14, size 0x4
  __declspec(property(get = __get_x, put = __set_x)) int32_t x;

  /// @brief Field y, offset 0x18, size 0x4
  __declspec(property(get = __get_y, put = __set_y)) int32_t y;

  /// @brief Field a, offset 0x1c, size 0x4
  __declspec(property(get = __get_a, put = __set_a)) int32_t a;

  /// @brief Field c, offset 0x20, size 0x4
  __declspec(property(get = __get_c, put = __set_c))::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType c;

  /// @brief Field d, offset 0x24, size 0x4
  __declspec(property(get = __get_d, put = __set_d))::GlobalNamespace::NoteCutDirection d;

  __declspec(property(get = get_line)) int32_t line;

  __declspec(property(get = get_layer)) int32_t layer;

  __declspec(property(get = get_angleOffset)) int32_t angleOffset;

  __declspec(property(get = get_color))::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType color;

  __declspec(property(get = get_cutDirection))::GlobalNamespace::NoteCutDirection cutDirection;

  constexpr int32_t& __get_x();

  constexpr int32_t const& __get_x() const;

  constexpr void __set_x(int32_t value);

  constexpr int32_t& __get_y();

  constexpr int32_t const& __get_y() const;

  constexpr void __set_y(int32_t value);

  constexpr int32_t& __get_a();

  constexpr int32_t const& __get_a() const;

  constexpr void __set_a(int32_t value);

  constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType& __get_c();

  constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType const& __get_c() const;

  constexpr void __set_c(::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType value);

  constexpr ::GlobalNamespace::NoteCutDirection& __get_d();

  constexpr ::GlobalNamespace::NoteCutDirection const& __get_d() const;

  constexpr void __set_d(::GlobalNamespace::NoteCutDirection value);

  /// @brief Method get_line addr 0xda2800 size 0x8 virtual false final false
  inline int32_t get_line();

  /// @brief Method get_layer addr 0xda2808 size 0x8 virtual false final false
  inline int32_t get_layer();

  /// @brief Method get_angleOffset addr 0xda2810 size 0x8 virtual false final false
  inline int32_t get_angleOffset();

  /// @brief Method get_color addr 0xda2818 size 0x8 virtual false final false
  inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType get_color();

  /// @brief Method get_cutDirection addr 0xda2820 size 0x8 virtual false final false
  inline ::GlobalNamespace::NoteCutDirection get_cutDirection();

  static inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData* New_ctor(float_t beat, int32_t line, int32_t layer, ::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType color,
                                                                                      ::GlobalNamespace::NoteCutDirection cutDirection, int32_t angleOffset);

  /// @brief Method .ctor addr 0xda173c size 0x60 virtual false final false
  inline void _ctor(float_t beat, int32_t line, int32_t layer, ::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType color, ::GlobalNamespace::NoteCutDirection cutDirection,
                    int32_t angleOffset);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapSaveData__ColorNoteData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapSaveData__ColorNoteData(__BeatmapSaveData__ColorNoteData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapSaveData__ColorNoteData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapSaveData__ColorNoteData(__BeatmapSaveData__ColorNoteData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapSaveData__ColorNoteData();

public:
  /// @brief Field x, offset: 0x14, size: 0x4, def value: None
  int32_t ___x;

  /// @brief Field y, offset: 0x18, size: 0x4, def value: None
  int32_t ___y;

  /// @brief Field a, offset: 0x1c, size: 0x4, def value: None
  int32_t ___a;

  /// @brief Field c, offset: 0x20, size: 0x4, def value: None
  ::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType ___c;

  /// @brief Field d, offset: 0x24, size: 0x4, def value: None
  ::GlobalNamespace::NoteCutDirection ___d;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData, 0x28>, "Size mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData, ___x) == 0x14, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData, ___y) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData, ___a) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData, ___c) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData, ___d) == 0x24, "Offset mismatch!");

} // namespace BeatmapSaveDataVersion3
// Type: ::BombNoteData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14994))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15026))
// CS Name: ::BeatmapSaveData::BombNoteData*
class CORDL_TYPE __BeatmapSaveData__BombNoteData : public ::BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem {
public:
  // Declarations
  /// @brief Field x, offset 0x14, size 0x4
  __declspec(property(get = __get_x, put = __set_x)) int32_t x;

  /// @brief Field y, offset 0x18, size 0x4
  __declspec(property(get = __get_y, put = __set_y)) int32_t y;

  __declspec(property(get = get_line)) int32_t line;

  __declspec(property(get = get_layer)) int32_t layer;

  constexpr int32_t& __get_x();

  constexpr int32_t const& __get_x() const;

  constexpr void __set_x(int32_t value);

  constexpr int32_t& __get_y();

  constexpr int32_t const& __get_y() const;

  constexpr void __set_y(int32_t value);

  /// @brief Method get_line addr 0xda2828 size 0x8 virtual false final false
  inline int32_t get_line();

  /// @brief Method get_layer addr 0xda2830 size 0x8 virtual false final false
  inline int32_t get_layer();

  static inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData* New_ctor(float_t beat, int32_t line, int32_t layer);

  /// @brief Method .ctor addr 0xda179c size 0x3c virtual false final false
  inline void _ctor(float_t beat, int32_t line, int32_t layer);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapSaveData__BombNoteData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapSaveData__BombNoteData(__BeatmapSaveData__BombNoteData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapSaveData__BombNoteData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapSaveData__BombNoteData(__BeatmapSaveData__BombNoteData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapSaveData__BombNoteData();

public:
  /// @brief Field x, offset: 0x14, size: 0x4, def value: None
  int32_t ___x;

  /// @brief Field y, offset: 0x18, size: 0x4, def value: None
  int32_t ___y;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData, 0x20>, "Size mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData, ___x) == 0x14, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData, ___y) == 0x18, "Offset mismatch!");

} // namespace BeatmapSaveDataVersion3
// Type: ::WaypointData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14975)), TypeDefinitionIndex(TypeDefinitionIndex(14994))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15027))
// CS Name: ::BeatmapSaveData::WaypointData*
class CORDL_TYPE __BeatmapSaveData__WaypointData : public ::BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem {
public:
  // Declarations
  /// @brief Field x, offset 0x14, size 0x4
  __declspec(property(get = __get_x, put = __set_x)) int32_t x;

  /// @brief Field y, offset 0x18, size 0x4
  __declspec(property(get = __get_y, put = __set_y)) int32_t y;

  /// @brief Field d, offset 0x1c, size 0x4
  __declspec(property(get = __get_d, put = __set_d))::GlobalNamespace::OffsetDirection d;

  __declspec(property(get = get_line)) int32_t line;

  __declspec(property(get = get_layer)) int32_t layer;

  __declspec(property(get = get_offsetDirection))::GlobalNamespace::OffsetDirection offsetDirection;

  constexpr int32_t& __get_x();

  constexpr int32_t const& __get_x() const;

  constexpr void __set_x(int32_t value);

  constexpr int32_t& __get_y();

  constexpr int32_t const& __get_y() const;

  constexpr void __set_y(int32_t value);

  constexpr ::GlobalNamespace::OffsetDirection& __get_d();

  constexpr ::GlobalNamespace::OffsetDirection const& __get_d() const;

  constexpr void __set_d(::GlobalNamespace::OffsetDirection value);

  /// @brief Method get_line addr 0xda2838 size 0x8 virtual false final false
  inline int32_t get_line();

  /// @brief Method get_layer addr 0xda2840 size 0x8 virtual false final false
  inline int32_t get_layer();

  /// @brief Method get_offsetDirection addr 0xda2848 size 0x8 virtual false final false
  inline ::GlobalNamespace::OffsetDirection get_offsetDirection();

  static inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData* New_ctor(float_t beat, int32_t line, int32_t layer, ::GlobalNamespace::OffsetDirection offsetDirection);

  /// @brief Method .ctor addr 0xda18f4 size 0x4c virtual false final false
  inline void _ctor(float_t beat, int32_t line, int32_t layer, ::GlobalNamespace::OffsetDirection offsetDirection);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapSaveData__WaypointData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapSaveData__WaypointData(__BeatmapSaveData__WaypointData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapSaveData__WaypointData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapSaveData__WaypointData(__BeatmapSaveData__WaypointData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapSaveData__WaypointData();

public:
  /// @brief Field x, offset: 0x14, size: 0x4, def value: None
  int32_t ___x;

  /// @brief Field y, offset: 0x18, size: 0x4, def value: None
  int32_t ___y;

  /// @brief Field d, offset: 0x1c, size: 0x4, def value: None
  ::GlobalNamespace::OffsetDirection ___d;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData, 0x20>, "Size mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData, ___x) == 0x14, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData, ___y) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData, ___d) == 0x1c, "Offset mismatch!");

} // namespace BeatmapSaveDataVersion3
// Type: ::SliderType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion3 {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15028))
// CS Name: ::BeatmapSaveData::SliderType
struct CORDL_TYPE __BeatmapSaveData__SliderType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____BeatmapSaveData__SliderType_Unwrapped
  enum struct ____BeatmapSaveData__SliderType_Unwrapped : int32_t {
    __E_Normal = static_cast<int32_t>(0x0),
    __E_Burst = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____BeatmapSaveData__SliderType_Unwrapped() const noexcept {
    return static_cast<____BeatmapSaveData__SliderType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __BeatmapSaveData__SliderType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapSaveData__SliderType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Normal value: static_cast<int32_t>(0x0)
  static ::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderType const Normal;

  /// @brief Field Burst value: static_cast<int32_t>(0x1)
  static ::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderType const Burst;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderType, 0x4>, "Size mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderType, value__) == 0x0, "Offset mismatch!");

} // namespace BeatmapSaveDataVersion3
// Type: ::BaseSliderData
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14994)), TypeDefinitionIndex(TypeDefinitionIndex(15024)), TypeDefinitionIndex(TypeDefinitionIndex(14968))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15029))
// CS Name: ::BeatmapSaveData::BaseSliderData*
class CORDL_TYPE __BeatmapSaveData__BaseSliderData : public ::BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem {
public:
  // Declarations
  /// @brief Field c, offset 0x14, size 0x4
  __declspec(property(get = __get_c, put = __set_c))::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType c;

  /// @brief Field x, offset 0x18, size 0x4
  __declspec(property(get = __get_x, put = __set_x)) int32_t x;

  /// @brief Field y, offset 0x1c, size 0x4
  __declspec(property(get = __get_y, put = __set_y)) int32_t y;

  /// @brief Field d, offset 0x20, size 0x4
  __declspec(property(get = __get_d, put = __set_d))::GlobalNamespace::NoteCutDirection d;

  /// @brief Field tb, offset 0x24, size 0x4
  __declspec(property(get = __get_tb, put = __set_tb)) float_t tb;

  /// @brief Field tx, offset 0x28, size 0x4
  __declspec(property(get = __get_tx, put = __set_tx)) int32_t tx;

  /// @brief Field ty, offset 0x2c, size 0x4
  __declspec(property(get = __get_ty, put = __set_ty)) int32_t ty;

  __declspec(property(get = get_colorType))::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType colorType;

  __declspec(property(get = get_headLine)) int32_t headLine;

  __declspec(property(get = get_headLayer)) int32_t headLayer;

  __declspec(property(get = get_headCutDirection))::GlobalNamespace::NoteCutDirection headCutDirection;

  __declspec(property(get = get_tailBeat)) float_t tailBeat;

  __declspec(property(get = get_tailLine)) int32_t tailLine;

  __declspec(property(get = get_tailLayer)) int32_t tailLayer;

  constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType& __get_c();

  constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType const& __get_c() const;

  constexpr void __set_c(::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType value);

  constexpr int32_t& __get_x();

  constexpr int32_t const& __get_x() const;

  constexpr void __set_x(int32_t value);

  constexpr int32_t& __get_y();

  constexpr int32_t const& __get_y() const;

  constexpr void __set_y(int32_t value);

  constexpr ::GlobalNamespace::NoteCutDirection& __get_d();

  constexpr ::GlobalNamespace::NoteCutDirection const& __get_d() const;

  constexpr void __set_d(::GlobalNamespace::NoteCutDirection value);

  constexpr float_t& __get_tb();

  constexpr float_t const& __get_tb() const;

  constexpr void __set_tb(float_t value);

  constexpr int32_t& __get_tx();

  constexpr int32_t const& __get_tx() const;

  constexpr void __set_tx(int32_t value);

  constexpr int32_t& __get_ty();

  constexpr int32_t const& __get_ty() const;

  constexpr void __set_ty(int32_t value);

  /// @brief Method get_colorType addr 0xda2850 size 0x8 virtual false final false
  inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType get_colorType();

  /// @brief Method get_headLine addr 0xda2858 size 0x8 virtual false final false
  inline int32_t get_headLine();

  /// @brief Method get_headLayer addr 0xda2860 size 0x8 virtual false final false
  inline int32_t get_headLayer();

  /// @brief Method get_headCutDirection addr 0xda2868 size 0x8 virtual false final false
  inline ::GlobalNamespace::NoteCutDirection get_headCutDirection();

  /// @brief Method get_tailBeat addr 0xda2870 size 0x8 virtual false final false
  inline float_t get_tailBeat();

  /// @brief Method get_tailLine addr 0xda2878 size 0x8 virtual false final false
  inline int32_t get_tailLine();

  /// @brief Method get_tailLayer addr 0xda2880 size 0x8 virtual false final false
  inline int32_t get_tailLayer();

  static inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData* New_ctor(::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType colorType, float_t headBeat, int32_t headLine,
                                                                                       int32_t headLayer, ::GlobalNamespace::NoteCutDirection headCutDirection, float_t tailBeat, int32_t tailLine,
                                                                                       int32_t tailLayer);

  /// @brief Method .ctor addr 0xda2888 size 0x6c virtual false final false
  inline void _ctor(::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType colorType, float_t headBeat, int32_t headLine, int32_t headLayer, ::GlobalNamespace::NoteCutDirection headCutDirection,
                    float_t tailBeat, int32_t tailLine, int32_t tailLayer);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapSaveData__BaseSliderData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapSaveData__BaseSliderData(__BeatmapSaveData__BaseSliderData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapSaveData__BaseSliderData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapSaveData__BaseSliderData(__BeatmapSaveData__BaseSliderData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapSaveData__BaseSliderData();

public:
  /// @brief Field c, offset: 0x14, size: 0x4, def value: None
  ::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType ___c;

  /// @brief Field x, offset: 0x18, size: 0x4, def value: None
  int32_t ___x;

  /// @brief Field y, offset: 0x1c, size: 0x4, def value: None
  int32_t ___y;

  /// @brief Field d, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::NoteCutDirection ___d;

  /// @brief Field tb, offset: 0x24, size: 0x4, def value: None
  float_t ___tb;

  /// @brief Field tx, offset: 0x28, size: 0x4, def value: None
  int32_t ___tx;

  /// @brief Field ty, offset: 0x2c, size: 0x4, def value: None
  int32_t ___ty;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData, 0x30>, "Size mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData, ___c) == 0x14, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData, ___x) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData, ___y) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData, ___d) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData, ___tb) == 0x24, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData, ___tx) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData, ___ty) == 0x2c, "Offset mismatch!");

} // namespace BeatmapSaveDataVersion3
// Type: ::SliderData
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15029)), TypeDefinitionIndex(TypeDefinitionIndex(14968)), TypeDefinitionIndex(TypeDefinitionIndex(14979))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15030))
// CS Name: ::BeatmapSaveData::SliderData*
class CORDL_TYPE __BeatmapSaveData__SliderData : public ::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData {
public:
  // Declarations
  /// @brief Field mu, offset 0x30, size 0x4
  __declspec(property(get = __get_mu, put = __set_mu)) float_t mu;

  /// @brief Field tmu, offset 0x34, size 0x4
  __declspec(property(get = __get_tmu, put = __set_tmu)) float_t tmu;

  /// @brief Field tc, offset 0x38, size 0x4
  __declspec(property(get = __get_tc, put = __set_tc))::GlobalNamespace::NoteCutDirection tc;

  /// @brief Field m, offset 0x3c, size 0x4
  __declspec(property(get = __get_m, put = __set_m))::GlobalNamespace::SliderMidAnchorMode m;

  __declspec(property(get = get_headControlPointLengthMultiplier)) float_t headControlPointLengthMultiplier;

  __declspec(property(get = get_tailControlPointLengthMultiplier)) float_t tailControlPointLengthMultiplier;

  __declspec(property(get = get_tailCutDirection))::GlobalNamespace::NoteCutDirection tailCutDirection;

  __declspec(property(get = get_sliderMidAnchorMode))::GlobalNamespace::SliderMidAnchorMode sliderMidAnchorMode;

  constexpr float_t& __get_mu();

  constexpr float_t const& __get_mu() const;

  constexpr void __set_mu(float_t value);

  constexpr float_t& __get_tmu();

  constexpr float_t const& __get_tmu() const;

  constexpr void __set_tmu(float_t value);

  constexpr ::GlobalNamespace::NoteCutDirection& __get_tc();

  constexpr ::GlobalNamespace::NoteCutDirection const& __get_tc() const;

  constexpr void __set_tc(::GlobalNamespace::NoteCutDirection value);

  constexpr ::GlobalNamespace::SliderMidAnchorMode& __get_m();

  constexpr ::GlobalNamespace::SliderMidAnchorMode const& __get_m() const;

  constexpr void __set_m(::GlobalNamespace::SliderMidAnchorMode value);

  /// @brief Method get_headControlPointLengthMultiplier addr 0xda28f4 size 0x8 virtual false final false
  inline float_t get_headControlPointLengthMultiplier();

  /// @brief Method get_tailControlPointLengthMultiplier addr 0xda28fc size 0x8 virtual false final false
  inline float_t get_tailControlPointLengthMultiplier();

  /// @brief Method get_tailCutDirection addr 0xda2904 size 0x8 virtual false final false
  inline ::GlobalNamespace::NoteCutDirection get_tailCutDirection();

  /// @brief Method get_sliderMidAnchorMode addr 0xda290c size 0x8 virtual false final false
  inline ::GlobalNamespace::SliderMidAnchorMode get_sliderMidAnchorMode();

  static inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData* New_ctor(::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType colorType, float_t headBeat, int32_t headLine,
                                                                                   int32_t headLayer, float_t headControlPointLengthMultiplier, ::GlobalNamespace::NoteCutDirection headCutDirection,
                                                                                   float_t tailBeat, int32_t tailLine, int32_t tailLayer, float_t tailControlPointLengthMultiplier,
                                                                                   ::GlobalNamespace::NoteCutDirection tailCutDirection, ::GlobalNamespace::SliderMidAnchorMode sliderMidAnchorMode);

  /// @brief Method .ctor addr 0xda1860 size 0x94 virtual false final false
  inline void _ctor(::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType colorType, float_t headBeat, int32_t headLine, int32_t headLayer, float_t headControlPointLengthMultiplier,
                    ::GlobalNamespace::NoteCutDirection headCutDirection, float_t tailBeat, int32_t tailLine, int32_t tailLayer, float_t tailControlPointLengthMultiplier,
                    ::GlobalNamespace::NoteCutDirection tailCutDirection, ::GlobalNamespace::SliderMidAnchorMode sliderMidAnchorMode);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapSaveData__SliderData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapSaveData__SliderData(__BeatmapSaveData__SliderData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapSaveData__SliderData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapSaveData__SliderData(__BeatmapSaveData__SliderData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapSaveData__SliderData();

public:
  /// @brief Field mu, offset: 0x30, size: 0x4, def value: None
  float_t ___mu;

  /// @brief Field tmu, offset: 0x34, size: 0x4, def value: None
  float_t ___tmu;

  /// @brief Field tc, offset: 0x38, size: 0x4, def value: None
  ::GlobalNamespace::NoteCutDirection ___tc;

  /// @brief Field m, offset: 0x3c, size: 0x4, def value: None
  ::GlobalNamespace::SliderMidAnchorMode ___m;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData, 0x40>, "Size mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData, ___mu) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData, ___tmu) == 0x34, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData, ___tc) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData, ___m) == 0x3c, "Offset mismatch!");

} // namespace BeatmapSaveDataVersion3
// Type: ::BurstSliderData
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15029))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15031))
// CS Name: ::BeatmapSaveData::BurstSliderData*
class CORDL_TYPE __BeatmapSaveData__BurstSliderData : public ::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData {
public:
  // Declarations
  /// @brief Field sc, offset 0x30, size 0x4
  __declspec(property(get = __get_sc, put = __set_sc)) int32_t sc;

  /// @brief Field s, offset 0x34, size 0x4
  __declspec(property(get = __get_s, put = __set_s)) float_t s;

  __declspec(property(get = get_sliceCount)) int32_t sliceCount;

  __declspec(property(get = get_squishAmount)) float_t squishAmount;

  constexpr int32_t& __get_sc();

  constexpr int32_t const& __get_sc() const;

  constexpr void __set_sc(int32_t value);

  constexpr float_t& __get_s();

  constexpr float_t const& __get_s() const;

  constexpr void __set_s(float_t value);

  /// @brief Method get_sliceCount addr 0xda2914 size 0x8 virtual false final false
  inline int32_t get_sliceCount();

  /// @brief Method get_squishAmount addr 0xda291c size 0x8 virtual false final false
  inline float_t get_squishAmount();

  static inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData* New_ctor(::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType colorType, float_t headBeat, int32_t headLine,
                                                                                        int32_t headLayer, ::GlobalNamespace::NoteCutDirection headCutDirection, float_t tailBeat, int32_t tailLine,
                                                                                        int32_t tailLayer, int32_t sliceCount, float_t squishAmount);

  /// @brief Method .ctor addr 0xda2924 size 0x8c virtual false final false
  inline void _ctor(::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType colorType, float_t headBeat, int32_t headLine, int32_t headLayer, ::GlobalNamespace::NoteCutDirection headCutDirection,
                    float_t tailBeat, int32_t tailLine, int32_t tailLayer, int32_t sliceCount, float_t squishAmount);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapSaveData__BurstSliderData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapSaveData__BurstSliderData(__BeatmapSaveData__BurstSliderData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapSaveData__BurstSliderData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapSaveData__BurstSliderData(__BeatmapSaveData__BurstSliderData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapSaveData__BurstSliderData();

public:
  /// @brief Field sc, offset: 0x30, size: 0x4, def value: None
  int32_t ___sc;

  /// @brief Field s, offset: 0x34, size: 0x4, def value: None
  float_t ___s;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData, 0x38>, "Size mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData, ___sc) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData, ___s) == 0x34, "Offset mismatch!");

} // namespace BeatmapSaveDataVersion3
// Type: ::ObstacleData
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14994))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15032))
// CS Name: ::BeatmapSaveData::ObstacleData*
class CORDL_TYPE __BeatmapSaveData__ObstacleData : public ::BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem {
public:
  // Declarations
  /// @brief Field x, offset 0x14, size 0x4
  __declspec(property(get = __get_x, put = __set_x)) int32_t x;

  /// @brief Field y, offset 0x18, size 0x4
  __declspec(property(get = __get_y, put = __set_y)) int32_t y;

  /// @brief Field d, offset 0x1c, size 0x4
  __declspec(property(get = __get_d, put = __set_d)) float_t d;

  /// @brief Field w, offset 0x20, size 0x4
  __declspec(property(get = __get_w, put = __set_w)) int32_t w;

  /// @brief Field h, offset 0x24, size 0x4
  __declspec(property(get = __get_h, put = __set_h)) int32_t h;

  __declspec(property(get = get_line)) int32_t line;

  __declspec(property(get = get_layer)) int32_t layer;

  __declspec(property(get = get_duration)) float_t duration;

  __declspec(property(get = get_width)) int32_t width;

  __declspec(property(get = get_height)) int32_t height;

  constexpr int32_t& __get_x();

  constexpr int32_t const& __get_x() const;

  constexpr void __set_x(int32_t value);

  constexpr int32_t& __get_y();

  constexpr int32_t const& __get_y() const;

  constexpr void __set_y(int32_t value);

  constexpr float_t& __get_d();

  constexpr float_t const& __get_d() const;

  constexpr void __set_d(float_t value);

  constexpr int32_t& __get_w();

  constexpr int32_t const& __get_w() const;

  constexpr void __set_w(int32_t value);

  constexpr int32_t& __get_h();

  constexpr int32_t const& __get_h() const;

  constexpr void __set_h(int32_t value);

  /// @brief Method get_line addr 0xda29b0 size 0x8 virtual false final false
  inline int32_t get_line();

  /// @brief Method get_layer addr 0xda29b8 size 0x8 virtual false final false
  inline int32_t get_layer();

  /// @brief Method get_duration addr 0xda29c0 size 0x8 virtual false final false
  inline float_t get_duration();

  /// @brief Method get_width addr 0xda29c8 size 0x8 virtual false final false
  inline int32_t get_width();

  /// @brief Method get_height addr 0xda29d0 size 0x8 virtual false final false
  inline int32_t get_height();

  static inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData* New_ctor(float_t beat, int32_t line, int32_t layer, float_t duration, int32_t width, int32_t height);

  /// @brief Method .ctor addr 0xda17fc size 0x58 virtual false final false
  inline void _ctor(float_t beat, int32_t line, int32_t layer, float_t duration, int32_t width, int32_t height);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapSaveData__ObstacleData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapSaveData__ObstacleData(__BeatmapSaveData__ObstacleData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapSaveData__ObstacleData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapSaveData__ObstacleData(__BeatmapSaveData__ObstacleData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapSaveData__ObstacleData();

public:
  /// @brief Field x, offset: 0x14, size: 0x4, def value: None
  int32_t ___x;

  /// @brief Field y, offset: 0x18, size: 0x4, def value: None
  int32_t ___y;

  /// @brief Field d, offset: 0x1c, size: 0x4, def value: None
  float_t ___d;

  /// @brief Field w, offset: 0x20, size: 0x4, def value: None
  int32_t ___w;

  /// @brief Field h, offset: 0x24, size: 0x4, def value: None
  int32_t ___h;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData, 0x28>, "Size mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData, ___x) == 0x14, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData, ___y) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData, ___d) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData, ___w) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData, ___h) == 0x24, "Offset mismatch!");

} // namespace BeatmapSaveDataVersion3
// Type: BeatmapSaveDataVersion3::BeatmapSaveData
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 137, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15033))
// CS Name: ::BeatmapSaveDataVersion3::BeatmapSaveData*
class CORDL_TYPE BeatmapSaveData : public ::System::Object {
public:
  // Declarations
  using ObstacleData = ::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData;

  using BurstSliderData = ::BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData;

  using SliderData = ::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData;

  using BaseSliderData = ::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData;

  using SliderType = ::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderType;

  using WaypointData = ::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData;

  using BombNoteData = ::BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData;

  using ColorNoteData = ::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData;

  using NoteColorType = ::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType;

  using LightTranslationEventBoxGroup = ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup;

  using LightRotationEventBoxGroup = ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup;

  using LightColorEventBoxGroup = ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup;

  template <typename T> using EventBoxGroup_1 = ::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup_1<T>;

  using EventBoxGroup = ::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup;

  using LightTranslationBaseData = ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData;

  using LightTranslationEventBox = ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox;

  using LightRotationBaseData = ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData;

  using LightRotationEventBox = ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox;

  using LightColorBaseData = ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData;

  using LightColorEventBox = ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox;

  using IndexFilter = ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter;

  using IndexFilterLimitAlsoAffectsType = ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterLimitAlsoAffectsType;

  using IndexFilterRandomType = ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterRandomType;

  using EventBox = ::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox;

  using EaseType = ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType;

  using Axis = ::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis;

  using TransitionType = ::BeatmapSaveDataVersion3::__BeatmapSaveData__TransitionType;

  using EnvironmentColorType = ::BeatmapSaveDataVersion3::__BeatmapSaveData__EnvironmentColorType;

  using BasicEventTypesWithKeywords = ::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventTypesWithKeywords;

  using RotationEventData = ::BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData;

  using ExecutionTime = ::BeatmapSaveDataVersion3::__BeatmapSaveData__ExecutionTime;

  using BpmChangeEventData = ::BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData;

  using ColorBoostEventData = ::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData;

  using BasicEventData = ::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData;

  using BeatmapSaveDataItem = ::BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem;

  /// @brief Field version, offset 0x10, size 0x8
  __declspec(property(get = __get_version, put = __set_version))::StringW version;

  /// @brief Field bpmEvents, offset 0x18, size 0x8
  __declspec(property(get = __get_bpmEvents, put = __set_bpmEvents))::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData*>* bpmEvents;

  /// @brief Field rotationEvents, offset 0x20, size 0x8
  __declspec(property(get = __get_rotationEvents, put = __set_rotationEvents))::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData*>* rotationEvents;

  /// @brief Field colorNotes, offset 0x28, size 0x8
  __declspec(property(get = __get_colorNotes, put = __set_colorNotes))::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData*>* colorNotes;

  /// @brief Field bombNotes, offset 0x30, size 0x8
  __declspec(property(get = __get_bombNotes, put = __set_bombNotes))::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData*>* bombNotes;

  /// @brief Field obstacles, offset 0x38, size 0x8
  __declspec(property(get = __get_obstacles, put = __set_obstacles))::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData*>* obstacles;

  /// @brief Field sliders, offset 0x40, size 0x8
  __declspec(property(get = __get_sliders, put = __set_sliders))::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData*>* sliders;

  /// @brief Field burstSliders, offset 0x48, size 0x8
  __declspec(property(get = __get_burstSliders, put = __set_burstSliders))::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData*>* burstSliders;

  /// @brief Field waypoints, offset 0x50, size 0x8
  __declspec(property(get = __get_waypoints, put = __set_waypoints))::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData*>* waypoints;

  /// @brief Field basicBeatmapEvents, offset 0x58, size 0x8
  __declspec(property(get = __get_basicBeatmapEvents,
                      put = __set_basicBeatmapEvents))::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData*>* basicBeatmapEvents;

  /// @brief Field colorBoostBeatmapEvents, offset 0x60, size 0x8
  __declspec(property(get = __get_colorBoostBeatmapEvents,
                      put = __set_colorBoostBeatmapEvents))::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData*>* colorBoostBeatmapEvents;

  /// @brief Field lightColorEventBoxGroups, offset 0x68, size 0x8
  __declspec(property(get = __get_lightColorEventBoxGroups,
                      put = __set_lightColorEventBoxGroups))::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup*>* lightColorEventBoxGroups;

  /// @brief Field lightRotationEventBoxGroups, offset 0x70, size 0x8
  __declspec(
      property(get = __get_lightRotationEventBoxGroups,
               put = __set_lightRotationEventBoxGroups))::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup*>* lightRotationEventBoxGroups;

  /// @brief Field lightTranslationEventBoxGroups, offset 0x78, size 0x8
  __declspec(property(
      get = __get_lightTranslationEventBoxGroups,
      put = __set_lightTranslationEventBoxGroups))::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup*>* lightTranslationEventBoxGroups;

  /// @brief Field basicEventTypesWithKeywords, offset 0x80, size 0x8
  __declspec(property(get = __get_basicEventTypesWithKeywords,
                      put = __set_basicEventTypesWithKeywords))::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventTypesWithKeywords* basicEventTypesWithKeywords;

  /// @brief Field useNormalEventsAsCompatibleEvents, offset 0x88, size 0x1
  __declspec(property(get = __get_useNormalEventsAsCompatibleEvents, put = __set_useNormalEventsAsCompatibleEvents)) bool useNormalEventsAsCompatibleEvents;

  /// @brief Field version2_6_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version2_6_0, put = setStaticF_version2_6_0))::System::Version* version2_6_0;

  /// @brief Field _spawnRotations, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__spawnRotations, put = setStaticF__spawnRotations))::ArrayW<float_t, ::Array<float_t>*> _spawnRotations;

  constexpr ::StringW& __get_version();

  constexpr ::StringW const& __get_version() const;

  constexpr void __set_version(::StringW value);

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData*>*& __get_bpmEvents();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData*>*> const& __get_bpmEvents() const;

  constexpr void __set_bpmEvents(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData*>* value);

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData*>*& __get_rotationEvents();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData*>*> const& __get_rotationEvents() const;

  constexpr void __set_rotationEvents(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData*>* value);

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData*>*& __get_colorNotes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData*>*> const& __get_colorNotes() const;

  constexpr void __set_colorNotes(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData*>* value);

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData*>*& __get_bombNotes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData*>*> const& __get_bombNotes() const;

  constexpr void __set_bombNotes(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData*>* value);

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData*>*& __get_obstacles();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData*>*> const& __get_obstacles() const;

  constexpr void __set_obstacles(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData*>* value);

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData*>*& __get_sliders();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData*>*> const& __get_sliders() const;

  constexpr void __set_sliders(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData*>* value);

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData*>*& __get_burstSliders();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData*>*> const& __get_burstSliders() const;

  constexpr void __set_burstSliders(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData*>* value);

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData*>*& __get_waypoints();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData*>*> const& __get_waypoints() const;

  constexpr void __set_waypoints(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData*>* value);

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData*>*& __get_basicBeatmapEvents();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData*>*> const& __get_basicBeatmapEvents() const;

  constexpr void __set_basicBeatmapEvents(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData*>* value);

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData*>*& __get_colorBoostBeatmapEvents();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData*>*> const&
  __get_colorBoostBeatmapEvents() const;

  constexpr void __set_colorBoostBeatmapEvents(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData*>* value);

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup*>*& __get_lightColorEventBoxGroups();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup*>*> const&
  __get_lightColorEventBoxGroups() const;

  constexpr void __set_lightColorEventBoxGroups(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup*>* value);

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup*>*& __get_lightRotationEventBoxGroups();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup*>*> const&
  __get_lightRotationEventBoxGroups() const;

  constexpr void __set_lightRotationEventBoxGroups(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup*>* value);

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup*>*& __get_lightTranslationEventBoxGroups();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup*>*> const&
  __get_lightTranslationEventBoxGroups() const;

  constexpr void __set_lightTranslationEventBoxGroups(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup*>* value);

  constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventTypesWithKeywords*& __get_basicEventTypesWithKeywords();

  constexpr ::cordl_internals::to_const_pointer<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventTypesWithKeywords*> const& __get_basicEventTypesWithKeywords() const;

  constexpr void __set_basicEventTypesWithKeywords(::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventTypesWithKeywords* value);

  constexpr bool& __get_useNormalEventsAsCompatibleEvents();

  constexpr bool const& __get_useNormalEventsAsCompatibleEvents() const;

  constexpr void __set_useNormalEventsAsCompatibleEvents(bool value);

  static inline void setStaticF_version2_6_0(::System::Version* value);

  static inline ::System::Version* getStaticF_version2_6_0();

  static inline void setStaticF__spawnRotations(::ArrayW<float_t, ::Array<float_t>*> value);

  static inline ::ArrayW<float_t, ::Array<float_t>*> getStaticF__spawnRotations();

  static inline ::BeatmapSaveDataVersion3::BeatmapSaveData*
  New_ctor(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData*>* bpmEvents,
           ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData*>* rotationEvents,
           ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData*>* colorNotes,
           ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData*>* bombNotes,
           ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData*>* obstacles,
           ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData*>* sliders,
           ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData*>* burstSliders,
           ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData*>* waypoints,
           ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData*>* basicBeatmapEvents,
           ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData*>* colorBoostBeatmapEvents,
           ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup*>* lightColorEventBoxGroups,
           ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup*>* lightRotationEventBoxGroups,
           ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup*>* lightTranslationEventBoxGroups,
           ::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventTypesWithKeywords* basicEventTypesWithKeywords, bool useNormalEventsAsCompatibleEvents);

  /// @brief Method .ctor addr 0xd9f964 size 0xec virtual false final false
  inline void _ctor(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData*>* bpmEvents,
                    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData*>* rotationEvents,
                    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData*>* colorNotes,
                    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData*>* bombNotes,
                    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData*>* obstacles,
                    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData*>* sliders,
                    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData*>* burstSliders,
                    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData*>* waypoints,
                    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData*>* basicBeatmapEvents,
                    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData*>* colorBoostBeatmapEvents,
                    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup*>* lightColorEventBoxGroups,
                    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup*>* lightRotationEventBoxGroups,
                    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup*>* lightTranslationEventBoxGroups,
                    ::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventTypesWithKeywords* basicEventTypesWithKeywords, bool useNormalEventsAsCompatibleEvents);

  /// @brief Method SerializeToJSONString addr 0xd9fa50 size 0x8 virtual false final false
  inline ::StringW SerializeToJSONString();

  /// @brief Method DeserializeFromJSONString addr 0xd9fa58 size 0x1b4 virtual false final false
  static inline ::BeatmapSaveDataVersion3::BeatmapSaveData* DeserializeFromJSONString(::StringW stringData);

  /// @brief Method ConvertBeatmapSaveData addr 0xd9fddc size 0x178c virtual false final false
  static inline ::BeatmapSaveDataVersion3::BeatmapSaveData* ConvertBeatmapSaveData(::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData* beatmapSaveData);

  /// @brief Method GetNoteColorType addr 0xda1730 size 0xc virtual false final false
  static inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType GetNoteColorType(::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteType noteType);

  /// @brief Method GetNoteColorType addr 0xda1854 size 0xc virtual false final false
  static inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType GetNoteColorType(::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ColorType colorType);

  /// @brief Method GetHeightForObstacleType addr 0xda17e8 size 0x14 virtual false final false
  static inline int32_t GetHeightForObstacleType(::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleType obstacleType);

  /// @brief Method GetLayerForObstacleType addr 0xda17d8 size 0x10 virtual false final false
  static inline int32_t GetLayerForObstacleType(::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleType obstacleType);

  /// @brief Method GetSliderType addr 0xda1b34 size 0xc virtual false final false
  static inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderType GetSliderType(::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderType sliderType);

  /// @brief Method SpawnRotationForEventValue addr 0xda196c size 0xb8 virtual false final false
  static inline float_t SpawnRotationForEventValue(int32_t index);

  /// @brief Method BeatmapSaveDataAreSorted addr 0xda1568 size 0x1c8 virtual false final false
  static inline bool BeatmapSaveDataAreSorted(::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem*>* beatmapSaveData);

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapSaveData(BeatmapSaveData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapSaveData(BeatmapSaveData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapSaveData();

public:
  /// @brief Field version, offset: 0x10, size: 0x8, def value: None
  ::StringW ___version;

  /// @brief Field bpmEvents, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData*>* ___bpmEvents;

  /// @brief Field rotationEvents, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData*>* ___rotationEvents;

  /// @brief Field colorNotes, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData*>* ___colorNotes;

  /// @brief Field bombNotes, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData*>* ___bombNotes;

  /// @brief Field obstacles, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData*>* ___obstacles;

  /// @brief Field sliders, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData*>* ___sliders;

  /// @brief Field burstSliders, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData*>* ___burstSliders;

  /// @brief Field waypoints, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData*>* ___waypoints;

  /// @brief Field basicBeatmapEvents, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData*>* ___basicBeatmapEvents;

  /// @brief Field colorBoostBeatmapEvents, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData*>* ___colorBoostBeatmapEvents;

  /// @brief Field lightColorEventBoxGroups, offset: 0x68, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup*>* ___lightColorEventBoxGroups;

  /// @brief Field lightRotationEventBoxGroups, offset: 0x70, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup*>* ___lightRotationEventBoxGroups;

  /// @brief Field lightTranslationEventBoxGroups, offset: 0x78, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup*>* ___lightTranslationEventBoxGroups;

  /// @brief Field basicEventTypesWithKeywords, offset: 0x80, size: 0x8, def value: None
  ::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventTypesWithKeywords* ___basicEventTypesWithKeywords;

  /// @brief Field useNormalEventsAsCompatibleEvents, offset: 0x88, size: 0x1, def value: None
  bool ___useNormalEventsAsCompatibleEvents;

  /// @brief Field kCurrentVersion offset 0xffffffff size 0x8
  static constexpr ::ConstString kCurrentVersion{ u"3.2.0" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion3::BeatmapSaveData, 0x90>, "Size mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::BeatmapSaveData, ___version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::BeatmapSaveData, ___bpmEvents) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::BeatmapSaveData, ___rotationEvents) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::BeatmapSaveData, ___colorNotes) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::BeatmapSaveData, ___bombNotes) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::BeatmapSaveData, ___obstacles) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::BeatmapSaveData, ___sliders) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::BeatmapSaveData, ___burstSliders) == 0x48, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::BeatmapSaveData, ___waypoints) == 0x50, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::BeatmapSaveData, ___basicBeatmapEvents) == 0x58, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::BeatmapSaveData, ___colorBoostBeatmapEvents) == 0x60, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::BeatmapSaveData, ___lightColorEventBoxGroups) == 0x68, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::BeatmapSaveData, ___lightRotationEventBoxGroups) == 0x70, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::BeatmapSaveData, ___lightTranslationEventBoxGroups) == 0x78, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::BeatmapSaveData, ___basicEventTypesWithKeywords) == 0x80, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::BeatmapSaveData, ___useNormalEventsAsCompatibleEvents) == 0x88, "Offset mismatch!");

} // namespace BeatmapSaveDataVersion3
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis, "BeatmapSaveDataVersion3", "BeatmapSaveData/Axis");
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType, "BeatmapSaveDataVersion3", "BeatmapSaveData/EaseType");
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::__BeatmapSaveData__EnvironmentColorType, "BeatmapSaveDataVersion3", "BeatmapSaveData/EnvironmentColorType");
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::__BeatmapSaveData__ExecutionTime, "BeatmapSaveDataVersion3", "BeatmapSaveData/ExecutionTime");
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterLimitAlsoAffectsType, "BeatmapSaveDataVersion3", "BeatmapSaveData/IndexFilterLimitAlsoAffectsType");
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterRandomType, "BeatmapSaveDataVersion3", "BeatmapSaveData/IndexFilterRandomType");
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType, "BeatmapSaveDataVersion3", "BeatmapSaveData/NoteColorType");
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderType, "BeatmapSaveDataVersion3", "BeatmapSaveData/SliderType");
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::__BeatmapSaveData__TransitionType, "BeatmapSaveDataVersion3", "BeatmapSaveData/TransitionType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType, "BeatmapSaveDataVersion3", "BeatmapSaveData/EventBox/DistributionParamType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapSaveData__IndexFilter__IndexFilterType, "BeatmapSaveDataVersion3", "BeatmapSaveData/IndexFilter/IndexFilterType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapSaveData__LightRotationBaseData__RotationDirection, "BeatmapSaveDataVersion3", "BeatmapSaveData/LightRotationBaseData/RotationDirection");
NEED_NO_BOX(::BeatmapSaveDataVersion3::BeatmapSaveData);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::BeatmapSaveData*, "BeatmapSaveDataVersion3", "BeatmapSaveData");
NEED_NO_BOX(::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData*, "BeatmapSaveDataVersion3", "BeatmapSaveData/BaseSliderData");
NEED_NO_BOX(::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData*, "BeatmapSaveDataVersion3", "BeatmapSaveData/BasicEventData");
NEED_NO_BOX(::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventTypesWithKeywords);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventTypesWithKeywords*, "BeatmapSaveDataVersion3", "BeatmapSaveData/BasicEventTypesWithKeywords");
NEED_NO_BOX(::BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem*, "BeatmapSaveDataVersion3", "BeatmapSaveData/BeatmapSaveDataItem");
NEED_NO_BOX(::BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData*, "BeatmapSaveDataVersion3", "BeatmapSaveData/BombNoteData");
NEED_NO_BOX(::BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData*, "BeatmapSaveDataVersion3", "BeatmapSaveData/BpmChangeEventData");
NEED_NO_BOX(::BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData*, "BeatmapSaveDataVersion3", "BeatmapSaveData/BurstSliderData");
NEED_NO_BOX(::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData*, "BeatmapSaveDataVersion3", "BeatmapSaveData/ColorBoostEventData");
NEED_NO_BOX(::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData*, "BeatmapSaveDataVersion3", "BeatmapSaveData/ColorNoteData");
NEED_NO_BOX(::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox*, "BeatmapSaveDataVersion3", "BeatmapSaveData/EventBox");
NEED_NO_BOX(::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup*, "BeatmapSaveDataVersion3", "BeatmapSaveData/EventBoxGroup");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup_1, "BeatmapSaveDataVersion3", "BeatmapSaveData/EventBoxGroup`1");
NEED_NO_BOX(::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*, "BeatmapSaveDataVersion3", "BeatmapSaveData/IndexFilter");
NEED_NO_BOX(::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData*, "BeatmapSaveDataVersion3", "BeatmapSaveData/LightColorBaseData");
NEED_NO_BOX(::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox*, "BeatmapSaveDataVersion3", "BeatmapSaveData/LightColorEventBox");
NEED_NO_BOX(::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup*, "BeatmapSaveDataVersion3", "BeatmapSaveData/LightColorEventBoxGroup");
NEED_NO_BOX(::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData*, "BeatmapSaveDataVersion3", "BeatmapSaveData/LightRotationBaseData");
NEED_NO_BOX(::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox*, "BeatmapSaveDataVersion3", "BeatmapSaveData/LightRotationEventBox");
NEED_NO_BOX(::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup*, "BeatmapSaveDataVersion3", "BeatmapSaveData/LightRotationEventBoxGroup");
NEED_NO_BOX(::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData*, "BeatmapSaveDataVersion3", "BeatmapSaveData/LightTranslationBaseData");
NEED_NO_BOX(::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox*, "BeatmapSaveDataVersion3", "BeatmapSaveData/LightTranslationEventBox");
NEED_NO_BOX(::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup*, "BeatmapSaveDataVersion3", "BeatmapSaveData/LightTranslationEventBoxGroup");
NEED_NO_BOX(::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData*, "BeatmapSaveDataVersion3", "BeatmapSaveData/ObstacleData");
NEED_NO_BOX(::BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData*, "BeatmapSaveDataVersion3", "BeatmapSaveData/RotationEventData");
NEED_NO_BOX(::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData*, "BeatmapSaveDataVersion3", "BeatmapSaveData/SliderData");
NEED_NO_BOX(::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData*, "BeatmapSaveDataVersion3", "BeatmapSaveData/WaypointData");
NEED_NO_BOX(::GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*, "BeatmapSaveDataVersion3",
                       "BeatmapSaveData/BasicEventTypesWithKeywords/BasicEventTypesForKeyword");
