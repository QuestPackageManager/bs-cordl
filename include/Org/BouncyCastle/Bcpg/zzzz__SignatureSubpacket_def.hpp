#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/SignatureSubpacket.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacketTag_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SignatureSubpacket)
namespace Org::BouncyCastle::Bcpg {
struct SignatureSubpacketTag;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class SignatureSubpacket;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::SignatureSubpacket);
// Dependencies Org.BouncyCastle.Bcpg.SignatureSubpacketTag, System.Object
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// CS Name: Org.BouncyCastle.Bcpg.SignatureSubpacket
class CORDL_TYPE SignatureSubpacket : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_SubpacketType)) ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag SubpacketType;

  /// @brief Field critical, offset 0x14, size 0x1
  __declspec(property(get = __cordl_internal_get_critical, put = __cordl_internal_set_critical)) bool critical;

  /// @brief Field data, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data)) ::ArrayW<uint8_t, ::Array<uint8_t>*> data;

  /// @brief Field isLongLength, offset 0x15, size 0x1
  __declspec(property(get = __cordl_internal_get_isLongLength, put = __cordl_internal_set_isLongLength)) bool isLongLength;

  /// @brief Field type, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type)) ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag type;

  /// @brief Method Encode, addr 0x263e938, size 0x144, virtual false, abstract: false, final false
  inline void Encode(::System::IO::Stream* os);

  /// @brief Method GetData, addr 0x263e8c0, size 0x78, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetData();

  /// @brief Method IsCritical, addr 0x263e8b0, size 0x8, virtual false, abstract: false, final false
  inline bool IsCritical();

  /// @brief Method IsLongLength, addr 0x263e8b8, size 0x8, virtual false, abstract: false, final false
  inline bool IsLongLength();

  static inline ::Org::BouncyCastle::Bcpg::SignatureSubpacket* New_ctor(::Org::BouncyCastle::Bcpg::SignatureSubpacketTag type, bool critical, bool isLongLength,
                                                                        ::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  constexpr bool const& __cordl_internal_get_critical() const;

  constexpr bool& __cordl_internal_get_critical();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_data() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_data();

  constexpr bool const& __cordl_internal_get_isLongLength() const;

  constexpr bool& __cordl_internal_get_isLongLength();

  constexpr ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag const& __cordl_internal_get_type() const;

  constexpr ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag& __cordl_internal_get_type();

  constexpr void __cordl_internal_set_critical(bool value);

  constexpr void __cordl_internal_set_data(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_isLongLength(bool value);

  constexpr void __cordl_internal_set_type(::Org::BouncyCastle::Bcpg::SignatureSubpacketTag value);

  /// @brief Method .ctor, addr 0x263e860, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::SignatureSubpacketTag type, bool critical, bool isLongLength, ::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method get_SubpacketType, addr 0x263e8a8, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag get_SubpacketType();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SignatureSubpacket();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SignatureSubpacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SignatureSubpacket(SignatureSubpacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SignatureSubpacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SignatureSubpacket(SignatureSubpacket const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 531 };

  /// @brief Field type, offset: 0x10, size: 0x4, def value: None
  ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag ___type;

  /// @brief Field critical, offset: 0x14, size: 0x1, def value: None
  bool ___critical;

  /// @brief Field isLongLength, offset: 0x15, size: 0x1, def value: None
  bool ___isLongLength;

  /// @brief Field data, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Bcpg::SignatureSubpacket, ___type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::SignatureSubpacket, ___critical) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::SignatureSubpacket, ___isLongLength) == 0x15, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::SignatureSubpacket, ___data) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::SignatureSubpacket, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::SignatureSubpacket);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::SignatureSubpacket*, "Org.BouncyCastle.Bcpg", "SignatureSubpacket");
