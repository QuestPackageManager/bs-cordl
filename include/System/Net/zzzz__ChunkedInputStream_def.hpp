#pragma once
// IWYU pragma private; include "System/Net/ChunkedInputStream.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__RequestStream_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ChunkedInputStream)
namespace System::IO {
class Stream;
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
namespace System::Net {
class __ChunkedInputStream__ReadBufferState;
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
class __ChunkedInputStream__ReadBufferState;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::ChunkedInputStream);
MARK_REF_PTR_T(::System::Net::__ChunkedInputStream__ReadBufferState);
// Type: ::ReadBufferState
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// CS Name: ::ChunkedInputStream::ReadBufferState*
class CORDL_TYPE __ChunkedInputStream__ReadBufferState : public ::System::Object {
public:
  // Declarations
  /// @brief Field Ares, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_Ares, put = __cordl_internal_set_Ares))::System::Net::HttpStreamAsyncResult* Ares;

  /// @brief Field Buffer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Buffer, put = __cordl_internal_set_Buffer))::ArrayW<uint8_t, ::Array<uint8_t>*> Buffer;

  /// @brief Field Count, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_Count, put = __cordl_internal_set_Count)) int32_t Count;

  /// @brief Field InitialCount, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_InitialCount, put = __cordl_internal_set_InitialCount)) int32_t InitialCount;

  /// @brief Field Offset, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_Offset, put = __cordl_internal_set_Offset)) int32_t Offset;

  static inline ::System::Net::__ChunkedInputStream__ReadBufferState* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::Net::HttpStreamAsyncResult* ares);

  constexpr ::System::Net::HttpStreamAsyncResult*& __cordl_internal_get_Ares();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::HttpStreamAsyncResult*> const& __cordl_internal_get_Ares() const;

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

  /// @brief Method .ctor, addr 0x2ff2bf0, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::Net::HttpStreamAsyncResult* ares);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ChunkedInputStream__ReadBufferState();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ChunkedInputStream__ReadBufferState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ChunkedInputStream__ReadBufferState(__ChunkedInputStream__ReadBufferState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ChunkedInputStream__ReadBufferState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ChunkedInputStream__ReadBufferState(__ChunkedInputStream__ReadBufferState const&) = delete;

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
static_assert(::cordl_internals::size_check_v<::System::Net::__ChunkedInputStream__ReadBufferState, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Net::__ChunkedInputStream__ReadBufferState, ___Buffer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::__ChunkedInputStream__ReadBufferState, ___Offset) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::__ChunkedInputStream__ReadBufferState, ___Count) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Net::__ChunkedInputStream__ReadBufferState, ___InitialCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::__ChunkedInputStream__ReadBufferState, ___Ares) == 0x28, "Offset mismatch!");

} // namespace System::Net
// Type: System.Net::ChunkedInputStream
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 105, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// CS Name: ::System.Net::ChunkedInputStream*
class CORDL_TYPE ChunkedInputStream : public ::System::Net::RequestStream {
public:
  // Declarations
  using ReadBufferState = ::System::Net::__ChunkedInputStream__ReadBufferState;

  /// @brief Field context, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_context, put = __cordl_internal_set_context))::System::Net::HttpListenerContext* context;

  /// @brief Field decoder, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_decoder, put = __cordl_internal_set_decoder))::System::Net::MonoChunkParser* decoder;

  /// @brief Field disposed, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_disposed, put = __cordl_internal_set_disposed)) bool disposed;

  /// @brief Field no_more_data, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get_no_more_data, put = __cordl_internal_set_no_more_data)) bool no_more_data;

  /// @brief Method BeginRead, addr 0x2ff2780, size 0x308, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginRead(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::AsyncCallback* cback, ::System::Object* state);

  /// @brief Method Close, addr 0x2ff345c, size 0x1c, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method EndRead, addr 0x2ff31bc, size 0x2a0, virtual true, abstract: false, final false
  inline int32_t EndRead(::System::IAsyncResult* ares);

  static inline ::System::Net::ChunkedInputStream* New_ctor(::System::Net::HttpListenerContext* context, ::System::IO::Stream* stream, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset,
                                                            int32_t length);

  /// @brief Method OnRead, addr 0x2ff2c38, size 0x3a4, virtual false, abstract: false, final false
  inline void OnRead(::System::IAsyncResult* base_ares);

  /// @brief Method Read, addr 0x2ff2744, size 0x3c, virtual true, abstract: false, final false
  inline int32_t Read(ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> buffer, int32_t offset, int32_t count);

  constexpr ::System::Net::HttpListenerContext*& __cordl_internal_get_context();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::HttpListenerContext*> const& __cordl_internal_get_context() const;

  constexpr ::System::Net::MonoChunkParser*& __cordl_internal_get_decoder();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::MonoChunkParser*> const& __cordl_internal_get_decoder() const;

  constexpr bool const& __cordl_internal_get_disposed() const;

  constexpr bool& __cordl_internal_get_disposed();

  constexpr bool const& __cordl_internal_get_no_more_data() const;

  constexpr bool& __cordl_internal_get_no_more_data();

  constexpr void __cordl_internal_set_context(::System::Net::HttpListenerContext* value);

  constexpr void __cordl_internal_set_decoder(::System::Net::MonoChunkParser* value);

  constexpr void __cordl_internal_set_disposed(bool value);

  constexpr void __cordl_internal_set_no_more_data(bool value);

  /// @brief Method .ctor, addr 0x2ff2640, size 0x104, virtual false, abstract: false, final false
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
static_assert(::cordl_internals::size_check_v<::System::Net::ChunkedInputStream, 0x70>, "Size mismatch!");

static_assert(offsetof(::System::Net::ChunkedInputStream, ___disposed) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Net::ChunkedInputStream, ___decoder) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Net::ChunkedInputStream, ___context) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Net::ChunkedInputStream, ___no_more_data) == 0x68, "Offset mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::ChunkedInputStream);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::ChunkedInputStream*, "System.Net", "ChunkedInputStream");
NEED_NO_BOX(::System::Net::__ChunkedInputStream__ReadBufferState);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__ChunkedInputStream__ReadBufferState*, "System.Net", "ChunkedInputStream/ReadBufferState");
