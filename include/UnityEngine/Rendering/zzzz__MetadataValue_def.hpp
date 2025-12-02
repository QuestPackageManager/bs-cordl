#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/MetadataValue.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MetadataValue)
// Forward declare root types
namespace UnityEngine::Rendering {
struct MetadataValue;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::MetadataValue);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.MetadataValue
struct CORDL_TYPE MetadataValue {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr MetadataValue();

  // Ctor Parameters [CppParam { name: "NameID", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Value", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr MetadataValue(int32_t NameID, uint32_t Value) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10837 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field NameID, offset: 0x0, size: 0x4, def value: None
  int32_t NameID;

  /// @brief Field Value, offset: 0x4, size: 0x4, def value: None
  uint32_t Value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::MetadataValue, NameID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::MetadataValue, Value) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::MetadataValue, 0x8>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::MetadataValue, "UnityEngine.Rendering", "MetadataValue");
