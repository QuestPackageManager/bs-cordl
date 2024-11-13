#pragma once
// IWYU pragma private; include "TMPro/TMP_SelectionCaret.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UI/zzzz__MaskableGraphic_def.hpp"
CORDL_MODULE_EXPORT(TMP_SelectionCaret)
namespace UnityEngine {
struct Rect;
}
// Forward declare root types
namespace TMPro {
class TMP_SelectionCaret;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::TMP_SelectionCaret);
// Type: TMPro::TMP_SelectionCaret
// SizeInfo { instance_size: 216, native_size: -1, calculated_instance_size: 216, calculated_native_size: 216, minimum_alignment: 8, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// CS Name: ::TMPro::TMP_SelectionCaret*
class CORDL_TYPE TMP_SelectionCaret : public ::UnityEngine::UI::MaskableGraphic {
public:
  // Declarations
  /// @brief Method Cull, addr 0x479b538, size 0xd0, virtual true, abstract: false, final false
  inline void Cull(::UnityEngine::Rect clipRect, bool validRect);

  static inline ::TMPro::TMP_SelectionCaret* New_ctor();

  /// @brief Method UpdateGeometry, addr 0x479b608, size 0x4, virtual true, abstract: false, final false
  inline void UpdateGeometry();

  /// @brief Method .ctor, addr 0x479b60c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_SelectionCaret();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TMP_SelectionCaret", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_SelectionCaret(TMP_SelectionCaret&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_SelectionCaret", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_SelectionCaret(TMP_SelectionCaret const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14496 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_SelectionCaret, 0xd8>, "Size mismatch!");

} // namespace TMPro
NEED_NO_BOX(::TMPro::TMP_SelectionCaret);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_SelectionCaret*, "TMPro", "TMP_SelectionCaret");
