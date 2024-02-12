#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SimulatedTlsSrpIdentityManager)
namespace Org::BouncyCastle::Crypto::Agreement::Srp {
class Srp6VerifierGenerator;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class Srp6GroupParameters;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSrpIdentityManager;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSrpLoginParameters;
}
namespace Org::BouncyCastle::Crypto {
class IMac;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class SimulatedTlsSrpIdentityManager;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager);
// Type: Org.BouncyCastle.Crypto.Tls::SimulatedTlsSrpIdentityManager
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1279))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::SimulatedTlsSrpIdentityManager*
class CORDL_TYPE SimulatedTlsSrpIdentityManager : public ::System::Object {
public:
  // Declarations
  /// @brief Field mGroup, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mGroup, put = __cordl_internal_set_mGroup))::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* mGroup;

  /// @brief Field mVerifierGenerator, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_mVerifierGenerator,
                      put = __cordl_internal_set_mVerifierGenerator))::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator* mVerifierGenerator;

  /// @brief Field mMac, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_mMac, put = __cordl_internal_set_mMac))::Org::BouncyCastle::Crypto::IMac* mMac;

  /// @brief Field PREFIX_PASSWORD, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PREFIX_PASSWORD, put = setStaticF_PREFIX_PASSWORD))::ArrayW<uint8_t, ::Array<uint8_t>*> PREFIX_PASSWORD;

  /// @brief Field PREFIX_SALT, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PREFIX_SALT, put = setStaticF_PREFIX_SALT))::ArrayW<uint8_t, ::Array<uint8_t>*> PREFIX_SALT;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager"
  constexpr operator ::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager*() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager"
  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager* i___Org__BouncyCastle__Crypto__Tls__TlsSrpIdentityManager() noexcept;

  constexpr ::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters*& __cordl_internal_get_mGroup();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters*> const& __cordl_internal_get_mGroup() const;

  constexpr void __cordl_internal_set_mGroup(::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* value);

  constexpr ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator*& __cordl_internal_get_mVerifierGenerator();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator*> const& __cordl_internal_get_mVerifierGenerator() const;

  constexpr void __cordl_internal_set_mVerifierGenerator(::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator* value);

  constexpr ::Org::BouncyCastle::Crypto::IMac*& __cordl_internal_get_mMac();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IMac*> const& __cordl_internal_get_mMac() const;

  constexpr void __cordl_internal_set_mMac(::Org::BouncyCastle::Crypto::IMac* value);

  static inline void setStaticF_PREFIX_PASSWORD(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_PREFIX_PASSWORD();

  static inline void setStaticF_PREFIX_SALT(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_PREFIX_SALT();

  /// @brief Method GetRfc5054Default, addr 0xfc2ac4, size 0x17c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager* GetRfc5054Default(::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* group,
                                                                                                    ::ArrayW<uint8_t, ::Array<uint8_t>*> seedKey);

  static inline ::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager* New_ctor(::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* group,
                                                                                           ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator* verifierGenerator,
                                                                                           ::Org::BouncyCastle::Crypto::IMac* mac);

  /// @brief Method .ctor, addr 0xfc2c40, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* group, ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator* verifierGenerator,
                    ::Org::BouncyCastle::Crypto::IMac* mac);

  /// @brief Method GetLoginParameters, addr 0xfc2c7c, size 0x4bc, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters* GetLoginParameters(::ArrayW<uint8_t, ::Array<uint8_t>*> identity);

  // Ctor Parameters [CppParam { name: "", ty: "SimulatedTlsSrpIdentityManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SimulatedTlsSrpIdentityManager(SimulatedTlsSrpIdentityManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SimulatedTlsSrpIdentityManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SimulatedTlsSrpIdentityManager(SimulatedTlsSrpIdentityManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SimulatedTlsSrpIdentityManager();

public:
  /// @brief Field mGroup, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* ___mGroup;

  /// @brief Field mVerifierGenerator, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator* ___mVerifierGenerator;

  /// @brief Field mMac, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IMac* ___mMac;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager, ___mGroup) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager, ___mVerifierGenerator) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager, ___mMac) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager*, "Org.BouncyCastle.Crypto.Tls", "SimulatedTlsSrpIdentityManager");
