#pragma once
// IWYU pragma private; include "System/DomainNameHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DomainNameHelper)
// Forward declare root types
namespace System {
class DomainNameHelper;
}
// Write type traits
MARK_REF_T(::System::DomainNameHelper*);
DEFINE_IL2CPP_CLASS(::System::DomainNameHelper*, "System", "DomainNameHelper");
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.DomainNameHelper
class CORDL_TYPE DomainNameHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method IdnEquivalent, addr 0x6373e34, size 0x288, virtual false, abstract: false, final false
  static inline ::StringW IdnEquivalent(char16_t* hostname, int32_t start, int32_t end, ::by_ref<bool> allAscii, ::by_ref<bool> atLeastOneValidIdn);

  /// @brief Method IdnEquivalent, addr 0x63740bc, size 0x1f0, virtual false, abstract: false, final false
  static inline ::StringW IdnEquivalent(char16_t* hostname, int32_t start, int32_t end, ::by_ref<bool> allAscii, ::by_ref<::StringW> bidiStrippedHost);

  /// @brief Method IsASCIILetterOrDigit, addr 0x6373bc0, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsASCIILetterOrDigit(char16_t character, ::by_ref<bool> notCanonical);

  /// @brief Method IsIdnAce, addr 0x63742f8, size 0x90, virtual false, abstract: false, final false
  static inline bool IsIdnAce(::StringW input, int32_t index);

  /// @brief Method IsIdnAce, addr 0x63742ac, size 0x4c, virtual false, abstract: false, final false
  static inline bool IsIdnAce(char16_t* input, int32_t index);

  /// @brief Method IsValid, addr 0x6373a4c, size 0x174, virtual false, abstract: false, final false
  static inline bool IsValid(char16_t* name, uint16_t pos, ::by_ref<int32_t> returnedEnd, ::by_ref<bool> notCanonical, bool notImplicitFile);

  /// @brief Method IsValidByIri, addr 0x6373c48, size 0x1ec, virtual false, abstract: false, final false
  static inline bool IsValidByIri(char16_t* name, uint16_t pos, ::by_ref<int32_t> returnedEnd, ::by_ref<bool> notCanonical, bool notImplicitFile);

  /// @brief Method IsValidDomainLabelCharacter, addr 0x6373bfc, size 0x4c, virtual false, abstract: false, final false
  static inline bool IsValidDomainLabelCharacter(char16_t character, ::by_ref<bool> notCanonical);

  /// @brief Method ParseCanonicalName, addr 0x63738bc, size 0x190, virtual false, abstract: false, final false
  static inline ::StringW ParseCanonicalName(::StringW str, int32_t start, int32_t end, ::by_ref<bool> loopback);

  /// @brief Method UnicodeEquivalent, addr 0x63744a4, size 0x4d4, virtual false, abstract: false, final false
  static inline ::StringW UnicodeEquivalent(char16_t* hostname, int32_t start, int32_t end, ::by_ref<bool> allAscii, ::by_ref<bool> atLeastOneValidIdn);

  /// @brief Method UnicodeEquivalent, addr 0x6374388, size 0x11c, virtual false, abstract: false, final false
  static inline ::StringW UnicodeEquivalent(::StringW idnHost, char16_t* hostname, int32_t start, int32_t end);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DomainNameHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DomainNameHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DomainNameHelper(DomainNameHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DomainNameHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DomainNameHelper(DomainNameHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11052 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::DomainNameHelper) == 0x10, "Size mismatch!");

} // namespace System
