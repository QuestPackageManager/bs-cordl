#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Unsafe)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
class Unsafe;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::CompilerServices::Unsafe);
// Type: System.Runtime.CompilerServices::Unsafe
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::CompilerServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3424))
// CS Name: ::System.Runtime.CompilerServices::Unsafe*
class CORDL_TYPE Unsafe : public ::System::Object {
public:
  // Declarations
  /// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline ByRef<T> Add(ByRef<T> source, int32_t elementOffset);

  /// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline ByRef<T> Add(ByRef<T> source, void* elementOffset);

  /// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline ::cordl_internals::Ptr<void> Add(::cordl_internals::Ptr<void> source, int32_t elementOffset);

  /// @brief Method AddByteOffset addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline ByRef<T> AddByteOffset(ByRef<T> source, void* byteOffset);

  /// @brief Method AreSame addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline bool AreSame(ByRef<T> left, ByRef<T> right);

  /// @brief Method As addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline T As(::System::Object* o);

  /// @brief Method As addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TFrom, typename TTo> static inline ByRef<TTo> As(ByRef<TFrom> source);

  /// @brief Method AsPointer addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline ::cordl_internals::Ptr<void> AsPointer(ByRef<T> value);

  /// @brief Method AsRef addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline ByRef<T> AsRef(::cordl_internals::Ptr<void> source);

  /// @brief Method AsRef addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline ByRef<T> AsRef(ByRef<T> source);

  /// @brief Method InitBlockUnaligned addr 0x24dee78 size 0x8 virtual false final false
  static inline void InitBlockUnaligned(ByRef<uint8_t> startAddress, uint8_t value, uint32_t byteCount);

  /// @brief Method Read addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline T Read(::cordl_internals::Ptr<void> source);

  /// @brief Method ReadUnaligned addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline T ReadUnaligned(ByRef<uint8_t> source);

  /// @brief Method SizeOf addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline int32_t SizeOf();

  /// @brief Method WriteUnaligned addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline void WriteUnaligned(ByRef<uint8_t> destination, T value);

  /// @brief Method IsAddressLessThan addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline bool IsAddressLessThan(ByRef<T> left, ByRef<T> right);

  /// @brief Method AddByteOffset addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline ByRef<T> AddByteOffset(ByRef<T> source, uint64_t byteOffset);

  // Ctor Parameters [CppParam { name: "", ty: "Unsafe", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Unsafe(Unsafe&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Unsafe", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Unsafe(Unsafe const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Unsafe();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::Unsafe, 0x10>, "Size mismatch!");

} // namespace System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::Unsafe);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::Unsafe*, "System.Runtime.CompilerServices", "Unsafe");
