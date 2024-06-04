#pragma once
// IWYU pragma private; include "Unity/Burst/Unsafe.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Unsafe)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Unity::Burst {
class Unsafe;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Burst::Unsafe);
// Type: Unity.Burst::Unsafe
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Burst {
// Is value type: false
// CS Name: ::Unity.Burst::Unsafe*
class CORDL_TYPE Unsafe : public ::System::Object {
public:
  // Declarations
  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::cordl_internals::Ptr<void> Add(::cordl_internals::Ptr<void> source, int32_t elementOffset);

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ByRef<T> Add(ByRef<T> source, ::System::IntPtr elementOffset);

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ByRef<T> Add(ByRef<T> source, int32_t elementOffset);

  /// @brief Method AddByteOffset, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ByRef<T> AddByteOffset(ByRef<T> source, ::System::IntPtr byteOffset);

  /// @brief Method AreSame, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool AreSame(ByRef<T> left, ByRef<T> right);

  /// @brief Method As, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TFrom, typename TTo> static inline ByRef<TTo> As(ByRef<TFrom> source);

  /// @brief Method As, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T As(::System::Object* o);

  /// @brief Method AsPointer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::cordl_internals::Ptr<void> AsPointer(ByRef<T> value);

  /// @brief Method AsRef, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ByRef<T> AsRef(::cordl_internals::Ptr<void> source);

  /// @brief Method AsRef, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ByRef<T> AsRef(ByRef<T> source);

  /// @brief Method ByteOffset, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::System::IntPtr ByteOffset(ByRef<T> origin, ByRef<T> target);

  /// @brief Method Copy, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void Copy(::cordl_internals::Ptr<void> destination, ByRef<T> source);

  /// @brief Method Copy, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void Copy(ByRef<T> destination, ::cordl_internals::Ptr<void> source);

  /// @brief Method CopyBlock, addr 0x30aebd8, size 0x8, virtual false, abstract: false, final false
  static inline void CopyBlock(::cordl_internals::Ptr<void> destination, ::cordl_internals::Ptr<void> source, uint32_t byteCount);

  /// @brief Method CopyBlock, addr 0x30aebe0, size 0x8, virtual false, abstract: false, final false
  static inline void CopyBlock(ByRef<uint8_t> destination, ByRef<uint8_t> source, uint32_t byteCount);

  /// @brief Method CopyBlockUnaligned, addr 0x30aebe8, size 0x8, virtual false, abstract: false, final false
  static inline void CopyBlockUnaligned(::cordl_internals::Ptr<void> destination, ::cordl_internals::Ptr<void> source, uint32_t byteCount);

  /// @brief Method CopyBlockUnaligned, addr 0x30aebf0, size 0x8, virtual false, abstract: false, final false
  static inline void CopyBlockUnaligned(ByRef<uint8_t> destination, ByRef<uint8_t> source, uint32_t byteCount);

  /// @brief Method InitBlock, addr 0x30aebf8, size 0x8, virtual false, abstract: false, final false
  static inline void InitBlock(::cordl_internals::Ptr<void> startAddress, uint8_t value, uint32_t byteCount);

  /// @brief Method InitBlock, addr 0x30aec00, size 0x8, virtual false, abstract: false, final false
  static inline void InitBlock(ByRef<uint8_t> startAddress, uint8_t value, uint32_t byteCount);

  /// @brief Method InitBlockUnaligned, addr 0x30aec08, size 0x8, virtual false, abstract: false, final false
  static inline void InitBlockUnaligned(::cordl_internals::Ptr<void> startAddress, uint8_t value, uint32_t byteCount);

  /// @brief Method InitBlockUnaligned, addr 0x30aec10, size 0x8, virtual false, abstract: false, final false
  static inline void InitBlockUnaligned(ByRef<uint8_t> startAddress, uint8_t value, uint32_t byteCount);

  /// @brief Method IsAddressGreaterThan, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool IsAddressGreaterThan(ByRef<T> left, ByRef<T> right);

  /// @brief Method IsAddressLessThan, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool IsAddressLessThan(ByRef<T> left, ByRef<T> right);

  /// @brief Method Read, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T Read(::cordl_internals::Ptr<void> source);

  /// @brief Method ReadUnaligned, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T ReadUnaligned(::cordl_internals::Ptr<void> source);

  /// @brief Method ReadUnaligned, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T ReadUnaligned(ByRef<uint8_t> source);

  /// @brief Method SizeOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t SizeOf();

  /// @brief Method Subtract, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::cordl_internals::Ptr<void> Subtract(::cordl_internals::Ptr<void> source, int32_t elementOffset);

  /// @brief Method Subtract, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ByRef<T> Subtract(ByRef<T> source, ::System::IntPtr elementOffset);

  /// @brief Method Subtract, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ByRef<T> Subtract(ByRef<T> source, int32_t elementOffset);

  /// @brief Method SubtractByteOffset, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ByRef<T> SubtractByteOffset(ByRef<T> source, ::System::IntPtr byteOffset);

  /// @brief Method Unbox, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ByRef<T> Unbox(::System::Object* box);

  /// @brief Method Write, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void Write(::cordl_internals::Ptr<void> destination, T value);

  /// @brief Method WriteUnaligned, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void WriteUnaligned(::cordl_internals::Ptr<void> destination, T value);

  /// @brief Method WriteUnaligned, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void WriteUnaligned(ByRef<uint8_t> destination, T value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Unsafe();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Unsafe", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Unsafe(Unsafe&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Unsafe", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Unsafe(Unsafe const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::Unsafe, 0x10>, "Size mismatch!");

} // namespace Unity::Burst
NEED_NO_BOX(::Unity::Burst::Unsafe);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::Unsafe*, "Unity.Burst", "Unsafe");
