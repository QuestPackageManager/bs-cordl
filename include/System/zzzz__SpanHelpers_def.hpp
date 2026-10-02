#pragma once
// IWYU pragma private; include "System/SpanHelpers.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SpanHelpers)
namespace System::Globalization {
class CompareInfo;
}
namespace System::Numerics {
template <typename T> struct Vector_1;
}
namespace System {
struct IntPtr;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
// Forward declare root types
namespace System {
class SpanHelpers;
}
// Write type traits
MARK_REF_T(::System::SpanHelpers*);
DEFINE_IL2CPP_CLASS(::System::SpanHelpers*, "System", "SpanHelpers");
// [Extension]
// Dependencies System.IEquatable`1<T>, System.Object
namespace System {
// Is value type: false
// CS Name: System.SpanHelpers
class CORDL_TYPE SpanHelpers : public ::System::Object {
public:
  // Declarations
  /// @brief Method ClearWithReferences, addr 0x60773c4, size 0x70, virtual false, abstract: false, final false
  static inline void ClearWithReferences(::by_ref<::System::IntPtr> ip, uint64_t pointerSizeLength);

  /// @brief Method ClearWithoutReferences, addr 0x6077198, size 0x22c, virtual false, abstract: false, final false
  static inline void ClearWithoutReferences(::by_ref<uint8_t> b, uint64_t byteLength);

  /// @brief Method EndsWithCultureHelper, addr 0x6076db4, size 0x1ac, virtual false, abstract: false, final false
  static inline bool EndsWithCultureHelper(::System::ReadOnlySpan_1<char16_t> span, ::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::CompareInfo* compareInfo);

  /// @brief Method EndsWithCultureIgnoreCaseHelper, addr 0x6076f60, size 0x140, virtual false, abstract: false, final false
  static inline bool EndsWithCultureIgnoreCaseHelper(::System::ReadOnlySpan_1<char16_t> span, ::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::CompareInfo* compareInfo);

  /// @brief Method EndsWithOrdinalIgnoreCaseHelper, addr 0x60770a0, size 0xf8, virtual false, abstract: false, final false
  static inline bool EndsWithOrdinalIgnoreCaseHelper(::System::ReadOnlySpan_1<char16_t> span, ::System::ReadOnlySpan_1<char16_t> value);

  /// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::System::IEquatable_1<T>*>)
  static inline int32_t IndexOf(::by_ref<T> searchSpace, int32_t searchSpaceLength, ::by_ref<T> value, int32_t valueLength);

  /// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::System::IEquatable_1<T>*>)
  static inline int32_t IndexOf(::by_ref<T> searchSpace, T value, int32_t length);

  /// @brief Method IndexOf, addr 0x6075eb0, size 0x160, virtual false, abstract: false, final false
  static inline int32_t IndexOf(::by_ref<char16_t> searchSpace, char16_t value, int32_t length);

  /// @brief Method IndexOf, addr 0x6075a3c, size 0xd4, virtual false, abstract: false, final false
  static inline int32_t IndexOf(::by_ref<uint8_t> searchSpace, int32_t searchSpaceLength, ::by_ref<uint8_t> value, int32_t valueLength);

  /// @brief Method IndexOf, addr 0x6075b10, size 0x158, virtual false, abstract: false, final false
  static inline int32_t IndexOf(::by_ref<uint8_t> searchSpace, uint8_t value, int32_t length);

  /// @brief Method IndexOfAny, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::System::IEquatable_1<T>*>)
  static inline int32_t IndexOfAny(::by_ref<T> searchSpace, int32_t searchSpaceLength, ::by_ref<T> value, int32_t valueLength);

  /// @brief Method IndexOfAny, addr 0x6075c68, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t IndexOfAny(::by_ref<uint8_t> searchSpace, int32_t searchSpaceLength, ::by_ref<uint8_t> value, int32_t valueLength);

