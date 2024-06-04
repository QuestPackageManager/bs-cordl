#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/ByteQueue.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ByteQueue)
namespace System::IO {
class MemoryStream;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class ByteQueue;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::ByteQueue);
// Type: Org.BouncyCastle.Crypto.Tls::ByteQueue
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Tls::ByteQueue*
class CORDL_TYPE ByteQueue : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Available)) int32_t Available;

  /// @brief Field available, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_available, put = __cordl_internal_set_available)) int32_t available;

  /// @brief Field databuf, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_databuf, put = __cordl_internal_set_databuf))::ArrayW<uint8_t, ::Array<uint8_t>*> databuf;

  /// @brief Field readOnlyBuf, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_readOnlyBuf, put = __cordl_internal_set_readOnlyBuf)) bool readOnlyBuf;

  /// @brief Field skipped, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_skipped, put = __cordl_internal_set_skipped)) int32_t skipped;

  /// @brief Method AddData, addr 0x11c14ec, size 0x16c, virtual false, abstract: false, final false
  inline void AddData(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset, int32_t len);

  /// @brief Method CopyTo, addr 0x11c1660, size 0x1bc, virtual false, abstract: false, final false
  inline void CopyTo(::System::IO::Stream* output, int32_t length);

  static inline ::Org::BouncyCastle::Crypto::Tls::ByteQueue* New_ctor();

  static inline ::Org::BouncyCastle::Crypto::Tls::ByteQueue* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len);

  static inline ::Org::BouncyCastle::Crypto::Tls::ByteQueue* New_ctor(int32_t capacity);

  /// @brief Method NextTwoPow, addr 0x11c13dc, size 0x1c, virtual false, abstract: false, final false
  static inline int32_t NextTwoPow(int32_t i);

  /// @brief Method Read, addr 0x11c181c, size 0x25c, virtual false, abstract: false, final false
  inline void Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t offset, int32_t len, int32_t skip);

  /// @brief Method ReadFrom, addr 0x11c1a78, size 0x200, virtual false, abstract: false, final false
  inline ::System::IO::MemoryStream* ReadFrom(int32_t length);

  /// @brief Method RemoveData, addr 0x11c1e48, size 0x88, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> RemoveData(int32_t len, int32_t skip);

  /// @brief Method RemoveData, addr 0x11c1e1c, size 0x2c, virtual false, abstract: false, final false
  inline void RemoveData(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len, int32_t skip);

  /// @brief Method RemoveData, addr 0x11c1c78, size 0x1a4, virtual false, abstract: false, final false
  inline void RemoveData(int32_t i);

  /// @brief Method Shrink, addr 0x11c1ed0, size 0xe8, virtual false, abstract: false, final false
  inline void Shrink();

  constexpr int32_t const& __cordl_internal_get_available() const;

  constexpr int32_t& __cordl_internal_get_available();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_databuf() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_databuf();

  constexpr bool const& __cordl_internal_get_readOnlyBuf() const;

  constexpr bool& __cordl_internal_get_readOnlyBuf();

  constexpr int32_t const& __cordl_internal_get_skipped() const;

  constexpr int32_t& __cordl_internal_get_skipped();

  constexpr void __cordl_internal_set_available(int32_t value);

  constexpr void __cordl_internal_set_databuf(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_readOnlyBuf(bool value);

  constexpr void __cordl_internal_set_skipped(int32_t value);

  /// @brief Method .ctor, addr 0x11c13f8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x11c14a0, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len);

  /// @brief Method .ctor, addr 0x11c1400, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(int32_t capacity);

  /// @brief Method get_Available, addr 0x11c1658, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Available();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ByteQueue();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ByteQueue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ByteQueue(ByteQueue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ByteQueue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ByteQueue(ByteQueue const&) = delete;

  /// @brief Field databuf, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___databuf;

  /// @brief Field skipped, offset: 0x18, size: 0x4, def value: None
  int32_t ___skipped;

  /// @brief Field available, offset: 0x1c, size: 0x4, def value: None
  int32_t ___available;

  /// @brief Field readOnlyBuf, offset: 0x20, size: 0x1, def value: None
  bool ___readOnlyBuf;

  /// @brief Field DefaultCapacity offset 0xffffffff size 0x4
  static constexpr int32_t DefaultCapacity{ static_cast<int32_t>(0x400) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::ByteQueue, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::ByteQueue, ___databuf) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::ByteQueue, ___skipped) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::ByteQueue, ___available) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::ByteQueue, ___readOnlyBuf) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::ByteQueue);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::ByteQueue*, "Org.BouncyCastle.Crypto.Tls", "ByteQueue");
