#pragma once
// IWYU pragma private; include "GlobalNamespace/INoteCutSoundEffectDidFinishEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(INoteCutSoundEffectDidFinishEvent)
namespace GlobalNamespace {
class NoteCutSoundEffect;
}
// Forward declare root types
namespace GlobalNamespace {
class INoteCutSoundEffectDidFinishEvent;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::INoteCutSoundEffectDidFinishEvent*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::INoteCutSoundEffectDidFinishEvent*, "", "INoteCutSoundEffectDidFinishEvent");
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: INoteCutSoundEffectDidFinishEvent
class CORDL_TYPE INoteCutSoundEffectDidFinishEvent {
public:
  // Declarations
  /// @brief Method HandleNoteCutSoundEffectDidFinish, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void HandleNoteCutSoundEffectDidFinish(::GlobalNamespace::NoteCutSoundEffect* noteCutSoundEffect);

  // Ctor Parameters [CppParam { name: "", ty: "INoteCutSoundEffectDidFinishEvent", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  INoteCutSoundEffectDidFinishEvent(INoteCutSoundEffectDidFinishEventconst&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5571 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
