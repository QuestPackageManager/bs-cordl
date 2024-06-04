#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Pkcs/RsaesOaepParameters.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(RsaesOaepParameters)
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Pkcs {
class RsaesOaepParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Pkcs::RsaesOaepParameters);
// Type: Org.BouncyCastle.Asn1.Pkcs::RsaesOaepParameters
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Pkcs {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.Pkcs::RsaesOaepParameters*
class CORDL_TYPE RsaesOaepParameters : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field DefaultHashAlgorithm, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DefaultHashAlgorithm, put = setStaticF_DefaultHashAlgorithm))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* DefaultHashAlgorithm;

  /// @brief Field DefaultMaskGenFunction, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DefaultMaskGenFunction, put = setStaticF_DefaultMaskGenFunction))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* DefaultMaskGenFunction;

  /// @brief Field DefaultPSourceAlgorithm, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DefaultPSourceAlgorithm, put = setStaticF_DefaultPSourceAlgorithm))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* DefaultPSourceAlgorithm;

  __declspec(property(get = get_HashAlgorithm))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* HashAlgorithm;

  __declspec(property(get = get_MaskGenAlgorithm))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* MaskGenAlgorithm;

  __declspec(property(get = get_PSourceAlgorithm))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* PSourceAlgorithm;

  /// @brief Field hashAlgorithm, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_hashAlgorithm, put = __cordl_internal_set_hashAlgorithm))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* hashAlgorithm;

  /// @brief Field maskGenAlgorithm, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_maskGenAlgorithm, put = __cordl_internal_set_maskGenAlgorithm))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* maskGenAlgorithm;

  /// @brief Field pSourceAlgorithm, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_pSourceAlgorithm, put = __cordl_internal_set_pSourceAlgorithm))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* pSourceAlgorithm;

  /// @brief Method GetInstance, addr 0x11f2bd0, size 0x188, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Pkcs::RsaesOaepParameters* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Pkcs::RsaesOaepParameters* New_ctor();

  static inline ::Org::BouncyCastle::Asn1::Pkcs::RsaesOaepParameters* New_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* hashAlgorithm,
                                                                               ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* maskGenAlgorithm,
                                                                               ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* pSourceAlgorithm);

  static inline ::Org::BouncyCastle::Asn1::Pkcs::RsaesOaepParameters* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x11f2fd4, size 0x20c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __cordl_internal_get_hashAlgorithm();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& __cordl_internal_get_hashAlgorithm() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __cordl_internal_get_maskGenAlgorithm();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& __cordl_internal_get_maskGenAlgorithm() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __cordl_internal_get_pSourceAlgorithm();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& __cordl_internal_get_pSourceAlgorithm() const;

  constexpr void __cordl_internal_set_hashAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr void __cordl_internal_set_maskGenAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr void __cordl_internal_set_pSourceAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  /// @brief Method .ctor, addr 0x11f2f0c, size 0x74, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x11f2f80, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* hashAlgorithm, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* maskGenAlgorithm,
                    ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* pSourceAlgorithm);

  /// @brief Method .ctor, addr 0x11f2d58, size 0x1b4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* getStaticF_DefaultHashAlgorithm();

  static inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* getStaticF_DefaultMaskGenFunction();

  static inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* getStaticF_DefaultPSourceAlgorithm();

  /// @brief Method get_HashAlgorithm, addr 0x11f2fbc, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_HashAlgorithm();

  /// @brief Method get_MaskGenAlgorithm, addr 0x11f2fc4, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_MaskGenAlgorithm();

  /// @brief Method get_PSourceAlgorithm, addr 0x11f2fcc, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_PSourceAlgorithm();

  static inline void setStaticF_DefaultHashAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  static inline void setStaticF_DefaultMaskGenFunction(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  static inline void setStaticF_DefaultPSourceAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RsaesOaepParameters();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RsaesOaepParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RsaesOaepParameters(RsaesOaepParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RsaesOaepParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RsaesOaepParameters(RsaesOaepParameters const&) = delete;

  /// @brief Field hashAlgorithm, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___hashAlgorithm;

  /// @brief Field maskGenAlgorithm, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___maskGenAlgorithm;

  /// @brief Field pSourceAlgorithm, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___pSourceAlgorithm;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Pkcs::RsaesOaepParameters, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Pkcs::RsaesOaepParameters, ___hashAlgorithm) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Pkcs::RsaesOaepParameters, ___maskGenAlgorithm) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Pkcs::RsaesOaepParameters, ___pSourceAlgorithm) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Pkcs
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Pkcs::RsaesOaepParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Pkcs::RsaesOaepParameters*, "Org.BouncyCastle.Asn1.Pkcs", "RsaesOaepParameters");
