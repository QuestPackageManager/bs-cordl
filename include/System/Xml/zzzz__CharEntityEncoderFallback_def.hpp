#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Text/zzzz__EncoderFallback_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CharEntityEncoderFallback)
namespace System::Xml {
class CharEntityEncoderFallbackBuffer;
}
namespace System::Text {
class EncoderFallbackBuffer;
}
// Forward declare root types
namespace System::Xml {
class CharEntityEncoderFallback;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::CharEntityEncoderFallback);
// Type: System.Xml::CharEntityEncoderFallback
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2844))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11411))
// CS Name: ::System.Xml::CharEntityEncoderFallback*
class CORDL_TYPE CharEntityEncoderFallback : public ::System::Text::EncoderFallback {
public:
  // Declarations
  /// @brief Field fallbackBuffer, offset 0x10, size 0x8
  __declspec(property(get = __get_fallbackBuffer, put = __set_fallbackBuffer))::System::Xml::CharEntityEncoderFallbackBuffer* fallbackBuffer;

  /// @brief Field textContentMarks, offset 0x18, size 0x8
  __declspec(property(get = __get_textContentMarks, put = __set_textContentMarks))::ArrayW<int32_t, ::Array<int32_t>*> textContentMarks;

  /// @brief Field endMarkPos, offset 0x20, size 0x4
  __declspec(property(get = __get_endMarkPos, put = __set_endMarkPos)) int32_t endMarkPos;

  /// @brief Field curMarkPos, offset 0x24, size 0x4
  __declspec(property(get = __get_curMarkPos, put = __set_curMarkPos)) int32_t curMarkPos;

  /// @brief Field startOffset, offset 0x28, size 0x4
  __declspec(property(get = __get_startOffset, put = __set_startOffset)) int32_t startOffset;

  __declspec(property(get = get_MaxCharCount)) int32_t MaxCharCount;

  __declspec(property(put = set_StartOffset)) int32_t StartOffset;

  constexpr ::System::Xml::CharEntityEncoderFallbackBuffer*& __get_fallbackBuffer();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::CharEntityEncoderFallbackBuffer*> const& __get_fallbackBuffer() const;

  constexpr void __set_fallbackBuffer(::System::Xml::CharEntityEncoderFallbackBuffer* value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_textContentMarks();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_textContentMarks() const;

  constexpr void __set_textContentMarks(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr int32_t& __get_endMarkPos();

  constexpr int32_t const& __get_endMarkPos() const;

  constexpr void __set_endMarkPos(int32_t value);

  constexpr int32_t& __get_curMarkPos();

  constexpr int32_t const& __get_curMarkPos() const;

  constexpr void __set_curMarkPos(int32_t value);

  constexpr int32_t& __get_startOffset();

  constexpr int32_t const& __get_startOffset() const;

  constexpr void __set_startOffset(int32_t value);

  static inline ::System::Xml::CharEntityEncoderFallback* New_ctor();

  /// @brief Method .ctor addr 0x284e9bc size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method CreateFallbackBuffer addr 0x284e9c4 size 0x6c virtual true final false
  inline ::System::Text::EncoderFallbackBuffer* CreateFallbackBuffer();

  /// @brief Method get_MaxCharCount addr 0x284eaa4 size 0x8 virtual true final false
  inline int32_t get_MaxCharCount();

  /// @brief Method set_StartOffset addr 0x284eaac size 0x8 virtual false final false
  inline void set_StartOffset(int32_t value);

  /// @brief Method Reset addr 0x284eab4 size 0xc virtual false final false
  inline void Reset(::ArrayW<int32_t, ::Array<int32_t>*> textContentMarks, int32_t endMarkPos);

  /// @brief Method CanReplaceAt addr 0x284eac0 size 0x68 virtual false final false
  inline bool CanReplaceAt(int32_t index);

  // Ctor Parameters [CppParam { name: "", ty: "CharEntityEncoderFallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CharEntityEncoderFallback(CharEntityEncoderFallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CharEntityEncoderFallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CharEntityEncoderFallback(CharEntityEncoderFallback const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CharEntityEncoderFallback();

public:
  /// @brief Field fallbackBuffer, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::CharEntityEncoderFallbackBuffer* ___fallbackBuffer;

  /// @brief Field textContentMarks, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___textContentMarks;

  /// @brief Field endMarkPos, offset: 0x20, size: 0x4, def value: None
  int32_t ___endMarkPos;

  /// @brief Field curMarkPos, offset: 0x24, size: 0x4, def value: None
  int32_t ___curMarkPos;

  /// @brief Field startOffset, offset: 0x28, size: 0x4, def value: None
  int32_t ___startOffset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::CharEntityEncoderFallback, 0x30>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::CharEntityEncoderFallback);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::CharEntityEncoderFallback*, "System.Xml", "CharEntityEncoderFallback");
