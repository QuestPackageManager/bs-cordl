#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/CommandType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CommandType)
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
struct CommandType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::UIR::CommandType);
// Dependencies
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// CS Name: UnityEngine.UIElements.UIR.CommandType
struct CORDL_TYPE CommandType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __CommandType_Unwrapped
  enum struct __CommandType_Unwrapped : int32_t {
    __E_Draw = static_cast<int32_t>(0x0),
    __E_ImmediateCull = static_cast<int32_t>(0x1),
    __E_Immediate = static_cast<int32_t>(0x2),
    __E_PushView = static_cast<int32_t>(0x3),
    __E_PopView = static_cast<int32_t>(0x4),
    __E_PushScissor = static_cast<int32_t>(0x5),
    __E_PopScissor = static_cast<int32_t>(0x6),
    __E_PushRenderTexture = static_cast<int32_t>(0x7),
    __E_PopRenderTexture = static_cast<int32_t>(0x8),
    __E_BlitToPreviousRT = static_cast<int32_t>(0x9),
    __E_PushDefaultMaterial = static_cast<int32_t>(0xa),
    __E_PopDefaultMaterial = static_cast<int32_t>(0xb),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __CommandType_Unwrapped() const noexcept {
    return static_cast<__CommandType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr CommandType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CommandType(int32_t value__) noexcept;

  /// @brief Field BlitToPreviousRT value: I32(9)
  static ::UnityEngine::UIElements::UIR::CommandType const BlitToPreviousRT;

  /// @brief Field Draw value: I32(0)
  static ::UnityEngine::UIElements::UIR::CommandType const Draw;

  /// @brief Field Immediate value: I32(2)
  static ::UnityEngine::UIElements::UIR::CommandType const Immediate;

  /// @brief Field ImmediateCull value: I32(1)
  static ::UnityEngine::UIElements::UIR::CommandType const ImmediateCull;

  /// @brief Field PopDefaultMaterial value: I32(11)
  static ::UnityEngine::UIElements::UIR::CommandType const PopDefaultMaterial;

  /// @brief Field PopRenderTexture value: I32(8)
  static ::UnityEngine::UIElements::UIR::CommandType const PopRenderTexture;

  /// @brief Field PopScissor value: I32(6)
  static ::UnityEngine::UIElements::UIR::CommandType const PopScissor;

  /// @brief Field PopView value: I32(4)
  static ::UnityEngine::UIElements::UIR::CommandType const PopView;

  /// @brief Field PushDefaultMaterial value: I32(10)
  static ::UnityEngine::UIElements::UIR::CommandType const PushDefaultMaterial;

  /// @brief Field PushRenderTexture value: I32(7)
  static ::UnityEngine::UIElements::UIR::CommandType const PushRenderTexture;

  /// @brief Field PushScissor value: I32(5)
  static ::UnityEngine::UIElements::UIR::CommandType const PushScissor;

  /// @brief Field PushView value: I32(3)
  static ::UnityEngine::UIElements::UIR::CommandType const PushView;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6432 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::CommandType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::CommandType, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::CommandType, "UnityEngine.UIElements.UIR", "CommandType");
