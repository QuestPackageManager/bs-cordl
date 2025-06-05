#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/OriginatorInformation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OriginatorInformation)
namespace Org::BouncyCastle::Asn1::Cms {
class OriginatorInfo;
}
namespace Org::BouncyCastle::X509::Store {
class IX509Store;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class OriginatorInformation;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::OriginatorInformation);
// Dependencies System.Object
namespace Org::BouncyCastle::Cms {
// Is value type: false
// CS Name: Org.BouncyCastle.Cms.OriginatorInformation
class CORDL_TYPE OriginatorInformation : public ::System::Object {
public:
  // Declarations
  /// @brief Field originatorInfo, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_originatorInfo, put = __cordl_internal_set_originatorInfo)) ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* originatorInfo;

  /// @brief Method GetCertificates, addr 0x267c1b4, size 0x4e0, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::X509::Store::IX509Store* GetCertificates();

  /// @brief Method GetCrls, addr 0x267c694, size 0x4e0, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::X509::Store::IX509Store* GetCrls();

  static inline ::Org::BouncyCastle::Cms::OriginatorInformation* New_ctor(::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* originatorInfo);

  /// @brief Method ToAsn1Structure, addr 0x267cb74, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* ToAsn1Structure();

  constexpr ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* const& __cordl_internal_get_originatorInfo() const;

  constexpr ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*& __cordl_internal_get_originatorInfo();

  constexpr void __cordl_internal_set_originatorInfo(::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* value);

  /// @brief Method .ctor, addr 0x267c18c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* originatorInfo);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OriginatorInformation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OriginatorInformation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OriginatorInformation(OriginatorInformation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OriginatorInformation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OriginatorInformation(OriginatorInformation const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 681 };

  /// @brief Field originatorInfo, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* ___originatorInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Cms::OriginatorInformation, ___originatorInfo) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::OriginatorInformation, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::OriginatorInformation);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::OriginatorInformation*, "Org.BouncyCastle.Cms", "OriginatorInformation");
