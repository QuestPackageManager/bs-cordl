#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Span_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ValueUtf8Converter)
namespace System {
template <typename T> struct Span_1;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
// Forward declare root types
namespace System::Text {
struct ValueUtf8Converter;
}
// Write type traits
MARK_VAL_T(::System::Text::ValueUtf8Converter);
// Type: System.Text::ValueUtf8Converter
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Text {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2470)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2470), inst: 741 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2869))
// CS Name: ::System.Text::ValueUtf8Converter
struct CORDL_TYPE ValueUtf8Converter {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x2449a58, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::System::Span_1<uint8_t> initialBuffer);

  /// @brief Method ConvertAndTerminateString, addr 0x2449a64, size 0x224, virtual false, abstract: false, final false
  inline ::System::Span_1<uint8_t> ConvertAndTerminateString(::System::ReadOnlySpan_1<char16_t> value);

  /// @brief Method Dispose, addr 0x2449d34, size 0xf4, virtual false, abstract: false, final false
  inline void Dispose();

  // Ctor Parameters [CppParam { name: "_arrayToReturnToPool", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "_bytes", ty: "::System::Span_1<uint8_t>",
  // modifiers: "", def_value: None }]
  constexpr ValueUtf8Converter(::ArrayW<uint8_t, ::Array<uint8_t>*> _arrayToReturnToPool, ::System::Span_1<uint8_t> _bytes) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr ValueUtf8Converter();

  /// @brief Field _arrayToReturnToPool, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> _arrayToReturnToPool;

  /// @brief Field _bytes, offset: 0x8, size: 0x10, def value: None
  ::System::Span_1<uint8_t> _bytes;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::ValueUtf8Converter, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Text::ValueUtf8Converter, _arrayToReturnToPool) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Text::ValueUtf8Converter, _bytes) == 0x8, "Offset mismatch!");

} // namespace System::Text
DEFINE_IL2CPP_ARG_TYPE(::System::Text::ValueUtf8Converter, "System.Text", "ValueUtf8Converter");
