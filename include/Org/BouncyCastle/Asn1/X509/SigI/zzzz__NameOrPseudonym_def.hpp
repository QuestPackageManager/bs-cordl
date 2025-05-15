#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X509/SigI/NameOrPseudonym.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__IAsn1Choice_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NameOrPseudonym)
namespace Org::BouncyCastle::Asn1::X500 {
class DirectoryString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509::SigI {
class NameOrPseudonym;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable, Org.BouncyCastle.Asn1.IAsn1Choice
namespace Org::BouncyCastle::Asn1::X509::SigI {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.X509.SigI.NameOrPseudonym
class CORDL_TYPE NameOrPseudonym : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_Pseudonym)) ::Org::BouncyCastle::Asn1::X500::DirectoryString* Pseudonym;

  __declspec(property(get = get_Surname)) ::Org::BouncyCastle::Asn1::X500::DirectoryString* Surname;

  /// @brief Field givenName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_givenName, put = __cordl_internal_set_givenName)) ::Org::BouncyCastle::Asn1::Asn1Sequence* givenName;

  /// @brief Field pseudonym, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_pseudonym, put = __cordl_internal_set_pseudonym)) ::Org::BouncyCastle::Asn1::X500::DirectoryString* pseudonym;

  /// @brief Field surname, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_surname, put = __cordl_internal_set_surname)) ::Org::BouncyCastle::Asn1::X500::DirectoryString* surname;

  /// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
  constexpr operator ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept;

  /// @brief Method GetGivenName, addr 0x2503ee0, size 0x318, virtual false, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::X500::DirectoryString*, ::Array<::Org::BouncyCastle::Asn1::X500::DirectoryString*>*> GetGivenName();

  /// @brief Method GetInstance, addr 0x2503a94, size 0x1d8, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym* New_ctor(::Org::BouncyCastle::Asn1::X500::DirectoryString* pseudonym);

  static inline ::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym* New_ctor(::StringW pseudonym);

  static inline ::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym* New_ctor(::Org::BouncyCastle::Asn1::X500::DirectoryString* surname, ::Org::BouncyCastle::Asn1::Asn1Sequence* givenName);

  /// @brief Method ToAsn1Object, addr 0x25041f8, size 0x108, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& __cordl_internal_get_givenName() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __cordl_internal_get_givenName();

  constexpr ::Org::BouncyCastle::Asn1::X500::DirectoryString* const& __cordl_internal_get_pseudonym() const;

  constexpr ::Org::BouncyCastle::Asn1::X500::DirectoryString*& __cordl_internal_get_pseudonym();

  constexpr ::Org::BouncyCastle::Asn1::X500::DirectoryString* const& __cordl_internal_get_surname() const;

  constexpr ::Org::BouncyCastle::Asn1::X500::DirectoryString*& __cordl_internal_get_surname();

  constexpr void __cordl_internal_set_givenName(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  constexpr void __cordl_internal_set_pseudonym(::Org::BouncyCastle::Asn1::X500::DirectoryString* value);

  constexpr void __cordl_internal_set_surname(::Org::BouncyCastle::Asn1::X500::DirectoryString* value);

  /// @brief Method .ctor, addr 0x2503c6c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X500::DirectoryString* pseudonym);

  /// @brief Method .ctor, addr 0x2503e34, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::StringW pseudonym);

  /// @brief Method .ctor, addr 0x2503c94, size 0x1a0, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0x2503ea4, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X500::DirectoryString* surname, ::Org::BouncyCastle::Asn1::Asn1Sequence* givenName);

  /// @brief Method get_Pseudonym, addr 0x2503ed0, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X500::DirectoryString* get_Pseudonym();

  /// @brief Method get_Surname, addr 0x2503ed8, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X500::DirectoryString* get_Surname();

  /// @brief Convert to "::Org::BouncyCastle::Asn1::IAsn1Choice"
  constexpr ::Org::BouncyCastle::Asn1::IAsn1Choice* i___Org__BouncyCastle__Asn1__IAsn1Choice() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NameOrPseudonym();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NameOrPseudonym", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NameOrPseudonym(NameOrPseudonym&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NameOrPseudonym", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NameOrPseudonym(NameOrPseudonym const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 335 };

  /// @brief Field pseudonym, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X500::DirectoryString* ___pseudonym;

  /// @brief Field surname, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X500::DirectoryString* ___surname;

  /// @brief Field givenName, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___givenName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym, ___pseudonym) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym, ___surname) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym, ___givenName) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509::SigI
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym*, "Org.BouncyCastle.Asn1.X509.SigI", "NameOrPseudonym");
