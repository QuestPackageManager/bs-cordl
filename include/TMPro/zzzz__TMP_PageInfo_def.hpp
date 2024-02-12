#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_PageInfo)
// Forward declare root types
namespace TMPro {
struct TMP_PageInfo;
}
// Write type traits
MARK_VAL_T(::TMPro::TMP_PageInfo);
// Type: TMPro::TMP_PageInfo
// SizeInfo { instance_size: 20, native_size: 20, calculated_instance_size: 20, calculated_native_size: 36, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12216))
// CS Name: ::TMPro::TMP_PageInfo
struct CORDL_TYPE TMP_PageInfo {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "firstCharacterIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lastCharacterIndex", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "ascender", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "baseLine", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "descender", ty:
  // "float_t", modifiers: "", def_value: None }]
  constexpr TMP_PageInfo(int32_t firstCharacterIndex, int32_t lastCharacterIndex, float_t ascender, float_t baseLine, float_t descender) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_PageInfo();

  /// @brief Field firstCharacterIndex, offset: 0x0, size: 0x4, def value: None
  int32_t firstCharacterIndex;

  /// @brief Field lastCharacterIndex, offset: 0x4, size: 0x4, def value: None
  int32_t lastCharacterIndex;

  /// @brief Field ascender, offset: 0x8, size: 0x4, def value: None
  float_t ascender;

  /// @brief Field baseLine, offset: 0xc, size: 0x4, def value: None
  float_t baseLine;

  /// @brief Field descender, offset: 0x10, size: 0x4, def value: None
  float_t descender;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x14 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_PageInfo, 0x14>, "Size mismatch!");

static_assert(offsetof(::TMPro::TMP_PageInfo, firstCharacterIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_PageInfo, lastCharacterIndex) == 0x4, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_PageInfo, ascender) == 0x8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_PageInfo, baseLine) == 0xc, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_PageInfo, descender) == 0x10, "Offset mismatch!");

} // namespace TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_PageInfo, "TMPro", "TMP_PageInfo");
