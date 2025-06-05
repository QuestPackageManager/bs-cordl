#pragma once
// IWYU pragma private; include "UnityEngine/Experimental/Rendering/ScriptableRuntimeReflectionSystemWrapper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ScriptableRuntimeReflectionSystemWrapper)
namespace UnityEngine::Experimental::Rendering {
class IScriptableRuntimeReflectionSystem;
}
// Forward declare root types
namespace UnityEngine::Experimental::Rendering {
class ScriptableRuntimeReflectionSystemWrapper;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper);
// Dependencies System.Object
namespace UnityEngine::Experimental::Rendering {
// Is value type: false
// CS Name: UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemWrapper
class CORDL_TYPE ScriptableRuntimeReflectionSystemWrapper : public ::System::Object {
public:
  // Declarations
  /// @brief Field <implementation>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__implementation_k__BackingField,
                      put = __cordl_internal_set__implementation_k__BackingField)) ::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem* _implementation_k__BackingField;

  __declspec(property(get = get_implementation, put = set_implementation)) ::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem* implementation;

  /// @brief Method Internal_ScriptableRuntimeReflectionSystemWrapper_TickRealtimeProbes, addr 0x48d1540, size 0xc0, virtual false, abstract: false, final false
  inline void Internal_ScriptableRuntimeReflectionSystemWrapper_TickRealtimeProbes(::ByRef<bool> result);

  static inline ::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper* New_ctor();

  constexpr ::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem* const& __cordl_internal_get__implementation_k__BackingField() const;

  constexpr ::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem*& __cordl_internal_get__implementation_k__BackingField();

  constexpr void __cordl_internal_set__implementation_k__BackingField(::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem* value);

  /// @brief Method .ctor, addr 0x48d1528, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_implementation, addr 0x48d1530, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem* get_implementation();

  /// @brief Method set_implementation, addr 0x48d1538, size 0x8, virtual false, abstract: false, final false
  inline void set_implementation(::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScriptableRuntimeReflectionSystemWrapper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScriptableRuntimeReflectionSystemWrapper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScriptableRuntimeReflectionSystemWrapper(ScriptableRuntimeReflectionSystemWrapper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScriptableRuntimeReflectionSystemWrapper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScriptableRuntimeReflectionSystemWrapper(ScriptableRuntimeReflectionSystemWrapper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11318 };

  /// @brief Field <implementation>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem* ____implementation_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper, ____implementation_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Experimental::Rendering
NEED_NO_BOX(::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper*, "UnityEngine.Experimental.Rendering", "ScriptableRuntimeReflectionSystemWrapper");
