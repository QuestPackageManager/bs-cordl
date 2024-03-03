#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__MonoChunkParser_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MonoChunkParser)
namespace System::Collections {
class ArrayList;
}
namespace System::Net {
class WebHeaderCollection;
}
namespace System::Net {
class __MonoChunkParser__Chunk;
}
namespace System::Net {
struct __MonoChunkParser__State;
}
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace System::Net {
struct __MonoChunkParser__State;
}
namespace System::Net {
class MonoChunkParser;
}
namespace System::Net {
class __MonoChunkParser__Chunk;
}
// Write type traits
MARK_VAL_T(::System::Net::__MonoChunkParser__State);
MARK_REF_PTR_T(::System::Net::MonoChunkParser);
MARK_REF_PTR_T(::System::Net::__MonoChunkParser__Chunk);
// Type: ::State
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: true
// CS Name: ::MonoChunkParser::State
struct CORDL_TYPE __MonoChunkParser__State {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____MonoChunkParser__State_Unwrapped
  enum struct ____MonoChunkParser__State_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_PartialSize = static_cast<int32_t>(0x1),
    __E_Body = static_cast<int32_t>(0x2),
    __E_BodyFinished = static_cast<int32_t>(0x3),
    __E_Trailer = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____MonoChunkParser__State_Unwrapped() const noexcept {
    return static_cast<____MonoChunkParser__State_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MonoChunkParser__State();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __MonoChunkParser__State(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Body value: static_cast<int32_t>(0x2)
  static ::System::Net::__MonoChunkParser__State const Body;

  /// @brief Field BodyFinished value: static_cast<int32_t>(0x3)
  static ::System::Net::__MonoChunkParser__State const BodyFinished;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::System::Net::__MonoChunkParser__State const None;

  /// @brief Field PartialSize value: static_cast<int32_t>(0x1)
  static ::System::Net::__MonoChunkParser__State const PartialSize;

  /// @brief Field Trailer value: static_cast<int32_t>(0x4)
  static ::System::Net::__MonoChunkParser__State const Trailer;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__MonoChunkParser__State, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Net::__MonoChunkParser__State, value__) == 0x0, "Offset mismatch!");

} // namespace System::Net
// Type: ::Chunk
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// CS Name: ::MonoChunkParser::Chunk*
class CORDL_TYPE __MonoChunkParser__Chunk : public ::System::Object {
public:
  // Declarations
  /// @brief Field Bytes, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Bytes, put = __cordl_internal_set_Bytes))::ArrayW<uint8_t, ::Array<uint8_t>*> Bytes;

  /// @brief Field Offset, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_Offset, put = __cordl_internal_set_Offset)) int32_t Offset;

  static inline ::System::Net::__MonoChunkParser__Chunk* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> chunk);

  /// @brief Method Read, addr 0x2ac0938, size 0x60, virtual false, abstract: false, final false
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_Bytes() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_Bytes();

  constexpr int32_t const& __cordl_internal_get_Offset() const;

  constexpr int32_t& __cordl_internal_get_Offset();

  constexpr void __cordl_internal_set_Bytes(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_Offset(int32_t value);

  /// @brief Method .ctor, addr 0x2ac1434, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> chunk);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MonoChunkParser__Chunk();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MonoChunkParser__Chunk", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MonoChunkParser__Chunk(__MonoChunkParser__Chunk&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MonoChunkParser__Chunk", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MonoChunkParser__Chunk(__MonoChunkParser__Chunk const&) = delete;

  /// @brief Field Bytes, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___Bytes;

  /// @brief Field Offset, offset: 0x18, size: 0x4, def value: None
  int32_t ___Offset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__MonoChunkParser__Chunk, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Net::__MonoChunkParser__Chunk, ___Bytes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::__MonoChunkParser__Chunk, ___Offset) == 0x18, "Offset mismatch!");

} // namespace System::Net
// Type: System.Net::MonoChunkParser
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// CS Name: ::System.Net::MonoChunkParser*
class CORDL_TYPE MonoChunkParser : public ::System::Object {
public:
  // Declarations
  using Chunk = ::System::Net::__MonoChunkParser__Chunk;

  using State = ::System::Net::__MonoChunkParser__State;

  __declspec(property(get = get_ChunkLeft)) int32_t ChunkLeft;

  __declspec(property(get = get_DataAvailable)) bool DataAvailable;

