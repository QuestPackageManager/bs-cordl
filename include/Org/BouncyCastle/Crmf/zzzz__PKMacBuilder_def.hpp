#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PKMacBuilder)
namespace Org::BouncyCastle::Asn1::Cmp {
class PbmParameter;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Crmf {
class IPKMacPrimitivesProvider;
}
namespace Org::BouncyCastle::Crypto {
class IMacFactory;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crmf {
class PKMacBuilder;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crmf::PKMacBuilder);
// Type: Org.BouncyCastle.Crmf::PKMacBuilder
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 68, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crmf {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crmf::PKMacBuilder*
class CORDL_TYPE PKMacBuilder : public ::System::Object {
public:
  // Declarations
  /// @brief Field iterationCount, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_iterationCount, put = __cordl_internal_set_iterationCount)) int32_t iterationCount;

  /// @brief Field mac, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_mac, put = __cordl_internal_set_mac))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* mac;

  /// @brief Field maxIterations, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_maxIterations, put = __cordl_internal_set_maxIterations)) int32_t maxIterations;

  /// @brief Field owf, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_owf, put = __cordl_internal_set_owf))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* owf;

  /// @brief Field parameters, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_parameters, put = __cordl_internal_set_parameters))::Org::BouncyCastle::Asn1::Cmp::PbmParameter* parameters;

  /// @brief Field provider, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_provider, put = __cordl_internal_set_provider))::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider* provider;

  /// @brief Field random, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_random, put = __cordl_internal_set_random))::Org::BouncyCastle::Security::SecureRandom* random;

  /// @brief Field saltLength, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_saltLength, put = __cordl_internal_set_saltLength)) int32_t saltLength;

  /// @brief Method Build, addr 0x14762a0, size 0x114, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::IMacFactory* Build(::ArrayW<char16_t, ::Array<char16_t>*> password);

  /// @brief Method CheckIterationCountCeiling, addr 0x147606c, size 0x1d8, virtual false, abstract: false, final false
  inline void CheckIterationCountCeiling(int32_t iterationCount);

  /// @brief Method GenCalculator, addr 0x14763b4, size 0x418, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::IMacFactory* GenCalculator(::Org::BouncyCastle::Asn1::Cmp::PbmParameter* parameters, ::ArrayW<char16_t, ::Array<char16_t>*> password);

  static inline ::Org::BouncyCastle::Crmf::PKMacBuilder* New_ctor();

  static inline ::Org::BouncyCastle::Crmf::PKMacBuilder* New_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* digestAlgorithmIdentifier, int32_t iterationCount,
                                                                  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* macAlgorithmIdentifier,
                                                                  ::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider* provider);

  static inline ::Org::BouncyCastle::Crmf::PKMacBuilder* New_ctor(::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider* provider);

  static inline ::Org::BouncyCastle::Crmf::PKMacBuilder* New_ctor(::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider* provider,
                                                                  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* digestAlgorithmIdentifier,
                                                                  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* macAlgorithmIdentifier);

  static inline ::Org::BouncyCastle::Crmf::PKMacBuilder* New_ctor(::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider* provider, int32_t maxIterations);

  /// @brief Method SetIterationCount, addr 0x1475ff0, size 0x7c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crmf::PKMacBuilder* SetIterationCount(int32_t iterationCount);

  /// @brief Method SetParameters, addr 0x1476244, size 0x54, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crmf::PKMacBuilder* SetParameters(::Org::BouncyCastle::Asn1::Cmp::PbmParameter* parameters);

  /// @brief Method SetSaltLength, addr 0x1475f8c, size 0x64, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crmf::PKMacBuilder* SetSaltLength(int32_t saltLength);

  /// @brief Method SetSecureRandom, addr 0x1476298, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crmf::PKMacBuilder* SetSecureRandom(::Org::BouncyCastle::Security::SecureRandom* random);

  constexpr int32_t const& __cordl_internal_get_iterationCount() const;

  constexpr int32_t& __cordl_internal_get_iterationCount();

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __cordl_internal_get_mac();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& __cordl_internal_get_mac() const;

  constexpr int32_t const& __cordl_internal_get_maxIterations() const;

  constexpr int32_t& __cordl_internal_get_maxIterations();

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __cordl_internal_get_owf();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& __cordl_internal_get_owf() const;

  constexpr ::Org::BouncyCastle::Asn1::Cmp::PbmParameter*& __cordl_internal_get_parameters();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cmp::PbmParameter*> const& __cordl_internal_get_parameters() const;

  constexpr ::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider*& __cordl_internal_get_provider();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider*> const& __cordl_internal_get_provider() const;

  constexpr ::Org::BouncyCastle::Security::SecureRandom*& __cordl_internal_get_random();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Security::SecureRandom*> const& __cordl_internal_get_random() const;

  constexpr int32_t const& __cordl_internal_get_saltLength() const;

  constexpr int32_t& __cordl_internal_get_saltLength();

  constexpr void __cordl_internal_set_iterationCount(int32_t value);

  constexpr void __cordl_internal_set_mac(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr void __cordl_internal_set_maxIterations(int32_t value);

  constexpr void __cordl_internal_set_owf(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr void __cordl_internal_set_parameters(::Org::BouncyCastle::Asn1::Cmp::PbmParameter* value);

  constexpr void __cordl_internal_set_provider(::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider* value);

  constexpr void __cordl_internal_set_random(::Org::BouncyCastle::Security::SecureRandom* value);

  constexpr void __cordl_internal_set_saltLength(int32_t value);

  /// @brief Method .ctor, addr 0x1475bfc, size 0x174, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x1475d70, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* digestAlgorithmIdentifier, int32_t iterationCount,
                    ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* macAlgorithmIdentifier, ::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider* provider);

  /// @brief Method .ctor, addr 0x1475dbc, size 0x14c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider* provider);

  /// @brief Method .ctor, addr 0x1475f08, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider* provider, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* digestAlgorithmIdentifier,
                    ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* macAlgorithmIdentifier);

  /// @brief Method .ctor, addr 0x1475f54, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider* provider, int32_t maxIterations);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PKMacBuilder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PKMacBuilder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PKMacBuilder(PKMacBuilder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PKMacBuilder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PKMacBuilder(PKMacBuilder const&) = delete;

  /// @brief Field owf, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___owf;

  /// @brief Field mac, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___mac;

  /// @brief Field provider, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider* ___provider;

  /// @brief Field random, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Security::SecureRandom* ___random;

  /// @brief Field parameters, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cmp::PbmParameter* ___parameters;

  /// @brief Field iterationCount, offset: 0x38, size: 0x4, def value: None
  int32_t ___iterationCount;

  /// @brief Field saltLength, offset: 0x3c, size: 0x4, def value: None
  int32_t ___saltLength;

  /// @brief Field maxIterations, offset: 0x40, size: 0x4, def value: None
  int32_t ___maxIterations;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crmf::PKMacBuilder, 0x48>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crmf::PKMacBuilder, ___owf) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crmf::PKMacBuilder, ___mac) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crmf::PKMacBuilder, ___provider) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crmf::PKMacBuilder, ___random) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crmf::PKMacBuilder, ___parameters) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crmf::PKMacBuilder, ___iterationCount) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crmf::PKMacBuilder, ___saltLength) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crmf::PKMacBuilder, ___maxIterations) == 0x40, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crmf
NEED_NO_BOX(::Org::BouncyCastle::Crmf::PKMacBuilder);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crmf::PKMacBuilder*, "Org.BouncyCastle.Crmf", "PKMacBuilder");
