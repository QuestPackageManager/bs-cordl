#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DebugDisplaySettingsLighting.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugLightingFeatureFlags_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugLightingMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__HDRDebugMode_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugDisplaySettingsPanel_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugUI_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DebugDisplaySettingsLighting)
namespace System {
class Enum;
}
namespace UnityEngine::Rendering::Universal {
class DebugDisplaySettingsLighting_SettingsPanel;
}
namespace UnityEngine::Rendering::Universal {
class DebugDisplaySettingsLighting_Strings;
}
namespace UnityEngine::Rendering::Universal {
class DebugDisplaySettingsLighting_WidgetFactory;
}
namespace UnityEngine::Rendering::Universal {
struct DebugLightingFeatureFlags;
}
namespace UnityEngine::Rendering::Universal {
struct DebugLightingMode;
}
namespace UnityEngine::Rendering::Universal {
struct HDRDebugMode;
}
namespace UnityEngine::Rendering::Universal {
class WidgetFactory_DebugDisplaySettingsLighting___c__DisplayClass0_0;
}
namespace UnityEngine::Rendering::Universal {
class WidgetFactory_DebugDisplaySettingsLighting___c__DisplayClass1_0;
}
namespace UnityEngine::Rendering::Universal {
class WidgetFactory_DebugDisplaySettingsLighting___c__DisplayClass2_0;
}
namespace UnityEngine::Rendering {
class DebugUI_Widget;
}
namespace UnityEngine::Rendering {
class IDebugDisplaySettingsData;
}
namespace UnityEngine::Rendering {
class IDebugDisplaySettingsPanelDisposable;
}
namespace UnityEngine::Rendering {
class IDebugDisplaySettingsQuery;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class DebugDisplaySettingsLighting;
}
namespace UnityEngine::Rendering::Universal {
class DebugDisplaySettingsLighting_SettingsPanel;
}
namespace UnityEngine::Rendering::Universal {
class DebugDisplaySettingsLighting_Strings;
}
namespace UnityEngine::Rendering::Universal {
class DebugDisplaySettingsLighting_WidgetFactory;
}
namespace UnityEngine::Rendering::Universal {
class WidgetFactory_DebugDisplaySettingsLighting___c__DisplayClass0_0;
}
namespace UnityEngine::Rendering::Universal {
class WidgetFactory_DebugDisplaySettingsLighting___c__DisplayClass1_0;
}
namespace UnityEngine::Rendering::Universal {
class WidgetFactory_DebugDisplaySettingsLighting___c__DisplayClass2_0;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting_SettingsPanel);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting_Strings);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting_WidgetFactory);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsLighting___c__DisplayClass0_0);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsLighting___c__DisplayClass1_0);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsLighting___c__DisplayClass2_0);
// Dependencies System.Object, UnityEngine.Rendering.DebugUI::Widget::NameAndTooltip
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DebugDisplaySettingsLighting/Strings
class CORDL_TYPE DebugDisplaySettingsLighting_Strings : public ::System::Object {
public:
  // Declarations
  /// @brief Field HDRDebugMode, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_HDRDebugMode, put = setStaticF_HDRDebugMode)) ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip HDRDebugMode;

  /// @brief Field LightingDebugMode, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_LightingDebugMode, put = setStaticF_LightingDebugMode)) ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip LightingDebugMode;

  /// @brief Field LightingFeatures, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_LightingFeatures, put = setStaticF_LightingFeatures)) ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip LightingFeatures;

  static inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip getStaticF_HDRDebugMode();

  static inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip getStaticF_LightingDebugMode();

  static inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip getStaticF_LightingFeatures();

  static inline void setStaticF_HDRDebugMode(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value);

  static inline void setStaticF_LightingDebugMode(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value);

