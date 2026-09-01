#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\RenderPipelineGraphicsSettingsExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(RenderPipelineGraphicsSettingsExtensions)
namespace UnityEngine::Rendering {
class IRenderPipelineGraphicsSettings;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class RenderPipelineGraphicsSettingsExtensions;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::RenderPipelineGraphicsSettingsExtensions*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RenderPipelineGraphicsSettingsExtensions*, "UnityEngine.Rendering", "RenderPipelineGraphicsSettingsExtensions");
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderPipelineGraphicsSettingsExtensions
class CORDL_TYPE RenderPipelineGraphicsSettingsExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method SetValueAndNotify, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void SetValueAndNotify(::UnityEngine::Rendering::IRenderPipelineGraphicsSettings* settings, ::by_ref<T> currentPropertyValue, T newValue, ::StringW propertyName);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderPipelineGraphicsSettingsExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderPipelineGraphicsSettingsExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderPipelineGraphicsSettingsExtensions(RenderPipelineGraphicsSettingsExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderPipelineGraphicsSettingsExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderPipelineGraphicsSettingsExtensions(RenderPipelineGraphicsSettingsExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10775 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::RenderPipelineGraphicsSettingsExtensions) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering
