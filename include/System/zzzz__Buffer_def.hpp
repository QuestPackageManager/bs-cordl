#pragma once
// IWYU pragma private; include "System/Buffer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
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
MARK_REF_PTR_T(::System::Buffer);
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.Buffer
class CORDL_TYPE Buffer : public ::System::Object {
public:
  // Declarations
  /// @brief Method BlockCopy, addr 0x5a5e5b0, size 0x1a8, virtual false, abstract: false, final false
  static inline void BlockCopy(::System::Array* src, int32_t srcOffset, ::System::Array* dst, int32_t dstOffset, int32_t count);

  /// @brief Method ByteLength, addr 0x5a5e51c, size 0x94, virtual false, abstract: false, final false
  static inline int32_t ByteLength(::System::Array* array);

  /// @brief Method IndexOfByte, addr 0x5a5e298, size 0x124, virtual false, abstract: false, final false
  static inline int32_t IndexOfByte(uint8_t* src, uint8_t value, int32_t index, int32_t count);

  /// @brief Method InternalBlockCopy, addr 0x5a5e294, size 0x4, virtual false, abstract: false, final false
  static inline bool InternalBlockCopy(::System::Array* src, int32_t srcOffsetBytes, ::System::Array* dst, int32_t dstOffsetBytes, int32_t byteCount);

  /// @brief Method InternalMemcpy, addr 0x5a5e514, size 0x8, virtual false, abstract: false, final false
  static inline void InternalMemcpy(uint8_t* dest, uint8_t* src, int32_t count);

  /// @brief Method Memcpy, addr 0x5a5e418, size 0xfc, virtual false, abstract: false, final false
  static inline void Memcpy(uint8_t* dest, uint8_t* src, int32_t len);

  /// @brief Method Memcpy, addr 0x5a5e3e4, size 0x34, virtual false, abstract: false, final false
  static inline void Memcpy(uint8_t* pDest, int32_t destIndex, ::ArrayW<uint8_t, ::Array<uint8_t>*> src, int32_t srcIndex, int32_t len);

  /// @brief Method Memmove, addr 0x5a5e854, size 0x28, virtual false, abstract: false, final false
  static inline void Memmove(uint8_t* dest, uint8_t* src, uint32_t len);

  /// @brief Method Memmove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void Memmove(::ByRef<T> destination, ::ByRef<T> source, uint64_t elementCount);

  /// @brief Method MemoryCopy, addr 0x5a5e758, size 0xfc, virtual false, abstract: false, final false
  static inline void MemoryCopy(void* source, void* destination, int64_t destinationSizeInBytes, int64_t sourceBytesToCopy);

  /// @brief Method ZeroMemory, addr 0x5a5e3c0, size 0x24, virtual false, abstract: false, final false
  static inline void ZeroMemory(uint8_t* src, int64_t len);

  /// @brief Method _ByteLength, addr 0x5a5e3bc, size 0x4, virtual false, abstract: false, final false
  static inline int32_t _ByteLength(::System::Array* array);

  /// @brief Method memcpy1, addr 0x5a5e994, size 0xb4, virtual false, abstract: false, final false
  static inline void memcpy1(uint8_t* dest, uint8_t* src, int32_t size);

  /// @brief Method memcpy2, addr 0x5a5e910, size 0x84, virtual false, abstract: false, final false
  static inline void memcpy2(uint8_t* dest, uint8_t* src, int32_t size);

  /// @brief Method memcpy4, addr 0x5a5e87c, size 0x94, virtual false, abstract: false, final false
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
static_assert(::cordl_internals::size_check_v<::System::Buffer, 0x10>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::Buffer);
DEFINE_IL2CPP_ARG_TYPE(::System::Buffer*, "System", "Buffer");
