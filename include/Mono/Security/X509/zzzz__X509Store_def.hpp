#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509Store)
namespace Mono::Security::X509 {
class X509Crl;
}
namespace Mono::Security::X509 {
class X509Certificate;
}
namespace Mono::Security::X509 {
class X509CertificateCollection;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13758))
// CS Name: ::Mono.Security.X509::X509Store*
class CORDL_TYPE X509Store : public ::System::Object {
public:
  // Declarations
  /// @brief Field _storePath, offset 0x10, size 0x8
  __declspec(property(get = __get__storePath, put = __set__storePath))::StringW _storePath;

  /// @brief Field _certificates, offset 0x18, size 0x8
  __declspec(property(get = __get__certificates, put = __set__certificates))::Mono::Security::X509::X509CertificateCollection* _certificates;

  /// @brief Field _crls, offset 0x20, size 0x8
  __declspec(property(get = __get__crls, put = __set__crls))::System::Collections::ArrayList* _crls;

  /// @brief Field _crl, offset 0x28, size 0x1
  __declspec(property(get = __get__crl, put = __set__crl)) bool _crl;

  /// @brief Field _newFormat, offset 0x29, size 0x1
  __declspec(property(get = __get__newFormat, put = __set__newFormat)) bool _newFormat;

  __declspec(property(get = get_Certificates))::Mono::Security::X509::X509CertificateCollection* Certificates;

  __declspec(property(get = get_Crls))::System::Collections::ArrayList* Crls;

  constexpr ::StringW& __get__storePath();

  constexpr ::StringW const& __get__storePath() const;

  constexpr void __set__storePath(::StringW value);

  constexpr ::Mono::Security::X509::X509CertificateCollection*& __get__certificates();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Security::X509::X509CertificateCollection*> const& __get__certificates() const;

  constexpr void __set__certificates(::Mono::Security::X509::X509CertificateCollection* value);

  constexpr ::System::Collections::ArrayList*& __get__crls();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __get__crls() const;

  constexpr void __set__crls(::System::Collections::ArrayList* value);

  constexpr bool& __get__crl();

  constexpr bool const& __get__crl() const;

  constexpr void __set__crl(bool value);

  constexpr bool& __get__newFormat();

  constexpr bool const& __get__newFormat() const;

  constexpr void __set__newFormat(bool value);

  static inline ::Mono::Security::X509::X509Store* New_ctor(::StringW path, bool crl, bool newFormat);

  /// @brief Method .ctor addr 0x23fd568 size 0x40 virtual false final false
  inline void _ctor(::StringW path, bool crl, bool newFormat);

  /// @brief Method get_Certificates addr 0x23fd5a8 size 0x28 virtual false final false
  inline ::Mono::Security::X509::X509CertificateCollection* get_Certificates();

  /// @brief Method get_Crls addr 0x23fd7a4 size 0x90 virtual false final false
  inline ::System::Collections::ArrayList* get_Crls();

  /// @brief Method Load addr 0x23fd9f4 size 0x20c virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Load(::StringW filename);

  /// @brief Method LoadCertificate addr 0x23fdc00 size 0x70 virtual false final false
  inline ::Mono::Security::X509::X509Certificate* LoadCertificate(::StringW filename);

  /// @brief Method LoadCrl addr 0x23fdc70 size 0x70 virtual false final false
  inline ::Mono::Security::X509::X509Crl* LoadCrl(::StringW filename);

  /// @brief Method CheckStore addr 0x23fdce0 size 0xdc virtual false final false
  inline bool CheckStore(::StringW path, bool throwException);

  /// @brief Method BuildCertificatesCollection addr 0x23fd5d0 size 0x1d4 virtual false final false
  inline ::Mono::Security::X509::X509CertificateCollection* BuildCertificatesCollection(::StringW storeName);

  /// @brief Method BuildCrlsCollection addr 0x23fd834 size 0x1c0 virtual false final false
  inline ::System::Collections::ArrayList* BuildCrlsCollection(::StringW storeName);

  // Ctor Parameters [CppParam { name: "", ty: "X509Store", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509Store(X509Store&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509Store", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509Store(X509Store const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509Store();

public:
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

} // namespace Mono::Security::X509
NEED_NO_BOX(::Mono::Security::X509::X509Store);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::X509::X509Store*, "Mono.Security.X509", "X509Store");
