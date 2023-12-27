#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__ContainedPacket_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__PublicKeyAlgorithmTag_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PublicKeyEncSessionPacket)
namespace Org::BouncyCastle::Bcpg {
struct PublicKeyAlgorithmTag;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgOutputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class PublicKeyEncSessionPacket;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket);
// Type: Org.BouncyCastle.Bcpg::PublicKeyEncSessionPacket
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(560)), TypeDefinitionIndex(TypeDefinitionIndex(580))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(581))
// CS Name: ::Org.BouncyCastle.Bcpg::PublicKeyEncSessionPacket*
class CORDL_TYPE PublicKeyEncSessionPacket : public ::Org::BouncyCastle::Bcpg::ContainedPacket {
public:
  // Declarations
  /// @brief Field version, offset 0x10, size 0x4
  __declspec(property(get = __get_version, put = __set_version)) int32_t version;

  /// @brief Field keyId, offset 0x18, size 0x8
  __declspec(property(get = __get_keyId, put = __set_keyId)) int64_t keyId;

  /// @brief Field algorithm, offset 0x20, size 0x4
  __declspec(property(get = __get_algorithm, put = __set_algorithm))::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm;

  /// @brief Field data, offset 0x28, size 0x8
  __declspec(property(get = __get_data, put = __set_data))::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> data;

  __declspec(property(get = get_Version)) int32_t Version;

  __declspec(property(get = get_KeyId)) int64_t KeyId;

  __declspec(property(get = get_Algorithm))::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag Algorithm;

  constexpr int32_t& __get_version();

  constexpr int32_t const& __get_version() const;

  constexpr void __set_version(int32_t value);

  constexpr int64_t& __get_keyId();

  constexpr int64_t const& __get_keyId() const;

  constexpr void __set_keyId(int64_t value);

  constexpr ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag& __get_algorithm();

  constexpr ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag const& __get_algorithm() const;

  constexpr void __set_algorithm(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag value);

  constexpr ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*>& __get_data();

  constexpr ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> const& __get_data() const;

  constexpr void __set_data(::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> value);

  static inline ::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket* New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  /// @brief Method .ctor addr 0x11cd2e8 size 0x364 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  static inline ::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket* New_ctor(int64_t keyId, ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm,
                                                                               ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> data);

  /// @brief Method .ctor addr 0x11d221c size 0x144 virtual false final false
  inline void _ctor(int64_t keyId, ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm, ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> data);

  /// @brief Method get_Version addr 0x11d2360 size 0x8 virtual false final false
  inline int32_t get_Version();

  /// @brief Method get_KeyId addr 0x11d2368 size 0x8 virtual false final false
  inline int64_t get_KeyId();

  /// @brief Method get_Algorithm addr 0x11d2370 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag get_Algorithm();

  /// @brief Method GetEncSessionKey addr 0x11d2378 size 0x8 virtual false final false
  inline ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> GetEncSessionKey();

  /// @brief Method Encode addr 0x11d2380 size 0x188 virtual true final false
  inline void Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream* bcpgOut);

  // Ctor Parameters [CppParam { name: "", ty: "PublicKeyEncSessionPacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PublicKeyEncSessionPacket(PublicKeyEncSessionPacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PublicKeyEncSessionPacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PublicKeyEncSessionPacket(PublicKeyEncSessionPacket const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PublicKeyEncSessionPacket();

public:
  /// @brief Field version, offset: 0x10, size: 0x4, def value: None
  int32_t ___version;

  /// @brief Field keyId, offset: 0x18, size: 0x8, def value: None
  int64_t ___keyId;

  /// @brief Field algorithm, offset: 0x20, size: 0x4, def value: None
  ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag ___algorithm;

  /// @brief Field data, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket*, "Org.BouncyCastle.Bcpg", "PublicKeyEncSessionPacket");
