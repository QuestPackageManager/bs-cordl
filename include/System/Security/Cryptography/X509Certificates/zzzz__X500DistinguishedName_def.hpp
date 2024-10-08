#pragma once
// IWYU pragma private; include "System/Security/Cryptography/X509Certificates/X500DistinguishedName.hpp"
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
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// CS Name: ::System.Security.Cryptography.X509Certificates::X500DistinguishedName*
class CORDL_TYPE X500DistinguishedName : public ::System::Security::Cryptography::AsnEncodedData {
public:
  // Declarations
  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Field canonEncoding, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_canonEncoding, put = __cordl_internal_set_canonEncoding)) ::ArrayW<uint8_t, ::Array<uint8_t>*> canonEncoding;

  /// @brief Field name, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name)) ::StringW name;

  /// @brief Method AreEqual, addr 0x43c05ec, size 0x1e4, virtual false, abstract: false, final false
  static inline bool AreEqual(::System::Security::Cryptography::X509Certificates::X500DistinguishedName* name1, ::System::Security::Cryptography::X509Certificates::X500DistinguishedName* name2);

  /// @brief Method Canonize, addr 0x43c0410, size 0x1dc, virtual false, abstract: false, final false
  static inline ::StringW Canonize(::StringW s);

  /// @brief Method Decode, addr 0x43c01ec, size 0x150, virtual false, abstract: false, final false
  inline ::StringW Decode(::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags flag);

  /// @brief Method DecodeRawData, addr 0x43c0100, size 0xe4, virtual false, abstract: false, final false
  inline void DecodeRawData();

  /// @brief Method Format, addr 0x43c03b4, size 0x5c, virtual true, abstract: false, final false
  inline ::StringW Format(bool multiLine);

  /// @brief Method GetSeparator, addr 0x43c033c, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW GetSeparator(::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags flag);

  static inline ::System::Security::Cryptography::X509Certificates::X500DistinguishedName* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> encodedDistinguishedName);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_canonEncoding() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_canonEncoding();

  constexpr ::StringW const& __cordl_internal_get_name() const;

  constexpr ::StringW& __cordl_internal_get_name();

  constexpr void __cordl_internal_set_canonEncoding(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_name(::StringW value);

  /// @brief Method .ctor, addr 0x43bfffc, size 0x104, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> encodedDistinguishedName);

  /// @brief Method get_Name, addr 0x43c01e4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X500DistinguishedName();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X500DistinguishedName", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X500DistinguishedName(X500DistinguishedName&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X500DistinguishedName", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X500DistinguishedName(X500DistinguishedName const&) = delete;

  /// @brief Field name, offset: 0x20, size: 0x8, def value: None
  ::StringW ___name;

  /// @brief Field canonEncoding, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___canonEncoding;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9277 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::X509Certificates::X500DistinguishedName, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X500DistinguishedName, ___name) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X500DistinguishedName, ___canonEncoding) == 0x28, "Offset mismatch!");

} // namespace System::Security::Cryptography::X509Certificates
NEED_NO_BOX(::System::Security::Cryptography::X509Certificates::X500DistinguishedName);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X500DistinguishedName*, "System.Security.Cryptography.X509Certificates", "X500DistinguishedName");
