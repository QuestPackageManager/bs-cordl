#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BasicMockPlayerScoreCalculator)
namespace GlobalNamespace {
class IMockPlayerScoreCalculator;
}
namespace System {
class Random;
}
namespace GlobalNamespace {
class MockNoteData;
}
// Forward declare root types
namespace GlobalNamespace {
class BasicMockPlayerScoreCalculator;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BasicMockPlayerScoreCalculator);
// Type: ::BasicMockPlayerScoreCalculator
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15506))
// CS Name: ::BasicMockPlayerScoreCalculator*
class CORDL_TYPE BasicMockPlayerScoreCalculator : public ::System::Object {
public:
  // Declarations
  /// @brief Field _hitFrequency, offset 0x10, size 0x4
  __declspec(property(get = __get__hitFrequency, put = __set__hitFrequency)) float_t _hitFrequency;

  /// @brief Field _minScore, offset 0x14, size 0x4
  __declspec(property(get = __get__minScore, put = __set__minScore)) int32_t _minScore;

  /// @brief Field _maxScore, offset 0x18, size 0x4
  __declspec(property(get = __get__maxScore, put = __set__maxScore)) int32_t _maxScore;

  /// @brief Field _random, offset 0x20, size 0x8
  __declspec(property(get = __get__random, put = __set__random))::System::Random* _random;

  /// @brief Convert operator to "::GlobalNamespace::IMockPlayerScoreCalculator"
  constexpr operator ::GlobalNamespace::IMockPlayerScoreCalculator*() noexcept;

  constexpr float_t& __get__hitFrequency();

  constexpr float_t const& __get__hitFrequency() const;

  constexpr void __set__hitFrequency(float_t value);

  constexpr int32_t& __get__minScore();

  constexpr int32_t const& __get__minScore() const;

  constexpr void __set__minScore(int32_t value);

  constexpr int32_t& __get__maxScore();

  constexpr int32_t const& __get__maxScore() const;

  constexpr void __set__maxScore(int32_t value);

  constexpr ::System::Random*& __get__random();

  constexpr ::cordl_internals::to_const_pointer<::System::Random*> const& __get__random() const;

  constexpr void __set__random(::System::Random* value);

  static inline ::GlobalNamespace::BasicMockPlayerScoreCalculator* New_ctor(float_t hitFrequency, int32_t minScore, int32_t maxScore);

  /// @brief Method .ctor, addr 0x23e6748, size 0xbc, virtual false, abstract: false, final false
  /// @param hitFrequency: float_t (default: 0.95)
  /// @param minScore: int32_t (default: static_cast<int32_t>(0x42))
  /// @param maxScore: int32_t (default: static_cast<int32_t>(0x6e))
  inline void _ctor(float_t hitFrequency = 0.95, int32_t minScore = static_cast<int32_t>(0x42), int32_t maxScore = static_cast<int32_t>(0x6e));

  /// @brief Method GetScoreForNote, addr 0x23e6804, size 0x74, virtual true, abstract: false, final true
  inline int32_t GetScoreForNote(::GlobalNamespace::MockNoteData* noteData);

  // Ctor Parameters [CppParam { name: "", ty: "BasicMockPlayerScoreCalculator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BasicMockPlayerScoreCalculator(BasicMockPlayerScoreCalculator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BasicMockPlayerScoreCalculator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BasicMockPlayerScoreCalculator(BasicMockPlayerScoreCalculator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BasicMockPlayerScoreCalculator();

public:
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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BasicMockPlayerScoreCalculator, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicMockPlayerScoreCalculator, ____hitFrequency) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicMockPlayerScoreCalculator, ____minScore) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicMockPlayerScoreCalculator, ____maxScore) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicMockPlayerScoreCalculator, ____random) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BasicMockPlayerScoreCalculator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BasicMockPlayerScoreCalculator*, "", "BasicMockPlayerScoreCalculator");
