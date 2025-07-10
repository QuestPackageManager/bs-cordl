#pragma once
// IWYU pragma private; include "TMPro/TMP_DefaultControls.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_DefaultControls)
namespace TMPro {
struct TMP_DefaultControls_Resources;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine::UI {
class Selectable;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace TMPro {
class TMP_DefaultControls;
}
namespace TMPro {
struct TMP_DefaultControls_Resources;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::TMP_DefaultControls);
MARK_VAL_T(::TMPro::TMP_DefaultControls_Resources);
// Dependencies
namespace TMPro {
// Is value type: true
// CS Name: TMPro.TMP_DefaultControls/Resources
struct CORDL_TYPE TMP_DefaultControls_Resources {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_DefaultControls_Resources();

  // Ctor Parameters [CppParam { name: "standard", ty: "::UnityW<::UnityEngine::Sprite>", modifiers: "", def_value: None }, CppParam { name: "background", ty: "::UnityW<::UnityEngine::Sprite>",
  // modifiers: "", def_value: None }, CppParam { name: "inputField", ty: "::UnityW<::UnityEngine::Sprite>", modifiers: "", def_value: None }, CppParam { name: "knob", ty:
  // "::UnityW<::UnityEngine::Sprite>", modifiers: "", def_value: None }, CppParam { name: "checkmark", ty: "::UnityW<::UnityEngine::Sprite>", modifiers: "", def_value: None }, CppParam { name:
  // "dropdown", ty: "::UnityW<::UnityEngine::Sprite>", modifiers: "", def_value: None }, CppParam { name: "mask", ty: "::UnityW<::UnityEngine::Sprite>", modifiers: "", def_value: None }]
  constexpr TMP_DefaultControls_Resources(::UnityW<::UnityEngine::Sprite> standard, ::UnityW<::UnityEngine::Sprite> background, ::UnityW<::UnityEngine::Sprite> inputField,
                                          ::UnityW<::UnityEngine::Sprite> knob, ::UnityW<::UnityEngine::Sprite> checkmark, ::UnityW<::UnityEngine::Sprite> dropdown,
                                          ::UnityW<::UnityEngine::Sprite> mask) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14467 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field standard, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> standard;

  /// @brief Field background, offset: 0x8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> background;

  /// @brief Field inputField, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> inputField;

  /// @brief Field knob, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> knob;

  /// @brief Field checkmark, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> checkmark;

  /// @brief Field dropdown, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> dropdown;

  /// @brief Field mask, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> mask;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::TMPro::TMP_DefaultControls_Resources, standard) == 0x0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_DefaultControls_Resources, background) == 0x8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_DefaultControls_Resources, inputField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_DefaultControls_Resources, knob) == 0x18, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_DefaultControls_Resources, checkmark) == 0x20, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_DefaultControls_Resources, dropdown) == 0x28, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_DefaultControls_Resources, mask) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::TMP_DefaultControls_Resources, 0x38>, "Size mismatch!");

} // namespace TMPro
// Dependencies System.Object, UnityEngine.Color, UnityEngine.Vector2
namespace TMPro {
// Is value type: false
// CS Name: TMPro.TMP_DefaultControls
class CORDL_TYPE TMP_DefaultControls : public ::System::Object {
public:
  // Declarations
  using Resources = ::TMPro::TMP_DefaultControls_Resources;

  /// @brief Field s_DefaultSelectableColor, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_s_DefaultSelectableColor, put = setStaticF_s_DefaultSelectableColor)) ::UnityEngine::Color s_DefaultSelectableColor;

  /// @brief Field s_TextColor, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_s_TextColor, put = setStaticF_s_TextColor)) ::UnityEngine::Color s_TextColor;

  /// @brief Field s_TextElementSize, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_TextElementSize, put = setStaticF_s_TextElementSize)) ::UnityEngine::Vector2 s_TextElementSize;

  /// @brief Field s_ThickElementSize, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_ThickElementSize, put = setStaticF_s_ThickElementSize)) ::UnityEngine::Vector2 s_ThickElementSize;

