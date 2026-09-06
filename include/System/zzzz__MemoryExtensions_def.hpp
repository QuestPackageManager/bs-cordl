#pragma once
// IWYU pragma private; include "System/MemoryExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
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
MARK_REF_T(::System::MemoryExtensions*);
DEFINE_IL2CPP_CLASS(::System::MemoryExtensions*, "System", "MemoryExtensions");
// [Extension]
// Dependencies System.IEquatable`1<T>, System.Object
namespace System {
// Is value type: false
// CS Name: System.MemoryExtensions
class CORDL_TYPE MemoryExtensions : public ::System::Object {
public:
  // Declarations
  /// [Extension]
  /// @brief Method AsSpan, addr 0x5c4abf8, size 0x58, virtual false, abstract: false, final false
  static inline ::System::ReadOnlySpan_1<char16_t> AsSpan(::StringW text);

  /// [Extension]
  /// @brief Method AsSpan, addr 0x5c4ac50, size 0x80, virtual false, abstract: false, final false
  static inline ::System::ReadOnlySpan_1<char16_t> AsSpan(::StringW text, int32_t start);

  /// [Extension]
  /// @brief Method AsSpan, addr 0x5c4acd0, size 0x94, virtual false, abstract: false, final false
  static inline ::System::ReadOnlySpan_1<char16_t> AsSpan(::StringW text, int32_t start, int32_t length);

  /// [Extension]
  /// @brief Method AsSpan, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::System::Span_1<T> AsSpan(::ArrayW<T> array);

  /// [Extension]
  /// @brief Method AsSpan, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::System::Span_1<T> AsSpan(::ArrayW<T> array, int32_t start);

  /// [Extension]
  /// @brief Method AsSpan, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::System::Span_1<T> AsSpan(::ArrayW<T> array, int32_t start, int32_t length);

  /// [Extension]
  /// @brief Method Contains, addr 0x5c4a6ac, size 0xa4, virtual false, abstract: false, final false
  static inline bool Contains(::System::ReadOnlySpan_1<char16_t> source, char16_t value);

  /// [Extension]
  /// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void CopyTo(::ArrayW<T> source, ::System::Span_1<T> destination);

  /// [Extension]
  /// @brief Method EndsWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::System::IEquatable_1<T>*>)
  static inline bool EndsWith(::System::ReadOnlySpan_1<T> span, ::System::ReadOnlySpan_1<T> value);

  /// [Extension]
  /// @brief Method EndsWith, addr 0x5c4a8e8, size 0x310, virtual false, abstract: false, final false
  static inline bool EndsWith(::System::ReadOnlySpan_1<char16_t> span, ::System::ReadOnlySpan_1<char16_t> value, ::System::StringComparison comparisonType);

  /// [Extension]
  /// @brief Method EqualsOrdinal, addr 0x5c4a4f4, size 0xf8, virtual false, abstract: false, final false
  static inline bool EqualsOrdinal(::System::ReadOnlySpan_1<char16_t> span, ::System::ReadOnlySpan_1<char16_t> value);

  /// [Extension]
  /// @brief Method EqualsOrdinalIgnoreCase, addr 0x5c4a5ec, size 0xc0, virtual false, abstract: false, final false
  static inline bool EqualsOrdinalIgnoreCase(::System::ReadOnlySpan_1<char16_t> span, ::System::ReadOnlySpan_1<char16_t> value);

  /// [Extension]
  /// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::System::IEquatable_1<T>*>)
  static inline int32_t IndexOf(::System::ReadOnlySpan_1<T> span, T value);

  /// [Extension]
  /// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::System::IEquatable_1<T>*>)
  static inline int32_t IndexOf(::System::Span_1<T> span, ::System::ReadOnlySpan_1<T> value);

  /// [Extension]
  /// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::System::IEquatable_1<T>*>)
  static inline int32_t IndexOf(::System::Span_1<T> span, T value);

  /// [Extension]
  /// @brief Method IndexOfAny, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::System::IEquatable_1<T>*>)
  static inline int32_t IndexOfAny(::System::ReadOnlySpan_1<T> span, ::System::ReadOnlySpan_1<T> values);

  /// @brief Method IsTypeComparableAsBytes, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool IsTypeComparableAsBytes(::by_ref<uint64_t> size);

  /// [Extension]
  /// @brief Method SequenceEqual, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::System::IEquatable_1<T>*>)
  static inline bool SequenceEqual(::System::ReadOnlySpan_1<T> span, ::System::ReadOnlySpan_1<T> other);

  /// [Extension]
  /// @brief Method StartsWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::System::IEquatable_1<T>*>)
  static inline bool StartsWith(::System::ReadOnlySpan_1<T> span, ::System::ReadOnlySpan_1<T> value);

  /// [Extension]
  /// @brief Method ToUpperInvariant, addr 0x5c4a750, size 0x198, virtual false, abstract: false, final false
  static inline int32_t ToUpperInvariant(::System::ReadOnlySpan_1<char16_t> source, ::System::Span_1<char16_t> destination);

  /// [Extension]
  /// @brief Method Trim, addr 0x5c41394, size 0x10, virtual false, abstract: false, final false
  static inline ::System::ReadOnlySpan_1<char16_t> Trim(::System::ReadOnlySpan_1<char16_t> span);

  /// [Extension]
  /// @brief Method TrimEnd, addr 0x5c4ae54, size 0x104, virtual false, abstract: false, final false
  static inline ::System::ReadOnlySpan_1<char16_t> TrimEnd(::System::ReadOnlySpan_1<char16_t> span);

  /// [Extension]
  /// @brief Method TrimStart, addr 0x5c4ad64, size 0xf0, virtual false, abstract: false, final false
  static inline ::System::ReadOnlySpan_1<char16_t> TrimStart(::System::ReadOnlySpan_1<char16_t> span);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MemoryExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MemoryExtensions", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MemoryExtensions(MemoryExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MemoryExtensions", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MemoryExtensions(MemoryExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2443 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::MemoryExtensions) == 0x10, "Size mismatch!");

} // namespace System
