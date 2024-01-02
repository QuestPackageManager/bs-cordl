#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacketTag_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SignatureSubpacket)
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Bcpg {
struct SignatureSubpacketTag;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class SignatureSubpacket;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::SignatureSubpacket);
// Type: Org.BouncyCastle.Bcpg::SignatureSubpacket
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(591))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(531))
// CS Name: ::Org.BouncyCastle.Bcpg::SignatureSubpacket*
class CORDL_TYPE SignatureSubpacket : public ::System::Object {
public:
  // Declarations
  /// @brief Field type, offset 0x10, size 0x4
  __declspec(property(get = __get_type, put = __set_type))::Org::BouncyCastle::Bcpg::SignatureSubpacketTag type;

  /// @brief Field critical, offset 0x14, size 0x1
  __declspec(property(get = __get_critical, put = __set_critical)) bool critical;

  /// @brief Field isLongLength, offset 0x15, size 0x1
  __declspec(property(get = __get_isLongLength, put = __set_isLongLength)) bool isLongLength;

  /// @brief Field data, offset 0x18, size 0x8
  __declspec(property(get = __get_data, put = __set_data))::ArrayW<uint8_t, ::Array<uint8_t>*> data;

  __declspec(property(get = get_SubpacketType))::Org::BouncyCastle::Bcpg::SignatureSubpacketTag SubpacketType;

  constexpr ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag& __get_type();

  constexpr ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag const& __get_type() const;

  constexpr void __set_type(::Org::BouncyCastle::Bcpg::SignatureSubpacketTag value);

  constexpr bool& __get_critical();

  constexpr bool const& __get_critical() const;

  constexpr void __set_critical(bool value);

  constexpr bool& __get_isLongLength();

  constexpr bool const& __get_isLongLength() const;

  constexpr void __set_isLongLength(bool value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_data();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_data() const;

  constexpr void __set_data(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::Org::BouncyCastle::Bcpg::SignatureSubpacket* New_ctor(::Org::BouncyCastle::Bcpg::SignatureSubpacketTag type, bool critical, bool isLongLength,
                                                                        ::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method .ctor, addr 0x11c71fc, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::SignatureSubpacketTag type, bool critical, bool isLongLength, ::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method get_SubpacketType, addr 0x11c7244, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag get_SubpacketType();

  /// @brief Method IsCritical, addr 0x11c724c, size 0x8, virtual false, abstract: false, final false
  inline bool IsCritical();

  /// @brief Method IsLongLength, addr 0x11c7254, size 0x8, virtual false, abstract: false, final false
  inline bool IsLongLength();

  /// @brief Method GetData, addr 0x11c725c, size 0x78, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetData();

  /// @brief Method Encode, addr 0x11c72d4, size 0x144, virtual false, abstract: false, final false
  inline void Encode(::System::IO::Stream* os);

  // Ctor Parameters [CppParam { name: "", ty: "SignatureSubpacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SignatureSubpacket(SignatureSubpacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SignatureSubpacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SignatureSubpacket(SignatureSubpacket const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SignatureSubpacket();

public:
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
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::SignatureSubpacket, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::SignatureSubpacket, ___type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::SignatureSubpacket, ___critical) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::SignatureSubpacket, ___isLongLength) == 0x15, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::SignatureSubpacket, ___data) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Bcpg
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::SignatureSubpacket);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::SignatureSubpacket*, "Org.BouncyCastle.Bcpg", "SignatureSubpacket");
