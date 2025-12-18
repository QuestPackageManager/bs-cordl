#pragma once
// IWYU pragma private; include "UnityEngine/Playables/DataPlayableOutput.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableOutputHandle_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(DataPlayableOutput)
namespace System {
class Object;
}
namespace UnityEngine::Playables {
class IPlayableOutput;
}
namespace UnityEngine::Playables {
struct PlayableOutputHandle;
}
// Forward declare root types
namespace UnityEngine::Playables {
struct DataPlayableOutput;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Playables::DataPlayableOutput);
// Dependencies UnityEngine.Playables.PlayableOutputHandle
namespace UnityEngine::Playables {
// Is value type: true
// CS Name: UnityEngine.Playables.DataPlayableOutput
struct CORDL_TYPE DataPlayableOutput {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::Playables::IPlayableOutput"
  constexpr operator ::UnityEngine::Playables::IPlayableOutput*();

  /// @brief Method GetHandle, addr 0x6967734, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::Playables::PlayableOutputHandle GetHandle();

  /// @brief Method Internal_CallOnPlayerChanged, addr 0x6967740, size 0x184, virtual false, abstract: false, final false
  static inline void Internal_CallOnPlayerChanged(::UnityEngine::Playables::PlayableOutputHandle handle, ::System::Object* previousPlayer, ::System::Object* currentPlayer);

  /// @brief Method .ctor, addr 0x6967620, size 0x114, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Playables::PlayableOutputHandle handle);

  /// @brief Convert to "::UnityEngine::Playables::IPlayableOutput"
  constexpr ::UnityEngine::Playables::IPlayableOutput* i___UnityEngine__Playables__IPlayableOutput();

  // Ctor Parameters []
  // @brief default ctor
  constexpr DataPlayableOutput();

  // Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableOutputHandle", modifiers: "", def_value: None }]
  constexpr DataPlayableOutput(::UnityEngine::Playables::PlayableOutputHandle m_Handle) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22348 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_Handle, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Playables::PlayableOutputHandle m_Handle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Playables::DataPlayableOutput, m_Handle) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Playables::DataPlayableOutput, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Playables
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::DataPlayableOutput, "UnityEngine.Playables", "DataPlayableOutput");
