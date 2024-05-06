#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BuiltinRuntimeReflectionSystem)
namespace System {
class IDisposable;
}
namespace UnityEngine::Experimental::Rendering {
class IScriptableRuntimeReflectionSystem;
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
// CS Name: ::UnityEngine.Experimental.Rendering::BuiltinRuntimeReflectionSystem*
class CORDL_TYPE BuiltinRuntimeReflectionSystem : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem"
  constexpr operator ::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem*() noexcept;

  /// @brief Method BuiltinUpdate, addr 0x3435dc4, size 0x28, virtual false, abstract: false, final false
  static inline bool BuiltinUpdate();

  /// @brief Method Dispose, addr 0x3435dec, size 0x4, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x3435df0, size 0x4, virtual false, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Internal_BuiltinRuntimeReflectionSystem_New, addr 0x3435df4, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem* Internal_BuiltinRuntimeReflectionSystem_New();

  static inline ::UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem* New_ctor();

  /// @brief Method TickRealtimeProbes, addr 0x3435d9c, size 0x28, virtual true, abstract: false, final true
  inline bool TickRealtimeProbes();

  /// @brief Method .ctor, addr 0x3435e50, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Convert to "::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem"
  constexpr ::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem* i___UnityEngine__Experimental__Rendering__IScriptableRuntimeReflectionSystem() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BuiltinRuntimeReflectionSystem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BuiltinRuntimeReflectionSystem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BuiltinRuntimeReflectionSystem(BuiltinRuntimeReflectionSystem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BuiltinRuntimeReflectionSystem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BuiltinRuntimeReflectionSystem(BuiltinRuntimeReflectionSystem const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Experimental::Rendering
NEED_NO_BOX(::UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem*, "UnityEngine.Experimental.Rendering", "BuiltinRuntimeReflectionSystem");
