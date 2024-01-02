#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FontReference)
// Forward declare root types
namespace UnityEngine::TextCore::LowLevel {
struct FontReference;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::LowLevel::FontReference);
// Type: UnityEngine.TextCore.LowLevel::FontReference
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::TextCore::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15536))
// CS Name: ::UnityEngine.TextCore.LowLevel::FontReference
struct CORDL_TYPE FontReference {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "familyName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "styleName", ty: "::StringW", modifiers: "", def_value: None }, CppParam {
  // name: "faceIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "filePath", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr FontReference(::StringW familyName, ::StringW styleName, int32_t faceIndex, ::StringW filePath) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr FontReference();

  /// @brief Field familyName, offset: 0x0, size: 0x8, def value: None
  ::StringW familyName;

  /// @brief Field styleName, offset: 0x8, size: 0x8, def value: None
  ::StringW styleName;

  /// @brief Field faceIndex, offset: 0x10, size: 0x4, def value: None
  int32_t faceIndex;

  /// @brief Field filePath, offset: 0x18, size: 0x8, def value: None
  ::StringW filePath;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::LowLevel::FontReference, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::LowLevel::FontReference, familyName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::LowLevel::FontReference, styleName) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::LowLevel::FontReference, faceIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::LowLevel::FontReference, filePath) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::TextCore::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::LowLevel::FontReference, "UnityEngine.TextCore.LowLevel", "FontReference");
