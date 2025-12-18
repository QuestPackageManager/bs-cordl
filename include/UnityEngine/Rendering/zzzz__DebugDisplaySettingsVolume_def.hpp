#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DebugDisplaySettingsVolume.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugDisplaySettingsPanel_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugUI_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DebugDisplaySettingsVolume)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::Rendering {
class DebugDisplaySettingsVolume_SettingsPanel;
}
namespace UnityEngine::Rendering {
class DebugDisplaySettingsVolume_Strings;
}
namespace UnityEngine::Rendering {
class DebugDisplaySettingsVolume_Styles;
}
namespace UnityEngine::Rendering {
class DebugDisplaySettingsVolume_WidgetFactory;
}
namespace UnityEngine::Rendering {
class DebugUI_EnumField;
}
namespace UnityEngine::Rendering {
template <typename T> class DebugUI_Field_1;
}
namespace UnityEngine::Rendering {
class DebugUI_ObjectPopupField;
}
namespace UnityEngine::Rendering {
class DebugUI_Table;
}
namespace UnityEngine::Rendering {
class DebugUI_Value;
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
namespace UnityEngine::Rendering {
class IVolumeDebugSettings;
}
namespace UnityEngine::Rendering {
class VolumeComponent;
}
namespace UnityEngine::Rendering {
class VolumeParameter;
}
namespace UnityEngine::Rendering {
class VolumeProfile;
}
namespace UnityEngine::Rendering {
class Volume;
}
namespace UnityEngine::Rendering {
struct WidgetFactory_DebugDisplaySettingsVolume_VolumeParameterChain;
}
namespace UnityEngine::Rendering {
class WidgetFactory_DebugDisplaySettingsVolume___c;
}
namespace UnityEngine::Rendering {
class WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass0_0;
}
namespace UnityEngine::Rendering {
class WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass1_0;
}
namespace UnityEngine::Rendering {
class WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass7_0;
}
namespace UnityEngine::Rendering {
class WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_0;
}
namespace UnityEngine::Rendering {
class WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_1;
}
namespace UnityEngine {
class GUIContent;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class DebugDisplaySettingsVolume;
}
namespace UnityEngine::Rendering {
class DebugDisplaySettingsVolume_SettingsPanel;
}
namespace UnityEngine::Rendering {
class DebugDisplaySettingsVolume_Strings;
}
namespace UnityEngine::Rendering {
class DebugDisplaySettingsVolume_Styles;
}
namespace UnityEngine::Rendering {
class DebugDisplaySettingsVolume_WidgetFactory;
}
namespace UnityEngine::Rendering {
class WidgetFactory_DebugDisplaySettingsVolume___c;
}
namespace UnityEngine::Rendering {
class WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass0_0;
}
namespace UnityEngine::Rendering {
class WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass1_0;
}
namespace UnityEngine::Rendering {
class WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass7_0;
}
namespace UnityEngine::Rendering {
class WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_0;
}
namespace UnityEngine::Rendering {
class WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_1;
}
namespace UnityEngine::Rendering {
struct WidgetFactory_DebugDisplaySettingsVolume_VolumeParameterChain;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::DebugDisplaySettingsVolume);
MARK_REF_PTR_T(::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel);
MARK_REF_PTR_T(::UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings);
MARK_REF_PTR_T(::UnityEngine::Rendering::DebugDisplaySettingsVolume_Styles);
MARK_REF_PTR_T(::UnityEngine::Rendering::DebugDisplaySettingsVolume_WidgetFactory);
MARK_REF_PTR_T(::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c);
MARK_REF_PTR_T(::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass0_0);
MARK_REF_PTR_T(::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass1_0);
MARK_REF_PTR_T(::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass7_0);
MARK_REF_PTR_T(::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_0);
MARK_REF_PTR_T(::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_1);
MARK_VAL_T(::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume_VolumeParameterChain);
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugDisplaySettingsVolume/Styles
class CORDL_TYPE DebugDisplaySettingsVolume_Styles : public ::System::Object {
public:
  // Declarations
  /// @brief Field editorCamera, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_editorCamera, put = setStaticF_editorCamera)) ::UnityEngine::GUIContent* editorCamera;

  /// @brief Field none, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_none, put = setStaticF_none)) ::UnityEngine::GUIContent* none;

  static inline ::UnityEngine::GUIContent* getStaticF_editorCamera();

  static inline ::UnityEngine::GUIContent* getStaticF_none();

  static inline void setStaticF_editorCamera(::UnityEngine::GUIContent* value);

