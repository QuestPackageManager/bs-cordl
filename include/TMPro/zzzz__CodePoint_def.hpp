#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CodePoint)
// Forward declare root types
namespace TMPro {
class CodePoint;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::CodePoint);
// Type: TMPro::CodePoint
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12411))
// CS Name: ::TMPro::CodePoint*
class CORDL_TYPE CodePoint : public ::System::Object {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "CodePoint", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CodePoint(CodePoint&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CodePoint", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CodePoint(CodePoint const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CodePoint();

public:
  /// @brief Field SPACE offset 0xffffffff size 0x4
  static constexpr uint32_t SPACE{ static_cast<uint32_t>(0x25232220u) };

  /// @brief Field DOUBLE_QUOTE offset 0xffffffff size 0x4
  static constexpr uint32_t DOUBLE_QUOTE{ static_cast<uint32_t>(0x2b252322u) };

  /// @brief Field NUMBER_SIGN offset 0xffffffff size 0x4
  static constexpr uint32_t NUMBER_SIGN{ static_cast<uint32_t>(0x2d2b2523u) };

  /// @brief Field PERCENTAGE offset 0xffffffff size 0x4
  static constexpr uint32_t PERCENTAGE{ static_cast<uint32_t>(0x2e2d2b25u) };

  /// @brief Field PLUS offset 0xffffffff size 0x4
  static constexpr uint32_t PLUS{ static_cast<uint32_t>(0x2d2e2d2bu) };

  /// @brief Field MINUS offset 0xffffffff size 0x4
  static constexpr uint32_t MINUS{ static_cast<uint32_t>(0x802d2e2du) };

  /// @brief Field PERIOD offset 0xffffffff size 0x4
  static constexpr uint32_t PERIOD{ static_cast<uint32_t>(0xad802d2eu) };

  /// @brief Field HYPHEN_MINUS offset 0xffffffff size 0x4
  static constexpr uint32_t HYPHEN_MINUS{ static_cast<uint32_t>(0xa0ad802du) };

  /// @brief Field SOFT_HYPHEN offset 0xffffffff size 0x4
  static constexpr uint32_t SOFT_HYPHEN{ static_cast<uint32_t>(0x10a0ad80u) };

  /// @brief Field HYPHEN offset 0xffffffff size 0x4
  static constexpr uint32_t HYPHEN{ static_cast<uint32_t>(0x11a010a0u) };

  /// @brief Field NON_BREAKING_HYPHEN offset 0xffffffff size 0x4
  static constexpr uint32_t NON_BREAKING_HYPHEN{ static_cast<uint32_t>(0xba011a0u) };

  /// @brief Field ZERO_WIDTH_SPACE offset 0xffffffff size 0x4
  static constexpr uint32_t ZERO_WIDTH_SPACE{ static_cast<uint32_t>(0x19a00ba0u) };

  /// @brief Field RIGHT_SINGLE_QUOTATION offset 0xffffffff size 0x4
  static constexpr uint32_t RIGHT_SINGLE_QUOTATION{ static_cast<uint32_t>(0xa02719a0u) };

  /// @brief Field APOSTROPHE offset 0xffffffff size 0x4
  static constexpr uint32_t APOSTROPHE{ static_cast<uint32_t>(0xc060a027u) };

  /// @brief Field WORD_JOINER offset 0xffffffff size 0x4
  static constexpr uint32_t WORD_JOINER{ static_cast<uint32_t>(0xc060a0u) };

  /// @brief Field HIGH_SURROGATE_START offset 0xffffffff size 0x4
  static constexpr uint32_t HIGH_SURROGATE_START{ static_cast<uint32_t>(0xd800c0u) };

  /// @brief Field HIGH_SURROGATE_END offset 0xffffffff size 0x4
  static constexpr uint32_t HIGH_SURROGATE_END{ static_cast<uint32_t>(0xffdb00c0u) };

  /// @brief Field LOW_SURROGATE_START offset 0xffffffff size 0x4
  static constexpr uint32_t LOW_SURROGATE_START{ static_cast<uint32_t>(0xdc00c0u) };

  /// @brief Field LOW_SURROGATE_END offset 0xffffffff size 0x4
  static constexpr uint32_t LOW_SURROGATE_END{ static_cast<uint32_t>(0xffdf00c0u) };

  /// @brief Field UNICODE_PLANE01_START offset 0xffffffff size 0x4
  static constexpr uint32_t UNICODE_PLANE01_START{ static_cast<uint32_t>(0x1c0u) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::CodePoint, 0x10>, "Size mismatch!");

} // namespace TMPro
NEED_NO_BOX(::TMPro::CodePoint);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::CodePoint*, "TMPro", "CodePoint");
