#pragma once
// IWYU pragma private; include "System\Buffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Buffer)
namespace System {
class Array;
}
// Forward declare root types
namespace System {
class Buffer;
}
// Write type traits
MARK_REF_T(::System::Buffer*);
DEFINE_IL2CPP_CLASS(::System::Buffer*, "System", "Buffer");
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.Buffer
class CORDL_TYPE Buffer : public ::System::Object {
public:
  // Declarations
  /// @brief Method BlockCopy, addr 0x5c74e68, size 0x1a8, virtual false, abstract: false, final false
  static inline void BlockCopy(::System::Array* src, int32_t srcOffset, ::System::Array* dst, int32_t dstOffset, int32_t count);

  /// @brief Method ByteLength, addr 0x5c74dd4, size 0x94, virtual false, abstract: false, final false
  static inline int32_t ByteLength(::System::Array* array);

  /// @brief Method IndexOfByte, addr 0x5c74b50, size 0x124, virtual false, abstract: false, final false
  static inline int32_t IndexOfByte(uint8_t* src, uint8_t value, int32_t index, int32_t count);

  /// @brief Method InternalBlockCopy, addr 0x5c74b4c, size 0x4, virtual false, abstract: false, final false
  static inline bool InternalBlockCopy(::System::Array* src, int32_t srcOffsetBytes, ::System::Array* dst, int32_t dstOffsetBytes, int32_t byteCount);

  /// @brief Method InternalMemcpy, addr 0x5c74dcc, size 0x8, virtual false, abstract: false, final false
  static inline void InternalMemcpy(uint8_t* dest, uint8_t* src, int32_t count);

  /// @brief Method Memcpy, addr 0x5c74cd0, size 0xfc, virtual false, abstract: false, final false
  static inline void Memcpy(uint8_t* dest, uint8_t* src, int32_t len);

  /// @brief Method Memcpy, addr 0x5c74c9c, size 0x34, virtual false, abstract: false, final false
  static inline void Memcpy(uint8_t* pDest, int32_t destIndex, ::ArrayW<uint8_t> src, int32_t srcIndex, int32_t len);

  /// @brief Method Memmove, addr 0x5c7510c, size 0x28, virtual false, abstract: false, final false
  static inline void Memmove(uint8_t* dest, uint8_t* src, uint32_t len);

  /// @brief Method Memmove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void Memmove(::by_ref<T> destination, ::by_ref<T> source, uint64_t elementCount);

  /// @brief Method MemoryCopy, addr 0x5c75010, size 0xfc, virtual false, abstract: false, final false
  static inline void MemoryCopy(void* source, void* destination, int64_t destinationSizeInBytes, int64_t sourceBytesToCopy);

  /// @brief Method ZeroMemory, addr 0x5c74c78, size 0x24, virtual false, abstract: false, final false
  static inline void ZeroMemory(uint8_t* src, int64_t len);

  /// @brief Method _ByteLength, addr 0x5c74c74, size 0x4, virtual false, abstract: false, final false
  static inline int32_t _ByteLength(::System::Array* array);

  /// @brief Method memcpy1, addr 0x5c7524c, size 0xb4, virtual false, abstract: false, final false
  static inline void memcpy1(uint8_t* dest, uint8_t* src, int32_t size);

  /// @brief Method memcpy2, addr 0x5c751c8, size 0x84, virtual false, abstract: false, final false
  static inline void memcpy2(uint8_t* dest, uint8_t* src, int32_t size);

  /// @brief Method memcpy4, addr 0x5c75134, size 0x94, virtual false, abstract: false, final false
  static inline void memcpy4(uint8_t* dest, uint8_t* src, int32_t size);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Buffer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Buffer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Buffer(Buffer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Buffer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Buffer(Buffer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2558 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Buffer) == 0x10, "Size mismatch!");

} // namespace System
