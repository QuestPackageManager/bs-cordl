#pragma once
// IWYU pragma private; include "GlobalNamespace/EasedFloat.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(EasedFloat)
// Forward declare root types
namespace GlobalNamespace {
struct EasedFloat;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::EasedFloat);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EasedFloat, "", "EasedFloat");
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: EasedFloat
struct CORDL_TYPE EasedFloat {
public:
  // Declarations
  __declspec(property(get = get_current)) float_t current;

  __declspec(property(get = get_target, put = set_target)) float_t target;

  /// @brief Method SnapTo, addr 0x35acb68, size 0x8, virtual false, abstract: false, final false
  inline void SnapTo(float_t value);

  /// @brief Method TryStep, addr 0x35acb70, size 0xec, virtual false, abstract: false, final false
  inline bool TryStep(float_t deltaTime);

  /// @brief Method .ctor, addr 0x35acb28, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(float_t durationSec);

  /// @brief Method get_current, addr 0x35acb60, size 0x8, virtual false, abstract: false, final false
  inline float_t get_current();

  /// @brief Method get_target, addr 0x35acb50, size 0x8, virtual false, abstract: false, final false
  inline float_t get_target();

  /// @brief Method set_target, addr 0x35acb58, size 0x8, virtual false, abstract: false, final false
  inline void set_target(float_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr EasedFloat();

  // Ctor Parameters [CppParam { name: "_decay", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_current", ty: "float_t", modifiers: "", def_value: None, comment:
  // None }, CppParam { name: "_target", ty: "float_t", modifiers: "", def_value: None, comment: None }]
  constexpr EasedFloat(float_t _decay, float_t _current, float_t _target) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21397 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field kDefaultDurationSec offset 0xffffffff size 0x4
  static constexpr float_t kDefaultDurationSec{ static_cast<float_t>(0.3f) };

  /// @brief Field kSnapEpsilon offset 0xffffffff size 0x4
  static constexpr float_t kSnapEpsilon{ static_cast<float_t>(0.001f) };

  /// @brief Field kTimeConstantsPerDuration offset 0xffffffff size 0x4
  static constexpr float_t kTimeConstantsPerDuration{ static_cast<float_t>(6.9077554f) };

  /// @brief Field _decay, offset: 0x0, size: 0x4, def value: None
  float_t _decay;

  /// @brief Field _current, offset: 0x4, size: 0x4, def value: None
  float_t _current;

  /// @brief Field _target, offset: 0x8, size: 0x4, def value: None
  float_t _target;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EasedFloat, _decay) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EasedFloat, _current) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EasedFloat, _target) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EasedFloat) == 0xc, "Size mismatch!");

} // namespace GlobalNamespace
