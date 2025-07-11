#pragma once
// IWYU pragma private; include "GlobalNamespace/BasicMockPlayerScoreCalculator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IMockPlayerScoreCalculator_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BasicMockPlayerScoreCalculator)
namespace GlobalNamespace {
class MockNoteData;
}
namespace System {
class Random;
}
// Forward declare root types
namespace GlobalNamespace {
class BasicMockPlayerScoreCalculator;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BasicMockPlayerScoreCalculator);
// Dependencies IMockPlayerScoreCalculator, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BasicMockPlayerScoreCalculator
class CORDL_TYPE BasicMockPlayerScoreCalculator : public ::System::Object {
public:
  // Declarations
  /// @brief Field _hitFrequency, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__hitFrequency, put = __cordl_internal_set__hitFrequency)) float_t _hitFrequency;

  /// @brief Field _maxScore, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__maxScore, put = __cordl_internal_set__maxScore)) int32_t _maxScore;

  /// @brief Field _minScore, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__minScore, put = __cordl_internal_set__minScore)) int32_t _minScore;

  /// @brief Field _random, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__random, put = __cordl_internal_set__random)) ::System::Random* _random;

  /// @brief Convert operator to "::GlobalNamespace::IMockPlayerScoreCalculator"
  constexpr operator ::GlobalNamespace::IMockPlayerScoreCalculator*() noexcept;

  /// @brief Method GetScoreForNote, addr 0x3c29e50, size 0x74, virtual true, abstract: false, final true
  inline int32_t GetScoreForNote(::GlobalNamespace::MockNoteData* noteData);

  static inline ::GlobalNamespace::BasicMockPlayerScoreCalculator* New_ctor(float_t hitFrequency, int32_t minScore, int32_t maxScore);

  constexpr float_t const& __cordl_internal_get__hitFrequency() const;

  constexpr float_t& __cordl_internal_get__hitFrequency();

  constexpr int32_t const& __cordl_internal_get__maxScore() const;

  constexpr int32_t& __cordl_internal_get__maxScore();

  constexpr int32_t const& __cordl_internal_get__minScore() const;

  constexpr int32_t& __cordl_internal_get__minScore();

  constexpr ::System::Random* const& __cordl_internal_get__random() const;

  constexpr ::System::Random*& __cordl_internal_get__random();

  constexpr void __cordl_internal_set__hitFrequency(float_t value);

  constexpr void __cordl_internal_set__maxScore(int32_t value);

  constexpr void __cordl_internal_set__minScore(int32_t value);

  constexpr void __cordl_internal_set__random(::System::Random* value);

  /// @brief Method .ctor, addr 0x3c29d9c, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor(float_t hitFrequency, int32_t minScore, int32_t maxScore);

  /// @brief Convert to "::GlobalNamespace::IMockPlayerScoreCalculator"
  constexpr ::GlobalNamespace::IMockPlayerScoreCalculator* i___GlobalNamespace__IMockPlayerScoreCalculator() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BasicMockPlayerScoreCalculator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BasicMockPlayerScoreCalculator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BasicMockPlayerScoreCalculator(BasicMockPlayerScoreCalculator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BasicMockPlayerScoreCalculator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BasicMockPlayerScoreCalculator(BasicMockPlayerScoreCalculator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18105 };

  /// @brief Field _hitFrequency, offset: 0x10, size: 0x4, def value: None
  float_t ____hitFrequency;

  /// @brief Field _minScore, offset: 0x14, size: 0x4, def value: None
  int32_t ____minScore;

  /// @brief Field _maxScore, offset: 0x18, size: 0x4, def value: None
  int32_t ____maxScore;

  /// @brief Field _random, offset: 0x20, size: 0x8, def value: None
  ::System::Random* ____random;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BasicMockPlayerScoreCalculator, ____hitFrequency) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicMockPlayerScoreCalculator, ____minScore) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicMockPlayerScoreCalculator, ____maxScore) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicMockPlayerScoreCalculator, ____random) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BasicMockPlayerScoreCalculator, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BasicMockPlayerScoreCalculator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BasicMockPlayerScoreCalculator*, "", "BasicMockPlayerScoreCalculator");
