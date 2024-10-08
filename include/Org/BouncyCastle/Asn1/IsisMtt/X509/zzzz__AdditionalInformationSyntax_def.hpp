#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/IsisMtt/X509/AdditionalInformationSyntax.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AdditionalInformationSyntax)
namespace Org::BouncyCastle::Asn1::X500 {
class DirectoryString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::IsisMtt::X509 {
class AdditionalInformationSyntax;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::IsisMtt::X509::AdditionalInformationSyntax);
// Type: Org.BouncyCastle.Asn1.IsisMtt.X509::AdditionalInformationSyntax
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::IsisMtt::X509 {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.IsisMtt.X509::AdditionalInformationSyntax*
class CORDL_TYPE AdditionalInformationSyntax : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_Information)) ::Org::BouncyCastle::Asn1::X500::DirectoryString* Information;

  /// @brief Field information, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_information, put = __cordl_internal_set_information)) ::Org::BouncyCastle::Asn1::X500::DirectoryString* information;

  /// @brief Method GetInstance, addr 0x23bc068, size 0x14c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::AdditionalInformationSyntax* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::AdditionalInformationSyntax* New_ctor(::Org::BouncyCastle::Asn1::X500::DirectoryString* information);

  static inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::AdditionalInformationSyntax* New_ctor(::StringW information);

  /// @brief Method ToAsn1Object, addr 0x23bc258, size 0x20, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::X500::DirectoryString*& __cordl_internal_get_information();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X500::DirectoryString*> const& __cordl_internal_get_information() const;

  constexpr void __cordl_internal_set_information(::Org::BouncyCastle::Asn1::X500::DirectoryString* value);

  /// @brief Method .ctor, addr 0x23bc1b4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X500::DirectoryString* information);

  /// @brief Method .ctor, addr 0x23bc1dc, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::StringW information);

  /// @brief Method get_Information, addr 0x23bc250, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X500::DirectoryString* get_Information();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AdditionalInformationSyntax();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AdditionalInformationSyntax", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AdditionalInformationSyntax(AdditionalInformationSyntax&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AdditionalInformationSyntax", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AdditionalInformationSyntax(AdditionalInformationSyntax const&) = delete;

  /// @brief Field information, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X500::DirectoryString* ___information;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 182 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::IsisMtt::X509::AdditionalInformationSyntax, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::IsisMtt::X509::AdditionalInformationSyntax, ___information) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::IsisMtt::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::IsisMtt::X509::AdditionalInformationSyntax);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::IsisMtt::X509::AdditionalInformationSyntax*, "Org.BouncyCastle.Asn1.IsisMtt.X509", "AdditionalInformationSyntax");
