#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__ContainedPacket_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SymmetricKeyAlgorithmTag_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SecretKeyPacket)
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgOutputStream;
}
namespace Org::BouncyCastle::Bcpg {
class PublicKeyPacket;
}
namespace Org::BouncyCastle::Bcpg {
class S2k;
}
namespace Org::BouncyCastle::Bcpg {
struct SymmetricKeyAlgorithmTag;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class SecretKeyPacket;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::SecretKeyPacket);
// Type: Org.BouncyCastle.Bcpg::SecretKeyPacket
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(560)), TypeDefinitionIndex(TypeDefinitionIndex(594))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(587))
// CS Name: ::Org.BouncyCastle.Bcpg::SecretKeyPacket*
class CORDL_TYPE SecretKeyPacket : public ::Org::BouncyCastle::Bcpg::ContainedPacket {
public:
  // Declarations
  /// @brief Field pubKeyPacket, offset 0x10, size 0x8
  __declspec(property(get = __get_pubKeyPacket, put = __set_pubKeyPacket))::Org::BouncyCastle::Bcpg::PublicKeyPacket* pubKeyPacket;

  /// @brief Field secKeyData, offset 0x18, size 0x8
  __declspec(property(get = __get_secKeyData, put = __set_secKeyData))::ArrayW<uint8_t, ::Array<uint8_t>*> secKeyData;

  /// @brief Field s2kUsage, offset 0x20, size 0x4
  __declspec(property(get = __get_s2kUsage, put = __set_s2kUsage)) int32_t s2kUsage;

  /// @brief Field encAlgorithm, offset 0x24, size 0x4
  __declspec(property(get = __get_encAlgorithm, put = __set_encAlgorithm))::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm;

  /// @brief Field s2k, offset 0x28, size 0x8
  __declspec(property(get = __get_s2k, put = __set_s2k))::Org::BouncyCastle::Bcpg::S2k* s2k;

  /// @brief Field iv, offset 0x30, size 0x8
  __declspec(property(get = __get_iv, put = __set_iv))::ArrayW<uint8_t, ::Array<uint8_t>*> iv;

  __declspec(property(get = get_EncAlgorithm))::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag EncAlgorithm;

  __declspec(property(get = get_S2kUsage)) int32_t S2kUsage;

  __declspec(property(get = get_S2k))::Org::BouncyCastle::Bcpg::S2k* S2k;

  __declspec(property(get = get_PublicKeyPacket))::Org::BouncyCastle::Bcpg::PublicKeyPacket* PublicKeyPacket;

  constexpr ::Org::BouncyCastle::Bcpg::PublicKeyPacket*& __get_pubKeyPacket();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::PublicKeyPacket*> const& __get_pubKeyPacket() const;

