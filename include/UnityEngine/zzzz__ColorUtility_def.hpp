#pragma once
// IWYU pragma private; include "UnityEngine/ColorUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ColorUtility)
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
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
// [NativeHeader("Runtime/Math/ColorUtility.h")]
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ColorUtility
class CORDL_TYPE ColorUtility : public ::System::Object {
public:
  // Declarations
  /// [FreeFunction("TryParseHtmlColor", true)]
  /// @brief Method DoTryParseHtmlColor, addr 0x6f24494, size 0x140, virtual false, abstract: false, final false
  static inline bool DoTryParseHtmlColor(::StringW htmlString, ::by_ref<::UnityEngine::Color32> color);

  /// @brief Method DoTryParseHtmlColor_Injected, addr 0x6f245d4, size 0x44, virtual false, abstract: false, final false
  static inline bool DoTryParseHtmlColor_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> htmlString, ::by_ref<::UnityEngine::Color32> color);

  /// @brief Method HexDigitValue, addr 0x6f25768, size 0x38, virtual false, abstract: false, final false
  static inline int32_t HexDigitValue(char16_t c);

  /// @brief Method IsHexString, addr 0x6f253cc, size 0xe8, virtual false, abstract: false, final false
  static inline bool IsHexString(::System::ReadOnlySpan_1<char16_t> span);

  /// @brief Method ToHtmlStringRGB, addr 0x6f24ce8, size 0x24, virtual false, abstract: false, final false
  static inline ::StringW ToHtmlStringRGB(::UnityEngine::Color color);

  /// @brief Method ToHtmlStringRGB, addr 0x6f24d0c, size 0x348, virtual false, abstract: false, final false
  static inline ::StringW ToHtmlStringRGB(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Color> color);

  /// @brief Method TryHexToByte, addr 0x6f25670, size 0xf8, virtual false, abstract: false, final false
  static inline bool TryHexToByte(::System::ReadOnlySpan_1<char16_t> span, ::by_ref<uint8_t> result);

  /// @brief Method TryParseHexColor, addr 0x6f254b4, size 0x1bc, virtual false, abstract: false, final false
  static inline bool TryParseHexColor(::System::ReadOnlySpan_1<char16_t> hex, ::by_ref<::UnityEngine::Color> color);

  /// @brief Method TryParseHtmlString, addr 0x6f24c7c, size 0x6c, virtual false, abstract: false, final false
  static inline bool TryParseHtmlString(::StringW htmlString, ::by_ref<::UnityEngine::Color> color);

  /// [VisibleToOtherModules(new[] { "UnityEngine.TextCoreTextEngineModule" })]
  /// @brief Method TryParseHtmlString, addr 0x6f25054, size 0x378, virtual false, abstract: false, final false
  static inline bool TryParseHtmlString(::System::ReadOnlySpan_1<char16_t> input, ::by_ref<::UnityEngine::Color> color);

  /// @brief Method get_HtmlColorNames, addr 0x6f24844, size 0x438, virtual false, abstract: false, final false
  static inline ::System::ReadOnlySpan_1<::StringW> get_HtmlColorNames();

  /// @brief Method get_HtmlColorValues, addr 0x6f24618, size 0x22c, virtual false, abstract: false, final false
  static inline ::System::ReadOnlySpan_1<::UnityEngine::Color32> get_HtmlColorValues();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColorUtility", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorUtility(ColorUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorUtility", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorUtility(ColorUtility const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9834 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::ColorUtility) == 0x10, "Size mismatch!");

} // namespace UnityEngine