  __declspec(property(get = get_WantMore)) bool WantMore;

  /// @brief Field chunkRead, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_chunkRead, put = __cordl_internal_set_chunkRead)) int32_t chunkRead;

  /// @brief Field chunkSize, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_chunkSize, put = __cordl_internal_set_chunkSize)) int32_t chunkSize;

  /// @brief Field chunks, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_chunks, put = __cordl_internal_set_chunks))::System::Collections::ArrayList* chunks;

  /// @brief Field gotit, offset 0x31, size 0x1
  __declspec(property(get = __cordl_internal_get_gotit, put = __cordl_internal_set_gotit)) bool gotit;

  /// @brief Field headers, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_headers, put = __cordl_internal_set_headers))::System::Net::WebHeaderCollection* headers;

  /// @brief Field saved, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_saved, put = __cordl_internal_set_saved))::System::Text::StringBuilder* saved;

  /// @brief Field sawCR, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_sawCR, put = __cordl_internal_set_sawCR)) bool sawCR;

  /// @brief Field state, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_state, put = __cordl_internal_set_state))::System::Net::__MonoChunkParser__State state;

  /// @brief Field totalWritten, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_totalWritten, put = __cordl_internal_set_totalWritten)) int32_t totalWritten;

  /// @brief Field trailerState, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_trailerState, put = __cordl_internal_set_trailerState)) int32_t trailerState;

  /// @brief Method GetChunkSize, addr 0x2ac0af4, size 0x308, virtual false, abstract: false, final false
  inline ::System::Net::__MonoChunkParser__State GetChunkSize(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, ByRef<int32_t> offset, int32_t size);

  /// @brief Method InternalWrite, addr 0x2ac09b8, size 0x13c, virtual false, abstract: false, final false
  inline void InternalWrite(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, ByRef<int32_t> offset, int32_t size);

  static inline ::System::Net::MonoChunkParser* New_ctor(::System::Net::WebHeaderCollection* headers);

