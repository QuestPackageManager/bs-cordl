#pragma once
// IWYU pragma private; include "System/Net/ChunkedInputStream.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__RequestStream_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ChunkedInputStream)
namespace System::IO {
class Stream;
}
namespace System::Net {
class ChunkedInputStream_ReadBufferState;
}
namespace System::Net {
class HttpListenerContext;
}
namespace System::Net {
class HttpStreamAsyncResult;
}
namespace System::Net {
class MonoChunkParser;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net {
class ChunkedInputStream;
}
namespace System::Net {
class ChunkedInputStream_ReadBufferState;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::ChunkedInputStream);
MARK_REF_PTR_T(::System::Net::ChunkedInputStream_ReadBufferState);
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.ChunkedInputStream/ReadBufferState
class CORDL_TYPE ChunkedInputStream_ReadBufferState : public ::System::Object {
public:
  // Declarations
  /// @brief Field Ares, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_Ares, put = __cordl_internal_set_Ares)) ::System::Net::HttpStreamAsyncResult* Ares;

  /// @brief Field Buffer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Buffer, put = __cordl_internal_set_Buffer)) ::ArrayW<uint8_t, ::Array<uint8_t>*> Buffer;

  /// @brief Field Count, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_Count, put = __cordl_internal_set_Count)) int32_t Count;

  /// @brief Field InitialCount, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_InitialCount, put = __cordl_internal_set_InitialCount)) int32_t InitialCount;

  /// @brief Field Offset, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_Offset, put = __cordl_internal_set_Offset)) int32_t Offset;

  static inline ::System::Net::ChunkedInputStream_ReadBufferState* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::Net::HttpStreamAsyncResult* ares);

  constexpr ::System::Net::HttpStreamAsyncResult* const& __cordl_internal_get_Ares() const;

  constexpr ::System::Net::HttpStreamAsyncResult*& __cordl_internal_get_Ares();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_Buffer() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_Buffer();

  constexpr int32_t const& __cordl_internal_get_Count() const;

  constexpr int32_t& __cordl_internal_get_Count();

  constexpr int32_t const& __cordl_internal_get_InitialCount() const;

  constexpr int32_t& __cordl_internal_get_InitialCount();

  constexpr int32_t const& __cordl_internal_get_Offset() const;

  constexpr int32_t& __cordl_internal_get_Offset();

  constexpr void __cordl_internal_set_Ares(::System::Net::HttpStreamAsyncResult* value);

  constexpr void __cordl_internal_set_Buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_Count(int32_t value);

  constexpr void __cordl_internal_set_InitialCount(int32_t value);

  constexpr void __cordl_internal_set_Offset(int32_t value);

  /// @brief Method .ctor, addr 0x44bcc98, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::Net::HttpStreamAsyncResult* ares);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ChunkedInputStream_ReadBufferState();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ChunkedInputStream_ReadBufferState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ChunkedInputStream_ReadBufferState(ChunkedInputStream_ReadBufferState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ChunkedInputStream_ReadBufferState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ChunkedInputStream_ReadBufferState(ChunkedInputStream_ReadBufferState const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9674 };

  /// @brief Field Buffer, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___Buffer;

  /// @brief Field Offset, offset: 0x18, size: 0x4, def value: None
  int32_t ___Offset;

  /// @brief Field Count, offset: 0x1c, size: 0x4, def value: None
  int32_t ___Count;

  /// @brief Field InitialCount, offset: 0x20, size: 0x4, def value: None
  int32_t ___InitialCount;

  /// @brief Field Ares, offset: 0x28, size: 0x8, def value: None
  ::System::Net::HttpStreamAsyncResult* ___Ares;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::ChunkedInputStream_ReadBufferState, ___Buffer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::ChunkedInputStream_ReadBufferState, ___Offset) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::ChunkedInputStream_ReadBufferState, ___Count) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Net::ChunkedInputStream_ReadBufferState, ___InitialCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::ChunkedInputStream_ReadBufferState, ___Ares) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::ChunkedInputStream_ReadBufferState, 0x30>, "Size mismatch!");

} // namespace System::Net
// Dependencies System.Net.RequestStream
namespace System::Net {
// Is value type: false
// CS Name: System.Net.ChunkedInputStream
class CORDL_TYPE ChunkedInputStream : public ::System::Net::RequestStream {
public:
  // Declarations
  using ReadBufferState = ::System::Net::ChunkedInputStream_ReadBufferState;

