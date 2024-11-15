#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/SignerInfoGeneratorBuilder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SignerInfoGeneratorBuilder)
namespace Org::BouncyCastle::Asn1::Cms {
class SignerIdentifier;
}
namespace Org::BouncyCastle::Cms {
class CmsAttributeTableGenerator;
}
namespace Org::BouncyCastle::Cms {
class SignerInfoGenerator;
}
namespace Org::BouncyCastle::Crypto {
class ISignatureFactory;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class SignerInfoGeneratorBuilder;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder);
// Type: Org.BouncyCastle.Cms::SignerInfoGeneratorBuilder
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Cms {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Cms::SignerInfoGeneratorBuilder*
class CORDL_TYPE SignerInfoGeneratorBuilder : public ::System::Object {
public:
  // Declarations
  /// @brief Field directSignature, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_directSignature, put = __cordl_internal_set_directSignature)) bool directSignature;

  /// @brief Field signedGen, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_signedGen, put = __cordl_internal_set_signedGen)) ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* signedGen;

  /// @brief Field unsignedGen, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_unsignedGen, put = __cordl_internal_set_unsignedGen)) ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* unsignedGen;

  /// @brief Method Build, addr 0x2648c40, size 0x128, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Cms::SignerInfoGenerator* Build(::Org::BouncyCastle::Crypto::ISignatureFactory* contentSigner, ::Org::BouncyCastle::X509::X509Certificate* certificate);

  /// @brief Method Build, addr 0x2648e64, size 0xa8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Cms::SignerInfoGenerator* Build(::Org::BouncyCastle::Crypto::ISignatureFactory* signerFactory, ::ArrayW<uint8_t, ::Array<uint8_t>*> subjectKeyIdentifier);

  /// @brief Method CreateGenerator, addr 0x2648d68, size 0xfc, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Cms::SignerInfoGenerator* CreateGenerator(::Org::BouncyCastle::Crypto::ISignatureFactory* contentSigner, ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* sigId);

  static inline ::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder* New_ctor();

  /// @brief Method SetDirectSignature, addr 0x2648c24, size 0xc, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder* SetDirectSignature(bool hasNoSignedAttributes);

  /// @brief Method WithSignedAttributeGenerator, addr 0x2648c30, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder* WithSignedAttributeGenerator(::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* signedGen);

  /// @brief Method WithUnsignedAttributeGenerator, addr 0x2648c38, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder* WithUnsignedAttributeGenerator(::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* unsignedGen);

  constexpr bool const& __cordl_internal_get_directSignature() const;

  constexpr bool& __cordl_internal_get_directSignature();

  constexpr ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*& __cordl_internal_get_signedGen();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*> const& __cordl_internal_get_signedGen() const;

  constexpr ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*& __cordl_internal_get_unsignedGen();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*> const& __cordl_internal_get_unsignedGen() const;

  constexpr void __cordl_internal_set_directSignature(bool value);

  constexpr void __cordl_internal_set_signedGen(::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* value);

  constexpr void __cordl_internal_set_unsignedGen(::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* value);

  /// @brief Method .ctor, addr 0x2648c1c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SignerInfoGeneratorBuilder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SignerInfoGeneratorBuilder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SignerInfoGeneratorBuilder(SignerInfoGeneratorBuilder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SignerInfoGeneratorBuilder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SignerInfoGeneratorBuilder(SignerInfoGeneratorBuilder const&) = delete;

  /// @brief Field directSignature, offset: 0x10, size: 0x1, def value: None
  bool ___directSignature;

  /// @brief Field signedGen, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* ___signedGen;

  /// @brief Field unsignedGen, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* ___unsignedGen;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 690 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder, ___directSignature) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder, ___signedGen) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder, ___unsignedGen) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder*, "Org.BouncyCastle.Cms", "SignerInfoGeneratorBuilder");
