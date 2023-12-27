#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__ContainedPacket_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__PublicKeyAlgorithmTag_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PublicKeyPacket)
namespace Org::BouncyCastle::Bcpg {
class IBcpgKey;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgOutputStream;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
namespace Org::BouncyCastle::Bcpg {
struct PublicKeyAlgorithmTag;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class PublicKeyPacket;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::PublicKeyPacket);
// Type: Org.BouncyCastle.Bcpg::PublicKeyPacket
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(560)), TypeDefinitionIndex(TypeDefinitionIndex(580))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(582))
// CS Name: ::Org.BouncyCastle.Bcpg::PublicKeyPacket*
class CORDL_TYPE PublicKeyPacket : public ::Org::BouncyCastle::Bcpg::ContainedPacket {
public:
  // Declarations
  /// @brief Field version, offset 0x10, size 0x4
  __declspec(property(get = __get_version, put = __set_version)) int32_t version;

  /// @brief Field time, offset 0x18, size 0x8
  __declspec(property(get = __get_time, put = __set_time)) int64_t time;

  /// @brief Field validDays, offset 0x20, size 0x4
  __declspec(property(get = __get_validDays, put = __set_validDays)) int32_t validDays;

  /// @brief Field algorithm, offset 0x24, size 0x4
  __declspec(property(get = __get_algorithm, put = __set_algorithm))::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm;

  /// @brief Field key, offset 0x28, size 0x8
  __declspec(property(get = __get_key, put = __set_key))::Org::BouncyCastle::Bcpg::IBcpgKey* key;

  __declspec(property(get = get_Version)) int32_t Version;

  __declspec(property(get = get_Algorithm))::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag Algorithm;

  __declspec(property(get = get_ValidDays)) int32_t ValidDays;

  __declspec(property(get = get_Key))::Org::BouncyCastle::Bcpg::IBcpgKey* Key;

  constexpr int32_t& __get_version();

  constexpr int32_t const& __get_version() const;

  constexpr void __set_version(int32_t value);

  constexpr int64_t& __get_time();

  constexpr int64_t const& __get_time() const;

  constexpr void __set_time(int64_t value);

  constexpr int32_t& __get_validDays();

  constexpr int32_t const& __get_validDays() const;

  constexpr void __set_validDays(int32_t value);

  constexpr ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag& __get_algorithm();

  constexpr ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag const& __get_algorithm() const;

  constexpr void __set_algorithm(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag value);

  constexpr ::Org::BouncyCastle::Bcpg::IBcpgKey*& __get_key();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::IBcpgKey*> const& __get_key() const;

  constexpr void __set_key(::Org::BouncyCastle::Bcpg::IBcpgKey* value);

  static inline ::Org::BouncyCastle::Bcpg::PublicKeyPacket* New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  /// @brief Method .ctor addr 0x11ce7f4 size 0x298 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  static inline ::Org::BouncyCastle::Bcpg::PublicKeyPacket* New_ctor(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm, ::System::DateTime time, ::Org::BouncyCastle::Bcpg::IBcpgKey* key);

  /// @brief Method .ctor addr 0x11d259c size 0xb4 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm, ::System::DateTime time, ::Org::BouncyCastle::Bcpg::IBcpgKey* key);

  /// @brief Method get_Version addr 0x11d2650 size 0x8 virtual true final false
  inline int32_t get_Version();

  /// @brief Method get_Algorithm addr 0x11d2658 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag get_Algorithm();

  /// @brief Method get_ValidDays addr 0x11d2660 size 0x8 virtual true final false
  inline int32_t get_ValidDays();

  /// @brief Method GetTime addr 0x11d2668 size 0x60 virtual true final false
  inline ::System::DateTime GetTime();

  /// @brief Method get_Key addr 0x11d26c8 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Bcpg::IBcpgKey* get_Key();

  /// @brief Method GetEncodedContents addr 0x11d26d0 size 0x15c virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncodedContents();

  /// @brief Method Encode addr 0x11d282c size 0x38 virtual true final false
  inline void Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream* bcpgOut);

  // Ctor Parameters [CppParam { name: "", ty: "PublicKeyPacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PublicKeyPacket(PublicKeyPacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PublicKeyPacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PublicKeyPacket(PublicKeyPacket const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PublicKeyPacket();

public:
  /// @brief Field version, offset: 0x10, size: 0x4, def value: None
  int32_t ___version;

  /// @brief Field time, offset: 0x18, size: 0x8, def value: None
  int64_t ___time;

  /// @brief Field validDays, offset: 0x20, size: 0x4, def value: None
  int32_t ___validDays;

  /// @brief Field algorithm, offset: 0x24, size: 0x4, def value: None
  ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag ___algorithm;

  /// @brief Field key, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Bcpg::IBcpgKey* ___key;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::PublicKeyPacket, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::PublicKeyPacket);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::PublicKeyPacket*, "Org.BouncyCastle.Bcpg", "PublicKeyPacket");
