#pragma once
// IWYU pragma private; include "System/Security/Cryptography/X509Certificates/X509Certificate2Collection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/X509Certificates/zzzz__X509CertificateCollection_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509Certificate2Collection)
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2Enumerator;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509FindType;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2Collection;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::X509Certificates::X509Certificate2Collection);
// Dependencies System.Security.Cryptography.X509Certificates.X509CertificateCollection
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// CS Name: System.Security.Cryptography.X509Certificates.X509Certificate2Collection
class CORDL_TYPE X509Certificate2Collection : public ::System::Security::Cryptography::X509Certificates::X509CertificateCollection {
public:
  // Declarations
  __declspec(property(get = get_Item)) ::System::Security::Cryptography::X509Certificates::X509Certificate2* Item[];

  /// @brief Field newline_split, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_newline_split, put = setStaticF_newline_split)) ::ArrayW<::StringW, ::Array<::StringW>*> newline_split;

  /// @brief Method Add, addr 0x443be5c, size 0x70, virtual false, abstract: false, final false
  inline int32_t Add(::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate);

  /// @brief Method AddRange, addr 0x443bcc8, size 0x70, virtual false, abstract: false, final false
  inline void AddRange(::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* certificates);

  /// @brief Method Contains, addr 0x443becc, size 0x340, virtual false, abstract: false, final false
  inline bool Contains(::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate);

  /// @brief Method Find, addr 0x443c2d4, size 0x1130, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* Find(::System::Security::Cryptography::X509Certificates::X509FindType findType, ::System::Object* findValue,
                                                                                              bool validOnly);

  /// @brief Method GetEnumerator, addr 0x443d404, size 0x58, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator* GetEnumerator();

  /// @brief Method GetKeyIdentifier, addr 0x443c20c, size 0xc8, virtual false, abstract: false, final false
  inline ::StringW GetKeyIdentifier(::System::Security::Cryptography::X509Certificates::X509Certificate2* x);

  static inline ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* New_ctor();

  static inline ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* New_ctor(::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* certificates);

  /// @brief Method .ctor, addr 0x443bc8c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x443bc9c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* certificates);

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_newline_split();

  /// @brief Method get_Item, addr 0x443bd38, size 0x124, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509Certificate2* get_Item(int32_t index);

  static inline void setStaticF_newline_split(::ArrayW<::StringW, ::Array<::StringW>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509Certificate2Collection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X509Certificate2Collection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509Certificate2Collection(X509Certificate2Collection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509Certificate2Collection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509Certificate2Collection(X509Certificate2Collection const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9313 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::X509Certificates::X509Certificate2Collection, 0x18>, "Size mismatch!");

} // namespace System::Security::Cryptography::X509Certificates
NEED_NO_BOX(::System::Security::Cryptography::X509Certificates::X509Certificate2Collection);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*, "System.Security.Cryptography.X509Certificates", "X509Certificate2Collection");
