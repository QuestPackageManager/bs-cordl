#pragma once
// IWYU pragma private; include "System/Security/Util/TokenizerStream.hpp"
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
// Dependencies System.Object
namespace System::Security::Util {
// Is value type: false
// CS Name: System.Security.Util.TokenizerStream
class CORDL_TYPE TokenizerStream : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_countTokens, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_countTokens, put = __cordl_internal_set_m_countTokens)) int32_t m_countTokens;

  /// @brief Field m_currentStrings, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_currentStrings, put = __cordl_internal_set_m_currentStrings)) ::System::Security::Util::TokenizerStringBlock* m_currentStrings;

  /// @brief Field m_currentTokens, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_currentTokens, put = __cordl_internal_set_m_currentTokens)) ::System::Security::Util::TokenizerShortBlock* m_currentTokens;

  /// @brief Field m_headStrings, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_headStrings, put = __cordl_internal_set_m_headStrings)) ::System::Security::Util::TokenizerStringBlock* m_headStrings;

  /// @brief Field m_headTokens, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_headTokens, put = __cordl_internal_set_m_headTokens)) ::System::Security::Util::TokenizerShortBlock* m_headTokens;

  /// @brief Field m_indexStrings, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_m_indexStrings, put = __cordl_internal_set_m_indexStrings)) int32_t m_indexStrings;

  /// @brief Field m_indexTokens, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_m_indexTokens, put = __cordl_internal_set_m_indexTokens)) int32_t m_indexTokens;

  /// @brief Field m_lastTokens, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_lastTokens, put = __cordl_internal_set_m_lastTokens)) ::System::Security::Util::TokenizerShortBlock* m_lastTokens;

  /// @brief Method AddString, addr 0x5943ccc, size 0xd8, virtual false, abstract: false, final false
  inline void AddString(::StringW str);

  /// @brief Method AddToken, addr 0x5943bc8, size 0xf0, virtual false, abstract: false, final false
  inline void AddToken(int16_t token);

  /// @brief Method GetNextFullToken, addr 0x5943934, size 0x78, virtual false, abstract: false, final false
  inline int16_t GetNextFullToken();

  /// @brief Method GetNextString, addr 0x5942938, size 0x78, virtual false, abstract: false, final false
  inline ::StringW GetNextString();

  /// @brief Method GetNextToken, addr 0x59428ac, size 0x14, virtual false, abstract: false, final false
  inline int16_t GetNextToken();

  /// @brief Method GetTokenCount, addr 0x5944048, size 0x8, virtual false, abstract: false, final false
  inline int32_t GetTokenCount();

  /// @brief Method GoToPosition, addr 0x5943310, size 0x60, virtual false, abstract: false, final false
  inline void GoToPosition(int32_t position);

  static inline ::System::Security::Util::TokenizerStream* New_ctor();

  /// @brief Method Reset, addr 0x5943918, size 0x1c, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method TagLastToken, addr 0x59428c4, size 0x74, virtual false, abstract: false, final false
  inline void TagLastToken(int16_t tag);

  /// @brief Method ThrowAwayNextString, addr 0x59428c0, size 0x4, virtual false, abstract: false, final false
  inline void ThrowAwayNextString();

  constexpr int32_t const& __cordl_internal_get_m_countTokens() const;

  constexpr int32_t& __cordl_internal_get_m_countTokens();

  constexpr ::System::Security::Util::TokenizerStringBlock* const& __cordl_internal_get_m_currentStrings() const;

  constexpr ::System::Security::Util::TokenizerStringBlock*& __cordl_internal_get_m_currentStrings();

  constexpr ::System::Security::Util::TokenizerShortBlock* const& __cordl_internal_get_m_currentTokens() const;

  constexpr ::System::Security::Util::TokenizerShortBlock*& __cordl_internal_get_m_currentTokens();

  constexpr ::System::Security::Util::TokenizerStringBlock* const& __cordl_internal_get_m_headStrings() const;

  constexpr ::System::Security::Util::TokenizerStringBlock*& __cordl_internal_get_m_headStrings();

  constexpr ::System::Security::Util::TokenizerShortBlock* const& __cordl_internal_get_m_headTokens() const;

  constexpr ::System::Security::Util::TokenizerShortBlock*& __cordl_internal_get_m_headTokens();

  constexpr int32_t const& __cordl_internal_get_m_indexStrings() const;

  constexpr int32_t& __cordl_internal_get_m_indexStrings();

  constexpr int32_t const& __cordl_internal_get_m_indexTokens() const;

  constexpr int32_t& __cordl_internal_get_m_indexTokens();

  constexpr ::System::Security::Util::TokenizerShortBlock* const& __cordl_internal_get_m_lastTokens() const;

  constexpr ::System::Security::Util::TokenizerShortBlock*& __cordl_internal_get_m_lastTokens();

  constexpr void __cordl_internal_set_m_countTokens(int32_t value);

  constexpr void __cordl_internal_set_m_currentStrings(::System::Security::Util::TokenizerStringBlock* value);

  constexpr void __cordl_internal_set_m_currentTokens(::System::Security::Util::TokenizerShortBlock* value);

  constexpr void __cordl_internal_set_m_headStrings(::System::Security::Util::TokenizerStringBlock* value);

  constexpr void __cordl_internal_set_m_headTokens(::System::Security::Util::TokenizerShortBlock* value);

  constexpr void __cordl_internal_set_m_indexStrings(int32_t value);

  constexpr void __cordl_internal_set_m_indexTokens(int32_t value);

  constexpr void __cordl_internal_set_m_lastTokens(::System::Security::Util::TokenizerShortBlock* value);

  /// @brief Method .ctor, addr 0x5943880, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TokenizerStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TokenizerStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TokenizerStream(TokenizerStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TokenizerStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TokenizerStream(TokenizerStream const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2919 };

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
static_assert(offsetof(::System::Security::Util::TokenizerStream, ___m_countTokens) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::Util::TokenizerStream, ___m_headTokens) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Security::Util::TokenizerStream, ___m_lastTokens) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Security::Util::TokenizerStream, ___m_currentTokens) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Security::Util::TokenizerStream, ___m_indexTokens) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Security::Util::TokenizerStream, ___m_headStrings) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Security::Util::TokenizerStream, ___m_currentStrings) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Security::Util::TokenizerStream, ___m_indexStrings) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Security::Util::TokenizerStream, 0x50>, "Size mismatch!");

} // namespace System::Security::Util
NEED_NO_BOX(::System::Security::Util::TokenizerStream);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Util::TokenizerStream*, "System.Security.Util", "TokenizerStream");
