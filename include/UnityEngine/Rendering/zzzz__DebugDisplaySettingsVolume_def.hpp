#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DebugDisplaySettingsVolume.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugDisplaySettingsPanel_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugUI_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DebugDisplaySettingsVolume)
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
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
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
class DebugDisplaySettingsVolume___c__DisplayClass10_0;
}
namespace UnityEngine::Rendering {
class DebugUI_CameraSelector;
}
namespace UnityEngine::Rendering {
class DebugUI_EnumField;
}
namespace UnityEngine::Rendering {
template <typename T> class DebugUI_Field_1;
}
namespace UnityEngine::Rendering {
struct DebugUI_Flags;
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
template <typename T> class ListChangedEventArgs_1;
}
namespace UnityEngine::Rendering {
template <typename T> class ObservableList_1;
}
namespace UnityEngine::Rendering {
class SettingsPanel_DebugDisplaySettingsVolume___c__DisplayClass3_0;
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
class VolumeStack;
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
class WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_0;
}
namespace UnityEngine::Rendering {
class WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_1;
}
namespace UnityEngine {
class Camera;
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
class DebugDisplaySettingsVolume___c__DisplayClass10_0;
}
namespace UnityEngine::Rendering {
class SettingsPanel_DebugDisplaySettingsVolume___c__DisplayClass3_0;
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
class WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_0;
}
namespace UnityEngine::Rendering {
class WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_1;
}
namespace UnityEngine::Rendering {
struct WidgetFactory_DebugDisplaySettingsVolume_VolumeParameterChain;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::DebugDisplaySettingsVolume*);
MARK_REF_T(::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel*);
MARK_REF_T(::UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings*);
MARK_REF_T(::UnityEngine::Rendering::DebugDisplaySettingsVolume_Styles*);
MARK_REF_T(::UnityEngine::Rendering::DebugDisplaySettingsVolume_WidgetFactory*);
MARK_REF_T(::UnityEngine::Rendering::DebugDisplaySettingsVolume___c__DisplayClass10_0*);
MARK_REF_T(::UnityEngine::Rendering::SettingsPanel_DebugDisplaySettingsVolume___c__DisplayClass3_0*);
MARK_REF_T(::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c*);
MARK_REF_T(::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass0_0*);
MARK_REF_T(::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass1_0*);
MARK_REF_T(::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_0*);
MARK_REF_T(::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_1*);
MARK_VAL_T(::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume_VolumeParameterChain);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::DebugDisplaySettingsVolume*, "UnityEngine.Rendering", "DebugDisplaySettingsVolume");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel*, "UnityEngine.Rendering", "DebugDisplaySettingsVolume/SettingsPanel");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings*, "UnityEngine.Rendering", "DebugDisplaySettingsVolume/Strings");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::DebugDisplaySettingsVolume_Styles*, "UnityEngine.Rendering", "DebugDisplaySettingsVolume/Styles");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::DebugDisplaySettingsVolume_WidgetFactory*, "UnityEngine.Rendering", "DebugDisplaySettingsVolume/WidgetFactory");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::DebugDisplaySettingsVolume___c__DisplayClass10_0*, "UnityEngine.Rendering", "DebugDisplaySettingsVolume/<>c__DisplayClass10_0");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::SettingsPanel_DebugDisplaySettingsVolume___c__DisplayClass3_0*, "UnityEngine.Rendering", "DebugDisplaySettingsVolume/SettingsPanel/<>c__DisplayClass3_0");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c*, "UnityEngine.Rendering", "DebugDisplaySettingsVolume/WidgetFactory/<>c");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass0_0*, "UnityEngine.Rendering", "DebugDisplaySettingsVolume/WidgetFactory/<>c__DisplayClass0_0");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass1_0*, "UnityEngine.Rendering", "DebugDisplaySettingsVolume/WidgetFactory/<>c__DisplayClass1_0");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_0*, "UnityEngine.Rendering", "DebugDisplaySettingsVolume/WidgetFactory/<>c__DisplayClass8_0");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_1*, "UnityEngine.Rendering", "DebugDisplaySettingsVolume/WidgetFactory/<>c__DisplayClass8_1");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume_VolumeParameterChain, "UnityEngine.Rendering", "DebugDisplaySettingsVolume/WidgetFactory/VolumeParameterChain");
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugDisplaySettingsVolume/Styles
class CORDL_TYPE DebugDisplaySettingsVolume_Styles : public ::System::Object {
public:
  // Declarations
  /// @brief Field none, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_none, put = setStaticF_none)) ::UnityEngine::GUIContent* none;

  static inline ::UnityEngine::GUIContent* getStaticF_none();

