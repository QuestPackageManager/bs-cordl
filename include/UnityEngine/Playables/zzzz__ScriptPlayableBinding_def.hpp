#pragma once
// IWYU pragma private; include "UnityEngine\Playables\ScriptPlayableBinding.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ScriptPlayableBinding)
namespace System {
class Type;
}
namespace UnityEngine::Playables {
struct PlayableBinding;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct PlayableOutput;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::Playables {
class ScriptPlayableBinding;
}
// Write type traits
MARK_REF_T(::UnityEngine::Playables::ScriptPlayableBinding*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Playables::ScriptPlayableBinding*, "UnityEngine.Playables", "ScriptPlayableBinding");
// Dependencies System.Object
namespace UnityEngine::Playables {
// Is value type: false
// CS Name: UnityEngine.Playables.ScriptPlayableBinding
class CORDL_TYPE ScriptPlayableBinding : public ::System::Object {
public:
  // Declarations
  /// @brief Method Create, addr 0x6b06944, size 0xc0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Playables::PlayableBinding Create(::StringW name, ::UnityEngine::Object* key, ::System::Type* type);

  /// @brief Method CreateScriptOutput, addr 0x6b06a04, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Playables::PlayableOutput CreateScriptOutput(::UnityEngine::Playables::PlayableGraph graph, ::StringW name);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScriptPlayableBinding();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScriptPlayableBinding", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScriptPlayableBinding(ScriptPlayableBinding&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScriptPlayableBinding", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScriptPlayableBinding(ScriptPlayableBinding const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10687 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Playables::ScriptPlayableBinding) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Playables
