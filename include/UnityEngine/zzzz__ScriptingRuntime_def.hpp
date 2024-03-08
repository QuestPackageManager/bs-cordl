#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ScriptingRuntime)
// Forward declare root types
namespace UnityEngine {
class ScriptingRuntime;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ScriptingRuntime);
// Type: UnityEngine::ScriptingRuntime
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::ScriptingRuntime*
class CORDL_TYPE ScriptingRuntime : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetAllUserAssemblies, addr 0x2e1e878, size 0x28, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> GetAllUserAssemblies();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScriptingRuntime();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScriptingRuntime", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScriptingRuntime(ScriptingRuntime&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScriptingRuntime", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScriptingRuntime(ScriptingRuntime const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ScriptingRuntime, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::ScriptingRuntime);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ScriptingRuntime*, "UnityEngine", "ScriptingRuntime");