  static inline void setStaticF_LightingFeatures(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugDisplaySettingsLighting_Strings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsLighting_Strings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugDisplaySettingsLighting_Strings(DebugDisplaySettingsLighting_Strings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsLighting_Strings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugDisplaySettingsLighting_Strings(DebugDisplaySettingsLighting_Strings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12574 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting_Strings, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DebugDisplaySettingsLighting/WidgetFactory/<>c__DisplayClass0_0
class CORDL_TYPE WidgetFactory_DebugDisplaySettingsLighting___c__DisplayClass0_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field panel, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_panel, put = __cordl_internal_set_panel)) ::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting_SettingsPanel* panel;

  static inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsLighting___c__DisplayClass0_0* New_ctor();

  /// @brief Method <CreateLightingDebugMode>b__0, addr 0x66207ec, size 0x58, virtual false, abstract: false, final false
  inline int32_t _CreateLightingDebugMode_b__0();

  /// @brief Method <CreateLightingDebugMode>b__1, addr 0x6620844, size 0x64, virtual false, abstract: false, final false
  inline void _CreateLightingDebugMode_b__1(int32_t value);

  /// @brief Method <CreateLightingDebugMode>b__2, addr 0x66208a8, size 0x58, virtual false, abstract: false, final false
  inline int32_t _CreateLightingDebugMode_b__2();

  /// @brief Method <CreateLightingDebugMode>b__3, addr 0x6620900, size 0x64, virtual false, abstract: false, final false
  inline void _CreateLightingDebugMode_b__3(int32_t value);

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting_SettingsPanel* const& __cordl_internal_get_panel() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting_SettingsPanel*& __cordl_internal_get_panel();

  constexpr void __cordl_internal_set_panel(::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting_SettingsPanel* value);

  /// @brief Method .ctor, addr 0x6620298, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WidgetFactory_DebugDisplaySettingsLighting___c__DisplayClass0_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsLighting___c__DisplayClass0_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WidgetFactory_DebugDisplaySettingsLighting___c__DisplayClass0_0(WidgetFactory_DebugDisplaySettingsLighting___c__DisplayClass0_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsLighting___c__DisplayClass0_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WidgetFactory_DebugDisplaySettingsLighting___c__DisplayClass0_0(WidgetFactory_DebugDisplaySettingsLighting___c__DisplayClass0_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12575 };

  /// @brief Field panel, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting_SettingsPanel* ___panel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsLighting___c__DisplayClass0_0, ___panel) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsLighting___c__DisplayClass0_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DebugDisplaySettingsLighting/WidgetFactory/<>c__DisplayClass1_0
class CORDL_TYPE WidgetFactory_DebugDisplaySettingsLighting___c__DisplayClass1_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field panel, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_panel, put = __cordl_internal_set_panel)) ::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting_SettingsPanel* panel;

  static inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsLighting___c__DisplayClass1_0* New_ctor();

  /// @brief Method <CreateLightingFeatures>b__0, addr 0x6620964, size 0x88, virtual false, abstract: false, final false
  inline ::System::Enum* _CreateLightingFeatures_b__0();

  /// @brief Method <CreateLightingFeatures>b__1, addr 0x66209ec, size 0xa4, virtual false, abstract: false, final false
  inline void _CreateLightingFeatures_b__1(::System::Enum* value);

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting_SettingsPanel* const& __cordl_internal_get_panel() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting_SettingsPanel*& __cordl_internal_get_panel();

  constexpr void __cordl_internal_set_panel(::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting_SettingsPanel* value);

  /// @brief Method .ctor, addr 0x66204b0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WidgetFactory_DebugDisplaySettingsLighting___c__DisplayClass1_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsLighting___c__DisplayClass1_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WidgetFactory_DebugDisplaySettingsLighting___c__DisplayClass1_0(WidgetFactory_DebugDisplaySettingsLighting___c__DisplayClass1_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsLighting___c__DisplayClass1_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WidgetFactory_DebugDisplaySettingsLighting___c__DisplayClass1_0(WidgetFactory_DebugDisplaySettingsLighting___c__DisplayClass1_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12576 };

  /// @brief Field panel, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting_SettingsPanel* ___panel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsLighting___c__DisplayClass1_0, ___panel) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsLighting___c__DisplayClass1_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DebugDisplaySettingsLighting/WidgetFactory/<>c__DisplayClass2_0
