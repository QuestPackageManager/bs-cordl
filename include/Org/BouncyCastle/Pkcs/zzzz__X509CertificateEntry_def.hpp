#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Pkcs/X509CertificateEntry.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Pkcs/zzzz__Pkcs12Entry_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509CertificateEntry)
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Collections {
class IDictionary;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkcs {
class X509CertificateEntry;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Pkcs::X509CertificateEntry);
// Dependencies Org.BouncyCastle.Pkcs.Pkcs12Entry
namespace Org::BouncyCastle::Pkcs {
// Is value type: false
// CS Name: Org.BouncyCastle.Pkcs.X509CertificateEntry
class CORDL_TYPE X509CertificateEntry : public ::Org::BouncyCastle::Pkcs::Pkcs12Entry {
public:
  // Declarations
  __declspec(property(get = get_Certificate)) ::Org::BouncyCastle::X509::X509Certificate* Certificate;

  /// @brief Field cert, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_cert, put = __cordl_internal_set_cert)) ::Org::BouncyCastle::X509::X509Certificate* cert;

  /// @brief Method Equals, addr 0x34c0af0, size 0xac, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x34c0b9c, size 0x28, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::Org::BouncyCastle::Pkcs::X509CertificateEntry* New_ctor(::Org::BouncyCastle::X509::X509Certificate* cert);

  static inline ::Org::BouncyCastle::Pkcs::X509CertificateEntry* New_ctor(::Org::BouncyCastle::X509::X509Certificate* cert, ::System::Collections::Hashtable* attributes);

  static inline ::Org::BouncyCastle::Pkcs::X509CertificateEntry* New_ctor(::Org::BouncyCastle::X509::X509Certificate* cert, ::System::Collections::IDictionary* attributes);

  constexpr ::Org::BouncyCastle::X509::X509Certificate* const& __cordl_internal_get_cert() const;

  constexpr ::Org::BouncyCastle::X509::X509Certificate*& __cordl_internal_get_cert();

  constexpr void __cordl_internal_set_cert(::Org::BouncyCastle::X509::X509Certificate* value);

  /// @brief Method .ctor, addr 0x34c0a14, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::X509::X509Certificate* cert);

  /// @brief Method .ctor, addr 0x34c0a90, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::X509::X509Certificate* cert, ::System::Collections::Hashtable* attributes);

  /// @brief Method .ctor, addr 0x34c0abc, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::X509::X509Certificate* cert, ::System::Collections::IDictionary* attributes);

  /// @brief Method get_Certificate, addr 0x34c0ae8, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::X509::X509Certificate* get_Certificate();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509CertificateEntry();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X509CertificateEntry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509CertificateEntry(X509CertificateEntry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509CertificateEntry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509CertificateEntry(X509CertificateEntry const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1708 };

  /// @brief Field cert, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::X509::X509Certificate* ___cert;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Pkcs::X509CertificateEntry, ___cert) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Pkcs::X509CertificateEntry, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Pkcs
NEED_NO_BOX(::Org::BouncyCastle::Pkcs::X509CertificateEntry);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Pkcs::X509CertificateEntry*, "Org.BouncyCastle.Pkcs", "X509CertificateEntry");
