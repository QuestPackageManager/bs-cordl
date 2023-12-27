#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TokenizerStream)
namespace System::Security::Util {
class TokenizerShortBlock;
}
namespace System::Security::Util {
class TokenizerStringBlock;
}
// Forward declare root types
namespace System::Security::Util {
class TokenizerStream;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Util::TokenizerStream);
// Type: System.Security.Util::TokenizerStream
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 76, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Util {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2899))
// CS Name: ::System.Security.Util::TokenizerStream*
class CORDL_TYPE TokenizerStream : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_countTokens, offset 0x10, size 0x4
  __declspec(property(get = __get_m_countTokens, put = __set_m_countTokens)) int32_t m_countTokens;

  /// @brief Field m_headTokens, offset 0x18, size 0x8
  __declspec(property(get = __get_m_headTokens, put = __set_m_headTokens))::System::Security::Util::TokenizerShortBlock* m_headTokens;

  /// @brief Field m_lastTokens, offset 0x20, size 0x8
  __declspec(property(get = __get_m_lastTokens, put = __set_m_lastTokens))::System::Security::Util::TokenizerShortBlock* m_lastTokens;

  /// @brief Field m_currentTokens, offset 0x28, size 0x8
  __declspec(property(get = __get_m_currentTokens, put = __set_m_currentTokens))::System::Security::Util::TokenizerShortBlock* m_currentTokens;

  /// @brief Field m_indexTokens, offset 0x30, size 0x4
  __declspec(property(get = __get_m_indexTokens, put = __set_m_indexTokens)) int32_t m_indexTokens;

  /// @brief Field m_headStrings, offset 0x38, size 0x8
  __declspec(property(get = __get_m_headStrings, put = __set_m_headStrings))::System::Security::Util::TokenizerStringBlock* m_headStrings;

  /// @brief Field m_currentStrings, offset 0x40, size 0x8
  __declspec(property(get = __get_m_currentStrings, put = __set_m_currentStrings))::System::Security::Util::TokenizerStringBlock* m_currentStrings;

  /// @brief Field m_indexStrings, offset 0x48, size 0x4
  __declspec(property(get = __get_m_indexStrings, put = __set_m_indexStrings)) int32_t m_indexStrings;

  constexpr int32_t& __get_m_countTokens();

  constexpr int32_t const& __get_m_countTokens() const;

  constexpr void __set_m_countTokens(int32_t value);

  constexpr ::System::Security::Util::TokenizerShortBlock*& __get_m_headTokens();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Util::TokenizerShortBlock*> const& __get_m_headTokens() const;

  constexpr void __set_m_headTokens(::System::Security::Util::TokenizerShortBlock* value);

  constexpr ::System::Security::Util::TokenizerShortBlock*& __get_m_lastTokens();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Util::TokenizerShortBlock*> const& __get_m_lastTokens() const;

  constexpr void __set_m_lastTokens(::System::Security::Util::TokenizerShortBlock* value);

  constexpr ::System::Security::Util::TokenizerShortBlock*& __get_m_currentTokens();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Util::TokenizerShortBlock*> const& __get_m_currentTokens() const;

  constexpr void __set_m_currentTokens(::System::Security::Util::TokenizerShortBlock* value);

  constexpr int32_t& __get_m_indexTokens();

  constexpr int32_t const& __get_m_indexTokens() const;

  constexpr void __set_m_indexTokens(int32_t value);

  constexpr ::System::Security::Util::TokenizerStringBlock*& __get_m_headStrings();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Util::TokenizerStringBlock*> const& __get_m_headStrings() const;

  constexpr void __set_m_headStrings(::System::Security::Util::TokenizerStringBlock* value);

  constexpr ::System::Security::Util::TokenizerStringBlock*& __get_m_currentStrings();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Util::TokenizerStringBlock*> const& __get_m_currentStrings() const;

  constexpr void __set_m_currentStrings(::System::Security::Util::TokenizerStringBlock* value);

  constexpr int32_t& __get_m_indexStrings();

  constexpr int32_t const& __get_m_indexStrings() const;

  constexpr void __set_m_indexStrings(int32_t value);

  static inline ::System::Security::Util::TokenizerStream* New_ctor();

  /// @brief Method .ctor addr 0x2455d48 size 0xa8 virtual false final false
  inline void _ctor();

  /// @brief Method AddToken addr 0x24560d8 size 0xe8 virtual false final false
  inline void AddToken(int16_t token);

  /// @brief Method AddString addr 0x24561d8 size 0xf0 virtual false final false
  inline void AddString(::StringW str);

  /// @brief Method Reset addr 0x2455df0 size 0x1c virtual false final false
  inline void Reset();

  /// @brief Method GetNextFullToken addr 0x2455e0c size 0x70 virtual false final false
  inline int16_t GetNextFullToken();

  /// @brief Method GetNextToken addr 0x2454d34 size 0x14 virtual false final false
  inline int16_t GetNextToken();

  /// @brief Method GetNextString addr 0x2454dc0 size 0x6c virtual false final false
  inline ::StringW GetNextString();

  /// @brief Method ThrowAwayNextString addr 0x2454d48 size 0x4 virtual false final false
  inline void ThrowAwayNextString();

  /// @brief Method TagLastToken addr 0x2454d4c size 0x74 virtual false final false
  inline void TagLastToken(int16_t tag);

  /// @brief Method GetTokenCount addr 0x24565ac size 0x8 virtual false final false
  inline int32_t GetTokenCount();

  /// @brief Method GoToPosition addr 0x24557bc size 0x60 virtual false final false
  inline void GoToPosition(int32_t position);

  // Ctor Parameters [CppParam { name: "", ty: "TokenizerStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TokenizerStream(TokenizerStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TokenizerStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TokenizerStream(TokenizerStream const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TokenizerStream();

public:
  /// @brief Field m_countTokens, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_countTokens;

  /// @brief Field m_headTokens, offset: 0x18, size: 0x8, def value: None
  ::System::Security::Util::TokenizerShortBlock* ___m_headTokens;

  /// @brief Field m_lastTokens, offset: 0x20, size: 0x8, def value: None
  ::System::Security::Util::TokenizerShortBlock* ___m_lastTokens;

  /// @brief Field m_currentTokens, offset: 0x28, size: 0x8, def value: None
  ::System::Security::Util::TokenizerShortBlock* ___m_currentTokens;

  /// @brief Field m_indexTokens, offset: 0x30, size: 0x4, def value: None
  int32_t ___m_indexTokens;

  /// @brief Field m_headStrings, offset: 0x38, size: 0x8, def value: None
  ::System::Security::Util::TokenizerStringBlock* ___m_headStrings;

  /// @brief Field m_currentStrings, offset: 0x40, size: 0x8, def value: None
  ::System::Security::Util::TokenizerStringBlock* ___m_currentStrings;

  /// @brief Field m_indexStrings, offset: 0x48, size: 0x4, def value: None
  int32_t ___m_indexStrings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Util::TokenizerStream, 0x50>, "Size mismatch!");

} // namespace System::Security::Util
NEED_NO_BOX(::System::Security::Util::TokenizerStream);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Util::TokenizerStream*, "System.Security.Util", "TokenizerStream");
