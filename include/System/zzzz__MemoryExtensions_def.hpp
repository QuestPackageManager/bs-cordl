#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MemoryExtensions)
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace System {
template <typename T> struct Span_1;
}
namespace System {
struct StringComparison;
}
// Forward declare root types
namespace System {
class MemoryExtensions;
}
// Write type traits
MARK_REF_PTR_T(::System::MemoryExtensions);
// Type: System::MemoryExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2439))
// CS Name: ::System::MemoryExtensions*
class CORDL_TYPE MemoryExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method EqualsOrdinal, addr 0x25d2040, size 0x134, virtual false, abstract: false, final false
  static inline bool EqualsOrdinal(::System::ReadOnlySpan_1<char16_t> span, ::System::ReadOnlySpan_1<char16_t> value);

  /// @brief Method EqualsOrdinalIgnoreCase, addr 0x25d2174, size 0xac, virtual false, abstract: false, final false
  static inline bool EqualsOrdinalIgnoreCase(::System::ReadOnlySpan_1<char16_t> span, ::System::ReadOnlySpan_1<char16_t> value);

  /// @brief Method Contains, addr 0x25d2220, size 0x78, virtual false, abstract: false, final false
  static inline bool Contains(::System::ReadOnlySpan_1<char16_t> source, char16_t value);

  /// @brief Method ToUpperInvariant, addr 0x25d2298, size 0x158, virtual false, abstract: false, final false
  static inline int32_t ToUpperInvariant(::System::ReadOnlySpan_1<char16_t> source, ::System::Span_1<char16_t> destination);

  /// @brief Method EndsWith, addr 0x25d23f0, size 0x330, virtual false, abstract: false, final false
  static inline bool EndsWith(::System::ReadOnlySpan_1<char16_t> span, ::System::ReadOnlySpan_1<char16_t> value, ::System::StringComparison comparisonType);

  /// @brief Method AsSpan, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::System::Span_1<T> AsSpan(::ArrayW<T, ::Array<T>*> array, int32_t start);

  /// @brief Method AsSpan, addr 0x25d2720, size 0x58, virtual false, abstract: false, final false
  static inline ::System::ReadOnlySpan_1<char16_t> AsSpan(::StringW text);

  /// @brief Method AsSpan, addr 0x25d2778, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::ReadOnlySpan_1<char16_t> AsSpan(::StringW text, int32_t start);

  /// @brief Method AsSpan, addr 0x25d2804, size 0xa0, virtual false, abstract: false, final false
  static inline ::System::ReadOnlySpan_1<char16_t> AsSpan(::StringW text, int32_t start, int32_t length);

  /// @brief Method Trim, addr 0x25c9394, size 0x10, virtual false, abstract: false, final false
  static inline ::System::ReadOnlySpan_1<char16_t> Trim(::System::ReadOnlySpan_1<char16_t> span);

  /// @brief Method TrimStart, addr 0x25d28a4, size 0xf4, virtual false, abstract: false, final false
  static inline ::System::ReadOnlySpan_1<char16_t> TrimStart(::System::ReadOnlySpan_1<char16_t> span);

  /// @brief Method TrimEnd, addr 0x25d2998, size 0xf4, virtual false, abstract: false, final false
  static inline ::System::ReadOnlySpan_1<char16_t> TrimEnd(::System::ReadOnlySpan_1<char16_t> span);

  /// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t IndexOf(::System::ReadOnlySpan_1<T> span, T value);

  /// @brief Method IndexOfAny, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t IndexOfAny(::System::ReadOnlySpan_1<T> span, ::System::ReadOnlySpan_1<T> values);

  /// @brief Method SequenceEqual, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool SequenceEqual(::System::ReadOnlySpan_1<T> span, ::System::ReadOnlySpan_1<T> other);

  /// @brief Method StartsWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool StartsWith(::System::ReadOnlySpan_1<T> span, ::System::ReadOnlySpan_1<T> value);

  /// @brief Method EndsWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool EndsWith(::System::ReadOnlySpan_1<T> span, ::System::ReadOnlySpan_1<T> value);

  /// @brief Method AsSpan, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::System::Span_1<T> AsSpan(::ArrayW<T, ::Array<T>*> array, int32_t start, int32_t length);

  /// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void CopyTo(::ArrayW<T, ::Array<T>*> source, ::System::Span_1<T> destination);

  /// @brief Method IsTypeComparableAsBytes, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool IsTypeComparableAsBytes(ByRef<uint64_t> size);

  // Ctor Parameters [CppParam { name: "", ty: "MemoryExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MemoryExtensions(MemoryExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MemoryExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MemoryExtensions(MemoryExtensions const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MemoryExtensions();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::MemoryExtensions, 0x10>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::MemoryExtensions);
DEFINE_IL2CPP_ARG_TYPE(::System::MemoryExtensions*, "System", "MemoryExtensions");
