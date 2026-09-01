#pragma once
// IWYU pragma private; include "System\Net\WebReadStream.hpp"
#include "System/IO/zzzz__Stream_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/Net/zzzz__WebReadStream_def.hpp"
#include "System/IO/zzzz__SeekOrigin_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/zzzz__WebOperation_def.hpp"
#include "System/Net/zzzz__WebReadStream_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::WebReadStream__ReadAsync_d__28.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebReadStream__ReadAsync_d__28::*)()>(&::System::Net::WebReadStream__ReadAsync_d__28::MoveNext)> {
  constexpr static std::size_t size = 0x5f8;
  constexpr static std::size_t addrs = 0x6349ce4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebReadStream__ReadAsync_d__28>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebReadStream__ReadAsync_d__28.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebReadStream__ReadAsync_d__28::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::System::Net::WebReadStream__ReadAsync_d__28::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x634a2dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebReadStream__ReadAsync_d__28>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void System::Net::WebReadStream__ReadAsync_d__28::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebReadStream__ReadAsync_d__28>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void System::Net::WebReadStream__ReadAsync_d__28::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebReadStream__ReadAsync_d__28>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr System::Net::WebReadStream__ReadAsync_d__28::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* System::Net::WebReadStream__ReadAsync_d__28::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Net::WebReadStream*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "buffer", ty:
// "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "size", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: Some("{}") },
// CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::WebReadStream__ReadAsync_d__28::WebReadStream__ReadAsync_d__28(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder,
                                                                                        ::System::Net::WebReadStream* __4__this, ::System::Threading::CancellationToken cancellationToken,
                                                                                        ::ArrayW<uint8_t> buffer, int32_t offset, int32_t size,
                                                                                        ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t> __u__1,
                                                                                        ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->buffer = buffer;
  this->offset = offset;
  this->size = size;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::System::Net::WebReadStream__ReadAsync_d__28::WebReadStream__ReadAsync_d__28() {}
