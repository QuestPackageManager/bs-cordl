#pragma once
// IWYU pragma private; include "UnityEngine/UI/DefaultControls.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DefaultControls)
namespace System {
class Type;
}
namespace UnityEngine::UI {
class DefaultControls_DefaultRuntimeFactory;
}
namespace UnityEngine::UI {
class DefaultControls_IFactoryControls;
}
namespace UnityEngine::UI {
struct DefaultControls_Resources;
}
namespace UnityEngine::UI {
class Selectable;
}
namespace UnityEngine::UI {
class Text;
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
namespace UnityEngine::UI {
class DefaultControls;
}
namespace UnityEngine::UI {
class DefaultControls_DefaultRuntimeFactory;
}
namespace UnityEngine::UI {
class DefaultControls_IFactoryControls;
}
namespace UnityEngine::UI {
struct DefaultControls_Resources;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UI::DefaultControls);
MARK_REF_PTR_T(::UnityEngine::UI::DefaultControls_DefaultRuntimeFactory);
MARK_REF_PTR_T(::UnityEngine::UI::DefaultControls_IFactoryControls);
MARK_VAL_T(::UnityEngine::UI::DefaultControls_Resources);
// Dependencies
namespace UnityEngine::UI {
// Is value type: false
// CS Name: UnityEngine.UI.DefaultControls/IFactoryControls
class CORDL_TYPE DefaultControls_IFactoryControls {
public:
  // Declarations
  /// @brief Method CreateGameObject, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> CreateGameObject(::StringW name, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> components);

  // Ctor Parameters [CppParam { name: "", ty: "DefaultControls_IFactoryControls", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultControls_IFactoryControls(DefaultControls_IFactoryControls const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15044 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UI
// Dependencies System.Object, UnityEngine.UI.DefaultControls::IFactoryControls
namespace UnityEngine::UI {
// Is value type: false
// CS Name: UnityEngine.UI.DefaultControls/DefaultRuntimeFactory
class CORDL_TYPE DefaultControls_DefaultRuntimeFactory : public ::System::Object {
public:
  // Declarations
  /// @brief Field Default, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Default, put = setStaticF_Default)) ::UnityEngine::UI::DefaultControls_IFactoryControls* Default;

  /// @brief Convert operator to "::UnityEngine::UI::DefaultControls_IFactoryControls"
  constexpr operator ::UnityEngine::UI::DefaultControls_IFactoryControls*() noexcept;

  /// @brief Method CreateGameObject, addr 0x4961c9c, size 0x6c, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::GameObject> CreateGameObject(::StringW name, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> components);

  static inline ::UnityEngine::UI::DefaultControls_DefaultRuntimeFactory* New_ctor();

  /// @brief Method .ctor, addr 0x4961d08, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UI::DefaultControls_IFactoryControls* getStaticF_Default();

  /// @brief Convert to "::UnityEngine::UI::DefaultControls_IFactoryControls"
  constexpr ::UnityEngine::UI::DefaultControls_IFactoryControls* i___UnityEngine__UI__DefaultControls_IFactoryControls() noexcept;