class CORDL_TYPE WidgetFactory_DebugDisplaySettingsLighting___c__DisplayClass2_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field panel, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_panel, put = __cordl_internal_set_panel)) ::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting_SettingsPanel* panel;

  static inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsLighting___c__DisplayClass2_0* New_ctor();

  /// @brief Method <CreateHDRDebugMode>b__0, addr 0x6620a90, size 0x58, virtual false, abstract: false, final false
  inline int32_t _CreateHDRDebugMode_b__0();

  /// @brief Method <CreateHDRDebugMode>b__1, addr 0x6620ae8, size 0x64, virtual false, abstract: false, final false
  inline void _CreateHDRDebugMode_b__1(int32_t value);

  /// @brief Method <CreateHDRDebugMode>b__2, addr 0x6620b4c, size 0x58, virtual false, abstract: false, final false
  inline int32_t _CreateHDRDebugMode_b__2();

  /// @brief Method <CreateHDRDebugMode>b__3, addr 0x6620ba4, size 0x64, virtual false, abstract: false, final false
  inline void _CreateHDRDebugMode_b__3(int32_t value);

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting_SettingsPanel* const& __cordl_internal_get_panel() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting_SettingsPanel*& __cordl_internal_get_panel();

  constexpr void __cordl_internal_set_panel(::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting_SettingsPanel* value);

  /// @brief Method .ctor, addr 0x66207e8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WidgetFactory_DebugDisplaySettingsLighting___c__DisplayClass2_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsLighting___c__DisplayClass2_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WidgetFactory_DebugDisplaySettingsLighting___c__DisplayClass2_0(WidgetFactory_DebugDisplaySettingsLighting___c__DisplayClass2_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsLighting___c__DisplayClass2_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WidgetFactory_DebugDisplaySettingsLighting___c__DisplayClass2_0(WidgetFactory_DebugDisplaySettingsLighting___c__DisplayClass2_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12577 };

  /// @brief Field panel, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting_SettingsPanel* ___panel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsLighting___c__DisplayClass2_0, ___panel) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsLighting___c__DisplayClass2_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DebugDisplaySettingsLighting/WidgetFactory
class CORDL_TYPE DebugDisplaySettingsLighting_WidgetFactory : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass0_0 = ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsLighting___c__DisplayClass0_0;

  using __c__DisplayClass1_0 = ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsLighting___c__DisplayClass1_0;

  using __c__DisplayClass2_0 = ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsLighting___c__DisplayClass2_0;

  /// @brief Method CreateHDRDebugMode, addr 0x66204b4, size 0x334, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::DebugUI_Widget* CreateHDRDebugMode(::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting_SettingsPanel* panel);

  /// @brief Method CreateLightingDebugMode, addr 0x661ff64, size 0x334, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::DebugUI_Widget* CreateLightingDebugMode(::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting_SettingsPanel* panel);

  /// @brief Method CreateLightingFeatures, addr 0x662029c, size 0x214, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::DebugUI_Widget* CreateLightingFeatures(::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting_SettingsPanel* panel);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugDisplaySettingsLighting_WidgetFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsLighting_WidgetFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugDisplaySettingsLighting_WidgetFactory(DebugDisplaySettingsLighting_WidgetFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsLighting_WidgetFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugDisplaySettingsLighting_WidgetFactory(DebugDisplaySettingsLighting_WidgetFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12578 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting_WidgetFactory, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies UnityEngine.Rendering.DebugDisplaySettingsPanel`1<T>
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DebugDisplaySettingsLighting/SettingsPanel
class CORDL_TYPE DebugDisplaySettingsLighting_SettingsPanel : public ::UnityEngine::Rendering::DebugDisplaySettingsPanel_1<::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting*> {
public:
  // Declarations
  static inline ::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting_SettingsPanel* New_ctor(::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting* data);

  /// @brief Method .ctor, addr 0x661fcd8, size 0x180, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting* data);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugDisplaySettingsLighting_SettingsPanel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsLighting_SettingsPanel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugDisplaySettingsLighting_SettingsPanel(DebugDisplaySettingsLighting_SettingsPanel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsLighting_SettingsPanel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugDisplaySettingsLighting_SettingsPanel(DebugDisplaySettingsLighting_SettingsPanel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12579 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting_SettingsPanel, 0x28>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object, UnityEngine.Rendering.Universal.DebugLightingFeatureFlags, UnityEngine.Rendering.Universal.DebugLightingMode, UnityEngine.Rendering.Universal.HDRDebugMode
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DebugDisplaySettingsLighting
class CORDL_TYPE DebugDisplaySettingsLighting : public ::System::Object {
public:
  // Declarations
  using SettingsPanel = ::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting_SettingsPanel;