  /// @brief Method IndexOfCultureHelper, addr 0x6076618, size 0x140, virtual false, abstract: false, final false
  static inline int32_t IndexOfCultureHelper(::System::ReadOnlySpan_1<char16_t> span, ::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::CompareInfo* compareInfo);

  /// @brief Method IndexOfCultureIgnoreCaseHelper, addr 0x6076758, size 0x140, virtual false, abstract: false, final false
  static inline int32_t IndexOfCultureIgnoreCaseHelper(::System::ReadOnlySpan_1<char16_t> span, ::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::CompareInfo* compareInfo);

  /// @brief Method IndexOfOrdinalHelper, addr 0x6076898, size 0x14c, virtual false, abstract: false, final false
  static inline int32_t IndexOfOrdinalHelper(::System::ReadOnlySpan_1<char16_t> span, ::System::ReadOnlySpan_1<char16_t> value, bool ignoreCase);

  /// @brief Method LastIndexOf, addr 0x6076010, size 0x198, virtual false, abstract: false, final false
  static inline int32_t LastIndexOf(::by_ref<char16_t> searchSpace, char16_t value, int32_t length);

  /// @brief Method LocateFirstFoundChar, addr 0x60761a8, size 0x214, virtual false, abstract: false, final false
  static inline int32_t LocateFirstFoundChar(::System::Numerics::Vector_1<uint16_t> match);

  /// @brief Method LocateFirstFoundChar, addr 0x60763bc, size 0x20, virtual false, abstract: false, final false
  static inline int32_t LocateFirstFoundChar(uint64_t match);

  /// @brief Method LocateLastFoundChar, addr 0x60763dc, size 0x210, virtual false, abstract: false, final false
  static inline int32_t LocateLastFoundChar(::System::Numerics::Vector_1<uint16_t> match);

  /// @brief Method LocateLastFoundChar, addr 0x60765ec, size 0x2c, virtual false, abstract: false, final false
  static inline int32_t LocateLastFoundChar(uint64_t match);

  /// @brief Method SequenceCompareTo, addr 0x6075d70, size 0x140, virtual false, abstract: false, final false
  static inline int32_t SequenceCompareTo(::by_ref<char16_t> first, int32_t firstLength, ::by_ref<char16_t> second, int32_t secondLength);

  /// @brief Method SequenceEqual, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::System::IEquatable_1<T>*>)
  static inline bool SequenceEqual(::by_ref<T> first, ::by_ref<T> second, int32_t length);

  /// @brief Method SequenceEqual, addr 0x6075ce4, size 0x8c, virtual false, abstract: false, final false
  static inline bool SequenceEqual(::by_ref<uint8_t> first, ::by_ref<uint8_t> second, uint64_t length);

  /// @brief Method StartsWithCultureHelper, addr 0x60769e4, size 0x1a4, virtual false, abstract: false, final false
  static inline bool StartsWithCultureHelper(::System::ReadOnlySpan_1<char16_t> span, ::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::CompareInfo* compareInfo);

  /// @brief Method StartsWithCultureIgnoreCaseHelper, addr 0x6076b88, size 0x140, virtual false, abstract: false, final false
  static inline bool StartsWithCultureIgnoreCaseHelper(::System::ReadOnlySpan_1<char16_t> span, ::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::CompareInfo* compareInfo);

  /// @brief Method StartsWithOrdinalIgnoreCaseHelper, addr 0x6076cc8, size 0xec, virtual false, abstract: false, final false
  static inline bool StartsWithOrdinalIgnoreCaseHelper(::System::ReadOnlySpan_1<char16_t> span, ::System::ReadOnlySpan_1<char16_t> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SpanHelpers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SpanHelpers", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SpanHelpers(SpanHelpers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SpanHelpers", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SpanHelpers(SpanHelpers const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2477 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::SpanHelpers) == 0x10, "Size mismatch!");

} // namespace System
