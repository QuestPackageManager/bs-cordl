#pragma once
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
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13879))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4474))
// CS Name: ::MissionObjectiveTypeSO*
class CORDL_TYPE MissionObjectiveTypeSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _objectiveName, offset 0x18, size 0x8
  __declspec(property(get = __get__objectiveName, put = __set__objectiveName))::StringW _objectiveName;

  /// @brief Field _noConditionValue, offset 0x20, size 0x1
  __declspec(property(get = __get__noConditionValue, put = __set__noConditionValue)) bool _noConditionValue;

  /// @brief Field _objectiveValueFormater, offset 0x28, size 0x8
  __declspec(property(get = __get__objectiveValueFormater, put = __set__objectiveValueFormater))::GlobalNamespace::ObjectiveValueFormatterSO* _objectiveValueFormater;

  __declspec(property(get = get_objectiveName))::StringW objectiveName;

  __declspec(property(get = get_objectiveNameLocalized))::StringW objectiveNameLocalized;

  __declspec(property(get = get_noConditionValue)) bool noConditionValue;

  __declspec(property(get = get_objectiveValueFormater))::GlobalNamespace::ObjectiveValueFormatterSO* objectiveValueFormater;

  constexpr ::StringW& __get__objectiveName();

  constexpr ::StringW const& __get__objectiveName() const;

  constexpr void __set__objectiveName(::StringW value);

  constexpr bool& __get__noConditionValue();

  constexpr bool const& __get__noConditionValue() const;

  constexpr void __set__noConditionValue(bool value);

  constexpr ::GlobalNamespace::ObjectiveValueFormatterSO*& __get__objectiveValueFormater();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ObjectiveValueFormatterSO*> const& __get__objectiveValueFormater() const;

  constexpr void __set__objectiveValueFormater(::GlobalNamespace::ObjectiveValueFormatterSO* value);

  /// @brief Method get_objectiveName addr 0x2204e2c size 0x8 virtual false final false
  inline ::StringW get_objectiveName();

  /// @brief Method get_objectiveNameLocalized addr 0x2204e34 size 0xc virtual false final false
  inline ::StringW get_objectiveNameLocalized();

  /// @brief Method get_noConditionValue addr 0x2204e40 size 0x8 virtual false final false
  inline bool get_noConditionValue();

  /// @brief Method get_objectiveValueFormater addr 0x2204e48 size 0x8 virtual false final false
  inline ::GlobalNamespace::ObjectiveValueFormatterSO* get_objectiveValueFormater();

  static inline ::GlobalNamespace::MissionObjectiveTypeSO* New_ctor();

  /// @brief Method .ctor addr 0x2204e50 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MissionObjectiveTypeSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionObjectiveTypeSO(MissionObjectiveTypeSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionObjectiveTypeSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionObjectiveTypeSO(MissionObjectiveTypeSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionObjectiveTypeSO();

public:
  /// @brief Field _objectiveName, offset: 0x18, size: 0x8, def value: None
  ::StringW ____objectiveName;

  /// @brief Field _noConditionValue, offset: 0x20, size: 0x1, def value: None
  bool ____noConditionValue;

  /// @brief Field _objectiveValueFormater, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::ObjectiveValueFormatterSO* ____objectiveValueFormater;

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
