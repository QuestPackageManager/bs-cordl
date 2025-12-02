#pragma once
// IWYU pragma private; include "System/Xml/ReadContentAsBinaryHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReadContentAsBinaryHelper)
namespace System::Xml {
class Base64Decoder;
}
namespace System::Xml {
class BinHexDecoder;
}
namespace System::Xml {
class IncrementalReadDecoder;
}
namespace System::Xml {
struct ReadContentAsBinaryHelper_State;
}
namespace System::Xml {
class XmlReader;
}
// Forward declare root types
namespace System::Xml {
struct ReadContentAsBinaryHelper_State;
}
namespace System::Xml {
class ReadContentAsBinaryHelper;
}
// Write type traits
MARK_VAL_T(::System::Xml::ReadContentAsBinaryHelper_State);
MARK_REF_PTR_T(::System::Xml::ReadContentAsBinaryHelper);
// Dependencies
namespace System::Xml {
// Is value type: true
// CS Name: System.Xml.ReadContentAsBinaryHelper/State
struct CORDL_TYPE ReadContentAsBinaryHelper_State {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ReadContentAsBinaryHelper_State_Unwrapped
  enum struct __ReadContentAsBinaryHelper_State_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_InReadContent = static_cast<int32_t>(0x1),
    __E_InReadElementContent = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ReadContentAsBinaryHelper_State_Unwrapped() const noexcept {
    return static_cast<__ReadContentAsBinaryHelper_State_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ReadContentAsBinaryHelper_State();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ReadContentAsBinaryHelper_State(int32_t value__) noexcept;

  /// @brief Field InReadContent value: I32(1)
  static ::System::Xml::ReadContentAsBinaryHelper_State const InReadContent;

  /// @brief Field InReadElementContent value: I32(2)
  static ::System::Xml::ReadContentAsBinaryHelper_State const InReadElementContent;

  /// @brief Field None value: I32(0)
  static ::System::Xml::ReadContentAsBinaryHelper_State const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9263 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::ReadContentAsBinaryHelper_State, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::ReadContentAsBinaryHelper_State, 0x4>, "Size mismatch!");

} // namespace System::Xml
// Dependencies System.Object, System.Xml.ReadContentAsBinaryHelper::State
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.ReadContentAsBinaryHelper
class CORDL_TYPE ReadContentAsBinaryHelper : public ::System::Object {
public:
  // Declarations
  using State = ::System::Xml::ReadContentAsBinaryHelper_State;

  /// @brief Field base64Decoder, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_base64Decoder, put = __cordl_internal_set_base64Decoder)) ::System::Xml::Base64Decoder* base64Decoder;

  /// @brief Field binHexDecoder, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_binHexDecoder, put = __cordl_internal_set_binHexDecoder)) ::System::Xml::BinHexDecoder* binHexDecoder;

  /// @brief Field canReadValueChunk, offset 0x21, size 0x1
  __declspec(property(get = __cordl_internal_get_canReadValueChunk, put = __cordl_internal_set_canReadValueChunk)) bool canReadValueChunk;

  /// @brief Field decoder, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_decoder, put = __cordl_internal_set_decoder)) ::System::Xml::IncrementalReadDecoder* decoder;

  /// @brief Field isEnd, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_isEnd, put = __cordl_internal_set_isEnd)) bool isEnd;

  /// @brief Field reader, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_reader, put = __cordl_internal_set_reader)) ::System::Xml::XmlReader* reader;

  /// @brief Field state, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_state, put = __cordl_internal_set_state)) ::System::Xml::ReadContentAsBinaryHelper_State state;

  /// @brief Field valueChunk, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_valueChunk, put = __cordl_internal_set_valueChunk)) ::ArrayW<char16_t, ::Array<char16_t>*> valueChunk;

  /// @brief Field valueChunkLength, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_valueChunkLength, put = __cordl_internal_set_valueChunkLength)) int32_t valueChunkLength;

  /// @brief Field valueOffset, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_valueOffset, put = __cordl_internal_set_valueOffset)) int32_t valueOffset;

  /// @brief Method CreateOrReset, addr 0x5f96018, size 0x78, virtual false, abstract: false, final false
  static inline ::System::Xml::ReadContentAsBinaryHelper* CreateOrReset(::System::Xml::ReadContentAsBinaryHelper* helper, ::System::Xml::XmlReader* reader);

  /// @brief Method Finish, addr 0x5f966dc, size 0x148, virtual false, abstract: false, final false
  inline void Finish();

  /// @brief Method Init, addr 0x5f96280, size 0x2c, virtual false, abstract: false, final false
  inline bool Init();

  /// @brief Method InitBase64Decoder, addr 0x5f96414, size 0x70, virtual false, abstract: false, final false
  inline void InitBase64Decoder();

  /// @brief Method InitBinHexDecoder, addr 0x5f9666c, size 0x70, virtual false, abstract: false, final false
  inline void InitBinHexDecoder();

  /// @brief Method MoveToNextContentNode, addr 0x5f96824, size 0xf4, virtual false, abstract: false, final false
  inline bool MoveToNextContentNode(bool moveIfOnContentNode);

  static inline ::System::Xml::ReadContentAsBinaryHelper* New_ctor(::System::Xml::XmlReader* reader);

