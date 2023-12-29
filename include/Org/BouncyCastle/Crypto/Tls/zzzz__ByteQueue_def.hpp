#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ByteQueue)
namespace System::IO {
class Stream;
}
namespace System::IO {
class MemoryStream;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1183))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::ByteQueue*
class CORDL_TYPE ByteQueue : public ::System::Object {
public:
  // Declarations
  /// @brief Field databuf, offset 0x10, size 0x8
  __declspec(property(get = __get_databuf, put = __set_databuf))::ArrayW<uint8_t, ::Array<uint8_t>*> databuf;

  /// @brief Field skipped, offset 0x18, size 0x4
  __declspec(property(get = __get_skipped, put = __set_skipped)) int32_t skipped;

  /// @brief Field available, offset 0x1c, size 0x4
  __declspec(property(get = __get_available, put = __set_available)) int32_t available;

  /// @brief Field readOnlyBuf, offset 0x20, size 0x1
  __declspec(property(get = __get_readOnlyBuf, put = __set_readOnlyBuf)) bool readOnlyBuf;

  __declspec(property(get = get_Available)) int32_t Available;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_databuf();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_databuf() const;

  constexpr void __set_databuf(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __get_skipped();

  constexpr int32_t const& __get_skipped() const;

  constexpr void __set_skipped(int32_t value);

  constexpr int32_t& __get_available();

  constexpr int32_t const& __get_available() const;

  constexpr void __set_available(int32_t value);

  constexpr bool& __get_readOnlyBuf();

  constexpr bool const& __get_readOnlyBuf() const;

  constexpr void __set_readOnlyBuf(bool value);

  /// @brief Method NextTwoPow addr 0xee7150 size 0x1c virtual false final false
  static inline int32_t NextTwoPow(int32_t i);

  static inline ::Org::BouncyCastle::Crypto::Tls::ByteQueue* New_ctor();

  /// @brief Method .ctor addr 0xee716c size 0x8 virtual false final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Crypto::Tls::ByteQueue* New_ctor(int32_t capacity);

  /// @brief Method .ctor addr 0xee7174 size 0xa0 virtual false final false
  inline void _ctor(int32_t capacity);

  static inline ::Org::BouncyCastle::Crypto::Tls::ByteQueue* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len);

  /// @brief Method .ctor addr 0xee7214 size 0x4c virtual false final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len);

  /// @brief Method AddData addr 0xee7260 size 0x16c virtual false final false
  inline void AddData(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset, int32_t len);

  /// @brief Method get_Available addr 0xee73cc size 0x8 virtual false final false
  inline int32_t get_Available();

  /// @brief Method CopyTo addr 0xee73d4 size 0x1bc virtual false final false
  inline void CopyTo(::System::IO::Stream* output, int32_t length);

  /// @brief Method Read addr 0xee7590 size 0x25c virtual false final false
  inline void Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t offset, int32_t len, int32_t skip);

  /// @brief Method ReadFrom addr 0xee77ec size 0x200 virtual false final false
  inline ::System::IO::MemoryStream* ReadFrom(int32_t length);

  /// @brief Method RemoveData addr 0xee79ec size 0x1a4 virtual false final false
  inline void RemoveData(int32_t i);

  /// @brief Method RemoveData addr 0xee7b90 size 0x2c virtual false final false
  inline void RemoveData(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len, int32_t skip);

  /// @brief Method RemoveData addr 0xee7bbc size 0x88 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> RemoveData(int32_t len, int32_t skip);

  /// @brief Method Shrink addr 0xee7c44 size 0xe8 virtual false final false
  inline void Shrink();

  // Ctor Parameters [CppParam { name: "", ty: "ByteQueue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ByteQueue(ByteQueue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ByteQueue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ByteQueue(ByteQueue const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ByteQueue();

public:
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
