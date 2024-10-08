#pragma once
// IWYU pragma private; include "GlobalNamespace/ICutScoreBufferDidFinishReceiver.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
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
MARK_REF_PTR_T(::GlobalNamespace::ICutScoreBufferDidFinishReceiver);
// Type: ::ICutScoreBufferDidFinishReceiver
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ICutScoreBufferDidFinishReceiver*
class CORDL_TYPE ICutScoreBufferDidFinishReceiver {
public:
  // Declarations
  /// @brief Method HandleCutScoreBufferDidFinish, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void HandleCutScoreBufferDidFinish(::GlobalNamespace::CutScoreBuffer* cutScoreBuffer);

  // Ctor Parameters [CppParam { name: "", ty: "ICutScoreBufferDidFinishReceiver", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ICutScoreBufferDidFinishReceiver(ICutScoreBufferDidFinishReceiver&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ICutScoreBufferDidFinishReceiver", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ICutScoreBufferDidFinishReceiver(ICutScoreBufferDidFinishReceiver const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4658 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ICutScoreBufferDidFinishReceiver);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ICutScoreBufferDidFinishReceiver*, "", "ICutScoreBufferDidFinishReceiver");