  static inline void setStaticF_Default(::UnityEngine::UI::DefaultControls_IFactoryControls* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultControls_DefaultRuntimeFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DefaultControls_DefaultRuntimeFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultControls_DefaultRuntimeFactory(DefaultControls_DefaultRuntimeFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultControls_DefaultRuntimeFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultControls_DefaultRuntimeFactory(DefaultControls_DefaultRuntimeFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15045 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::DefaultControls_DefaultRuntimeFactory, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UI
// Dependencies
namespace UnityEngine::UI {
// Is value type: true
// CS Name: UnityEngine.UI.DefaultControls/Resources
struct CORDL_TYPE DefaultControls_Resources {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultControls_Resources();

  // Ctor Parameters [CppParam { name: "standard", ty: "::UnityW<::UnityEngine::Sprite>", modifiers: "", def_value: None }, CppParam { name: "background", ty: "::UnityW<::UnityEngine::Sprite>",
  // modifiers: "", def_value: None }, CppParam { name: "inputField", ty: "::UnityW<::UnityEngine::Sprite>", modifiers: "", def_value: None }, CppParam { name: "knob", ty:
  // "::UnityW<::UnityEngine::Sprite>", modifiers: "", def_value: None }, CppParam { name: "checkmark", ty: "::UnityW<::UnityEngine::Sprite>", modifiers: "", def_value: None }, CppParam { name:
  // "dropdown", ty: "::UnityW<::UnityEngine::Sprite>", modifiers: "", def_value: None }, CppParam { name: "mask", ty: "::UnityW<::UnityEngine::Sprite>", modifiers: "", def_value: None }]
  constexpr DefaultControls_Resources(::UnityW<::UnityEngine::Sprite> standard, ::UnityW<::UnityEngine::Sprite> background, ::UnityW<::UnityEngine::Sprite> inputField,
                                      ::UnityW<::UnityEngine::Sprite> knob, ::UnityW<::UnityEngine::Sprite> checkmark, ::UnityW<::UnityEngine::Sprite> dropdown,
                                      ::UnityW<::UnityEngine::Sprite> mask) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15046 };

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
static_assert(offsetof(::UnityEngine::UI::DefaultControls_Resources, standard) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::DefaultControls_Resources, background) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::DefaultControls_Resources, inputField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::DefaultControls_Resources, knob) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::DefaultControls_Resources, checkmark) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::DefaultControls_Resources, dropdown) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::DefaultControls_Resources, mask) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::DefaultControls_Resources, 0x38>, "Size mismatch!");

} // namespace UnityEngine::UI
// Dependencies System.Object, UnityEngine.Color, UnityEngine.Vector2
namespace UnityEngine::UI {
// Is value type: false
// CS Name: UnityEngine.UI.DefaultControls
class CORDL_TYPE DefaultControls : public ::System::Object {
public:
  // Declarations
  using DefaultRuntimeFactory = ::UnityEngine::UI::DefaultControls_DefaultRuntimeFactory;

  using IFactoryControls = ::UnityEngine::UI::DefaultControls_IFactoryControls;

  using Resources = ::UnityEngine::UI::DefaultControls_Resources;

  /// @brief Field m_CurrentFactory, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_CurrentFactory, put = setStaticF_m_CurrentFactory)) ::UnityEngine::UI::DefaultControls_IFactoryControls* m_CurrentFactory;

  /// @brief Field s_DefaultSelectableColor, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_s_DefaultSelectableColor, put = setStaticF_s_DefaultSelectableColor)) ::UnityEngine::Color s_DefaultSelectableColor;

  /// @brief Field s_ImageElementSize, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_ImageElementSize, put = setStaticF_s_ImageElementSize)) ::UnityEngine::Vector2 s_ImageElementSize;

  /// @brief Field s_PanelColor, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_s_PanelColor, put = setStaticF_s_PanelColor)) ::UnityEngine::Color s_PanelColor;

  /// @brief Field s_TextColor, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_s_TextColor, put = setStaticF_s_TextColor)) ::UnityEngine::Color s_TextColor;

  /// @brief Field s_ThickElementSize, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_ThickElementSize, put = setStaticF_s_ThickElementSize)) ::UnityEngine::Vector2 s_ThickElementSize;

  /// @brief Field s_ThinElementSize, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_ThinElementSize, put = setStaticF_s_ThinElementSize)) ::UnityEngine::Vector2 s_ThinElementSize;

  /// @brief Method CreateButton, addr 0x495dfd4, size 0x3ec, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::GameObject> CreateButton(::UnityEngine::UI::DefaultControls_Resources resources);

  /// @brief Method CreateDropdown, addr 0x495fea8, size 0x122c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::GameObject> CreateDropdown(::UnityEngine::UI::DefaultControls_Resources resources);

  /// @brief Method CreateImage, addr 0x495e560, size 0x13c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::GameObject> CreateImage(::UnityEngine::UI::DefaultControls_Resources resources);

  /// @brief Method CreateInputField, addr 0x495f884, size 0x624, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::GameObject> CreateInputField(::UnityEngine::UI::DefaultControls_Resources resources);

  /// @brief Method CreatePanel, addr 0x495d9e4, size 0x2bc, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::GameObject> CreatePanel(::UnityEngine::UI::DefaultControls_Resources resources);

  /// @brief Method CreateRawImage, addr 0x495e69c, size 0x13c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::GameObject> CreateRawImage(::UnityEngine::UI::DefaultControls_Resources resources);

  /// @brief Method CreateScrollView, addr 0x49612ec, size 0x8d8, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::GameObject> CreateScrollView(::UnityEngine::UI::DefaultControls_Resources resources);

  /// @brief Method CreateScrollbar, addr 0x495ee94, size 0x47c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::GameObject> CreateScrollbar(::UnityEngine::UI::DefaultControls_Resources resources);