  static inline void setStaticF_none(::UnityEngine::GUIContent* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugDisplaySettingsVolume_Styles();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsVolume_Styles", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugDisplaySettingsVolume_Styles(DebugDisplaySettingsVolume_Styles&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsVolume_Styles", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugDisplaySettingsVolume_Styles(DebugDisplaySettingsVolume_Styles const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8822 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::DebugDisplaySettingsVolume_Styles) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugDisplaySettingsVolume/Strings
class CORDL_TYPE DebugDisplaySettingsVolume_Strings : public ::System::Object {
public:
  // Declarations
  /// @brief Field cameraNeedsRendering, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_cameraNeedsRendering, put = setStaticF_cameraNeedsRendering)) ::StringW cameraNeedsRendering;

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

  /// @brief Field parameterNotCalculated, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_parameterNotCalculated, put = setStaticF_parameterNotCalculated)) ::StringW parameterNotCalculated;

  /// @brief Field priority, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_priority, put = setStaticF_priority)) ::StringW priority;

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

  static inline ::StringW getStaticF_cameraNeedsRendering();

  static inline ::StringW getStaticF_component();

  static inline ::StringW getStaticF_debugViewNotSupported();

  static inline ::StringW getStaticF_gameObject();

  static inline ::StringW getStaticF_global();

  static inline ::StringW getStaticF_globalDefaultValue();

  static inline ::StringW getStaticF_globalDefaultValueTooltip();

  static inline ::StringW getStaticF_local();

  static inline ::StringW getStaticF_none();

  static inline ::StringW getStaticF_parameter();

  static inline ::StringW getStaticF_parameterNotCalculated();

  static inline ::StringW getStaticF_priority();

  static inline ::StringW getStaticF_qualityLevelValue();

  static inline ::StringW getStaticF_qualityLevelValueTooltip();

  static inline ::StringW getStaticF_resultValue();

  static inline ::StringW getStaticF_resultValueTooltip();

  static inline ::StringW getStaticF_volumeInfo();

  static inline ::StringW getStaticF_volumeProfile();

  static inline void setStaticF_cameraNeedsRendering(::StringW value);

  static inline void setStaticF_component(::StringW value);

  static inline void setStaticF_debugViewNotSupported(::StringW value);

  static inline void setStaticF_gameObject(::StringW value);

  static inline void setStaticF_global(::StringW value);

  static inline void setStaticF_globalDefaultValue(::StringW value);

  static inline void setStaticF_globalDefaultValueTooltip(::StringW value);

  static inline void setStaticF_local(::StringW value);

  static inline void setStaticF_none(::StringW value);

  static inline void setStaticF_parameter(::StringW value);

  static inline void setStaticF_parameterNotCalculated(::StringW value);

  static inline void setStaticF_priority(::StringW value);

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
  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsVolume_Strings", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugDisplaySettingsVolume_Strings(DebugDisplaySettingsVolume_Strings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsVolume_Strings", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugDisplaySettingsVolume_Strings(DebugDisplaySettingsVolume_Strings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8823 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings) == 0x10, "Size mismatch!");

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

  // Ctor Parameters [CppParam { name: "nameAndTooltip", ty: "::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "volumeProfile", ty: "::UnityW<::UnityEngine::Rendering::VolumeProfile>", modifiers: "", def_value: None, comment: None }, CppParam { name: "volumeComponent", ty:
  // "::UnityW<::UnityEngine::Rendering::VolumeComponent>", modifiers: "", def_value: None, comment: None }, CppParam { name: "volume", ty: "::UnityW<::UnityEngine::Rendering::Volume>", modifiers: "",
  // def_value: None, comment: None }]
  constexpr WidgetFactory_DebugDisplaySettingsVolume_VolumeParameterChain(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip nameAndTooltip,
                                                                          ::UnityW<::UnityEngine::Rendering::VolumeProfile> volumeProfile,
                                                                          ::UnityW<::UnityEngine::Rendering::VolumeComponent> volumeComponent,
                                                                          ::UnityW<::UnityEngine::Rendering::Volume> volume) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8824 };

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

static_assert(sizeof(::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume_VolumeParameterChain) == 0x28, "Size mismatch!");

} // namespace UnityEngine::Rendering
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugDisplaySettingsVolume/WidgetFactory/<>c
class CORDL_TYPE WidgetFactory_DebugDisplaySettingsVolume___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c* __9;

  /// @brief Field <>9__2_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__2_0, put = setStaticF___9__2_0)) ::System::Func_1<::System::Object*>* __9__2_0;

  /// @brief Field <>9__7_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__7_0, put = setStaticF___9__7_0)) ::System::Func_1<bool>* __9__7_0;

  /// @brief Field <>9__8_3, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__8_3, put = setStaticF___9__8_3)) ::System::Func_1<::System::Object*>* __9__8_3;

  static inline ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c* New_ctor();

  /// @brief Method <CreateVolumeParameterWidget>b__2_0, addr 0x6b77254, size 0x5c, virtual false, abstract: false, final false
  inline ::System::Object* _CreateVolumeParameterWidget_b__2_0();

  /// @brief Method <CreateVolumeTable>b__7_0, addr 0x6b772b0, size 0x8, virtual false, abstract: false, final false
  inline bool _CreateVolumeTable_b__7_0();

  /// @brief Method <GenerateTableColumns>b__8_3, addr 0x6b772b8, size 0x14, virtual false, abstract: false, final false
  inline ::System::Object* _GenerateTableColumns_b__8_3();

  /// @brief Method <.cctor>b__10_0, addr 0x6b772cc, size 0x14, virtual false, abstract: false, final false
  inline ::System::Object* __cctor_b__10_0();

  /// @brief Method .ctor, addr 0x6b77250, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c* getStaticF___9();

  static inline ::System::Func_1<::System::Object*>* getStaticF___9__2_0();

  static inline ::System::Func_1<bool>* getStaticF___9__7_0();

  static inline ::System::Func_1<::System::Object*>* getStaticF___9__8_3();

  static inline void setStaticF___9(::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c* value);

  static inline void setStaticF___9__2_0(::System::Func_1<::System::Object*>* value);

  static inline void setStaticF___9__7_0(::System::Func_1<bool>* value);

  static inline void setStaticF___9__8_3(::System::Func_1<::System::Object*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WidgetFactory_DebugDisplaySettingsVolume___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsVolume___c", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WidgetFactory_DebugDisplaySettingsVolume___c(WidgetFactory_DebugDisplaySettingsVolume___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsVolume___c", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WidgetFactory_DebugDisplaySettingsVolume___c(WidgetFactory_DebugDisplaySettingsVolume___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8825 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering
// [CompilerGenerated]
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

  /// @brief Method <CreateComponentSelector>b__0, addr 0x6b772e0, size 0x58, virtual false, abstract: false, final false
  inline int32_t _CreateComponentSelector_b__0();

  /// @brief Method <CreateComponentSelector>b__1, addr 0x6b77338, size 0x64, virtual false, abstract: false, final false
  inline void _CreateComponentSelector_b__1(int32_t value);

  /// @brief Method <CreateComponentSelector>b__2, addr 0x6b7739c, size 0x58, virtual false, abstract: false, final false
  inline int32_t _CreateComponentSelector_b__2();

  /// @brief Method <CreateComponentSelector>b__3, addr 0x6b773f4, size 0x64, virtual false, abstract: false, final false
  inline void _CreateComponentSelector_b__3(int32_t value);

  constexpr ::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel* const& __cordl_internal_get_panel() const;

  constexpr ::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel*& __cordl_internal_get_panel();

  constexpr void __cordl_internal_set_panel(::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel* value);

  /// @brief Method .ctor, addr 0x6b751b8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass0_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass0_0", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass0_0(WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass0_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass0_0", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass0_0(WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass0_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8826 };

  /// @brief Field panel, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel* ___panel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass0_0, ___panel) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass0_0) == 0x18, "Size mismatch!");

} // namespace UnityEngine::Rendering
// [CompilerGenerated]
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

  /// @brief Method <CreateCameraSelector>b__0, addr 0x6b77458, size 0x58, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Object> _CreateCameraSelector_b__0();

  /// @brief Method <CreateCameraSelector>b__1, addr 0x6b774b0, size 0x94, virtual false, abstract: false, final false
  inline void _CreateCameraSelector_b__1(::UnityEngine::Object* value);

  constexpr ::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel* const& __cordl_internal_get_panel() const;

  constexpr ::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel*& __cordl_internal_get_panel();

  constexpr void __cordl_internal_set_panel(::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel* value);

  /// @brief Method .ctor, addr 0x6b753c0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass1_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass1_0", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass1_0(WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass1_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass1_0", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass1_0(WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass1_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8827 };

  /// @brief Field panel, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel* ___panel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass1_0, ___panel) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass1_0) == 0x18, "Size mismatch!");

} // namespace UnityEngine::Rendering
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugDisplaySettingsVolume/WidgetFactory/<>c__DisplayClass8_0
class CORDL_TYPE WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field data, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data)) ::UnityEngine::Rendering::DebugDisplaySettingsVolume* data;

  static inline ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_0* New_ctor();

  constexpr ::UnityEngine::Rendering::DebugDisplaySettingsVolume* const& __cordl_internal_get_data() const;

  constexpr ::UnityEngine::Rendering::DebugDisplaySettingsVolume*& __cordl_internal_get_data();

  constexpr void __cordl_internal_set_data(::UnityEngine::Rendering::DebugDisplaySettingsVolume* value);

  /// @brief Method .ctor, addr 0x6b77038, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_0", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_0(WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_0", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_0(WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8828 };

  /// @brief Field data, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::DebugDisplaySettingsVolume* ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_0, ___data) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_0) == 0x18, "Size mismatch!");

} // namespace UnityEngine::Rendering
// [CompilerGenerated]
// Dependencies System.Object, UnityEngine.Rendering.DebugDisplaySettingsVolume::WidgetFactory::VolumeParameterChain
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugDisplaySettingsVolume/WidgetFactory/<>c__DisplayClass8_1
class CORDL_TYPE WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field CS$<>8__locals1, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_CS$__8__locals1,
                      put = __cordl_internal_set_CS$__8__locals1)) ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_0* CS$__8__locals1;

  /// @brief Field chain, offset 0x10, size 0x28
  __declspec(property(get = __cordl_internal_get_chain, put = __cordl_internal_set_chain)) ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume_VolumeParameterChain chain;

  static inline ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_1* New_ctor();

  /// @brief Method <GenerateTableColumns>b__0, addr 0x6b77544, size 0x164, virtual false, abstract: false, final false
  inline ::System::Object* _GenerateTableColumns_b__0();

  /// @brief Method <GenerateTableColumns>b__1, addr 0x6b776a8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Object> _GenerateTableColumns_b__1();

  /// @brief Method <GenerateTableColumns>b__2, addr 0x6b776b0, size 0x30, virtual false, abstract: false, final false
  inline ::System::Object* _GenerateTableColumns_b__2();

  /// @brief Method <GenerateTableColumns>b__4, addr 0x6b776e0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Object> _GenerateTableColumns_b__4();

  constexpr ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_0* const& __cordl_internal_get_CS$__8__locals1() const;

  constexpr ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_0*& __cordl_internal_get_CS$__8__locals1();

  constexpr ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume_VolumeParameterChain const& __cordl_internal_get_chain() const;

  constexpr ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume_VolumeParameterChain& __cordl_internal_get_chain();

  constexpr void __cordl_internal_set_CS$__8__locals1(::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_0* value);

  constexpr void __cordl_internal_set_chain(::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume_VolumeParameterChain value);

  /// @brief Method .ctor, addr 0x6b7703c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_1", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_1(WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_1", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_1(WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8829 };

  /// @brief Field chain, offset: 0x10, size: 0x28, def value: None
  ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume_VolumeParameterChain ___chain;

  /// @brief Field CS$<>8__locals1, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_0* ___CS$__8__locals1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_1, ___chain) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_1, ___CS$__8__locals1) == 0x38, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_1) == 0x40, "Size mismatch!");

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

  using __c__DisplayClass8_0 = ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_0;

  using __c__DisplayClass8_1 = ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_1;

  /// @brief Field s_EmptyDebugUIValue, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_EmptyDebugUIValue, put = setStaticF_s_EmptyDebugUIValue)) ::UnityEngine::Rendering::DebugUI_Value* s_EmptyDebugUIValue;

  /// @brief Method CreateCameraSelector, addr 0x6b75228, size 0x198, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::DebugUI_CameraSelector*
  CreateCameraSelector(::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel* panel,
                       ::System::Action_2<::UnityEngine::Rendering::DebugUI_Field_1<::UnityW<::UnityEngine::Object>>*, ::UnityW<::UnityEngine::Object>>* refresh);

  /// @brief Method CreateComponentSelector, addr 0x6b74ab0, size 0x708, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::DebugUI_EnumField* CreateComponentSelector(::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel* panel,
                                                                                     ::System::Action_2<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*, int32_t>* refresh);

  /// @brief Method CreateVolumeParameterWidget, addr 0x6b754d0, size 0x140, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::DebugUI_Widget* CreateVolumeParameterWidget(::StringW name, bool isResultParameter, ::UnityEngine::Rendering::VolumeParameter* param);

  /// @brief Method CreateVolumeTable, addr 0x6b76178, size 0x1d4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::DebugUI_Table* CreateVolumeTable(::UnityEngine::Rendering::DebugDisplaySettingsVolume* data);

  /// @brief Method GenerateTableColumns, addr 0x6b765d8, size 0xa60, virtual false, abstract: false, final false
  static inline void GenerateTableColumns(::UnityEngine::Rendering::DebugUI_Table* table, ::UnityEngine::Rendering::DebugDisplaySettingsVolume* data,
                                          ::System::Collections::Generic::List_1<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume_VolumeParameterChain>* resolutionChain);

  /// @brief Method GenerateTableRows, addr 0x6b7634c, size 0x28c, virtual false, abstract: false, final false
  static inline void GenerateTableRows(::UnityEngine::Rendering::DebugUI_Table* table,
                                       ::System::Collections::Generic::List_1<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume_VolumeParameterChain>* resolutionChain);

  /// @brief Method GetResolutionChain, addr 0x6b75798, size 0x9e0, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume_VolumeParameterChain>*
  GetResolutionChain(::UnityEngine::Rendering::DebugDisplaySettingsVolume* data);

  /// @brief Method GetSelectedVolumeComponent, addr 0x6b75610, size 0x188, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Rendering::VolumeComponent> GetSelectedVolumeComponent(::UnityEngine::Rendering::VolumeProfile* profile, ::System::Type* selectedType);

  static inline ::UnityEngine::Rendering::DebugUI_Value* getStaticF_s_EmptyDebugUIValue();

  static inline void setStaticF_s_EmptyDebugUIValue(::UnityEngine::Rendering::DebugUI_Value* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugDisplaySettingsVolume_WidgetFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsVolume_WidgetFactory", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugDisplaySettingsVolume_WidgetFactory(DebugDisplaySettingsVolume_WidgetFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsVolume_WidgetFactory", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugDisplaySettingsVolume_WidgetFactory(DebugDisplaySettingsVolume_WidgetFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8830 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::DebugDisplaySettingsVolume_WidgetFactory) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugDisplaySettingsVolume/SettingsPanel/<>c__DisplayClass3_0
class CORDL_TYPE SettingsPanel_DebugDisplaySettingsVolume___c__DisplayClass3_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel* __4__this;

  /// @brief Field data, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data)) ::UnityEngine::Rendering::DebugDisplaySettingsVolume* data;

  static inline ::UnityEngine::Rendering::SettingsPanel_DebugDisplaySettingsVolume___c__DisplayClass3_0* New_ctor();

  constexpr ::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel* const& __cordl_internal_get___4__this() const;

  constexpr ::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel*& __cordl_internal_get___4__this();

  constexpr ::UnityEngine::Rendering::DebugDisplaySettingsVolume* const& __cordl_internal_get_data() const;

  constexpr ::UnityEngine::Rendering::DebugDisplaySettingsVolume*& __cordl_internal_get_data();

  constexpr void __cordl_internal_set___4__this(::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel* value);

  constexpr void __cordl_internal_set_data(::UnityEngine::Rendering::DebugDisplaySettingsVolume* value);

  /// @brief Method <.ctor>b__0, addr 0x6b77cd0, size 0x14, virtual false, abstract: false, final false
  inline void __ctor_b__0(::UnityEngine::Rendering::DebugUI_Field_1<::UnityW<::UnityEngine::Object>>* _, ::UnityEngine::Object* __);

  /// @brief Method <.ctor>b__1, addr 0x6b77ce4, size 0x14, virtual false, abstract: false, final false
  inline void __ctor_b__1(::UnityEngine::Rendering::DebugUI_Field_1<int32_t>* _, int32_t __);

  /// @brief Method <.ctor>b__2, addr 0x6b77cf8, size 0x94, virtual false, abstract: false, final false
  inline bool __ctor_b__2();

  /// @brief Method .ctor, addr 0x6b77818, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SettingsPanel_DebugDisplaySettingsVolume___c__DisplayClass3_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SettingsPanel_DebugDisplaySettingsVolume___c__DisplayClass3_0", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SettingsPanel_DebugDisplaySettingsVolume___c__DisplayClass3_0(SettingsPanel_DebugDisplaySettingsVolume___c__DisplayClass3_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SettingsPanel_DebugDisplaySettingsVolume___c__DisplayClass3_0", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SettingsPanel_DebugDisplaySettingsVolume___c__DisplayClass3_0(SettingsPanel_DebugDisplaySettingsVolume___c__DisplayClass3_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8831 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel* _____4__this;

  /// @brief Field data, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::DebugDisplaySettingsVolume* ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::SettingsPanel_DebugDisplaySettingsVolume___c__DisplayClass3_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SettingsPanel_DebugDisplaySettingsVolume___c__DisplayClass3_0, ___data) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::SettingsPanel_DebugDisplaySettingsVolume___c__DisplayClass3_0) == 0x20, "Size mismatch!");

} // namespace UnityEngine::Rendering
// [DisplayInfo(name = "Volume", order = 2147483647)]
// Dependencies UnityEngine.Rendering.DebugDisplaySettingsPanel`1<T>
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugDisplaySettingsVolume/SettingsPanel
class CORDL_TYPE DebugDisplaySettingsVolume_SettingsPanel : public ::UnityEngine::Rendering::DebugDisplaySettingsPanel_1<::UnityEngine::Rendering::DebugDisplaySettingsVolume*> {
public:
  // Declarations
  using __c__DisplayClass3_0 = ::UnityEngine::Rendering::SettingsPanel_DebugDisplaySettingsVolume___c__DisplayClass3_0;