  static inline void setStaticF_none(::UnityEngine::GUIContent* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugDisplaySettingsVolume_Styles();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsVolume_Styles", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugDisplaySettingsVolume_Styles(DebugDisplaySettingsVolume_Styles&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsVolume_Styles", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugDisplaySettingsVolume_Styles(DebugDisplaySettingsVolume_Styles const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11932 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DebugDisplaySettingsVolume_Styles, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugDisplaySettingsVolume/Strings
class CORDL_TYPE DebugDisplaySettingsVolume_Strings : public ::System::Object {
public:
  // Declarations
  /// @brief Field camera, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_camera, put = setStaticF_camera)) ::StringW camera;

  /// @brief Field component, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_component, put = setStaticF_component)) ::StringW component;

  /// @brief Field debugViewNotSupported, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_debugViewNotSupported, put = setStaticF_debugViewNotSupported)) ::StringW debugViewNotSupported;

  /// @brief Field gameObject, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_gameObject, put = setStaticF_gameObject)) ::StringW gameObject;

  /// @brief Field global, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_global, put = setStaticF_global)) ::StringW global;

  /// @brief Field globalDefaultValue, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_globalDefaultValue, put = setStaticF_globalDefaultValue)) ::StringW globalDefaultValue;

  /// @brief Field globalDefaultValueTooltip, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_globalDefaultValueTooltip, put = setStaticF_globalDefaultValueTooltip)) ::StringW globalDefaultValueTooltip;

  /// @brief Field local, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_local, put = setStaticF_local)) ::StringW local;

  /// @brief Field none, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_none, put = setStaticF_none)) ::StringW none;

  /// @brief Field parameter, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_parameter, put = setStaticF_parameter)) ::StringW parameter;

  /// @brief Field parameterNotOverrided, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_parameterNotOverrided, put = setStaticF_parameterNotOverrided)) ::StringW parameterNotOverrided;

  /// @brief Field qualityLevelValue, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_qualityLevelValue, put = setStaticF_qualityLevelValue)) ::StringW qualityLevelValue;

  /// @brief Field qualityLevelValueTooltip, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_qualityLevelValueTooltip, put = setStaticF_qualityLevelValueTooltip)) ::StringW qualityLevelValueTooltip;

  /// @brief Field resultValue, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_resultValue, put = setStaticF_resultValue)) ::StringW resultValue;

  /// @brief Field resultValueTooltip, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_resultValueTooltip, put = setStaticF_resultValueTooltip)) ::StringW resultValueTooltip;

  /// @brief Field volumeInfo, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_volumeInfo, put = setStaticF_volumeInfo)) ::StringW volumeInfo;

  /// @brief Field volumeProfile, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_volumeProfile, put = setStaticF_volumeProfile)) ::StringW volumeProfile;

  static inline ::StringW getStaticF_camera();

  static inline ::StringW getStaticF_component();

  static inline ::StringW getStaticF_debugViewNotSupported();

  static inline ::StringW getStaticF_gameObject();

  static inline ::StringW getStaticF_global();

  static inline ::StringW getStaticF_globalDefaultValue();

  static inline ::StringW getStaticF_globalDefaultValueTooltip();

  static inline ::StringW getStaticF_local();

  static inline ::StringW getStaticF_none();

  static inline ::StringW getStaticF_parameter();

  static inline ::StringW getStaticF_parameterNotOverrided();

  static inline ::StringW getStaticF_qualityLevelValue();

  static inline ::StringW getStaticF_qualityLevelValueTooltip();

  static inline ::StringW getStaticF_resultValue();

  static inline ::StringW getStaticF_resultValueTooltip();

  static inline ::StringW getStaticF_volumeInfo();

  static inline ::StringW getStaticF_volumeProfile();

  static inline void setStaticF_camera(::StringW value);

  static inline void setStaticF_component(::StringW value);

  static inline void setStaticF_debugViewNotSupported(::StringW value);

  static inline void setStaticF_gameObject(::StringW value);

  static inline void setStaticF_global(::StringW value);

  static inline void setStaticF_globalDefaultValue(::StringW value);

  static inline void setStaticF_globalDefaultValueTooltip(::StringW value);

  static inline void setStaticF_local(::StringW value);

  static inline void setStaticF_none(::StringW value);

  static inline void setStaticF_parameter(::StringW value);

  static inline void setStaticF_parameterNotOverrided(::StringW value);

  static inline void setStaticF_qualityLevelValue(::StringW value);

  static inline void setStaticF_qualityLevelValueTooltip(::StringW value);

  static inline void setStaticF_resultValue(::StringW value);

  static inline void setStaticF_resultValueTooltip(::StringW value);

  static inline void setStaticF_volumeInfo(::StringW value);

  static inline void setStaticF_volumeProfile(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugDisplaySettingsVolume_Strings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsVolume_Strings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugDisplaySettingsVolume_Strings(DebugDisplaySettingsVolume_Strings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsVolume_Strings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugDisplaySettingsVolume_Strings(DebugDisplaySettingsVolume_Strings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11933 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies UnityEngine.Rendering.DebugUI::Widget::NameAndTooltip
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.DebugDisplaySettingsVolume/WidgetFactory/VolumeParameterChain
struct CORDL_TYPE WidgetFactory_DebugDisplaySettingsVolume_VolumeParameterChain {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr WidgetFactory_DebugDisplaySettingsVolume_VolumeParameterChain();

  // Ctor Parameters [CppParam { name: "nameAndTooltip", ty: "::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip", modifiers: "", def_value: None }, CppParam { name: "volumeProfile", ty:
  // "::UnityW<::UnityEngine::Rendering::VolumeProfile>", modifiers: "", def_value: None }, CppParam { name: "volumeComponent", ty: "::UnityW<::UnityEngine::Rendering::VolumeComponent>", modifiers:
  // "", def_value: None }, CppParam { name: "volume", ty: "::UnityW<::UnityEngine::Rendering::Volume>", modifiers: "", def_value: None }]
  constexpr WidgetFactory_DebugDisplaySettingsVolume_VolumeParameterChain(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip nameAndTooltip,
                                                                          ::UnityW<::UnityEngine::Rendering::VolumeProfile> volumeProfile,
                                                                          ::UnityW<::UnityEngine::Rendering::VolumeComponent> volumeComponent,
                                                                          ::UnityW<::UnityEngine::Rendering::Volume> volume) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11934 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field nameAndTooltip, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip nameAndTooltip;

  /// @brief Field volumeProfile, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::VolumeProfile> volumeProfile;

  /// @brief Field volumeComponent, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::VolumeComponent> volumeComponent;

  /// @brief Field volume, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::Volume> volume;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume_VolumeParameterChain, nameAndTooltip) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume_VolumeParameterChain, volumeProfile) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume_VolumeParameterChain, volumeComponent) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume_VolumeParameterChain, volume) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume_VolumeParameterChain, 0x28>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugDisplaySettingsVolume/WidgetFactory/<>c
class CORDL_TYPE WidgetFactory_DebugDisplaySettingsVolume___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c* __9;

  /// @brief Field <>9__9_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__9_2, put = setStaticF___9__9_2)) ::System::Func_1<::System::Object*>* __9__9_2;

  static inline ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c* New_ctor();

  /// @brief Method <GenerateTableColumns>b__9_2, addr 0x65a8ae8, size 0x14, virtual false, abstract: false, final false
  inline ::System::Object* _GenerateTableColumns_b__9_2();

  /// @brief Method <.cctor>b__11_0, addr 0x65a8afc, size 0x14, virtual false, abstract: false, final false
  inline ::System::Object* __cctor_b__11_0();

  /// @brief Method .ctor, addr 0x65a8ae4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c* getStaticF___9();

  static inline ::System::Func_1<::System::Object*>* getStaticF___9__9_2();

  static inline void setStaticF___9(::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c* value);

  static inline void setStaticF___9__9_2(::System::Func_1<::System::Object*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WidgetFactory_DebugDisplaySettingsVolume___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsVolume___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WidgetFactory_DebugDisplaySettingsVolume___c(WidgetFactory_DebugDisplaySettingsVolume___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsVolume___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WidgetFactory_DebugDisplaySettingsVolume___c(WidgetFactory_DebugDisplaySettingsVolume___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11935 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugDisplaySettingsVolume/WidgetFactory/<>c__DisplayClass0_0
class CORDL_TYPE WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass0_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field panel, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_panel, put = __cordl_internal_set_panel)) ::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel* panel;

  static inline ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass0_0* New_ctor();

  /// @brief Method <CreateComponentSelector>b__0, addr 0x65a8b10, size 0xc8, virtual false, abstract: false, final false
  inline int32_t _CreateComponentSelector_b__0();

  /// @brief Method <CreateComponentSelector>b__1, addr 0x65a8bd8, size 0xdc, virtual false, abstract: false, final false
  inline void _CreateComponentSelector_b__1(int32_t value);

  /// @brief Method <CreateComponentSelector>b__2, addr 0x65a8cb4, size 0x58, virtual false, abstract: false, final false
  inline int32_t _CreateComponentSelector_b__2();

  /// @brief Method <CreateComponentSelector>b__3, addr 0x65a8d0c, size 0x64, virtual false, abstract: false, final false
  inline void _CreateComponentSelector_b__3(int32_t value);

  constexpr ::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel* const& __cordl_internal_get_panel() const;

  constexpr ::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel*& __cordl_internal_get_panel();

  constexpr void __cordl_internal_set_panel(::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel* value);

  /// @brief Method .ctor, addr 0x65a63e8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass0_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass0_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass0_0(WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass0_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass0_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass0_0(WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass0_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11936 };

  /// @brief Field panel, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel* ___panel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass0_0, ___panel) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass0_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugDisplaySettingsVolume/WidgetFactory/<>c__DisplayClass1_0
class CORDL_TYPE WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass1_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field panel, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_panel, put = __cordl_internal_set_panel)) ::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel* panel;

  static inline ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass1_0* New_ctor();

  /// @brief Method <CreateCameraSelector>b__0, addr 0x65a8d70, size 0xcc, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Object> _CreateCameraSelector_b__0();

  /// @brief Method <CreateCameraSelector>b__1, addr 0x65a8e3c, size 0x1c8, virtual false, abstract: false, final false
  inline void _CreateCameraSelector_b__1(::UnityEngine::Object* value);

  /// @brief Method <CreateCameraSelector>b__2, addr 0x65a9004, size 0xcc, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Object>>* _CreateCameraSelector_b__2();

  constexpr ::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel* const& __cordl_internal_get_panel() const;

  constexpr ::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel*& __cordl_internal_get_panel();

  constexpr void __cordl_internal_set_panel(::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel* value);

  /// @brief Method .ctor, addr 0x65a699c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass1_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass1_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass1_0(WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass1_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass1_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass1_0(WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass1_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11937 };

  /// @brief Field panel, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel* ___panel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass1_0, ___panel) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass1_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugDisplaySettingsVolume/WidgetFactory/<>c__DisplayClass7_0
class CORDL_TYPE WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass7_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field data, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data)) ::UnityEngine::Rendering::DebugDisplaySettingsVolume* data;

  /// @brief Field refreshRate, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_refreshRate, put = __cordl_internal_set_refreshRate)) float_t refreshRate;

  /// @brief Field table, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_table, put = __cordl_internal_set_table)) ::UnityEngine::Rendering::DebugUI_Table* table;

  /// @brief Field timer, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_timer, put = __cordl_internal_set_timer)) float_t timer;

  /// @brief Field volumes, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_volumes,
                      put = __cordl_internal_set_volumes)) ::ArrayW<::UnityW<::UnityEngine::Rendering::Volume>, ::Array<::UnityW<::UnityEngine::Rendering::Volume>>*>
      volumes;

  static inline ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass7_0* New_ctor();

  /// @brief Method <CreateVolumeTable>b__0, addr 0x65a9188, size 0x274, virtual false, abstract: false, final false
  inline bool _CreateVolumeTable_b__0();

  /// @brief Method <CreateVolumeTable>b__1, addr 0x65a90d0, size 0xb8, virtual false, abstract: false, final false
  inline bool _CreateVolumeTable_b__1();

  constexpr ::UnityEngine::Rendering::DebugDisplaySettingsVolume* const& __cordl_internal_get_data() const;

  constexpr ::UnityEngine::Rendering::DebugDisplaySettingsVolume*& __cordl_internal_get_data();

  constexpr float_t const& __cordl_internal_get_refreshRate() const;

  constexpr float_t& __cordl_internal_get_refreshRate();

  constexpr ::UnityEngine::Rendering::DebugUI_Table* const& __cordl_internal_get_table() const;

  constexpr ::UnityEngine::Rendering::DebugUI_Table*& __cordl_internal_get_table();

  constexpr float_t const& __cordl_internal_get_timer() const;

  constexpr float_t& __cordl_internal_get_timer();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Rendering::Volume>, ::Array<::UnityW<::UnityEngine::Rendering::Volume>>*> const& __cordl_internal_get_volumes() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Rendering::Volume>, ::Array<::UnityW<::UnityEngine::Rendering::Volume>>*>& __cordl_internal_get_volumes();

  constexpr void __cordl_internal_set_data(::UnityEngine::Rendering::DebugDisplaySettingsVolume* value);

  constexpr void __cordl_internal_set_refreshRate(float_t value);

  constexpr void __cordl_internal_set_table(::UnityEngine::Rendering::DebugUI_Table* value);

  constexpr void __cordl_internal_set_timer(float_t value);

  constexpr void __cordl_internal_set_volumes(::ArrayW<::UnityW<::UnityEngine::Rendering::Volume>, ::Array<::UnityW<::UnityEngine::Rendering::Volume>>*> value);

  /// @brief Method .ctor, addr 0x65a793c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass7_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass7_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass7_0(WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass7_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass7_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass7_0(WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass7_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11938 };

  /// @brief Field data, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::DebugDisplaySettingsVolume* ___data;

  /// @brief Field timer, offset: 0x18, size: 0x4, def value: None
  float_t ___timer;

  /// @brief Field refreshRate, offset: 0x1c, size: 0x4, def value: None
  float_t ___refreshRate;

  /// @brief Field table, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Rendering::DebugUI_Table* ___table;

  /// @brief Field volumes, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Rendering::Volume>, ::Array<::UnityW<::UnityEngine::Rendering::Volume>>*> ___volumes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass7_0, ___data) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass7_0, ___timer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass7_0, ___refreshRate) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass7_0, ___table) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass7_0, ___volumes) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass7_0, 0x30>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugDisplaySettingsVolume/WidgetFactory/<>c__DisplayClass9_0
class CORDL_TYPE WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field data, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data)) ::UnityEngine::Rendering::DebugDisplaySettingsVolume* data;

