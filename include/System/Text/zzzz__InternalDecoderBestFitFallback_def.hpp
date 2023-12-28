#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Text/zzzz__DecoderFallback_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InternalDecoderBestFitFallback)
namespace System::Text {
class Encoding;
}
namespace System {
class Object;
}
namespace System::Text {
class DecoderFallbackBuffer;
}
// Forward declare root types
namespace System::Text {
class InternalDecoderBestFitFallback;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::InternalDecoderBestFitFallback);
// Type: System.Text::InternalDecoderBestFitFallback
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 34, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2833))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2828))
// CS Name: ::System.Text::InternalDecoderBestFitFallback*
class CORDL_TYPE InternalDecoderBestFitFallback : public ::System::Text::DecoderFallback {
public:
  // Declarations
  /// @brief Field _encoding, offset 0x10, size 0x8
  __declspec(property(get = __get__encoding, put = __set__encoding))::System::Text::Encoding* _encoding;

  /// @brief Field _arrayBestFit, offset 0x18, size 0x8
  __declspec(property(get = __get__arrayBestFit, put = __set__arrayBestFit))::ArrayW<char16_t, ::Array<char16_t>*> _arrayBestFit;

  /// @brief Field _cReplacement, offset 0x20, size 0x2
  __declspec(property(get = __get__cReplacement, put = __set__cReplacement)) char16_t _cReplacement;

  __declspec(property(get = get_MaxCharCount)) int32_t MaxCharCount;

  constexpr ::System::Text::Encoding*& __get__encoding();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::Encoding*> const& __get__encoding() const;

  constexpr void __set__encoding(::System::Text::Encoding* value);

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __get__arrayBestFit();

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __get__arrayBestFit() const;

  constexpr void __set__arrayBestFit(::ArrayW<char16_t, ::Array<char16_t>*> value);

  constexpr char16_t& __get__cReplacement();

  constexpr char16_t const& __get__cReplacement() const;

  constexpr void __set__cReplacement(char16_t value);

  static inline ::System::Text::InternalDecoderBestFitFallback* New_ctor(::System::Text::Encoding* encoding);

  /// @brief Method .ctor addr 0x2630b08 size 0x30 virtual false final false
  inline void _ctor(::System::Text::Encoding* encoding);

  /// @brief Method CreateFallbackBuffer addr 0x2630b40 size 0x60 virtual true final false
  inline ::System::Text::DecoderFallbackBuffer* CreateFallbackBuffer();

  /// @brief Method get_MaxCharCount addr 0x2630cc8 size 0x8 virtual true final false
  inline int32_t get_MaxCharCount();

  /// @brief Method Equals addr 0x2630cd0 size 0xa8 virtual true final false
  inline bool Equals(::System::Object* value);

  /// @brief Method GetHashCode addr 0x2630d78 size 0x24 virtual true final false
  inline int32_t GetHashCode();

  // Ctor Parameters [CppParam { name: "", ty: "InternalDecoderBestFitFallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InternalDecoderBestFitFallback(InternalDecoderBestFitFallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InternalDecoderBestFitFallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InternalDecoderBestFitFallback(InternalDecoderBestFitFallback const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InternalDecoderBestFitFallback();

public:
  /// @brief Field _encoding, offset: 0x10, size: 0x8, def value: None
  ::System::Text::Encoding* ____encoding;

  /// @brief Field _arrayBestFit, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<char16_t, ::Array<char16_t>*> ____arrayBestFit;

  /// @brief Field _cReplacement, offset: 0x20, size: 0x2, def value: None
  char16_t ____cReplacement;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::InternalDecoderBestFitFallback, 0x28>, "Size mismatch!");

} // namespace System::Text
NEED_NO_BOX(::System::Text::InternalDecoderBestFitFallback);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::InternalDecoderBestFitFallback*, "System.Text", "InternalDecoderBestFitFallback");
