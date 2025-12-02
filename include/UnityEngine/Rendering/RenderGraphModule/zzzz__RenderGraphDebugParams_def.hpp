#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/RenderGraphDebugParams.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugUI_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(RenderGraphDebugParams)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraphDebugParams_Strings;
}
namespace UnityEngine::Rendering {
class DebugUI_Panel;
}
namespace UnityEngine::Rendering {
class DebugUI_Widget;
}
namespace UnityEngine::Rendering {
class IDebugDisplaySettingsQuery;
}
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraphDebugParams;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraphDebugParams_Strings;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams);
MARK_REF_PTR_T(::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams_Strings);
// Dependencies System.Object, UnityEngine.Rendering.DebugUI::Widget::NameAndTooltip
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraphDebugParams/Strings
class CORDL_TYPE RenderGraphDebugParams_Strings : public ::System::Object {
public:
  // Declarations
  /// @brief Field ClearRenderTargetsAtCreation, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_ClearRenderTargetsAtCreation,
                      put = setStaticF_ClearRenderTargetsAtCreation)) ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip ClearRenderTargetsAtCreation;

  /// @brief Field ClearRenderTargetsAtFree, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_ClearRenderTargetsAtFree, put = setStaticF_ClearRenderTargetsAtFree)) ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip ClearRenderTargetsAtFree;

  /// @brief Field DisablePassCulling, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_DisablePassCulling, put = setStaticF_DisablePassCulling)) ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip DisablePassCulling;

  /// @brief Field EnableLogging, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_EnableLogging, put = setStaticF_EnableLogging)) ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip EnableLogging;

  /// @brief Field EnableNativeCompiler, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_EnableNativeCompiler, put = setStaticF_EnableNativeCompiler)) ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip EnableNativeCompiler;

  /// @brief Field ImmediateMode, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_ImmediateMode, put = setStaticF_ImmediateMode)) ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip ImmediateMode;

  /// @brief Field LogFrameInformation, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_LogFrameInformation, put = setStaticF_LogFrameInformation)) ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip LogFrameInformation;

  /// @brief Field LogResources, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_LogResources, put = setStaticF_LogResources)) ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip LogResources;

  static inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip getStaticF_ClearRenderTargetsAtCreation();

  static inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip getStaticF_ClearRenderTargetsAtFree();

  static inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip getStaticF_DisablePassCulling();

  static inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip getStaticF_EnableLogging();

  static inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip getStaticF_EnableNativeCompiler();

  static inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip getStaticF_ImmediateMode();

  static inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip getStaticF_LogFrameInformation();

  static inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip getStaticF_LogResources();

  static inline void setStaticF_ClearRenderTargetsAtCreation(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value);

  static inline void setStaticF_ClearRenderTargetsAtFree(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value);

  static inline void setStaticF_DisablePassCulling(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value);

  static inline void setStaticF_EnableLogging(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value);

  static inline void setStaticF_EnableNativeCompiler(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value);

  static inline void setStaticF_ImmediateMode(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value);

  static inline void setStaticF_LogFrameInformation(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value);

  static inline void setStaticF_LogResources(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraphDebugParams_Strings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphDebugParams_Strings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderGraphDebugParams_Strings(RenderGraphDebugParams_Strings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphDebugParams_Strings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderGraphDebugParams_Strings(RenderGraphDebugParams_Strings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12351 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams_Strings, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
// Dependencies System.Object
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraphDebugParams
class CORDL_TYPE RenderGraphDebugParams : public ::System::Object {
public:
  // Declarations
  using Strings = ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams_Strings;

  __declspec(property(get = get_AreAnySettingsActive)) bool AreAnySettingsActive;

  /// @brief Field clearRenderTargetsAtCreation, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_clearRenderTargetsAtCreation, put = __cordl_internal_set_clearRenderTargetsAtCreation)) bool clearRenderTargetsAtCreation;

  /// @brief Field clearRenderTargetsAtRelease, offset 0x21, size 0x1
  __declspec(property(get = __cordl_internal_get_clearRenderTargetsAtRelease, put = __cordl_internal_set_clearRenderTargetsAtRelease)) bool clearRenderTargetsAtRelease;

  /// @brief Field disablePassCulling, offset 0x22, size 0x1
  __declspec(property(get = __cordl_internal_get_disablePassCulling, put = __cordl_internal_set_disablePassCulling)) bool disablePassCulling;

  /// @brief Field enableLogging, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get_enableLogging, put = __cordl_internal_set_enableLogging)) bool enableLogging;

  /// @brief Field immediateMode, offset 0x23, size 0x1
  __declspec(property(get = __cordl_internal_get_immediateMode, put = __cordl_internal_set_immediateMode)) bool immediateMode;

  /// @brief Field logFrameInformation, offset 0x25, size 0x1
  __declspec(property(get = __cordl_internal_get_logFrameInformation, put = __cordl_internal_set_logFrameInformation)) bool logFrameInformation;

  /// @brief Field logResources, offset 0x26, size 0x1
  __declspec(property(get = __cordl_internal_get_logResources, put = __cordl_internal_set_logResources)) bool logResources;

  /// @brief Field m_DebugItems, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DebugItems,
                      put = __cordl_internal_set_m_DebugItems)) ::ArrayW<::UnityEngine::Rendering::DebugUI_Widget*, ::Array<::UnityEngine::Rendering::DebugUI_Widget*>*>
      m_DebugItems;

  /// @brief Field m_DebugPanel, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DebugPanel, put = __cordl_internal_set_m_DebugPanel)) ::UnityEngine::Rendering::DebugUI_Panel* m_DebugPanel;

  /// @brief Convert operator to "::UnityEngine::Rendering::IDebugDisplaySettingsQuery"
  constexpr operator ::UnityEngine::Rendering::IDebugDisplaySettingsQuery*() noexcept;

  /// @brief Method GetWidgetList, addr 0x65b1404, size 0x774, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::DebugUI_Widget*>* GetWidgetList(::StringW name);

  /// @brief Method IsImmediateModeSupported, addr 0x65b1b78, size 0xe0, virtual false, abstract: false, final false
  inline bool IsImmediateModeSupported();

  static inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams* New_ctor();

  /// @brief Method RegisterDebug, addr 0x65b1c58, size 0x124, virtual false, abstract: false, final false
  inline void RegisterDebug(::StringW name, ::UnityEngine::Rendering::DebugUI_Panel* debugPanel);

  /// @brief Method Reset, addr 0x65b13f8, size 0xc, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method UnRegisterDebug, addr 0x65b1d7c, size 0x68, virtual false, abstract: false, final false
  inline void UnRegisterDebug(::StringW name);

  /// @brief Method <GetWidgetList>b__11_0, addr 0x65b1e20, size 0x8, virtual false, abstract: false, final false
  inline bool _GetWidgetList_b__11_0();

  /// @brief Method <GetWidgetList>b__11_1, addr 0x65b1e28, size 0x8, virtual false, abstract: false, final false
  inline void _GetWidgetList_b__11_1(bool value);

  /// @brief Method <GetWidgetList>b__11_10, addr 0x65b1e80, size 0x8, virtual false, abstract: false, final false
  inline void _GetWidgetList_b__11_10(bool value);

  /// @brief Method <GetWidgetList>b__11_11, addr 0x65b1e88, size 0x88, virtual false, abstract: false, final false
  inline void _GetWidgetList_b__11_11();

  /// @brief Method <GetWidgetList>b__11_12, addr 0x65b1f10, size 0x88, virtual false, abstract: false, final false
  inline void _GetWidgetList_b__11_12();

  /// @brief Method <GetWidgetList>b__11_2, addr 0x65b1e30, size 0x8, virtual false, abstract: false, final false
  inline bool _GetWidgetList_b__11_2();

  /// @brief Method <GetWidgetList>b__11_3, addr 0x65b1e38, size 0x8, virtual false, abstract: false, final false
  inline void _GetWidgetList_b__11_3(bool value);

  /// @brief Method <GetWidgetList>b__11_4, addr 0x65b1e40, size 0x8, virtual false, abstract: false, final false
  inline bool _GetWidgetList_b__11_4();

  /// @brief Method <GetWidgetList>b__11_5, addr 0x65b1e48, size 0x8, virtual false, abstract: false, final false
  inline void _GetWidgetList_b__11_5(bool value);

  /// @brief Method <GetWidgetList>b__11_6, addr 0x65b1e50, size 0x8, virtual false, abstract: false, final false
  inline bool _GetWidgetList_b__11_6();

  /// @brief Method <GetWidgetList>b__11_7, addr 0x65b1e58, size 0x8, virtual false, abstract: false, final false
  inline void _GetWidgetList_b__11_7(bool value);

  /// @brief Method <GetWidgetList>b__11_8, addr 0x65b1e60, size 0x18, virtual false, abstract: false, final false
  inline bool _GetWidgetList_b__11_8();

  /// @brief Method <GetWidgetList>b__11_9, addr 0x65b1e78, size 0x8, virtual false, abstract: false, final false
  inline bool _GetWidgetList_b__11_9();

  constexpr bool const& __cordl_internal_get_clearRenderTargetsAtCreation() const;

  constexpr bool& __cordl_internal_get_clearRenderTargetsAtCreation();

  constexpr bool const& __cordl_internal_get_clearRenderTargetsAtRelease() const;

  constexpr bool& __cordl_internal_get_clearRenderTargetsAtRelease();

  constexpr bool const& __cordl_internal_get_disablePassCulling() const;

  constexpr bool& __cordl_internal_get_disablePassCulling();

  constexpr bool const& __cordl_internal_get_enableLogging() const;

  constexpr bool& __cordl_internal_get_enableLogging();

  constexpr bool const& __cordl_internal_get_immediateMode() const;

  constexpr bool& __cordl_internal_get_immediateMode();

  constexpr bool const& __cordl_internal_get_logFrameInformation() const;

  constexpr bool& __cordl_internal_get_logFrameInformation();

  constexpr bool const& __cordl_internal_get_logResources() const;

  constexpr bool& __cordl_internal_get_logResources();

  constexpr ::ArrayW<::UnityEngine::Rendering::DebugUI_Widget*, ::Array<::UnityEngine::Rendering::DebugUI_Widget*>*> const& __cordl_internal_get_m_DebugItems() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::DebugUI_Widget*, ::Array<::UnityEngine::Rendering::DebugUI_Widget*>*>& __cordl_internal_get_m_DebugItems();

  constexpr ::UnityEngine::Rendering::DebugUI_Panel* const& __cordl_internal_get_m_DebugPanel() const;

  constexpr ::UnityEngine::Rendering::DebugUI_Panel*& __cordl_internal_get_m_DebugPanel();

  constexpr void __cordl_internal_set_clearRenderTargetsAtCreation(bool value);

  constexpr void __cordl_internal_set_clearRenderTargetsAtRelease(bool value);

  constexpr void __cordl_internal_set_disablePassCulling(bool value);

  constexpr void __cordl_internal_set_enableLogging(bool value);

  constexpr void __cordl_internal_set_immediateMode(bool value);

  constexpr void __cordl_internal_set_logFrameInformation(bool value);

  constexpr void __cordl_internal_set_logResources(bool value);

  constexpr void __cordl_internal_set_m_DebugItems(::ArrayW<::UnityEngine::Rendering::DebugUI_Widget*, ::Array<::UnityEngine::Rendering::DebugUI_Widget*>*> value);

  constexpr void __cordl_internal_set_m_DebugPanel(::UnityEngine::Rendering::DebugUI_Panel* value);

  /// @brief Method .ctor, addr 0x65b1e1c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AreAnySettingsActive, addr 0x65b1de4, size 0x38, virtual true, abstract: false, final true
  inline bool get_AreAnySettingsActive();

  /// @brief Convert to "::UnityEngine::Rendering::IDebugDisplaySettingsQuery"
  constexpr ::UnityEngine::Rendering::IDebugDisplaySettingsQuery* i___UnityEngine__Rendering__IDebugDisplaySettingsQuery() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraphDebugParams();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphDebugParams", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderGraphDebugParams(RenderGraphDebugParams&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphDebugParams", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderGraphDebugParams(RenderGraphDebugParams const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12352 };

  /// @brief Field m_DebugItems, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::DebugUI_Widget*, ::Array<::UnityEngine::Rendering::DebugUI_Widget*>*> ___m_DebugItems;

  /// @brief Field m_DebugPanel, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::DebugUI_Panel* ___m_DebugPanel;

  /// @brief Field clearRenderTargetsAtCreation, offset: 0x20, size: 0x1, def value: None
  bool ___clearRenderTargetsAtCreation;

  /// @brief Field clearRenderTargetsAtRelease, offset: 0x21, size: 0x1, def value: None
  bool ___clearRenderTargetsAtRelease;

  /// @brief Field disablePassCulling, offset: 0x22, size: 0x1, def value: None
  bool ___disablePassCulling;

  /// @brief Field immediateMode, offset: 0x23, size: 0x1, def value: None
  bool ___immediateMode;

  /// @brief Field enableLogging, offset: 0x24, size: 0x1, def value: None
  bool ___enableLogging;

  /// @brief Field logFrameInformation, offset: 0x25, size: 0x1, def value: None
  bool ___logFrameInformation;

  /// @brief Field logResources, offset: 0x26, size: 0x1, def value: None
  bool ___logResources;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams, ___m_DebugItems) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams, ___m_DebugPanel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams, ___clearRenderTargetsAtCreation) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams, ___clearRenderTargetsAtRelease) == 0x21, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams, ___disablePassCulling) == 0x22, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams, ___immediateMode) == 0x23, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams, ___enableLogging) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams, ___logFrameInformation) == 0x25, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams, ___logResources) == 0x26, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams, 0x28>, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
NEED_NO_BOX(::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams*, "UnityEngine.Rendering.RenderGraphModule", "RenderGraphDebugParams");
NEED_NO_BOX(::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams_Strings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams_Strings*, "UnityEngine.Rendering.RenderGraphModule", "RenderGraphDebugParams/Strings");
