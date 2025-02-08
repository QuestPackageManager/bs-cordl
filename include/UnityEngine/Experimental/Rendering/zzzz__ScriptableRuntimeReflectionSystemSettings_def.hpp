#pragma once
// IWYU pragma private; include "UnityEngine/Experimental/Rendering/ScriptableRuntimeReflectionSystemSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ScriptableRuntimeReflectionSystemSettings)
namespace UnityEngine::Experimental::Rendering {
class IScriptableRuntimeReflectionSystem;
}
namespace UnityEngine::Experimental::Rendering {
class ScriptableRuntimeReflectionSystemWrapper;
}
// Forward declare root types
namespace UnityEngine::Experimental::Rendering {
class ScriptableRuntimeReflectionSystemSettings;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemSettings);
// Dependencies System.Object
namespace UnityEngine::Experimental::Rendering {
// Is value type: false
// CS Name: UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemSettings
class CORDL_TYPE ScriptableRuntimeReflectionSystemSettings : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_Instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Instance, put = setStaticF_s_Instance)) ::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper* s_Instance;

  /// @brief Method ScriptingDirtyReflectionSystemInstance, addr 0x48d4898, size 0x28, virtual false, abstract: false, final false
  static inline void ScriptingDirtyReflectionSystemInstance();

  static inline ::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper* getStaticF_s_Instance();

  /// @brief Method get_Internal_ScriptableRuntimeReflectionSystemSettings_instance, addr 0x48d4840, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper* get_Internal_ScriptableRuntimeReflectionSystemSettings_instance();

  static inline void setStaticF_s_Instance(::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper* value);

  /// @brief Method set_Internal_ScriptableRuntimeReflectionSystemSettings_system, addr 0x48d46f8, size 0x148, virtual false, abstract: false, final false
  static inline void set_Internal_ScriptableRuntimeReflectionSystemSettings_system(::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScriptableRuntimeReflectionSystemSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScriptableRuntimeReflectionSystemSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScriptableRuntimeReflectionSystemSettings(ScriptableRuntimeReflectionSystemSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScriptableRuntimeReflectionSystemSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScriptableRuntimeReflectionSystemSettings(ScriptableRuntimeReflectionSystemSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11316 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemSettings, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Experimental::Rendering
NEED_NO_BOX(::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemSettings*, "UnityEngine.Experimental.Rendering", "ScriptableRuntimeReflectionSystemSettings");