//  Writing Method size for method: ::System::Net::WebReadStream.get_Operation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::WebOperation* (::System::Net::WebReadStream::*)()>(&::System::Net::WebReadStream::get_Operation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6349180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebReadStream*>(), { "get_Operation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebReadStream.get_InnerStream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::System::Net::WebReadStream::*)()>(&::System::Net::WebReadStream::get_InnerStream)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6349188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebReadStream*>(), { "get_InnerStream", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebReadStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebReadStream::*)(::System::Net::WebOperation*, ::System::IO::Stream*)>(&::System::Net::WebReadStream::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6349190;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Net::WebReadStream*>(), { ".ctor", {}, { ::i2c::type_of<::System::Net::WebOperation*>(), ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebReadStream.get_Length
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Net::WebReadStream::*)()>(&::System::Net::WebReadStream::get_Length)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x63491f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::WebReadStream*>(), { ::i2c::class_of<::System::Net::WebReadStream*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebReadStream.get_Position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Net::WebReadStream::*)()>(&::System::Net::WebReadStream::get_Position)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6349230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::WebReadStream*>(), { ::i2c::class_of<::System::Net::WebReadStream*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebReadStream.set_Position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebReadStream::*)(int64_t)>(&::System::Net::WebReadStream::set_Position)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6349268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::WebReadStream*>(), { ::i2c::class_of<::System::Net::WebReadStream*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebReadStream.get_CanSeek
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::WebReadStream::*)()>(&::System::Net::WebReadStream::get_CanSeek)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63492a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::WebReadStream*>(), { ::i2c::class_of<::System::Net::WebReadStream*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebReadStream.get_CanRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::WebReadStream::*)()>(&::System::Net::WebReadStream::get_CanRead)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63492a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::WebReadStream*>(), { ::i2c::class_of<::System::Net::WebReadStream*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebReadStream.get_CanWrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::WebReadStream::*)()>(&::System::Net::WebReadStream::get_CanWrite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63492b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::WebReadStream*>(), { ::i2c::class_of<::System::Net::WebReadStream*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebReadStream.SetLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebReadStream::*)(int64_t)>(&::System::Net::WebReadStream::SetLength)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x63492b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::WebReadStream*>(), { ::i2c::class_of<::System::Net::WebReadStream*>(), 34 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebReadStream.Seek
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Net::WebReadStream::*)(int64_t, ::System::IO::SeekOrigin)>(&::System::Net::WebReadStream::Seek)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x63492f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::WebReadStream*>(), { ::i2c::class_of<::System::Net::WebReadStream*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebReadStream.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebReadStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Net::WebReadStream::Write)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6349328;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::WebReadStream*>(), { ::i2c::class_of<::System::Net::WebReadStream*>(), 38 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebReadStream.Flush
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebReadStream::*)()>(&::System::Net::WebReadStream::Flush)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6349360;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::WebReadStream*>(), { ::i2c::class_of<::System::Net::WebReadStream*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebReadStream.GetException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (::System::Net::WebReadStream::*)(::System::Exception*)>(&::System::Net::WebReadStream::GetException)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x6349398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebReadStream*>(), { "GetException", {}, { ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebReadStream.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::WebReadStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Net::WebReadStream::Read)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x6349510;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::WebReadStream*>(), { ::i2c::class_of<::System::Net::WebReadStream*>(), 35 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebReadStream.BeginRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::System::Net::WebReadStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::System::Net::WebReadStream::BeginRead)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x6349790;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::WebReadStream*>(), { ::i2c::class_of<::System::Net::WebReadStream*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebReadStream.EndRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::WebReadStream::*)(::System::IAsyncResult*)>(&::System::Net::WebReadStream::EndRead)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x6349954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::WebReadStream*>(), { ::i2c::class_of<::System::Net::WebReadStream*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebReadStream.ReadAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<int32_t>* (
    ::System::Net::WebReadStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Threading::CancellationToken)>(&::System::Net::WebReadStream::ReadAsync)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6349a84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Net::WebReadStream*>(),
            { "ReadAsync", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebReadStream.ProcessReadAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<int32_t>* (
    ::System::Net::WebReadStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Threading::CancellationToken)>(&::System::Net::WebReadStream::ProcessReadAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::WebReadStream*>(), { ::i2c::class_of<::System::Net::WebReadStream*>(), 42 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebReadStream.FinishReading
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::Net::WebReadStream::*)(::System::Threading::CancellationToken)>(
    &::System::Net::WebReadStream::FinishReading)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x6349b90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::WebReadStream*>(), { ::i2c::class_of<::System::Net::WebReadStream*>(), 43 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebReadStream.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebReadStream::*)(bool)>(&::System::Net::WebReadStream::Dispose)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6349cb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::WebReadStream*>(), { ::i2c::class_of<::System::Net::WebReadStream*>(), 22 }));
    return ___internal_method;
  }
};
constexpr ::System::Net::WebOperation*& System::Net::WebReadStream::__cordl_internal_get__Operation_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Operation_k__BackingField;
}
constexpr ::System::Net::WebOperation* const& System::Net::WebReadStream::__cordl_internal_get__Operation_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Operation_k__BackingField;
}
constexpr void System::Net::WebReadStream::__cordl_internal_set__Operation_k__BackingField(::System::Net::WebOperation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Operation_k__BackingField = value;
}
constexpr ::System::IO::Stream*& System::Net::WebReadStream::__cordl_internal_get__InnerStream_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____InnerStream_k__BackingField;
}
constexpr ::System::IO::Stream* const& System::Net::WebReadStream::__cordl_internal_get__InnerStream_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____InnerStream_k__BackingField;
}
constexpr void System::Net::WebReadStream::__cordl_internal_set__InnerStream_k__BackingField(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____InnerStream_k__BackingField = value;
}
constexpr bool& System::Net::WebReadStream::__cordl_internal_get_disposed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disposed;
}
constexpr bool const& System::Net::WebReadStream::__cordl_internal_get_disposed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disposed;
}
constexpr void System::Net::WebReadStream::__cordl_internal_set_disposed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___disposed = value;
}
inline ::System::Net::WebOperation* System::Net::WebReadStream::get_Operation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebReadStream*>(), { "get_Operation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::WebOperation*>(this, ___internal_method);
}
inline ::System::IO::Stream* System::Net::WebReadStream::get_InnerStream() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebReadStream*>(), { "get_InnerStream", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method);
}
inline void System::Net::WebReadStream::_ctor(::System::Net::WebOperation* operation, ::System::IO::Stream* innerStream) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Net::WebReadStream*>(), { ".ctor", {}, { ::i2c::type_of<::System::Net::WebOperation*>(), ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, operation, innerStream);
}
inline int64_t System::Net::WebReadStream::get_Length() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::WebReadStream*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t System::Net::WebReadStream::get_Position() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::WebReadStream*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void System::Net::WebReadStream::set_Position(int64_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::WebReadStream*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Net::WebReadStream::get_CanSeek() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::WebReadStream*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Net::WebReadStream::get_CanRead() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::WebReadStream*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Net::WebReadStream::get_CanWrite() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::WebReadStream*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::WebReadStream::SetLength(int64_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::WebReadStream*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t System::Net::WebReadStream::Seek(int64_t offset, ::System::IO::SeekOrigin origin) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::WebReadStream*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, offset, origin);
}
inline void System::Net::WebReadStream::Write(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::WebReadStream*>(), 38 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, count);
}
inline void System::Net::WebReadStream::Flush() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::WebReadStream*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Exception* System::Net::WebReadStream::GetException(::System::Exception* e) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebReadStream*>(), { "GetException", {}, { ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(this, ___internal_method, e);
}
inline int32_t System::Net::WebReadStream::Read(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::WebReadStream*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, size);
}
inline ::System::IAsyncResult* System::Net::WebReadStream::BeginRead(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, ::System::AsyncCallback* cb, ::System::Object* state) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::WebReadStream*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, buffer, offset, size, cb, state);
}
inline int32_t System::Net::WebReadStream::EndRead(::System::IAsyncResult* r) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::WebReadStream*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, r);
}
inline ::System::Threading::Tasks::Task_1<int32_t>* System::Net::WebReadStream::ReadAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size,
                                                                                          ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::System::Net::WebReadStream*>(),
                       { "ReadAsync", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>*>(this, ___internal_method, buffer, offset, size, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<int32_t>* System::Net::WebReadStream::ProcessReadAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size,
                                                                                                 ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::WebReadStream*>(), 42 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>*>(this, ___internal_method, buffer, offset, size, cancellationToken);
}
inline ::System::Threading::Tasks::Task* System::Net::WebReadStream::FinishReading(::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::WebReadStream*>(), 43 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline void System::Net::WebReadStream::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::WebReadStream*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::System::Net::WebReadStream* System::Net::WebReadStream::New_ctor(::System::Net::WebOperation* operation, ::System::IO::Stream* innerStream) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebReadStream*>(operation, innerStream));
}
// Ctor Parameters []
constexpr ::System::Net::WebReadStream::WebReadStream() {}
