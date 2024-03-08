#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BigNumber)
namespace System::Globalization {
class NumberFormatInfo;
}
namespace System::Numerics {
struct BigInteger;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace System {
template <typename T> struct Span_1;
}
// Forward declare root types
namespace System::Numerics {
class BigNumber;
}
// Write type traits
MARK_REF_PTR_T(::System::Numerics::BigNumber);
// Type: System.Numerics::BigNumber
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Numerics {
// Is value type: false
// CS Name: ::System.Numerics::BigNumber*
class CORDL_TYPE BigNumber : public ::System::Object {
public:
  // Declarations
  /// @brief Method FormatBigInteger, addr 0x2992b30, size 0xa00, virtual false, abstract: false, final false
  static inline ::StringW FormatBigInteger(bool targetSpan, ::System::Numerics::BigInteger value, ::StringW formatString, ::System::ReadOnlySpan_1<char16_t> formatSpan,
                                           ::System::Globalization::NumberFormatInfo* info, ::System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten, ByRef<bool> spanSuccess);

  /// @brief Method FormatBigInteger, addr 0x2990bf4, size 0xac, virtual false, abstract: false, final false
  static inline ::StringW FormatBigInteger(::System::Numerics::BigInteger value, ::StringW format, ::System::Globalization::NumberFormatInfo* info);

  /// @brief Method FormatBigIntegerToHex, addr 0x2991f48, size 0x5e4, virtual false, abstract: false, final false
  static inline ::StringW FormatBigIntegerToHex(bool targetSpan, ::System::Numerics::BigInteger value, char16_t format, int32_t digits, ::System::Globalization::NumberFormatInfo* info,
                                                ::System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten, ByRef<bool> spanSuccess);

  /// @brief Method ParseFormatSpecifier, addr 0x2991e58, size 0xf0, virtual false, abstract: false, final false
  static inline char16_t ParseFormatSpecifier(::System::ReadOnlySpan_1<char16_t> format, ByRef<int32_t> digits);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BigNumber();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BigNumber", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BigNumber(BigNumber&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BigNumber", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BigNumber(BigNumber const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Numerics::BigNumber, 0x10>, "Size mismatch!");

} // namespace System::Numerics
NEED_NO_BOX(::System::Numerics::BigNumber);
DEFINE_IL2CPP_ARG_TYPE(::System::Numerics::BigNumber*, "System.Numerics", "BigNumber");
