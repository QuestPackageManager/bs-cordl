#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SpanHelpers)
namespace System::Globalization {
class CompareInfo;
}
namespace System::Numerics {
template <typename T> struct Vector_1;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
// Forward declare root types
namespace System {
class SpanHelpers;
}
// Write type traits
MARK_REF_PTR_T(::System::SpanHelpers);
// Type: System::SpanHelpers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2472))
// CS Name: ::System::SpanHelpers*
class CORDL_TYPE SpanHelpers : public ::System::Object {
public:
  // Declarations
  /// @brief Method IndexOfAny, addr 0x25e4984, size 0x80, virtual false, abstract: false, final false
  static inline int32_t IndexOfAny(ByRef<uint8_t> searchSpace, int32_t searchSpaceLength, ByRef<uint8_t> value, int32_t valueLength);

  /// @brief Method IndexOf, addr 0x25e4a04, size 0x298, virtual false, abstract: false, final false
  static inline int32_t IndexOf(ByRef<uint8_t> searchSpace, uint8_t value, int32_t length);

  /// @brief Method SequenceEqual, addr 0x25e4c9c, size 0x1c8, virtual false, abstract: false, final false
  static inline bool SequenceEqual(ByRef<uint8_t> first, ByRef<uint8_t> second, uint64_t length);

  /// @brief Method SequenceCompareTo, addr 0x25e4e64, size 0x4d0, virtual false, abstract: false, final false
  static inline int32_t SequenceCompareTo(ByRef<char16_t> first, int32_t firstLength, ByRef<char16_t> second, int32_t secondLength);

  /// @brief Method IndexOf, addr 0x25e5334, size 0x73c, virtual false, abstract: false, final false
  static inline int32_t IndexOf(ByRef<char16_t> searchSpace, char16_t value, int32_t length);

  /// @brief Method LastIndexOf, addr 0x25e5a70, size 0x6e4, virtual false, abstract: false, final false
  static inline int32_t LastIndexOf(ByRef<char16_t> searchSpace, char16_t value, int32_t length);

  /// @brief Method LocateFirstFoundChar, addr 0x25e6154, size 0x1c0, virtual false, abstract: false, final false
  static inline int32_t LocateFirstFoundChar(::System::Numerics::Vector_1<uint16_t> match);

  /// @brief Method LocateFirstFoundChar, addr 0x25e6314, size 0x20, virtual false, abstract: false, final false
  static inline int32_t LocateFirstFoundChar(uint64_t match);

  /// @brief Method LocateLastFoundChar, addr 0x25e6334, size 0x1c0, virtual false, abstract: false, final false
  static inline int32_t LocateLastFoundChar(::System::Numerics::Vector_1<uint16_t> match);

  /// @brief Method LocateLastFoundChar, addr 0x25e64f4, size 0x2c, virtual false, abstract: false, final false
  static inline int32_t LocateLastFoundChar(uint64_t match);

  /// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t IndexOf(ByRef<T> searchSpace, T value, int32_t length);

  /// @brief Method IndexOfAny, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t IndexOfAny(ByRef<T> searchSpace, int32_t searchSpaceLength, ByRef<T> value, int32_t valueLength);

  /// @brief Method SequenceEqual, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool SequenceEqual(ByRef<T> first, ByRef<T> second, int32_t length);

  /// @brief Method EndsWithCultureHelper, addr 0x25e6520, size 0x200, virtual false, abstract: false, final false
  static inline bool EndsWithCultureHelper(::System::ReadOnlySpan_1<char16_t> span, ::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::CompareInfo* compareInfo);

  /// @brief Method EndsWithCultureIgnoreCaseHelper, addr 0x25e6720, size 0x120, virtual false, abstract: false, final false
  static inline bool EndsWithCultureIgnoreCaseHelper(::System::ReadOnlySpan_1<char16_t> span, ::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::CompareInfo* compareInfo);

  /// @brief Method EndsWithOrdinalIgnoreCaseHelper, addr 0x25e6840, size 0xe0, virtual false, abstract: false, final false
  static inline bool EndsWithOrdinalIgnoreCaseHelper(::System::ReadOnlySpan_1<char16_t> span, ::System::ReadOnlySpan_1<char16_t> value);

  /// @brief Method ClearWithoutReferences, addr 0x25e6920, size 0x1e8, virtual false, abstract: false, final false
  static inline void ClearWithoutReferences(ByRef<uint8_t> b, uint64_t byteLength);

  /// @brief Method ClearWithReferences, addr 0x25e6b08, size 0x150, virtual false, abstract: false, final false
  static inline void ClearWithReferences(ByRef<void*> ip, uint64_t pointerSizeLength);

  // Ctor Parameters [CppParam { name: "", ty: "SpanHelpers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SpanHelpers(SpanHelpers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SpanHelpers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SpanHelpers(SpanHelpers const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SpanHelpers();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::SpanHelpers, 0x10>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::SpanHelpers);
DEFINE_IL2CPP_ARG_TYPE(::System::SpanHelpers*, "System", "SpanHelpers");
