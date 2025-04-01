#pragma once
// IWYU pragma private; include "System/Xml/CharEntityEncoderFallback.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Text/zzzz__EncoderFallback_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CharEntityEncoderFallback)
namespace System::Text {
class EncoderFallbackBuffer;
}
namespace System::Xml {
class CharEntityEncoderFallbackBuffer;
}
// Forward declare root types
namespace System::Xml {
class CharEntityEncoderFallback;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::CharEntityEncoderFallback);
// Dependencies System.Text.EncoderFallback
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.CharEntityEncoderFallback
class CORDL_TYPE CharEntityEncoderFallback : public ::System::Text::EncoderFallback {
public:
  // Declarations
  __declspec(property(get = get_MaxCharCount)) int32_t MaxCharCount;

  __declspec(property(put = set_StartOffset)) int32_t StartOffset;

  /// @brief Field curMarkPos, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_curMarkPos, put = __cordl_internal_set_curMarkPos)) int32_t curMarkPos;

  /// @brief Field endMarkPos, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_endMarkPos, put = __cordl_internal_set_endMarkPos)) int32_t endMarkPos;

  /// @brief Field fallbackBuffer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_fallbackBuffer, put = __cordl_internal_set_fallbackBuffer)) ::System::Xml::CharEntityEncoderFallbackBuffer* fallbackBuffer;

  /// @brief Field startOffset, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_startOffset, put = __cordl_internal_set_startOffset)) int32_t startOffset;

  /// @brief Field textContentMarks, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_textContentMarks, put = __cordl_internal_set_textContentMarks)) ::ArrayW<int32_t, ::Array<int32_t>*> textContentMarks;

  /// @brief Method CanReplaceAt, addr 0x423d508, size 0x80, virtual false, abstract: false, final false
  inline bool CanReplaceAt(int32_t index);

  /// @brief Method CreateFallbackBuffer, addr 0x423d414, size 0x64, virtual true, abstract: false, final false
  inline ::System::Text::EncoderFallbackBuffer* CreateFallbackBuffer();

  static inline ::System::Xml::CharEntityEncoderFallback* New_ctor();

  /// @brief Method Reset, addr 0x423d4fc, size 0xc, virtual false, abstract: false, final false
  inline void Reset(::ArrayW<int32_t, ::Array<int32_t>*> textContentMarks, int32_t endMarkPos);

  constexpr int32_t const& __cordl_internal_get_curMarkPos() const;

  constexpr int32_t& __cordl_internal_get_curMarkPos();

  constexpr int32_t const& __cordl_internal_get_endMarkPos() const;

  constexpr int32_t& __cordl_internal_get_endMarkPos();

  constexpr ::System::Xml::CharEntityEncoderFallbackBuffer* const& __cordl_internal_get_fallbackBuffer() const;

  constexpr ::System::Xml::CharEntityEncoderFallbackBuffer*& __cordl_internal_get_fallbackBuffer();

  constexpr int32_t const& __cordl_internal_get_startOffset() const;

  constexpr int32_t& __cordl_internal_get_startOffset();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_textContentMarks() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_textContentMarks();

  constexpr void __cordl_internal_set_curMarkPos(int32_t value);

  constexpr void __cordl_internal_set_endMarkPos(int32_t value);

  constexpr void __cordl_internal_set_fallbackBuffer(::System::Xml::CharEntityEncoderFallbackBuffer* value);

  constexpr void __cordl_internal_set_startOffset(int32_t value);

  constexpr void __cordl_internal_set_textContentMarks(::ArrayW<int32_t, ::Array<int32_t>*> value);

  /// @brief Method .ctor, addr 0x423d40c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_MaxCharCount, addr 0x423d4ec, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_MaxCharCount();

  /// @brief Method set_StartOffset, addr 0x423d4f4, size 0x8, virtual false, abstract: false, final false
  inline void set_StartOffset(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CharEntityEncoderFallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CharEntityEncoderFallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CharEntityEncoderFallback(CharEntityEncoderFallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CharEntityEncoderFallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CharEntityEncoderFallback(CharEntityEncoderFallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7174 };

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
static_assert(offsetof(::System::Xml::CharEntityEncoderFallback, ___fallbackBuffer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::CharEntityEncoderFallback, ___textContentMarks) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::CharEntityEncoderFallback, ___endMarkPos) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::CharEntityEncoderFallback, ___curMarkPos) == 0x24, "Offset mismatch!");

static_assert(offsetof(::System::Xml::CharEntityEncoderFallback, ___startOffset) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::CharEntityEncoderFallback, 0x30>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::CharEntityEncoderFallback);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::CharEntityEncoderFallback*, "System.Xml", "CharEntityEncoderFallback");
