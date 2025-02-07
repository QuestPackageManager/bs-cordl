#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ColorPage.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color32_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ColorPage)
namespace UnityEngine::UIElements::UIR {
struct BMPAlloc;
}
namespace UnityEngine::UIElements::UIR {
class RenderChain;
}
namespace UnityEngine::UIElements {
struct MeshBuilderNative_NativeColorPage;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct ColorPage;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::ColorPage);
// Dependencies UnityEngine.Color32
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.ColorPage
struct CORDL_TYPE ColorPage {
public:
  // Declarations
  /// @brief Method Init, addr 0x4a4e3ac, size 0xcc, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::ColorPage Init(::UnityEngine::UIElements::UIR::RenderChain* renderChain, ::UnityEngine::UIElements::UIR::BMPAlloc alloc);

  /// @brief Method ToNativeColorPage, addr 0x4a4e478, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::MeshBuilderNative_NativeColorPage ToNativeColorPage();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorPage();

  // Ctor Parameters [CppParam { name: "isValid", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "pageAndID", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }]
  constexpr ColorPage(bool isValid, ::UnityEngine::Color32 pageAndID) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6033 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field isValid, offset: 0x0, size: 0x1, def value: None
  bool isValid;

  /// @brief Field pageAndID, offset: 0x4, size: 0x4, def value: None
  ::UnityEngine::Color32 pageAndID;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::ColorPage, isValid) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ColorPage, pageAndID) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ColorPage, 0x8>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ColorPage, "UnityEngine.UIElements", "ColorPage");
