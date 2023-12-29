#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color32_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ColorPage)
namespace UnityEngine::UIElements::UIR {
class RenderChain;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine::UIElements::UIR {
struct BMPAlloc;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct ColorPage;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::ColorPage);
// Type: UnityEngine.UIElements::ColorPage
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10177))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7418))
// CS Name: ::UnityEngine.UIElements::ColorPage
struct CORDL_TYPE ColorPage {
public:
  // Declarations
  /// @brief Method Init addr 0x2d106c8 size 0x60 virtual false final false
  static inline ::UnityEngine::UIElements::ColorPage Init(::UnityEngine::UIElements::UIR::RenderChain* renderChain, ::UnityEngine::UIElements::UIR::BMPAlloc alloc);

  // Ctor Parameters [CppParam { name: "isValid", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "pageAndID", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }]
  constexpr ColorPage(bool isValid, ::UnityEngine::Color32 pageAndID) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorPage();

  /// @brief Field isValid, offset: 0x0, size: 0x1, def value: None
  bool isValid;

  /// @brief Field pageAndID, offset: 0x4, size: 0x4, def value: None
  ::UnityEngine::Color32 pageAndID;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ColorPage, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ColorPage, isValid) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ColorPage, pageAndID) == 0x4, "Offset mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ColorPage, "UnityEngine.UIElements", "ColorPage");
