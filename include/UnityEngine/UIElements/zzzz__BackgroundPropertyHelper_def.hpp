#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BackgroundPropertyHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BackgroundPropertyHelper)
namespace UnityEngine::UIElements {
struct BackgroundPosition;
}
namespace UnityEngine::UIElements {
struct BackgroundRepeat;
}
namespace UnityEngine::UIElements {
struct BackgroundSize;
}
namespace UnityEngine {
struct ScaleMode;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class BackgroundPropertyHelper;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::BackgroundPropertyHelper*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::BackgroundPropertyHelper*, "UnityEngine.UIElements", "BackgroundPropertyHelper");
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.BackgroundPropertyHelper
class CORDL_TYPE BackgroundPropertyHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method ConvertScaleModeToBackgroundPosition, addr 0x6c2be48, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::BackgroundPosition ConvertScaleModeToBackgroundPosition(::UnityEngine::ScaleMode scaleMode);

  /// @brief Method ConvertScaleModeToBackgroundRepeat, addr 0x6c2c324, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::BackgroundRepeat ConvertScaleModeToBackgroundRepeat(::UnityEngine::ScaleMode scaleMode);

  /// @brief Method ConvertScaleModeToBackgroundSize, addr 0x6c2c334, size 0x34, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::BackgroundSize ConvertScaleModeToBackgroundSize(::UnityEngine::ScaleMode scaleMode);

  /// @brief Method ResolveUnityBackgroundScaleMode, addr 0x6c2c388, size 0x230, virtual false, abstract: false, final false
  static inline ::UnityEngine::ScaleMode ResolveUnityBackgroundScaleMode(::UnityEngine::UIElements::BackgroundPosition backgroundPositionX,
                                                                         ::UnityEngine::UIElements::BackgroundPosition backgroundPositionY,
                                                                         ::UnityEngine::UIElements::BackgroundRepeat backgroundRepeat, ::UnityEngine::UIElements::BackgroundSize backgroundSize,
                                                                         ::by_ref<bool> valid);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BackgroundPropertyHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BackgroundPropertyHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BackgroundPropertyHelper(BackgroundPropertyHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BackgroundPropertyHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BackgroundPropertyHelper(BackgroundPropertyHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4007 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::BackgroundPropertyHelper) == 0x10, "Size mismatch!");

} // namespace UnityEngine::UIElements
