#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/CommandFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CommandFlags)
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
struct CommandFlags;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::UIR::CommandFlags);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::UIR::CommandFlags, "UnityEngine.UIElements.UIR", "CommandFlags");
// [Flags]
// Dependencies
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// CS Name: UnityEngine.UIElements.UIR.CommandFlags
struct CORDL_TYPE CommandFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __CommandFlags_Unwrapped
  enum struct __CommandFlags_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_IsPremultiplied = static_cast<int32_t>(0x1),
    __E_ForceRenderTypeBitOffset = static_cast<int32_t>(0x1),
    __E_ForceRenderTypeSolid = static_cast<int32_t>(0x2),
    __E_ForceRenderTypeTextured = static_cast<int32_t>(0x4),
    __E_ForceRenderTypeText = static_cast<int32_t>(0x6),
    __E_ForceRenderTypeSvgGradient = static_cast<int32_t>(0x8),
    __E_ForceRenderTypeBits = static_cast<int32_t>(0xe),
    __E_ForceSingleTextureSlot = static_cast<int32_t>(0x10),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __CommandFlags_Unwrapped() const noexcept {
    return static_cast<__CommandFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr CommandFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr CommandFlags(int32_t value__) noexcept;

  /// @brief Field ForceRenderTypeBitOffset value: I32(1)
  static ::UnityEngine::UIElements::UIR::CommandFlags const ForceRenderTypeBitOffset;

  /// @brief Field ForceRenderTypeBits value: I32(14)
  static ::UnityEngine::UIElements::UIR::CommandFlags const ForceRenderTypeBits;

  /// @brief Field ForceRenderTypeSolid value: I32(2)
  static ::UnityEngine::UIElements::UIR::CommandFlags const ForceRenderTypeSolid;

  /// @brief Field ForceRenderTypeSvgGradient value: I32(8)
  static ::UnityEngine::UIElements::UIR::CommandFlags const ForceRenderTypeSvgGradient;

  /// @brief Field ForceRenderTypeText value: I32(6)
  static ::UnityEngine::UIElements::UIR::CommandFlags const ForceRenderTypeText;

  /// @brief Field ForceRenderTypeTextured value: I32(4)
  static ::UnityEngine::UIElements::UIR::CommandFlags const ForceRenderTypeTextured;

  /// @brief Field ForceSingleTextureSlot value: I32(16)
  static ::UnityEngine::UIElements::UIR::CommandFlags const ForceSingleTextureSlot;

  /// @brief Field IsPremultiplied value: I32(1)
  static ::UnityEngine::UIElements::UIR::CommandFlags const IsPremultiplied;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::UIElements::UIR::CommandFlags const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5502 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::CommandFlags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::UIR::CommandFlags) == 0x4, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
