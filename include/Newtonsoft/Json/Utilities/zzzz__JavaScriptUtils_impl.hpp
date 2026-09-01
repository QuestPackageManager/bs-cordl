#pragma once
// IWYU pragma private; include "Newtonsoft\Json\Utilities\JavaScriptUtils.hpp"
#include "Newtonsoft/Json/zzzz__StringEscapeHandling_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__JavaScriptUtils_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__JavaScriptUtils_def.hpp"
#include "Newtonsoft/Json/zzzz__IArrayPool_1_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonTextWriter_def.hpp"
#include "Newtonsoft/Json/zzzz__StringEscapeHandling_def.hpp"
#include "System/IO/zzzz__TextWriter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteCharAsync_d__14.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteCharAsync_d__14::*)()>(
    &::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteCharAsync_d__14::MoveNext)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x5d2c2ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteCharAsync_d__14>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteCharAsync_d__14.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteCharAsync_d__14::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteCharAsync_d__14::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d2c554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteCharAsync_d__14>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::Utilities::JavaScriptUtils__WriteCharAsync_d__14::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteCharAsync_d__14>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Newtonsoft::Json::Utilities::JavaScriptUtils__WriteCharAsync_d__14::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteCharAsync_d__14>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::Utilities::JavaScriptUtils__WriteCharAsync_d__14::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Newtonsoft::Json::Utilities::JavaScriptUtils__WriteCharAsync_d__14::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "task", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "writer", ty: "::System::IO::TextWriter*", modifiers: "", def_value: Some("{}") }, CppParam { name: "c", ty: "char16_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteCharAsync_d__14::JavaScriptUtils__WriteCharAsync_d__14(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Threading::Tasks::Task* task, ::System::IO::TextWriter* writer, char16_t c,
    ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->task = task;
  this->writer = writer;
  this->c = c;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteCharAsync_d__14::JavaScriptUtils__WriteCharAsync_d__14() {}
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync_d__16.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync_d__16::*)()>(
    &::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync_d__16::MoveNext)> {
  constexpr static std::size_t size = 0x9b8;
  constexpr static std::size_t addrs = 0x5d2c5c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync_d__16>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync_d__16.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync_d__16::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync_d__16::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d2cf78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync_d__16>(),
                                                             { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::Utilities::JavaScriptUtils__WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync_d__16::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync_d__16>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Newtonsoft::Json::Utilities::JavaScriptUtils__WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync_d__16::SetStateMachine(
    ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync_d__16>(),
                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::Utilities::JavaScriptUtils__WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync_d__16::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Newtonsoft::Json::Utilities::JavaScriptUtils__WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync_d__16::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "writeBuffer", ty: "::ArrayW<char16_t>", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "lastWritePosition", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "client", ty: "::Newtonsoft::Json::JsonTextWriter*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "s", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "writer", ty: "::System::IO::TextWriter*", modifiers: "", def_value: Some("{}") },
// CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "charEscapeFlags", ty: "::ArrayW<bool>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "stringEscapeHandling", ty: "::Newtonsoft::Json::StringEscapeHandling", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_isEscapedUnicodeText_5__2", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_escapedValue_5__3", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "_i_5__4", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync_d__16::
    JavaScriptUtils__WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync_d__16(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                                        ::ArrayW<char16_t> writeBuffer, int32_t lastWritePosition, ::Newtonsoft::Json::JsonTextWriter* client,
                                                                                        ::StringW s, ::System::IO::TextWriter* writer, ::System::Threading::CancellationToken cancellationToken,
                                                                                        ::ArrayW<bool> charEscapeFlags, ::Newtonsoft::Json::StringEscapeHandling stringEscapeHandling,
                                                                                        bool _isEscapedUnicodeText_5__2, ::StringW _escapedValue_5__3,
                                                                                        ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1,
                                                                                        int32_t _i_5__4) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->writeBuffer = writeBuffer;
  this->lastWritePosition = lastWritePosition;
  this->client = client;
  this->s = s;
  this->writer = writer;
  this->cancellationToken = cancellationToken;
  this->charEscapeFlags = charEscapeFlags;
  this->stringEscapeHandling = stringEscapeHandling;
  this->_isEscapedUnicodeText_5__2 = _isEscapedUnicodeText_5__2;
  this->_escapedValue_5__3 = _escapedValue_5__3;
  this->__u__1 = __u__1;
  this->_i_5__4 = _i_5__4;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync_d__16::
    JavaScriptUtils__WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync_d__16() {}
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteEscapedJavaScriptStringWithDelimitersAsync_d__13.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteEscapedJavaScriptStringWithDelimitersAsync_d__13::*)()>(
    &::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteEscapedJavaScriptStringWithDelimitersAsync_d__13::MoveNext)> {
  constexpr static std::size_t size = 0x394;
  constexpr static std::size_t addrs = 0x5d2cfe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteEscapedJavaScriptStringWithDelimitersAsync_d__13>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteEscapedJavaScriptStringWithDelimitersAsync_d__13.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteEscapedJavaScriptStringWithDelimitersAsync_d__13::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteEscapedJavaScriptStringWithDelimitersAsync_d__13::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d2d378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteEscapedJavaScriptStringWithDelimitersAsync_d__13>(),
                                                             { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::Utilities::JavaScriptUtils__WriteEscapedJavaScriptStringWithDelimitersAsync_d__13::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteEscapedJavaScriptStringWithDelimitersAsync_d__13>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void
Newtonsoft::Json::Utilities::JavaScriptUtils__WriteEscapedJavaScriptStringWithDelimitersAsync_d__13::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteEscapedJavaScriptStringWithDelimitersAsync_d__13>(),
                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::Utilities::JavaScriptUtils__WriteEscapedJavaScriptStringWithDelimitersAsync_d__13::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Newtonsoft::Json::Utilities::JavaScriptUtils__WriteEscapedJavaScriptStringWithDelimitersAsync_d__13::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "task", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "s", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "writer", ty: "::System::IO::TextWriter*", modifiers: "", def_value: Some("{}") },
// CppParam { name: "charEscapeFlags", ty: "::ArrayW<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "stringEscapeHandling", ty: "::Newtonsoft::Json::StringEscapeHandling", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "client", ty: "::Newtonsoft::Json::JsonTextWriter*", modifiers: "", def_value: Some("{}") }, CppParam { name: "writeBuffer", ty: "::ArrayW<char16_t>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "delimiter", ty:
// "char16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value:
// Some("{}") }]
constexpr ::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteEscapedJavaScriptStringWithDelimitersAsync_d__13::JavaScriptUtils__WriteEscapedJavaScriptStringWithDelimitersAsync_d__13(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Threading::Tasks::Task* task, ::StringW s, ::System::IO::TextWriter* writer,
    ::ArrayW<bool> charEscapeFlags, ::Newtonsoft::Json::StringEscapeHandling stringEscapeHandling, ::Newtonsoft::Json::JsonTextWriter* client, ::ArrayW<char16_t> writeBuffer,
    ::System::Threading::CancellationToken cancellationToken, char16_t delimiter, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->task = task;
  this->s = s;
  this->writer = writer;
  this->charEscapeFlags = charEscapeFlags;
  this->stringEscapeHandling = stringEscapeHandling;
  this->client = client;
  this->writeBuffer = writeBuffer;
  this->cancellationToken = cancellationToken;
  this->delimiter = delimiter;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteEscapedJavaScriptStringWithDelimitersAsync_d__13::JavaScriptUtils__WriteEscapedJavaScriptStringWithDelimitersAsync_d__13() {}
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::JavaScriptUtils.GetCharEscapeFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<bool> (*)(::Newtonsoft::Json::StringEscapeHandling, char16_t)>(&::Newtonsoft::Json::Utilities::JavaScriptUtils::GetCharEscapeFlags)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5d2aa90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::JavaScriptUtils*>(),
                                                             { "GetCharEscapeFlags", {}, { ::i2c::type_of<::Newtonsoft::Json::StringEscapeHandling>(), ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::JavaScriptUtils.ShouldEscapeJavaScriptString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::ArrayW<bool>)>(&::Newtonsoft::Json::Utilities::JavaScriptUtils::ShouldEscapeJavaScriptString)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5d2ab4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::JavaScriptUtils*>(),
                                                                                           { "ShouldEscapeJavaScriptString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::JavaScriptUtils.WriteEscapedJavaScriptString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IO::TextWriter*, ::StringW, char16_t, bool, ::ArrayW<bool>, ::Newtonsoft::Json::StringEscapeHandling,
                                                                ::Newtonsoft::Json::IArrayPool_1<char16_t>*, ::by_ref<::ArrayW<char16_t>>)>(
    &::Newtonsoft::Json::Utilities::JavaScriptUtils::WriteEscapedJavaScriptString)> {
  constexpr static std::size_t size = 0x62c;
  constexpr static std::size_t addrs = 0x5d2aba4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::JavaScriptUtils*>(),
                                                             { "WriteEscapedJavaScriptString",
                                                               {},
                                                               { ::i2c::type_of<::System::IO::TextWriter*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<bool>(),
                                                                 ::i2c::type_of<::ArrayW<bool>>(), ::i2c::type_of<::Newtonsoft::Json::StringEscapeHandling>(),
                                                                 ::i2c::type_of<::Newtonsoft::Json::IArrayPool_1<char16_t>*>(), ::i2c::type_of<::by_ref<::ArrayW<char16_t>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::JavaScriptUtils.ToEscapedJavaScriptString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, char16_t, bool, ::Newtonsoft::Json::StringEscapeHandling)>(
    &::Newtonsoft::Json::Utilities::JavaScriptUtils::ToEscapedJavaScriptString)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x5d2b268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Newtonsoft::Json::Utilities::JavaScriptUtils*>(),
            { "ToEscapedJavaScriptString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Newtonsoft::Json::StringEscapeHandling>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::JavaScriptUtils.FirstCharToEscape
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, ::ArrayW<bool>, ::Newtonsoft::Json::StringEscapeHandling)>(
    &::Newtonsoft::Json::Utilities::JavaScriptUtils::FirstCharToEscape)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5d2b1d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::JavaScriptUtils*>(),
                                         { "FirstCharToEscape", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<bool>>(), ::i2c::type_of<::Newtonsoft::Json::StringEscapeHandling>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::JavaScriptUtils.WriteEscapedJavaScriptStringAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<
    ::System::Threading::Tasks::Task* (*)(::System::IO::TextWriter*, ::StringW, char16_t, bool, ::ArrayW<bool>, ::Newtonsoft::Json::StringEscapeHandling, ::Newtonsoft::Json::JsonTextWriter*,
                                          ::ArrayW<char16_t>, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::Utilities::JavaScriptUtils::WriteEscapedJavaScriptStringAsync)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x5d2b444;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::JavaScriptUtils*>(),
                                                { "WriteEscapedJavaScriptStringAsync",
                                                  {},
                                                  { ::i2c::type_of<::System::IO::TextWriter*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<bool>(),
                                                    ::i2c::type_of<::ArrayW<bool>>(), ::i2c::type_of<::Newtonsoft::Json::StringEscapeHandling>(), ::i2c::type_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                                    ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::JavaScriptUtils.WriteEscapedJavaScriptStringWithDelimitersAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)(::System::IO::TextWriter*, ::StringW, char16_t, ::ArrayW<bool>, ::Newtonsoft::Json::StringEscapeHandling,
                                                                                             ::Newtonsoft::Json::JsonTextWriter*, ::ArrayW<char16_t>, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::Utilities::JavaScriptUtils::WriteEscapedJavaScriptStringWithDelimitersAsync)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x5d2b638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::JavaScriptUtils*>(),
                                                             { "WriteEscapedJavaScriptStringWithDelimitersAsync",
                                                               {},
                                                               { ::i2c::type_of<::System::IO::TextWriter*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<::ArrayW<bool>>(),
                                                                 ::i2c::type_of<::Newtonsoft::Json::StringEscapeHandling>(), ::i2c::type_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                                                 ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::JavaScriptUtils.WriteEscapedJavaScriptStringWithDelimitersAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Threading::Tasks::Task* (*)(::System::Threading::Tasks::Task*, ::System::IO::TextWriter*, ::StringW, char16_t, ::ArrayW<bool>, ::Newtonsoft::Json::StringEscapeHandling,
                                                      ::Newtonsoft::Json::JsonTextWriter*, ::ArrayW<char16_t>, ::System::Threading::CancellationToken)>(
        &::Newtonsoft::Json::Utilities::JavaScriptUtils::WriteEscapedJavaScriptStringWithDelimitersAsync)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5d2b968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::JavaScriptUtils*>(),
                                         { "WriteEscapedJavaScriptStringWithDelimitersAsync",
                                           {},
                                           { ::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<::System::IO::TextWriter*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t>(),
                                             ::i2c::type_of<::ArrayW<bool>>(), ::i2c::type_of<::Newtonsoft::Json::StringEscapeHandling>(), ::i2c::type_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                             ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::JavaScriptUtils.WriteCharAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Threading::Tasks::Task* (*)(::System::Threading::Tasks::Task*, ::System::IO::TextWriter*, char16_t, ::System::Threading::CancellationToken)>(
        &::Newtonsoft::Json::Utilities::JavaScriptUtils::WriteCharAsync)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5d2ba7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::JavaScriptUtils*>(),
                                                                                           { "WriteCharAsync",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<::System::IO::TextWriter*>(),
                                                                                               ::i2c::type_of<char16_t>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::JavaScriptUtils.WriteEscapedJavaScriptStringWithoutDelimitersAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)(::System::IO::TextWriter*, ::StringW, ::ArrayW<bool>, ::Newtonsoft::Json::StringEscapeHandling,
                                                                                             ::Newtonsoft::Json::JsonTextWriter*, ::ArrayW<char16_t>, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::Utilities::JavaScriptUtils::WriteEscapedJavaScriptStringWithoutDelimitersAsync)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5d2b83c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::JavaScriptUtils*>(),
                            { "WriteEscapedJavaScriptStringWithoutDelimitersAsync",
                              {},
                              { ::i2c::type_of<::System::IO::TextWriter*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<bool>>(), ::i2c::type_of<::Newtonsoft::Json::StringEscapeHandling>(),
                                ::i2c::type_of<::Newtonsoft::Json::JsonTextWriter*>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::JavaScriptUtils.WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)(::System::IO::TextWriter*, ::StringW, int32_t, ::ArrayW<bool>, ::Newtonsoft::Json::StringEscapeHandling,
                                                                                             ::Newtonsoft::Json::JsonTextWriter*, ::ArrayW<char16_t>, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::Utilities::JavaScriptUtils::WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5d2bb58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::JavaScriptUtils*>(),
                                                             { "WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync",
                                                               {},
                                                               { ::i2c::type_of<::System::IO::TextWriter*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<bool>>(),
                                                                 ::i2c::type_of<::Newtonsoft::Json::StringEscapeHandling>(), ::i2c::type_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                                                 ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::JavaScriptUtils.TryGetDateFromConstructorJson
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Newtonsoft::Json::JsonReader*, ::by_ref<::System::DateTime>, ::by_ref<::StringW>)>(
    &::Newtonsoft::Json::Utilities::JavaScriptUtils::TryGetDateFromConstructorJson)> {
  constexpr static std::size_t size = 0x498;
  constexpr static std::size_t addrs = 0x5d2bc60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Newtonsoft::Json::Utilities::JavaScriptUtils*>(),
            { "TryGetDateFromConstructorJson", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::by_ref<::System::DateTime>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::JavaScriptUtils.TryGetDateConstructorValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Newtonsoft::Json::JsonReader*, ::by_ref<::System::Nullable_1<int64_t>>, ::by_ref<::StringW>)>(
    &::Newtonsoft::Json::Utilities::JavaScriptUtils::TryGetDateConstructorValue)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x5d2c0f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::JavaScriptUtils*>(),
                                         { "TryGetDateConstructorValue",
                                           {},
                                           { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::by_ref<::System::Nullable_1<int64_t>>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::Utilities::JavaScriptUtils::setStaticF_SingleQuoteCharEscapeFlags(::ArrayW<bool> value) {
  ::cordl_internals::setStaticField<::ArrayW<bool>, "SingleQuoteCharEscapeFlags", ::Newtonsoft::Json::Utilities::JavaScriptUtils*>(std::forward<::ArrayW<bool>>(value));
}
inline ::ArrayW<bool> Newtonsoft::Json::Utilities::JavaScriptUtils::getStaticF_SingleQuoteCharEscapeFlags() {
  return ::cordl_internals::getStaticField<::ArrayW<bool>, "SingleQuoteCharEscapeFlags", ::Newtonsoft::Json::Utilities::JavaScriptUtils*>();
}
inline void Newtonsoft::Json::Utilities::JavaScriptUtils::setStaticF_DoubleQuoteCharEscapeFlags(::ArrayW<bool> value) {
  ::cordl_internals::setStaticField<::ArrayW<bool>, "DoubleQuoteCharEscapeFlags", ::Newtonsoft::Json::Utilities::JavaScriptUtils*>(std::forward<::ArrayW<bool>>(value));
}
inline ::ArrayW<bool> Newtonsoft::Json::Utilities::JavaScriptUtils::getStaticF_DoubleQuoteCharEscapeFlags() {
  return ::cordl_internals::getStaticField<::ArrayW<bool>, "DoubleQuoteCharEscapeFlags", ::Newtonsoft::Json::Utilities::JavaScriptUtils*>();
}
inline void Newtonsoft::Json::Utilities::JavaScriptUtils::setStaticF_HtmlCharEscapeFlags(::ArrayW<bool> value) {
  ::cordl_internals::setStaticField<::ArrayW<bool>, "HtmlCharEscapeFlags", ::Newtonsoft::Json::Utilities::JavaScriptUtils*>(std::forward<::ArrayW<bool>>(value));
}
inline ::ArrayW<bool> Newtonsoft::Json::Utilities::JavaScriptUtils::getStaticF_HtmlCharEscapeFlags() {
  return ::cordl_internals::getStaticField<::ArrayW<bool>, "HtmlCharEscapeFlags", ::Newtonsoft::Json::Utilities::JavaScriptUtils*>();
}
inline ::ArrayW<bool> Newtonsoft::Json::Utilities::JavaScriptUtils::GetCharEscapeFlags(::Newtonsoft::Json::StringEscapeHandling stringEscapeHandling, char16_t quoteChar) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::JavaScriptUtils*>(),
                                                           { "GetCharEscapeFlags", {}, { ::i2c::type_of<::Newtonsoft::Json::StringEscapeHandling>(), ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<bool>>(nullptr, ___internal_method, stringEscapeHandling, quoteChar);
}
inline bool Newtonsoft::Json::Utilities::JavaScriptUtils::ShouldEscapeJavaScriptString(::StringW s, ::ArrayW<bool> charEscapeFlags) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::JavaScriptUtils*>(),
                                                                                         { "ShouldEscapeJavaScriptString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, s, charEscapeFlags);
}
inline void Newtonsoft::Json::Utilities::JavaScriptUtils::WriteEscapedJavaScriptString(::System::IO::TextWriter* writer, ::StringW s, char16_t delimiter, bool appendDelimiters,
                                                                                       ::ArrayW<bool> charEscapeFlags, ::Newtonsoft::Json::StringEscapeHandling stringEscapeHandling,
                                                                                       ::Newtonsoft::Json::IArrayPool_1<char16_t>* bufferPool, ::by_ref<::ArrayW<char16_t>> writeBuffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::JavaScriptUtils*>(),
                                                           { "WriteEscapedJavaScriptString",
                                                             {},
                                                             { ::i2c::type_of<::System::IO::TextWriter*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<bool>(),
                                                               ::i2c::type_of<::ArrayW<bool>>(), ::i2c::type_of<::Newtonsoft::Json::StringEscapeHandling>(),
                                                               ::i2c::type_of<::Newtonsoft::Json::IArrayPool_1<char16_t>*>(), ::i2c::type_of<::by_ref<::ArrayW<char16_t>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, s, delimiter, appendDelimiters, charEscapeFlags, stringEscapeHandling, bufferPool, writeBuffer);
}
inline ::StringW Newtonsoft::Json::Utilities::JavaScriptUtils::ToEscapedJavaScriptString(::StringW value, char16_t delimiter, bool appendDelimiters,
                                                                                         ::Newtonsoft::Json::StringEscapeHandling stringEscapeHandling) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Newtonsoft::Json::Utilities::JavaScriptUtils*>(),
          { "ToEscapedJavaScriptString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Newtonsoft::Json::StringEscapeHandling>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, delimiter, appendDelimiters, stringEscapeHandling);
}
inline int32_t Newtonsoft::Json::Utilities::JavaScriptUtils::FirstCharToEscape(::StringW s, ::ArrayW<bool> charEscapeFlags, ::Newtonsoft::Json::StringEscapeHandling stringEscapeHandling) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::JavaScriptUtils*>(),
                                       { "FirstCharToEscape", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<bool>>(), ::i2c::type_of<::Newtonsoft::Json::StringEscapeHandling>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, s, charEscapeFlags, stringEscapeHandling);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::Utilities::JavaScriptUtils::WriteEscapedJavaScriptStringAsync(::System::IO::TextWriter* writer, ::StringW s, char16_t delimiter,
                                                                                                                         bool appendDelimiters, ::ArrayW<bool> charEscapeFlags,
                                                                                                                         ::Newtonsoft::Json::StringEscapeHandling stringEscapeHandling,
                                                                                                                         ::Newtonsoft::Json::JsonTextWriter* client, ::ArrayW<char16_t> writeBuffer,
                                                                                                                         ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::JavaScriptUtils*>(),
                                              { "WriteEscapedJavaScriptStringAsync",
                                                {},
                                                { ::i2c::type_of<::System::IO::TextWriter*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<bool>(),
                                                  ::i2c::type_of<::ArrayW<bool>>(), ::i2c::type_of<::Newtonsoft::Json::StringEscapeHandling>(), ::i2c::type_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                                  ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method, writer, s, delimiter, appendDelimiters, charEscapeFlags, stringEscapeHandling, client,
                                                                                writeBuffer, cancellationToken);
}
inline ::System::Threading::Tasks::Task*
Newtonsoft::Json::Utilities::JavaScriptUtils::WriteEscapedJavaScriptStringWithDelimitersAsync(::System::IO::TextWriter* writer, ::StringW s, char16_t delimiter, ::ArrayW<bool> charEscapeFlags,
                                                                                              ::Newtonsoft::Json::StringEscapeHandling stringEscapeHandling, ::Newtonsoft::Json::JsonTextWriter* client,
                                                                                              ::ArrayW<char16_t> writeBuffer, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::JavaScriptUtils*>(),
                                                           { "WriteEscapedJavaScriptStringWithDelimitersAsync",
                                                             {},
                                                             { ::i2c::type_of<::System::IO::TextWriter*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<::ArrayW<bool>>(),
                                                               ::i2c::type_of<::Newtonsoft::Json::StringEscapeHandling>(), ::i2c::type_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                                               ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method, writer, s, delimiter, charEscapeFlags, stringEscapeHandling, client, writeBuffer,
                                                                                cancellationToken);
}
inline ::System::Threading::Tasks::Task*
Newtonsoft::Json::Utilities::JavaScriptUtils::WriteEscapedJavaScriptStringWithDelimitersAsync(::System::Threading::Tasks::Task* task, ::System::IO::TextWriter* writer, ::StringW s, char16_t delimiter,
                                                                                              ::ArrayW<bool> charEscapeFlags, ::Newtonsoft::Json::StringEscapeHandling stringEscapeHandling,
                                                                                              ::Newtonsoft::Json::JsonTextWriter* client, ::ArrayW<char16_t> writeBuffer,
                                                                                              ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::JavaScriptUtils*>(),
                                       { "WriteEscapedJavaScriptStringWithDelimitersAsync",
                                         {},
                                         { ::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<::System::IO::TextWriter*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t>(),
                                           ::i2c::type_of<::ArrayW<bool>>(), ::i2c::type_of<::Newtonsoft::Json::StringEscapeHandling>(), ::i2c::type_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                           ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method, task, writer, s, delimiter, charEscapeFlags, stringEscapeHandling, client, writeBuffer,
                                                                                cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::Utilities::JavaScriptUtils::WriteCharAsync(::System::Threading::Tasks::Task* task, ::System::IO::TextWriter* writer, char16_t c,
                                                                                                      ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::JavaScriptUtils*>(),
                                                                                         { "WriteCharAsync",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<::System::IO::TextWriter*>(),
                                                                                             ::i2c::type_of<char16_t>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method, task, writer, c, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::Utilities::JavaScriptUtils::WriteEscapedJavaScriptStringWithoutDelimitersAsync(
    ::System::IO::TextWriter* writer, ::StringW s, ::ArrayW<bool> charEscapeFlags, ::Newtonsoft::Json::StringEscapeHandling stringEscapeHandling, ::Newtonsoft::Json::JsonTextWriter* client,
    ::ArrayW<char16_t> writeBuffer, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::JavaScriptUtils*>(),
                          { "WriteEscapedJavaScriptStringWithoutDelimitersAsync",
                            {},
                            { ::i2c::type_of<::System::IO::TextWriter*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<bool>>(), ::i2c::type_of<::Newtonsoft::Json::StringEscapeHandling>(),
                              ::i2c::type_of<::Newtonsoft::Json::JsonTextWriter*>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method, writer, s, charEscapeFlags, stringEscapeHandling, client, writeBuffer, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::Utilities::JavaScriptUtils::WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync(
    ::System::IO::TextWriter* writer, ::StringW s, int32_t lastWritePosition, ::ArrayW<bool> charEscapeFlags, ::Newtonsoft::Json::StringEscapeHandling stringEscapeHandling,
    ::Newtonsoft::Json::JsonTextWriter* client, ::ArrayW<char16_t> writeBuffer, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::JavaScriptUtils*>(),
                                                           { "WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync",
                                                             {},
                                                             { ::i2c::type_of<::System::IO::TextWriter*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<bool>>(),
                                                               ::i2c::type_of<::Newtonsoft::Json::StringEscapeHandling>(), ::i2c::type_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                                               ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method, writer, s, lastWritePosition, charEscapeFlags, stringEscapeHandling, client, writeBuffer,
                                                                                cancellationToken);
}
inline bool Newtonsoft::Json::Utilities::JavaScriptUtils::TryGetDateFromConstructorJson(::Newtonsoft::Json::JsonReader* reader, ::by_ref<::System::DateTime> dateTime,
                                                                                        ::by_ref<::StringW> errorMessage) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Newtonsoft::Json::Utilities::JavaScriptUtils*>(),
          { "TryGetDateFromConstructorJson", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::by_ref<::System::DateTime>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, reader, dateTime, errorMessage);
}
inline bool Newtonsoft::Json::Utilities::JavaScriptUtils::TryGetDateConstructorValue(::Newtonsoft::Json::JsonReader* reader, ::by_ref<::System::Nullable_1<int64_t>> integer,
                                                                                     ::by_ref<::StringW> errorMessage) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::JavaScriptUtils*>(),
                                       { "TryGetDateConstructorValue",
                                         {},
                                         { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::by_ref<::System::Nullable_1<int64_t>>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, reader, integer, errorMessage);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Utilities::JavaScriptUtils::JavaScriptUtils() {}