  __declspec(property(get = get_Flags)) ::UnityEngine::Rendering::DebugUI_Flags Flags;

  /// @brief Field m_VolumeTable, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_VolumeTable, put = __cordl_internal_set_m_VolumeTable)) ::UnityEngine::Rendering::DebugUI_Table* m_VolumeTable;

  /// @brief Method Dispose, addr 0x6b776f0, size 0x128, virtual true, abstract: false, final false
  inline void Dispose();

  static inline ::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel* New_ctor(::UnityEngine::Rendering::DebugDisplaySettingsVolume* data);

  /// @brief Method OnVolumeInfluenceChanged, addr 0x6b77820, size 0x84, virtual false, abstract: false, final false
  inline void OnVolumeInfluenceChanged(::UnityEngine::Rendering::ObservableList_1<::UnityW<::UnityEngine::Rendering::Volume>>* sender,
                                       ::UnityEngine::Rendering::ListChangedEventArgs_1<::UnityW<::UnityEngine::Rendering::Volume>>* e);

  /// @brief Method Refresh, addr 0x6b778a4, size 0x404, virtual false, abstract: false, final false
  inline void Refresh();

  constexpr ::UnityEngine::Rendering::DebugUI_Table* const& __cordl_internal_get_m_VolumeTable() const;

