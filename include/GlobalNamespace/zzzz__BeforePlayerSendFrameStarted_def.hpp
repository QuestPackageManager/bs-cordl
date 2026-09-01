#pragma once
// IWYU pragma private; include "GlobalNamespace\BeforePlayerSendFrameStarted.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__UnityPlayerLoopMarker_1_def.hpp"
CORDL_MODULE_EXPORT(BeforePlayerSendFrameStarted)
// Forward declare root types
namespace GlobalNamespace {
class BeforePlayerSendFrameStarted;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BeforePlayerSendFrameStarted*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BeforePlayerSendFrameStarted*, "", "BeforePlayerSendFrameStarted");
// Dependencies UnityPlayerLoopMarker`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeforePlayerSendFrameStarted
class CORDL_TYPE BeforePlayerSendFrameStarted : public ::GlobalNamespace::UnityPlayerLoopMarker_1<::GlobalNamespace::BeforePlayerSendFrameStarted*> {
public:
  // Declarations
  static inline ::GlobalNamespace::BeforePlayerSendFrameStarted* New_ctor();

  /// @brief Method .ctor, addr 0x5854038, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeforePlayerSendFrameStarted();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeforePlayerSendFrameStarted", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeforePlayerSendFrameStarted(BeforePlayerSendFrameStarted&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeforePlayerSendFrameStarted", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeforePlayerSendFrameStarted(BeforePlayerSendFrameStarted const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22777 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::BeforePlayerSendFrameStarted) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
