#pragma once
// IWYU pragma private; include "BeatSaber\Destinations\SimpleMissionObjective.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/Destinations/zzzz__MissionObjectiveType_def.hpp"
#include "GlobalNamespace/zzzz__MissionObjective_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SimpleMissionObjective)
namespace BeatSaber::Destinations {
struct MissionObjectiveType;
}
namespace GlobalNamespace {
class MissionObjectiveTypeCollection;
}
namespace GlobalNamespace {
struct MissionObjective_ReferenceValueComparisonType;
}
namespace GlobalNamespace {
class MissionObjective;
}
// Forward declare root types
namespace BeatSaber::Destinations {
class SimpleMissionObjective;
}
// Write type traits
MARK_REF_T(::BeatSaber::Destinations::SimpleMissionObjective*);
DEFINE_IL2CPP_CLASS(::BeatSaber::Destinations::SimpleMissionObjective*, "BeatSaber.Destinations", "SimpleMissionObjective");
// Dependencies BeatSaber.Destinations.MissionObjectiveType, MissionObjective::ReferenceValueComparisonType, System.Object
namespace BeatSaber::Destinations {
// Is value type: false
// CS Name: BeatSaber.Destinations.SimpleMissionObjective
class CORDL_TYPE SimpleMissionObjective : public ::System::Object {
public:
  // Declarations
  /// @brief Field _referenceValue, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__referenceValue, put = __cordl_internal_set__referenceValue)) int32_t _referenceValue;

  /// @brief Field _referenceValueComparisonType, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__referenceValueComparisonType,
                      put = __cordl_internal_set__referenceValueComparisonType)) ::GlobalNamespace::MissionObjective_ReferenceValueComparisonType _referenceValueComparisonType;

  /// @brief Field _type, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__type, put = __cordl_internal_set__type)) ::BeatSaber::Destinations::MissionObjectiveType _type;

  __declspec(property(get = get_referenceValue)) int32_t referenceValue;

  __declspec(property(get = get_referenceValueComparisonType)) ::GlobalNamespace::MissionObjective_ReferenceValueComparisonType referenceValueComparisonType;

  __declspec(property(get = get_type)) ::BeatSaber::Destinations::MissionObjectiveType type;

  static inline ::BeatSaber::Destinations::SimpleMissionObjective* New_ctor(::BeatSaber::Destinations::MissionObjectiveType type,
                                                                            ::GlobalNamespace::MissionObjective_ReferenceValueComparisonType referenceValueComparisonType, int32_t referenceValue);

  /// @brief Method ToMissionObjective, addr 0x328105c, size 0x14c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::MissionObjective* ToMissionObjective(::GlobalNamespace::MissionObjectiveTypeCollection* collection);

  constexpr int32_t const& __cordl_internal_get__referenceValue() const;

  constexpr int32_t& __cordl_internal_get__referenceValue();

  constexpr ::GlobalNamespace::MissionObjective_ReferenceValueComparisonType const& __cordl_internal_get__referenceValueComparisonType() const;

  constexpr ::GlobalNamespace::MissionObjective_ReferenceValueComparisonType& __cordl_internal_get__referenceValueComparisonType();

  constexpr ::BeatSaber::Destinations::MissionObjectiveType const& __cordl_internal_get__type() const;

  constexpr ::BeatSaber::Destinations::MissionObjectiveType& __cordl_internal_get__type();

  constexpr void __cordl_internal_set__referenceValue(int32_t value);

  constexpr void __cordl_internal_set__referenceValueComparisonType(::GlobalNamespace::MissionObjective_ReferenceValueComparisonType value);

  constexpr void __cordl_internal_set__type(::BeatSaber::Destinations::MissionObjectiveType value);

  /// @brief Method .ctor, addr 0x3281050, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::BeatSaber::Destinations::MissionObjectiveType type, ::GlobalNamespace::MissionObjective_ReferenceValueComparisonType referenceValueComparisonType, int32_t referenceValue);

  /// @brief Method get_referenceValue, addr 0x3281048, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_referenceValue();

  /// @brief Method get_referenceValueComparisonType, addr 0x3281040, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::MissionObjective_ReferenceValueComparisonType get_referenceValueComparisonType();

  /// @brief Method get_type, addr 0x3281038, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::Destinations::MissionObjectiveType get_type();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SimpleMissionObjective();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SimpleMissionObjective", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SimpleMissionObjective(SimpleMissionObjective&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SimpleMissionObjective", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SimpleMissionObjective(SimpleMissionObjective const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23062 };

  /// @brief Field _type, offset: 0x10, size: 0x4, def value: None
  ::BeatSaber::Destinations::MissionObjectiveType ____type;

  /// @brief Field _referenceValueComparisonType, offset: 0x14, size: 0x4, def value: None
  ::GlobalNamespace::MissionObjective_ReferenceValueComparisonType ____referenceValueComparisonType;

  /// @brief Field _referenceValue, offset: 0x18, size: 0x4, def value: None
  int32_t ____referenceValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Destinations::SimpleMissionObjective, ____type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Destinations::SimpleMissionObjective, ____referenceValueComparisonType) == 0x14, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Destinations::SimpleMissionObjective, ____referenceValue) == 0x18, "Offset mismatch!");

static_assert(sizeof(::BeatSaber::Destinations::SimpleMissionObjective) == 0x20, "Size mismatch!");

} // namespace BeatSaber::Destinations
