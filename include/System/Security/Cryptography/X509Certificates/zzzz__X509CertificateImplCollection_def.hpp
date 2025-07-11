#pragma once
// IWYU pragma private; include "System/Security/Cryptography/X509Certificates/X509CertificateImplCollection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509CertificateImplCollection)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateImpl;
}
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateImplCollection;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection);
// Dependencies System.IDisposable, System.Object
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// CS Name: System.Security.Cryptography.X509Certificates.X509CertificateImplCollection
class CORDL_TYPE X509CertificateImplCollection : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_Item)) ::System::Security::Cryptography::X509Certificates::X509CertificateImpl* Item[];

  /// @brief Field list, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_list,
                      put = __cordl_internal_set_list)) ::System::Collections::Generic::List_1<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>* list;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Add, addr 0x443cfc4, size 0xd0, virtual false, abstract: false, final false
  inline void Add(::System::Security::Cryptography::X509Certificates::X509CertificateImpl* impl, bool takeOwnership);

  /// @brief Method Clone, addr 0x443be28, size 0x58, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection* Clone();

  /// @brief Method Dispose, addr 0x443e070, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x443e0dc, size 0x21c, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Finalize, addr 0x443e2f8, size 0xa0, virtual true, abstract: false, final false
  inline void Finalize();

  static inline ::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection* New_ctor();

  static inline ::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection* New_ctor(::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection* other);

  constexpr ::System::Collections::Generic::List_1<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>* const& __cordl_internal_get_list() const;

  constexpr ::System::Collections::Generic::List_1<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>*& __cordl_internal_get_list();

  constexpr void __cordl_internal_set_list(::System::Collections::Generic::List_1<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>* value);

  /// @brief Method .ctor, addr 0x443cf44, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x443dda8, size 0x228, virtual false, abstract: false, final false
  inline void _ctor(::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection* other);

  /// @brief Method get_Count, addr 0x443dfd0, size 0x48, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_Item, addr 0x443e018, size 0x58, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509CertificateImpl* get_Item(int32_t index);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509CertificateImplCollection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X509CertificateImplCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509CertificateImplCollection(X509CertificateImplCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509CertificateImplCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509CertificateImplCollection(X509CertificateImplCollection const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9322 };

  /// @brief Field list, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>* ___list;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection, ___list) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection, 0x18>, "Size mismatch!");

} // namespace System::Security::Cryptography::X509Certificates
NEED_NO_BOX(::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection*, "System.Security.Cryptography.X509Certificates", "X509CertificateImplCollection");
