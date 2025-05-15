#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/BcpgInputStream.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseInputStream_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BcpgInputStream)
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream_PartialInputStream;
}
namespace Org::BouncyCastle::Bcpg {
struct PacketTag;
}
namespace Org::BouncyCastle::Bcpg {
class Packet;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream_PartialInputStream;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::BcpgInputStream);
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream);
// Dependencies Org.BouncyCastle.Utilities.IO.BaseInputStream
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// CS Name: Org.BouncyCastle.Bcpg.BcpgInputStream/PartialInputStream
class CORDL_TYPE BcpgInputStream_PartialInputStream : public ::Org::BouncyCastle::Utilities::IO::BaseInputStream {
public:
  // Declarations
  /// @brief Field dataLength, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_dataLength, put = __cordl_internal_set_dataLength)) int32_t dataLength;

  /// @brief Field m_in, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_in, put = __cordl_internal_set_m_in)) ::Org::BouncyCastle::Bcpg::BcpgInputStream* m_in;

  /// @brief Field partial, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_partial, put = __cordl_internal_set_partial)) bool partial;

  static inline ::Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream* New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn, bool partial, int32_t dataLength);

  /// @brief Method Read, addr 0x26463e0, size 0xdc, virtual true, abstract: false, final false
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method ReadByte, addr 0x2646208, size 0xa8, virtual true, abstract: false, final false
  inline int32_t ReadByte();

  /// @brief Method ReadPartialDataLength, addr 0x26462b0, size 0x130, virtual false, abstract: false, final false
  inline int32_t ReadPartialDataLength();

  constexpr int32_t const& __cordl_internal_get_dataLength() const;

  constexpr int32_t& __cordl_internal_get_dataLength();

  constexpr ::Org::BouncyCastle::Bcpg::BcpgInputStream* const& __cordl_internal_get_m_in() const;

  constexpr ::Org::BouncyCastle::Bcpg::BcpgInputStream*& __cordl_internal_get_m_in();

  constexpr bool const& __cordl_internal_get_partial() const;

  constexpr bool& __cordl_internal_get_partial();

  constexpr void __cordl_internal_set_dataLength(int32_t value);

  constexpr void __cordl_internal_set_m_in(::Org::BouncyCastle::Bcpg::BcpgInputStream* value);

  constexpr void __cordl_internal_set_partial(bool value);

  /// @brief Method .ctor, addr 0x26441cc, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn, bool partial, int32_t dataLength);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BcpgInputStream_PartialInputStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BcpgInputStream_PartialInputStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BcpgInputStream_PartialInputStream(BcpgInputStream_PartialInputStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BcpgInputStream_PartialInputStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BcpgInputStream_PartialInputStream(BcpgInputStream_PartialInputStream const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 552 };

  /// @brief Field m_in, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Bcpg::BcpgInputStream* ___m_in;

  /// @brief Field partial, offset: 0x38, size: 0x1, def value: None
  bool ___partial;

  /// @brief Field dataLength, offset: 0x3c, size: 0x4, def value: None
  int32_t ___dataLength;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream, ___m_in) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream, ___partial) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream, ___dataLength) == 0x3c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream, 0x40>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg
// Dependencies Org.BouncyCastle.Utilities.IO.BaseInputStream
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// CS Name: Org.BouncyCastle.Bcpg.BcpgInputStream
class CORDL_TYPE BcpgInputStream : public ::Org::BouncyCastle::Utilities::IO::BaseInputStream {
public:
  // Declarations
  using PartialInputStream = ::Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream;

  /// @brief Field m_in, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_in, put = __cordl_internal_set_m_in)) ::System::IO::Stream* m_in;

  /// @brief Field next, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_next, put = __cordl_internal_set_next)) bool next;

  /// @brief Field nextB, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_nextB, put = __cordl_internal_set_nextB)) int32_t nextB;

  /// @brief Method Close, addr 0x26461a0, size 0x68, virtual true, abstract: false, final false
  inline void Close();

  static inline ::Org::BouncyCastle::Bcpg::BcpgInputStream* New_ctor(::System::IO::Stream* inputStream);

  /// @brief Method NextPacketTag, addr 0x2643a54, size 0xe0, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::PacketTag NextPacketTag();

  /// @brief Method Read, addr 0x264392c, size 0xb0, virtual true, abstract: false, final false
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method ReadAll, addr 0x26439dc, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadAll();

  /// @brief Method ReadByte, addr 0x26438ec, size 0x40, virtual true, abstract: false, final false
  inline int32_t ReadByte();

  /// @brief Method ReadFully, addr 0x2643a38, size 0x1c, virtual false, abstract: false, final false
  inline void ReadFully(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer);

  /// @brief Method ReadFully, addr 0x26439e4, size 0x54, virtual false, abstract: false, final false
  inline void ReadFully(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t off, int32_t len);

  /// @brief Method ReadPacket, addr 0x2643b34, size 0x698, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::Packet* ReadPacket();

  /// @brief Method Wrap, addr 0x264382c, size 0x94, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Bcpg::BcpgInputStream* Wrap(::System::IO::Stream* inStr);

  constexpr ::System::IO::Stream* const& __cordl_internal_get_m_in() const;

  constexpr ::System::IO::Stream*& __cordl_internal_get_m_in();

  constexpr bool const& __cordl_internal_get_next() const;

  constexpr bool& __cordl_internal_get_next();

  constexpr int32_t const& __cordl_internal_get_nextB() const;

  constexpr int32_t& __cordl_internal_get_nextB();

  constexpr void __cordl_internal_set_m_in(::System::IO::Stream* value);

  constexpr void __cordl_internal_set_next(bool value);

  constexpr void __cordl_internal_set_nextB(int32_t value);

  /// @brief Method .ctor, addr 0x26438c0, size 0x2c, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 553 };

  /// @brief Field m_in, offset: 0x30, size: 0x8, def value: None
  ::System::IO::Stream* ___m_in;

  /// @brief Field next, offset: 0x38, size: 0x1, def value: None
  bool ___next;

  /// @brief Field nextB, offset: 0x3c, size: 0x4, def value: None
  int32_t ___nextB;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Bcpg::BcpgInputStream, ___m_in) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::BcpgInputStream, ___next) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::BcpgInputStream, ___nextB) == 0x3c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::BcpgInputStream, 0x40>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::BcpgInputStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::BcpgInputStream*, "Org.BouncyCastle.Bcpg", "BcpgInputStream");
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream*, "Org.BouncyCastle.Bcpg", "BcpgInputStream/PartialInputStream");
