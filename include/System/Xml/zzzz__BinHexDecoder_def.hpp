#pragma once
// IWYU pragma private; include "System/Xml/BinHexDecoder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__IncrementalReadDecoder_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BinHexDecoder)
namespace System {
class Array;
}
// Forward declare root types
namespace System::Xml {
class BinHexDecoder;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::BinHexDecoder);
// Dependencies System.Xml.IncrementalReadDecoder
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.BinHexDecoder
class CORDL_TYPE BinHexDecoder : public ::System::Xml::IncrementalReadDecoder {
public:
  // Declarations
  __declspec(property(get = get_DecodedCount)) int32_t DecodedCount;

  __declspec(property(get = get_IsFull)) bool IsFull;

  /// @brief Field buffer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_buffer, put = __cordl_internal_set_buffer)) ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer;

  /// @brief Field cachedHalfByte, offset 0x25, size 0x1
  __declspec(property(get = __cordl_internal_get_cachedHalfByte, put = __cordl_internal_set_cachedHalfByte)) uint8_t cachedHalfByte;

  /// @brief Field curIndex, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_curIndex, put = __cordl_internal_set_curIndex)) int32_t curIndex;

  /// @brief Field endIndex, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_endIndex, put = __cordl_internal_set_endIndex)) int32_t endIndex;

  /// @brief Field hasHalfByteCached, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get_hasHalfByteCached, put = __cordl_internal_set_hasHalfByteCached)) bool hasHalfByteCached;

  /// @brief Field startIndex, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_startIndex, put = __cordl_internal_set_startIndex)) int32_t startIndex;

  /// @brief Method Decode, addr 0x5fde594, size 0x1dc, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Decode(::ArrayW<char16_t, ::Array<char16_t>*> chars, bool allowOddChars);

  /// @brief Method Decode, addr 0x5fde098, size 0x150, virtual true, abstract: false, final false
  inline int32_t Decode(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t startPos, int32_t len);

  /// @brief Method Decode, addr 0x5fde394, size 0x14c, virtual true, abstract: false, final false
  inline int32_t Decode(::StringW str, int32_t startPos, int32_t len);

  /// @brief Method Decode, addr 0x5fde1e8, size 0x1ac, virtual false, abstract: false, final false
  static inline void Decode(char16_t* pChars, char16_t* pCharsEndPos, uint8_t* pBytes, uint8_t* pBytesEndPos, ::ByRef<bool> hasHalfByteCached, ::ByRef<uint8_t> cachedHalfByte,
                            ::ByRef<int32_t> charsDecoded, ::ByRef<int32_t> bytesDecoded);

  static inline ::System::Xml::BinHexDecoder* New_ctor();

  /// @brief Method Reset, addr 0x5fde4e0, size 0x8, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method SetNextOutputBuffer, addr 0x5fde4e8, size 0xac, virtual true, abstract: false, final false
  inline void SetNextOutputBuffer(::System::Array* buffer, int32_t index, int32_t count);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_buffer() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_buffer();

  constexpr uint8_t const& __cordl_internal_get_cachedHalfByte() const;

  constexpr uint8_t& __cordl_internal_get_cachedHalfByte();

  constexpr int32_t const& __cordl_internal_get_curIndex() const;

  constexpr int32_t& __cordl_internal_get_curIndex();

  constexpr int32_t const& __cordl_internal_get_endIndex() const;

  constexpr int32_t& __cordl_internal_get_endIndex();

  constexpr bool const& __cordl_internal_get_hasHalfByteCached() const;

  constexpr bool& __cordl_internal_get_hasHalfByteCached();

  constexpr int32_t const& __cordl_internal_get_startIndex() const;

  constexpr int32_t& __cordl_internal_get_startIndex();

  constexpr void __cordl_internal_set_buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_cachedHalfByte(uint8_t value);

  constexpr void __cordl_internal_set_curIndex(int32_t value);

  constexpr void __cordl_internal_set_endIndex(int32_t value);

  constexpr void __cordl_internal_set_hasHalfByteCached(bool value);

  constexpr void __cordl_internal_set_startIndex(int32_t value);

  /// @brief Method .ctor, addr 0x5fde770, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_DecodedCount, addr 0x5fde07c, size 0xc, virtual true, abstract: false, final false
  inline int32_t get_DecodedCount();

  /// @brief Method get_IsFull, addr 0x5fde088, size 0x10, virtual true, abstract: false, final false
  inline bool get_IsFull();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BinHexDecoder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BinHexDecoder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BinHexDecoder(BinHexDecoder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BinHexDecoder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BinHexDecoder(BinHexDecoder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9224 };

  /// @brief Field buffer, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___buffer;

  /// @brief Field startIndex, offset: 0x18, size: 0x4, def value: None
  int32_t ___startIndex;

  /// @brief Field curIndex, offset: 0x1c, size: 0x4, def value: None
  int32_t ___curIndex;

  /// @brief Field endIndex, offset: 0x20, size: 0x4, def value: None
  int32_t ___endIndex;

  /// @brief Field hasHalfByteCached, offset: 0x24, size: 0x1, def value: None
  bool ___hasHalfByteCached;

  /// @brief Field cachedHalfByte, offset: 0x25, size: 0x1, def value: None
  uint8_t ___cachedHalfByte;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::BinHexDecoder, ___buffer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::BinHexDecoder, ___startIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::BinHexDecoder, ___curIndex) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::BinHexDecoder, ___endIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::BinHexDecoder, ___hasHalfByteCached) == 0x24, "Offset mismatch!");

static_assert(offsetof(::System::Xml::BinHexDecoder, ___cachedHalfByte) == 0x25, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::BinHexDecoder, 0x28>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::BinHexDecoder);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::BinHexDecoder*, "System.Xml", "BinHexDecoder");
