#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapEventData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDataItem_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapEventData)
namespace GlobalNamespace {
class BeatmapDataItem;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapEventData;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BeatmapEventData*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BeatmapEventData*, "", "BeatmapEventData");
// Dependencies BeatmapDataItem
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapEventData
class CORDL_TYPE BeatmapEventData : public ::GlobalNamespace::BeatmapDataItem {
public:
  // Declarations
  /// @brief Field <nextSameTypeEventData>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__nextSameTypeEventData_k__BackingField,
                      put = __cordl_internal_set__nextSameTypeEventData_k__BackingField)) ::GlobalNamespace::BeatmapEventData* _nextSameTypeEventData_k__BackingField;

  /// @brief Field <previousSameTypeEventData>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__previousSameTypeEventData_k__BackingField,
                      put = __cordl_internal_set__previousSameTypeEventData_k__BackingField)) ::GlobalNamespace::BeatmapEventData* _previousSameTypeEventData_k__BackingField;

  /// @brief Field <sourceBoxGroupBeat>k__BackingField, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__sourceBoxGroupBeat_k__BackingField, put = __cordl_internal_set__sourceBoxGroupBeat_k__BackingField)) float_t _sourceBoxGroupBeat_k__BackingField;

  __declspec(property(get = get_isDefault)) bool isDefault;

  __declspec(property(get = get_nextSameTypeEventData, put = set_nextSameTypeEventData)) ::GlobalNamespace::BeatmapEventData* nextSameTypeEventData;

  __declspec(property(get = get_previousSameTypeEventData, put = set_previousSameTypeEventData)) ::GlobalNamespace::BeatmapEventData* previousSameTypeEventData;

  __declspec(property(get = get_sourceBoxGroupBeat, put = set_sourceBoxGroupBeat)) float_t sourceBoxGroupBeat;

  /// @brief Method CompareToWithSameTimeAndExecutionOrder, addr 0x34f9c14, size 0xc0, virtual true, abstract: false, final false
  inline int32_t CompareToWithSameTimeAndExecutionOrder(::GlobalNamespace::BeatmapDataItem* other);

  /// @brief Method GetDefault, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::GlobalNamespace::BeatmapEventData* GetDefault();

  /// @brief Method GetDefault, addr 0x34f9cfc, size 0x2c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapEventData* GetDefault(::GlobalNamespace::BeatmapEventData* nextData);

  static inline ::GlobalNamespace::BeatmapEventData* New_ctor(float_t time, int32_t executionOrder, int32_t subtypeIdentifier);

  /// @brief Method __ConnectWithNextSameTypeEventData, addr 0x34f9ce4, size 0x10, virtual false, abstract: false, final false
  inline void __ConnectWithNextSameTypeEventData(::GlobalNamespace::BeatmapEventData* newNextSameTypeEvent);

  /// @brief Method __ConnectWithPreviousSameTypeEventData, addr 0x34f9cd4, size 0x10, virtual false, abstract: false, final false
  inline void __ConnectWithPreviousSameTypeEventData(::GlobalNamespace::BeatmapEventData* newPreviousSameTypeEvent);

  /// @brief Method __ResetConnections, addr 0x34f9cf4, size 0x8, virtual false, abstract: false, final false
  inline void __ResetConnections();

  /// @brief Method __SetSourceBoxGroupBeat, addr 0x34f9c0c, size 0x8, virtual false, abstract: false, final false
  inline void __SetSourceBoxGroupBeat(float_t beat);

  constexpr ::GlobalNamespace::BeatmapEventData* const& __cordl_internal_get__nextSameTypeEventData_k__BackingField() const;

  constexpr ::GlobalNamespace::BeatmapEventData*& __cordl_internal_get__nextSameTypeEventData_k__BackingField();

  constexpr ::GlobalNamespace::BeatmapEventData* const& __cordl_internal_get__previousSameTypeEventData_k__BackingField() const;

  constexpr ::GlobalNamespace::BeatmapEventData*& __cordl_internal_get__previousSameTypeEventData_k__BackingField();

  constexpr float_t const& __cordl_internal_get__sourceBoxGroupBeat_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__sourceBoxGroupBeat_k__BackingField();

  constexpr void __cordl_internal_set__nextSameTypeEventData_k__BackingField(::GlobalNamespace::BeatmapEventData* value);

  constexpr void __cordl_internal_set__previousSameTypeEventData_k__BackingField(::GlobalNamespace::BeatmapEventData* value);

  constexpr void __cordl_internal_set__sourceBoxGroupBeat_k__BackingField(float_t value);

  /// @brief Method .ctor, addr 0x34f95e8, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(float_t time, int32_t executionOrder, int32_t subtypeIdentifier);

  /// @brief Method get_isDefault, addr 0x34f9d28, size 0x20, virtual false, abstract: false, final false
  inline bool get_isDefault();

  /// [CompilerGenerated]
  /// @brief Method get_nextSameTypeEventData, addr 0x34f9bec, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapEventData* get_nextSameTypeEventData();

  /// [CompilerGenerated]
  /// @brief Method get_previousSameTypeEventData, addr 0x34f9bdc, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapEventData* get_previousSameTypeEventData();

  /// [CompilerGenerated]
  /// @brief Method get_sourceBoxGroupBeat, addr 0x34f9bfc, size 0x8, virtual false, abstract: false, final false
  inline float_t get_sourceBoxGroupBeat();

  /// [CompilerGenerated]
  /// @brief Method set_nextSameTypeEventData, addr 0x34f9bf4, size 0x8, virtual false, abstract: false, final false
  inline void set_nextSameTypeEventData(::GlobalNamespace::BeatmapEventData* value);

  /// [CompilerGenerated]
  /// @brief Method set_previousSameTypeEventData, addr 0x34f9be4, size 0x8, virtual false, abstract: false, final false
  inline void set_previousSameTypeEventData(::GlobalNamespace::BeatmapEventData* value);

  /// [CompilerGenerated]
  /// @brief Method set_sourceBoxGroupBeat, addr 0x34f9c04, size 0x8, virtual false, abstract: false, final false
  inline void set_sourceBoxGroupBeat(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapEventData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapEventData", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapEventData(BeatmapEventData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapEventData", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapEventData(BeatmapEventData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21954 };

  /// @brief Field kGroupIdMultiplier offset 0xffffffff size 0x4
  static constexpr int32_t kGroupIdMultiplier{ static_cast<int32_t>(0x2710) };

  /// @brief Field kNoSourceBoxGroupBeat offset 0xffffffff size 0x4
  static constexpr float_t kNoSourceBoxGroupBeat{ static_cast<float_t>(-3.4028235e38f) };

  /// @brief Field kSecondaryGroupIdMultiplier offset 0xffffffff size 0x4
  static constexpr int32_t kSecondaryGroupIdMultiplier{ static_cast<int32_t>(0x989680) };

  /// [CompilerGenerated]
  /// @brief Field <previousSameTypeEventData>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapEventData* ____previousSameTypeEventData_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <nextSameTypeEventData>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapEventData* ____nextSameTypeEventData_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <sourceBoxGroupBeat>k__BackingField, offset: 0x38, size: 0x4, def value: None
  float_t ____sourceBoxGroupBeat_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapEventData, ____previousSameTypeEventData_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEventData, ____nextSameTypeEventData_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEventData, ____sourceBoxGroupBeat_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BeatmapEventData) == 0x40, "Size mismatch!");

} // namespace GlobalNamespace
