#pragma once
// IWYU pragma private; include "UnityEngine\ColorUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ColorUtility)
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine {
class ColorUtility;
}
// Write type traits
MARK_REF_T(::UnityEngine::ColorUtility*);
DEFINE_IL2CPP_CLASS(::UnityEngine::ColorUtility*, "UnityEngine", "ColorUtility");
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ColorUtility
class CORDL_TYPE ColorUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Method DoTryParseHtmlColor, addr 0x6acba50, size 0x140, virtual false, abstract: false, final false
  static inline bool DoTryParseHtmlColor(::StringW htmlString, ::by_ref<::UnityEngine::Color32> color);

  /// @brief Method DoTryParseHtmlColor_Injected, addr 0x6acbb90, size 0x44, virtual false, abstract: false, final false
  static inline bool DoTryParseHtmlColor_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> htmlString, ::by_ref<::UnityEngine::Color32> color);

  /// @brief Method ToHtmlStringRGB, addr 0x6acbc40, size 0x3d4, virtual false, abstract: false, final false
  static inline ::StringW ToHtmlStringRGB(::UnityEngine::Color color);

  /// @brief Method TryParseHtmlString, addr 0x6acbbd4, size 0x6c, virtual false, abstract: false, final false
  static inline bool TryParseHtmlString(::StringW htmlString, ::by_ref<::UnityEngine::Color> color);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColorUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorUtility(ColorUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorUtility(ColorUtility const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10248 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::ColorUtility) == 0x10, "Size mismatch!");

} // namespace UnityEngine
