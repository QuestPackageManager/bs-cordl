#pragma once
// IWYU pragma private; include "System/ParseNumbers.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
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
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.ParseNumbers
class CORDL_TYPE ParseNumbers : public ::System::Object {
public:
  // Declarations
  /// @brief Method EatWhiteSpace, addr 0x3dfabd4, size 0xcc, virtual false, abstract: false, final false
  static inline void EatWhiteSpace(::System::ReadOnlySpan_1<char16_t> s, ::ByRef<int32_t> i);

  /// @brief Method GrabInts, addr 0x3dfb268, size 0x220, virtual false, abstract: false, final false
  static inline int32_t GrabInts(int32_t radix, ::System::ReadOnlySpan_1<char16_t> s, ::ByRef<int32_t> i, bool isUnsigned);

  /// @brief Method GrabLongs, addr 0x3dfaca0, size 0x1f4, virtual false, abstract: false, final false
  static inline int64_t GrabLongs(int32_t radix, ::System::ReadOnlySpan_1<char16_t> s, ::ByRef<int32_t> i, bool isUnsigned);

  /// @brief Method IntToString, addr 0x3dfb488, size 0x328, virtual false, abstract: false, final false
  static inline ::StringW IntToString(int32_t n, int32_t radix, int32_t width, char16_t paddingChar, int32_t flags);

  /// @brief Method IsDigit, addr 0x3dfbc70, size 0x54, virtual false, abstract: false, final false
  static inline bool IsDigit(char16_t c, int32_t radix, ::ByRef<int32_t> result);

  /// @brief Method LongToString, addr 0x3dfb7b0, size 0x3a0, virtual false, abstract: false, final false
  static inline ::StringW LongToString(int64_t n, int32_t radix, int32_t width, char16_t paddingChar, int32_t flags);

  /// @brief Method StringToInt, addr 0x3dfae94, size 0x18, virtual false, abstract: false, final false
  static inline int32_t StringToInt(::System::ReadOnlySpan_1<char16_t> s, int32_t radix, int32_t flags);

  /// @brief Method StringToInt, addr 0x3dfaeac, size 0x3bc, virtual false, abstract: false, final false
  static inline int32_t StringToInt(::System::ReadOnlySpan_1<char16_t> s, int32_t radix, int32_t flags, ::ByRef<int32_t> currPos);

  /// @brief Method StringToLong, addr 0x3dfa858, size 0x18, virtual false, abstract: false, final false
  static inline int64_t StringToLong(::System::ReadOnlySpan_1<char16_t> s, int32_t radix, int32_t flags);

  /// @brief Method StringToLong, addr 0x3dfa870, size 0x364, virtual false, abstract: false, final false
  static inline int64_t StringToLong(::System::ReadOnlySpan_1<char16_t> s, int32_t radix, int32_t flags, ::ByRef<int32_t> currPos);

  /// @brief Method ThrowOverflowInt32Exception, addr 0x3dfbbe0, size 0x48, virtual false, abstract: false, final false
  static inline void ThrowOverflowInt32Exception();

  /// @brief Method ThrowOverflowInt64Exception, addr 0x3dfbb50, size 0x48, virtual false, abstract: false, final false
  static inline void ThrowOverflowInt64Exception();

  /// @brief Method ThrowOverflowUInt32Exception, addr 0x3dfbc28, size 0x48, virtual false, abstract: false, final false
  static inline void ThrowOverflowUInt32Exception();

  /// @brief Method ThrowOverflowUInt64Exception, addr 0x3dfbb98, size 0x48, virtual false, abstract: false, final false
  static inline void ThrowOverflowUInt64Exception();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ParseNumbers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ParseNumbers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ParseNumbers(ParseNumbers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ParseNumbers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ParseNumbers(ParseNumbers const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2458 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ParseNumbers, 0x10>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::ParseNumbers);
DEFINE_IL2CPP_ARG_TYPE(::System::ParseNumbers*, "System", "ParseNumbers");
