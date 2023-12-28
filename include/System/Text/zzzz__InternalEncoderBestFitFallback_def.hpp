#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Text/zzzz__EncoderFallback_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InternalEncoderBestFitFallback)
namespace System::Text {
class EncoderFallbackBuffer;
}
namespace System::Text {
class Encoding;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Text {
class InternalEncoderBestFitFallback;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::InternalEncoderBestFitFallback);
// Type: System.Text::InternalEncoderBestFitFallback
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2844))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2839))
// CS Name: ::System.Text::InternalEncoderBestFitFallback*
class CORDL_TYPE InternalEncoderBestFitFallback : public ::System::Text::EncoderFallback {
public:
  // Declarations
  /// @brief Field _encoding, offset 0x10, size 0x8
  __declspec(property(get = __get__encoding, put = __set__encoding))::System::Text::Encoding* _encoding;

  /// @brief Field _arrayBestFit, offset 0x18, size 0x8
  __declspec(property(get = __get__arrayBestFit, put = __set__arrayBestFit))::ArrayW<char16_t, ::Array<char16_t>*> _arrayBestFit;

  __declspec(property(get = get_MaxCharCount)) int32_t MaxCharCount;

  constexpr ::System::Text::Encoding*& __get__encoding();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::Encoding*> const& __get__encoding() const;

  constexpr void __set__encoding(::System::Text::Encoding* value);

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __get__arrayBestFit();

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __get__arrayBestFit() const;

  constexpr void __set__arrayBestFit(::ArrayW<char16_t, ::Array<char16_t>*> value);

  static inline ::System::Text::InternalEncoderBestFitFallback* New_ctor(::System::Text::Encoding* encoding);

  /// @brief Method .ctor addr 0x26333b0 size 0x28 virtual false final false
  inline void _ctor(::System::Text::Encoding* encoding);

  /// @brief Method CreateFallbackBuffer addr 0x26333e0 size 0x60 virtual true final false
  inline ::System::Text::EncoderFallbackBuffer* CreateFallbackBuffer();

  /// @brief Method get_MaxCharCount addr 0x2633568 size 0x8 virtual true final false
  inline int32_t get_MaxCharCount();

  /// @brief Method Equals addr 0x2633570 size 0xc4 virtual true final false
  inline bool Equals(::System::Object* value);

  /// @brief Method GetHashCode addr 0x2633634 size 0x24 virtual true final false
  inline int32_t GetHashCode();

  // Ctor Parameters [CppParam { name: "", ty: "InternalEncoderBestFitFallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InternalEncoderBestFitFallback(InternalEncoderBestFitFallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InternalEncoderBestFitFallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InternalEncoderBestFitFallback(InternalEncoderBestFitFallback const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InternalEncoderBestFitFallback();

public:
  /// @brief Field _encoding, offset: 0x10, size: 0x8, def value: None
  ::System::Text::Encoding* ____encoding;

  /// @brief Field _arrayBestFit, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<char16_t, ::Array<char16_t>*> ____arrayBestFit;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::InternalEncoderBestFitFallback, 0x20>, "Size mismatch!");

} // namespace System::Text
NEED_NO_BOX(::System::Text::InternalEncoderBestFitFallback);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::InternalEncoderBestFitFallback*, "System.Text", "InternalEncoderBestFitFallback");
