#pragma once
// IWYU pragma private; include "UnityEngine/QualitySettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(QualitySettings)
namespace System {
template <typename T1, typename T2> class Action_2;
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
// Forward declare root types
namespace UnityEngine {
class QualitySettings;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::QualitySettings);
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.QualitySettings
class CORDL_TYPE QualitySettings : public ::UnityEngine::Object {
public:
  // Declarations
  /// @brief Field activeQualityLevelChanged, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_activeQualityLevelChanged, put = setStaticF_activeQualityLevelChanged)) ::System::Action_2<int32_t, int32_t>* activeQualityLevelChanged;

  /// @brief Method OnActiveQualityLevelChanged, addr 0x487ba8c, size 0x80, virtual false, abstract: false, final false
  static inline void OnActiveQualityLevelChanged(int32_t previousQualityLevel, int32_t currentQualityLevel);

  static inline ::System::Action_2<int32_t, int32_t>* getStaticF_activeQualityLevelChanged();

  /// @brief Method get_INTERNAL_renderPipeline, addr 0x487bbac, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::ScriptableObject> get_INTERNAL_renderPipeline();

  /// @brief Method get_activeColorSpace, addr 0x487bd18, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::ColorSpace get_activeColorSpace();

  /// @brief Method get_antiAliasing, addr 0x487bb48, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_antiAliasing();

  /// @brief Method get_desiredColorSpace, addr 0x487aa94, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::ColorSpace get_desiredColorSpace();

  /// @brief Method get_renderPipeline, addr 0x487bc10, size 0x90, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Rendering::RenderPipelineAsset> get_renderPipeline();

  static inline void setStaticF_activeQualityLevelChanged(::System::Action_2<int32_t, int32_t>* value);

  /// @brief Method set_INTERNAL_renderPipeline, addr 0x487bbd4, size 0x3c, virtual false, abstract: false, final false
  static inline void set_INTERNAL_renderPipeline(::UnityEngine::ScriptableObject* value);

  /// @brief Method set_antiAliasing, addr 0x487bb70, size 0x3c, virtual false, abstract: false, final false
  static inline void set_antiAliasing(int32_t value);

  /// @brief Method set_maxQueuedFrames, addr 0x487bcdc, size 0x3c, virtual false, abstract: false, final false
  static inline void set_maxQueuedFrames(int32_t value);

  /// @brief Method set_renderPipeline, addr 0x487bca0, size 0x3c, virtual false, abstract: false, final false
  static inline void set_renderPipeline(::UnityEngine::Rendering::RenderPipelineAsset* value);

  /// @brief Method set_vSyncCount, addr 0x487bb0c, size 0x3c, virtual false, abstract: false, final false
  static inline void set_vSyncCount(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr QualitySettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "QualitySettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  QualitySettings(QualitySettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "QualitySettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  QualitySettings(QualitySettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10730 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::QualitySettings, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::QualitySettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::QualitySettings*, "UnityEngine", "QualitySettings");
