#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TokenizerStringBlock)
// Forward declare root types
namespace System::Security::Util {
class TokenizerStringBlock;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Util::TokenizerStringBlock);
// Type: System.Security.Util::TokenizerStringBlock
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Util {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2898))
// CS Name: ::System.Security.Util::TokenizerStringBlock*
class CORDL_TYPE TokenizerStringBlock : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_block, offset 0x10, size 0x8
  __declspec(property(get = __get_m_block, put = __set_m_block))::ArrayW<::StringW, ::Array<::StringW>*> m_block;

  /// @brief Field m_next, offset 0x18, size 0x8
  __declspec(property(get = __get_m_next, put = __set_m_next))::System::Security::Util::TokenizerStringBlock* m_next;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get_m_block();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get_m_block() const;

  constexpr void __set_m_block(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr ::System::Security::Util::TokenizerStringBlock*& __get_m_next();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Util::TokenizerStringBlock*> const& __get_m_next() const;

  constexpr void __set_m_next(::System::Security::Util::TokenizerStringBlock* value);

  static inline ::System::Security::Util::TokenizerStringBlock* New_ctor();

  /// @brief Method .ctor, addr 0x2456554, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TokenizerStringBlock", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TokenizerStringBlock(TokenizerStringBlock&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TokenizerStringBlock", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TokenizerStringBlock(TokenizerStringBlock const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TokenizerStringBlock();

public:
  /// @brief Field m_block, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___m_block;

  /// @brief Field m_next, offset: 0x18, size: 0x8, def value: None
  ::System::Security::Util::TokenizerStringBlock* ___m_next;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Util::TokenizerStringBlock, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Security::Util::TokenizerStringBlock, ___m_block) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::Util::TokenizerStringBlock, ___m_next) == 0x18, "Offset mismatch!");

} // namespace System::Security::Util
NEED_NO_BOX(::System::Security::Util::TokenizerStringBlock);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Util::TokenizerStringBlock*, "System.Security.Util", "TokenizerStringBlock");
