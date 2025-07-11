#pragma once
// IWYU pragma private; include "System/Text/ValueStringBuilder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Span_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ValueStringBuilder)
namespace System {
template <typename T> struct Span_1;
}
// Forward declare root types
namespace System::Text {
struct ValueStringBuilder;
}
// Write type traits
MARK_VAL_T(::System::Text::ValueStringBuilder);
// Dependencies System.Span`1<T>
namespace System::Text {
// Is value type: true
// CS Name: System.Text.ValueStringBuilder
struct CORDL_TYPE ValueStringBuilder {
public:
  // Declarations
  __declspec(property(get = get_Item)) char16_t Item[];

  __declspec(property(get = get_Length)) int32_t Length;

  /// @brief Method Append, addr 0x3c8c2cc, size 0x7c, virtual false, abstract: false, final false
  inline void Append(char16_t c);

  /// @brief Method Append, addr 0x3c8c7e4, size 0x128, virtual false, abstract: false, final false
  inline void Append(char16_t c, int32_t count);

  /// @brief Method Append, addr 0x3c8c3c8, size 0xac, virtual false, abstract: false, final false
  inline void Append(::StringW s);

  /// @brief Method Append, addr 0x3c8c90c, size 0xe0, virtual false, abstract: false, final false
  inline void Append(::cordl_internals::Ptr<char16_t> value, int32_t length);

  /// @brief Method AppendSlow, addr 0x3c8c474, size 0x12c, virtual false, abstract: false, final false
  inline void AppendSlow(::StringW s);

  /// @brief Method AppendSpan, addr 0x3c8c9ec, size 0xbc, virtual false, abstract: false, final false
  inline ::System::Span_1<char16_t> AppendSpan(int32_t length);

  /// @brief Method Dispose, addr 0x3c8caa8, size 0xf8, virtual false, abstract: false, final false
  inline void Dispose();

  /// @brief Method Grow, addr 0x3c8c5a0, size 0x244, virtual false, abstract: false, final false
  inline void Grow(int32_t requiredAdditionalCapacity);

  /// @brief Method GrowAndAppend, addr 0x3c8c348, size 0x80, virtual false, abstract: false, final false
  inline void GrowAndAppend(char16_t c);

  /// @brief Method ToString, addr 0x3c8c118, size 0xcc, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method TryCopyTo, addr 0x3c8c1e4, size 0xe8, virtual false, abstract: false, final false
  inline bool TryCopyTo(::System::Span_1<char16_t> destination, ::ByRef<int32_t> charsWritten);

  /// @brief Method .ctor, addr 0x3c8c0dc, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::System::Span_1<char16_t> initialBuffer);

  /// @brief Method get_Item, addr 0x3c8c0f4, size 0x24, virtual false, abstract: false, final false
  inline ::ByRef<char16_t> get_Item(int32_t index);

  /// @brief Method get_Length, addr 0x3c8c0ec, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Length();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ValueStringBuilder();

  // Ctor Parameters [CppParam { name: "_arrayToReturnToPool", ty: "::ArrayW<char16_t,::Array<char16_t>*>", modifiers: "", def_value: None }, CppParam { name: "_chars", ty:
  // "::System::Span_1<char16_t>", modifiers: "", def_value: None }, CppParam { name: "_pos", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ValueStringBuilder(::ArrayW<char16_t, ::Array<char16_t>*> _arrayToReturnToPool, ::System::Span_1<char16_t> _chars, int32_t _pos) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2871 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field _arrayToReturnToPool, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<char16_t, ::Array<char16_t>*> _arrayToReturnToPool;

  /// @brief Field _chars, offset: 0x8, size: 0x10, def value: None
  ::System::Span_1<char16_t> _chars;

  /// @brief Field _pos, offset: 0x18, size: 0x4, def value: None
  int32_t _pos;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Text::ValueStringBuilder, _arrayToReturnToPool) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Text::ValueStringBuilder, _chars) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Text::ValueStringBuilder, _pos) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Text::ValueStringBuilder, 0x20>, "Size mismatch!");

} // namespace System::Text
DEFINE_IL2CPP_ARG_TYPE(::System::Text::ValueStringBuilder, "System.Text", "ValueStringBuilder");