  using Strings = ::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting_Strings;

  using WidgetFactory = ::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting_WidgetFactory;

  __declspec(property(get = get_AreAnySettingsActive)) bool AreAnySettingsActive;

  __declspec(property(get = get_IsLightingActive)) bool IsLightingActive;

  __declspec(property(get = get_IsPostProcessingAllowed)) bool IsPostProcessingAllowed;

  /// @brief Field <hdrDebugMode>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__hdrDebugMode_k__BackingField,
                      put = __cordl_internal_set__hdrDebugMode_k__BackingField)) ::UnityEngine::Rendering::Universal::HDRDebugMode _hdrDebugMode_k__BackingField;

  /// @brief Field <lightingDebugMode>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__lightingDebugMode_k__BackingField,
                      put = __cordl_internal_set__lightingDebugMode_k__BackingField)) ::UnityEngine::Rendering::Universal::DebugLightingMode _lightingDebugMode_k__BackingField;

  /// @brief Field <lightingFeatureFlags>k__BackingField, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__lightingFeatureFlags_k__BackingField,
                      put = __cordl_internal_set__lightingFeatureFlags_k__BackingField)) ::UnityEngine::Rendering::Universal::DebugLightingFeatureFlags _lightingFeatureFlags_k__BackingField;

  __declspec(property(get = get_hdrDebugMode, put = set_hdrDebugMode)) ::UnityEngine::Rendering::Universal::HDRDebugMode hdrDebugMode;

  __declspec(property(get = get_lightingDebugMode, put = set_lightingDebugMode)) ::UnityEngine::Rendering::Universal::DebugLightingMode lightingDebugMode;

  __declspec(property(get = get_lightingFeatureFlags, put = set_lightingFeatureFlags)) ::UnityEngine::Rendering::Universal::DebugLightingFeatureFlags lightingFeatureFlags;

  /// @brief Convert operator to "::UnityEngine::Rendering::IDebugDisplaySettingsData"
  constexpr operator ::UnityEngine::Rendering::IDebugDisplaySettingsData*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Rendering::IDebugDisplaySettingsQuery"
  constexpr operator ::UnityEngine::Rendering::IDebugDisplaySettingsQuery*() noexcept;

  static inline ::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting* New_ctor();

  /// @brief Method UnityEngine.Rendering.IDebugDisplaySettingsData.CreatePanel, addr 0x661fc7c, size 0x5c, virtual true, abstract: false, final true
  inline ::UnityEngine::Rendering::IDebugDisplaySettingsPanelDisposable* UnityEngine_Rendering_IDebugDisplaySettingsData_CreatePanel();

  constexpr ::UnityEngine::Rendering::Universal::HDRDebugMode const& __cordl_internal_get__hdrDebugMode_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::Universal::HDRDebugMode& __cordl_internal_get__hdrDebugMode_k__BackingField();

  constexpr ::UnityEngine::Rendering::Universal::DebugLightingMode const& __cordl_internal_get__lightingDebugMode_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugLightingMode& __cordl_internal_get__lightingDebugMode_k__BackingField();

  constexpr ::UnityEngine::Rendering::Universal::DebugLightingFeatureFlags const& __cordl_internal_get__lightingFeatureFlags_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugLightingFeatureFlags& __cordl_internal_get__lightingFeatureFlags_k__BackingField();

  constexpr void __cordl_internal_set__hdrDebugMode_k__BackingField(::UnityEngine::Rendering::Universal::HDRDebugMode value);

  constexpr void __cordl_internal_set__lightingDebugMode_k__BackingField(::UnityEngine::Rendering::Universal::DebugLightingMode value);

  constexpr void __cordl_internal_set__lightingFeatureFlags_k__BackingField(::UnityEngine::Rendering::Universal::DebugLightingFeatureFlags value);

  /// @brief Method .ctor, addr 0x661fe58, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AreAnySettingsActive, addr 0x661fc38, size 0x28, virtual true, abstract: false, final true
  inline bool get_AreAnySettingsActive();

  /// @brief Method get_IsLightingActive, addr 0x661fc74, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsLightingActive();

  /// @brief Method get_IsPostProcessingAllowed, addr 0x661fc60, size 0x14, virtual true, abstract: false, final true
  inline bool get_IsPostProcessingAllowed();

  /// @brief Method get_hdrDebugMode, addr 0x661fc28, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::HDRDebugMode get_hdrDebugMode();

  /// @brief Method get_lightingDebugMode, addr 0x661fc08, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::DebugLightingMode get_lightingDebugMode();

  /// @brief Method get_lightingFeatureFlags, addr 0x661fc18, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::DebugLightingFeatureFlags get_lightingFeatureFlags();

  /// @brief Convert to "::UnityEngine::Rendering::IDebugDisplaySettingsData"
  constexpr ::UnityEngine::Rendering::IDebugDisplaySettingsData* i___UnityEngine__Rendering__IDebugDisplaySettingsData() noexcept;

  /// @brief Convert to "::UnityEngine::Rendering::IDebugDisplaySettingsQuery"
  constexpr ::UnityEngine::Rendering::IDebugDisplaySettingsQuery* i___UnityEngine__Rendering__IDebugDisplaySettingsQuery() noexcept;

  /// @brief Method set_hdrDebugMode, addr 0x661fc30, size 0x8, virtual false, abstract: false, final false
  inline void set_hdrDebugMode(::UnityEngine::Rendering::Universal::HDRDebugMode value);

  /// @brief Method set_lightingDebugMode, addr 0x661fc10, size 0x8, virtual false, abstract: false, final false
  inline void set_lightingDebugMode(::UnityEngine::Rendering::Universal::DebugLightingMode value);

  /// @brief Method set_lightingFeatureFlags, addr 0x661fc20, size 0x8, virtual false, abstract: false, final false
  inline void set_lightingFeatureFlags(::UnityEngine::Rendering::Universal::DebugLightingFeatureFlags value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugDisplaySettingsLighting();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsLighting", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugDisplaySettingsLighting(DebugDisplaySettingsLighting&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsLighting", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugDisplaySettingsLighting(DebugDisplaySettingsLighting const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12580 };

  /// @brief Field <lightingDebugMode>k__BackingField, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::DebugLightingMode ____lightingDebugMode_k__BackingField;

  /// @brief Field <lightingFeatureFlags>k__BackingField, offset: 0x14, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::DebugLightingFeatureFlags ____lightingFeatureFlags_k__BackingField;

  /// @brief Field <hdrDebugMode>k__BackingField, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::HDRDebugMode ____hdrDebugMode_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting, ____lightingDebugMode_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting, ____lightingFeatureFlags_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting, ____hdrDebugMode_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting*, "UnityEngine.Rendering.Universal", "DebugDisplaySettingsLighting");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting_SettingsPanel);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting_SettingsPanel*, "UnityEngine.Rendering.Universal", "DebugDisplaySettingsLighting/SettingsPanel");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting_Strings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting_Strings*, "UnityEngine.Rendering.Universal", "DebugDisplaySettingsLighting/Strings");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting_WidgetFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting_WidgetFactory*, "UnityEngine.Rendering.Universal", "DebugDisplaySettingsLighting/WidgetFactory");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsLighting___c__DisplayClass0_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsLighting___c__DisplayClass0_0*, "UnityEngine.Rendering.Universal",
                       "DebugDisplaySettingsLighting/WidgetFactory/<>c__DisplayClass0_0");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsLighting___c__DisplayClass1_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsLighting___c__DisplayClass1_0*, "UnityEngine.Rendering.Universal",
                       "DebugDisplaySettingsLighting/WidgetFactory/<>c__DisplayClass1_0");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsLighting___c__DisplayClass2_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsLighting___c__DisplayClass2_0*, "UnityEngine.Rendering.Universal",
                       "DebugDisplaySettingsLighting/WidgetFactory/<>c__DisplayClass2_0");
