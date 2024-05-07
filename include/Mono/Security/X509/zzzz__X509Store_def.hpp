#pragma once
// IWYU pragma private; include "Mono/Security/X509/X509Store.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509Store)
namespace Mono::Security::X509 {
class X509CertificateCollection;
}
namespace Mono::Security::X509 {
class X509Certificate;
}
namespace Mono::Security::X509 {
class X509Crl;
}
namespace System::Collections {
class ArrayList;
}
// Forward declare root types
namespace Mono::Security::X509 {
class X509Store;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Security::X509::X509Store);
// Type: Mono.Security.X509::X509Store
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 42, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Security::X509 {
// Is value type: false
// CS Name: ::Mono.Security.X509::X509Store*
class CORDL_TYPE X509Store : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Certificates))::Mono::Security::X509::X509CertificateCollection* Certificates;

  __declspec(property(get = get_Crls))::System::Collections::ArrayList* Crls;

  /// @brief Field _certificates, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__certificates, put = __cordl_internal_set__certificates))::Mono::Security::X509::X509CertificateCollection* _certificates;

  /// @brief Field _crl, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__crl, put = __cordl_internal_set__crl)) bool _crl;

  /// @brief Field _crls, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__crls, put = __cordl_internal_set__crls))::System::Collections::ArrayList* _crls;

  /// @brief Field _newFormat, offset 0x29, size 0x1
  __declspec(property(get = __cordl_internal_get__newFormat, put = __cordl_internal_set__newFormat)) bool _newFormat;

  /// @brief Field _storePath, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__storePath, put = __cordl_internal_set__storePath))::StringW _storePath;

  /// @brief Method BuildCertificatesCollection, addr 0x277b808, size 0x1d4, virtual false, abstract: false, final false
  inline ::Mono::Security::X509::X509CertificateCollection* BuildCertificatesCollection(::StringW storeName);

  /// @brief Method BuildCrlsCollection, addr 0x277ba6c, size 0x1c0, virtual false, abstract: false, final false
  inline ::System::Collections::ArrayList* BuildCrlsCollection(::StringW storeName);

  /// @brief Method CheckStore, addr 0x277bf18, size 0xdc, virtual false, abstract: false, final false
  inline bool CheckStore(::StringW path, bool throwException);

  /// @brief Method Load, addr 0x277bc2c, size 0x20c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Load(::StringW filename);

  /// @brief Method LoadCertificate, addr 0x277be38, size 0x70, virtual false, abstract: false, final false
  inline ::Mono::Security::X509::X509Certificate* LoadCertificate(::StringW filename);

  /// @brief Method LoadCrl, addr 0x277bea8, size 0x70, virtual false, abstract: false, final false
  inline ::Mono::Security::X509::X509Crl* LoadCrl(::StringW filename);

  static inline ::Mono::Security::X509::X509Store* New_ctor(::StringW path, bool crl, bool newFormat);

  constexpr ::Mono::Security::X509::X509CertificateCollection*& __cordl_internal_get__certificates();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Security::X509::X509CertificateCollection*> const& __cordl_internal_get__certificates() const;

  constexpr bool const& __cordl_internal_get__crl() const;

  constexpr bool& __cordl_internal_get__crl();

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get__crls();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __cordl_internal_get__crls() const;

  constexpr bool const& __cordl_internal_get__newFormat() const;

  constexpr bool& __cordl_internal_get__newFormat();

  constexpr ::StringW const& __cordl_internal_get__storePath() const;

  constexpr ::StringW& __cordl_internal_get__storePath();

  constexpr void __cordl_internal_set__certificates(::Mono::Security::X509::X509CertificateCollection* value);

  constexpr void __cordl_internal_set__crl(bool value);

  constexpr void __cordl_internal_set__crls(::System::Collections::ArrayList* value);

  constexpr void __cordl_internal_set__newFormat(bool value);

  constexpr void __cordl_internal_set__storePath(::StringW value);

  /// @brief Method .ctor, addr 0x277b7a0, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::StringW path, bool crl, bool newFormat);

  /// @brief Method get_Certificates, addr 0x277b7e0, size 0x28, virtual false, abstract: false, final false
  inline ::Mono::Security::X509::X509CertificateCollection* get_Certificates();

  /// @brief Method get_Crls, addr 0x277b9dc, size 0x90, virtual false, abstract: false, final false
  inline ::System::Collections::ArrayList* get_Crls();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509Store();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X509Store", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509Store(X509Store&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509Store", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509Store(X509Store const&) = delete;

  /// @brief Field _storePath, offset: 0x10, size: 0x8, def value: None
  ::StringW ____storePath;

  /// @brief Field _certificates, offset: 0x18, size: 0x8, def value: None
  ::Mono::Security::X509::X509CertificateCollection* ____certificates;

  /// @brief Field _crls, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::ArrayList* ____crls;

  /// @brief Field _crl, offset: 0x28, size: 0x1, def value: None
  bool ____crl;

  /// @brief Field _newFormat, offset: 0x29, size: 0x1, def value: None
  bool ____newFormat;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::X509::X509Store, 0x30>, "Size mismatch!");

static_assert(offsetof(::Mono::Security::X509::X509Store, ____storePath) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::X509Store, ____certificates) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::X509Store, ____crls) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::X509Store, ____crl) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::X509Store, ____newFormat) == 0x29, "Offset mismatch!");

} // namespace Mono::Security::X509
NEED_NO_BOX(::Mono::Security::X509::X509Store);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::X509::X509Store*, "Mono.Security.X509", "X509Store");
