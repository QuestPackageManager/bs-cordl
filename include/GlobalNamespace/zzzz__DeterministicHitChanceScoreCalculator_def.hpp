#pragma once
// IWYU pragma private; include "GlobalNamespace/DeterministicHitChanceScoreCalculator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IMockPlayerScoreCalculator_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DeterministicHitChanceScoreCalculator)
namespace GlobalNamespace {
class MockNoteData;
}
// Forward declare root types
namespace GlobalNamespace {
class DeterministicHitChanceScoreCalculator;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DeterministicHitChanceScoreCalculator);
// Dependencies IMockPlayerScoreCalculator, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: DeterministicHitChanceScoreCalculator
class CORDL_TYPE DeterministicHitChanceScoreCalculator : public ::System::Object {
public:
  // Declarations
  /// @brief Field _chanceAggregated, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__chanceAggregated, put = __cordl_internal_set__chanceAggregated)) float_t _chanceAggregated;

  /// @brief Field _hitChance, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__hitChance, put = __cordl_internal_set__hitChance)) float_t _hitChance;

  /// @brief Convert operator to "::GlobalNamespace::IMockPlayerScoreCalculator"
  constexpr operator ::GlobalNamespace::IMockPlayerScoreCalculator*() noexcept;

  /// @brief Method GetScoreForNote, addr 0x3bcb280, size 0x30, virtual true, abstract: false, final true
  inline int32_t GetScoreForNote(::GlobalNamespace::MockNoteData* noteData);

  static inline ::GlobalNamespace::DeterministicHitChanceScoreCalculator* New_ctor(float_t hitChance);

  constexpr float_t const& __cordl_internal_get__chanceAggregated() const;

  constexpr float_t& __cordl_internal_get__chanceAggregated();

  constexpr float_t const& __cordl_internal_get__hitChance() const;

  constexpr float_t& __cordl_internal_get__hitChance();

  constexpr void __cordl_internal_set__chanceAggregated(float_t value);

  constexpr void __cordl_internal_set__hitChance(float_t value);

  /// @brief Method .ctor, addr 0x3bcb258, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(float_t hitChance);

  /// @brief Convert to "::GlobalNamespace::IMockPlayerScoreCalculator"
  constexpr ::GlobalNamespace::IMockPlayerScoreCalculator* i___GlobalNamespace__IMockPlayerScoreCalculator() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DeterministicHitChanceScoreCalculator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DeterministicHitChanceScoreCalculator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DeterministicHitChanceScoreCalculator(DeterministicHitChanceScoreCalculator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DeterministicHitChanceScoreCalculator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DeterministicHitChanceScoreCalculator(DeterministicHitChanceScoreCalculator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4535 };

  /// @brief Field kScorePerHit offset 0xffffffff size 0x4
  static constexpr int32_t kScorePerHit{ static_cast<int32_t>(0x69) };

  /// @brief Field _hitChance, offset: 0x10, size: 0x4, def value: None
  float_t ____hitChance;

  /// @brief Field _chanceAggregated, offset: 0x14, size: 0x4, def value: None
  float_t ____chanceAggregated;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DeterministicHitChanceScoreCalculator, ____hitChance) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DeterministicHitChanceScoreCalculator, ____chanceAggregated) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DeterministicHitChanceScoreCalculator, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DeterministicHitChanceScoreCalculator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DeterministicHitChanceScoreCalculator*, "", "DeterministicHitChanceScoreCalculator");