  /// @brief Field context, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_context, put = __cordl_internal_set_context)) ::System::Net::HttpListenerContext* context;

  /// @brief Field decoder, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_decoder, put = __cordl_internal_set_decoder)) ::System::Net::MonoChunkParser* decoder;

  /// @brief Field disposed, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_disposed, put = __cordl_internal_set_disposed)) bool disposed;

  /// @brief Field no_more_data, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get_no_more_data, put = __cordl_internal_set_no_more_data)) bool no_more_data;

  /// @brief Method BeginRead, addr 0x44bc9ac, size 0x2ec, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginRead(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::AsyncCallback* cback, ::System::Object* state);

  /// @brief Method Close, addr 0x44bd4e8, size 0x1c, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method EndRead, addr 0x44bd25c, size 0x28c, virtual true, abstract: false, final false
  inline int32_t EndRead(::System::IAsyncResult* ares);

  static inline ::System::Net::ChunkedInputStream* New_ctor(::System::Net::HttpListenerContext* context, ::System::IO::Stream* stream, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset,
                                                            int32_t length);

  /// @brief Method OnRead, addr 0x44bcce0, size 0x3a0, virtual false, abstract: false, final false
  inline void OnRead(::System::IAsyncResult* base_ares);

  /// @brief Method Read, addr 0x44bc970, size 0x3c, virtual true, abstract: false, final false
  inline int32_t Read(::ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> buffer, int32_t offset, int32_t count);

  constexpr ::System::Net::HttpListenerContext* const& __cordl_internal_get_context() const;

  constexpr ::System::Net::HttpListenerContext*& __cordl_internal_get_context();

  constexpr ::System::Net::MonoChunkParser* const& __cordl_internal_get_decoder() const;

  constexpr ::System::Net::MonoChunkParser*& __cordl_internal_get_decoder();

  constexpr bool const& __cordl_internal_get_disposed() const;

  constexpr bool& __cordl_internal_get_disposed();

  constexpr bool const& __cordl_internal_get_no_more_data() const;

  constexpr bool& __cordl_internal_get_no_more_data();

  constexpr void __cordl_internal_set_context(::System::Net::HttpListenerContext* value);

  constexpr void __cordl_internal_set_decoder(::System::Net::MonoChunkParser* value);

  constexpr void __cordl_internal_set_disposed(bool value);

  constexpr void __cordl_internal_set_no_more_data(bool value);

  /// @brief Method .ctor, addr 0x44bc870, size 0x100, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::HttpListenerContext* context, ::System::IO::Stream* stream, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t length);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ChunkedInputStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ChunkedInputStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ChunkedInputStream(ChunkedInputStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ChunkedInputStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ChunkedInputStream(ChunkedInputStream const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9675 };

  /// @brief Field disposed, offset: 0x50, size: 0x1, def value: None
  bool ___disposed;

  /// @brief Field decoder, offset: 0x58, size: 0x8, def value: None
  ::System::Net::MonoChunkParser* ___decoder;

  /// @brief Field context, offset: 0x60, size: 0x8, def value: None
  ::System::Net::HttpListenerContext* ___context;

  /// @brief Field no_more_data, offset: 0x68, size: 0x1, def value: None
  bool ___no_more_data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::ChunkedInputStream, ___disposed) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Net::ChunkedInputStream, ___decoder) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Net::ChunkedInputStream, ___context) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Net::ChunkedInputStream, ___no_more_data) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::ChunkedInputStream, 0x70>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::ChunkedInputStream);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::ChunkedInputStream*, "System.Net", "ChunkedInputStream");
NEED_NO_BOX(::System::Net::ChunkedInputStream_ReadBufferState);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::ChunkedInputStream_ReadBufferState*, "System.Net", "ChunkedInputStream/ReadBufferState");
