#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableOutputHandle_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ScriptPlayableOutput)
namespace UnityEngine::Playables {
class IPlayableOutput;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct PlayableOutputHandle;
}
namespace UnityEngine::Playables {
struct PlayableOutput;
}
// Forward declare root types
namespace UnityEngine::Playables {
struct ScriptPlayableOutput;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Playables::ScriptPlayableOutput);
// Type: UnityEngine.Playables::ScriptPlayableOutput
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Playables {
// Is value type: true
// CS Name: ::UnityEngine.Playables::ScriptPlayableOutput
struct CORDL_TYPE ScriptPlayableOutput {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::Playables::IPlayableOutput"
  constexpr operator ::UnityEngine::Playables::IPlayableOutput*();

  /// @brief Method Create, addr 0x2debdfc, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::Playables::ScriptPlayableOutput Create(::UnityEngine::Playables::PlayableGraph graph, ::StringW name);

  /// @brief Method GetHandle, addr 0x2debffc, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::Playables::PlayableOutputHandle GetHandle();

  /// @brief Method .ctor, addr 0x2debf40, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Playables::PlayableOutputHandle handle);

  /// @brief Method get_Null, addr 0x2debec8, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::Playables::ScriptPlayableOutput get_Null();

  /// @brief Convert to "::UnityEngine::Playables::IPlayableOutput"
  constexpr ::UnityEngine::Playables::IPlayableOutput* i___UnityEngine__Playables__IPlayableOutput();

  /// @brief Method op_Implicit, addr 0x2dec008, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Playables::PlayableOutput op_Implicit___UnityEngine__Playables__PlayableOutput(::UnityEngine::Playables::ScriptPlayableOutput output);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ScriptPlayableOutput();

  // Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableOutputHandle", modifiers: "", def_value: None }]
  constexpr ScriptPlayableOutput(::UnityEngine::Playables::PlayableOutputHandle m_Handle) noexcept;

  /// @brief Field m_Handle, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Playables::PlayableOutputHandle m_Handle;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Playables::ScriptPlayableOutput, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Playables::ScriptPlayableOutput, m_Handle) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Playables
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::ScriptPlayableOutput, "UnityEngine.Playables", "ScriptPlayableOutput");
