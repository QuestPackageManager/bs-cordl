#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BlendOp.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BlendOp)
// Forward declare root types
namespace UnityEngine::Rendering {
struct BlendOp;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::BlendOp);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.BlendOp
struct CORDL_TYPE BlendOp {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __BlendOp_Unwrapped
  enum struct __BlendOp_Unwrapped : int32_t {
    __E_Add = static_cast<int32_t>(0x0),
    __E_Subtract = static_cast<int32_t>(0x1),
    __E_ReverseSubtract = static_cast<int32_t>(0x2),
    __E_Min = static_cast<int32_t>(0x3),
    __E_Max = static_cast<int32_t>(0x4),
    __E_LogicalClear = static_cast<int32_t>(0x5),
    __E_LogicalSet = static_cast<int32_t>(0x6),
    __E_LogicalCopy = static_cast<int32_t>(0x7),
    __E_LogicalCopyInverted = static_cast<int32_t>(0x8),
    __E_LogicalNoop = static_cast<int32_t>(0x9),
    __E_LogicalInvert = static_cast<int32_t>(0xa),
    __E_LogicalAnd = static_cast<int32_t>(0xb),
    __E_LogicalNand = static_cast<int32_t>(0xc),
    __E_LogicalOr = static_cast<int32_t>(0xd),
    __E_LogicalNor = static_cast<int32_t>(0xe),
    __E_LogicalXor = static_cast<int32_t>(0xf),
    __E_LogicalEquivalence = static_cast<int32_t>(0x10),
    __E_LogicalAndReverse = static_cast<int32_t>(0x11),
    __E_LogicalAndInverted = static_cast<int32_t>(0x12),
    __E_LogicalOrReverse = static_cast<int32_t>(0x13),
    __E_LogicalOrInverted = static_cast<int32_t>(0x14),
    __E_Multiply = static_cast<int32_t>(0x15),
    __E_Screen = static_cast<int32_t>(0x16),
    __E_Overlay = static_cast<int32_t>(0x17),
    __E_Darken = static_cast<int32_t>(0x18),
    __E_Lighten = static_cast<int32_t>(0x19),
    __E_ColorDodge = static_cast<int32_t>(0x1a),
    __E_ColorBurn = static_cast<int32_t>(0x1b),
    __E_HardLight = static_cast<int32_t>(0x1c),
    __E_SoftLight = static_cast<int32_t>(0x1d),
    __E_Difference = static_cast<int32_t>(0x1e),
    __E_Exclusion = static_cast<int32_t>(0x1f),
    __E_HSLHue = static_cast<int32_t>(0x20),
    __E_HSLSaturation = static_cast<int32_t>(0x21),
    __E_HSLColor = static_cast<int32_t>(0x22),
    __E_HSLLuminosity = static_cast<int32_t>(0x23),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __BlendOp_Unwrapped() const noexcept {
    return static_cast<__BlendOp_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr BlendOp();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr BlendOp(int32_t value__) noexcept;

  /// @brief Field Add value: I32(0)
  static ::UnityEngine::Rendering::BlendOp const Add;

  /// @brief Field ColorBurn value: I32(27)
  static ::UnityEngine::Rendering::BlendOp const ColorBurn;

  /// @brief Field ColorDodge value: I32(26)
  static ::UnityEngine::Rendering::BlendOp const ColorDodge;

  /// @brief Field Darken value: I32(24)
  static ::UnityEngine::Rendering::BlendOp const Darken;

  /// @brief Field Difference value: I32(30)
  static ::UnityEngine::Rendering::BlendOp const Difference;

  /// @brief Field Exclusion value: I32(31)
  static ::UnityEngine::Rendering::BlendOp const Exclusion;

  /// @brief Field HSLColor value: I32(34)
  static ::UnityEngine::Rendering::BlendOp const HSLColor;

  /// @brief Field HSLHue value: I32(32)
  static ::UnityEngine::Rendering::BlendOp const HSLHue;

  /// @brief Field HSLLuminosity value: I32(35)
  static ::UnityEngine::Rendering::BlendOp const HSLLuminosity;

  /// @brief Field HSLSaturation value: I32(33)
  static ::UnityEngine::Rendering::BlendOp const HSLSaturation;

  /// @brief Field HardLight value: I32(28)
  static ::UnityEngine::Rendering::BlendOp const HardLight;

  /// @brief Field Lighten value: I32(25)
  static ::UnityEngine::Rendering::BlendOp const Lighten;

  /// @brief Field LogicalAnd value: I32(11)
  static ::UnityEngine::Rendering::BlendOp const LogicalAnd;

  /// @brief Field LogicalAndInverted value: I32(18)
  static ::UnityEngine::Rendering::BlendOp const LogicalAndInverted;

  /// @brief Field LogicalAndReverse value: I32(17)
  static ::UnityEngine::Rendering::BlendOp const LogicalAndReverse;

  /// @brief Field LogicalClear value: I32(5)
  static ::UnityEngine::Rendering::BlendOp const LogicalClear;

  /// @brief Field LogicalCopy value: I32(7)
  static ::UnityEngine::Rendering::BlendOp const LogicalCopy;

  /// @brief Field LogicalCopyInverted value: I32(8)
  static ::UnityEngine::Rendering::BlendOp const LogicalCopyInverted;

  /// @brief Field LogicalEquivalence value: I32(16)
  static ::UnityEngine::Rendering::BlendOp const LogicalEquivalence;

  /// @brief Field LogicalInvert value: I32(10)
  static ::UnityEngine::Rendering::BlendOp const LogicalInvert;

  /// @brief Field LogicalNand value: I32(12)
  static ::UnityEngine::Rendering::BlendOp const LogicalNand;

  /// @brief Field LogicalNoop value: I32(9)
  static ::UnityEngine::Rendering::BlendOp const LogicalNoop;

  /// @brief Field LogicalNor value: I32(14)
  static ::UnityEngine::Rendering::BlendOp const LogicalNor;

  /// @brief Field LogicalOr value: I32(13)
  static ::UnityEngine::Rendering::BlendOp const LogicalOr;

  /// @brief Field LogicalOrInverted value: I32(20)
  static ::UnityEngine::Rendering::BlendOp const LogicalOrInverted;

  /// @brief Field LogicalOrReverse value: I32(19)
  static ::UnityEngine::Rendering::BlendOp const LogicalOrReverse;

  /// @brief Field LogicalSet value: I32(6)
  static ::UnityEngine::Rendering::BlendOp const LogicalSet;

  /// @brief Field LogicalXor value: I32(15)
  static ::UnityEngine::Rendering::BlendOp const LogicalXor;

  /// @brief Field Max value: I32(4)
  static ::UnityEngine::Rendering::BlendOp const Max;

  /// @brief Field Min value: I32(3)
  static ::UnityEngine::Rendering::BlendOp const Min;

  /// @brief Field Multiply value: I32(21)
  static ::UnityEngine::Rendering::BlendOp const Multiply;

  /// @brief Field Overlay value: I32(23)
  static ::UnityEngine::Rendering::BlendOp const Overlay;

  /// @brief Field ReverseSubtract value: I32(2)
  static ::UnityEngine::Rendering::BlendOp const ReverseSubtract;

  /// @brief Field Screen value: I32(22)
  static ::UnityEngine::Rendering::BlendOp const Screen;

  /// @brief Field SoftLight value: I32(29)
  static ::UnityEngine::Rendering::BlendOp const SoftLight;

  /// @brief Field Subtract value: I32(1)
  static ::UnityEngine::Rendering::BlendOp const Subtract;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10692 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::BlendOp, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::BlendOp, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::BlendOp, "UnityEngine.Rendering", "BlendOp");
