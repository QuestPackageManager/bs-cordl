#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/FilmGrainLookup.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FilmGrainLookup)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct FilmGrainLookup;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::FilmGrainLookup);
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.FilmGrainLookup
struct CORDL_TYPE FilmGrainLookup {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __FilmGrainLookup_Unwrapped
  enum struct __FilmGrainLookup_Unwrapped : int32_t {
    __E_Thin1 = static_cast<int32_t>(0x0),
    __E_Thin2 = static_cast<int32_t>(0x1),
    __E_Medium1 = static_cast<int32_t>(0x2),
    __E_Medium2 = static_cast<int32_t>(0x3),
    __E_Medium3 = static_cast<int32_t>(0x4),
    __E_Medium4 = static_cast<int32_t>(0x5),
    __E_Medium5 = static_cast<int32_t>(0x6),
    __E_Medium6 = static_cast<int32_t>(0x7),
    __E_Large01 = static_cast<int32_t>(0x8),
    __E_Large02 = static_cast<int32_t>(0x9),
    __E_Custom = static_cast<int32_t>(0xa),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __FilmGrainLookup_Unwrapped() const noexcept {
    return static_cast<__FilmGrainLookup_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr FilmGrainLookup();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr FilmGrainLookup(int32_t value__) noexcept;

  /// @brief Field Custom value: I32(10)
  static ::UnityEngine::Rendering::Universal::FilmGrainLookup const Custom;

  /// @brief Field Large01 value: I32(8)
  static ::UnityEngine::Rendering::Universal::FilmGrainLookup const Large01;

  /// @brief Field Large02 value: I32(9)
  static ::UnityEngine::Rendering::Universal::FilmGrainLookup const Large02;

  /// @brief Field Medium1 value: I32(2)
  static ::UnityEngine::Rendering::Universal::FilmGrainLookup const Medium1;

  /// @brief Field Medium2 value: I32(3)
  static ::UnityEngine::Rendering::Universal::FilmGrainLookup const Medium2;

  /// @brief Field Medium3 value: I32(4)
  static ::UnityEngine::Rendering::Universal::FilmGrainLookup const Medium3;

  /// @brief Field Medium4 value: I32(5)
  static ::UnityEngine::Rendering::Universal::FilmGrainLookup const Medium4;

  /// @brief Field Medium5 value: I32(6)
  static ::UnityEngine::Rendering::Universal::FilmGrainLookup const Medium5;

  /// @brief Field Medium6 value: I32(7)
  static ::UnityEngine::Rendering::Universal::FilmGrainLookup const Medium6;

  /// @brief Field Thin1 value: I32(0)
  static ::UnityEngine::Rendering::Universal::FilmGrainLookup const Thin1;

  /// @brief Field Thin2 value: I32(1)
  static ::UnityEngine::Rendering::Universal::FilmGrainLookup const Thin2;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12765 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::FilmGrainLookup, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::FilmGrainLookup, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::FilmGrainLookup, "UnityEngine.Rendering.Universal", "FilmGrainLookup");
