#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPlayableBehaviour)
namespace System {
class Object;
}
namespace UnityEngine::Playables {
struct FrameData;
}
namespace UnityEngine::Playables {
struct Playable;
}
// Forward declare root types
namespace UnityEngine::Playables {
class IPlayableBehaviour;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Playables::IPlayableBehaviour);
// Type: UnityEngine.Playables::IPlayableBehaviour
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Playables {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10441))
// CS Name: ::UnityEngine.Playables::IPlayableBehaviour*
class CORDL_TYPE IPlayableBehaviour {
public:
  // Declarations
  /// @brief Method OnGraphStart, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnGraphStart(::UnityEngine::Playables::Playable playable);

  /// @brief Method OnGraphStop, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnGraphStop(::UnityEngine::Playables::Playable playable);

  /// @brief Method OnPlayableCreate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnPlayableCreate(::UnityEngine::Playables::Playable playable);

  /// @brief Method OnPlayableDestroy, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnPlayableDestroy(::UnityEngine::Playables::Playable playable);

  /// @brief Method OnBehaviourPlay, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnBehaviourPlay(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info);

  /// @brief Method OnBehaviourPause, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnBehaviourPause(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info);

  /// @brief Method PrepareFrame, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void PrepareFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info);

  /// @brief Method ProcessFrame, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::System::Object* playerData);

  // Ctor Parameters [CppParam { name: "", ty: "IPlayableBehaviour", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IPlayableBehaviour(IPlayableBehaviour&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IPlayableBehaviour", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPlayableBehaviour(IPlayableBehaviour const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Playables
NEED_NO_BOX(::UnityEngine::Playables::IPlayableBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::IPlayableBehaviour*, "UnityEngine.Playables", "IPlayableBehaviour");
