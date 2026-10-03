#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/RenderGraphDebugParams.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugUI_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(RenderGraphDebugParams)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraphDebugParams_Strings;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraphDebugParams___c;
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
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraphDebugParams___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams*);
MARK_REF_T(::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams_Strings*);
MARK_REF_T(::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams*, "UnityEngine.Rendering.RenderGraphModule", "RenderGraphDebugParams");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams_Strings*, "UnityEngine.Rendering.RenderGraphModule", "RenderGraphDebugParams/Strings");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams___c*, "UnityEngine.Rendering.RenderGraphModule", "RenderGraphDebugParams/<>c");
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

  /// @brief Field DisablePassMerging, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_DisablePassMerging, put = setStaticF_DisablePassMerging)) ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip DisablePassMerging;

  /// @brief Field EnableLogging, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_EnableLogging, put = setStaticF_EnableLogging)) ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip EnableLogging;

  /// @brief Field ImmediateMode, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_ImmediateMode, put = setStaticF_ImmediateMode)) ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip ImmediateMode;

  /// @brief Field LogFrameInformation, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_LogFrameInformation, put = setStaticF_LogFrameInformation)) ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip LogFrameInformation;

  /// @brief Field LogResources, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_LogResources, put = setStaticF_LogResources)) ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip LogResources;

  static inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip getStaticF_ClearRenderTargetsAtCreation();

  static inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip getStaticF_ClearRenderTargetsAtFree();

  static inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip getStaticF_DisablePassCulling();

  static inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip getStaticF_DisablePassMerging();

  static inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip getStaticF_EnableLogging();

  static inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip getStaticF_ImmediateMode();

  static inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip getStaticF_LogFrameInformation();

  static inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip getStaticF_LogResources();

  static inline void setStaticF_ClearRenderTargetsAtCreation(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value);

  static inline void setStaticF_ClearRenderTargetsAtFree(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value);

  static inline void setStaticF_DisablePassCulling(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value);

  static inline void setStaticF_DisablePassMerging(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value);

  static inline void setStaticF_EnableLogging(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value);

  static inline void setStaticF_ImmediateMode(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value);

  static inline void setStaticF_LogFrameInformation(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value);

  static inline void setStaticF_LogResources(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraphDebugParams_Strings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphDebugParams_Strings", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderGraphDebugParams_Strings(RenderGraphDebugParams_Strings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphDebugParams_Strings", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderGraphDebugParams_Strings(RenderGraphDebugParams_Strings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9305 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams_Strings) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraphDebugParams/<>c
class CORDL_TYPE RenderGraphDebugParams___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams___c* __9;

  /// @brief Field <>9__14_8, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__14_8, put = setStaticF___9__14_8)) ::System::Func_1<bool>* __9__14_8;

  static inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams___c* New_ctor();

  /// @brief Method <GetWidgetList>b__14_8, addr 0x6c00cd8, size 0x5c, virtual false, abstract: false, final false
  inline bool _GetWidgetList_b__14_8();

  /// @brief Method .ctor, addr 0x6c00cd4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams___c* getStaticF___9();

  static inline ::System::Func_1<bool>* getStaticF___9__14_8();

  static inline void setStaticF___9(::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams___c* value);

  static inline void setStaticF___9__14_8(::System::Func_1<bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraphDebugParams___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphDebugParams___c", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderGraphDebugParams___c(RenderGraphDebugParams___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphDebugParams___c", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderGraphDebugParams___c(RenderGraphDebugParams___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9306 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams___c) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
// Dependencies System.Object, UnityEngine.Rendering.DebugUI::Widget
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraphDebugParams
class CORDL_TYPE RenderGraphDebugParams : public ::System::Object {
public:
  // Declarations
  using Strings = ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams_Strings;

  using __c = ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams___c;

  __declspec(property(get = get_AreAnySettingsActive)) bool AreAnySettingsActive;

  /// @brief Field clearRenderTargetsAtCreation, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_clearRenderTargetsAtCreation, put = __cordl_internal_set_clearRenderTargetsAtCreation)) bool clearRenderTargetsAtCreation;

  /// @brief Field clearRenderTargetsAtRelease, offset 0x21, size 0x1
  __declspec(property(get = __cordl_internal_get_clearRenderTargetsAtRelease, put = __cordl_internal_set_clearRenderTargetsAtRelease)) bool clearRenderTargetsAtRelease;

  /// @brief Field disablePassCulling, offset 0x22, size 0x1
  __declspec(property(get = __cordl_internal_get_disablePassCulling, put = __cordl_internal_set_disablePassCulling)) bool disablePassCulling;

  /// @brief Field disablePassMerging, offset 0x23, size 0x1
  __declspec(property(get = __cordl_internal_get_disablePassMerging, put = __cordl_internal_set_disablePassMerging)) bool disablePassMerging;

  __declspec(property(get = get_enableLogging)) bool enableLogging;

  /// @brief Field immediateMode, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get_immediateMode, put = __cordl_internal_set_immediateMode)) bool immediateMode;

  /// @brief Field logFrameInformation, offset 0x25, size 0x1
  __declspec(property(get = __cordl_internal_get_logFrameInformation, put = __cordl_internal_set_logFrameInformation)) bool logFrameInformation;

  /// @brief Field logResources, offset 0x26, size 0x1
  __declspec(property(get = __cordl_internal_get_logResources, put = __cordl_internal_set_logResources)) bool logResources;

  /// @brief Field m_DebugItems, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DebugItems, put = __cordl_internal_set_m_DebugItems)) ::ArrayW<::UnityEngine::Rendering::DebugUI_Widget*> m_DebugItems;

  /// @brief Field m_DebugPanel, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DebugPanel, put = __cordl_internal_set_m_DebugPanel)) ::UnityEngine::Rendering::DebugUI_Panel* m_DebugPanel;

  /// @brief Convert operator to "::UnityEngine::Rendering::IDebugDisplaySettingsQuery"
  constexpr operator ::UnityEngine::Rendering::IDebugDisplaySettingsQuery*() noexcept;

  /// @brief Method GetWidgetList, addr 0x6bf44d8, size 0x824, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::DebugUI_Widget*>* GetWidgetList(::StringW name);

  /// @brief Method IsImmediateModeSupported, addr 0x6c008d8, size 0xe0, virtual false, abstract: false, final false
  inline bool IsImmediateModeSupported();

  static inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams* New_ctor();

  /// @brief Method RegisterDebug, addr 0x6bf4d78, size 0x180, virtual false, abstract: false, final false
  inline void RegisterDebug(::StringW name, ::UnityEngine::Rendering::DebugUI_Panel* debugPanel);

  /// @brief Method Reset, addr 0x6c008cc, size 0xc, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method ResetLogging, addr 0x6bf52f8, size 0x8, virtual false, abstract: false, final false
  inline void ResetLogging();

  /// @brief Method UnRegisterDebug, addr 0x6bf4f0c, size 0x68, virtual false, abstract: false, final false
  inline void UnRegisterDebug(::StringW name);

  /// [CompilerGenerated]
  /// @brief Method <GetWidgetList>b__14_0, addr 0x6c009b8, size 0x8, virtual false, abstract: false, final false
  inline bool _GetWidgetList_b__14_0();

  /// [CompilerGenerated]
  /// @brief Method <GetWidgetList>b__14_1, addr 0x6c009c0, size 0x8, virtual false, abstract: false, final false
  inline void _GetWidgetList_b__14_1(bool value);

  /// [CompilerGenerated]
  /// @brief Method <GetWidgetList>b__14_10, addr 0x6c00a00, size 0x8, virtual false, abstract: false, final false
  inline void _GetWidgetList_b__14_10(bool value);

  /// [CompilerGenerated]
  /// @brief Method <GetWidgetList>b__14_11, addr 0x6c00a08, size 0x18, virtual false, abstract: false, final false
  inline bool _GetWidgetList_b__14_11();

  /// [CompilerGenerated]
  /// @brief Method <GetWidgetList>b__14_12, addr 0x6c00a20, size 0xc, virtual false, abstract: false, final false
  inline void _GetWidgetList_b__14_12();

  /// [CompilerGenerated]
  /// @brief Method <GetWidgetList>b__14_13, addr 0x6c00a2c, size 0xc, virtual false, abstract: false, final false
  inline void _GetWidgetList_b__14_13();

  /// [CompilerGenerated]
  /// @brief Method <GetWidgetList>b__14_2, addr 0x6c009c8, size 0x8, virtual false, abstract: false, final false
  inline bool _GetWidgetList_b__14_2();

  /// [CompilerGenerated]
  /// @brief Method <GetWidgetList>b__14_3, addr 0x6c009d0, size 0x8, virtual false, abstract: false, final false
  inline void _GetWidgetList_b__14_3(bool value);

  /// [CompilerGenerated]
  /// @brief Method <GetWidgetList>b__14_4, addr 0x6c009d8, size 0x8, virtual false, abstract: false, final false
  inline bool _GetWidgetList_b__14_4();

  /// [CompilerGenerated]
  /// @brief Method <GetWidgetList>b__14_5, addr 0x6c009e0, size 0x8, virtual false, abstract: false, final false
  inline void _GetWidgetList_b__14_5(bool value);

  /// [CompilerGenerated]
  /// @brief Method <GetWidgetList>b__14_6, addr 0x6c009e8, size 0x8, virtual false, abstract: false, final false
  inline bool _GetWidgetList_b__14_6();

  /// [CompilerGenerated]
  /// @brief Method <GetWidgetList>b__14_7, addr 0x6c009f0, size 0x8, virtual false, abstract: false, final false
  inline void _GetWidgetList_b__14_7(bool value);

  /// [CompilerGenerated]
  /// @brief Method <GetWidgetList>b__14_9, addr 0x6c009f8, size 0x8, virtual false, abstract: false, final false
  inline bool _GetWidgetList_b__14_9();

  constexpr bool const& __cordl_internal_get_clearRenderTargetsAtCreation() const;

  constexpr bool& __cordl_internal_get_clearRenderTargetsAtCreation();

  constexpr bool const& __cordl_internal_get_clearRenderTargetsAtRelease() const;

  constexpr bool& __cordl_internal_get_clearRenderTargetsAtRelease();

  constexpr bool const& __cordl_internal_get_disablePassCulling() const;

  constexpr bool& __cordl_internal_get_disablePassCulling();

  constexpr bool const& __cordl_internal_get_disablePassMerging() const;

  constexpr bool& __cordl_internal_get_disablePassMerging();

  constexpr bool const& __cordl_internal_get_immediateMode() const;

  constexpr bool& __cordl_internal_get_immediateMode();

  constexpr bool const& __cordl_internal_get_logFrameInformation() const;

  constexpr bool& __cordl_internal_get_logFrameInformation();

  constexpr bool const& __cordl_internal_get_logResources() const;

  constexpr bool& __cordl_internal_get_logResources();

  constexpr ::ArrayW<::UnityEngine::Rendering::DebugUI_Widget*> const& __cordl_internal_get_m_DebugItems() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::DebugUI_Widget*>& __cordl_internal_get_m_DebugItems();

  constexpr ::UnityEngine::Rendering::DebugUI_Panel* const& __cordl_internal_get_m_DebugPanel() const;

  constexpr ::UnityEngine::Rendering::DebugUI_Panel*& __cordl_internal_get_m_DebugPanel();

  constexpr void __cordl_internal_set_clearRenderTargetsAtCreation(bool value);

  constexpr void __cordl_internal_set_clearRenderTargetsAtRelease(bool value);

  constexpr void __cordl_internal_set_disablePassCulling(bool value);

  constexpr void __cordl_internal_set_disablePassMerging(bool value);

  constexpr void __cordl_internal_set_immediateMode(bool value);

  constexpr void __cordl_internal_set_logFrameInformation(bool value);

  constexpr void __cordl_internal_set_logResources(bool value);

  constexpr void __cordl_internal_set_m_DebugItems(::ArrayW<::UnityEngine::Rendering::DebugUI_Widget*> value);

  constexpr void __cordl_internal_set_m_DebugPanel(::UnityEngine::Rendering::DebugUI_Panel* value);

  /// @brief Method .ctor, addr 0x6bf3ffc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AreAnySettingsActive, addr 0x6bf4d10, size 0x48, virtual true, abstract: false, final true
  inline bool get_AreAnySettingsActive();

  /// @brief Method get_enableLogging, addr 0x6bf676c, size 0x20, virtual false, abstract: false, final false
  inline bool get_enableLogging();

  /// @brief Convert to "::UnityEngine::Rendering::IDebugDisplaySettingsQuery"
  constexpr ::UnityEngine::Rendering::IDebugDisplaySettingsQuery* i___UnityEngine__Rendering__IDebugDisplaySettingsQuery() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraphDebugParams();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphDebugParams", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderGraphDebugParams(RenderGraphDebugParams&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphDebugParams", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderGraphDebugParams(RenderGraphDebugParams const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9307 };

  /// @brief Field m_DebugItems, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::DebugUI_Widget*> ___m_DebugItems;

  /// @brief Field m_DebugPanel, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::DebugUI_Panel* ___m_DebugPanel;

  /// @brief Field clearRenderTargetsAtCreation, offset: 0x20, size: 0x1, def value: None
  bool ___clearRenderTargetsAtCreation;

  /// @brief Field clearRenderTargetsAtRelease, offset: 0x21, size: 0x1, def value: None
  bool ___clearRenderTargetsAtRelease;

  /// @brief Field disablePassCulling, offset: 0x22, size: 0x1, def value: None
  bool ___disablePassCulling;

  /// @brief Field disablePassMerging, offset: 0x23, size: 0x1, def value: None
  bool ___disablePassMerging;

  /// @brief Field immediateMode, offset: 0x24, size: 0x1, def value: None
  bool ___immediateMode;

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

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams, ___disablePassMerging) == 0x23, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams, ___immediateMode) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams, ___logFrameInformation) == 0x25, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams, ___logResources) == 0x26, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams) == 0x28, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
