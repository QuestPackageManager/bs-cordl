#pragma once
// IWYU pragma private; include "GlobalNamespace/FxBeatmapEventData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapEventData_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FxBeatmapEventData)
// Forward declare root types
namespace GlobalNamespace {
class FxBeatmapEventData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FxBeatmapEventData);
// Dependencies BeatmapEventData
namespace GlobalNamespace {
// Is value type: false
// CS Name: FxBeatmapEventData
class CORDL_TYPE FxBeatmapEventData : public ::GlobalNamespace::BeatmapEventData {
public:
  // Declarations
  /// @brief Field elementId, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_elementId, put = __cordl_internal_set_elementId)) int32_t elementId;

  /// @brief Field groupId, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_groupId, put = __cordl_internal_set_groupId)) int32_t groupId;

  /// @brief Field usePreviousEventValue, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_usePreviousEventValue, put = __cordl_internal_set_usePreviousEventValue)) bool usePreviousEventValue;

  static inline ::GlobalNamespace::FxBeatmapEventData* New_ctor(float_t time, int32_t groupId, int32_t elementId, bool usePreviousEventValue);

  /// @brief Method SubtypeIdentifier, addr 0x22430f0, size 0xc, virtual false, abstract: false, final false
  static inline int32_t SubtypeIdentifier(int32_t groupId, int32_t elementId);

  constexpr int32_t const& __cordl_internal_get_elementId() const;

  constexpr int32_t& __cordl_internal_get_elementId();

  constexpr int32_t const& __cordl_internal_get_groupId() const;

  constexpr int32_t& __cordl_internal_get_groupId();

  constexpr bool const& __cordl_internal_get_usePreviousEventValue() const;

  constexpr bool& __cordl_internal_get_usePreviousEventValue();

  constexpr void __cordl_internal_set_elementId(int32_t value);

  constexpr void __cordl_internal_set_groupId(int32_t value);

  constexpr void __cordl_internal_set_usePreviousEventValue(bool value);

  /// @brief Method .ctor, addr 0x224308c, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(float_t time, int32_t groupId, int32_t elementId, bool usePreviousEventValue);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FxBeatmapEventData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FxBeatmapEventData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FxBeatmapEventData(FxBeatmapEventData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FxBeatmapEventData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FxBeatmapEventData(FxBeatmapEventData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17057 };

  /// @brief Field groupId, offset: 0x30, size: 0x4, def value: None
  int32_t ___groupId;

  /// @brief Field elementId, offset: 0x34, size: 0x4, def value: None
  int32_t ___elementId;

  /// @brief Field usePreviousEventValue, offset: 0x38, size: 0x1, def value: None
  bool ___usePreviousEventValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FxBeatmapEventData, ___groupId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FxBeatmapEventData, ___elementId) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FxBeatmapEventData, ___usePreviousEventValue) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FxBeatmapEventData, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FxBeatmapEventData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FxBeatmapEventData*, "", "FxBeatmapEventData");
