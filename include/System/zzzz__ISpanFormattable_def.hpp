#pragma once
// IWYU pragma private; include "System/ISpanFormattable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
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
// Dependencies
namespace System {
// Is value type: false
// CS Name: System.ISpanFormattable
class CORDL_TYPE ISpanFormattable {
public:
  // Declarations
  /// @brief Method TryFormat, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool TryFormat(::System::Span_1<char16_t> destination, ::ByRef<int32_t> charsWritten, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider* provider);

  // Ctor Parameters [CppParam { name: "", ty: "ISpanFormattable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISpanFormattable(ISpanFormattable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2423 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System
NEED_NO_BOX(::System::ISpanFormattable);
DEFINE_IL2CPP_ARG_TYPE(::System::ISpanFormattable*, "System", "ISpanFormattable");
