#pragma once
// IWYU pragma private; include "TMPro/CodePoint.hpp"
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
// Dependencies System.Object
namespace TMPro {
// Is value type: false
// CS Name: TMPro.CodePoint
class CORDL_TYPE CodePoint : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CodePoint();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CodePoint", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CodePoint(CodePoint&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CodePoint", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CodePoint(CodePoint const&) = delete;

  /// @brief Field APOSTROPHE offset 0xffffffff size 0x4
  static constexpr uint32_t APOSTROPHE{ static_cast<uint32_t>(0x27u) };

  /// @brief Field DOUBLE_QUOTE offset 0xffffffff size 0x4
  static constexpr uint32_t DOUBLE_QUOTE{ static_cast<uint32_t>(0x22u) };

  /// @brief Field HIGH_SURROGATE_END offset 0xffffffff size 0x4
  static constexpr uint32_t HIGH_SURROGATE_END{ static_cast<uint32_t>(0xdbffu) };

  /// @brief Field HIGH_SURROGATE_START offset 0xffffffff size 0x4
  static constexpr uint32_t HIGH_SURROGATE_START{ static_cast<uint32_t>(0xd800u) };

  /// @brief Field HYPHEN offset 0xffffffff size 0x4
  static constexpr uint32_t HYPHEN{ static_cast<uint32_t>(0x2010u) };

  /// @brief Field HYPHEN_MINUS offset 0xffffffff size 0x4
  static constexpr uint32_t HYPHEN_MINUS{ static_cast<uint32_t>(0x2du) };

  /// @brief Field LOW_SURROGATE_END offset 0xffffffff size 0x4
  static constexpr uint32_t LOW_SURROGATE_END{ static_cast<uint32_t>(0xdfffu) };

  /// @brief Field LOW_SURROGATE_START offset 0xffffffff size 0x4
  static constexpr uint32_t LOW_SURROGATE_START{ static_cast<uint32_t>(0xdc00u) };

  /// @brief Field MINUS offset 0xffffffff size 0x4
  static constexpr uint32_t MINUS{ static_cast<uint32_t>(0x2du) };

  /// @brief Field NON_BREAKING_HYPHEN offset 0xffffffff size 0x4
  static constexpr uint32_t NON_BREAKING_HYPHEN{ static_cast<uint32_t>(0x2011u) };

  /// @brief Field NUMBER_SIGN offset 0xffffffff size 0x4
  static constexpr uint32_t NUMBER_SIGN{ static_cast<uint32_t>(0x23u) };

  /// @brief Field PERCENTAGE offset 0xffffffff size 0x4
  static constexpr uint32_t PERCENTAGE{ static_cast<uint32_t>(0x25u) };

  /// @brief Field PERIOD offset 0xffffffff size 0x4
  static constexpr uint32_t PERIOD{ static_cast<uint32_t>(0x2eu) };

  /// @brief Field PLUS offset 0xffffffff size 0x4
  static constexpr uint32_t PLUS{ static_cast<uint32_t>(0x2bu) };

  /// @brief Field RIGHT_SINGLE_QUOTATION offset 0xffffffff size 0x4
  static constexpr uint32_t RIGHT_SINGLE_QUOTATION{ static_cast<uint32_t>(0x2019u) };

  /// @brief Field SOFT_HYPHEN offset 0xffffffff size 0x4
  static constexpr uint32_t SOFT_HYPHEN{ static_cast<uint32_t>(0xadu) };

  /// @brief Field SPACE offset 0xffffffff size 0x4
  static constexpr uint32_t SPACE{ static_cast<uint32_t>(0x20u) };

  /// @brief Field UNICODE_PLANE01_START offset 0xffffffff size 0x4
  static constexpr uint32_t UNICODE_PLANE01_START{ static_cast<uint32_t>(0x10000u) };

  /// @brief Field WORD_JOINER offset 0xffffffff size 0x4
  static constexpr uint32_t WORD_JOINER{ static_cast<uint32_t>(0x2060u) };

  /// @brief Field ZERO_WIDTH_SPACE offset 0xffffffff size 0x4
  static constexpr uint32_t ZERO_WIDTH_SPACE{ static_cast<uint32_t>(0x200bu) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14533 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::CodePoint, 0x10>, "Size mismatch!");

} // namespace TMPro
NEED_NO_BOX(::TMPro::CodePoint);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::CodePoint*, "TMPro", "CodePoint");
