#pragma once
// IWYU pragma private; include "GlobalNamespace/MissionObjectiveResult.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MissionObjectiveResult)
namespace GlobalNamespace {
class MissionObjective;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionObjectiveResult;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MissionObjectiveResult);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MissionObjectiveResult
class CORDL_TYPE MissionObjectiveResult : public ::System::Object {
public:
  // Declarations
  /// @brief Field <cleared>k__BackingField, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__cleared_k__BackingField, put = __cordl_internal_set__cleared_k__BackingField)) bool _cleared_k__BackingField;

  /// @brief Field <missionObjective>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__missionObjective_k__BackingField,
                      put = __cordl_internal_set__missionObjective_k__BackingField)) ::GlobalNamespace::MissionObjective* _missionObjective_k__BackingField;

  /// @brief Field <value>k__BackingField, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__value_k__BackingField, put = __cordl_internal_set__value_k__BackingField)) int32_t _value_k__BackingField;

  __declspec(property(get = get_cleared, put = set_cleared)) bool cleared;

  __declspec(property(get = get_missionObjective, put = set_missionObjective)) ::GlobalNamespace::MissionObjective* missionObjective;

  __declspec(property(get = get_value, put = set_value)) int32_t value;

  static inline ::GlobalNamespace::MissionObjectiveResult* New_ctor(::GlobalNamespace::MissionObjective* missionObjective, bool cleared, int32_t value);

  constexpr bool const& __cordl_internal_get__cleared_k__BackingField() const;

  constexpr bool& __cordl_internal_get__cleared_k__BackingField();

  constexpr ::GlobalNamespace::MissionObjective* const& __cordl_internal_get__missionObjective_k__BackingField() const;

  constexpr ::GlobalNamespace::MissionObjective*& __cordl_internal_get__missionObjective_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__value_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__value_k__BackingField();

  constexpr void __cordl_internal_set__cleared_k__BackingField(bool value);

  constexpr void __cordl_internal_set__missionObjective_k__BackingField(::GlobalNamespace::MissionObjective* value);

  constexpr void __cordl_internal_set__value_k__BackingField(int32_t value);

  /// @brief Method .ctor, addr 0x26d6ab0, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::MissionObjective* missionObjective, bool cleared, int32_t value);

  /// @brief Method get_cleared, addr 0x26d6a8c, size 0x8, virtual false, abstract: false, final false
  inline bool get_cleared();

  /// @brief Method get_missionObjective, addr 0x26d6a7c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::MissionObjective* get_missionObjective();

  /// @brief Method get_value, addr 0x26d6aa0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_value();

  /// @brief Method set_cleared, addr 0x26d6a94, size 0xc, virtual false, abstract: false, final false
  inline void set_cleared(bool value);

  /// @brief Method set_missionObjective, addr 0x26d6a84, size 0x8, virtual false, abstract: false, final false
  inline void set_missionObjective(::GlobalNamespace::MissionObjective* value);

  /// @brief Method set_value, addr 0x26d6aa8, size 0x8, virtual false, abstract: false, final false
  inline void set_value(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionObjectiveResult();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MissionObjectiveResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionObjectiveResult(MissionObjectiveResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionObjectiveResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionObjectiveResult(MissionObjectiveResult const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13050 };

  /// @brief Field <missionObjective>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::MissionObjective* ____missionObjective_k__BackingField;

  /// @brief Field <cleared>k__BackingField, offset: 0x18, size: 0x1, def value: None
  bool ____cleared_k__BackingField;

  /// @brief Field <value>k__BackingField, offset: 0x1c, size: 0x4, def value: None
  int32_t ____value_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MissionObjectiveResult, ____missionObjective_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionObjectiveResult, ____cleared_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionObjectiveResult, ____value_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionObjectiveResult, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissionObjectiveResult);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionObjectiveResult*, "", "MissionObjectiveResult");
