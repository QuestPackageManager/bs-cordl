#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Base64Encoder)
// Forward declare root types
namespace System::Xml {
class Base64Encoder;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Base64Encoder);
// Type: System.Xml::Base64Encoder
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// CS Name: ::System.Xml::Base64Encoder*
class CORDL_TYPE Base64Encoder : public ::System::Object {
public:
  // Declarations
  /// @brief Field charsLine, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_charsLine, put = __cordl_internal_set_charsLine))::ArrayW<char16_t, ::Array<char16_t>*> charsLine;

  /// @brief Field leftOverBytes, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_leftOverBytes, put = __cordl_internal_set_leftOverBytes))::ArrayW<uint8_t, ::Array<uint8_t>*> leftOverBytes;

  /// @brief Field leftOverBytesCount, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_leftOverBytesCount, put = __cordl_internal_set_leftOverBytesCount)) int32_t leftOverBytesCount;

  /// @brief Method Encode, addr 0x29362c4, size 0x334, virtual false, abstract: false, final false
  inline void Encode(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method Flush, addr 0x29365f8, size 0xa8, virtual false, abstract: false, final false
  inline void Flush();

  static inline ::System::Xml::Base64Encoder* New_ctor();

  /// @brief Method WriteChars, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void WriteChars(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t index, int32_t count);

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __cordl_internal_get_charsLine() const;

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __cordl_internal_get_charsLine();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_leftOverBytes() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_leftOverBytes();

  constexpr int32_t const& __cordl_internal_get_leftOverBytesCount() const;

  constexpr int32_t& __cordl_internal_get_leftOverBytesCount();

  constexpr void __cordl_internal_set_charsLine(::ArrayW<char16_t, ::Array<char16_t>*> value);

  constexpr void __cordl_internal_set_leftOverBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_leftOverBytesCount(int32_t value);

  /// @brief Method .ctor, addr 0x2936268, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Base64Encoder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Base64Encoder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Base64Encoder(Base64Encoder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Base64Encoder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Base64Encoder(Base64Encoder const&) = delete;

  /// @brief Field leftOverBytes, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___leftOverBytes;

  /// @brief Field leftOverBytesCount, offset: 0x18, size: 0x4, def value: None
  int32_t ___leftOverBytesCount;

  /// @brief Field charsLine, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<char16_t, ::Array<char16_t>*> ___charsLine;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Base64Encoder, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Base64Encoder, ___leftOverBytes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Base64Encoder, ___leftOverBytesCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Base64Encoder, ___charsLine) == 0x20, "Offset mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::Base64Encoder);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Base64Encoder*, "System.Xml", "Base64Encoder");
