#pragma once
// IWYU pragma private; include "GlobalNamespace/AfterPlayerSendFrameStarted.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__UnityPlayerLoopMarker_1_def.hpp"
CORDL_MODULE_EXPORT(AfterPlayerSendFrameStarted)
// Forward declare root types
namespace GlobalNamespace {
class AfterPlayerSendFrameStarted;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AfterPlayerSendFrameStarted*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AfterPlayerSendFrameStarted*, "", "AfterPlayerSendFrameStarted");
// Dependencies UnityPlayerLoopMarker`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: AfterPlayerSendFrameStarted
class CORDL_TYPE AfterPlayerSendFrameStarted : public ::GlobalNamespace::UnityPlayerLoopMarker_1<::GlobalNamespace::AfterPlayerSendFrameStarted*> {
public:
  // Declarations
  static inline ::GlobalNamespace::AfterPlayerSendFrameStarted* New_ctor();

  /// @brief Method .ctor, addr 0x5856aa0, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AfterPlayerSendFrameStarted();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AfterPlayerSendFrameStarted", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AfterPlayerSendFrameStarted(AfterPlayerSendFrameStarted&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AfterPlayerSendFrameStarted", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AfterPlayerSendFrameStarted(AfterPlayerSendFrameStarted const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22729 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::AfterPlayerSendFrameStarted) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