  /// @brief Method Read, addr 0x2ac061c, size 0x4, virtual false, abstract: false, final false
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size);

  /// @brief Method ReadBody, addr 0x2ac0dfc, size 0x138, virtual false, abstract: false, final false
  inline ::System::Net::__MonoChunkParser__State ReadBody(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, ByRef<int32_t> offset, int32_t size);

  /// @brief Method ReadCRLF, addr 0x2ac0f34, size 0x100, virtual false, abstract: false, final false
  inline ::System::Net::__MonoChunkParser__State ReadCRLF(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, ByRef<int32_t> offset, int32_t size);

  /// @brief Method ReadFromChunks, addr 0x2ac0620, size 0x318, virtual false, abstract: false, final false
  inline int32_t ReadFromChunks(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size);

  /// @brief Method ReadTrailer, addr 0x2ac1034, size 0x2cc, virtual false, abstract: false, final false
  inline ::System::Net::__MonoChunkParser__State ReadTrailer(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, ByRef<int32_t> offset, int32_t size);

  /// @brief Method RemoveChunkExtension, addr 0x2ac14b4, size 0x48, virtual false, abstract: false, final false
  static inline ::StringW RemoveChunkExtension(::StringW input);

  /// @brief Method ThrowProtocolViolation, addr 0x2ac145c, size 0x58, virtual false, abstract: false, final false
  static inline void ThrowProtocolViolation(::StringW message);

  /// @brief Method Write, addr 0x2ac0998, size 0x20, virtual false, abstract: false, final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size);

  constexpr int32_t const& __cordl_internal_get_chunkRead() const;

  constexpr int32_t& __cordl_internal_get_chunkRead();

  constexpr int32_t const& __cordl_internal_get_chunkSize() const;

  constexpr int32_t& __cordl_internal_get_chunkSize();

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get_chunks();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __cordl_internal_get_chunks() const;

  constexpr bool const& __cordl_internal_get_gotit() const;

  constexpr bool& __cordl_internal_get_gotit();

  constexpr ::System::Net::WebHeaderCollection*& __cordl_internal_get_headers();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::WebHeaderCollection*> const& __cordl_internal_get_headers() const;

  constexpr ::System::Text::StringBuilder*& __cordl_internal_get_saved();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> const& __cordl_internal_get_saved() const;

  constexpr bool const& __cordl_internal_get_sawCR() const;

  constexpr bool& __cordl_internal_get_sawCR();

  constexpr ::System::Net::__MonoChunkParser__State const& __cordl_internal_get_state() const;

  constexpr ::System::Net::__MonoChunkParser__State& __cordl_internal_get_state();

  constexpr int32_t const& __cordl_internal_get_totalWritten() const;

  constexpr int32_t& __cordl_internal_get_totalWritten();

  constexpr int32_t const& __cordl_internal_get_trailerState() const;

  constexpr int32_t& __cordl_internal_get_trailerState();

  constexpr void __cordl_internal_set_chunkRead(int32_t value);

  constexpr void __cordl_internal_set_chunkSize(int32_t value);

  constexpr void __cordl_internal_set_chunks(::System::Collections::ArrayList* value);

  constexpr void __cordl_internal_set_gotit(bool value);

  constexpr void __cordl_internal_set_headers(::System::Net::WebHeaderCollection* value);

  constexpr void __cordl_internal_set_saved(::System::Text::StringBuilder* value);

  constexpr void __cordl_internal_set_sawCR(bool value);

  constexpr void __cordl_internal_set_state(::System::Net::__MonoChunkParser__State value);

  constexpr void __cordl_internal_set_totalWritten(int32_t value);

  constexpr void __cordl_internal_set_trailerState(int32_t value);

  /// @brief Method .ctor, addr 0x2ac0564, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::WebHeaderCollection* headers);

  /// @brief Method get_ChunkLeft, addr 0x2ac1428, size 0xc, virtual false, abstract: false, final false
  inline int32_t get_ChunkLeft();

  /// @brief Method get_DataAvailable, addr 0x2ac1328, size 0x100, virtual false, abstract: false, final false
  inline bool get_DataAvailable();

  /// @brief Method get_WantMore, addr 0x2ac1300, size 0x28, virtual false, abstract: false, final false
  inline bool get_WantMore();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MonoChunkParser();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MonoChunkParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MonoChunkParser(MonoChunkParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MonoChunkParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MonoChunkParser(MonoChunkParser const&) = delete;

  /// @brief Field headers, offset: 0x10, size: 0x8, def value: None
  ::System::Net::WebHeaderCollection* ___headers;

  /// @brief Field chunkSize, offset: 0x18, size: 0x4, def value: None
  int32_t ___chunkSize;

  /// @brief Field chunkRead, offset: 0x1c, size: 0x4, def value: None
  int32_t ___chunkRead;

  /// @brief Field totalWritten, offset: 0x20, size: 0x4, def value: None
  int32_t ___totalWritten;

  /// @brief Field state, offset: 0x24, size: 0x4, def value: None
  ::System::Net::__MonoChunkParser__State ___state;

  /// @brief Field saved, offset: 0x28, size: 0x8, def value: None
  ::System::Text::StringBuilder* ___saved;

  /// @brief Field sawCR, offset: 0x30, size: 0x1, def value: None
  bool ___sawCR;

  /// @brief Field gotit, offset: 0x31, size: 0x1, def value: None
  bool ___gotit;

  /// @brief Field trailerState, offset: 0x34, size: 0x4, def value: None
  int32_t ___trailerState;

  /// @brief Field chunks, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::ArrayList* ___chunks;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::MonoChunkParser, 0x40>, "Size mismatch!");

static_assert(offsetof(::System::Net::MonoChunkParser, ___headers) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::MonoChunkParser, ___chunkSize) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::MonoChunkParser, ___chunkRead) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Net::MonoChunkParser, ___totalWritten) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::MonoChunkParser, ___state) == 0x24, "Offset mismatch!");

static_assert(offsetof(::System::Net::MonoChunkParser, ___saved) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::MonoChunkParser, ___sawCR) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::MonoChunkParser, ___gotit) == 0x31, "Offset mismatch!");

static_assert(offsetof(::System::Net::MonoChunkParser, ___trailerState) == 0x34, "Offset mismatch!");

static_assert(offsetof(::System::Net::MonoChunkParser, ___chunks) == 0x38, "Offset mismatch!");

} // namespace System::Net
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__MonoChunkParser__State, "System.Net", "MonoChunkParser/State");
NEED_NO_BOX(::System::Net::MonoChunkParser);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::MonoChunkParser*, "System.Net", "MonoChunkParser");
NEED_NO_BOX(::System::Net::__MonoChunkParser__Chunk);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__MonoChunkParser__Chunk*, "System.Net", "MonoChunkParser/Chunk");
