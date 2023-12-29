#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AlignmentUtils)
// Forward declare root types
namespace UnityEngine::UIElements {
class AlignmentUtils;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::AlignmentUtils);
// Type: UnityEngine.UIElements::AlignmentUtils
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6858))
// CS Name: ::UnityEngine.UIElements::AlignmentUtils*
class CORDL_TYPE AlignmentUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Method RoundToPixelGrid addr 0x2c50710 size 0x1c virtual false final false
  static inline float_t RoundToPixelGrid(float_t v, float_t pixelsPerPoint, float_t offset);

  /// @brief Method CeilToPixelGrid addr 0x2c5072c size 0x14 virtual false final false
  static inline float_t CeilToPixelGrid(float_t v, float_t pixelsPerPoint, float_t offset);

  // Ctor Parameters [CppParam { name: "", ty: "AlignmentUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AlignmentUtils(AlignmentUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AlignmentUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AlignmentUtils(AlignmentUtils const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AlignmentUtils();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::AlignmentUtils, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::AlignmentUtils);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::AlignmentUtils*, "UnityEngine.UIElements", "AlignmentUtils");
