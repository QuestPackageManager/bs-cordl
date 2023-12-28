#pragma once
#include "System/Net/zzzz__WebReadStream_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/Net/zzzz__MonoChunkStream_def.hpp"
#include "System/Net/zzzz__MonoChunkParser_def.hpp"
#include "System/Net/zzzz__WebOperation_def.hpp"
#include "System/Net/zzzz__MonoChunkStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Net/zzzz__WebHeaderCollection_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
//  Writing Method size for method: ::System::Net::__MonoChunkStream___ProcessReadAsync_d__7.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__MonoChunkStream___ProcessReadAsync_d__7::*)()>(
    &::System::Net::__MonoChunkStream___ProcessReadAsync_d__7::MoveNext)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0x29d4df4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__MonoChunkStream___ProcessReadAsync_d__7>::get(),
                                                                               "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__MonoChunkStream___ProcessReadAsync_d__7.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__MonoChunkStream___ProcessReadAsync_d__7::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::System::Net::__MonoChunkStream___ProcessReadAsync_d__7::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x29d5160;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__MonoChunkStream___ProcessReadAsync_d__7>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr System::Net::__MonoChunkStream___ProcessReadAsync_d__7::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void System::Net::__MonoChunkStream___ProcessReadAsync_d__7::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__MonoChunkStream___ProcessReadAsync_d__7>::get(),
                                                                             "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::__MonoChunkStream___ProcessReadAsync_d__7::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__MonoChunkStream___ProcessReadAsync_d__7>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Net::MonoChunkStream*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "buffer", ty:
// "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "size", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_moreBytes_5__2", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::__MonoChunkStream___ProcessReadAsync_d__7::__MonoChunkStream___ProcessReadAsync_d__7(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder, ::System::Threading::CancellationToken cancellationToken,
    ::System::Net::MonoChunkStream* __4__this, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size, ::ArrayW<uint8_t, ::Array<uint8_t>*> _moreBytes_5__2,
    ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->cancellationToken = cancellationToken;
  this->__4__this = __4__this;
  this->buffer = buffer;
  this->offset = offset;
  this->size = size;
  this->_moreBytes_5__2 = _moreBytes_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::System::Net::__MonoChunkStream___ProcessReadAsync_d__7::__MonoChunkStream___ProcessReadAsync_d__7() {}
//  Writing Method size for method: ::System::Net::__MonoChunkStream___FinishReading_d__8.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__MonoChunkStream___FinishReading_d__8::*)()>(
    &::System::Net::__MonoChunkStream___FinishReading_d__8::MoveNext)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x29d51b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__MonoChunkStream___FinishReading_d__8>::get(),
                                                                               "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__MonoChunkStream___FinishReading_d__8.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__MonoChunkStream___FinishReading_d__8::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::System::Net::__MonoChunkStream___FinishReading_d__8::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x29d5588;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__MonoChunkStream___FinishReading_d__8>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr System::Net::__MonoChunkStream___FinishReading_d__8::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void System::Net::__MonoChunkStream___FinishReading_d__8::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__MonoChunkStream___FinishReading_d__8>::get(),
                                                                             "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::__MonoChunkStream___FinishReading_d__8::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__MonoChunkStream___FinishReading_d__8>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Net::MonoChunkStream*", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "_buffer_5__2", ty:
// "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::__MonoChunkStream___FinishReading_d__8::__MonoChunkStream___FinishReading_d__8(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Net::MonoChunkStream* __4__this, ::System::Threading::CancellationToken cancellationToken,
    ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1, ::ArrayW<uint8_t, ::Array<uint8_t>*> _buffer_5__2,
    ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
  this->_buffer_5__2 = _buffer_5__2;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::System::Net::__MonoChunkStream___FinishReading_d__8::__MonoChunkStream___FinishReading_d__8() {}
