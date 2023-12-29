#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BuiltinRuntimeReflectionSystem)
namespace UnityEngine::Experimental::Rendering {
class IScriptableRuntimeReflectionSystem;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace UnityEngine::Experimental::Rendering {
class BuiltinRuntimeReflectionSystem;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem);
// Type: UnityEngine.Experimental.Rendering::BuiltinRuntimeReflectionSystem
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10332))
// CS Name: ::UnityEngine.Experimental.Rendering::BuiltinRuntimeReflectionSystem*
class CORDL_TYPE BuiltinRuntimeReflectionSystem : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem"
  constexpr operator ::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method TickRealtimeProbes addr 0x2b8c330 size 0x28 virtual true final true
  inline bool TickRealtimeProbes();

  /// @brief Method Dispose addr 0x2b8c380 size 0x4 virtual true final true
  inline void Dispose();

  /// @brief Method Dispose addr 0x2b8c384 size 0x4 virtual false final false
  inline void Dispose(bool disposing);

  /// @brief Method BuiltinUpdate addr 0x2b8c358 size 0x28 virtual false final false
  static inline bool BuiltinUpdate();

  /// @brief Method Internal_BuiltinRuntimeReflectionSystem_New addr 0x2b8c388 size 0x5c virtual false final false
  static inline ::UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem* Internal_BuiltinRuntimeReflectionSystem_New();

  static inline ::UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem* New_ctor();

  /// @brief Method .ctor addr 0x2b8c3e4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BuiltinRuntimeReflectionSystem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BuiltinRuntimeReflectionSystem(BuiltinRuntimeReflectionSystem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BuiltinRuntimeReflectionSystem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BuiltinRuntimeReflectionSystem(BuiltinRuntimeReflectionSystem const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BuiltinRuntimeReflectionSystem();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Experimental::Rendering
NEED_NO_BOX(::UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem*, "UnityEngine.Experimental.Rendering", "BuiltinRuntimeReflectionSystem");
