#pragma once
// IWYU pragma private; include "UnityEngine/Playables/ScriptPlayableBinding.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
MARK_REF_PTR_T(::UnityEngine::Playables::ScriptPlayableBinding);
// Type: UnityEngine.Playables::ScriptPlayableBinding
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Playables {
// Is value type: false
// CS Name: ::UnityEngine.Playables::ScriptPlayableBinding*
class CORDL_TYPE ScriptPlayableBinding : public ::System::Object {
public:
  // Declarations
  /// @brief Method Create, addr 0x3470bec, size 0xbc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Playables::PlayableBinding Create(::StringW name, ::UnityEngine::Object* key, ::System::Type* type);

  /// @brief Method CreateScriptOutput, addr 0x3470ca8, size 0x4, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Playables::ScriptPlayableBinding, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Playables
NEED_NO_BOX(::UnityEngine::Playables::ScriptPlayableBinding);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::ScriptPlayableBinding*, "UnityEngine.Playables", "ScriptPlayableBinding");
