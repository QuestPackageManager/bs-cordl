#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/BcpgInputStream.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseInputStream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BcpgInputStream)
namespace Org::BouncyCastle::Bcpg {
struct PacketTag;
}
namespace Org::BouncyCastle::Bcpg {
class Packet;
}
namespace Org::BouncyCastle::Bcpg {
class __BcpgInputStream__PartialInputStream;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
namespace Org::BouncyCastle::Bcpg {
class __BcpgInputStream__PartialInputStream;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::BcpgInputStream);
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::__BcpgInputStream__PartialInputStream);
// Type: ::PartialInputStream
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// CS Name: ::BcpgInputStream::PartialInputStream*
class CORDL_TYPE __BcpgInputStream__PartialInputStream : public ::Org::BouncyCastle::Utilities::IO::BaseInputStream {
public:
  // Declarations
  /// @brief Field dataLength, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_dataLength, put = __cordl_internal_set_dataLength)) int32_t dataLength;

  /// @brief Field m_in, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_in, put = __cordl_internal_set_m_in))::Org::BouncyCastle::Bcpg::BcpgInputStream* m_in;

  /// @brief Field partial, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_partial, put = __cordl_internal_set_partial)) bool partial;

  static inline ::Org::BouncyCastle::Bcpg::__BcpgInputStream__PartialInputStream* New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn, bool partial, int32_t dataLength);

  /// @brief Method Read, addr 0x1442894, size 0xe0, virtual true, abstract: false, final false
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method ReadByte, addr 0x14426b8, size 0xac, virtual true, abstract: false, final false
  inline int32_t ReadByte();

  /// @brief Method ReadPartialDataLength, addr 0x1442764, size 0x130, virtual false, abstract: false, final false
  inline int32_t ReadPartialDataLength();

  constexpr int32_t const& __cordl_internal_get_dataLength() const;

  constexpr int32_t& __cordl_internal_get_dataLength();

  constexpr ::Org::BouncyCastle::Bcpg::BcpgInputStream*& __cordl_internal_get_m_in();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::BcpgInputStream*> const& __cordl_internal_get_m_in() const;

  constexpr bool const& __cordl_internal_get_partial() const;

  constexpr bool& __cordl_internal_get_partial();

  constexpr void __cordl_internal_set_dataLength(int32_t value);

  constexpr void __cordl_internal_set_m_in(::Org::BouncyCastle::Bcpg::BcpgInputStream* value);

  constexpr void __cordl_internal_set_partial(bool value);

  /// @brief Method .ctor, addr 0x14405f4, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn, bool partial, int32_t dataLength);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BcpgInputStream__PartialInputStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BcpgInputStream__PartialInputStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BcpgInputStream__PartialInputStream(__BcpgInputStream__PartialInputStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BcpgInputStream__PartialInputStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BcpgInputStream__PartialInputStream(__BcpgInputStream__PartialInputStream const&) = delete;

  /// @brief Field m_in, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Bcpg::BcpgInputStream* ___m_in;

  /// @brief Field partial, offset: 0x38, size: 0x1, def value: None
  bool ___partial;

  /// @brief Field dataLength, offset: 0x3c, size: 0x4, def value: None
  int32_t ___dataLength;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::__BcpgInputStream__PartialInputStream, 0x40>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::__BcpgInputStream__PartialInputStream, ___m_in) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::__BcpgInputStream__PartialInputStream, ___partial) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::__BcpgInputStream__PartialInputStream, ___dataLength) == 0x3c, "Offset mismatch!");

} // namespace Org::BouncyCastle::Bcpg
// Type: Org.BouncyCastle.Bcpg::BcpgInputStream
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Bcpg::BcpgInputStream*
class CORDL_TYPE BcpgInputStream : public ::Org::BouncyCastle::Utilities::IO::BaseInputStream {
public:
  // Declarations
  using PartialInputStream = ::Org::BouncyCastle::Bcpg::__BcpgInputStream__PartialInputStream;

  /// @brief Field m_in, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_in, put = __cordl_internal_set_m_in))::System::IO::Stream* m_in;

  /// @brief Field next, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_next, put = __cordl_internal_set_next)) bool next;

  /// @brief Field nextB, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_nextB, put = __cordl_internal_set_nextB)) int32_t nextB;

  /// @brief Method Close, addr 0x1442650, size 0x68, virtual true, abstract: false, final false
  inline void Close();

  static inline ::Org::BouncyCastle::Bcpg::BcpgInputStream* New_ctor(::System::IO::Stream* inputStream);

  /// @brief Method NextPacketTag, addr 0x143fe2c, size 0xe0, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::PacketTag NextPacketTag();

  /// @brief Method Read, addr 0x143fcf8, size 0xb4, virtual true, abstract: false, final false
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method ReadAll, addr 0x143fdac, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadAll();

  /// @brief Method ReadByte, addr 0x143fcb8, size 0x40, virtual true, abstract: false, final false
  inline int32_t ReadByte();

  /// @brief Method ReadFully, addr 0x143fe10, size 0x1c, virtual false, abstract: false, final false
  inline void ReadFully(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer);

  /// @brief Method ReadFully, addr 0x143fdb4, size 0x5c, virtual false, abstract: false, final false
  inline void ReadFully(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t off, int32_t len);

  /// @brief Method ReadPacket, addr 0x143ff0c, size 0x6e8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::Packet* ReadPacket();

  /// @brief Method Wrap, addr 0x143fbf4, size 0x98, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Bcpg::BcpgInputStream* Wrap(::System::IO::Stream* inStr);

  constexpr ::System::IO::Stream*& __cordl_internal_get_m_in();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& __cordl_internal_get_m_in() const;

  constexpr bool const& __cordl_internal_get_next() const;

  constexpr bool& __cordl_internal_get_next();

  constexpr int32_t const& __cordl_internal_get_nextB() const;

  constexpr int32_t& __cordl_internal_get_nextB();

  constexpr void __cordl_internal_set_m_in(::System::IO::Stream* value);

  constexpr void __cordl_internal_set_next(bool value);

  constexpr void __cordl_internal_set_nextB(int32_t value);

  /// @brief Method .ctor, addr 0x143fc8c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* inputStream);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BcpgInputStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BcpgInputStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BcpgInputStream(BcpgInputStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BcpgInputStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BcpgInputStream(BcpgInputStream const&) = delete;

  /// @brief Field m_in, offset: 0x30, size: 0x8, def value: None
  ::System::IO::Stream* ___m_in;

  /// @brief Field next, offset: 0x38, size: 0x1, def value: None
  bool ___next;

  /// @brief Field nextB, offset: 0x3c, size: 0x4, def value: None
  int32_t ___nextB;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::BcpgInputStream, 0x40>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::BcpgInputStream, ___m_in) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::BcpgInputStream, ___next) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::BcpgInputStream, ___nextB) == 0x3c, "Offset mismatch!");

} // namespace Org::BouncyCastle::Bcpg
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::BcpgInputStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::BcpgInputStream*, "Org.BouncyCastle.Bcpg", "BcpgInputStream");
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::__BcpgInputStream__PartialInputStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::__BcpgInputStream__PartialInputStream*, "Org.BouncyCastle.Bcpg", "BcpgInputStream/PartialInputStream");
