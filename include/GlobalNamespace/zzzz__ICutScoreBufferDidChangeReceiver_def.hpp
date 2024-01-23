#pragma once
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
// Type: ::ICutScoreBufferDidChangeReceiver
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5312))
// CS Name: ::ICutScoreBufferDidChangeReceiver*
class CORDL_TYPE ICutScoreBufferDidChangeReceiver {
public:
  // Declarations
  /// @brief Method HandleCutScoreBufferDidChange, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void HandleCutScoreBufferDidChange(::GlobalNamespace::CutScoreBuffer* cutScoreBuffer);

  // Ctor Parameters [CppParam { name: "", ty: "ICutScoreBufferDidChangeReceiver", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ICutScoreBufferDidChangeReceiver(ICutScoreBufferDidChangeReceiver&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ICutScoreBufferDidChangeReceiver", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ICutScoreBufferDidChangeReceiver(ICutScoreBufferDidChangeReceiver const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ICutScoreBufferDidChangeReceiver);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ICutScoreBufferDidChangeReceiver*, "", "ICutScoreBufferDidChangeReceiver");
