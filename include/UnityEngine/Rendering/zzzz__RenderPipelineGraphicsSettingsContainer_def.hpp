#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderPipelineGraphicsSettingsContainer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RenderPipelineGraphicsSettingsContainer)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Rendering {
class IRenderPipelineGraphicsSettings;
}
namespace UnityEngine::Rendering {
class RenderPipelineGraphicsSettingsCollection;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class RenderPipelineGraphicsSettingsContainer;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::RenderPipelineGraphicsSettingsContainer);
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderPipelineGraphicsSettingsContainer
class CORDL_TYPE RenderPipelineGraphicsSettingsContainer : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_RuntimeSettings, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RuntimeSettings,
                      put = __cordl_internal_set_m_RuntimeSettings)) ::UnityEngine::Rendering::RenderPipelineGraphicsSettingsCollection* m_RuntimeSettings;

  __declspec(property(get = get_settingsList)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>* settingsList;

  /// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

  static inline ::UnityEngine::Rendering::RenderPipelineGraphicsSettingsContainer* New_ctor();

  /// @brief Method OnAfterDeserialize, addr 0x65841c8, size 0x4, virtual true, abstract: false, final true
  inline void OnAfterDeserialize();

  /// @brief Method OnBeforeSerialize, addr 0x65841c4, size 0x4, virtual true, abstract: false, final true
  inline void OnBeforeSerialize();

  constexpr ::UnityEngine::Rendering::RenderPipelineGraphicsSettingsCollection* const& __cordl_internal_get_m_RuntimeSettings() const;

  constexpr ::UnityEngine::Rendering::RenderPipelineGraphicsSettingsCollection*& __cordl_internal_get_m_RuntimeSettings();

  constexpr void __cordl_internal_set_m_RuntimeSettings(::UnityEngine::Rendering::RenderPipelineGraphicsSettingsCollection* value);

  /// @brief Method .ctor, addr 0x65841cc, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_settingsList, addr 0x65841ac, size 0x18, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>* get_settingsList();

  /// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderPipelineGraphicsSettingsContainer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderPipelineGraphicsSettingsContainer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderPipelineGraphicsSettingsContainer(RenderPipelineGraphicsSettingsContainer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderPipelineGraphicsSettingsContainer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderPipelineGraphicsSettingsContainer(RenderPipelineGraphicsSettingsContainer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12160 };

  /// @brief Field m_RuntimeSettings, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::RenderPipelineGraphicsSettingsCollection* ___m_RuntimeSettings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderPipelineGraphicsSettingsContainer, ___m_RuntimeSettings) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderPipelineGraphicsSettingsContainer, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::RenderPipelineGraphicsSettingsContainer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderPipelineGraphicsSettingsContainer*, "UnityEngine.Rendering", "RenderPipelineGraphicsSettingsContainer");
