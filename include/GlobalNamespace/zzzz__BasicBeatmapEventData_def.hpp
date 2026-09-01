#pragma once
// IWYU pragma private; include "GlobalNamespace\BasicBeatmapEventData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventData_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BasicBeatmapEventData)
namespace GlobalNamespace {
struct BasicBeatmapEventType;
}
namespace GlobalNamespace {
class BeatmapDataItem;
}
namespace GlobalNamespace {
class BeatmapEventData;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace GlobalNamespace {
class BasicBeatmapEventData;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BasicBeatmapEventData*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BasicBeatmapEventData*, "", "BasicBeatmapEventData");
// Dependencies BasicBeatmapEventType, BeatmapEventData
namespace GlobalNamespace {
// Is value type: false
// CS Name: BasicBeatmapEventData
class CORDL_TYPE BasicBeatmapEventData : public ::GlobalNamespace::BeatmapEventData {
public:
  // Declarations
  /// @brief Field _defaultsForType, offset 0xffffffff, size 0x8
  __declspec(property(
      get = getStaticF__defaultsForType,
      put = setStaticF__defaultsForType)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BasicBeatmapEventType, ::GlobalNamespace::BasicBeatmapEventData*>* _defaultsForType;

  /// @brief Field <sameTypeIndex>k__BackingField, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__sameTypeIndex_k__BackingField, put = __cordl_internal_set__sameTypeIndex_k__BackingField)) int32_t _sameTypeIndex_k__BackingField;

  /// @brief Field basicBeatmapEventType, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_basicBeatmapEventType, put = __cordl_internal_set_basicBeatmapEventType)) ::GlobalNamespace::BasicBeatmapEventType basicBeatmapEventType;

  /// @brief Field floatValue, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_floatValue, put = __cordl_internal_set_floatValue)) float_t floatValue;

  __declspec(property(get = get_nextSameTypeEventData)) ::GlobalNamespace::BasicBeatmapEventData* nextSameTypeEventData;

  __declspec(property(get = get_previousSameTypeEventData)) ::GlobalNamespace::BasicBeatmapEventData* previousSameTypeEventData;

  __declspec(property(get = get_sameTypeIndex, put = set_sameTypeIndex)) int32_t sameTypeIndex;

  /// @brief Field value, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value)) int32_t value;

  /// @brief Method GetCopy, addr 0x32598c8, size 0x7c, virtual true, abstract: false, final false
  inline ::GlobalNamespace::BeatmapDataItem* GetCopy();

  /// @brief Method GetDefault, addr 0x325996c, size 0x128, virtual true, abstract: false, final false
  inline ::GlobalNamespace::BeatmapEventData* GetDefault();

  static inline ::GlobalNamespace::BasicBeatmapEventData* New_ctor(float_t time, ::GlobalNamespace::BasicBeatmapEventType basicBeatmapEventType, int32_t value, float_t floatValue);

  /// @brief Method RecalculateSameTypeIndexFromPreviousEvent, addr 0x3259950, size 0x1c, virtual false, abstract: false, final false
  inline void RecalculateSameTypeIndexFromPreviousEvent(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData);

  /// @brief Method SetFirstSameTypeIndex, addr 0x3259944, size 0xc, virtual false, abstract: false, final false
  inline void SetFirstSameTypeIndex();

  /// @brief Method SubtypeIdentifier, addr 0x3259840, size 0x4, virtual false, abstract: false, final false
  static inline int32_t SubtypeIdentifier(::GlobalNamespace::BasicBeatmapEventType type);

  constexpr int32_t const& __cordl_internal_get__sameTypeIndex_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__sameTypeIndex_k__BackingField();

  constexpr ::GlobalNamespace::BasicBeatmapEventType const& __cordl_internal_get_basicBeatmapEventType() const;

  constexpr ::GlobalNamespace::BasicBeatmapEventType& __cordl_internal_get_basicBeatmapEventType();

  constexpr float_t const& __cordl_internal_get_floatValue() const;

  constexpr float_t& __cordl_internal_get_floatValue();

  constexpr int32_t const& __cordl_internal_get_value() const;

  constexpr int32_t& __cordl_internal_get_value();

  constexpr void __cordl_internal_set__sameTypeIndex_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set_basicBeatmapEventType(::GlobalNamespace::BasicBeatmapEventType value);

  constexpr void __cordl_internal_set_floatValue(float_t value);

  constexpr void __cordl_internal_set_value(int32_t value);

  /// @brief Method .ctor, addr 0x32597b0, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(float_t time, ::GlobalNamespace::BasicBeatmapEventType basicBeatmapEventType, int32_t value, float_t floatValue);

  static inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BasicBeatmapEventType, ::GlobalNamespace::BasicBeatmapEventData*>* getStaticF__defaultsForType();

  /// @brief Method get_nextSameTypeEventData, addr 0x3259724, size 0x7c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BasicBeatmapEventData* get_nextSameTypeEventData();

  /// @brief Method get_previousSameTypeEventData, addr 0x32596a8, size 0x7c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BasicBeatmapEventData* get_previousSameTypeEventData();

  /// @brief Method get_sameTypeIndex, addr 0x32597a0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_sameTypeIndex();

  static inline void setStaticF__defaultsForType(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BasicBeatmapEventType, ::GlobalNamespace::BasicBeatmapEventData*>* value);

  /// @brief Method set_sameTypeIndex, addr 0x32597a8, size 0x8, virtual false, abstract: false, final false
  inline void set_sameTypeIndex(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BasicBeatmapEventData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BasicBeatmapEventData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BasicBeatmapEventData(BasicBeatmapEventData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BasicBeatmapEventData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BasicBeatmapEventData(BasicBeatmapEventData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21234 };

  /// @brief Field <sameTypeIndex>k__BackingField, offset: 0x38, size: 0x4, def value: None
  int32_t ____sameTypeIndex_k__BackingField;

  /// @brief Field basicBeatmapEventType, offset: 0x3c, size: 0x4, def value: None
  ::GlobalNamespace::BasicBeatmapEventType ___basicBeatmapEventType;

  /// @brief Field value, offset: 0x40, size: 0x4, def value: None
  int32_t ___value;

  /// @brief Field floatValue, offset: 0x44, size: 0x4, def value: None
  float_t ___floatValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BasicBeatmapEventData, ____sameTypeIndex_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicBeatmapEventData, ___basicBeatmapEventType) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicBeatmapEventData, ___value) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicBeatmapEventData, ___floatValue) == 0x44, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BasicBeatmapEventData) == 0x48, "Size mismatch!");

} // namespace GlobalNamespace