  constexpr ::UnityEngine::Rendering::DebugUI_Table*& __cordl_internal_get_m_VolumeTable();

  constexpr void __cordl_internal_set_m_VolumeTable(::UnityEngine::Rendering::DebugUI_Table* value);

  /// @brief Method .ctor, addr 0x6b7431c, size 0x494, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::DebugDisplaySettingsVolume* data);

  /// @brief Method get_Flags, addr 0x6b776e8, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::Rendering::DebugUI_Flags get_Flags();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugDisplaySettingsVolume_SettingsPanel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsVolume_SettingsPanel", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugDisplaySettingsVolume_SettingsPanel(DebugDisplaySettingsVolume_SettingsPanel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsVolume_SettingsPanel", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugDisplaySettingsVolume_SettingsPanel(DebugDisplaySettingsVolume_SettingsPanel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8832 };

  /// @brief Field m_VolumeTable, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Rendering::DebugUI_Table* ___m_VolumeTable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel, ___m_VolumeTable) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel) == 0x30, "Size mismatch!");

} // namespace UnityEngine::Rendering
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugDisplaySettingsVolume/<>c__DisplayClass10_0
class CORDL_TYPE DebugDisplaySettingsVolume___c__DisplayClass10_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field value, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value)) ::System::Type* value;

  static inline ::UnityEngine::Rendering::DebugDisplaySettingsVolume___c__DisplayClass10_0* New_ctor();

  constexpr ::System::Type* const& __cordl_internal_get_value() const;

  constexpr ::System::Type*& __cordl_internal_get_value();

  constexpr void __cordl_internal_set_value(::System::Type* value);

  /// @brief Method .ctor, addr 0x6b734f0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <set_selectedComponentType>b__0, addr 0x6b77d8c, size 0x3c, virtual false, abstract: false, final false
  inline bool _set_selectedComponentType_b__0(::System::ValueTuple_2<::StringW, ::System::Type*> t);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugDisplaySettingsVolume___c__DisplayClass10_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsVolume___c__DisplayClass10_0", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugDisplaySettingsVolume___c__DisplayClass10_0(DebugDisplaySettingsVolume___c__DisplayClass10_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsVolume___c__DisplayClass10_0", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugDisplaySettingsVolume___c__DisplayClass10_0(DebugDisplaySettingsVolume___c__DisplayClass10_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8833 };

  /// @brief Field value, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::DebugDisplaySettingsVolume___c__DisplayClass10_0, ___value) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::DebugDisplaySettingsVolume___c__DisplayClass10_0) == 0x18, "Size mismatch!");

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

  using __c__DisplayClass10_0 = ::UnityEngine::Rendering::DebugDisplaySettingsVolume___c__DisplayClass10_0;

  __declspec(property(get = get_AreAnySettingsActive)) bool AreAnySettingsActive;

  /// @brief Field <volumeDebugSettings>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__volumeDebugSettings_k__BackingField,
                      put = __cordl_internal_set__volumeDebugSettings_k__BackingField)) ::UnityEngine::Rendering::IVolumeDebugSettings* _volumeDebugSettings_k__BackingField;

  /// @brief Field m_InfluenceVolumes, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InfluenceVolumes,
                      put = __cordl_internal_set_m_InfluenceVolumes)) ::UnityEngine::Rendering::ObservableList_1<::UnityW<::UnityEngine::Rendering::Volume>>* m_InfluenceVolumes;

  /// @brief Field m_SelectedCamera, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SelectedCamera, put = __cordl_internal_set_m_SelectedCamera)) ::UnityW<::UnityEngine::Camera> m_SelectedCamera;

  /// @brief Field m_SelectedComponentIndex, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_SelectedComponentIndex, put = __cordl_internal_set_m_SelectedComponentIndex)) int32_t m_SelectedComponentIndex;

  /// @brief Field m_StoreStackInterpolatedValues, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_m_StoreStackInterpolatedValues, put = __cordl_internal_set_m_StoreStackInterpolatedValues)) bool m_StoreStackInterpolatedValues;

  /// @brief Field m_VolumeInterpolatedResults, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_VolumeInterpolatedResults, put = __cordl_internal_set_m_VolumeInterpolatedResults)) ::UnityW<::UnityEngine::Rendering::VolumeComponent>
      m_VolumeInterpolatedResults;

  /// @brief Field m_VolumesWeights, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_VolumesWeights,
                      put =
                          __cordl_internal_set_m_VolumesWeights)) ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::UnityEngine::Rendering::Volume>, float_t>>* m_VolumesWeights;

  __declspec(property(get = get_resultVolumeComponent)) ::UnityW<::UnityEngine::Rendering::VolumeComponent> resultVolumeComponent;

  __declspec(property(get = get_selectedCamera, put = set_selectedCamera)) ::UnityW<::UnityEngine::Camera> selectedCamera;

  __declspec(property(get = get_selectedComponent, put = set_selectedComponent)) int32_t selectedComponent;

  __declspec(property(get = get_selectedComponentType, put = set_selectedComponentType)) ::System::Type* selectedComponentType;

  /// @brief Field volumeComponentEnumIndex, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_volumeComponentEnumIndex, put = __cordl_internal_set_volumeComponentEnumIndex)) int32_t volumeComponentEnumIndex;

  __declspec(property(get = get_volumeComponentsPathAndType)) ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, ::System::Type*>>* volumeComponentsPathAndType;

  /// @brief [Obsolete("This property has been obsoleted and will be removed in a future version. #from(6000.2)")]
  __declspec(property(get = get_volumeDebugSettings)) ::UnityEngine::Rendering::IVolumeDebugSettings* volumeDebugSettings;

  /// @brief Convert operator to "::UnityEngine::Rendering::IDebugDisplaySettingsData"
  constexpr operator ::UnityEngine::Rendering::IDebugDisplaySettingsData*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Rendering::IDebugDisplaySettingsQuery"
  constexpr operator ::UnityEngine::Rendering::IDebugDisplaySettingsQuery*() noexcept;

  /// @brief Method AreVolumesChanged, addr 0x6b7360c, size 0x158, virtual false, abstract: false, final false
  static inline bool AreVolumesChanged(
      ::UnityEngine::Rendering::ObservableList_1<::UnityW<::UnityEngine::Rendering::Volume>>* influenceVolumes,
      /* [TupleElementNames(new[] { "volume", "weight" })] */ ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::UnityEngine::Rendering::Volume>, float_t>>* volumesWeights);

  /// @brief Method ClearInterpolationData, addr 0x6b73594, size 0x78, virtual false, abstract: false, final false
  inline void ClearInterpolationData();

  /// @brief Method CreatePanel, addr 0x6b742c0, size 0x5c, virtual true, abstract: false, final true
  inline ::UnityEngine::Rendering::IDebugDisplaySettingsPanelDisposable* CreatePanel();

  /// @brief Method DestroyVolumeInterpolatedResults, addr 0x6b731fc, size 0x94, virtual false, abstract: false, final false
  inline void DestroyVolumeInterpolatedResults();

  /// @brief Method ExtractResult, addr 0x6b73eec, size 0x3cc, virtual false, abstract: false, final false
  static inline ::StringW ExtractResult(::UnityEngine::Rendering::VolumeParameter* param);

  /// @brief Method GetVolumeWeight, addr 0x6b73c64, size 0x16c, virtual false, abstract: false, final false
  inline float_t GetVolumeWeight(::UnityEngine::Rendering::Volume* volume);

  /// @brief Method GetVolumesList, addr 0x6b73dd0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ObservableList_1<::UnityW<::UnityEngine::Rendering::Volume>>* GetVolumesList();

  static inline ::UnityEngine::Rendering::DebugDisplaySettingsVolume* New_ctor();

  /// @brief [Obsolete("This constructor has been obsoleted and will be removed in a future version. #from(6000.2)")]
  static inline ::UnityEngine::Rendering::DebugDisplaySettingsVolume* New_ctor(::UnityEngine::Rendering::IVolumeDebugSettings* volumeDebugSettings);

  /// @brief Method OnBeginVolumeStackUpdate, addr 0x6b73764, size 0xe0, virtual false, abstract: false, final false
  inline void OnBeginVolumeStackUpdate(::UnityEngine::Rendering::VolumeStack* stack, ::UnityEngine::Camera* camera);

  /// @brief Method OnEndVolumeStackUpdate, addr 0x6b73844, size 0x25c, virtual false, abstract: false, final false
  inline void OnEndVolumeStackUpdate(::UnityEngine::Rendering::VolumeStack* stack, ::UnityEngine::Camera* camera);

  /// @brief Method OnSelectionChanged, addr 0x6b731e4, size 0x18, virtual false, abstract: false, final false
  inline void OnSelectionChanged();

  /// @brief Method OnVolumeStackInterpolated, addr 0x6b73b80, size 0xe4, virtual false, abstract: false, final false
  inline void OnVolumeStackInterpolated(::UnityEngine::Rendering::VolumeStack* stack, ::UnityEngine::Rendering::Volume* volume, float_t interpolationFactor);

  /// @brief Method UnityEngine.Rendering.IDebugDisplaySettingsData.Reset, addr 0x6b73dd8, size 0x18, virtual true, abstract: false, final true
  inline void UnityEngine_Rendering_IDebugDisplaySettingsData_Reset();

  constexpr ::UnityEngine::Rendering::IVolumeDebugSettings* const& __cordl_internal_get__volumeDebugSettings_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::IVolumeDebugSettings*& __cordl_internal_get__volumeDebugSettings_k__BackingField();

  constexpr ::UnityEngine::Rendering::ObservableList_1<::UnityW<::UnityEngine::Rendering::Volume>>* const& __cordl_internal_get_m_InfluenceVolumes() const;

  constexpr ::UnityEngine::Rendering::ObservableList_1<::UnityW<::UnityEngine::Rendering::Volume>>*& __cordl_internal_get_m_InfluenceVolumes();

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_m_SelectedCamera() const;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_m_SelectedCamera();

  constexpr int32_t const& __cordl_internal_get_m_SelectedComponentIndex() const;

  constexpr int32_t& __cordl_internal_get_m_SelectedComponentIndex();

  constexpr bool const& __cordl_internal_get_m_StoreStackInterpolatedValues() const;

  constexpr bool& __cordl_internal_get_m_StoreStackInterpolatedValues();

  constexpr ::UnityW<::UnityEngine::Rendering::VolumeComponent> const& __cordl_internal_get_m_VolumeInterpolatedResults() const;

  constexpr ::UnityW<::UnityEngine::Rendering::VolumeComponent>& __cordl_internal_get_m_VolumeInterpolatedResults();

  constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::UnityEngine::Rendering::Volume>, float_t>>* const& __cordl_internal_get_m_VolumesWeights() const;

  constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::UnityEngine::Rendering::Volume>, float_t>>*& __cordl_internal_get_m_VolumesWeights();

  constexpr int32_t const& __cordl_internal_get_volumeComponentEnumIndex() const;

  constexpr int32_t& __cordl_internal_get_volumeComponentEnumIndex();

  constexpr void __cordl_internal_set__volumeDebugSettings_k__BackingField(::UnityEngine::Rendering::IVolumeDebugSettings* value);

  constexpr void __cordl_internal_set_m_InfluenceVolumes(::UnityEngine::Rendering::ObservableList_1<::UnityW<::UnityEngine::Rendering::Volume>>* value);

  constexpr void __cordl_internal_set_m_SelectedCamera(::UnityW<::UnityEngine::Camera> value);

  constexpr void __cordl_internal_set_m_SelectedComponentIndex(int32_t value);

  constexpr void __cordl_internal_set_m_StoreStackInterpolatedValues(bool value);

  constexpr void __cordl_internal_set_m_VolumeInterpolatedResults(::UnityW<::UnityEngine::Rendering::VolumeComponent> value);

  constexpr void __cordl_internal_set_m_VolumesWeights(::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::UnityEngine::Rendering::Volume>, float_t>>* value);

  constexpr void __cordl_internal_set_volumeComponentEnumIndex(int32_t value);

  /// @brief Method .ctor, addr 0x6b73e14, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor();

  /// [Obsolete("This constructor has been obsoleted and will be removed in a future version. #from(6000.2)")]
  /// @brief Method .ctor, addr 0x6b73df0, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::IVolumeDebugSettings* volumeDebugSettings);

  /// @brief Method get_AreAnySettingsActive, addr 0x6b742b8, size 0x8, virtual true, abstract: false, final true
  inline bool get_AreAnySettingsActive();

  /// @brief Method get_resultVolumeComponent, addr 0x6b73aa0, size 0xe0, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Rendering::VolumeComponent> get_resultVolumeComponent();

  /// @brief Method get_selectedCamera, addr 0x6b734f4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Camera> get_selectedCamera();

  /// @brief Method get_selectedComponent, addr 0x6b731b0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_selectedComponent();

  /// @brief Method get_selectedComponentType, addr 0x6b73290, size 0x78, virtual false, abstract: false, final false
  inline ::System::Type* get_selectedComponentType();

  /// @brief Method get_volumeComponentsPathAndType, addr 0x6b73308, size 0xa4, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, ::System::Type*>>* get_volumeComponentsPathAndType();

  /// [CompilerGenerated]
  /// @brief Method get_volumeDebugSettings, addr 0x6b731a8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::IVolumeDebugSettings* get_volumeDebugSettings();

  /// @brief Convert to "::UnityEngine::Rendering::IDebugDisplaySettingsData"
  constexpr ::UnityEngine::Rendering::IDebugDisplaySettingsData* i___UnityEngine__Rendering__IDebugDisplaySettingsData() noexcept;

  /// @brief Convert to "::UnityEngine::Rendering::IDebugDisplaySettingsQuery"
  constexpr ::UnityEngine::Rendering::IDebugDisplaySettingsQuery* i___UnityEngine__Rendering__IDebugDisplaySettingsQuery() noexcept;

  /// @brief Method set_selectedCamera, addr 0x6b734fc, size 0x98, virtual false, abstract: false, final false
  inline void set_selectedCamera(::UnityEngine::Camera* value);

  /// @brief Method set_selectedComponent, addr 0x6b731b8, size 0x2c, virtual false, abstract: false, final false
  inline void set_selectedComponent(int32_t value);

  /// @brief Method set_selectedComponentType, addr 0x6b733ac, size 0x144, virtual false, abstract: false, final false
  inline void set_selectedComponentType(::System::Type* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugDisplaySettingsVolume();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsVolume", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugDisplaySettingsVolume(DebugDisplaySettingsVolume&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsVolume", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugDisplaySettingsVolume(DebugDisplaySettingsVolume const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8834 };

  /// @brief Field k_PanelTitle offset 0xffffffff size 0x8
  static constexpr ::ConstString k_PanelTitle{ u"Volume" };

  /// [CompilerGenerated]
  /// @brief Field <volumeDebugSettings>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::IVolumeDebugSettings* ____volumeDebugSettings_k__BackingField;

  /// @brief Field m_SelectedComponentIndex, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_SelectedComponentIndex;

  /// @brief Field m_SelectedCamera, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ___m_SelectedCamera;

  /// @brief Field m_VolumeInterpolatedResults, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::VolumeComponent> ___m_VolumeInterpolatedResults;

  /// @brief Field m_StoreStackInterpolatedValues, offset: 0x30, size: 0x1, def value: None
  bool ___m_StoreStackInterpolatedValues;

  /// @brief Field m_InfluenceVolumes, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Rendering::ObservableList_1<::UnityW<::UnityEngine::Rendering::Volume>>* ___m_InfluenceVolumes;

  /// [TupleElementNames(new[] { "volume", "weight" })]
  /// @brief Field m_VolumesWeights, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::UnityEngine::Rendering::Volume>, float_t>>* ___m_VolumesWeights;

  /// @brief Field volumeComponentEnumIndex, offset: 0x48, size: 0x4, def value: None
  int32_t ___volumeComponentEnumIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::DebugDisplaySettingsVolume, ____volumeDebugSettings_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugDisplaySettingsVolume, ___m_SelectedComponentIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugDisplaySettingsVolume, ___m_SelectedCamera) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugDisplaySettingsVolume, ___m_VolumeInterpolatedResults) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugDisplaySettingsVolume, ___m_StoreStackInterpolatedValues) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugDisplaySettingsVolume, ___m_InfluenceVolumes) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugDisplaySettingsVolume, ___m_VolumesWeights) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugDisplaySettingsVolume, ___volumeComponentEnumIndex) == 0x48, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::DebugDisplaySettingsVolume) == 0x50, "Size mismatch!");

} // namespace UnityEngine::Rendering
