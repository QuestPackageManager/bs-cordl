#pragma once
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
// Type: UnityEngine.TextCore::GlyphClassDefinitionType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::TextCore {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15511))
// CS Name: ::UnityEngine.TextCore::GlyphClassDefinitionType
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr GlyphClassDefinitionType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr GlyphClassDefinitionType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Undefined value: static_cast<int32_t>(0x0)
  static ::UnityEngine::TextCore::GlyphClassDefinitionType const Undefined;

  /// @brief Field Base value: static_cast<int32_t>(0x1)
  static ::UnityEngine::TextCore::GlyphClassDefinitionType const Base;

  /// @brief Field Ligature value: static_cast<int32_t>(0x2)
  static ::UnityEngine::TextCore::GlyphClassDefinitionType const Ligature;

  /// @brief Field Mark value: static_cast<int32_t>(0x3)
  static ::UnityEngine::TextCore::GlyphClassDefinitionType const Mark;

  /// @brief Field Component value: static_cast<int32_t>(0x4)
  static ::UnityEngine::TextCore::GlyphClassDefinitionType const Component;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::GlyphClassDefinitionType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::GlyphClassDefinitionType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::TextCore
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::GlyphClassDefinitionType, "UnityEngine.TextCore", "GlyphClassDefinitionType");
