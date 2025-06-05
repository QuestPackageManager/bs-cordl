#pragma once
// IWYU pragma private; include "System/DomainNameHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DomainNameHelper)
// Forward declare root types
namespace System {
class DomainNameHelper;
}
// Write type traits
MARK_REF_PTR_T(::System::DomainNameHelper);
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.DomainNameHelper
class CORDL_TYPE DomainNameHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method IdnEquivalent, addr 0x440ee58, size 0x28c, virtual false, abstract: false, final false
  static inline ::StringW IdnEquivalent(::cordl_internals::Ptr<char16_t> hostname, int32_t start, int32_t end, ::ByRef<bool> allAscii, ::ByRef<bool> atLeastOneValidIdn);

  /// @brief Method IdnEquivalent, addr 0x440f0e4, size 0x1f4, virtual false, abstract: false, final false
  static inline ::StringW IdnEquivalent(::cordl_internals::Ptr<char16_t> hostname, int32_t start, int32_t end, ::ByRef<bool> allAscii, ::ByRef<::StringW> bidiStrippedHost);

  /// @brief Method IsASCIILetterOrDigit, addr 0x440ebb8, size 0x4c, virtual false, abstract: false, final false
  static inline bool IsASCIILetterOrDigit(char16_t character, ::ByRef<bool> notCanonical);

  /// @brief Method IsIdnAce, addr 0x440f324, size 0x98, virtual false, abstract: false, final false
  static inline bool IsIdnAce(::StringW input, int32_t index);

  /// @brief Method IsIdnAce, addr 0x440f2d8, size 0x4c, virtual false, abstract: false, final false
  static inline bool IsIdnAce(::cordl_internals::Ptr<char16_t> input, int32_t index);

  /// @brief Method IsValid, addr 0x440ea38, size 0x180, virtual false, abstract: false, final false
  static inline bool IsValid(::cordl_internals::Ptr<char16_t> name, uint16_t pos, ::ByRef<int32_t> returnedEnd, ::ByRef<bool> notCanonical, bool notImplicitFile);

  /// @brief Method IsValidByIri, addr 0x440ec68, size 0x1f0, virtual false, abstract: false, final false
  static inline bool IsValidByIri(::cordl_internals::Ptr<char16_t> name, uint16_t pos, ::ByRef<int32_t> returnedEnd, ::ByRef<bool> notCanonical, bool notImplicitFile);

  /// @brief Method IsValidDomainLabelCharacter, addr 0x440ec04, size 0x64, virtual false, abstract: false, final false
  static inline bool IsValidDomainLabelCharacter(char16_t character, ::ByRef<bool> notCanonical);

  /// @brief Method ParseCanonicalName, addr 0x440e8a0, size 0x198, virtual false, abstract: false, final false
  static inline ::StringW ParseCanonicalName(::StringW str, int32_t start, int32_t end, ::ByRef<bool> loopback);

  /// @brief Method UnicodeEquivalent, addr 0x440f4d8, size 0x45c, virtual false, abstract: false, final false
  static inline ::StringW UnicodeEquivalent(::cordl_internals::Ptr<char16_t> hostname, int32_t start, int32_t end, ::ByRef<bool> allAscii, ::ByRef<bool> atLeastOneValidIdn);

  /// @brief Method UnicodeEquivalent, addr 0x440f3bc, size 0x11c, virtual false, abstract: false, final false
  static inline ::StringW UnicodeEquivalent(::StringW idnHost, ::cordl_internals::Ptr<char16_t> hostname, int32_t start, int32_t end);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9208 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::DomainNameHelper, 0x10>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::DomainNameHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::DomainNameHelper*, "System", "DomainNameHelper");
