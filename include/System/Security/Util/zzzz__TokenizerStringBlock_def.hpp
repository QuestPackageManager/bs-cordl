#pragma once
// IWYU pragma private; include "System/Security/Util/TokenizerStringBlock.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TokenizerStringBlock)
// Forward declare root types
namespace System::Security::Util {
class TokenizerStringBlock;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Util::TokenizerStringBlock);
// Dependencies System.Object
namespace System::Security::Util {
// Is value type: false
// CS Name: System.Security.Util.TokenizerStringBlock
class CORDL_TYPE TokenizerStringBlock : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_block, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_block, put = __cordl_internal_set_m_block)) ::ArrayW<::StringW, ::Array<::StringW>*> m_block;

  /// @brief Field m_next, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_next, put = __cordl_internal_set_m_next)) ::System::Security::Util::TokenizerStringBlock* m_next;

  static inline ::System::Security::Util::TokenizerStringBlock* New_ctor();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_m_block() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_m_block();

  constexpr ::System::Security::Util::TokenizerStringBlock* const& __cordl_internal_get_m_next() const;

  constexpr ::System::Security::Util::TokenizerStringBlock*& __cordl_internal_get_m_next();

  constexpr void __cordl_internal_set_m_block(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_m_next(::System::Security::Util::TokenizerStringBlock* value);

  /// @brief Method .ctor, addr 0x3c99100, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TokenizerStringBlock();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TokenizerStringBlock", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TokenizerStringBlock(TokenizerStringBlock&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TokenizerStringBlock", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TokenizerStringBlock(TokenizerStringBlock const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2901 };

  /// @brief Field m_block, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___m_block;

  /// @brief Field m_next, offset: 0x18, size: 0x8, def value: None
  ::System::Security::Util::TokenizerStringBlock* ___m_next;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Util::TokenizerStringBlock, ___m_block) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::Util::TokenizerStringBlock, ___m_next) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Security::Util::TokenizerStringBlock, 0x20>, "Size mismatch!");

} // namespace System::Security::Util
NEED_NO_BOX(::System::Security::Util::TokenizerStringBlock);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Util::TokenizerStringBlock*, "System.Security.Util", "TokenizerStringBlock");
