#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/GlyphClassDefinitionType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GlyphClassDefinitionType)
// Forward declare root types
namespace UnityEngine::TextCore {
struct GlyphClassDefinitionType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::GlyphClassDefinitionType);
// Dependencies
namespace UnityEngine::TextCore {
// Is value type: true
// CS Name: UnityEngine.TextCore.GlyphClassDefinitionType
struct CORDL_TYPE GlyphClassDefinitionType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __GlyphClassDefinitionType_Unwrapped
  enum struct __GlyphClassDefinitionType_Unwrapped : int32_t {
    __E_Undefined = static_cast<int32_t>(0x0),
    __E_Base = static_cast<int32_t>(0x1),
    __E_Ligature = static_cast<int32_t>(0x2),
    __E_Mark = static_cast<int32_t>(0x3),
    __E_Component = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __GlyphClassDefinitionType_Unwrapped() const noexcept {
    return static_cast<__GlyphClassDefinitionType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr GlyphClassDefinitionType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr GlyphClassDefinitionType(int32_t value__) noexcept;

  /// @brief Field Base value: I32(1)
  static ::UnityEngine::TextCore::GlyphClassDefinitionType const Base;

  /// @brief Field Component value: I32(4)
  static ::UnityEngine::TextCore::GlyphClassDefinitionType const Component;

  /// @brief Field Ligature value: I32(2)
  static ::UnityEngine::TextCore::GlyphClassDefinitionType const Ligature;

  /// @brief Field Mark value: I32(3)
  static ::UnityEngine::TextCore::GlyphClassDefinitionType const Mark;

  /// @brief Field Undefined value: I32(0)
  static ::UnityEngine::TextCore::GlyphClassDefinitionType const Undefined;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18174 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::GlyphClassDefinitionType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::GlyphClassDefinitionType, 0x4>, "Size mismatch!");

} // namespace UnityEngine::TextCore
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::GlyphClassDefinitionType, "UnityEngine.TextCore", "GlyphClassDefinitionType");
