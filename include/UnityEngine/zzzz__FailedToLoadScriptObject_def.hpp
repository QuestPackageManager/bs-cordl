#pragma once
// IWYU pragma private; include "UnityEngine\FailedToLoadScriptObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(FailedToLoadScriptObject)
// Forward declare root types
namespace UnityEngine {
class FailedToLoadScriptObject;
}
// Write type traits
MARK_REF_T(::UnityEngine::FailedToLoadScriptObject*);
DEFINE_IL2CPP_CLASS(::UnityEngine::FailedToLoadScriptObject*, "UnityEngine", "FailedToLoadScriptObject");
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.FailedToLoadScriptObject
class CORDL_TYPE FailedToLoadScriptObject : public ::UnityEngine::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FailedToLoadScriptObject();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FailedToLoadScriptObject", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FailedToLoadScriptObject(FailedToLoadScriptObject&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FailedToLoadScriptObject", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FailedToLoadScriptObject(FailedToLoadScriptObject const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10345 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::FailedToLoadScriptObject) == 0x18, "Size mismatch!");

} // namespace UnityEngine
