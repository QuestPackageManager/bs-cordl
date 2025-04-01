#pragma once
// IWYU pragma private; include "System/Xml/CharEntityEncoderFallbackBuffer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Text/zzzz__EncoderFallbackBuffer_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CharEntityEncoderFallbackBuffer)
namespace System::Xml {
class CharEntityEncoderFallback;
}
// Forward declare root types
namespace System::Xml {
class CharEntityEncoderFallbackBuffer;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::CharEntityEncoderFallbackBuffer);
// Dependencies System.Text.EncoderFallbackBuffer
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.CharEntityEncoderFallbackBuffer
class CORDL_TYPE CharEntityEncoderFallbackBuffer : public ::System::Text::EncoderFallbackBuffer {
public:
  // Declarations
  __declspec(property(get = get_Remaining)) int32_t Remaining;

  /// @brief Field charEntity, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_charEntity, put = __cordl_internal_set_charEntity)) ::StringW charEntity;

  /// @brief Field charEntityIndex, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_charEntityIndex, put = __cordl_internal_set_charEntityIndex)) int32_t charEntityIndex;

  /// @brief Field parent, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_parent, put = __cordl_internal_set_parent)) ::System::Xml::CharEntityEncoderFallback* parent;

  /// @brief Method Fallback, addr 0x423d588, size 0x1f0, virtual true, abstract: false, final false
  inline bool Fallback(char16_t charUnknown, int32_t index);

  /// @brief Method Fallback, addr 0x423d778, size 0x280, virtual true, abstract: false, final false
  inline bool Fallback(char16_t charUnknownHigh, char16_t charUnknownLow, int32_t index);

  /// @brief Method GetNextChar, addr 0x423da08, size 0x58, virtual true, abstract: false, final false
  inline char16_t GetNextChar();

  /// @brief Method MovePrevious, addr 0x423da60, size 0x1c, virtual true, abstract: false, final false
  inline bool MovePrevious();

  static inline ::System::Xml::CharEntityEncoderFallbackBuffer* New_ctor(::System::Xml::CharEntityEncoderFallback* parent);

  /// @brief Method Reset, addr 0x423dab0, size 0xc, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method SurrogateCharToUtf32, addr 0x423d9f8, size 0x10, virtual false, abstract: false, final false
  inline int32_t SurrogateCharToUtf32(char16_t highSurrogate, char16_t lowSurrogate);

  constexpr ::StringW const& __cordl_internal_get_charEntity() const;

  constexpr ::StringW& __cordl_internal_get_charEntity();

  constexpr int32_t const& __cordl_internal_get_charEntityIndex() const;

  constexpr int32_t& __cordl_internal_get_charEntityIndex();

  constexpr ::System::Xml::CharEntityEncoderFallback* const& __cordl_internal_get_parent() const;

  constexpr ::System::Xml::CharEntityEncoderFallback*& __cordl_internal_get_parent();

  constexpr void __cordl_internal_set_charEntity(::StringW value);

  constexpr void __cordl_internal_set_charEntityIndex(int32_t value);

  constexpr void __cordl_internal_set_parent(::System::Xml::CharEntityEncoderFallback* value);

  /// @brief Method .ctor, addr 0x423d478, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::CharEntityEncoderFallback* parent);

  /// @brief Method get_Remaining, addr 0x423da7c, size 0x34, virtual true, abstract: false, final false
  inline int32_t get_Remaining();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CharEntityEncoderFallbackBuffer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CharEntityEncoderFallbackBuffer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CharEntityEncoderFallbackBuffer(CharEntityEncoderFallbackBuffer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CharEntityEncoderFallbackBuffer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CharEntityEncoderFallbackBuffer(CharEntityEncoderFallbackBuffer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7175 };

  /// @brief Field parent, offset: 0x30, size: 0x8, def value: None
  ::System::Xml::CharEntityEncoderFallback* ___parent;

  /// @brief Field charEntity, offset: 0x38, size: 0x8, def value: None
  ::StringW ___charEntity;

  /// @brief Field charEntityIndex, offset: 0x40, size: 0x4, def value: None
  int32_t ___charEntityIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::CharEntityEncoderFallbackBuffer, ___parent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::CharEntityEncoderFallbackBuffer, ___charEntity) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::CharEntityEncoderFallbackBuffer, ___charEntityIndex) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::CharEntityEncoderFallbackBuffer, 0x48>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::CharEntityEncoderFallbackBuffer);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::CharEntityEncoderFallbackBuffer*, "System.Xml", "CharEntityEncoderFallbackBuffer");
