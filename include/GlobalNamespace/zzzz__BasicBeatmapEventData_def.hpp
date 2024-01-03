#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventData_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BasicBeatmapEventData)
namespace GlobalNamespace {
class BeatmapDataItem;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace GlobalNamespace {
class BeatmapEventData;
}
namespace GlobalNamespace {
struct BasicBeatmapEventType;
}
// Forward declare root types
namespace GlobalNamespace {
class BasicBeatmapEventData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BasicBeatmapEventData);
// Type: ::BasicBeatmapEventData
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14727)), TypeDefinitionIndex(TypeDefinitionIndex(14724))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14721))
// CS Name: ::BasicBeatmapEventData*
class CORDL_TYPE BasicBeatmapEventData : public ::GlobalNamespace::BeatmapEventData {
public:
  // Declarations
  /// @brief Field <sameTypeIndex>k__BackingField, offset 0x30, size 0x4
  __declspec(property(get = __get__sameTypeIndex_k__BackingField, put = __set__sameTypeIndex_k__BackingField)) int32_t _sameTypeIndex_k__BackingField;

  /// @brief Field basicBeatmapEventType, offset 0x34, size 0x4
  __declspec(property(get = __get_basicBeatmapEventType, put = __set_basicBeatmapEventType))::GlobalNamespace::BasicBeatmapEventType basicBeatmapEventType;

  /// @brief Field value, offset 0x38, size 0x4
  __declspec(property(get = __get_value, put = __set_value)) int32_t value;

  /// @brief Field floatValue, offset 0x3c, size 0x4
  __declspec(property(get = __get_floatValue, put = __set_floatValue)) float_t floatValue;

  /// @brief Field _defaultsForType, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF__defaultsForType,
               put = setStaticF__defaultsForType))::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BasicBeatmapEventType, ::GlobalNamespace::BasicBeatmapEventData*>* _defaultsForType;

  __declspec(property(get = get_previousSameTypeEventData))::GlobalNamespace::BasicBeatmapEventData* previousSameTypeEventData;

  __declspec(property(get = get_nextSameTypeEventData))::GlobalNamespace::BasicBeatmapEventData* nextSameTypeEventData;

  __declspec(property(get = get_sameTypeIndex, put = set_sameTypeIndex)) int32_t sameTypeIndex;

  constexpr int32_t& __get__sameTypeIndex_k__BackingField();

  constexpr int32_t const& __get__sameTypeIndex_k__BackingField() const;

  constexpr void __set__sameTypeIndex_k__BackingField(int32_t value);

  constexpr ::GlobalNamespace::BasicBeatmapEventType& __get_basicBeatmapEventType();

  constexpr ::GlobalNamespace::BasicBeatmapEventType const& __get_basicBeatmapEventType() const;

  constexpr void __set_basicBeatmapEventType(::GlobalNamespace::BasicBeatmapEventType value);

  constexpr int32_t& __get_value();

  constexpr int32_t const& __get_value() const;

  constexpr void __set_value(int32_t value);

  constexpr float_t& __get_floatValue();

  constexpr float_t const& __get_floatValue() const;

  constexpr void __set_floatValue(float_t value);

  static inline void setStaticF__defaultsForType(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BasicBeatmapEventType, ::GlobalNamespace::BasicBeatmapEventData*>* value);

  static inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BasicBeatmapEventType, ::GlobalNamespace::BasicBeatmapEventData*>* getStaticF__defaultsForType();

  /// @brief Method get_previousSameTypeEventData, addr 0xdfdafc, size 0x78, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BasicBeatmapEventData* get_previousSameTypeEventData();

  /// @brief Method get_nextSameTypeEventData, addr 0xdfdb74, size 0x78, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BasicBeatmapEventData* get_nextSameTypeEventData();

  /// @brief Method get_sameTypeIndex, addr 0xdfdbec, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_sameTypeIndex();

  /// @brief Method set_sameTypeIndex, addr 0xdfdbf4, size 0x8, virtual false, abstract: false, final false
  inline void set_sameTypeIndex(int32_t value);

  static inline ::GlobalNamespace::BasicBeatmapEventData* New_ctor(float_t time, ::GlobalNamespace::BasicBeatmapEventType basicBeatmapEventType, int32_t value, float_t floatValue);

  /// @brief Method .ctor, addr 0xdfdbfc, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(float_t time, ::GlobalNamespace::BasicBeatmapEventType basicBeatmapEventType, int32_t value, float_t floatValue);

  /// @brief Method GetCopy, addr 0xdfdcdc, size 0x88, virtual true, abstract: false, final false
  inline ::GlobalNamespace::BeatmapDataItem* GetCopy();

  /// @brief Method SubtypeIdentifier, addr 0xdfdc94, size 0x4, virtual false, abstract: false, final false
  static inline int32_t SubtypeIdentifier(::GlobalNamespace::BasicBeatmapEventType type);

  /// @brief Method SetFirstSameTypeIndex, addr 0xdfdd64, size 0xc, virtual false, abstract: false, final false
  inline void SetFirstSameTypeIndex();

  /// @brief Method RecalculateSameTypeIndexFromPreviousEvent, addr 0xdfdd70, size 0x20, virtual false, abstract: false, final false
  inline void RecalculateSameTypeIndexFromPreviousEvent(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData);

  /// @brief Method GetDefault, addr 0xdfdd90, size 0x110, virtual true, abstract: false, final false
  inline ::GlobalNamespace::BeatmapEventData* GetDefault();

  // Ctor Parameters [CppParam { name: "", ty: "BasicBeatmapEventData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BasicBeatmapEventData(BasicBeatmapEventData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BasicBeatmapEventData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BasicBeatmapEventData(BasicBeatmapEventData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BasicBeatmapEventData();

public:
  /// @brief Field <sameTypeIndex>k__BackingField, offset: 0x30, size: 0x4, def value: None
  int32_t ____sameTypeIndex_k__BackingField;

  /// @brief Field basicBeatmapEventType, offset: 0x34, size: 0x4, def value: None
  ::GlobalNamespace::BasicBeatmapEventType ___basicBeatmapEventType;

  /// @brief Field value, offset: 0x38, size: 0x4, def value: None
  int32_t ___value;

  /// @brief Field floatValue, offset: 0x3c, size: 0x4, def value: None
  float_t ___floatValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BasicBeatmapEventData, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicBeatmapEventData, ____sameTypeIndex_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicBeatmapEventData, ___basicBeatmapEventType) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicBeatmapEventData, ___value) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicBeatmapEventData, ___floatValue) == 0x3c, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BasicBeatmapEventData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BasicBeatmapEventData*, "", "BasicBeatmapEventData");
