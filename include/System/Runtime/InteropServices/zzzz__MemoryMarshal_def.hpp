#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MemoryMarshal)
namespace System {
template <typename T> struct ArraySegment_1;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace System {
template <typename T> struct Span_1;
}
namespace System {
template <typename T> struct ReadOnlyMemory_1;
}
namespace System {
template <typename T> struct Memory_1;
}
// Forward declare root types
namespace System::Runtime::InteropServices {
class MemoryMarshal;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::InteropServices::MemoryMarshal);
// Type: System.Runtime.InteropServices::MemoryMarshal
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::InteropServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3305))
// CS Name: ::System.Runtime.InteropServices::MemoryMarshal*
class CORDL_TYPE MemoryMarshal : public ::System::Object {
public:
  // Declarations
  /// @brief Method AsBytes addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline ::System::Span_1<uint8_t> AsBytes(::System::Span_1<T> span);

  /// @brief Method AsBytes addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline ::System::ReadOnlySpan_1<uint8_t> AsBytes(::System::ReadOnlySpan_1<T> span);

  /// @brief Method AsMemory addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline ::System::Memory_1<T> AsMemory(::System::ReadOnlyMemory_1<T> memory);

  /// @brief Method GetReference addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline ByRef<T> GetReference(::System::Span_1<T> span);

  /// @brief Method GetReference addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline ByRef<T> GetReference(::System::ReadOnlySpan_1<T> span);

  /// @brief Method GetNonNullPinnableReference addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline ByRef<T> GetNonNullPinnableReference(::System::Span_1<T> span);

  /// @brief Method GetNonNullPinnableReference addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline ByRef<T> GetNonNullPinnableReference(::System::ReadOnlySpan_1<T> span);

  /// @brief Method CreateReadOnlySpan addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline ::System::ReadOnlySpan_1<T> CreateReadOnlySpan(ByRef<T> reference, int32_t length);

  /// @brief Method TryGetArray addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline bool TryGetArray(::System::ReadOnlyMemory_1<T> memory, ByRef<::System::ArraySegment_1<T>> segment);

  // Ctor Parameters [CppParam { name: "", ty: "MemoryMarshal", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MemoryMarshal(MemoryMarshal&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MemoryMarshal", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MemoryMarshal(MemoryMarshal const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MemoryMarshal();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::InteropServices::MemoryMarshal, 0x10>, "Size mismatch!");

} // namespace System::Runtime::InteropServices
NEED_NO_BOX(::System::Runtime::InteropServices::MemoryMarshal);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::MemoryMarshal*, "System.Runtime.InteropServices", "MemoryMarshal");