  constexpr void __set_pubKeyPacket(::Org::BouncyCastle::Bcpg::PublicKeyPacket* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_secKeyData();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_secKeyData() const;

  constexpr void __set_secKeyData(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __get_s2kUsage();

  constexpr int32_t const& __get_s2kUsage() const;

  constexpr void __set_s2kUsage(int32_t value);

  constexpr ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag& __get_encAlgorithm();

  constexpr ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag const& __get_encAlgorithm() const;

  constexpr void __set_encAlgorithm(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag value);

  constexpr ::Org::BouncyCastle::Bcpg::S2k*& __get_s2k();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::S2k*> const& __get_s2k() const;

  constexpr void __set_s2k(::Org::BouncyCastle::Bcpg::S2k* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_iv();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_iv() const;

  constexpr void __set_iv(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::Org::BouncyCastle::Bcpg::SecretKeyPacket* New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  /// @brief Method .ctor, addr 0x11ce614, size 0x1e0, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  static inline ::Org::BouncyCastle::Bcpg::SecretKeyPacket* New_ctor(::Org::BouncyCastle::Bcpg::PublicKeyPacket* pubKeyPacket, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                                                                     ::Org::BouncyCastle::Bcpg::S2k* s2k, ::ArrayW<uint8_t, ::Array<uint8_t>*> iv, ::ArrayW<uint8_t, ::Array<uint8_t>*> secKeyData);

  /// @brief Method .ctor, addr 0x11d3530, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::PublicKeyPacket* pubKeyPacket, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::Org::BouncyCastle::Bcpg::S2k* s2k,
                    ::ArrayW<uint8_t, ::Array<uint8_t>*> iv, ::ArrayW<uint8_t, ::Array<uint8_t>*> secKeyData);

  static inline ::Org::BouncyCastle::Bcpg::SecretKeyPacket* New_ctor(::Org::BouncyCastle::Bcpg::PublicKeyPacket* pubKeyPacket, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                                                                     int32_t s2kUsage, ::Org::BouncyCastle::Bcpg::S2k* s2k, ::ArrayW<uint8_t, ::Array<uint8_t>*> iv,
                                                                     ::ArrayW<uint8_t, ::Array<uint8_t>*> secKeyData);

  /// @brief Method .ctor, addr 0x11d35e4, size 0xac, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::PublicKeyPacket* pubKeyPacket, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, int32_t s2kUsage, ::Org::BouncyCastle::Bcpg::S2k* s2k,
                    ::ArrayW<uint8_t, ::Array<uint8_t>*> iv, ::ArrayW<uint8_t, ::Array<uint8_t>*> secKeyData);

  /// @brief Method get_EncAlgorithm, addr 0x11d3690, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag get_EncAlgorithm();

  /// @brief Method get_S2kUsage, addr 0x11d3698, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_S2kUsage();

  /// @brief Method GetIV, addr 0x11d36a0, size 0x5c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetIV();

  /// @brief Method get_S2k, addr 0x11d36fc, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::S2k* get_S2k();

  /// @brief Method get_PublicKeyPacket, addr 0x11d3704, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::PublicKeyPacket* get_PublicKeyPacket();

  /// @brief Method GetSecretKeyData, addr 0x11d370c, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetSecretKeyData();

  /// @brief Method GetEncodedContents, addr 0x11d3714, size 0x160, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncodedContents();

  /// @brief Method Encode, addr 0x11d3874, size 0x2c, virtual true, abstract: false, final false
  inline void Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream* bcpgOut);

  // Ctor Parameters [CppParam { name: "", ty: "SecretKeyPacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SecretKeyPacket(SecretKeyPacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SecretKeyPacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SecretKeyPacket(SecretKeyPacket const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SecretKeyPacket();

public:
  /// @brief Field pubKeyPacket, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Bcpg::PublicKeyPacket* ___pubKeyPacket;

  /// @brief Field secKeyData, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___secKeyData;

  /// @brief Field s2kUsage, offset: 0x20, size: 0x4, def value: None
  int32_t ___s2kUsage;

  /// @brief Field encAlgorithm, offset: 0x24, size: 0x4, def value: None
  ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag ___encAlgorithm;

  /// @brief Field s2k, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Bcpg::S2k* ___s2k;

  /// @brief Field iv, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___iv;

  /// @brief Field UsageNone offset 0xffffffff size 0x4
  static constexpr int32_t UsageNone{ static_cast<int32_t>(0x0) };

  /// @brief Field UsageChecksum offset 0xffffffff size 0x4
  static constexpr int32_t UsageChecksum{ static_cast<int32_t>(0xff) };

  /// @brief Field UsageSha1 offset 0xffffffff size 0x4
  static constexpr int32_t UsageSha1{ static_cast<int32_t>(0xfe) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::SecretKeyPacket, 0x38>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::SecretKeyPacket, ___pubKeyPacket) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::SecretKeyPacket, ___secKeyData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::SecretKeyPacket, ___s2kUsage) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::SecretKeyPacket, ___encAlgorithm) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::SecretKeyPacket, ___s2k) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::SecretKeyPacket, ___iv) == 0x30, "Offset mismatch!");

} // namespace Org::BouncyCastle::Bcpg
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::SecretKeyPacket);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::SecretKeyPacket*, "Org.BouncyCastle.Bcpg", "SecretKeyPacket");
