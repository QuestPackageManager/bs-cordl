#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Composites/AxisComposite.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputBindingComposite_1_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AxisComposite)
namespace UnityEngine::InputSystem::Composites {
struct AxisComposite_WhichSideWins;
}
namespace UnityEngine::InputSystem {
struct InputBindingCompositeContext;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Composites {
struct AxisComposite_WhichSideWins;
}
namespace UnityEngine::InputSystem::Composites {
class AxisComposite;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::Composites::AxisComposite_WhichSideWins);
MARK_REF_PTR_T(::UnityEngine::InputSystem::Composites::AxisComposite);
// Dependencies
namespace UnityEngine::InputSystem::Composites {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Composites.AxisComposite/WhichSideWins
struct CORDL_TYPE AxisComposite_WhichSideWins {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AxisComposite_WhichSideWins_Unwrapped
  enum struct __AxisComposite_WhichSideWins_Unwrapped : int32_t {
    __E_Neither = static_cast<int32_t>(0x0),
    __E_Positive = static_cast<int32_t>(0x1),
    __E_Negative = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AxisComposite_WhichSideWins_Unwrapped() const noexcept {
    return static_cast<__AxisComposite_WhichSideWins_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AxisComposite_WhichSideWins();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AxisComposite_WhichSideWins(int32_t value__) noexcept;

  /// @brief Field Negative value: I32(2)
  static ::UnityEngine::InputSystem::Composites::AxisComposite_WhichSideWins const Negative;

  /// @brief Field Neither value: I32(0)
  static ::UnityEngine::InputSystem::Composites::AxisComposite_WhichSideWins const Neither;

  /// @brief Field Positive value: I32(1)
  static ::UnityEngine::InputSystem::Composites::AxisComposite_WhichSideWins const Positive;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9186 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Composites::AxisComposite_WhichSideWins, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Composites::AxisComposite_WhichSideWins, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Composites
// Dependencies UnityEngine.InputSystem.Composites.AxisComposite::WhichSideWins, UnityEngine.InputSystem.InputBindingComposite`1<TValue>
namespace UnityEngine::InputSystem::Composites {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Composites.AxisComposite
class CORDL_TYPE AxisComposite : public ::UnityEngine::InputSystem::InputBindingComposite_1<float_t> {
public:
  // Declarations
  using WhichSideWins = ::UnityEngine::InputSystem::Composites::AxisComposite_WhichSideWins;

  /// @brief Field maxValue, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_maxValue, put = __cordl_internal_set_maxValue)) float_t maxValue;

  __declspec(property(get = get_midPoint)) float_t midPoint;

  /// @brief Field minValue, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_minValue, put = __cordl_internal_set_minValue)) float_t minValue;

  /// @brief Field negative, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_negative, put = __cordl_internal_set_negative)) int32_t negative;

  /// @brief Field positive, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_positive, put = __cordl_internal_set_positive)) int32_t positive;

  /// @brief Field whichSideWins, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_whichSideWins, put = __cordl_internal_set_whichSideWins)) ::UnityEngine::InputSystem::Composites::AxisComposite_WhichSideWins whichSideWins;

  /// @brief Method EvaluateMagnitude, addr 0x63555bc, size 0x48, virtual true, abstract: false, final false
  inline float_t EvaluateMagnitude(::ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context);

  static inline ::UnityEngine::InputSystem::Composites::AxisComposite* New_ctor();

  /// @brief Method ReadValue, addr 0x63554a8, size 0x114, virtual true, abstract: false, final false
  inline float_t ReadValue(::ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context);

  constexpr float_t const& __cordl_internal_get_maxValue() const;

  constexpr float_t& __cordl_internal_get_maxValue();

  constexpr float_t const& __cordl_internal_get_minValue() const;

  constexpr float_t& __cordl_internal_get_minValue();

  constexpr int32_t const& __cordl_internal_get_negative() const;

  constexpr int32_t& __cordl_internal_get_negative();

  constexpr int32_t const& __cordl_internal_get_positive() const;

  constexpr int32_t& __cordl_internal_get_positive();

  constexpr ::UnityEngine::InputSystem::Composites::AxisComposite_WhichSideWins const& __cordl_internal_get_whichSideWins() const;

  constexpr ::UnityEngine::InputSystem::Composites::AxisComposite_WhichSideWins& __cordl_internal_get_whichSideWins();

  constexpr void __cordl_internal_set_maxValue(float_t value);

  constexpr void __cordl_internal_set_minValue(float_t value);

  constexpr void __cordl_internal_set_negative(int32_t value);

  constexpr void __cordl_internal_set_positive(int32_t value);

  constexpr void __cordl_internal_set_whichSideWins(::UnityEngine::InputSystem::Composites::AxisComposite_WhichSideWins value);

  /// @brief Method .ctor, addr 0x6355604, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_midPoint, addr 0x6355494, size 0x14, virtual false, abstract: false, final false
  inline float_t get_midPoint();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AxisComposite();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AxisComposite", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AxisComposite(AxisComposite&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AxisComposite", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AxisComposite(AxisComposite const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9187 };

  /// @brief Field negative, offset: 0x10, size: 0x4, def value: None
  int32_t ___negative;

  /// @brief Field positive, offset: 0x14, size: 0x4, def value: None
  int32_t ___positive;

  /// @brief Field minValue, offset: 0x18, size: 0x4, def value: None
  float_t ___minValue;

  /// @brief Field maxValue, offset: 0x1c, size: 0x4, def value: None
  float_t ___maxValue;

  /// @brief Field whichSideWins, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::InputSystem::Composites::AxisComposite_WhichSideWins ___whichSideWins;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Composites::AxisComposite, ___negative) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Composites::AxisComposite, ___positive) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Composites::AxisComposite, ___minValue) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Composites::AxisComposite, ___maxValue) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Composites::AxisComposite, ___whichSideWins) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Composites::AxisComposite, 0x28>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Composites
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Composites::AxisComposite_WhichSideWins, "UnityEngine.InputSystem.Composites", "AxisComposite/WhichSideWins");
NEED_NO_BOX(::UnityEngine::InputSystem::Composites::AxisComposite);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Composites::AxisComposite*, "UnityEngine.InputSystem.Composites", "AxisComposite");