  static inline ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_0* New_ctor();

  constexpr ::UnityEngine::Rendering::DebugDisplaySettingsVolume* const& __cordl_internal_get_data() const;

  constexpr ::UnityEngine::Rendering::DebugDisplaySettingsVolume*& __cordl_internal_get_data();

  constexpr void __cordl_internal_set_data(::UnityEngine::Rendering::DebugDisplaySettingsVolume* value);

  /// @brief Method .ctor, addr 0x65a8878, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_0(WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_0(WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11939 };

  /// @brief Field data, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::DebugDisplaySettingsVolume* ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_0, ___data) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object, UnityEngine.Rendering.DebugDisplaySettingsVolume::WidgetFactory::VolumeParameterChain
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugDisplaySettingsVolume/WidgetFactory/<>c__DisplayClass9_1
class CORDL_TYPE WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field CS$<>8__locals1, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_CS$__8__locals1,
                      put = __cordl_internal_set_CS$__8__locals1)) ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_0* CS$__8__locals1;

  /// @brief Field chain, offset 0x10, size 0x28
  __declspec(property(get = __cordl_internal_get_chain, put = __cordl_internal_set_chain)) ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume_VolumeParameterChain chain;

  static inline ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_1* New_ctor();

  /// @brief Method <GenerateTableColumns>b__0, addr 0x65a9424, size 0x18c, virtual false, abstract: false, final false
  inline ::System::Object* _GenerateTableColumns_b__0();

  /// @brief Method <GenerateTableColumns>b__1, addr 0x65a95b0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Object> _GenerateTableColumns_b__1();

  /// @brief Method <GenerateTableColumns>b__3, addr 0x65a95b8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Object> _GenerateTableColumns_b__3();

  constexpr ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_0* const& __cordl_internal_get_CS$__8__locals1() const;

  constexpr ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_0*& __cordl_internal_get_CS$__8__locals1();

  constexpr ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume_VolumeParameterChain const& __cordl_internal_get_chain() const;

  constexpr ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume_VolumeParameterChain& __cordl_internal_get_chain();

  constexpr void __cordl_internal_set_CS$__8__locals1(::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_0* value);

  constexpr void __cordl_internal_set_chain(::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume_VolumeParameterChain value);

  /// @brief Method .ctor, addr 0x65a887c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_1(WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_1(WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11940 };

  /// @brief Field chain, offset: 0x10, size: 0x28, def value: None
  ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume_VolumeParameterChain ___chain;

  /// @brief Field CS$<>8__locals1, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_0* ___CS$__8__locals1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_1, ___chain) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_1, ___CS$__8__locals1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_1, 0x40>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugDisplaySettingsVolume/WidgetFactory