  /// @brief Method ReadContentAsBase64, addr 0x5f9609c, size 0x1e4, virtual false, abstract: false, final false
  inline int32_t ReadContentAsBase64(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method ReadContentAsBinHex, addr 0x5f96484, size 0x1e8, virtual false, abstract: false, final false
  inline int32_t ReadContentAsBinHex(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method ReadContentAsBinary, addr 0x5f962ac, size 0x168, virtual false, abstract: false, final false
  inline int32_t ReadContentAsBinary(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method Reset, addr 0x5f96090, size 0xc, virtual false, abstract: false, final false
  inline void Reset();

  constexpr ::System::Xml::Base64Decoder* const& __cordl_internal_get_base64Decoder() const;

  constexpr ::System::Xml::Base64Decoder*& __cordl_internal_get_base64Decoder();

  constexpr ::System::Xml::BinHexDecoder* const& __cordl_internal_get_binHexDecoder() const;

  constexpr ::System::Xml::BinHexDecoder*& __cordl_internal_get_binHexDecoder();

  constexpr bool const& __cordl_internal_get_canReadValueChunk() const;

  constexpr bool& __cordl_internal_get_canReadValueChunk();

  constexpr ::System::Xml::IncrementalReadDecoder* const& __cordl_internal_get_decoder() const;

  constexpr ::System::Xml::IncrementalReadDecoder*& __cordl_internal_get_decoder();

  constexpr bool const& __cordl_internal_get_isEnd() const;

  constexpr bool& __cordl_internal_get_isEnd();

  constexpr ::System::Xml::XmlReader* const& __cordl_internal_get_reader() const;

  constexpr ::System::Xml::XmlReader*& __cordl_internal_get_reader();

  constexpr ::System::Xml::ReadContentAsBinaryHelper_State const& __cordl_internal_get_state() const;

  constexpr ::System::Xml::ReadContentAsBinaryHelper_State& __cordl_internal_get_state();

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __cordl_internal_get_valueChunk() const;

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __cordl_internal_get_valueChunk();

  constexpr int32_t const& __cordl_internal_get_valueChunkLength() const;

  constexpr int32_t& __cordl_internal_get_valueChunkLength();

  constexpr int32_t const& __cordl_internal_get_valueOffset() const;

  constexpr int32_t& __cordl_internal_get_valueOffset();

  constexpr void __cordl_internal_set_base64Decoder(::System::Xml::Base64Decoder* value);

  constexpr void __cordl_internal_set_binHexDecoder(::System::Xml::BinHexDecoder* value);

  constexpr void __cordl_internal_set_canReadValueChunk(bool value);

  constexpr void __cordl_internal_set_decoder(::System::Xml::IncrementalReadDecoder* value);

  constexpr void __cordl_internal_set_isEnd(bool value);

  constexpr void __cordl_internal_set_reader(::System::Xml::XmlReader* value);

  constexpr void __cordl_internal_set_state(::System::Xml::ReadContentAsBinaryHelper_State value);

  constexpr void __cordl_internal_set_valueChunk(::ArrayW<char16_t, ::Array<char16_t>*> value);

  constexpr void __cordl_internal_set_valueChunkLength(int32_t value);

  constexpr void __cordl_internal_set_valueOffset(int32_t value);

  /// @brief Method .ctor, addr 0x5f95f8c, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlReader* reader);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReadContentAsBinaryHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReadContentAsBinaryHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReadContentAsBinaryHelper(ReadContentAsBinaryHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReadContentAsBinaryHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReadContentAsBinaryHelper(ReadContentAsBinaryHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9264 };

  /// @brief Field reader, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::XmlReader* ___reader;

  /// @brief Field state, offset: 0x18, size: 0x4, def value: None
  ::System::Xml::ReadContentAsBinaryHelper_State ___state;

  /// @brief Field valueOffset, offset: 0x1c, size: 0x4, def value: None
  int32_t ___valueOffset;

  /// @brief Field isEnd, offset: 0x20, size: 0x1, def value: None
  bool ___isEnd;

  /// @brief Field canReadValueChunk, offset: 0x21, size: 0x1, def value: None
  bool ___canReadValueChunk;

  /// @brief Field valueChunk, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<char16_t, ::Array<char16_t>*> ___valueChunk;

  /// @brief Field valueChunkLength, offset: 0x30, size: 0x4, def value: None
  int32_t ___valueChunkLength;

  /// @brief Field decoder, offset: 0x38, size: 0x8, def value: None
  ::System::Xml::IncrementalReadDecoder* ___decoder;

  /// @brief Field base64Decoder, offset: 0x40, size: 0x8, def value: None
  ::System::Xml::Base64Decoder* ___base64Decoder;

  /// @brief Field binHexDecoder, offset: 0x48, size: 0x8, def value: None
  ::System::Xml::BinHexDecoder* ___binHexDecoder;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::ReadContentAsBinaryHelper, ___reader) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::ReadContentAsBinaryHelper, ___state) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::ReadContentAsBinaryHelper, ___valueOffset) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::ReadContentAsBinaryHelper, ___isEnd) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::ReadContentAsBinaryHelper, ___canReadValueChunk) == 0x21, "Offset mismatch!");

static_assert(offsetof(::System::Xml::ReadContentAsBinaryHelper, ___valueChunk) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::ReadContentAsBinaryHelper, ___valueChunkLength) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::ReadContentAsBinaryHelper, ___decoder) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::ReadContentAsBinaryHelper, ___base64Decoder) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Xml::ReadContentAsBinaryHelper, ___binHexDecoder) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::ReadContentAsBinaryHelper, 0x50>, "Size mismatch!");

} // namespace System::Xml
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::ReadContentAsBinaryHelper_State, "System.Xml", "ReadContentAsBinaryHelper/State");
NEED_NO_BOX(::System::Xml::ReadContentAsBinaryHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::ReadContentAsBinaryHelper*, "System.Xml", "ReadContentAsBinaryHelper");
