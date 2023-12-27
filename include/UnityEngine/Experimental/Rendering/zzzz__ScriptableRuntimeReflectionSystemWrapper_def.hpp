#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
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
// Type: UnityEngine.Experimental.Rendering::ScriptableRuntimeReflectionSystemWrapper
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10409))
// CS Name: ::UnityEngine.Experimental.Rendering::ScriptableRuntimeReflectionSystemWrapper*
class CORDL_TYPE ScriptableRuntimeReflectionSystemWrapper : public ::System::Object {
public:
  // Declarations
  /// @brief Field <implementation>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__implementation_k__BackingField,
                      put = __set__implementation_k__BackingField))::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem* _implementation_k__BackingField;

  __declspec(property(get = get_implementation, put = set_implementation))::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem* implementation;

  constexpr ::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem*& __get__implementation_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem*> const& __get__implementation_k__BackingField() const;

  constexpr void __set__implementation_k__BackingField(::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem* value);

  /// @brief Method get_implementation addr 0x2cf45ac size 0x8 virtual false final false
  inline ::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem* get_implementation();

  /// @brief Method set_implementation addr 0x2cf45b4 size 0x8 virtual false final false
  inline void set_implementation(::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem* value);

  /// @brief Method Internal_ScriptableRuntimeReflectionSystemWrapper_TickRealtimeProbes addr 0x2cf45bc size 0xb4 virtual false final false
  inline void Internal_ScriptableRuntimeReflectionSystemWrapper_TickRealtimeProbes(ByRef<bool> result);

  static inline ::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper* New_ctor();

  /// @brief Method .ctor addr 0x2cf45a4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ScriptableRuntimeReflectionSystemWrapper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScriptableRuntimeReflectionSystemWrapper(ScriptableRuntimeReflectionSystemWrapper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScriptableRuntimeReflectionSystemWrapper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScriptableRuntimeReflectionSystemWrapper(ScriptableRuntimeReflectionSystemWrapper const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScriptableRuntimeReflectionSystemWrapper();

public:
  /// @brief Field <implementation>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem* ____implementation_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Experimental::Rendering
NEED_NO_BOX(::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper*, "UnityEngine.Experimental.Rendering", "ScriptableRuntimeReflectionSystemWrapper");
