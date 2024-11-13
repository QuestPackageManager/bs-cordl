#pragma once
// IWYU pragma private; include "GlobalNamespace/MissionObjectiveTypeSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MissionObjectiveTypeSO)
namespace GlobalNamespace {
class ObjectiveValueFormatterSO;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionObjectiveTypeSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MissionObjectiveTypeSO);
// Type: ::MissionObjectiveTypeSO
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MissionObjectiveTypeSO*
class CORDL_TYPE MissionObjectiveTypeSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _noConditionValue, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__noConditionValue, put = __cordl_internal_set__noConditionValue)) bool _noConditionValue;

  /// @brief Field _objectiveName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__objectiveName, put = __cordl_internal_set__objectiveName)) ::StringW _objectiveName;

  /// @brief Field _objectiveValueFormater, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__objectiveValueFormater, put = __cordl_internal_set__objectiveValueFormater)) ::UnityW<::GlobalNamespace::ObjectiveValueFormatterSO>
      _objectiveValueFormater;

  __declspec(property(get = get_noConditionValue)) bool noConditionValue;

  __declspec(property(get = get_objectiveName)) ::StringW objectiveName;

  __declspec(property(get = get_objectiveNameLocalized)) ::StringW objectiveNameLocalized;

  __declspec(property(get = get_objectiveValueFormater)) ::UnityW<::GlobalNamespace::ObjectiveValueFormatterSO> objectiveValueFormater;

  static inline ::GlobalNamespace::MissionObjectiveTypeSO* New_ctor();

  constexpr bool const& __cordl_internal_get__noConditionValue() const;

  constexpr bool& __cordl_internal_get__noConditionValue();

  constexpr ::StringW const& __cordl_internal_get__objectiveName() const;

  constexpr ::StringW& __cordl_internal_get__objectiveName();

  constexpr ::UnityW<::GlobalNamespace::ObjectiveValueFormatterSO> const& __cordl_internal_get__objectiveValueFormater() const;

  constexpr ::UnityW<::GlobalNamespace::ObjectiveValueFormatterSO>& __cordl_internal_get__objectiveValueFormater();

  constexpr void __cordl_internal_set__noConditionValue(bool value);

  constexpr void __cordl_internal_set__objectiveName(::StringW value);

  constexpr void __cordl_internal_set__objectiveValueFormater(::UnityW<::GlobalNamespace::ObjectiveValueFormatterSO> value);

  /// @brief Method .ctor, addr 0x269f81c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_noConditionValue, addr 0x269f80c, size 0x8, virtual false, abstract: false, final false
  inline bool get_noConditionValue();

  /// @brief Method get_objectiveName, addr 0x269f7f8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_objectiveName();

  /// @brief Method get_objectiveNameLocalized, addr 0x269f800, size 0xc, virtual false, abstract: false, final false
  inline ::StringW get_objectiveNameLocalized();

  /// @brief Method get_objectiveValueFormater, addr 0x269f814, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::ObjectiveValueFormatterSO> get_objectiveValueFormater();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionObjectiveTypeSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MissionObjectiveTypeSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionObjectiveTypeSO(MissionObjectiveTypeSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionObjectiveTypeSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionObjectiveTypeSO(MissionObjectiveTypeSO const&) = delete;

  /// @brief Field _objectiveName, offset: 0x18, size: 0x8, def value: None
  ::StringW ____objectiveName;

  /// @brief Field _noConditionValue, offset: 0x20, size: 0x1, def value: None
  bool ____noConditionValue;

  /// @brief Field _objectiveValueFormater, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ObjectiveValueFormatterSO> ____objectiveValueFormater;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13011 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionObjectiveTypeSO, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionObjectiveTypeSO, ____objectiveName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionObjectiveTypeSO, ____noConditionValue) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionObjectiveTypeSO, ____objectiveValueFormater) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissionObjectiveTypeSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionObjectiveTypeSO*, "", "MissionObjectiveTypeSO");
