#pragma once
// IWYU pragma private; include "GlobalNamespace/ICutScoreBufferDidFinishReceiver.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ICutScoreBufferDidFinishReceiver)
namespace GlobalNamespace {
class CutScoreBuffer;
}
// Forward declare root types
namespace GlobalNamespace {
class ICutScoreBufferDidFinishReceiver;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ICutScoreBufferDidFinishReceiver*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ICutScoreBufferDidFinishReceiver*, "", "ICutScoreBufferDidFinishReceiver");
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: ICutScoreBufferDidFinishReceiver
class CORDL_TYPE ICutScoreBufferDidFinishReceiver {
public:
  // Declarations
  /// @brief Method HandleCutScoreBufferDidFinish, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void HandleCutScoreBufferDidFinish(::GlobalNamespace::CutScoreBuffer* cutScoreBuffer);

  // Ctor Parameters [CppParam { name: "", ty: "ICutScoreBufferDidFinishReceiver", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ICutScoreBufferDidFinishReceiver(ICutScoreBufferDidFinishReceiver const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6226 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
