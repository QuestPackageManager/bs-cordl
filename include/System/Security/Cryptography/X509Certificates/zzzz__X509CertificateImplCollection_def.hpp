#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509CertificateImplCollection)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateImpl;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateImplCollection;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection);
// Type: System.Security.Cryptography.X509Certificates::X509CertificateImplCollection
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9001))
// CS Name: ::System.Security.Cryptography.X509Certificates::X509CertificateImplCollection*
class CORDL_TYPE X509CertificateImplCollection : public ::System::Object {
public:
  // Declarations
  /// @brief Field list, offset 0x10, size 0x8
  __declspec(property(get = __get_list, put = __set_list))::System::Collections::Generic::List_1<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>* list;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_Item))::System::Security::Cryptography::X509Certificates::X509CertificateImpl* Item[];

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  constexpr ::System::Collections::Generic::List_1<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>*& __get_list();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>*> const& __get_list() const;

  constexpr void __set_list(::System::Collections::Generic::List_1<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>* value);

  static inline ::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection* New_ctor();

  /// @brief Method .ctor, addr 0x297e4f4, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection* New_ctor(::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection* other);

  /// @brief Method .ctor, addr 0x297f2f4, size 0x230, virtual false, abstract: false, final false
  inline void _ctor(::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection* other);

  /// @brief Method get_Count, addr 0x297f524, size 0x48, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_Item, addr 0x297f56c, size 0x58, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509CertificateImpl* get_Item(int32_t index);

  /// @brief Method Add, addr 0x297e574, size 0xd4, virtual false, abstract: false, final false
  inline void Add(::System::Security::Cryptography::X509Certificates::X509CertificateImpl* impl, bool takeOwnership);

  /// @brief Method Clone, addr 0x297d360, size 0x60, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection* Clone();

  /// @brief Method Dispose, addr 0x297f5c4, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x297f630, size 0x220, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Finalize, addr 0x297f850, size 0xa0, virtual true, abstract: false, final false
  inline void Finalize();

  // Ctor Parameters [CppParam { name: "", ty: "X509CertificateImplCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509CertificateImplCollection(X509CertificateImplCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509CertificateImplCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509CertificateImplCollection(X509CertificateImplCollection const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509CertificateImplCollection();

public:
  /// @brief Field list, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>* ___list;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection, ___list) == 0x10, "Offset mismatch!");

} // namespace System::Security::Cryptography::X509Certificates
NEED_NO_BOX(::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection*, "System.Security.Cryptography.X509Certificates", "X509CertificateImplCollection");
