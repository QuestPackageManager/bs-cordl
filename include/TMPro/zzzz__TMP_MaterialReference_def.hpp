#pragma once
// IWYU pragma private; include "TMPro/TMP_MaterialReference.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_MaterialReference)
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace TMPro {
struct TMP_MaterialReference;
}
// Write type traits
MARK_VAL_T(::TMPro::TMP_MaterialReference);
// Type: TMPro::TMP_MaterialReference
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: true
// CS Name: ::TMPro::TMP_MaterialReference
struct CORDL_TYPE TMP_MaterialReference {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_MaterialReference();

  // Ctor Parameters [CppParam { name: "material", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: None }, CppParam { name: "referenceCount", ty: "int32_t", modifiers: "",
  // def_value: None }]
  constexpr TMP_MaterialReference(::UnityW<::UnityEngine::Material> material, int32_t referenceCount) noexcept;

  /// @brief Field material, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> material;

  /// @brief Field referenceCount, offset: 0x8, size: 0x4, def value: None
  int32_t referenceCount;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_MaterialReference, 0x10>, "Size mismatch!");

static_assert(offsetof(::TMPro::TMP_MaterialReference, material) == 0x0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_MaterialReference, referenceCount) == 0x8, "Offset mismatch!");

} // namespace TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_MaterialReference, "TMPro", "TMP_MaterialReference");
