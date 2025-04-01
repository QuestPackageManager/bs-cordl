#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/SelectMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SelectMode)
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct SelectMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ProBuilder::SelectMode);
// Dependencies
namespace UnityEngine::ProBuilder {
// Is value type: true
// CS Name: UnityEngine.ProBuilder.SelectMode
struct CORDL_TYPE SelectMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SelectMode_Unwrapped
  enum struct __SelectMode_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Object = static_cast<int32_t>(0x1),
    __E_Vertex = static_cast<int32_t>(0x2),
    __E_Edge = static_cast<int32_t>(0x4),
    __E_Face = static_cast<int32_t>(0x8),
    __E_TextureFace = static_cast<int32_t>(0x10),
    __E_TextureEdge = static_cast<int32_t>(0x20),
    __E_TextureVertex = static_cast<int32_t>(0x40),
    __E_InputTool = static_cast<int32_t>(0x80),
    __E_Any = static_cast<int32_t>(0xffff),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SelectMode_Unwrapped() const noexcept {
    return static_cast<__SelectMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr SelectMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SelectMode(int32_t value__) noexcept;

  /// @brief Field Any value: I32(65535)
  static ::UnityEngine::ProBuilder::SelectMode const Any;

  /// @brief Field Edge value: I32(4)
  static ::UnityEngine::ProBuilder::SelectMode const Edge;

  /// @brief Field Face value: I32(8)
  static ::UnityEngine::ProBuilder::SelectMode const Face;

  /// @brief Field InputTool value: I32(128)
  static ::UnityEngine::ProBuilder::SelectMode const InputTool;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::ProBuilder::SelectMode const None;

  /// @brief Field Object value: I32(1)
  static ::UnityEngine::ProBuilder::SelectMode const Object;

  /// @brief Field TextureEdge value: I32(32)
  static ::UnityEngine::ProBuilder::SelectMode const TextureEdge;

  /// @brief Field TextureFace value: I32(16)
  static ::UnityEngine::ProBuilder::SelectMode const TextureFace;

  /// @brief Field TextureVertex value: I32(64)
  static ::UnityEngine::ProBuilder::SelectMode const TextureVertex;

  /// @brief Field Vertex value: I32(2)
  static ::UnityEngine::ProBuilder::SelectMode const Vertex;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14269 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::SelectMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::SelectMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::SelectMode, "UnityEngine.ProBuilder", "SelectMode");
