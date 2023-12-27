#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderChainTextEntry)
namespace UnityEngine::UIElements::UIR {
class RenderChainCommand;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
struct RenderChainTextEntry;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::UIR::RenderChainTextEntry);
// Type: UnityEngine.UIElements.UIR::RenderChainTextEntry
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7397))
// CS Name: ::UnityEngine.UIElements.UIR::RenderChainTextEntry
struct CORDL_TYPE RenderChainTextEntry {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "command", ty: "::UnityEngine::UIElements::UIR::RenderChainCommand*", modifiers: "", def_value: None }, CppParam { name: "firstVertex", ty: "int32_t", modifiers:
  // "", def_value: None }, CppParam { name: "vertexCount", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RenderChainTextEntry(::UnityEngine::UIElements::UIR::RenderChainCommand* command, int32_t firstVertex, int32_t vertexCount) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderChainTextEntry();

  /// @brief Field command, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::RenderChainCommand* command;

  /// @brief Field firstVertex, offset: 0x8, size: 0x4, def value: None
  int32_t firstVertex;

  /// @brief Field vertexCount, offset: 0xc, size: 0x4, def value: None
  int32_t vertexCount;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::RenderChainTextEntry, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::RenderChainTextEntry, "UnityEngine.UIElements.UIR", "RenderChainTextEntry");
