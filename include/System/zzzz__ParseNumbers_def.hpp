#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ParseNumbers)
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
// Forward declare root types
namespace System {
class ParseNumbers;
}
// Write type traits
MARK_REF_PTR_T(::System::ParseNumbers);
// Type: System::ParseNumbers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2459))
// CS Name: ::System::ParseNumbers*
class CORDL_TYPE ParseNumbers : public ::System::Object {
public:
  // Declarations
  /// @brief Method StringToLong, addr 0x25be474, size 0x18, virtual false, abstract: false, final false
  static inline int64_t StringToLong(::System::ReadOnlySpan_1<char16_t> s, int32_t radix, int32_t flags);

  /// @brief Method StringToLong, addr 0x25be48c, size 0x370, virtual false, abstract: false, final false
  static inline int64_t StringToLong(::System::ReadOnlySpan_1<char16_t> s, int32_t radix, int32_t flags, ByRef<int32_t> currPos);

  /// @brief Method StringToInt, addr 0x25beab0, size 0x18, virtual false, abstract: false, final false
  static inline int32_t StringToInt(::System::ReadOnlySpan_1<char16_t> s, int32_t radix, int32_t flags);

  /// @brief Method StringToInt, addr 0x25beac8, size 0x3cc, virtual false, abstract: false, final false
  static inline int32_t StringToInt(::System::ReadOnlySpan_1<char16_t> s, int32_t radix, int32_t flags, ByRef<int32_t> currPos);

  /// @brief Method IntToString, addr 0x25bf0b8, size 0x380, virtual false, abstract: false, final false
  static inline ::StringW IntToString(int32_t n, int32_t radix, int32_t width, char16_t paddingChar, int32_t flags);

  /// @brief Method LongToString, addr 0x25bf438, size 0x3fc, virtual false, abstract: false, final false
  static inline ::StringW LongToString(int64_t n, int32_t radix, int32_t width, char16_t paddingChar, int32_t flags);

  /// @brief Method EatWhiteSpace, addr 0x25be7fc, size 0xc4, virtual false, abstract: false, final false
  static inline void EatWhiteSpace(::System::ReadOnlySpan_1<char16_t> s, ByRef<int32_t> i);

  /// @brief Method GrabLongs, addr 0x25be8c0, size 0x1f0, virtual false, abstract: false, final false
  static inline int64_t GrabLongs(int32_t radix, ::System::ReadOnlySpan_1<char16_t> s, ByRef<int32_t> i, bool isUnsigned);

  /// @brief Method GrabInts, addr 0x25bee94, size 0x224, virtual false, abstract: false, final false
  static inline int32_t GrabInts(int32_t radix, ::System::ReadOnlySpan_1<char16_t> s, ByRef<int32_t> i, bool isUnsigned);

  /// @brief Method ThrowOverflowInt32Exception, addr 0x25bf8cc, size 0x4c, virtual false, abstract: false, final false
  static inline void ThrowOverflowInt32Exception();

  /// @brief Method ThrowOverflowInt64Exception, addr 0x25bf834, size 0x4c, virtual false, abstract: false, final false
  static inline void ThrowOverflowInt64Exception();

  /// @brief Method ThrowOverflowUInt32Exception, addr 0x25bf918, size 0x4c, virtual false, abstract: false, final false
  static inline void ThrowOverflowUInt32Exception();

  /// @brief Method ThrowOverflowUInt64Exception, addr 0x25bf880, size 0x4c, virtual false, abstract: false, final false
  static inline void ThrowOverflowUInt64Exception();

  /// @brief Method IsDigit, addr 0x25bf964, size 0x54, virtual false, abstract: false, final false
  static inline bool IsDigit(char16_t c, int32_t radix, ByRef<int32_t> result);

  // Ctor Parameters [CppParam { name: "", ty: "ParseNumbers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ParseNumbers(ParseNumbers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ParseNumbers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ParseNumbers(ParseNumbers const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ParseNumbers();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ParseNumbers, 0x10>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::ParseNumbers);
DEFINE_IL2CPP_ARG_TYPE(::System::ParseNumbers*, "System", "ParseNumbers");