  /// @brief Field s_ThinElementSize, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_ThinElementSize, put = setStaticF_s_ThinElementSize)) ::UnityEngine::Vector2 s_ThinElementSize;

  /// @brief Method CreateButton, addr 0x47c7104, size 0x2c0, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::GameObject> CreateButton(::TMPro::TMP_DefaultControls_Resources resources);

  /// @brief Method CreateDropdown, addr 0x47c7c68, size 0xde0, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::GameObject> CreateDropdown(::TMPro::TMP_DefaultControls_Resources resources);

  /// @brief Method CreateInputField, addr 0x47c7464, size 0x660, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::GameObject> CreateInputField(::TMPro::TMP_DefaultControls_Resources resources);

  /// @brief Method CreateScrollbar, addr 0x47c6e38, size 0x2cc, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::GameObject> CreateScrollbar(::TMPro::TMP_DefaultControls_Resources resources);

  /// @brief Method CreateText, addr 0x47c73c4, size 0xa0, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::GameObject> CreateText(::TMPro::TMP_DefaultControls_Resources resources);

  /// @brief Method CreateUIElementRoot, addr 0x47c6a04, size 0xa8, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::GameObject> CreateUIElementRoot(::StringW name, ::UnityEngine::Vector2 size);

  /// @brief Method CreateUIObject, addr 0x47c6aac, size 0xc0, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::GameObject> CreateUIObject(::StringW name, ::UnityEngine::GameObject* parent);

  /// @brief Method SetDefaultColorTransitionValues, addr 0x47c6cf4, size 0x60, virtual false, abstract: false, final false
  static inline void SetDefaultColorTransitionValues(::UnityEngine::UI::Selectable* slider);

  /// @brief Method SetDefaultTextValues, addr 0x47c6c6c, size 0x88, virtual false, abstract: false, final false
  static inline void SetDefaultTextValues(::TMPro::TMP_Text* lbl);

  /// @brief Method SetLayerRecursively, addr 0x47c6d54, size 0xe4, virtual false, abstract: false, final false
  static inline void SetLayerRecursively(::UnityEngine::GameObject* go, int32_t layer);

  /// @brief Method SetParentAndAlign, addr 0x47c6b6c, size 0x100, virtual false, abstract: false, final false
  static inline void SetParentAndAlign(::UnityEngine::GameObject* child, ::UnityEngine::GameObject* parent);

  static inline ::UnityEngine::Color getStaticF_s_DefaultSelectableColor();

  static inline ::UnityEngine::Color getStaticF_s_TextColor();

  static inline ::UnityEngine::Vector2 getStaticF_s_TextElementSize();

  static inline ::UnityEngine::Vector2 getStaticF_s_ThickElementSize();

  static inline ::UnityEngine::Vector2 getStaticF_s_ThinElementSize();

  static inline void setStaticF_s_DefaultSelectableColor(::UnityEngine::Color value);

  static inline void setStaticF_s_TextColor(::UnityEngine::Color value);

  static inline void setStaticF_s_TextElementSize(::UnityEngine::Vector2 value);

  static inline void setStaticF_s_ThickElementSize(::UnityEngine::Vector2 value);

  static inline void setStaticF_s_ThinElementSize(::UnityEngine::Vector2 value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_DefaultControls();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TMP_DefaultControls", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_DefaultControls(TMP_DefaultControls&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_DefaultControls", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_DefaultControls(TMP_DefaultControls const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14468 };

  /// @brief Field kThickHeight offset 0xffffffff size 0x4
  static constexpr float_t kThickHeight{ static_cast<float_t>(30.0f) };

  /// @brief Field kThinHeight offset 0xffffffff size 0x4
  static constexpr float_t kThinHeight{ static_cast<float_t>(20.0f) };

  /// @brief Field kWidth offset 0xffffffff size 0x4
  static constexpr float_t kWidth{ static_cast<float_t>(160.0f) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_DefaultControls, 0x10>, "Size mismatch!");

} // namespace TMPro
NEED_NO_BOX(::TMPro::TMP_DefaultControls);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_DefaultControls*, "TMPro", "TMP_DefaultControls");
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_DefaultControls_Resources, "TMPro", "TMP_DefaultControls/Resources");
