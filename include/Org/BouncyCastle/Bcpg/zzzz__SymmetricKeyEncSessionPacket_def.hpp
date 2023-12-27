#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__ContainedPacket_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SymmetricKeyAlgorithmTag_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SymmetricKeyEncSessionPacket)
namespace Org::BouncyCastle::Bcpg {
class S2k;
}
namespace Org::BouncyCastle::Bcpg {
struct SymmetricKeyAlgorithmTag;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgOutputStream;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class SymmetricKeyEncSessionPacket;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket);
// Type: Org.BouncyCastle.Bcpg::SymmetricKeyEncSessionPacket
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(560)), TypeDefinitionIndex(TypeDefinitionIndex(594))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(595))
// CS Name: ::Org.BouncyCastle.Bcpg::SymmetricKeyEncSessionPacket*
class CORDL_TYPE SymmetricKeyEncSessionPacket : public ::Org::BouncyCastle::Bcpg::ContainedPacket {
public:
  // Declarations
  /// @brief Field version, offset 0x10, size 0x4
  __declspec(property(get = __get_version, put = __set_version)) int32_t version;

  /// @brief Field encAlgorithm, offset 0x14, size 0x4
  __declspec(property(get = __get_encAlgorithm, put = __set_encAlgorithm))::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm;

  /// @brief Field s2k, offset 0x18, size 0x8
  __declspec(property(get = __get_s2k, put = __set_s2k))::Org::BouncyCastle::Bcpg::S2k* s2k;

  /// @brief Field secKeyData, offset 0x20, size 0x8
  __declspec(property(get = __get_secKeyData, put = __set_secKeyData))::ArrayW<uint8_t, ::Array<uint8_t>*> secKeyData;

  __declspec(property(get = get_EncAlgorithm))::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag EncAlgorithm;

  __declspec(property(get = get_S2k))::Org::BouncyCastle::Bcpg::S2k* S2k;

  __declspec(property(get = get_Version)) int32_t Version;

  constexpr int32_t& __get_version();

  constexpr int32_t const& __get_version() const;

  constexpr void __set_version(int32_t value);

  constexpr ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag& __get_encAlgorithm();

  constexpr ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag const& __get_encAlgorithm() const;

  constexpr void __set_encAlgorithm(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag value);

  constexpr ::Org::BouncyCastle::Bcpg::S2k*& __get_s2k();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::S2k*> const& __get_s2k() const;

  constexpr void __set_s2k(::Org::BouncyCastle::Bcpg::S2k* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_secKeyData();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_secKeyData() const;

  constexpr void __set_secKeyData(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket* New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  /// @brief Method .ctor addr 0x11ce3c8 size 0xb4 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  static inline ::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket* New_ctor(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::Org::BouncyCastle::Bcpg::S2k* s2k,
                                                                                  ::ArrayW<uint8_t, ::Array<uint8_t>*> secKeyData);

  /// @brief Method .ctor addr 0x11d4c08 size 0x40 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::Org::BouncyCastle::Bcpg::S2k* s2k, ::ArrayW<uint8_t, ::Array<uint8_t>*> secKeyData);

  /// @brief Method get_EncAlgorithm addr 0x11d4c48 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag get_EncAlgorithm();

  /// @brief Method get_S2k addr 0x11d4c50 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Bcpg::S2k* get_S2k();

  /// @brief Method GetSecKeyData addr 0x11d4c58 size 0x8 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetSecKeyData();

  /// @brief Method get_Version addr 0x11d4c60 size 0x8 virtual false final false
  inline int32_t get_Version();

  /// @brief Method Encode addr 0x11d4c68 size 0x15c virtual true final false
  inline void Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream* bcpgOut);

  // Ctor Parameters [CppParam { name: "", ty: "SymmetricKeyEncSessionPacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SymmetricKeyEncSessionPacket(SymmetricKeyEncSessionPacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SymmetricKeyEncSessionPacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SymmetricKeyEncSessionPacket(SymmetricKeyEncSessionPacket const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SymmetricKeyEncSessionPacket();

public:
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
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket*, "Org.BouncyCastle.Bcpg", "SymmetricKeyEncSessionPacket");
