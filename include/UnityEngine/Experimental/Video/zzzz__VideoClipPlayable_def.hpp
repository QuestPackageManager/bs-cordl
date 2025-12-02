#pragma once
// IWYU pragma private; include "UnityEngine/Experimental/Video/VideoClipPlayable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableHandle_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(VideoClipPlayable)
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
namespace UnityEngine::Experimental::Video {
struct VideoClipPlayable;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Experimental::Video::VideoClipPlayable);
// Dependencies UnityEngine.Playables.PlayableHandle
namespace UnityEngine::Experimental::Video {
// Is value type: true
// CS Name: UnityEngine.Experimental.Video.VideoClipPlayable
struct CORDL_TYPE VideoClipPlayable {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Experimental::Video::VideoClipPlayable>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Experimental::Video::VideoClipPlayable>*();

  /// @brief Convert operator to "::UnityEngine::Playables::IPlayable"
  constexpr operator ::UnityEngine::Playables::IPlayable*();

  /// @brief Method Equals, addr 0x6bf81e4, size 0x7c, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Experimental::Video::VideoClipPlayable other);

  /// @brief Method GetHandle, addr 0x6bf81d8, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::Playables::PlayableHandle GetHandle();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Experimental::Video::VideoClipPlayable>"
  constexpr ::System::IEquatable_1<::UnityEngine::Experimental::Video::VideoClipPlayable>* i___System__IEquatable_1___UnityEngine__Experimental__Video__VideoClipPlayable_();

  /// @brief Convert to "::UnityEngine::Playables::IPlayable"
  constexpr ::UnityEngine::Playables::IPlayable* i___UnityEngine__Playables__IPlayable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr VideoClipPlayable();

  // Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: None }]
  constexpr VideoClipPlayable(::UnityEngine::Playables::PlayableHandle m_Handle) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21990 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_Handle, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Playables::PlayableHandle m_Handle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Experimental::Video::VideoClipPlayable, m_Handle) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Video::VideoClipPlayable, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Experimental::Video
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Video::VideoClipPlayable, "UnityEngine.Experimental.Video", "VideoClipPlayable");
