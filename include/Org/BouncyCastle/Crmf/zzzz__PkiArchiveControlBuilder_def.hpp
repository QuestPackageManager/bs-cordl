#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crmf/PkiArchiveControlBuilder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PkiArchiveControlBuilder)
namespace Org::BouncyCastle::Asn1::Pkcs {
class PrivateKeyInfo;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
namespace Org::BouncyCastle::Cms {
class CmsEnvelopedDataGenerator;
}
namespace Org::BouncyCastle::Cms {
class CmsProcessableByteArray;
}
namespace Org::BouncyCastle::Cms {
class RecipientInfoGenerator;
}
namespace Org::BouncyCastle::Crmf {
class PkiArchiveControl;
}
namespace Org::BouncyCastle::Crypto {
class ICipherBuilderWithKey;
}
// Forward declare root types
namespace Org::BouncyCastle::Crmf {
class PkiArchiveControlBuilder;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crmf::PkiArchiveControlBuilder);
// Dependencies System.Object
namespace Org::BouncyCastle::Crmf {
// Is value type: false
// CS Name: Org.BouncyCastle.Crmf.PkiArchiveControlBuilder
class CORDL_TYPE PkiArchiveControlBuilder : public ::System::Object {
public:
  // Declarations
  /// @brief Field envGen, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_envGen, put = __cordl_internal_set_envGen)) ::Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator* envGen;

  /// @brief Field keyContent, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_keyContent, put = __cordl_internal_set_keyContent)) ::Org::BouncyCastle::Cms::CmsProcessableByteArray* keyContent;

  /// @brief Method AddRecipientGenerator, addr 0x2684e50, size 0x28, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crmf::PkiArchiveControlBuilder* AddRecipientGenerator(::Org::BouncyCastle::Cms::RecipientInfoGenerator* recipientGen);

  /// @brief Method Build, addr 0x2684e78, size 0xfc, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crmf::PkiArchiveControl* Build(::Org::BouncyCastle::Crypto::ICipherBuilderWithKey* contentEncryptor);

  static inline ::Org::BouncyCastle::Crmf::PkiArchiveControlBuilder* New_ctor(::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* privateKeyInfo,
                                                                              ::Org::BouncyCastle::Asn1::X509::GeneralName* generalName);

  constexpr ::Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator* const& __cordl_internal_get_envGen() const;

  constexpr ::Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator*& __cordl_internal_get_envGen();

  constexpr ::Org::BouncyCastle::Cms::CmsProcessableByteArray* const& __cordl_internal_get_keyContent() const;

  constexpr ::Org::BouncyCastle::Cms::CmsProcessableByteArray*& __cordl_internal_get_keyContent();

  constexpr void __cordl_internal_set_envGen(::Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator* value);

  constexpr void __cordl_internal_set_keyContent(::Org::BouncyCastle::Cms::CmsProcessableByteArray* value);

  /// @brief Method .ctor, addr 0x2684c60, size 0x1f0, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* privateKeyInfo, ::Org::BouncyCastle::Asn1::X509::GeneralName* generalName);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PkiArchiveControlBuilder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PkiArchiveControlBuilder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PkiArchiveControlBuilder(PkiArchiveControlBuilder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PkiArchiveControlBuilder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PkiArchiveControlBuilder(PkiArchiveControlBuilder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 704 };

  /// @brief Field envGen, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator* ___envGen;

  /// @brief Field keyContent, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Cms::CmsProcessableByteArray* ___keyContent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crmf::PkiArchiveControlBuilder, ___envGen) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crmf::PkiArchiveControlBuilder, ___keyContent) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crmf::PkiArchiveControlBuilder, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crmf
NEED_NO_BOX(::Org::BouncyCastle::Crmf::PkiArchiveControlBuilder);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crmf::PkiArchiveControlBuilder*, "Org.BouncyCastle.Crmf", "PkiArchiveControlBuilder");
