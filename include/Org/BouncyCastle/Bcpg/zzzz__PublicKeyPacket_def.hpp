#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/PublicKeyPacket.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__ContainedPacket_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__PublicKeyAlgorithmTag_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PublicKeyPacket)
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgOutputStream;
}
namespace Org::BouncyCastle::Bcpg {
class IBcpgKey;
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
// Dependencies Org.BouncyCastle.Bcpg.ContainedPacket, Org.BouncyCastle.Bcpg.PublicKeyAlgorithmTag
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// CS Name: Org.BouncyCastle.Bcpg.PublicKeyPacket
class CORDL_TYPE PublicKeyPacket : public ::Org::BouncyCastle::Bcpg::ContainedPacket {
public:
  // Declarations
  __declspec(property(get = get_Algorithm)) ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag Algorithm;

  __declspec(property(get = get_Key)) ::Org::BouncyCastle::Bcpg::IBcpgKey* Key;

  __declspec(property(get = get_ValidDays)) int32_t ValidDays;

  __declspec(property(get = get_Version)) int32_t Version;

  /// @brief Field algorithm, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_algorithm, put = __cordl_internal_set_algorithm)) ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm;

  /// @brief Field key, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_key, put = __cordl_internal_set_key)) ::Org::BouncyCastle::Bcpg::IBcpgKey* key;

  /// @brief Field time, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_time, put = __cordl_internal_set_time)) int64_t time;

  /// @brief Field validDays, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_validDays, put = __cordl_internal_set_validDays)) int32_t validDays;

  /// @brief Field version, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version)) int32_t version;

  /// @brief Method Encode, addr 0x2645b54, size 0x38, virtual true, abstract: false, final false
  inline void Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream* bcpgOut);

  /// @brief Method GetEncodedContents, addr 0x26459f0, size 0x164, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncodedContents();

  /// @brief Method GetTime, addr 0x2645988, size 0x60, virtual true, abstract: false, final false
  inline ::System::DateTime GetTime();

  static inline ::Org::BouncyCastle::Bcpg::PublicKeyPacket* New_ctor(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm, ::System::DateTime time, ::Org::BouncyCastle::Bcpg::IBcpgKey* key);

  static inline ::Org::BouncyCastle::Bcpg::PublicKeyPacket* New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  constexpr ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag const& __cordl_internal_get_algorithm() const;

  constexpr ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag& __cordl_internal_get_algorithm();

  constexpr ::Org::BouncyCastle::Bcpg::IBcpgKey* const& __cordl_internal_get_key() const;

  constexpr ::Org::BouncyCastle::Bcpg::IBcpgKey*& __cordl_internal_get_key();

  constexpr int64_t const& __cordl_internal_get_time() const;

  constexpr int64_t& __cordl_internal_get_time();

  constexpr int32_t const& __cordl_internal_get_validDays() const;

  constexpr int32_t& __cordl_internal_get_validDays();

  constexpr int32_t const& __cordl_internal_get_version() const;

  constexpr int32_t& __cordl_internal_get_version();

  constexpr void __cordl_internal_set_algorithm(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag value);

  constexpr void __cordl_internal_set_key(::Org::BouncyCastle::Bcpg::IBcpgKey* value);

  constexpr void __cordl_internal_set_time(int64_t value);

  constexpr void __cordl_internal_set_validDays(int32_t value);

  constexpr void __cordl_internal_set_version(int32_t value);

  /// @brief Method .ctor, addr 0x26458bc, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm, ::System::DateTime time, ::Org::BouncyCastle::Bcpg::IBcpgKey* key);

  /// @brief Method .ctor, addr 0x2641c20, size 0x280, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  /// @brief Method get_Algorithm, addr 0x2645978, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag get_Algorithm();

  /// @brief Method get_Key, addr 0x26459e8, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::IBcpgKey* get_Key();

  /// @brief Method get_ValidDays, addr 0x2645980, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ValidDays();

  /// @brief Method get_Version, addr 0x2645970, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_Version();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PublicKeyPacket();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PublicKeyPacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PublicKeyPacket(PublicKeyPacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PublicKeyPacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PublicKeyPacket(PublicKeyPacket const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 582 };

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
static_assert(offsetof(::Org::BouncyCastle::Bcpg::PublicKeyPacket, ___version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::PublicKeyPacket, ___time) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::PublicKeyPacket, ___validDays) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::PublicKeyPacket, ___algorithm) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::PublicKeyPacket, ___key) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::PublicKeyPacket, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::PublicKeyPacket);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::PublicKeyPacket*, "Org.BouncyCastle.Bcpg", "PublicKeyPacket");
