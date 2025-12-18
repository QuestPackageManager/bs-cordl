#pragma once
// IWYU pragma private; include "UnityEngine/Experimental/Playables/TextureMixerPlayable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableHandle_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(TextureMixerPlayable)
namespace System {
template <typename T> class IEquatable_1;
}
namespace UnityEngine::Playables {
class IPlayable;
}
namespace UnityEngine::Playables {
struct PlayableHandle;
}
// Forward declare root types
namespace UnityEngine::Experimental::Playables {
struct TextureMixerPlayable;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Experimental::Playables::TextureMixerPlayable);
// Dependencies UnityEngine.Playables.PlayableHandle
namespace UnityEngine::Experimental::Playables {
// Is value type: true
// CS Name: UnityEngine.Experimental.Playables.TextureMixerPlayable
struct CORDL_TYPE TextureMixerPlayable {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Experimental::Playables::TextureMixerPlayable>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Experimental::Playables::TextureMixerPlayable>*();

  /// @brief Convert operator to "::UnityEngine::Playables::IPlayable"
  constexpr operator ::UnityEngine::Playables::IPlayable*();

  /// @brief Method Equals, addr 0x69654d4, size 0x7c, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Experimental::Playables::TextureMixerPlayable other);

  /// @brief Method GetHandle, addr 0x69654c8, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::Playables::PlayableHandle GetHandle();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Experimental::Playables::TextureMixerPlayable>"
  constexpr ::System::IEquatable_1<::UnityEngine::Experimental::Playables::TextureMixerPlayable>* i___System__IEquatable_1___UnityEngine__Experimental__Playables__TextureMixerPlayable_();

  /// @brief Convert to "::UnityEngine::Playables::IPlayable"
  constexpr ::UnityEngine::Playables::IPlayable* i___UnityEngine__Playables__IPlayable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr TextureMixerPlayable();

  // Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: None }]
  constexpr TextureMixerPlayable(::UnityEngine::Playables::PlayableHandle m_Handle) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10893 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_Handle, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Playables::PlayableHandle m_Handle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Experimental::Playables::TextureMixerPlayable, m_Handle) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Playables::TextureMixerPlayable, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Experimental::Playables
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Playables::TextureMixerPlayable, "UnityEngine.Experimental.Playables", "TextureMixerPlayable");
