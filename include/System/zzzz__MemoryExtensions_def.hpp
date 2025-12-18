#pragma once
// IWYU pragma private; include "System/MemoryExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
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
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.MemoryExtensions
class CORDL_TYPE MemoryExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method AsSpan, addr 0x5a9ac8c, size 0x58, virtual false, abstract: false, final false
  static inline ::System::ReadOnlySpan_1<char16_t> AsSpan(::StringW text);

  /// @brief Method AsSpan, addr 0x5a9ace4, size 0x80, virtual false, abstract: false, final false
  static inline ::System::ReadOnlySpan_1<char16_t> AsSpan(::StringW text, int32_t start);

  /// @brief Method AsSpan, addr 0x5a9ad64, size 0x94, virtual false, abstract: false, final false
  static inline ::System::ReadOnlySpan_1<char16_t> AsSpan(::StringW text, int32_t start, int32_t length);

  /// @brief Method AsSpan, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::System::Span_1<T> AsSpan(::ArrayW<T, ::Array<T>*> array);

  /// @brief Method AsSpan, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::System::Span_1<T> AsSpan(::ArrayW<T, ::Array<T>*> array, int32_t start);

  /// @brief Method AsSpan, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::System::Span_1<T> AsSpan(::ArrayW<T, ::Array<T>*> array, int32_t start, int32_t length);

  /// @brief Method Contains, addr 0x5a9a740, size 0xa4, virtual false, abstract: false, final false
  static inline bool Contains(::System::ReadOnlySpan_1<char16_t> source, char16_t value);

  /// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void CopyTo(::ArrayW<T, ::Array<T>*> source, ::System::Span_1<T> destination);

  /// @brief Method EndsWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool EndsWith(::System::ReadOnlySpan_1<T> span, ::System::ReadOnlySpan_1<T> value);

  /// @brief Method EndsWith, addr 0x5a9a97c, size 0x310, virtual false, abstract: false, final false
  static inline bool EndsWith(::System::ReadOnlySpan_1<char16_t> span, ::System::ReadOnlySpan_1<char16_t> value, ::System::StringComparison comparisonType);

  /// @brief Method EqualsOrdinal, addr 0x5a9a588, size 0xf8, virtual false, abstract: false, final false
  static inline bool EqualsOrdinal(::System::ReadOnlySpan_1<char16_t> span, ::System::ReadOnlySpan_1<char16_t> value);

  /// @brief Method EqualsOrdinalIgnoreCase, addr 0x5a9a680, size 0xc0, virtual false, abstract: false, final false
  static inline bool EqualsOrdinalIgnoreCase(::System::ReadOnlySpan_1<char16_t> span, ::System::ReadOnlySpan_1<char16_t> value);

  /// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t IndexOf(::System::ReadOnlySpan_1<T> span, T value);

  /// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t IndexOf(::System::Span_1<T> span, ::System::ReadOnlySpan_1<T> value);

  /// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t IndexOf(::System::Span_1<T> span, T value);

  /// @brief Method IndexOfAny, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t IndexOfAny(::System::ReadOnlySpan_1<T> span, ::System::ReadOnlySpan_1<T> values);

  /// @brief Method IsTypeComparableAsBytes, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool IsTypeComparableAsBytes(::ByRef<uint64_t> size);

  /// @brief Method SequenceEqual, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool SequenceEqual(::System::ReadOnlySpan_1<T> span, ::System::ReadOnlySpan_1<T> other);

  /// @brief Method StartsWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool StartsWith(::System::ReadOnlySpan_1<T> span, ::System::ReadOnlySpan_1<T> value);

  /// @brief Method ToUpperInvariant, addr 0x5a9a7e4, size 0x198, virtual false, abstract: false, final false
  static inline int32_t ToUpperInvariant(::System::ReadOnlySpan_1<char16_t> source, ::System::Span_1<char16_t> destination);

  /// @brief Method Trim, addr 0x5a91428, size 0x10, virtual false, abstract: false, final false
  static inline ::System::ReadOnlySpan_1<char16_t> Trim(::System::ReadOnlySpan_1<char16_t> span);

  /// @brief Method TrimEnd, addr 0x5a9aee8, size 0x104, virtual false, abstract: false, final false
  static inline ::System::ReadOnlySpan_1<char16_t> TrimEnd(::System::ReadOnlySpan_1<char16_t> span);

  /// @brief Method TrimStart, addr 0x5a9adf8, size 0xf0, virtual false, abstract: false, final false
  static inline ::System::ReadOnlySpan_1<char16_t> TrimStart(::System::ReadOnlySpan_1<char16_t> span);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MemoryExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MemoryExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MemoryExtensions(MemoryExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MemoryExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MemoryExtensions(MemoryExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2443 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::MemoryExtensions, 0x10>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::MemoryExtensions);
DEFINE_IL2CPP_ARG_TYPE(::System::MemoryExtensions*, "System", "MemoryExtensions");
