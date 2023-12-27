#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__AsnEncodedData_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X500DistinguishedName)
namespace System::Security::Cryptography::X509Certificates {
struct X500DistinguishedNameFlags;
}
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
class X500DistinguishedName;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::X509Certificates::X500DistinguishedName);
// Type: System.Security.Cryptography.X509Certificates::X500DistinguishedName
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8977))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8991))
// CS Name: ::System.Security.Cryptography.X509Certificates::X500DistinguishedName*
class CORDL_TYPE X500DistinguishedName : public ::System::Security::Cryptography::AsnEncodedData {
public:
  // Declarations
  /// @brief Field name, offset 0x20, size 0x8
  __declspec(property(get = __get_name, put = __set_name))::StringW name;

  /// @brief Field canonEncoding, offset 0x28, size 0x8
  __declspec(property(get = __get_canonEncoding, put = __set_canonEncoding))::ArrayW<uint8_t, ::Array<uint8_t>*> canonEncoding;

  __declspec(property(get = get_Name))::StringW Name;

  constexpr ::StringW& __get_name();

  constexpr ::StringW const& __get_name() const;

  constexpr void __set_name(::StringW value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_canonEncoding();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_canonEncoding() const;

  constexpr void __set_canonEncoding(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::System::Security::Cryptography::X509Certificates::X500DistinguishedName* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> encodedDistinguishedName);

  /// @brief Method .ctor addr 0x2978484 size 0x110 virtual false final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> encodedDistinguishedName);

  /// @brief Method get_Name addr 0x297868c size 0x8 virtual false final false
  inline ::StringW get_Name();

  /// @brief Method Decode addr 0x2978694 size 0x158 virtual false final false
  inline ::StringW Decode(::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags flag);

  /// @brief Method Format addr 0x2978860 size 0x5c virtual true final false
  inline ::StringW Format(bool multiLine);

  /// @brief Method GetSeparator addr 0x29787ec size 0x74 virtual false final false
  static inline ::StringW GetSeparator(::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags flag);

  /// @brief Method DecodeRawData addr 0x2978594 size 0xf8 virtual false final false
  inline void DecodeRawData();

  /// @brief Method Canonize addr 0x29788bc size 0x1cc virtual false final false
  static inline ::StringW Canonize(::StringW s);

  /// @brief Method AreEqual addr 0x2978a88 size 0x1f4 virtual false final false
  static inline bool AreEqual(::System::Security::Cryptography::X509Certificates::X500DistinguishedName* name1, ::System::Security::Cryptography::X509Certificates::X500DistinguishedName* name2);

  // Ctor Parameters [CppParam { name: "", ty: "X500DistinguishedName", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X500DistinguishedName(X500DistinguishedName&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X500DistinguishedName", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X500DistinguishedName(X500DistinguishedName const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X500DistinguishedName();

public:
  /// @brief Field name, offset: 0x20, size: 0x8, def value: None
  ::StringW ___name;

  /// @brief Field canonEncoding, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___canonEncoding;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::X509Certificates::X500DistinguishedName, 0x30>, "Size mismatch!");

} // namespace System::Security::Cryptography::X509Certificates
NEED_NO_BOX(::System::Security::Cryptography::X509Certificates::X500DistinguishedName);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X500DistinguishedName*, "System.Security.Cryptography.X509Certificates", "X500DistinguishedName");
