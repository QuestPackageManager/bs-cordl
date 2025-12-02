#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Pkcs/RsassaPssParameters.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(RsassaPssParameters)
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Pkcs {
class RsassaPssParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Pkcs {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Pkcs.RsassaPssParameters
class CORDL_TYPE RsassaPssParameters : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field DefaultHashAlgorithm, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_DefaultHashAlgorithm, put = setStaticF_DefaultHashAlgorithm)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* DefaultHashAlgorithm;

  /// @brief Field DefaultMaskGenFunction, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_DefaultMaskGenFunction, put = setStaticF_DefaultMaskGenFunction)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* DefaultMaskGenFunction;

  /// @brief Field DefaultSaltLength, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_DefaultSaltLength, put = setStaticF_DefaultSaltLength)) ::Org::BouncyCastle::Asn1::DerInteger* DefaultSaltLength;

  /// @brief Field DefaultTrailerField, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_DefaultTrailerField, put = setStaticF_DefaultTrailerField)) ::Org::BouncyCastle::Asn1::DerInteger* DefaultTrailerField;

  __declspec(property(get = get_HashAlgorithm)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* HashAlgorithm;

  __declspec(property(get = get_MaskGenAlgorithm)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* MaskGenAlgorithm;

  __declspec(property(get = get_SaltLength)) ::Org::BouncyCastle::Asn1::DerInteger* SaltLength;

  __declspec(property(get = get_TrailerField)) ::Org::BouncyCastle::Asn1::DerInteger* TrailerField;

  /// @brief Field hashAlgorithm, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_hashAlgorithm, put = __cordl_internal_set_hashAlgorithm)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* hashAlgorithm;

  /// @brief Field maskGenAlgorithm, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_maskGenAlgorithm, put = __cordl_internal_set_maskGenAlgorithm)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* maskGenAlgorithm;

  /// @brief Field saltLength, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_saltLength, put = __cordl_internal_set_saltLength)) ::Org::BouncyCastle::Asn1::DerInteger* saltLength;

  /// @brief Field trailerField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_trailerField, put = __cordl_internal_set_trailerField)) ::Org::BouncyCastle::Asn1::DerInteger* trailerField;

  /// @brief Method GetInstance, addr 0x334281c, size 0x184, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters* New_ctor();

  static inline ::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters* New_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* hashAlgorithm,
                                                                               ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* maskGenAlgorithm,
                                                                               ::Org::BouncyCastle::Asn1::DerInteger* saltLength, ::Org::BouncyCastle::Asn1::DerInteger* trailerField);

  static inline ::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x3342c18, size 0x320, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* const& __cordl_internal_get_hashAlgorithm() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __cordl_internal_get_hashAlgorithm();

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* const& __cordl_internal_get_maskGenAlgorithm() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __cordl_internal_get_maskGenAlgorithm();

  constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& __cordl_internal_get_saltLength() const;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get_saltLength();

  constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& __cordl_internal_get_trailerField() const;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get_trailerField();

  constexpr void __cordl_internal_set_hashAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr void __cordl_internal_set_maskGenAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr void __cordl_internal_set_saltLength(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr void __cordl_internal_set_trailerField(::Org::BouncyCastle::Asn1::DerInteger* value);

  /// @brief Method .ctor, addr 0x3342b80, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3342bec, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* hashAlgorithm, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* maskGenAlgorithm,
                    ::Org::BouncyCastle::Asn1::DerInteger* saltLength, ::Org::BouncyCastle::Asn1::DerInteger* trailerField);

  /// @brief Method .ctor, addr 0x33429a0, size 0x1e0, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* getStaticF_DefaultHashAlgorithm();

  static inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* getStaticF_DefaultMaskGenFunction();

  static inline ::Org::BouncyCastle::Asn1::DerInteger* getStaticF_DefaultSaltLength();

  static inline ::Org::BouncyCastle::Asn1::DerInteger* getStaticF_DefaultTrailerField();

  /// @brief Method get_HashAlgorithm, addr 0x3342bf8, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_HashAlgorithm();

  /// @brief Method get_MaskGenAlgorithm, addr 0x3342c00, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_MaskGenAlgorithm();

  /// @brief Method get_SaltLength, addr 0x3342c08, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_SaltLength();

  /// @brief Method get_TrailerField, addr 0x3342c10, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_TrailerField();

  static inline void setStaticF_DefaultHashAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  static inline void setStaticF_DefaultMaskGenFunction(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  static inline void setStaticF_DefaultSaltLength(::Org::BouncyCastle::Asn1::DerInteger* value);

  static inline void setStaticF_DefaultTrailerField(::Org::BouncyCastle::Asn1::DerInteger* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RsassaPssParameters();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RsassaPssParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RsassaPssParameters(RsassaPssParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RsassaPssParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RsassaPssParameters(RsassaPssParameters const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 250 };

  /// @brief Field hashAlgorithm, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___hashAlgorithm;

  /// @brief Field maskGenAlgorithm, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___maskGenAlgorithm;

  /// @brief Field saltLength, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___saltLength;

  /// @brief Field trailerField, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___trailerField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters, ___hashAlgorithm) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters, ___maskGenAlgorithm) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters, ___saltLength) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters, ___trailerField) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Pkcs
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters*, "Org.BouncyCastle.Asn1.Pkcs", "RsassaPssParameters");
