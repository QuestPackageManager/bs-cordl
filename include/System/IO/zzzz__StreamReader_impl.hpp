#pragma once
// IWYU pragma private; include "System\IO\StreamReader.hpp"
#include "System/IO/zzzz__TextReader_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncValueTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredValueTaskAwaitable_1_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Memory_1_impl.hpp"
#include "System/IO/zzzz__StreamReader_def.hpp"
#include "System/IO/zzzz__StreamReader_NullStreamReader_def.hpp"
#include "System/IO/zzzz__StreamReader_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Text/zzzz__Decoder_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Memory_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
//  Writing Method size for method: ::System::IO::StreamReader__ReadAsyncInternal_d__66.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::StreamReader__ReadAsyncInternal_d__66::*)()>(&::System::IO::StreamReader__ReadAsyncInternal_d__66::MoveNext)> {
  constexpr static std::size_t size = 0xac4;
  constexpr static std::size_t addrs = 0x5bfd6b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::StreamReader__ReadAsyncInternal_d__66>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamReader__ReadAsyncInternal_d__66.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::StreamReader__ReadAsyncInternal_d__66::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::System::IO::StreamReader__ReadAsyncInternal_d__66::SetStateMachine)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5bfe174;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::StreamReader__ReadAsyncInternal_d__66>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void System::IO::StreamReader__ReadAsyncInternal_d__66::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::StreamReader__ReadAsyncInternal_d__66>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void System::IO::StreamReader__ReadAsyncInternal_d__66::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::StreamReader__ReadAsyncInternal_d__66>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr System::IO::StreamReader__ReadAsyncInternal_d__66::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* System::IO::StreamReader__ReadAsyncInternal_d__66::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::IO::StreamReader*", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "buffer", ty: "::System::Memory_1<char16_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_charsRead_5__2", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_readToUserBuffer_5__3", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_tmpByteBuffer_5__4", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "_tmpStream_5__5", ty: "::System::IO::Stream*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_count_5__6", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_n_5__7", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_1_ConfiguredValueTaskAwaiter<int32_t>", modifiers: "",
