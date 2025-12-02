#pragma once
// IWYU pragma private; include "GlobalNamespace/TextureProcessor3DMixerBehaviour.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
CORDL_MODULE_EXPORT(TextureProcessor3DMixerBehaviour)
namespace GlobalNamespace {
class TextureProcessor3D;
}
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
namespace GlobalNamespace {
class TextureProcessor3DMixerBehaviour;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TextureProcessor3DMixerBehaviour);
// Dependencies UnityEngine.Playables.PlayableBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: TextureProcessor3DMixerBehaviour
class CORDL_TYPE TextureProcessor3DMixerBehaviour : public ::UnityEngine::Playables::PlayableBehaviour {
public:
  // Declarations
  /// @brief Field _trackBinding, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__trackBinding, put = __cordl_internal_set__trackBinding)) ::UnityW<::GlobalNamespace::TextureProcessor3D> _trackBinding;

  static inline ::GlobalNamespace::TextureProcessor3DMixerBehaviour* New_ctor();

  /// @brief Method ProcessFrame, addr 0x57178ec, size 0xa5c, virtual true, abstract: false, final false
  inline void ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::System::Object* playerData);

  constexpr ::UnityW<::GlobalNamespace::TextureProcessor3D> const& __cordl_internal_get__trackBinding() const;

  constexpr ::UnityW<::GlobalNamespace::TextureProcessor3D>& __cordl_internal_get__trackBinding();

  constexpr void __cordl_internal_set__trackBinding(::UnityW<::GlobalNamespace::TextureProcessor3D> value);

  /// @brief Method .ctor, addr 0x5718348, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextureProcessor3DMixerBehaviour();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextureProcessor3DMixerBehaviour", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextureProcessor3DMixerBehaviour(TextureProcessor3DMixerBehaviour&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextureProcessor3DMixerBehaviour", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextureProcessor3DMixerBehaviour(TextureProcessor3DMixerBehaviour const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6785 };

  /// @brief Field _trackBinding, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::TextureProcessor3D> ____trackBinding;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TextureProcessor3DMixerBehaviour, ____trackBinding) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TextureProcessor3DMixerBehaviour, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TextureProcessor3DMixerBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TextureProcessor3DMixerBehaviour*, "", "TextureProcessor3DMixerBehaviour");
