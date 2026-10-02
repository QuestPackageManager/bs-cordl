#pragma once
// IWYU pragma private; include "UnityEngine/QualitySettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(QualitySettings)
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine::Rendering {
class RenderPipelineAsset;
}
namespace UnityEngine {
struct ColorSpace;
}
namespace UnityEngine {
class ScriptableObject;
}
namespace UnityEngine {
struct ShadowmaskMode;
}
// Forward declare root types
namespace UnityEngine {
class QualitySettings;
}
// Write type traits
MARK_REF_T(::UnityEngine::QualitySettings*);
DEFINE_IL2CPP_CLASS(::UnityEngine::QualitySettings*, "UnityEngine", "QualitySettings");
// [NativeHeader("Runtime/Misc/PlayerSettings.h")]
// [NativeHeader("Runtime/Graphics/QualitySettings.h")]
// [StaticAccessor("GetQualitySettings()", (UnityEngine.Bindings.StaticAccessorType)0)]
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.QualitySettings
class CORDL_TYPE QualitySettings : public ::UnityEngine::Object {
public:
  // Declarations
  /// @brief Field activeQualityLevelChanged, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_activeQualityLevelChanged, put = setStaticF_activeQualityLevelChanged)) ::System::Action_2<int32_t, int32_t>* activeQualityLevelChanged;

  /// [RequiredByNativeCode]
  /// @brief Method OnActiveQualityLevelChanged, addr 0x6ee06fc, size 0x84, virtual false, abstract: false, final false
  static inline void OnActiveQualityLevelChanged(int32_t previousQualityLevel, int32_t currentQualityLevel);

  static inline ::System::Action_2<int32_t, int32_t>* getStaticF_activeQualityLevelChanged();

  /// @brief Method get_INTERNAL_renderPipeline, addr 0x6ee094c, size 0x114, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::ScriptableObject> get_INTERNAL_renderPipeline();

  /// @brief Method get_INTERNAL_renderPipeline_Injected, addr 0x6ee0a60, size 0x28, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_INTERNAL_renderPipeline_Injected();

  /// [StaticAccessor("GetPlayerSettings()", (UnityEngine.Bindings.StaticAccessorType)0)]
  /// [NativeName("GetColorSpace")]
  /// @brief Method get_activeColorSpace, addr 0x6ee0c60, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::ColorSpace get_activeColorSpace();

  /// @brief Method get_antiAliasing, addr 0x6ee08c0, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_antiAliasing();

  /// @brief Method get_billboardsFaceCameraPosition, addr 0x6ee0924, size 0x28, virtual false, abstract: false, final false
  static inline bool get_billboardsFaceCameraPosition();

  /// [NativeName("GetColorSpace")]
  /// [StaticAccessor("GetPlayerSettings()", (UnityEngine.Bindings.StaticAccessorType)0)]
  /// @brief Method get_desiredColorSpace, addr 0x6edcc54, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::ColorSpace get_desiredColorSpace();

  /// @brief Method get_enableLODCrossFade, addr 0x6ee0820, size 0x28, virtual false, abstract: false, final false
  static inline bool get_enableLODCrossFade();

  /// @brief Method get_lodBias, addr 0x6ee07a8, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_lodBias();

  /// @brief Method get_maximumLODLevel, addr 0x6ee07f8, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_maximumLODLevel();

  /// @brief Method get_meshLodThreshold, addr 0x6ee07d0, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_meshLodThreshold();

  /// @brief Method get_renderPipeline, addr 0x6ee0b44, size 0x7c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Rendering::RenderPipelineAsset> get_renderPipeline();

  /// @brief Method get_shadowmaskMode, addr 0x6ee0780, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::ShadowmaskMode get_shadowmaskMode();

  static inline void setStaticF_activeQualityLevelChanged(::System::Action_2<int32_t, int32_t>* value);

  /// @brief Method set_INTERNAL_renderPipeline, addr 0x6ee0a88, size 0x80, virtual false, abstract: false, final false
  static inline void set_INTERNAL_renderPipeline(::UnityEngine::ScriptableObject* value);

  /// @brief Method set_INTERNAL_renderPipeline_Injected, addr 0x6ee0b08, size 0x3c, virtual false, abstract: false, final false
  static inline void set_INTERNAL_renderPipeline_Injected(::System::IntPtr value);

  /// @brief Method set_antiAliasing, addr 0x6ee08e8, size 0x3c, virtual false, abstract: false, final false
  static inline void set_antiAliasing(int32_t value);

  /// @brief Method set_enableLODCrossFade, addr 0x6ee0848, size 0x3c, virtual false, abstract: false, final false
  static inline void set_enableLODCrossFade(bool value);

  /// @brief Method set_maxQueuedFrames, addr 0x6ee0c24, size 0x3c, virtual false, abstract: false, final false
  static inline void set_maxQueuedFrames(int32_t value);

  /// @brief Method set_renderPipeline, addr 0x6ee0bc0, size 0x64, virtual false, abstract: false, final false
  static inline void set_renderPipeline(::UnityEngine::Rendering::RenderPipelineAsset* value);

  /// @brief Method set_vSyncCount, addr 0x6ee0884, size 0x3c, virtual false, abstract: false, final false
  static inline void set_vSyncCount(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr QualitySettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "QualitySettings", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  QualitySettings(QualitySettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "QualitySettings", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  QualitySettings(QualitySettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9734 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::QualitySettings) == 0x18, "Size mismatch!");

} // namespace UnityEngine
