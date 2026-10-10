#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/TextColorGradient.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__ColorGradientMode_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(TextColorGradient)
namespace System {
struct IntPtr;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
class TextColorGradient;
}
// Write type traits
MARK_REF_T(::UnityEngine::TextCore::Text::TextColorGradient*);
DEFINE_IL2CPP_CLASS(::UnityEngine::TextCore::Text::TextColorGradient*, "UnityEngine.TextCore.Text", "TextColorGradient");
// [ExcludeFromObjectFactory]
// [ExcludeFromPreset]
// [NativeHeader("Modules/TextCoreTextEngine/TextColorGradient.h")]
// Dependencies System.IntPtr, UnityEngine.Color, UnityEngine.ScriptableObject, UnityEngine.TextCore.Text.ColorGradientMode
namespace UnityEngine::TextCore::Text {
// Is value type: false
// CS Name: UnityEngine.TextCore.Text.TextColorGradient
class CORDL_TYPE TextColorGradient : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief Field bottomLeft, offset 0x3c, size 0x10
  __declspec(property(get = __cordl_internal_get_bottomLeft, put = __cordl_internal_set_bottomLeft)) ::UnityEngine::Color bottomLeft;

  /// @brief Field bottomRight, offset 0x4c, size 0x10
  __declspec(property(get = __cordl_internal_get_bottomRight, put = __cordl_internal_set_bottomRight)) ::UnityEngine::Color bottomRight;

  /// @brief Field colorMode, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_colorMode, put = __cordl_internal_set_colorMode)) ::UnityEngine::TextCore::Text::ColorGradientMode colorMode;

  /// @brief Field k_DefaultColor, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_k_DefaultColor, put = setStaticF_k_DefaultColor)) ::UnityEngine::Color k_DefaultColor;

  /// @brief Field m_NativeInstance, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_NativeInstance, put = __cordl_internal_set_m_NativeInstance)) ::System::IntPtr m_NativeInstance;

  /// @brief [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
  __declspec(property(get = get_nativeInstance)) ::System::IntPtr nativeInstance;

  /// @brief Field topLeft, offset 0x1c, size 0x10
  __declspec(property(get = __cordl_internal_get_topLeft, put = __cordl_internal_set_topLeft)) ::UnityEngine::Color topLeft;

  /// @brief Field topRight, offset 0x2c, size 0x10
  __declspec(property(get = __cordl_internal_get_topRight, put = __cordl_internal_set_topRight)) ::UnityEngine::Color topRight;

  /// @brief Method CreateNative, addr 0x70548c8, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::IntPtr CreateNative(::UnityEngine::Color32 tl, ::UnityEngine::Color32 tr, ::UnityEngine::Color32 bl, ::UnityEngine::Color32 br, ::System::IntPtr managedObject);