  /// @brief Method CreateSlider, addr 0x495e7d8, size 0x6bc, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::GameObject> CreateSlider(::UnityEngine::UI::DefaultControls_Resources resources);

  /// @brief Method CreateText, addr 0x495e3c0, size 0x1a0, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::GameObject> CreateText(::UnityEngine::UI::DefaultControls_Resources resources);

  /// @brief Method CreateToggle, addr 0x495f310, size 0x574, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::GameObject> CreateToggle(::UnityEngine::UI::DefaultControls_Resources resources);

  /// @brief Method CreateUIElementRoot, addr 0x495d43c, size 0x160, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::GameObject> CreateUIElementRoot(::StringW name, ::UnityEngine::Vector2 size, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> components);

  /// @brief Method CreateUIObject, addr 0x495d59c, size 0x128, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::GameObject> CreateUIObject(::StringW name, ::UnityEngine::GameObject* parent, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> components);

  /// @brief Method SetDefaultColorTransitionValues, addr 0x495d8a0, size 0x60, virtual false, abstract: false, final false
  static inline void SetDefaultColorTransitionValues(::UnityEngine::UI::Selectable* slider);

  /// @brief Method SetDefaultTextValues, addr 0x495d7c4, size 0xdc, virtual false, abstract: false, final false
  static inline void SetDefaultTextValues(::UnityEngine::UI::Text* lbl);

  /// @brief Method SetLayerRecursively, addr 0x495d900, size 0xe4, virtual false, abstract: false, final false
  static inline void SetLayerRecursively(::UnityEngine::GameObject* go, int32_t layer);

  /// @brief Method SetParentAndAlign, addr 0x495d6c4, size 0x100, virtual false, abstract: false, final false
  static inline void SetParentAndAlign(::UnityEngine::GameObject* child, ::UnityEngine::GameObject* parent);

  static inline ::UnityEngine::UI::DefaultControls_IFactoryControls* getStaticF_m_CurrentFactory();

  static inline ::UnityEngine::Color getStaticF_s_DefaultSelectableColor();

  static inline ::UnityEngine::Vector2 getStaticF_s_ImageElementSize();

  static inline ::UnityEngine::Color getStaticF_s_PanelColor();

  static inline ::UnityEngine::Color getStaticF_s_TextColor();

  static inline ::UnityEngine::Vector2 getStaticF_s_ThickElementSize();

  static inline ::UnityEngine::Vector2 getStaticF_s_ThinElementSize();

  /// @brief Method get_factory, addr 0x495d3e4, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::UI::DefaultControls_IFactoryControls* get_factory();

  static inline void setStaticF_m_CurrentFactory(::UnityEngine::UI::DefaultControls_IFactoryControls* value);

  static inline void setStaticF_s_DefaultSelectableColor(::UnityEngine::Color value);

  static inline void setStaticF_s_ImageElementSize(::UnityEngine::Vector2 value);

  static inline void setStaticF_s_PanelColor(::UnityEngine::Color value);

  static inline void setStaticF_s_TextColor(::UnityEngine::Color value);

  static inline void setStaticF_s_ThickElementSize(::UnityEngine::Vector2 value);

  static inline void setStaticF_s_ThinElementSize(::UnityEngine::Vector2 value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultControls();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DefaultControls", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultControls(DefaultControls&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultControls", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultControls(DefaultControls const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15047 };

  /// @brief Field kThickHeight offset 0xffffffff size 0x4
  static constexpr float_t kThickHeight{ static_cast<float_t>(30.0f) };

  /// @brief Field kThinHeight offset 0xffffffff size 0x4
  static constexpr float_t kThinHeight{ static_cast<float_t>(20.0f) };

  /// @brief Field kWidth offset 0xffffffff size 0x4
  static constexpr float_t kWidth{ static_cast<float_t>(160.0f) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::DefaultControls, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::DefaultControls);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::DefaultControls*, "UnityEngine.UI", "DefaultControls");
NEED_NO_BOX(::UnityEngine::UI::DefaultControls_DefaultRuntimeFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::DefaultControls_DefaultRuntimeFactory*, "UnityEngine.UI", "DefaultControls/DefaultRuntimeFactory");
NEED_NO_BOX(::UnityEngine::UI::DefaultControls_IFactoryControls);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::DefaultControls_IFactoryControls*, "UnityEngine.UI", "DefaultControls/IFactoryControls");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::DefaultControls_Resources, "UnityEngine.UI", "DefaultControls/Resources");
