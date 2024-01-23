#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BTSStarTextEffectValueParser)
// Forward declare root types
namespace GlobalNamespace {
class BTSStarTextEffectValueParser;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BTSStarTextEffectValueParser);
// Type: ::BTSStarTextEffectValueParser
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3982))
// CS Name: ::BTSStarTextEffectValueParser*
class CORDL_TYPE BTSStarTextEffectValueParser : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetTextId, addr 0x221d7ac, size 0x8, virtual false, abstract: false, final false
  static inline int32_t GetTextId(int32_t value);

  /// @brief Method GetPositionId, addr 0x221d7b4, size 0x8, virtual false, abstract: false, final false
  static inline int32_t GetPositionId(int32_t value);

  /// @brief Method MergeValuesIntoOneInt, addr 0x221d7bc, size 0x8, virtual false, abstract: false, final false
  static inline int32_t MergeValuesIntoOneInt(int32_t textId, int32_t positionId);

  // Ctor Parameters [CppParam { name: "", ty: "BTSStarTextEffectValueParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BTSStarTextEffectValueParser(BTSStarTextEffectValueParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BTSStarTextEffectValueParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BTSStarTextEffectValueParser(BTSStarTextEffectValueParser const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BTSStarTextEffectValueParser();

public:
  /// @brief Field kTextMask offset 0xffffffff size 0x4
  static constexpr int32_t kTextMask{ static_cast<int32_t>(0xff) };

  /// @brief Field kTextBitOffset offset 0xffffffff size 0x4
  static constexpr int32_t kTextBitOffset{ static_cast<int32_t>(0x0) };

  /// @brief Field kPositionMask offset 0xffffffff size 0x4
  static constexpr int32_t kPositionMask{ static_cast<int32_t>(0xff00) };

  /// @brief Field kPositionBitOffset offset 0xffffffff size 0x4
  static constexpr int32_t kPositionBitOffset{ static_cast<int32_t>(0x8) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BTSStarTextEffectValueParser, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BTSStarTextEffectValueParser);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BTSStarTextEffectValueParser*, "", "BTSStarTextEffectValueParser");
