#pragma once
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
// Type: System.Xml::CharEntityEncoderFallbackBuffer
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 68, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2845))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11412))
// CS Name: ::System.Xml::CharEntityEncoderFallbackBuffer*
class CORDL_TYPE CharEntityEncoderFallbackBuffer : public ::System::Text::EncoderFallbackBuffer {
public:
  // Declarations
  /// @brief Field parent, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_parent, put = __cordl_internal_set_parent))::System::Xml::CharEntityEncoderFallback* parent;

  /// @brief Field charEntity, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_charEntity, put = __cordl_internal_set_charEntity))::StringW charEntity;

  /// @brief Field charEntityIndex, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_charEntityIndex, put = __cordl_internal_set_charEntityIndex)) int32_t charEntityIndex;

  __declspec(property(get = get_Remaining)) int32_t Remaining;

  constexpr ::System::Xml::CharEntityEncoderFallback*& __cordl_internal_get_parent();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::CharEntityEncoderFallback*> const& __cordl_internal_get_parent() const;

  constexpr void __cordl_internal_set_parent(::System::Xml::CharEntityEncoderFallback* value);

  constexpr ::StringW& __cordl_internal_get_charEntity();

  constexpr ::StringW const& __cordl_internal_get_charEntity() const;

  constexpr void __cordl_internal_set_charEntity(::StringW value);

  constexpr int32_t& __cordl_internal_get_charEntityIndex();

  constexpr int32_t const& __cordl_internal_get_charEntityIndex() const;

  constexpr void __cordl_internal_set_charEntityIndex(int32_t value);

  static inline ::System::Xml::CharEntityEncoderFallbackBuffer* New_ctor(::System::Xml::CharEntityEncoderFallback* parent);

  /// @brief Method .ctor, addr 0x284ea30, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::CharEntityEncoderFallback* parent);

  /// @brief Method Fallback, addr 0x284eb28, size 0x1f0, virtual true, abstract: false, final false
  inline bool Fallback(char16_t charUnknown, int32_t index);

  /// @brief Method Fallback, addr 0x284ed18, size 0x280, virtual true, abstract: false, final false
  inline bool Fallback(char16_t charUnknownHigh, char16_t charUnknownLow, int32_t index);

  /// @brief Method GetNextChar, addr 0x284efa8, size 0x58, virtual true, abstract: false, final false
  inline char16_t GetNextChar();

  /// @brief Method MovePrevious, addr 0x284f000, size 0x20, virtual true, abstract: false, final false
  inline bool MovePrevious();

  /// @brief Method get_Remaining, addr 0x284f020, size 0x34, virtual true, abstract: false, final false
  inline int32_t get_Remaining();

  /// @brief Method Reset, addr 0x284f054, size 0xc, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method SurrogateCharToUtf32, addr 0x284ef98, size 0x10, virtual false, abstract: false, final false
  inline int32_t SurrogateCharToUtf32(char16_t highSurrogate, char16_t lowSurrogate);

  // Ctor Parameters [CppParam { name: "", ty: "CharEntityEncoderFallbackBuffer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CharEntityEncoderFallbackBuffer(CharEntityEncoderFallbackBuffer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CharEntityEncoderFallbackBuffer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CharEntityEncoderFallbackBuffer(CharEntityEncoderFallbackBuffer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CharEntityEncoderFallbackBuffer();

public:
  /// @brief Field parent, offset: 0x30, size: 0x8, def value: None
  ::System::Xml::CharEntityEncoderFallback* ___parent;

  /// @brief Field charEntity, offset: 0x38, size: 0x8, def value: None
  ::StringW ___charEntity;

  /// @brief Field charEntityIndex, offset: 0x40, size: 0x4, def value: None
  int32_t ___charEntityIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::CharEntityEncoderFallbackBuffer, 0x48>, "Size mismatch!");

static_assert(offsetof(::System::Xml::CharEntityEncoderFallbackBuffer, ___parent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::CharEntityEncoderFallbackBuffer, ___charEntity) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::CharEntityEncoderFallbackBuffer, ___charEntityIndex) == 0x40, "Offset mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::CharEntityEncoderFallbackBuffer);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::CharEntityEncoderFallbackBuffer*, "System.Xml", "CharEntityEncoderFallbackBuffer");
