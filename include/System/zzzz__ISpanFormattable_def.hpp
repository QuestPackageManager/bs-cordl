#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ISpanFormattable)
namespace System {
class IFormatProvider;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace System {
template <typename T> struct Span_1;
}
// Forward declare root types
namespace System {
class ISpanFormattable;
}
// Write type traits
MARK_REF_PTR_T(::System::ISpanFormattable);
// Type: System::ISpanFormattable
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::System::ISpanFormattable*
class CORDL_TYPE ISpanFormattable {
public:
  // Declarations
  /// @brief Method TryFormat, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool TryFormat(::System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider* provider);

  // Ctor Parameters [CppParam { name: "", ty: "ISpanFormattable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ISpanFormattable(ISpanFormattable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ISpanFormattable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISpanFormattable(ISpanFormattable const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System
NEED_NO_BOX(::System::ISpanFormattable);
DEFINE_IL2CPP_ARG_TYPE(::System::ISpanFormattable*, "System", "ISpanFormattable");
