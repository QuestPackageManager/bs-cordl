#pragma once
// IWYU pragma private; include "System/Text/ValueStringBuilder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Span_1_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: System.Text::ValueStringBuilder
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Text {
// Is value type: true
// CS Name: ::System.Text::ValueStringBuilder
struct CORDL_TYPE ValueStringBuilder {
public:
  // Declarations
  __declspec(property(get = get_Length)) int32_t Length;

  /// @brief Method Append, addr 0x2d87350, size 0x7c, virtual false, abstract: false, final false
  inline void Append(char16_t c);

  /// @brief Method Append, addr 0x2d860ac, size 0xdc, virtual false, abstract: false, final false
  inline void Append(char16_t c, int32_t count);

  /// @brief Method Append, addr 0x2d8744c, size 0xac, virtual false, abstract: false, final false
  inline void Append(::StringW s);

  /// @brief Method Append, addr 0x2d85fcc, size 0xe0, virtual false, abstract: false, final false
  inline void Append(::cordl_internals::Ptr<char16_t> value, int32_t length);

  /// @brief Method AppendSlow, addr 0x2d874f8, size 0x130, virtual false, abstract: false, final false
  inline void AppendSlow(::StringW s);

  /// @brief Method AppendSpan, addr 0x2d87628, size 0xc0, virtual false, abstract: false, final false
  inline ::System::Span_1<char16_t> AppendSpan(int32_t length);

  /// @brief Method Dispose, addr 0x2d876e8, size 0xf8, virtual false, abstract: false, final false
  inline void Dispose();

  /// @brief Method Grow, addr 0x2d8710c, size 0x244, virtual false, abstract: false, final false
  inline void Grow(int32_t requiredAdditionalCapacity);

  /// @brief Method GrowAndAppend, addr 0x2d873cc, size 0x80, virtual false, abstract: false, final false
  inline void GrowAndAppend(char16_t c);

  /// @brief Method Insert, addr 0x2d819dc, size 0x1d0, virtual false, abstract: false, final false
  inline void Insert(int32_t index, char16_t value, int32_t count);

  /// @brief Method ToString, addr 0x2d81e38, size 0x198, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method TryCopyTo, addr 0x2d81bac, size 0x28c, virtual false, abstract: false, final false
  inline bool TryCopyTo(::System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten);

  /// @brief Method .ctor, addr 0x2d819cc, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::System::Span_1<char16_t> initialBuffer);

  /// @brief Method get_Length, addr 0x2d87104, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Length();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ValueStringBuilder();

  // Ctor Parameters [CppParam { name: "_arrayToReturnToPool", ty: "::ArrayW<char16_t,::Array<char16_t>*>", modifiers: "", def_value: None }, CppParam { name: "_chars", ty:
  // "::System::Span_1<char16_t>", modifiers: "", def_value: None }, CppParam { name: "_pos", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ValueStringBuilder(::ArrayW<char16_t, ::Array<char16_t>*> _arrayToReturnToPool, ::System::Span_1<char16_t> _chars, int32_t _pos) noexcept;

  /// @brief Field _arrayToReturnToPool, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<char16_t, ::Array<char16_t>*> _arrayToReturnToPool;

  /// @brief Field _chars, offset: 0x8, size: 0x10, def value: None
  ::System::Span_1<char16_t> _chars;

  /// @brief Field _pos, offset: 0x18, size: 0x4, def value: None
  int32_t _pos;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::ValueStringBuilder, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Text::ValueStringBuilder, _arrayToReturnToPool) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Text::ValueStringBuilder, _chars) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Text::ValueStringBuilder, _pos) == 0x18, "Offset mismatch!");

} // namespace System::Text
DEFINE_IL2CPP_ARG_TYPE(::System::Text::ValueStringBuilder, "System.Text", "ValueStringBuilder");
