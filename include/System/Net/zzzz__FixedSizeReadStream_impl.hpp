#pragma once
#include "System/Net/zzzz__WebReadStream_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/Net/zzzz__FixedSizeReadStream_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Net/zzzz__FixedSizeReadStream_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Net/zzzz__WebOperation_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
//  Writing Method size for method: ::System::Net::__FixedSizeReadStream___ProcessReadAsync_d__5.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__FixedSizeReadStream___ProcessReadAsync_d__5::*)()>(
    &::System::Net::__FixedSizeReadStream___ProcessReadAsync_d__5::MoveNext)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x29c4ad4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__FixedSizeReadStream___ProcessReadAsync_d__5>::get(), "MoveNext",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__FixedSizeReadStream___ProcessReadAsync_d__5.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__FixedSizeReadStream___ProcessReadAsync_d__5::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::System::Net::__FixedSizeReadStream___ProcessReadAsync_d__5::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x29c4d84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__FixedSizeReadStream___ProcessReadAsync_d__5>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr System::Net::__FixedSizeReadStream___ProcessReadAsync_d__5::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void System::Net::__FixedSizeReadStream___ProcessReadAsync_d__5::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__FixedSizeReadStream___ProcessReadAsync_d__5>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::__FixedSizeReadStream___ProcessReadAsync_d__5::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__FixedSizeReadStream___ProcessReadAsync_d__5>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Net::FixedSizeReadStream*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "size", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "buffer", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "offset", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value:
// Some("{}") }]
constexpr ::System::Net::__FixedSizeReadStream___ProcessReadAsync_d__5::__FixedSizeReadStream___ProcessReadAsync_d__5(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder, ::System::Threading::CancellationToken cancellationToken,
    ::System::Net::FixedSizeReadStream* __4__this, int32_t size, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset,
    ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->cancellationToken = cancellationToken;
  this->__4__this = __4__this;
  this->size = size;
  this->buffer = buffer;
  this->offset = offset;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::System::Net::__FixedSizeReadStream___ProcessReadAsync_d__5::__FixedSizeReadStream___ProcessReadAsync_d__5() {}
//  Writing Method size for method: ::System::Net::FixedSizeReadStream.get_ContentLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::Net::FixedSizeReadStream::*)()>(&::System::Net::FixedSizeReadStream::get_ContentLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29c497c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FixedSizeReadStream*>::get(), "get_ContentLength",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FixedSizeReadStream._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::FixedSizeReadStream::*)(::System::Net::WebOperation*, ::System::IO::Stream*, int64_t)>(
    &::System::Net::FixedSizeReadStream::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x29c4984;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FixedSizeReadStream*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebOperation*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FixedSizeReadStream.ProcessReadAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<int32_t>* (
    ::System::Net::FixedSizeReadStream::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::System::Threading::CancellationToken)>(&::System::Net::FixedSizeReadStream::ProcessReadAsync)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x29c49ac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FixedSizeReadStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FixedSizeReadStream*>::get(), 42));
    return ___internal_method;
  }
};
constexpr int64_t& System::Net::FixedSizeReadStream::__get__ContentLength_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ContentLength_k__BackingField;
}
constexpr int64_t const& System::Net::FixedSizeReadStream::__get__ContentLength_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ContentLength_k__BackingField;
}
constexpr void System::Net::FixedSizeReadStream::__set__ContentLength_k__BackingField(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ContentLength_k__BackingField = value;
}
constexpr int64_t& System::Net::FixedSizeReadStream::__get_position() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___position;
}
constexpr int64_t const& System::Net::FixedSizeReadStream::__get_position() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___position;
}
constexpr void System::Net::FixedSizeReadStream::__set_position(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___position = value;
}
inline int64_t System::Net::FixedSizeReadStream::get_ContentLength() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FixedSizeReadStream*>::get(), "get_ContentLength",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline ::System::Net::FixedSizeReadStream* System::Net::FixedSizeReadStream::New_ctor(::System::Net::WebOperation* operation, ::System::IO::Stream* innerStream, int64_t contentLength) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::FixedSizeReadStream*>(operation, innerStream, contentLength));
}
inline void System::Net::FixedSizeReadStream::_ctor(::System::Net::WebOperation* operation, ::System::IO::Stream* innerStream, int64_t contentLength) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FixedSizeReadStream*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebOperation*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, operation, innerStream, contentLength);
}
inline ::System::Threading::Tasks::Task_1<int32_t>* System::Net::FixedSizeReadStream::ProcessReadAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size,
                                                                                                       ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FixedSizeReadStream*>::get(), "ProcessReadAsync", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>*, false>(this, ___internal_method, buffer, offset, size, cancellationToken);
}
// Ctor Parameters []
constexpr ::System::Net::FixedSizeReadStream::FixedSizeReadStream() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
