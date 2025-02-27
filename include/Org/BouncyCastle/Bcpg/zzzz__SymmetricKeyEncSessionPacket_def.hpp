#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/SymmetricKeyEncSessionPacket.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__ContainedPacket_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SymmetricKeyAlgorithmTag_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SymmetricKeyEncSessionPacket)
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgOutputStream;
}
namespace Org::BouncyCastle::Bcpg {
class S2k;
}
namespace Org::BouncyCastle::Bcpg {
struct SymmetricKeyAlgorithmTag;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class SymmetricKeyEncSessionPacket;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket);
// Dependencies Org.BouncyCastle.Bcpg.ContainedPacket, Org.BouncyCastle.Bcpg.SymmetricKeyAlgorithmTag
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// CS Name: Org.BouncyCastle.Bcpg.SymmetricKeyEncSessionPacket
class CORDL_TYPE SymmetricKeyEncSessionPacket : public ::Org::BouncyCastle::Bcpg::ContainedPacket {
public:
  // Declarations
  __declspec(property(get = get_EncAlgorithm)) ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag EncAlgorithm;

  __declspec(property(get = get_S2k)) ::Org::BouncyCastle::Bcpg::S2k* S2k;

  __declspec(property(get = get_Version)) int32_t Version;

  /// @brief Field encAlgorithm, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_encAlgorithm, put = __cordl_internal_set_encAlgorithm)) ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm;

  /// @brief Field s2k, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_s2k, put = __cordl_internal_set_s2k)) ::Org::BouncyCastle::Bcpg::S2k* s2k;

  /// @brief Field secKeyData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_secKeyData, put = __cordl_internal_set_secKeyData)) ::ArrayW<uint8_t, ::Array<uint8_t>*> secKeyData;

  /// @brief Field version, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version)) int32_t version;

  /// @brief Method Encode, addr 0x264fd70, size 0x164, virtual true, abstract: false, final false
  inline void Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream* bcpgOut);

  /// @brief Method GetSecKeyData, addr 0x264fd60, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetSecKeyData();

  static inline ::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket* New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  static inline ::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket* New_ctor(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::Org::BouncyCastle::Bcpg::S2k* s2k,
                                                                                  ::ArrayW<uint8_t, ::Array<uint8_t>*> secKeyData);

  constexpr ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag const& __cordl_internal_get_encAlgorithm() const;

  constexpr ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag& __cordl_internal_get_encAlgorithm();

  constexpr ::Org::BouncyCastle::Bcpg::S2k* const& __cordl_internal_get_s2k() const;

  constexpr ::Org::BouncyCastle::Bcpg::S2k*& __cordl_internal_get_s2k();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_secKeyData() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_secKeyData();

  constexpr int32_t const& __cordl_internal_get_version() const;

  constexpr int32_t& __cordl_internal_get_version();

  constexpr void __cordl_internal_set_encAlgorithm(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag value);

  constexpr void __cordl_internal_set_s2k(::Org::BouncyCastle::Bcpg::S2k* value);

  constexpr void __cordl_internal_set_secKeyData(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_version(int32_t value);

  /// @brief Method .ctor, addr 0x2649674, size 0xb0, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  /// @brief Method .ctor, addr 0x264fd10, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::Org::BouncyCastle::Bcpg::S2k* s2k, ::ArrayW<uint8_t, ::Array<uint8_t>*> secKeyData);

  /// @brief Method get_EncAlgorithm, addr 0x264fd50, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag get_EncAlgorithm();

  /// @brief Method get_S2k, addr 0x264fd58, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::S2k* get_S2k();

  /// @brief Method get_Version, addr 0x264fd68, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Version();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SymmetricKeyEncSessionPacket();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SymmetricKeyEncSessionPacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SymmetricKeyEncSessionPacket(SymmetricKeyEncSessionPacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SymmetricKeyEncSessionPacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SymmetricKeyEncSessionPacket(SymmetricKeyEncSessionPacket const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 595 };

  /// @brief Field version, offset: 0x10, size: 0x4, def value: None
  int32_t ___version;

  /// @brief Field encAlgorithm, offset: 0x14, size: 0x4, def value: None
  ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag ___encAlgorithm;

  /// @brief Field s2k, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Bcpg::S2k* ___s2k;

  /// @brief Field secKeyData, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___secKeyData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket, ___version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket, ___encAlgorithm) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket, ___s2k) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket, ___secKeyData) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket*, "Org.BouncyCastle.Bcpg", "SymmetricKeyEncSessionPacket");
