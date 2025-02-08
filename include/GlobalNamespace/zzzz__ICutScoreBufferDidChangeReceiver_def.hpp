#pragma once
// IWYU pragma private; include "GlobalNamespace/ICutScoreBufferDidChangeReceiver.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ICutScoreBufferDidChangeReceiver)
namespace GlobalNamespace {
class CutScoreBuffer;
}
// Forward declare root types
namespace GlobalNamespace {
class ICutScoreBufferDidChangeReceiver;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ICutScoreBufferDidChangeReceiver);
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: ICutScoreBufferDidChangeReceiver
class CORDL_TYPE ICutScoreBufferDidChangeReceiver {
public:
  // Declarations
  /// @brief Method HandleCutScoreBufferDidChange, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void HandleCutScoreBufferDidChange(::GlobalNamespace::CutScoreBuffer* cutScoreBuffer);

  // Ctor Parameters [CppParam { name: "", ty: "ICutScoreBufferDidChangeReceiver", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ICutScoreBufferDidChangeReceiver(ICutScoreBufferDidChangeReceiver const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4676 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ICutScoreBufferDidChangeReceiver);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ICutScoreBufferDidChangeReceiver*, "", "ICutScoreBufferDidChangeReceiver");