//  Writing Method size for method: ::System::Net::MonoChunkStream.get_Decoder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::MonoChunkParser* (::System::Net::MonoChunkStream::*)()>(
    &::System::Net::MonoChunkStream::get_Decoder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29d4984;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkStream*>::get(), "get_Decoder",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::MonoChunkStream._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Net::MonoChunkStream::*)(::System::Net::WebOperation*, ::System::IO::Stream*, ::System::Net::WebHeaderCollection*)>(&::System::Net::MonoChunkStream::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x29d498c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkStream*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebOperation*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebHeaderCollection*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::MonoChunkStream.ProcessReadAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<int32_t>* (
    ::System::Net::MonoChunkStream::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::System::Threading::CancellationToken)>(&::System::Net::MonoChunkStream::ProcessReadAsync)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x29d4a8c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkStream*>::get(), 42));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::MonoChunkStream.FinishReading
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::System::Net::MonoChunkStream::*)(::System::Threading::CancellationToken)>(
    &::System::Net::MonoChunkStream::FinishReading)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x29d4bb0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkStream*>::get(), 43));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::MonoChunkStream.ThrowExpectingChunkTrailer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::System::Net::MonoChunkStream::ThrowExpectingChunkTrailer)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x29d4c90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkStream*>::get(),
                                                                               "ThrowExpectingChunkTrailer", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::MonoChunkStream.__n__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::System::Net::MonoChunkStream::*)(::System::Threading::CancellationToken)>(
    &::System::Net::MonoChunkStream::__n__0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x29d4cec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkStream*>::get(), "<>n__0", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Net::WebHeaderCollection*& System::Net::MonoChunkStream::__get__Headers_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Headers_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::WebHeaderCollection*> const& System::Net::MonoChunkStream::__get__Headers_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Headers_k__BackingField;
}
constexpr void System::Net::MonoChunkStream::__set__Headers_k__BackingField(::System::Net::WebHeaderCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Headers_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::MonoChunkParser*& System::Net::MonoChunkStream::__get__Decoder_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Decoder_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::MonoChunkParser*> const& System::Net::MonoChunkStream::__get__Decoder_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Decoder_k__BackingField;
}
constexpr void System::Net::MonoChunkStream::__set__Decoder_k__BackingField(::System::Net::MonoChunkParser* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Decoder_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Net::MonoChunkParser* System::Net::MonoChunkStream::get_Decoder() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkStream*>::get(), "get_Decoder",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Net::MonoChunkParser*, false>(this, ___internal_method);
}
inline ::System::Net::MonoChunkStream* System::Net::MonoChunkStream::New_ctor(::System::Net::WebOperation* operation, ::System::IO::Stream* innerStream, ::System::Net::WebHeaderCollection* headers) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::MonoChunkStream*>(operation, innerStream, headers));
}
inline void System::Net::MonoChunkStream::_ctor(::System::Net::WebOperation* operation, ::System::IO::Stream* innerStream, ::System::Net::WebHeaderCollection* headers) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkStream*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebOperation*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebHeaderCollection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, operation, innerStream, headers);
}
inline ::System::Threading::Tasks::Task_1<int32_t>* System::Net::MonoChunkStream::ProcessReadAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size,
                                                                                                   ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkStream*>::get(), "ProcessReadAsync", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>*, false>(this, ___internal_method, buffer, offset, size, cancellationToken);
}
inline ::System::Threading::Tasks::Task* System::Net::MonoChunkStream::FinishReading(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkStream*>::get(), "FinishReading", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, cancellationToken);
}
inline void System::Net::MonoChunkStream::ThrowExpectingChunkTrailer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkStream*>::get(),
                                                                             "ThrowExpectingChunkTrailer", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::Task* System::Net::MonoChunkStream::__n__0(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkStream*>::get(), "<>n__0", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, cancellationToken);
}
// Ctor Parameters []
constexpr ::System::Net::MonoChunkStream::MonoChunkStream() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