  /// @brief Method CreateNative_Injected, addr 0x7054bbc, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::IntPtr CreateNative_Injected(::by_ref<::UnityEngine::Color32 const> tl, ::by_ref<::UnityEngine::Color32 const> tr, ::by_ref<::UnityEngine::Color32 const> bl,
                                                       ::by_ref<::UnityEngine::Color32 const> br, ::System::IntPtr managedObject);

  /// @brief Method DestroyNative, addr 0x7054794, size 0x44, virtual false, abstract: false, final false
  static inline void DestroyNative(::System::IntPtr nativeInstance, ::System::IntPtr managedObject);

  /// @brief Method MarkNativeDirty, addr 0x705460c, size 0xdc, virtual false, abstract: false, final false
  inline void MarkNativeDirty();

  static inline ::UnityEngine::TextCore::Text::TextColorGradient* New_ctor();

  static inline ::UnityEngine::TextCore::Text::TextColorGradient* New_ctor(::UnityEngine::Color color);

  static inline ::UnityEngine::TextCore::Text::TextColorGradient* New_ctor(::UnityEngine::Color color0, ::UnityEngine::Color color1, ::UnityEngine::Color color2, ::UnityEngine::Color color3);

  /// @brief Method OnDisable, addr 0x70546e8, size 0xac, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnValidate, addr 0x7054608, size 0x4, virtual false, abstract: false, final false
  inline void OnValidate();

  /// @brief Method UpdateNative, addr 0x7054b20, size 0x9c, virtual false, abstract: false, final false
  static inline void UpdateNative(::System::IntPtr instance, ::UnityEngine::Color32 tl, ::UnityEngine::Color32 tr, ::UnityEngine::Color32 bl, ::UnityEngine::Color32 br);

  /// @brief Method UpdateNative_Injected, addr 0x7054c28, size 0x6c, virtual false, abstract: false, final false
  static inline void UpdateNative_Injected(::System::IntPtr instance, ::by_ref<::UnityEngine::Color32 const> tl, ::by_ref<::UnityEngine::Color32 const> tr, ::by_ref<::UnityEngine::Color32 const> bl,
                                           ::by_ref<::UnityEngine::Color32 const> br);

  constexpr ::UnityEngine::Color const& __cordl_internal_get_bottomLeft() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_bottomLeft();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_bottomRight() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_bottomRight();

  constexpr ::UnityEngine::TextCore::Text::ColorGradientMode const& __cordl_internal_get_colorMode() const;

  constexpr ::UnityEngine::TextCore::Text::ColorGradientMode& __cordl_internal_get_colorMode();

  constexpr ::System::IntPtr const& __cordl_internal_get_m_NativeInstance() const;

  constexpr ::System::IntPtr& __cordl_internal_get_m_NativeInstance();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_topLeft() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_topLeft();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_topRight() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_topRight();

  constexpr void __cordl_internal_set_bottomLeft(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_bottomRight(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_colorMode(::UnityEngine::TextCore::Text::ColorGradientMode value);

  constexpr void __cordl_internal_set_m_NativeInstance(::System::IntPtr value);

  constexpr void __cordl_internal_set_topLeft(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_topRight(::UnityEngine::Color value);

  /// @brief Method .ctor, addr 0x7054964, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x7054a08, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Color color);

  /// @brief Method .ctor, addr 0x7054a78, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Color color0, ::UnityEngine::Color color1, ::UnityEngine::Color color2, ::UnityEngine::Color color3);

  static inline ::UnityEngine::Color getStaticF_k_DefaultColor();

  /// @brief Method get_nativeInstance, addr 0x70547d8, size 0xf0, virtual false, abstract: false, final false
  inline ::System::IntPtr get_nativeInstance();

  static inline void setStaticF_k_DefaultColor(::UnityEngine::Color value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextColorGradient();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextColorGradient", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextColorGradient(TextColorGradient&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextColorGradient", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextColorGradient(TextColorGradient const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17831 };

  /// @brief Field k_DefaultColorMode value: I32(3)
  static ::UnityEngine::TextCore::Text::ColorGradientMode const k_DefaultColorMode;

  /// @brief Field colorMode, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::TextCore::Text::ColorGradientMode ___colorMode;

  /// @brief Field topLeft, offset: 0x1c, size: 0x10, def value: None
  ::UnityEngine::Color ___topLeft;

  /// @brief Field topRight, offset: 0x2c, size: 0x10, def value: None
  ::UnityEngine::Color ___topRight;

  /// @brief Field bottomLeft, offset: 0x3c, size: 0x10, def value: None
  ::UnityEngine::Color ___bottomLeft;

  /// @brief Field bottomRight, offset: 0x4c, size: 0x10, def value: None
  ::UnityEngine::Color ___bottomRight;

  /// @brief Field m_NativeInstance, offset: 0x60, size: 0x8, def value: None
  ::System::IntPtr ___m_NativeInstance;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::Text::TextColorGradient, ___colorMode) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextColorGradient, ___topLeft) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextColorGradient, ___topRight) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextColorGradient, ___bottomLeft) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextColorGradient, ___bottomRight) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextColorGradient, ___m_NativeInstance) == 0x60, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::TextCore::Text::TextColorGradient) == 0x68, "Size mismatch!");

} // namespace UnityEngine::TextCore::Text
