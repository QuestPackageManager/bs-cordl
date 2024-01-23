#pragma once
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
// Type: UnityEngine.UIElements.UIR::CommandType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7442))
// CS Name: ::UnityEngine.UIElements.UIR::CommandType
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CommandType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr CommandType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Draw value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UIElements::UIR::CommandType const Draw;

  /// @brief Field ImmediateCull value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UIElements::UIR::CommandType const ImmediateCull;

  /// @brief Field Immediate value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UIElements::UIR::CommandType const Immediate;

  /// @brief Field PushView value: static_cast<int32_t>(0x3)
  static ::UnityEngine::UIElements::UIR::CommandType const PushView;

  /// @brief Field PopView value: static_cast<int32_t>(0x4)
  static ::UnityEngine::UIElements::UIR::CommandType const PopView;

  /// @brief Field PushScissor value: static_cast<int32_t>(0x5)
  static ::UnityEngine::UIElements::UIR::CommandType const PushScissor;

  /// @brief Field PopScissor value: static_cast<int32_t>(0x6)
  static ::UnityEngine::UIElements::UIR::CommandType const PopScissor;

  /// @brief Field PushRenderTexture value: static_cast<int32_t>(0x7)
  static ::UnityEngine::UIElements::UIR::CommandType const PushRenderTexture;

  /// @brief Field PopRenderTexture value: static_cast<int32_t>(0x8)
  static ::UnityEngine::UIElements::UIR::CommandType const PopRenderTexture;

  /// @brief Field BlitToPreviousRT value: static_cast<int32_t>(0x9)
  static ::UnityEngine::UIElements::UIR::CommandType const BlitToPreviousRT;

  /// @brief Field PushDefaultMaterial value: static_cast<int32_t>(0xa)
  static ::UnityEngine::UIElements::UIR::CommandType const PushDefaultMaterial;

  /// @brief Field PopDefaultMaterial value: static_cast<int32_t>(0xb)
  static ::UnityEngine::UIElements::UIR::CommandType const PopDefaultMaterial;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::CommandType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::CommandType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::CommandType, "UnityEngine.UIElements.UIR", "CommandType");
