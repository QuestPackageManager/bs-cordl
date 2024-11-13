#pragma once
// IWYU pragma private; include "System/Net/ChunkedInputStream.hpp"
#include "System/Net/zzzz__RequestStream_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__ChunkedInputStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/zzzz__ChunkedInputStream_def.hpp"
#include "System/Net/zzzz__HttpListenerContext_def.hpp"
#include "System/Net/zzzz__HttpStreamAsyncResult_def.hpp"
#include "System/Net/zzzz__MonoChunkParser_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::__ChunkedInputStream__ReadBufferState._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__ChunkedInputStream__ReadBufferState::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::System::Net::HttpStreamAsyncResult*)>(&::System::Net::__ChunkedInputStream__ReadBufferState::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x4459fdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__ChunkedInputStream__ReadBufferState*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpStreamAsyncResult*>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& System::Net::__ChunkedInputStream__ReadBufferState::__cordl_internal_get_Buffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Buffer;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& System::Net::__ChunkedInputStream__ReadBufferState::__cordl_internal_get_Buffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Buffer;
}
constexpr void System::Net::__ChunkedInputStream__ReadBufferState::__cordl_internal_set_Buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Buffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Net::__ChunkedInputStream__ReadBufferState::__cordl_internal_get_Offset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Offset;
}
constexpr int32_t const& System::Net::__ChunkedInputStream__ReadBufferState::__cordl_internal_get_Offset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Offset;
}
constexpr void System::Net::__ChunkedInputStream__ReadBufferState::__cordl_internal_set_Offset(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Offset = value;
}
constexpr int32_t& System::Net::__ChunkedInputStream__ReadBufferState::__cordl_internal_get_Count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Count;
}
constexpr int32_t const& System::Net::__ChunkedInputStream__ReadBufferState::__cordl_internal_get_Count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Count;
}
constexpr void System::Net::__ChunkedInputStream__ReadBufferState::__cordl_internal_set_Count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Count = value;
}
constexpr int32_t& System::Net::__ChunkedInputStream__ReadBufferState::__cordl_internal_get_InitialCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InitialCount;
}
constexpr int32_t const& System::Net::__ChunkedInputStream__ReadBufferState::__cordl_internal_get_InitialCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InitialCount;
}
constexpr void System::Net::__ChunkedInputStream__ReadBufferState::__cordl_internal_set_InitialCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___InitialCount = value;
}
constexpr ::System::Net::HttpStreamAsyncResult*& System::Net::__ChunkedInputStream__ReadBufferState::__cordl_internal_get_Ares() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Ares;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::HttpStreamAsyncResult*> const& System::Net::__ChunkedInputStream__ReadBufferState::__cordl_internal_get_Ares() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Ares;
}
constexpr void System::Net::__ChunkedInputStream__ReadBufferState::__cordl_internal_set_Ares(::System::Net::HttpStreamAsyncResult* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Ares)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Net::__ChunkedInputStream__ReadBufferState* System::Net::__ChunkedInputStream__ReadBufferState::New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count,
                                                                                                                          ::System::Net::HttpStreamAsyncResult* ares) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::__ChunkedInputStream__ReadBufferState*>(buffer, offset, count, ares));
}
inline void System::Net::__ChunkedInputStream__ReadBufferState::_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::Net::HttpStreamAsyncResult* ares) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__ChunkedInputStream__ReadBufferState*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpStreamAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, offset, count, ares);
}
// Ctor Parameters []
constexpr ::System::Net::__ChunkedInputStream__ReadBufferState::__ChunkedInputStream__ReadBufferState() {}
//  Writing Method size for method: ::System::Net::ChunkedInputStream._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::ChunkedInputStream::*)(
    ::System::Net::HttpListenerContext*, ::System::IO::Stream*, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::System::Net::ChunkedInputStream::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x4459bb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ChunkedInputStream*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpListenerContext*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ChunkedInputStream.Read
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::ChunkedInputStream::*)(ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>>, int32_t, int32_t)>(
    &::System::Net::ChunkedInputStream::Read)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x4459cb4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ChunkedInputStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ChunkedInputStream*>::get(), 35));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ChunkedInputStream.BeginRead
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::System::Net::ChunkedInputStream::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::System::AsyncCallback*, ::System::Object*)>(&::System::Net::ChunkedInputStream::BeginRead)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x4459cf0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ChunkedInputStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ChunkedInputStream*>::get(), 25));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ChunkedInputStream.OnRead
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::ChunkedInputStream::*)(::System::IAsyncResult*)>(&::System::Net::ChunkedInputStream::OnRead)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x445a024;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ChunkedInputStream*>::get(), "OnRead", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ChunkedInputStream.EndRead
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::ChunkedInputStream::*)(::System::IAsyncResult*)>(
    &::System::Net::ChunkedInputStream::EndRead)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x445a5a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ChunkedInputStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ChunkedInputStream*>::get(), 26));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ChunkedInputStream.Close
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::ChunkedInputStream::*)()>(&::System::Net::ChunkedInputStream::Close)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x445a82c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ChunkedInputStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ChunkedInputStream*>::get(), 21));
    return ___internal_method;
  }
};
constexpr bool& System::Net::ChunkedInputStream::__cordl_internal_get_disposed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disposed;
}
constexpr bool const& System::Net::ChunkedInputStream::__cordl_internal_get_disposed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disposed;
}
constexpr void System::Net::ChunkedInputStream::__cordl_internal_set_disposed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___disposed = value;
}
constexpr ::System::Net::MonoChunkParser*& System::Net::ChunkedInputStream::__cordl_internal_get_decoder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___decoder;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::MonoChunkParser*> const& System::Net::ChunkedInputStream::__cordl_internal_get_decoder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___decoder;
}
constexpr void System::Net::ChunkedInputStream::__cordl_internal_set_decoder(::System::Net::MonoChunkParser* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___decoder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::HttpListenerContext*& System::Net::ChunkedInputStream::__cordl_internal_get_context() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___context;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::HttpListenerContext*> const& System::Net::ChunkedInputStream::__cordl_internal_get_context() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___context;
}
constexpr void System::Net::ChunkedInputStream::__cordl_internal_set_context(::System::Net::HttpListenerContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___context)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Net::ChunkedInputStream::__cordl_internal_get_no_more_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___no_more_data;
}
constexpr bool const& System::Net::ChunkedInputStream::__cordl_internal_get_no_more_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___no_more_data;
}
constexpr void System::Net::ChunkedInputStream::__cordl_internal_set_no_more_data(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___no_more_data = value;
}
inline ::System::Net::ChunkedInputStream* System::Net::ChunkedInputStream::New_ctor(::System::Net::HttpListenerContext* context, ::System::IO::Stream* stream,
                                                                                    ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t length) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::ChunkedInputStream*>(context, stream, buffer, offset, length));
}
inline void System::Net::ChunkedInputStream::_ctor(::System::Net::HttpListenerContext* context, ::System::IO::Stream* stream, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset,
                                                   int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ChunkedInputStream*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpListenerContext*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, stream, buffer, offset, length);
}
inline int32_t System::Net::ChunkedInputStream::Read(ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> buffer, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ChunkedInputStream*>::get(), 35)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffer, offset, count);
}
inline ::System::IAsyncResult* System::Net::ChunkedInputStream::BeginRead(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::AsyncCallback* cback,
                                                                          ::System::Object* state) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ChunkedInputStream*>::get(), 25)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, buffer, offset, count, cback, state);
}
inline void System::Net::ChunkedInputStream::OnRead(::System::IAsyncResult* base_ares) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ChunkedInputStream*>::get(), "OnRead", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, base_ares);
}
inline int32_t System::Net::ChunkedInputStream::EndRead(::System::IAsyncResult* ares) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ChunkedInputStream*>::get(), 26)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, ares);
}
inline void System::Net::ChunkedInputStream::Close() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ChunkedInputStream*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::ChunkedInputStream::ChunkedInputStream() {}