class CORDL_TYPE DebugDisplaySettingsVolume_WidgetFactory : public ::System::Object {
public:
  // Declarations
  using VolumeParameterChain = ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume_VolumeParameterChain;

  using __c = ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c;

  using __c__DisplayClass0_0 = ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass0_0;

  using __c__DisplayClass1_0 = ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass1_0;

  using __c__DisplayClass7_0 = ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass7_0;

  using __c__DisplayClass9_0 = ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_0;

  using __c__DisplayClass9_1 = ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_1;

  /// @brief Field s_EmptyDebugUIValue, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_EmptyDebugUIValue, put = setStaticF_s_EmptyDebugUIValue)) ::UnityEngine::Rendering::DebugUI_Value* s_EmptyDebugUIValue;

  /// @brief Method CreateCameraSelector, addr 0x65a672c, size 0x270, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::DebugUI_ObjectPopupField*
  CreateCameraSelector(::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel* panel,
                       ::System::Action_2<::UnityEngine::Rendering::DebugUI_Field_1<::UnityW<::UnityEngine::Object>>*, ::UnityW<::UnityEngine::Object>>* refresh);

  /// @brief Method CreateComponentSelector, addr 0x65a5c94, size 0x754, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::DebugUI_EnumField* CreateComponentSelector(::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel* panel,
                                                                                     ::System::Action_2<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*, int32_t>* refresh);

  /// @brief Method CreateVolumeParameterWidget, addr 0x65a69dc, size 0x90, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::DebugUI_Widget* CreateVolumeParameterWidget(::StringW name, bool isResultParameter, ::UnityEngine::Rendering::VolumeParameter* param,
                                                                                      ::System::Func_1<bool>* isHiddenCallback);

  /// @brief Method CreateVolumeTable, addr 0x65a7648, size 0x2f4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::DebugUI_Table* CreateVolumeTable(::UnityEngine::Rendering::DebugDisplaySettingsVolume* data);

  /// @brief Method GenerateTableColumns, addr 0x65a7c14, size 0x8fc, virtual false, abstract: false, final false
  static inline void GenerateTableColumns(::UnityEngine::Rendering::DebugUI_Table* table, ::UnityEngine::Rendering::DebugDisplaySettingsVolume* data,
                                          ::System::Collections::Generic::List_1<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume_VolumeParameterChain>* resolutionChain);

  /// @brief Method GenerateTableRows, addr 0x65a7994, size 0x280, virtual false, abstract: false, final false
  static inline void GenerateTableRows(::UnityEngine::Rendering::DebugUI_Table* table,
                                       ::System::Collections::Generic::List_1<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume_VolumeParameterChain>* resolutionChain);

  /// @brief Method GetResolutionChain, addr 0x65a6c4c, size 0x9fc, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume_VolumeParameterChain>*
  GetResolutionChain(::UnityEngine::Rendering::DebugDisplaySettingsVolume* data);

  /// @brief Method GetSelectedVolumeComponent, addr 0x65a6ac4, size 0x188, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Rendering::VolumeComponent> GetSelectedVolumeComponent(::UnityEngine::Rendering::VolumeProfile* profile, ::System::Type* selectedType);

  /// @brief Method SetTableColumnVisibility, addr 0x65a8510, size 0x31c, virtual false, abstract: false, final false
  static inline void SetTableColumnVisibility(::UnityEngine::Rendering::DebugDisplaySettingsVolume* data, ::UnityEngine::Rendering::DebugUI_Table* table);

  static inline ::UnityEngine::Rendering::DebugUI_Value* getStaticF_s_EmptyDebugUIValue();

  static inline void setStaticF_s_EmptyDebugUIValue(::UnityEngine::Rendering::DebugUI_Value* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugDisplaySettingsVolume_WidgetFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsVolume_WidgetFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugDisplaySettingsVolume_WidgetFactory(DebugDisplaySettingsVolume_WidgetFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsVolume_WidgetFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugDisplaySettingsVolume_WidgetFactory(DebugDisplaySettingsVolume_WidgetFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11941 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DebugDisplaySettingsVolume_WidgetFactory, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies UnityEngine.Rendering.DebugDisplaySettingsPanel`1<T>
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugDisplaySettingsVolume/SettingsPanel
class CORDL_TYPE DebugDisplaySettingsVolume_SettingsPanel : public ::UnityEngine::Rendering::DebugDisplaySettingsPanel_1<::UnityEngine::Rendering::DebugDisplaySettingsVolume*> {
public:
  // Declarations
  /// @brief Field m_VolumeTable, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_VolumeTable, put = __cordl_internal_set_m_VolumeTable)) ::UnityEngine::Rendering::DebugUI_Table* m_VolumeTable;

  static inline ::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel* New_ctor(::UnityEngine::Rendering::DebugDisplaySettingsVolume* data);

  /// @brief Method Refresh, addr 0x65a95c0, size 0x2bc, virtual false, abstract: false, final false
  inline void Refresh();

  constexpr ::UnityEngine::Rendering::DebugUI_Table* const& __cordl_internal_get_m_VolumeTable() const;

  constexpr ::UnityEngine::Rendering::DebugUI_Table*& __cordl_internal_get_m_VolumeTable();

  constexpr void __cordl_internal_set_m_VolumeTable(::UnityEngine::Rendering::DebugUI_Table* value);

  /// @brief Method <.ctor>b__0_0, addr 0x65a987c, size 0x4, virtual false, abstract: false, final false
  inline void __ctor_b__0_0(::UnityEngine::Rendering::DebugUI_Field_1<::UnityW<::UnityEngine::Object>>* _, ::UnityEngine::Object* __);

  /// @brief Method <.ctor>b__0_1, addr 0x65a9880, size 0x4, virtual false, abstract: false, final false
  inline void __ctor_b__0_1(::UnityEngine::Rendering::DebugUI_Field_1<int32_t>* _, int32_t __);

  /// @brief Method .ctor, addr 0x65a57e4, size 0x15c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::DebugDisplaySettingsVolume* data);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugDisplaySettingsVolume_SettingsPanel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsVolume_SettingsPanel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugDisplaySettingsVolume_SettingsPanel(DebugDisplaySettingsVolume_SettingsPanel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsVolume_SettingsPanel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugDisplaySettingsVolume_SettingsPanel(DebugDisplaySettingsVolume_SettingsPanel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11942 };

  /// @brief Field m_VolumeTable, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Rendering::DebugUI_Table* ___m_VolumeTable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel, ___m_VolumeTable) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel, 0x30>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugDisplaySettingsVolume
class CORDL_TYPE DebugDisplaySettingsVolume : public ::System::Object {
public:
  // Declarations
  using SettingsPanel = ::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel;

  using Strings = ::UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings;

  using Styles = ::UnityEngine::Rendering::DebugDisplaySettingsVolume_Styles;

  using WidgetFactory = ::UnityEngine::Rendering::DebugDisplaySettingsVolume_WidgetFactory;

  __declspec(property(get = get_AreAnySettingsActive)) bool AreAnySettingsActive;

  /// @brief Field <volumeDebugSettings>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__volumeDebugSettings_k__BackingField,
                      put = __cordl_internal_set__volumeDebugSettings_k__BackingField)) ::UnityEngine::Rendering::IVolumeDebugSettings* _volumeDebugSettings_k__BackingField;

  /// @brief Field debugState, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_debugState,
                      put = __cordl_internal_set_debugState)) ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::UnityEngine::Rendering::VolumeComponent>>* debugState;

  /// @brief Field volumeComponentEnumIndex, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_volumeComponentEnumIndex, put = __cordl_internal_set_volumeComponentEnumIndex)) int32_t volumeComponentEnumIndex;

  __declspec(property(get = get_volumeDebugSettings)) ::UnityEngine::Rendering::IVolumeDebugSettings* volumeDebugSettings;

  /// @brief Convert operator to "::UnityEngine::Rendering::IDebugDisplaySettingsData"
  constexpr operator ::UnityEngine::Rendering::IDebugDisplaySettingsData*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Rendering::IDebugDisplaySettingsQuery"
  constexpr operator ::UnityEngine::Rendering::IDebugDisplaySettingsQuery*() noexcept;

  /// @brief Method CreatePanel, addr 0x65a5788, size 0x5c, virtual true, abstract: false, final true
  inline ::UnityEngine::Rendering::IDebugDisplaySettingsPanelDisposable* CreatePanel();

  static inline ::UnityEngine::Rendering::DebugDisplaySettingsVolume* New_ctor(::UnityEngine::Rendering::IVolumeDebugSettings* volumeDebugSettings);

  constexpr ::UnityEngine::Rendering::IVolumeDebugSettings* const& __cordl_internal_get__volumeDebugSettings_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::IVolumeDebugSettings*& __cordl_internal_get__volumeDebugSettings_k__BackingField();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::UnityEngine::Rendering::VolumeComponent>>* const& __cordl_internal_get_debugState() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::UnityEngine::Rendering::VolumeComponent>>*& __cordl_internal_get_debugState();

  constexpr int32_t const& __cordl_internal_get_volumeComponentEnumIndex() const;

  constexpr int32_t& __cordl_internal_get_volumeComponentEnumIndex();

  constexpr void __cordl_internal_set__volumeDebugSettings_k__BackingField(::UnityEngine::Rendering::IVolumeDebugSettings* value);

  constexpr void __cordl_internal_set_debugState(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::UnityEngine::Rendering::VolumeComponent>>* value);

  constexpr void __cordl_internal_set_volumeComponentEnumIndex(int32_t value);

  /// @brief Method .ctor, addr 0x65a56d8, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::IVolumeDebugSettings* volumeDebugSettings);

  /// @brief Method get_AreAnySettingsActive, addr 0x65a5780, size 0x8, virtual true, abstract: false, final true
  inline bool get_AreAnySettingsActive();

  /// @brief Method get_volumeDebugSettings, addr 0x65a56d0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::IVolumeDebugSettings* get_volumeDebugSettings();

  /// @brief Convert to "::UnityEngine::Rendering::IDebugDisplaySettingsData"
  constexpr ::UnityEngine::Rendering::IDebugDisplaySettingsData* i___UnityEngine__Rendering__IDebugDisplaySettingsData() noexcept;

  /// @brief Convert to "::UnityEngine::Rendering::IDebugDisplaySettingsQuery"
  constexpr ::UnityEngine::Rendering::IDebugDisplaySettingsQuery* i___UnityEngine__Rendering__IDebugDisplaySettingsQuery() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugDisplaySettingsVolume();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsVolume", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugDisplaySettingsVolume(DebugDisplaySettingsVolume&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsVolume", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugDisplaySettingsVolume(DebugDisplaySettingsVolume const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11943 };

  /// @brief Field k_PanelTitle offset 0xffffffff size 0x8
  static constexpr ::ConstString k_PanelTitle{ u"Volume" };

  /// @brief Field <volumeDebugSettings>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::IVolumeDebugSettings* ____volumeDebugSettings_k__BackingField;

  /// @brief Field volumeComponentEnumIndex, offset: 0x18, size: 0x4, def value: None
  int32_t ___volumeComponentEnumIndex;

  /// @brief Field debugState, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::UnityEngine::Rendering::VolumeComponent>>* ___debugState;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::DebugDisplaySettingsVolume, ____volumeDebugSettings_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugDisplaySettingsVolume, ___volumeComponentEnumIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugDisplaySettingsVolume, ___debugState) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DebugDisplaySettingsVolume, 0x28>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::DebugDisplaySettingsVolume);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugDisplaySettingsVolume*, "UnityEngine.Rendering", "DebugDisplaySettingsVolume");
NEED_NO_BOX(::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel*, "UnityEngine.Rendering", "DebugDisplaySettingsVolume/SettingsPanel");
NEED_NO_BOX(::UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings*, "UnityEngine.Rendering", "DebugDisplaySettingsVolume/Strings");
NEED_NO_BOX(::UnityEngine::Rendering::DebugDisplaySettingsVolume_Styles);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugDisplaySettingsVolume_Styles*, "UnityEngine.Rendering", "DebugDisplaySettingsVolume/Styles");
NEED_NO_BOX(::UnityEngine::Rendering::DebugDisplaySettingsVolume_WidgetFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugDisplaySettingsVolume_WidgetFactory*, "UnityEngine.Rendering", "DebugDisplaySettingsVolume/WidgetFactory");
NEED_NO_BOX(::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c*, "UnityEngine.Rendering", "DebugDisplaySettingsVolume/WidgetFactory/<>c");
NEED_NO_BOX(::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass0_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass0_0*, "UnityEngine.Rendering",
                       "DebugDisplaySettingsVolume/WidgetFactory/<>c__DisplayClass0_0");
NEED_NO_BOX(::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass1_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass1_0*, "UnityEngine.Rendering",
                       "DebugDisplaySettingsVolume/WidgetFactory/<>c__DisplayClass1_0");
NEED_NO_BOX(::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass7_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass7_0*, "UnityEngine.Rendering",
                       "DebugDisplaySettingsVolume/WidgetFactory/<>c__DisplayClass7_0");
NEED_NO_BOX(::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_0*, "UnityEngine.Rendering",
                       "DebugDisplaySettingsVolume/WidgetFactory/<>c__DisplayClass9_0");
NEED_NO_BOX(::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_1);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_1*, "UnityEngine.Rendering",
                       "DebugDisplaySettingsVolume/WidgetFactory/<>c__DisplayClass9_1");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume_VolumeParameterChain, "UnityEngine.Rendering",
                       "DebugDisplaySettingsVolume/WidgetFactory/VolumeParameterChain");
