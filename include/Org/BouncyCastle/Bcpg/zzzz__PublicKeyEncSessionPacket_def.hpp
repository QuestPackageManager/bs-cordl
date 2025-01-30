#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/PublicKeyEncSessionPacket.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__ContainedPacket_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__PublicKeyAlgorithmTag_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PublicKeyEncSessionPacket)
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgOutputStream;
}
namespace Org::BouncyCastle::Bcpg {
struct PublicKeyAlgorithmTag;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class PublicKeyEncSessionPacket;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket);
// Dependencies Org.BouncyCastle.Bcpg.ContainedPacket, Org.BouncyCastle.Bcpg.PublicKeyAlgorithmTag
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// CS Name: Org.BouncyCastle.Bcpg.PublicKeyEncSessionPacket
class CORDL_TYPE PublicKeyEncSessionPacket : public ::Org::BouncyCastle::Bcpg::ContainedPacket {
public:
  // Declarations
  __declspec(property(get = get_Algorithm)) ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag Algorithm;

  __declspec(property(get = get_KeyId)) int64_t KeyId;

  __declspec(property(get = get_Version)) int32_t Version;

  /// @brief Field algorithm, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_algorithm, put = __cordl_internal_set_algorithm)) ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm;

  /// @brief Field data, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data)) ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> data;

  /// @brief Field keyId, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_keyId, put = __cordl_internal_set_keyId)) int64_t keyId;

  /// @brief Field version, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version)) int32_t version;

  /// @brief Method Encode, addr 0x2647de8, size 0x188, virtual true, abstract: false, final false
  inline void Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream* bcpgOut);

  /// @brief Method GetEncSessionKey, addr 0x2647de0, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> GetEncSessionKey();

  static inline ::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket* New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  static inline ::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket* New_ctor(int64_t keyId, ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm,
                                                                               ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> data);

  constexpr ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag const& __cordl_internal_get_algorithm() const;

  constexpr ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag& __cordl_internal_get_algorithm();

  constexpr ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> const& __cordl_internal_get_data() const;

  constexpr ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*>& __cordl_internal_get_data();

  constexpr int64_t const& __cordl_internal_get_keyId() const;

  constexpr int64_t& __cordl_internal_get_keyId();

  constexpr int32_t const& __cordl_internal_get_version() const;

  constexpr int32_t& __cordl_internal_get_version();

  constexpr void __cordl_internal_set_algorithm(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag value);

  constexpr void __cordl_internal_set_data(::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> value);

  constexpr void __cordl_internal_set_keyId(int64_t value);

  constexpr void __cordl_internal_set_version(int32_t value);

  /// @brief Method .ctor, addr 0x2642ec0, size 0x318, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  /// @brief Method .ctor, addr 0x2647cac, size 0x11c, virtual false, abstract: false, final false
  inline void _ctor(int64_t keyId, ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm, ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> data);

  /// @brief Method get_Algorithm, addr 0x2647dd8, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag get_Algorithm();

  /// @brief Method get_KeyId, addr 0x2647dd0, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_KeyId();

  /// @brief Method get_Version, addr 0x2647dc8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Version();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PublicKeyEncSessionPacket();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PublicKeyEncSessionPacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PublicKeyEncSessionPacket(PublicKeyEncSessionPacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PublicKeyEncSessionPacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PublicKeyEncSessionPacket(PublicKeyEncSessionPacket const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 581 };

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
static_assert(offsetof(::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket, ___version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket, ___keyId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket, ___algorithm) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket, ___data) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket*, "Org.BouncyCastle.Bcpg", "PublicKeyEncSessionPacket");
