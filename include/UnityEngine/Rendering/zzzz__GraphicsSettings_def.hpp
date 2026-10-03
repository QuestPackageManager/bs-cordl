#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GraphicsSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__IRenderPipelineGraphicsSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderPipeline_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GraphicsSettings)
namespace System {
struct IntPtr;
}
namespace System {
template <typename T> class Lazy_1;
}
namespace System {
class Type;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine::Rendering {
struct BuiltinShaderDefine;
}
namespace UnityEngine::Rendering {
struct DefaultMaterialType;
}
namespace UnityEngine::Rendering {
struct DefaultShaderType;
}
namespace UnityEngine::Rendering {
struct GraphicsTier;
}
namespace UnityEngine::Rendering {
class RenderPipelineAsset;
}
namespace UnityEngine::Rendering {
class RenderPipelineGlobalSettings;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class ScriptableObject;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class GraphicsSettings;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::GraphicsSettings*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::GraphicsSettings*, "UnityEngine.Rendering", "GraphicsSettings");
// [StaticAccessor("GetGraphicsSettings()", (UnityEngine.Bindings.StaticAccessorType)0)]
// [NativeHeader("Runtime/Camera/GraphicsSettings.h")]
// Dependencies UnityEngine.Object, UnityEngine.Rendering.IRenderPipelineGraphicsSettings, UnityEngine.Rendering.RenderPipeline
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.GraphicsSettings
class CORDL_TYPE GraphicsSettings : public ::UnityEngine::Object {
public:
  // Declarations
  /// @brief Field s_CurrentRenderPipelineGlobalSettings, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_CurrentRenderPipelineGlobalSettings,
                      put =
                          setStaticF_s_CurrentRenderPipelineGlobalSettings)) ::System::Lazy_1<::UnityW<::UnityEngine::Rendering::RenderPipelineGlobalSettings>>* s_CurrentRenderPipelineGlobalSettings;

  /// [RequiredByNativeCode]
  /// [VisibleToOtherModules]
  /// @brief Method GetDefaultMaterial, addr 0x6f667f8, size 0x24c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> GetDefaultMaterial(::UnityEngine::Rendering::DefaultMaterialType type);

  /// [RequiredByNativeCode]
  /// [VisibleToOtherModules]
  /// @brief Method GetDefaultShader, addr 0x6f66590, size 0x268, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Shader> GetDefaultShader(::UnityEngine::Rendering::DefaultShaderType type);

  /// @brief Method GetRenderPipelineSettings, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*> && ::cordl_internals::reference_type_constraint<T>)
  static inline T GetRenderPipelineSettings();

  /// @brief Method GetSettingsForRenderPipeline, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::UnityEngine::Rendering::RenderPipeline*>)
  static inline ::UnityW<::UnityEngine::Rendering::RenderPipelineGlobalSettings> GetSettingsForRenderPipeline();

  /// @brief Method HasShaderDefine, addr 0x6f65ef8, size 0xcc, virtual false, abstract: false, final false
  static inline bool HasShaderDefine(::UnityEngine::Rendering::BuiltinShaderDefine defineHash);

  /// @brief Method HasShaderDefine, addr 0x6f65eb4, size 0x44, virtual false, abstract: false, final false
  static inline bool HasShaderDefine(::UnityEngine::Rendering::GraphicsTier tier, ::UnityEngine::Rendering::BuiltinShaderDefine defineHash);

  /// @brief Method Internal_GetCurrentRenderPipelineGlobalSettings, addr 0x6f657c4, size 0x118, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Rendering::RenderPipelineGlobalSettings> Internal_GetCurrentRenderPipelineGlobalSettings();

  /// [NativeName("GetSettingsForRenderPipeline")]
  /// @brief Method Internal_GetSettingsForRenderPipeline, addr 0x6f654e8, size 0x2a0, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Object> Internal_GetSettingsForRenderPipeline(::StringW renderpipelineName);

  /// @brief Method Internal_GetSettingsForRenderPipeline_Injected, addr 0x6f65788, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr Internal_GetSettingsForRenderPipeline_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> renderpipelineName);

  /// @brief Method TryGetCurrentRenderPipelineGlobalSettings, addr 0x6f65c7c, size 0xe4, virtual false, abstract: false, final false
  static inline bool TryGetCurrentRenderPipelineGlobalSettings(::by_ref<::UnityEngine::Rendering::RenderPipelineGlobalSettings*> asset);

  /// @brief Method TryGetRenderPipelineSettings, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*> && ::cordl_internals::reference_type_constraint<T>)
  static inline bool TryGetRenderPipelineSettings(::by_ref<T> settings);

  /// @brief Method ValidateSetRenderPipelineAsset, addr 0x6f65980, size 0x2fc, virtual false, abstract: false, final false
  static inline void ValidateSetRenderPipelineAsset(::UnityEngine::Rendering::RenderPipelineAsset* newRenderPipelineAsset);

  static inline ::System::Lazy_1<::UnityW<::UnityEngine::Rendering::RenderPipelineGlobalSettings>>* getStaticF_s_CurrentRenderPipelineGlobalSettings();

  /// @brief Method get_INTERNAL_currentRenderPipeline, addr 0x6f65fc4, size 0x13c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::ScriptableObject> get_INTERNAL_currentRenderPipeline();

  /// @brief Method get_INTERNAL_currentRenderPipeline_Injected, addr 0x6f66100, size 0x28, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_INTERNAL_currentRenderPipeline_Injected();

  /// @brief Method get_INTERNAL_defaultRenderPipeline, addr 0x6f66244, size 0x13c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::ScriptableObject> get_INTERNAL_defaultRenderPipeline();

  /// @brief Method get_INTERNAL_defaultRenderPipeline_Injected, addr 0x6f66380, size 0x28, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_INTERNAL_defaultRenderPipeline_Injected();

  /// @brief Method get_currentRenderPipeline, addr 0x6f658dc, size 0xa4, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Rendering::RenderPipelineAsset> get_currentRenderPipeline();

  /// @brief Method get_currentRenderPipelineAssetType, addr 0x6f661b8, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Type* get_currentRenderPipelineAssetType();

  /// @brief Method get_defaultRenderPipeline, addr 0x6f6648c, size 0xa4, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Rendering::RenderPipelineAsset> get_defaultRenderPipeline();

  /// @brief Method get_isScriptableRenderPipelineEnabled, addr 0x6f66128, size 0x90, virtual false, abstract: false, final false
  static inline bool get_isScriptableRenderPipelineEnabled();

  /// @brief Method get_lightsUseLinearIntensity, addr 0x6f65dd8, size 0x28, virtual false, abstract: false, final false
  static inline bool get_lightsUseLinearIntensity();

  static inline void setStaticF_s_CurrentRenderPipelineGlobalSettings(::System::Lazy_1<::UnityW<::UnityEngine::Rendering::RenderPipelineGlobalSettings>>* value);

  /// @brief Method set_INTERNAL_defaultRenderPipeline, addr 0x6f663a8, size 0xa8, virtual false, abstract: false, final false
  static inline void set_INTERNAL_defaultRenderPipeline(::UnityEngine::ScriptableObject* value);

  /// @brief Method set_INTERNAL_defaultRenderPipeline_Injected, addr 0x6f66450, size 0x3c, virtual false, abstract: false, final false
  static inline void set_INTERNAL_defaultRenderPipeline_Injected(::System::IntPtr value);

  /// @brief Method set_defaultRenderPipeline, addr 0x6f66530, size 0x60, virtual false, abstract: false, final false
  static inline void set_defaultRenderPipeline(::UnityEngine::Rendering::RenderPipelineAsset* value);

  /// @brief Method set_lightsUseColorTemperature, addr 0x6f65e3c, size 0x3c, virtual false, abstract: false, final false
  static inline void set_lightsUseColorTemperature(bool value);

  /// @brief Method set_lightsUseLinearIntensity, addr 0x6f65e00, size 0x3c, virtual false, abstract: false, final false
  static inline void set_lightsUseLinearIntensity(bool value);

  /// @brief Method set_useScriptableRenderPipelineBatching, addr 0x6f65e78, size 0x3c, virtual false, abstract: false, final false
  static inline void set_useScriptableRenderPipelineBatching(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphicsSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GraphicsSettings", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GraphicsSettings(GraphicsSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GraphicsSettings", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GraphicsSettings(GraphicsSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10359 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::GraphicsSettings) == 0x18, "Size mismatch!");

} // namespace UnityEngine::Rendering
