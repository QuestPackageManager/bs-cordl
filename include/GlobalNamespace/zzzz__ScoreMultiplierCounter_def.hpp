#pragma once
// IWYU pragma private; include "GlobalNamespace/ScoreMultiplierCounter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScoreMultiplierCounter)
namespace GlobalNamespace {
struct ScoreMultiplierCounter_MultiplierEventType;
}
// Forward declare root types
namespace GlobalNamespace {
struct ScoreMultiplierCounter_MultiplierEventType;
}
namespace GlobalNamespace {
class ScoreMultiplierCounter;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ScoreMultiplierCounter_MultiplierEventType);
MARK_REF_PTR_T(::GlobalNamespace::ScoreMultiplierCounter);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: ScoreMultiplierCounter/MultiplierEventType
struct CORDL_TYPE ScoreMultiplierCounter_MultiplierEventType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ScoreMultiplierCounter_MultiplierEventType_Unwrapped
  enum struct __ScoreMultiplierCounter_MultiplierEventType_Unwrapped : int32_t {
    __E_Positive = static_cast<int32_t>(0x0),
    __E_Neutral = static_cast<int32_t>(0x1),
    __E_Negative = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ScoreMultiplierCounter_MultiplierEventType_Unwrapped() const noexcept {
    return static_cast<__ScoreMultiplierCounter_MultiplierEventType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ScoreMultiplierCounter_MultiplierEventType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ScoreMultiplierCounter_MultiplierEventType(int32_t value__) noexcept;

  /// @brief Field Negative value: I32(2)
  static ::GlobalNamespace::ScoreMultiplierCounter_MultiplierEventType const Negative;

  /// @brief Field Neutral value: I32(1)
  static ::GlobalNamespace::ScoreMultiplierCounter_MultiplierEventType const Neutral;

  /// @brief Field Positive value: I32(0)
  static ::GlobalNamespace::ScoreMultiplierCounter_MultiplierEventType const Positive;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13314 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ScoreMultiplierCounter_MultiplierEventType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ScoreMultiplierCounter_MultiplierEventType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ScoreMultiplierCounter
class CORDL_TYPE ScoreMultiplierCounter : public ::System::Object {
public:
  // Declarations
  using MultiplierEventType = ::GlobalNamespace::ScoreMultiplierCounter_MultiplierEventType;

  /// @brief Field _multiplier, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__multiplier, put = __cordl_internal_set__multiplier)) int32_t _multiplier;

  /// @brief Field _multiplierIncreaseMaxProgress, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__multiplierIncreaseMaxProgress, put = __cordl_internal_set__multiplierIncreaseMaxProgress)) int32_t _multiplierIncreaseMaxProgress;

  /// @brief Field _multiplierIncreaseProgress, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__multiplierIncreaseProgress, put = __cordl_internal_set__multiplierIncreaseProgress)) int32_t _multiplierIncreaseProgress;

  __declspec(property(get = get_multiplier)) int32_t multiplier;

  __declspec(property(get = get_normalizedProgress)) float_t normalizedProgress;

  static inline ::GlobalNamespace::ScoreMultiplierCounter* New_ctor();

  /// @brief Method ProcessMultiplierEvent, addr 0x27045f8, size 0x90, virtual false, abstract: false, final false
  inline bool ProcessMultiplierEvent(::GlobalNamespace::ScoreMultiplierCounter_MultiplierEventType multiplierEventType);

  /// @brief Method Reset, addr 0x27045e0, size 0x18, virtual false, abstract: false, final false
  inline void Reset();

  constexpr int32_t const& __cordl_internal_get__multiplier() const;

  constexpr int32_t& __cordl_internal_get__multiplier();

  constexpr int32_t const& __cordl_internal_get__multiplierIncreaseMaxProgress() const;

  constexpr int32_t& __cordl_internal_get__multiplierIncreaseMaxProgress();

  constexpr int32_t const& __cordl_internal_get__multiplierIncreaseProgress() const;

  constexpr int32_t& __cordl_internal_get__multiplierIncreaseProgress();

  constexpr void __cordl_internal_set__multiplier(int32_t value);

  constexpr void __cordl_internal_set__multiplierIncreaseMaxProgress(int32_t value);

  constexpr void __cordl_internal_set__multiplierIncreaseProgress(int32_t value);

  /// @brief Method .ctor, addr 0x2704b4c, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_multiplier, addr 0x2704c14, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_multiplier();

  /// @brief Method get_normalizedProgress, addr 0x2704c1c, size 0x14, virtual false, abstract: false, final false
  inline float_t get_normalizedProgress();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScoreMultiplierCounter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScoreMultiplierCounter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScoreMultiplierCounter(ScoreMultiplierCounter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScoreMultiplierCounter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScoreMultiplierCounter(ScoreMultiplierCounter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13315 };

  /// @brief Field _multiplier, offset: 0x10, size: 0x4, def value: None
  int32_t ____multiplier;

  /// @brief Field _multiplierIncreaseProgress, offset: 0x14, size: 0x4, def value: None
  int32_t ____multiplierIncreaseProgress;

  /// @brief Field _multiplierIncreaseMaxProgress, offset: 0x18, size: 0x4, def value: None
  int32_t ____multiplierIncreaseMaxProgress;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ScoreMultiplierCounter, ____multiplier) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScoreMultiplierCounter, ____multiplierIncreaseProgress) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScoreMultiplierCounter, ____multiplierIncreaseMaxProgress) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ScoreMultiplierCounter, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ScoreMultiplierCounter_MultiplierEventType, "", "ScoreMultiplierCounter/MultiplierEventType");
NEED_NO_BOX(::GlobalNamespace::ScoreMultiplierCounter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ScoreMultiplierCounter*, "", "ScoreMultiplierCounter");
