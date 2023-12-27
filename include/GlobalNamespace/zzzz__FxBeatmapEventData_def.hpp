#pragma once
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
// Type: ::FxBeatmapEventData
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 57, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14727))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14731))
// CS Name: ::FxBeatmapEventData*
class CORDL_TYPE FxBeatmapEventData : public ::GlobalNamespace::BeatmapEventData {
public:
  // Declarations
  /// @brief Field groupId, offset 0x30, size 0x4
  __declspec(property(get = __get_groupId, put = __set_groupId)) int32_t groupId;

  /// @brief Field elementId, offset 0x34, size 0x4
  __declspec(property(get = __get_elementId, put = __set_elementId)) int32_t elementId;

  /// @brief Field usePreviousEventValue, offset 0x38, size 0x1
  __declspec(property(get = __get_usePreviousEventValue, put = __set_usePreviousEventValue)) bool usePreviousEventValue;

  constexpr int32_t& __get_groupId();

  constexpr int32_t const& __get_groupId() const;

  constexpr void __set_groupId(int32_t value);

  constexpr int32_t& __get_elementId();

  constexpr int32_t const& __get_elementId() const;

  constexpr void __set_elementId(int32_t value);

  constexpr bool& __get_usePreviousEventValue();

  constexpr bool const& __get_usePreviousEventValue() const;

  constexpr void __set_usePreviousEventValue(bool value);

  static inline ::GlobalNamespace::FxBeatmapEventData* New_ctor(float_t time, int32_t groupId, int32_t elementId, bool usePreviousEventValue);

  /// @brief Method .ctor addr 0xdfe34c size 0x64 virtual false final false
  inline void _ctor(float_t time, int32_t groupId, int32_t elementId, bool usePreviousEventValue);

  /// @brief Method SubtypeIdentifier addr 0xdfe3b0 size 0xc virtual false final false
  static inline int32_t SubtypeIdentifier(int32_t groupId, int32_t elementId);

  // Ctor Parameters [CppParam { name: "", ty: "FxBeatmapEventData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FxBeatmapEventData(FxBeatmapEventData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FxBeatmapEventData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FxBeatmapEventData(FxBeatmapEventData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FxBeatmapEventData();

public:
  /// @brief Field groupId, offset: 0x30, size: 0x4, def value: None
  int32_t ___groupId;

  /// @brief Field elementId, offset: 0x34, size: 0x4, def value: None
  int32_t ___elementId;

  /// @brief Field usePreviousEventValue, offset: 0x38, size: 0x1, def value: None
  bool ___usePreviousEventValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FxBeatmapEventData, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FxBeatmapEventData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FxBeatmapEventData*, "", "FxBeatmapEventData");
