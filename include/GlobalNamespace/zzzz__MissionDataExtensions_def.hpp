#pragma once
// IWYU pragma private; include "GlobalNamespace/MissionDataExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MissionDataExtensions)
namespace GlobalNamespace {
struct MissionObjective_ReferenceValueComparisonType;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionDataExtensions;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MissionDataExtensions*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MissionDataExtensions*, "", "MissionDataExtensions");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MissionDataExtensions
class CORDL_TYPE MissionDataExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method Name, addr 0x3751e1c, size 0x98, virtual false, abstract: false, final false
  static inline ::StringW Name(::GlobalNamespace::MissionObjective_ReferenceValueComparisonType comparisonType);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionDataExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MissionDataExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionDataExtensions(MissionDataExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionDataExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionDataExtensions(MissionDataExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15233 };

  /// @brief Field kMaxMissionObjectiveTypeLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kMaxMissionObjectiveTypeLocalizationKey{ u"MAX_MISSION_OBJECTIVE_TYPE" };

  /// @brief Field kMinMissionObjectiveTypeLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kMinMissionObjectiveTypeLocalizationKey{ u"MIN_MISSION_OBJECTIVE_TYPE" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MissionDataExtensions) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