// def_value: Some("{}") }]
constexpr ::System::IO::StreamReader__ReadAsyncInternal_d__66::StreamReader__ReadAsyncInternal_d__66(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t> __t__builder, ::System::IO::StreamReader* __4__this, ::System::Memory_1<char16_t> buffer,
    ::System::Threading::CancellationToken cancellationToken, int32_t _charsRead_5__2, bool _readToUserBuffer_5__3, ::ArrayW<uint8_t> _tmpByteBuffer_5__4, ::System::IO::Stream* _tmpStream_5__5,
    int32_t _count_5__6, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t> __u__1, int32_t _n_5__7,
    ::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_1_ConfiguredValueTaskAwaiter<int32_t> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->buffer = buffer;
  this->cancellationToken = cancellationToken;
  this->_charsRead_5__2 = _charsRead_5__2;
  this->_readToUserBuffer_5__3 = _readToUserBuffer_5__3;
  this->_tmpByteBuffer_5__4 = _tmpByteBuffer_5__4;
  this->_tmpStream_5__5 = _tmpStream_5__5;
  this->_count_5__6 = _count_5__6;
  this->__u__1 = __u__1;
  this->_n_5__7 = _n_5__7;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::System::IO::StreamReader__ReadAsyncInternal_d__66::StreamReader__ReadAsyncInternal_d__66() {}
//  Writing Method size for method: ::System::IO::StreamReader__ReadBufferAsync_d__69.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::StreamReader__ReadBufferAsync_d__69::*)()>(&::System::IO::StreamReader__ReadBufferAsync_d__69::MoveNext)> {
  constexpr static std::size_t size = 0x64c;
  constexpr static std::size_t addrs = 0x5bfe1d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::StreamReader__ReadBufferAsync_d__69>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamReader__ReadBufferAsync_d__69.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::StreamReader__ReadBufferAsync_d__69::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::System::IO::StreamReader__ReadBufferAsync_d__69::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5bfe81c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::StreamReader__ReadBufferAsync_d__69>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void System::IO::StreamReader__ReadBufferAsync_d__69::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::StreamReader__ReadBufferAsync_d__69>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void System::IO::StreamReader__ReadBufferAsync_d__69::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::StreamReader__ReadBufferAsync_d__69>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr System::IO::StreamReader__ReadBufferAsync_d__69::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* System::IO::StreamReader__ReadBufferAsync_d__69::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::IO::StreamReader*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "_tmpByteBuffer_5__2", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_tmpStream_5__3", ty: "::System::IO::Stream*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_1_ConfiguredValueTaskAwaiter<int32_t>", modifiers: "",
// def_value: Some("{}") }]
constexpr ::System::IO::StreamReader__ReadBufferAsync_d__69::StreamReader__ReadBufferAsync_d__69(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder, ::System::IO::StreamReader* __4__this, ::ArrayW<uint8_t> _tmpByteBuffer_5__2,
    ::System::IO::Stream* _tmpStream_5__3, ::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_1_ConfiguredValueTaskAwaiter<int32_t> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->_tmpByteBuffer_5__2 = _tmpByteBuffer_5__2;
  this->_tmpStream_5__3 = _tmpStream_5__3;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::System::IO::StreamReader__ReadBufferAsync_d__69::StreamReader__ReadBufferAsync_d__69() {}
//  Writing Method size for method: ::System::IO::StreamReader.CheckAsyncTaskInProgress
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::StreamReader::*)()>(&::System::IO::StreamReader::CheckAsyncTaskInProgress)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5bfafa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::StreamReader*>(), { "CheckAsyncTaskInProgress", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamReader.ThrowAsyncIOInProgress
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::IO::StreamReader::ThrowAsyncIOInProgress)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5bfb018;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::StreamReader*>(), { "ThrowAsyncIOInProgress", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamReader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::StreamReader::*)()>(&::System::IO::StreamReader::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5bfb064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::StreamReader*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamReader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::StreamReader::*)(::System::IO::Stream*)>(&::System::IO::StreamReader::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5bfb140;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::StreamReader*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamReader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::StreamReader::*)(::System::IO::Stream*, bool)>(&::System::IO::StreamReader::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5bfb17c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::StreamReader*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamReader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::StreamReader::*)(::System::IO::Stream*, ::System::Text::Encoding*)>(&::System::IO::StreamReader::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5bfb3d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::IO::StreamReader*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Text::Encoding*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamReader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::StreamReader::*)(::System::IO::Stream*, ::System::Text::Encoding*, bool)>(&::System::IO::StreamReader::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5bfb3e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::StreamReader*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Text::Encoding*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamReader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::StreamReader::*)(::System::IO::Stream*, ::System::Text::Encoding*, bool, int32_t, bool)>(
    &::System::IO::StreamReader::_ctor)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x5bfb1bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::IO::StreamReader*>(),
            { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Text::Encoding*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamReader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::StreamReader::*)(::StringW)>(&::System::IO::StreamReader::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5bfb534;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::StreamReader*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamReader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::StreamReader::*)(::StringW, bool)>(&::System::IO::StreamReader::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5bfb56c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::StreamReader*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamReader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::StreamReader::*)(::StringW, ::System::Text::Encoding*)>(&::System::IO::StreamReader::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5bfb7f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::StreamReader*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Text::Encoding*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamReader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::StreamReader::*)(::StringW, ::System::Text::Encoding*, bool)>(&::System::IO::StreamReader::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bfb800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::IO::StreamReader*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Text::Encoding*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamReader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::StreamReader::*)(::StringW, ::System::Text::Encoding*, bool, int32_t)>(&::System::IO::StreamReader::_ctor)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x5bfb5a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::StreamReader*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Text::Encoding*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamReader.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::StreamReader::*)(::System::IO::Stream*, ::System::Text::Encoding*, bool, int32_t, bool)>(
    &::System::IO::StreamReader::Init)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5bfb3ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::IO::StreamReader*>(),
            { "Init", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Text::Encoding*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamReader.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::StreamReader::*)(::System::IO::Stream*)>(&::System::IO::StreamReader::Init)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5bfb808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::StreamReader*>(), { "Init", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamReader.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::StreamReader::*)()>(&::System::IO::StreamReader::Close)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5bfb818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::StreamReader*>(), { ::i2c::class_of<::System::IO::StreamReader*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamReader.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::StreamReader::*)(bool)>(&::System::IO::StreamReader::Dispose)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5bfb828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::StreamReader*>(), { ::i2c::class_of<::System::IO::StreamReader*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamReader.get_CurrentEncoding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::Encoding* (::System::IO::StreamReader::*)()>(&::System::IO::StreamReader::get_CurrentEncoding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bfb928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::StreamReader*>(), { ::i2c::class_of<::System::IO::StreamReader*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamReader.get_BaseStream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::System::IO::StreamReader::*)()>(&::System::IO::StreamReader::get_BaseStream)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bfb930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::StreamReader*>(), { ::i2c::class_of<::System::IO::StreamReader*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamReader.get_LeaveOpen
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::IO::StreamReader::*)()>(&::System::IO::StreamReader::get_LeaveOpen)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5bfb918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::StreamReader*>(), { "get_LeaveOpen", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamReader.get_EndOfStream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::IO::StreamReader::*)()>(&::System::IO::StreamReader::get_EndOfStream)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5bfb938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::StreamReader*>(), { "get_EndOfStream", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamReader.Peek
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::IO::StreamReader::*)()>(&::System::IO::StreamReader::Peek)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5bfb9d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::StreamReader*>(), { ::i2c::class_of<::System::IO::StreamReader*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamReader.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::IO::StreamReader::*)()>(&::System::IO::StreamReader::Read)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5bfba94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::StreamReader*>(), { ::i2c::class_of<::System::IO::StreamReader*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamReader.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::IO::StreamReader::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::System::IO::StreamReader::Read)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x5bfbb58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::StreamReader*>(), { ::i2c::class_of<::System::IO::StreamReader*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamReader.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::IO::StreamReader::*)(::System::Span_1<char16_t>)>(&::System::IO::StreamReader::Read)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5bfbefc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::StreamReader*>(), { ::i2c::class_of<::System::IO::StreamReader*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamReader.ReadSpan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::IO::StreamReader::*)(::System::Span_1<char16_t>)>(&::System::IO::StreamReader::ReadSpan)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x5bfbcf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::StreamReader*>(), { "ReadSpan", {}, { ::i2c::type_of<::System::Span_1<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamReader.ReadToEnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::IO::StreamReader::*)()>(&::System::IO::StreamReader::ReadToEnd)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5bfc544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::StreamReader*>(), { ::i2c::class_of<::System::IO::StreamReader*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamReader.CompressBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::StreamReader::*)(int32_t)>(&::System::IO::StreamReader::CompressBuffer)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5bfc660;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::StreamReader*>(), { "CompressBuffer", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamReader.DetectEncoding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::StreamReader::*)()>(&::System::IO::StreamReader::DetectEncoding)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x5bfc6a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::StreamReader*>(), { "DetectEncoding", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamReader.IsPreamble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::IO::StreamReader::*)()>(&::System::IO::StreamReader::IsPreamble)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5bfc948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::StreamReader*>(), { "IsPreamble", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamReader.ReadBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::IO::StreamReader::*)()>(&::System::IO::StreamReader::ReadBuffer)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x5bfca78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::StreamReader*>(), { ::i2c::class_of<::System::IO::StreamReader*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamReader.ReadBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::IO::StreamReader::*)(::System::Span_1<char16_t>, ::by_ref<bool>)>(&::System::IO::StreamReader::ReadBuffer)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x5bfc244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::IO::StreamReader*>(), { "ReadBuffer", {}, { ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamReader.ReadLine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::IO::StreamReader::*)()>(&::System::IO::StreamReader::ReadLine)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x5bfcbdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::StreamReader*>(), { ::i2c::class_of<::System::IO::StreamReader*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamReader.ReadAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<int32_t>* (::System::IO::StreamReader::*)(::ArrayW<char16_t>, int32_t, int32_t)>(
    &::System::IO::StreamReader::ReadAsync)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x5bfce40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::StreamReader*>(), { ::i2c::class_of<::System::IO::StreamReader*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamReader.ReadAsyncInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::ValueTask_1<int32_t> (::System::IO::StreamReader::*)(
    ::System::Memory_1<char16_t>, ::System::Threading::CancellationToken)>(&::System::IO::StreamReader::ReadAsyncInternal)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5bfd2d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::StreamReader*>(), { ::i2c::class_of<::System::IO::StreamReader*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamReader.ReadBufferAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<int32_t>* (::System::IO::StreamReader::*)()>(&::System::IO::StreamReader::ReadBufferAsync)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5bfd408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::StreamReader*>(), { "ReadBufferAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamReader.DataAvailable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::IO::StreamReader::*)()>(&::System::IO::StreamReader::DataAvailable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5bfd4ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::StreamReader*>(), { "DataAvailable", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::IO::Stream*& System::IO::StreamReader::__cordl_internal_get__stream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stream;
}
constexpr ::System::IO::Stream* const& System::IO::StreamReader::__cordl_internal_get__stream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stream;
}
constexpr void System::IO::StreamReader::__cordl_internal_set__stream(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____stream = value;
}
constexpr ::System::Text::Encoding*& System::IO::StreamReader::__cordl_internal_get__encoding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____encoding;
}
constexpr ::System::Text::Encoding* const& System::IO::StreamReader::__cordl_internal_get__encoding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____encoding;
}
constexpr void System::IO::StreamReader::__cordl_internal_set__encoding(::System::Text::Encoding* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____encoding = value;
}
constexpr ::System::Text::Decoder*& System::IO::StreamReader::__cordl_internal_get__decoder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____decoder;
}
constexpr ::System::Text::Decoder* const& System::IO::StreamReader::__cordl_internal_get__decoder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____decoder;
}
constexpr void System::IO::StreamReader::__cordl_internal_set__decoder(::System::Text::Decoder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____decoder = value;
}
constexpr ::ArrayW<uint8_t>& System::IO::StreamReader::__cordl_internal_get__byteBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____byteBuffer;
}
constexpr ::ArrayW<uint8_t> const& System::IO::StreamReader::__cordl_internal_get__byteBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____byteBuffer;
}
constexpr void System::IO::StreamReader::__cordl_internal_set__byteBuffer(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____byteBuffer = value;
}
constexpr ::ArrayW<char16_t>& System::IO::StreamReader::__cordl_internal_get__charBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____charBuffer;
}
constexpr ::ArrayW<char16_t> const& System::IO::StreamReader::__cordl_internal_get__charBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____charBuffer;
}
constexpr void System::IO::StreamReader::__cordl_internal_set__charBuffer(::ArrayW<char16_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____charBuffer = value;
}
constexpr int32_t& System::IO::StreamReader::__cordl_internal_get__charPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____charPos;
}
constexpr int32_t const& System::IO::StreamReader::__cordl_internal_get__charPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____charPos;
}
constexpr void System::IO::StreamReader::__cordl_internal_set__charPos(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____charPos = value;
}
constexpr int32_t& System::IO::StreamReader::__cordl_internal_get__charLen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____charLen;
}
constexpr int32_t const& System::IO::StreamReader::__cordl_internal_get__charLen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____charLen;
}
constexpr void System::IO::StreamReader::__cordl_internal_set__charLen(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____charLen = value;
}
constexpr int32_t& System::IO::StreamReader::__cordl_internal_get__byteLen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____byteLen;
}
constexpr int32_t const& System::IO::StreamReader::__cordl_internal_get__byteLen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____byteLen;
}
constexpr void System::IO::StreamReader::__cordl_internal_set__byteLen(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____byteLen = value;
}
constexpr int32_t& System::IO::StreamReader::__cordl_internal_get__bytePos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bytePos;
}
constexpr int32_t const& System::IO::StreamReader::__cordl_internal_get__bytePos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bytePos;
}
constexpr void System::IO::StreamReader::__cordl_internal_set__bytePos(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bytePos = value;
}
constexpr int32_t& System::IO::StreamReader::__cordl_internal_get__maxCharsPerBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxCharsPerBuffer;
}
constexpr int32_t const& System::IO::StreamReader::__cordl_internal_get__maxCharsPerBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxCharsPerBuffer;
}
constexpr void System::IO::StreamReader::__cordl_internal_set__maxCharsPerBuffer(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxCharsPerBuffer = value;
}
constexpr bool& System::IO::StreamReader::__cordl_internal_get__detectEncoding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____detectEncoding;
}
constexpr bool const& System::IO::StreamReader::__cordl_internal_get__detectEncoding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____detectEncoding;
}
constexpr void System::IO::StreamReader::__cordl_internal_set__detectEncoding(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____detectEncoding = value;
}
constexpr bool& System::IO::StreamReader::__cordl_internal_get__checkPreamble() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____checkPreamble;
}
constexpr bool const& System::IO::StreamReader::__cordl_internal_get__checkPreamble() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____checkPreamble;
}
constexpr void System::IO::StreamReader::__cordl_internal_set__checkPreamble(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____checkPreamble = value;
}
constexpr bool& System::IO::StreamReader::__cordl_internal_get__isBlocked() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isBlocked;
}
constexpr bool const& System::IO::StreamReader::__cordl_internal_get__isBlocked() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isBlocked;
}
constexpr void System::IO::StreamReader::__cordl_internal_set__isBlocked(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isBlocked = value;
}
constexpr bool& System::IO::StreamReader::__cordl_internal_get__closable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____closable;
}
constexpr bool const& System::IO::StreamReader::__cordl_internal_get__closable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____closable;
}
constexpr void System::IO::StreamReader::__cordl_internal_set__closable(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____closable = value;
}
constexpr ::System::Threading::Tasks::Task*& System::IO::StreamReader::__cordl_internal_get__asyncReadTask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____asyncReadTask;
}
constexpr ::System::Threading::Tasks::Task* const& System::IO::StreamReader::__cordl_internal_get__asyncReadTask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____asyncReadTask;
}
constexpr void System::IO::StreamReader::__cordl_internal_set__asyncReadTask(::System::Threading::Tasks::Task* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____asyncReadTask = value;
}
inline void System::IO::StreamReader::setStaticF_Null(::System::IO::StreamReader* value) {
  ::cordl_internals::setStaticField<::System::IO::StreamReader*, "Null", ::System::IO::StreamReader*>(std::forward<::System::IO::StreamReader*>(value));
}
inline ::System::IO::StreamReader* System::IO::StreamReader::getStaticF_Null() {
  return ::cordl_internals::getStaticField<::System::IO::StreamReader*, "Null", ::System::IO::StreamReader*>();
}
inline void System::IO::StreamReader::CheckAsyncTaskInProgress() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::StreamReader*>(), { "CheckAsyncTaskInProgress", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::IO::StreamReader::ThrowAsyncIOInProgress() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::StreamReader*>(), { "ThrowAsyncIOInProgress", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void System::IO::StreamReader::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::StreamReader*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::IO::StreamReader::_ctor(::System::IO::Stream* stream) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::StreamReader*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream);
}
inline void System::IO::StreamReader::_ctor(::System::IO::Stream* stream, bool detectEncodingFromByteOrderMarks) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::StreamReader*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, detectEncodingFromByteOrderMarks);
}
inline void System::IO::StreamReader::_ctor(::System::IO::Stream* stream, ::System::Text::Encoding* encoding) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::IO::StreamReader*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Text::Encoding*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, encoding);
}
inline void System::IO::StreamReader::_ctor(::System::IO::Stream* stream, ::System::Text::Encoding* encoding, bool detectEncodingFromByteOrderMarks) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::StreamReader*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Text::Encoding*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, encoding, detectEncodingFromByteOrderMarks);
}
inline void System::IO::StreamReader::_ctor(::System::IO::Stream* stream, ::System::Text::Encoding* encoding, bool detectEncodingFromByteOrderMarks, int32_t bufferSize, bool leaveOpen) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::IO::StreamReader*>(),
          { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Text::Encoding*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, encoding, detectEncodingFromByteOrderMarks, bufferSize, leaveOpen);
}
inline void System::IO::StreamReader::_ctor(::StringW path) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::StreamReader*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path);
}
inline void System::IO::StreamReader::_ctor(::StringW path, bool detectEncodingFromByteOrderMarks) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::StreamReader*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path, detectEncodingFromByteOrderMarks);
}
inline void System::IO::StreamReader::_ctor(::StringW path, ::System::Text::Encoding* encoding) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::StreamReader*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Text::Encoding*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path, encoding);
}
inline void System::IO::StreamReader::_ctor(::StringW path, ::System::Text::Encoding* encoding, bool detectEncodingFromByteOrderMarks) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::IO::StreamReader*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Text::Encoding*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path, encoding, detectEncodingFromByteOrderMarks);
}
inline void System::IO::StreamReader::_ctor(::StringW path, ::System::Text::Encoding* encoding, bool detectEncodingFromByteOrderMarks, int32_t bufferSize) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::StreamReader*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Text::Encoding*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path, encoding, detectEncodingFromByteOrderMarks, bufferSize);
}
inline void System::IO::StreamReader::Init(::System::IO::Stream* stream, ::System::Text::Encoding* encoding, bool detectEncodingFromByteOrderMarks, int32_t bufferSize, bool leaveOpen) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::IO::StreamReader*>(),
          { "Init", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Text::Encoding*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, encoding, detectEncodingFromByteOrderMarks, bufferSize, leaveOpen);
}
inline void System::IO::StreamReader::Init(::System::IO::Stream* stream) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::StreamReader*>(), { "Init", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream);
}
inline void System::IO::StreamReader::Close() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::StreamReader*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::IO::StreamReader::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::StreamReader*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::System::Text::Encoding* System::IO::StreamReader::get_CurrentEncoding() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::StreamReader*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*>(this, ___internal_method);
}
inline ::System::IO::Stream* System::IO::StreamReader::get_BaseStream() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::StreamReader*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method);
}
inline bool System::IO::StreamReader::get_LeaveOpen() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::StreamReader*>(), { "get_LeaveOpen", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::IO::StreamReader::get_EndOfStream() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::StreamReader*>(), { "get_EndOfStream", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t System::IO::StreamReader::Peek() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::StreamReader*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::IO::StreamReader::Read() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::StreamReader*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::IO::StreamReader::Read(::ArrayW<char16_t> buffer, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::StreamReader*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, index, count);
}
inline int32_t System::IO::StreamReader::Read(::System::Span_1<char16_t> buffer) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::StreamReader*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer);
}
inline int32_t System::IO::StreamReader::ReadSpan(::System::Span_1<char16_t> buffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::StreamReader*>(), { "ReadSpan", {}, { ::i2c::type_of<::System::Span_1<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer);
}
inline ::StringW System::IO::StreamReader::ReadToEnd() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::StreamReader*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::IO::StreamReader::CompressBuffer(int32_t n) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::StreamReader*>(), { "CompressBuffer", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, n);
}
inline void System::IO::StreamReader::DetectEncoding() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::StreamReader*>(), { "DetectEncoding", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::IO::StreamReader::IsPreamble() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::StreamReader*>(), { "IsPreamble", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t System::IO::StreamReader::ReadBuffer() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::StreamReader*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::IO::StreamReader::ReadBuffer(::System::Span_1<char16_t> userBuffer, ::by_ref<bool> readToUserBuffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::IO::StreamReader*>(), { "ReadBuffer", {}, { ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, userBuffer, readToUserBuffer);
}
inline ::StringW System::IO::StreamReader::ReadLine() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::StreamReader*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<int32_t>* System::IO::StreamReader::ReadAsync(::ArrayW<char16_t> buffer, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::StreamReader*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>*>(this, ___internal_method, buffer, index, count);
}
inline ::System::Threading::Tasks::ValueTask_1<int32_t> System::IO::StreamReader::ReadAsyncInternal(::System::Memory_1<char16_t> buffer, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::StreamReader*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask_1<int32_t>>(this, ___internal_method, buffer, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<int32_t>* System::IO::StreamReader::ReadBufferAsync() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::StreamReader*>(), { "ReadBufferAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>*>(this, ___internal_method);
}
inline bool System::IO::StreamReader::DataAvailable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::StreamReader*>(), { "DataAvailable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::IO::StreamReader* System::IO::StreamReader::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::StreamReader*>());
}
inline ::System::IO::StreamReader* System::IO::StreamReader::New_ctor(::System::IO::Stream* stream) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::StreamReader*>(stream));
}
inline ::System::IO::StreamReader* System::IO::StreamReader::New_ctor(::System::IO::Stream* stream, bool detectEncodingFromByteOrderMarks) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::StreamReader*>(stream, detectEncodingFromByteOrderMarks));
}
inline ::System::IO::StreamReader* System::IO::StreamReader::New_ctor(::System::IO::Stream* stream, ::System::Text::Encoding* encoding) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::StreamReader*>(stream, encoding));
}
inline ::System::IO::StreamReader* System::IO::StreamReader::New_ctor(::System::IO::Stream* stream, ::System::Text::Encoding* encoding, bool detectEncodingFromByteOrderMarks) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::StreamReader*>(stream, encoding, detectEncodingFromByteOrderMarks));
}
inline ::System::IO::StreamReader* System::IO::StreamReader::New_ctor(::System::IO::Stream* stream, ::System::Text::Encoding* encoding, bool detectEncodingFromByteOrderMarks, int32_t bufferSize,
                                                                      bool leaveOpen) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::StreamReader*>(stream, encoding, detectEncodingFromByteOrderMarks, bufferSize, leaveOpen));
}
inline ::System::IO::StreamReader* System::IO::StreamReader::New_ctor(::StringW path) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::StreamReader*>(path));
}
inline ::System::IO::StreamReader* System::IO::StreamReader::New_ctor(::StringW path, bool detectEncodingFromByteOrderMarks) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::StreamReader*>(path, detectEncodingFromByteOrderMarks));
}
inline ::System::IO::StreamReader* System::IO::StreamReader::New_ctor(::StringW path, ::System::Text::Encoding* encoding) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::StreamReader*>(path, encoding));
}
inline ::System::IO::StreamReader* System::IO::StreamReader::New_ctor(::StringW path, ::System::Text::Encoding* encoding, bool detectEncodingFromByteOrderMarks) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::StreamReader*>(path, encoding, detectEncodingFromByteOrderMarks));
}
inline ::System::IO::StreamReader* System::IO::StreamReader::New_ctor(::StringW path, ::System::Text::Encoding* encoding, bool detectEncodingFromByteOrderMarks, int32_t bufferSize) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::StreamReader*>(path, encoding, detectEncodingFromByteOrderMarks, bufferSize));
}
// Ctor Parameters []
constexpr ::System::IO::StreamReader::StreamReader() {}
