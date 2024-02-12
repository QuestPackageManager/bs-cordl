#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDataItem_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapEventData)
// Forward declare root types
namespace GlobalNamespace {
class BeatmapEventData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapEventData);
// Type: ::BeatmapEventData
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(15100))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15111))
// CS Name: ::BeatmapEventData*
class CORDL_TYPE BeatmapEventData : public ::GlobalNamespace::BeatmapDataItem {
public:
  // Declarations
  /// @brief Field <previousSameTypeEventData>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__previousSameTypeEventData_k__BackingField,
                      put = __cordl_internal_set__previousSameTypeEventData_k__BackingField))::GlobalNamespace::BeatmapEventData* _previousSameTypeEventData_k__BackingField;

  /// @brief Field <nextSameTypeEventData>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__nextSameTypeEventData_k__BackingField,
                      put = __cordl_internal_set__nextSameTypeEventData_k__BackingField))::GlobalNamespace::BeatmapEventData* _nextSameTypeEventData_k__BackingField;

  __declspec(property(get = get_previousSameTypeEventData, put = set_previousSameTypeEventData))::GlobalNamespace::BeatmapEventData* previousSameTypeEventData;

  __declspec(property(get = get_nextSameTypeEventData, put = set_nextSameTypeEventData))::GlobalNamespace::BeatmapEventData* nextSameTypeEventData;

  constexpr ::GlobalNamespace::BeatmapEventData*& __cordl_internal_get__previousSameTypeEventData_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapEventData*> const& __cordl_internal_get__previousSameTypeEventData_k__BackingField() const;

  constexpr void __cordl_internal_set__previousSameTypeEventData_k__BackingField(::GlobalNamespace::BeatmapEventData* value);

  constexpr ::GlobalNamespace::BeatmapEventData*& __cordl_internal_get__nextSameTypeEventData_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapEventData*> const& __cordl_internal_get__nextSameTypeEventData_k__BackingField() const;

  constexpr void __cordl_internal_set__nextSameTypeEventData_k__BackingField(::GlobalNamespace::BeatmapEventData* value);

  /// @brief Method get_previousSameTypeEventData, addr 0xe0e514, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapEventData* get_previousSameTypeEventData();

  /// @brief Method set_previousSameTypeEventData, addr 0xe0e51c, size 0x8, virtual false, abstract: false, final false
  inline void set_previousSameTypeEventData(::GlobalNamespace::BeatmapEventData* value);

  /// @brief Method get_nextSameTypeEventData, addr 0xe0e524, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapEventData* get_nextSameTypeEventData();

  /// @brief Method set_nextSameTypeEventData, addr 0xe0e52c, size 0x8, virtual false, abstract: false, final false
  inline void set_nextSameTypeEventData(::GlobalNamespace::BeatmapEventData* value);

  static inline ::GlobalNamespace::BeatmapEventData* New_ctor(float_t time, int32_t executionOrder, int32_t subtypeIdentifier);

  /// @brief Method .ctor, addr 0xe0e15c, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(float_t time, int32_t executionOrder, int32_t subtypeIdentifier);

  /// @brief Method __ConnectWithPreviousSameTypeEventData, addr 0xe0e534, size 0x10, virtual false, abstract: false, final false
  inline void __ConnectWithPreviousSameTypeEventData(::GlobalNamespace::BeatmapEventData* newPreviousSameTypeEvent);

  /// @brief Method __ConnectWithNextSameTypeEventData, addr 0xe0e544, size 0x10, virtual false, abstract: false, final false
  inline void __ConnectWithNextSameTypeEventData(::GlobalNamespace::BeatmapEventData* newNextSameTypeEvent);

  /// @brief Method __ResetConnections, addr 0xe0e554, size 0x8, virtual false, abstract: false, final false
  inline void __ResetConnections();

  /// @brief Method GetDefault, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::GlobalNamespace::BeatmapEventData* GetDefault();

  /// @brief Method GetDefault, addr 0xe0e55c, size 0x2c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapEventData* GetDefault(::GlobalNamespace::BeatmapEventData* nextData);

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapEventData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapEventData(BeatmapEventData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapEventData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapEventData(BeatmapEventData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapEventData();

public:
  /// @brief Field <previousSameTypeEventData>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapEventData* ____previousSameTypeEventData_k__BackingField;

  /// @brief Field <nextSameTypeEventData>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapEventData* ____nextSameTypeEventData_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapEventData, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEventData, ____previousSameTypeEventData_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEventData, ____nextSameTypeEventData_k__BackingField) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapEventData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapEventData*, "", "BeatmapEventData");
