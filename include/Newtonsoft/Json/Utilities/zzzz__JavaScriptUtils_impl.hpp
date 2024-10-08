#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/JavaScriptUtils.hpp"
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
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::__JavaScriptUtils___WriteCharAsync_d__14.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Utilities::__JavaScriptUtils___WriteCharAsync_d__14::*)()>(
    &::Newtonsoft::Json::Utilities::__JavaScriptUtils___WriteCharAsync_d__14::MoveNext)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x3e59f30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::__JavaScriptUtils___WriteCharAsync_d__14>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::__JavaScriptUtils___WriteCharAsync_d__14.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Utilities::__JavaScriptUtils___WriteCharAsync_d__14::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Newtonsoft::Json::Utilities::__JavaScriptUtils___WriteCharAsync_d__14::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3e5a1e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::__JavaScriptUtils___WriteCharAsync_d__14>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::Utilities::__JavaScriptUtils___WriteCharAsync_d__14::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Newtonsoft::Json::Utilities::__JavaScriptUtils___WriteCharAsync_d__14::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void Newtonsoft::Json::Utilities::__JavaScriptUtils___WriteCharAsync_d__14::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::__JavaScriptUtils___WriteCharAsync_d__14>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::Utilities::__JavaScriptUtils___WriteCharAsync_d__14::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::__JavaScriptUtils___WriteCharAsync_d__14>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "task", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "writer", ty: "::System::IO::TextWriter*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "c", ty: "char16_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::Utilities::__JavaScriptUtils___WriteCharAsync_d__14::__JavaScriptUtils___WriteCharAsync_d__14(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Threading::Tasks::Task* task, ::System::IO::TextWriter* writer, char16_t c,
    ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->task = task;
  this->writer = writer;
  this->c = c;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Utilities::__JavaScriptUtils___WriteCharAsync_d__14::__JavaScriptUtils___WriteCharAsync_d__14() {}
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::__JavaScriptUtils___WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync_d__16.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Newtonsoft::Json::Utilities::__JavaScriptUtils___WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync_d__16::*)()>(
        &::Newtonsoft::Json::Utilities::__JavaScriptUtils___WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync_d__16::MoveNext)> {
  constexpr static std::size_t size = 0x9d8;
  constexpr static std::size_t addrs = 0x3e5a24c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::__JavaScriptUtils___WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync_d__16>::get(),
        "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::__JavaScriptUtils___WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync_d__16.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (
    ::Newtonsoft::Json::Utilities::__JavaScriptUtils___WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync_d__16::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Newtonsoft::Json::Utilities::__JavaScriptUtils___WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync_d__16::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3e5ac24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::__JavaScriptUtils___WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync_d__16>::get(),
        "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::Utilities::__JavaScriptUtils___WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync_d__16::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Newtonsoft::Json::Utilities::__JavaScriptUtils___WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync_d__16::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void Newtonsoft::Json::Utilities::__JavaScriptUtils___WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync_d__16::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::__JavaScriptUtils___WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync_d__16>::get(), "MoveNext",
      std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::Utilities::__JavaScriptUtils___WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync_d__16::SetStateMachine(
    ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::__JavaScriptUtils___WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync_d__16>::get(),
      "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "writeBuffer", ty: "::ArrayW<char16_t,::Array<char16_t>*>", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "lastWritePosition", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "client", ty: "::Newtonsoft::Json::JsonTextWriter*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "s", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "writer", ty: "::System::IO::TextWriter*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "charEscapeFlags", ty: "::ArrayW<bool,::Array<bool>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "stringEscapeHandling", ty: "::Newtonsoft::Json::StringEscapeHandling",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "_isEscapedUnicodeText_5__2", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_escapedValue_5__3", ty: "::StringW",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "_i_5__4", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::Utilities::__JavaScriptUtils___WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync_d__16::
    __JavaScriptUtils___WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync_d__16(
        int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::ArrayW<char16_t, ::Array<char16_t>*> writeBuffer, int32_t lastWritePosition,
        ::Newtonsoft::Json::JsonTextWriter* client, ::StringW s, ::System::IO::TextWriter* writer, ::System::Threading::CancellationToken cancellationToken,
        ::ArrayW<bool, ::Array<bool>*> charEscapeFlags, ::Newtonsoft::Json::StringEscapeHandling stringEscapeHandling, bool _isEscapedUnicodeText_5__2, ::StringW _escapedValue_5__3,
        ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1, int32_t _i_5__4) noexcept {
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
constexpr ::Newtonsoft::Json::Utilities::__JavaScriptUtils___WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync_d__16::
    __JavaScriptUtils___WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync_d__16() {}
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::__JavaScriptUtils___WriteEscapedJavaScriptStringWithDelimitersAsync_d__13.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Utilities::__JavaScriptUtils___WriteEscapedJavaScriptStringWithDelimitersAsync_d__13::*)()>(
    &::Newtonsoft::Json::Utilities::__JavaScriptUtils___WriteEscapedJavaScriptStringWithDelimitersAsync_d__13::MoveNext)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0x3e5ac8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::__JavaScriptUtils___WriteEscapedJavaScriptStringWithDelimitersAsync_d__13>::get(), "MoveNext",
        std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::__JavaScriptUtils___WriteEscapedJavaScriptStringWithDelimitersAsync_d__13.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Utilities::__JavaScriptUtils___WriteEscapedJavaScriptStringWithDelimitersAsync_d__13::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Newtonsoft::Json::Utilities::__JavaScriptUtils___WriteEscapedJavaScriptStringWithDelimitersAsync_d__13::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3e5b044;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::__JavaScriptUtils___WriteEscapedJavaScriptStringWithDelimitersAsync_d__13>::get(), "SetStateMachine",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::Utilities::__JavaScriptUtils___WriteEscapedJavaScriptStringWithDelimitersAsync_d__13::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Newtonsoft::Json::Utilities::__JavaScriptUtils___WriteEscapedJavaScriptStringWithDelimitersAsync_d__13::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void Newtonsoft::Json::Utilities::__JavaScriptUtils___WriteEscapedJavaScriptStringWithDelimitersAsync_d__13::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::__JavaScriptUtils___WriteEscapedJavaScriptStringWithDelimitersAsync_d__13>::get(), "MoveNext",
      std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void
Newtonsoft::Json::Utilities::__JavaScriptUtils___WriteEscapedJavaScriptStringWithDelimitersAsync_d__13::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::__JavaScriptUtils___WriteEscapedJavaScriptStringWithDelimitersAsync_d__13>::get(), "SetStateMachine",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "task", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "s", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "writer", ty: "::System::IO::TextWriter*", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "charEscapeFlags", ty: "::ArrayW<bool,::Array<bool>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "stringEscapeHandling", ty:
// "::Newtonsoft::Json::StringEscapeHandling", modifiers: "", def_value: Some("{}") }, CppParam { name: "client", ty: "::Newtonsoft::Json::JsonTextWriter*", modifiers: "", def_value: Some("nullptr")
// }, CppParam { name: "writeBuffer", ty: "::ArrayW<char16_t,::Array<char16_t>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "cancellationToken", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "delimiter", ty: "char16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1",
// ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::Utilities::__JavaScriptUtils___WriteEscapedJavaScriptStringWithDelimitersAsync_d__13::__JavaScriptUtils___WriteEscapedJavaScriptStringWithDelimitersAsync_d__13(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Threading::Tasks::Task* task, ::StringW s, ::System::IO::TextWriter* writer,
    ::ArrayW<bool, ::Array<bool>*> charEscapeFlags, ::Newtonsoft::Json::StringEscapeHandling stringEscapeHandling, ::Newtonsoft::Json::JsonTextWriter* client,
    ::ArrayW<char16_t, ::Array<char16_t>*> writeBuffer, ::System::Threading::CancellationToken cancellationToken, char16_t delimiter,
    ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1) noexcept {
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
constexpr ::Newtonsoft::Json::Utilities::__JavaScriptUtils___WriteEscapedJavaScriptStringWithDelimitersAsync_d__13::__JavaScriptUtils___WriteEscapedJavaScriptStringWithDelimitersAsync_d__13() {}
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::JavaScriptUtils.GetCharEscapeFlags
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<bool, ::Array<bool>*> (*)(::Newtonsoft::Json::StringEscapeHandling, char16_t)>(
    &::Newtonsoft::Json::Utilities::JavaScriptUtils::GetCharEscapeFlags)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x3e5871c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::JavaScriptUtils*>::get(), "GetCharEscapeFlags", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::StringEscapeHandling>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::JavaScriptUtils.ShouldEscapeJavaScriptString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::ArrayW<bool, ::Array<bool>*>)>(
    &::Newtonsoft::Json::Utilities::JavaScriptUtils::ShouldEscapeJavaScriptString)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x3e587b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::JavaScriptUtils*>::get(), "ShouldEscapeJavaScriptString", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<bool, ::Array<bool>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::JavaScriptUtils.WriteEscapedJavaScriptString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::System::IO::TextWriter*, ::StringW, char16_t, bool, ::ArrayW<bool, ::Array<bool>*>, ::Newtonsoft::Json::StringEscapeHandling, ::Newtonsoft::Json::IArrayPool_1<char16_t>*,
                         ByRef<::ArrayW<char16_t, ::Array<char16_t>*>>)>(&::Newtonsoft::Json::Utilities::JavaScriptUtils::WriteEscapedJavaScriptString)> {
  constexpr static std::size_t size = 0x5f4;
  constexpr static std::size_t addrs = 0x3e5883c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::JavaScriptUtils*>::get(), "WriteEscapedJavaScriptString", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::TextWriter*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<bool, ::Array<bool>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::StringEscapeHandling>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::IArrayPool_1<char16_t>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<char16_t, ::Array<char16_t>*>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::JavaScriptUtils.ToEscapedJavaScriptString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, char16_t, bool, ::Newtonsoft::Json::StringEscapeHandling)>(
    &::Newtonsoft::Json::Utilities::JavaScriptUtils::ToEscapedJavaScriptString)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x3e58ee4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::JavaScriptUtils*>::get(), "ToEscapedJavaScriptString", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::StringEscapeHandling>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::JavaScriptUtils.FirstCharToEscape
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW, ::ArrayW<bool, ::Array<bool>*>, ::Newtonsoft::Json::StringEscapeHandling)>(
    &::Newtonsoft::Json::Utilities::JavaScriptUtils::FirstCharToEscape)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x3e58e30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::JavaScriptUtils*>::get(), "FirstCharToEscape", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<bool, ::Array<bool>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::StringEscapeHandling>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::JavaScriptUtils.WriteEscapedJavaScriptStringAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task* (*)(::System::IO::TextWriter*, ::StringW, char16_t, bool, ::ArrayW<bool, ::Array<bool>*>, ::Newtonsoft::Json::StringEscapeHandling,
                                                      ::Newtonsoft::Json::JsonTextWriter*, ::ArrayW<char16_t, ::Array<char16_t>*>, ::System::Threading::CancellationToken)>(
        &::Newtonsoft::Json::Utilities::JavaScriptUtils::WriteEscapedJavaScriptStringAsync)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x3e5910c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::JavaScriptUtils*>::get(), "WriteEscapedJavaScriptStringAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 9>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::TextWriter*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<bool, ::Array<bool>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::StringEscapeHandling>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonTextWriter*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::JavaScriptUtils.WriteEscapedJavaScriptStringWithDelimitersAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task* (*)(::System::IO::TextWriter*, ::StringW, char16_t, ::ArrayW<bool, ::Array<bool>*>, ::Newtonsoft::Json::StringEscapeHandling,
                                                      ::Newtonsoft::Json::JsonTextWriter*, ::ArrayW<char16_t, ::Array<char16_t>*>, ::System::Threading::CancellationToken)>(
        &::Newtonsoft::Json::Utilities::JavaScriptUtils::WriteEscapedJavaScriptStringWithDelimitersAsync)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x3e592cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::JavaScriptUtils*>::get(), "WriteEscapedJavaScriptStringWithDelimitersAsync",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::TextWriter*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<bool, ::Array<bool>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::StringEscapeHandling>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonTextWriter*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::JavaScriptUtils.WriteEscapedJavaScriptStringWithDelimitersAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task* (*)(::System::Threading::Tasks::Task*, ::System::IO::TextWriter*, ::StringW, char16_t, ::ArrayW<bool, ::Array<bool>*>,
                                                      ::Newtonsoft::Json::StringEscapeHandling, ::Newtonsoft::Json::JsonTextWriter*, ::ArrayW<char16_t, ::Array<char16_t>*>,
                                                      ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::Utilities::JavaScriptUtils::WriteEscapedJavaScriptStringWithDelimitersAsync)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x3e595f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::JavaScriptUtils*>::get(), "WriteEscapedJavaScriptStringWithDelimitersAsync",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 9>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::TextWriter*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<bool, ::Array<bool>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::StringEscapeHandling>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonTextWriter*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::JavaScriptUtils.WriteCharAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task* (*)(::System::Threading::Tasks::Task*, ::System::IO::TextWriter*, char16_t, ::System::Threading::CancellationToken)>(
        &::Newtonsoft::Json::Utilities::JavaScriptUtils::WriteCharAsync)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x3e5971c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::JavaScriptUtils*>::get(), "WriteCharAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::TextWriter*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::JavaScriptUtils.WriteEscapedJavaScriptStringWithoutDelimitersAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task* (*)(::System::IO::TextWriter*, ::StringW, ::ArrayW<bool, ::Array<bool>*>, ::Newtonsoft::Json::StringEscapeHandling,
                                                      ::Newtonsoft::Json::JsonTextWriter*, ::ArrayW<char16_t, ::Array<char16_t>*>, ::System::Threading::CancellationToken)>(
        &::Newtonsoft::Json::Utilities::JavaScriptUtils::WriteEscapedJavaScriptStringWithoutDelimitersAsync)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x3e594d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::JavaScriptUtils*>::get(),
                                                 "WriteEscapedJavaScriptStringWithoutDelimitersAsync", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::TextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<bool, ::Array<bool>*>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::StringEscapeHandling>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::JavaScriptUtils.WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task* (*)(::System::IO::TextWriter*, ::StringW, int32_t, ::ArrayW<bool, ::Array<bool>*>, ::Newtonsoft::Json::StringEscapeHandling,
                                                      ::Newtonsoft::Json::JsonTextWriter*, ::ArrayW<char16_t, ::Array<char16_t>*>, ::System::Threading::CancellationToken)>(
        &::Newtonsoft::Json::Utilities::JavaScriptUtils::WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x3e59808;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::JavaScriptUtils*>::get(), "WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::TextWriter*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<bool, ::Array<bool>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::StringEscapeHandling>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonTextWriter*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::JavaScriptUtils.TryGetDateFromConstructorJson
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Newtonsoft::Json::JsonReader*, ByRef<::System::DateTime>, ByRef<::StringW>)>(
    &::Newtonsoft::Json::Utilities::JavaScriptUtils::TryGetDateFromConstructorJson)> {
  constexpr static std::size_t size = 0x454;
  constexpr static std::size_t addrs = 0x3e59920;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::JavaScriptUtils*>::get(), "TryGetDateFromConstructorJson", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTime>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::JavaScriptUtils.TryGetDateConstructorValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Newtonsoft::Json::JsonReader*, ByRef<::System::Nullable_1<int64_t>>, ByRef<::StringW>)>(
    &::Newtonsoft::Json::Utilities::JavaScriptUtils::TryGetDateConstructorValue)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x3e59d74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::JavaScriptUtils*>::get(), "TryGetDateConstructorValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Nullable_1<int64_t>>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::Utilities::JavaScriptUtils::setStaticF_SingleQuoteCharEscapeFlags(::ArrayW<bool, ::Array<bool>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<bool, ::Array<bool>*>, "SingleQuoteCharEscapeFlags",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::JavaScriptUtils*>::get>(std::forward<::ArrayW<bool, ::Array<bool>*>>(value));
}
inline ::ArrayW<bool, ::Array<bool>*> Newtonsoft::Json::Utilities::JavaScriptUtils::getStaticF_SingleQuoteCharEscapeFlags() {
  return ::cordl_internals::getStaticField<::ArrayW<bool, ::Array<bool>*>, "SingleQuoteCharEscapeFlags",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::JavaScriptUtils*>::get>();
}
inline void Newtonsoft::Json::Utilities::JavaScriptUtils::setStaticF_DoubleQuoteCharEscapeFlags(::ArrayW<bool, ::Array<bool>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<bool, ::Array<bool>*>, "DoubleQuoteCharEscapeFlags",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::JavaScriptUtils*>::get>(std::forward<::ArrayW<bool, ::Array<bool>*>>(value));
}
inline ::ArrayW<bool, ::Array<bool>*> Newtonsoft::Json::Utilities::JavaScriptUtils::getStaticF_DoubleQuoteCharEscapeFlags() {
  return ::cordl_internals::getStaticField<::ArrayW<bool, ::Array<bool>*>, "DoubleQuoteCharEscapeFlags",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::JavaScriptUtils*>::get>();
}
inline void Newtonsoft::Json::Utilities::JavaScriptUtils::setStaticF_HtmlCharEscapeFlags(::ArrayW<bool, ::Array<bool>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<bool, ::Array<bool>*>, "HtmlCharEscapeFlags",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::JavaScriptUtils*>::get>(std::forward<::ArrayW<bool, ::Array<bool>*>>(value));
}
inline ::ArrayW<bool, ::Array<bool>*> Newtonsoft::Json::Utilities::JavaScriptUtils::getStaticF_HtmlCharEscapeFlags() {
  return ::cordl_internals::getStaticField<::ArrayW<bool, ::Array<bool>*>, "HtmlCharEscapeFlags",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::JavaScriptUtils*>::get>();
}
inline ::ArrayW<bool, ::Array<bool>*> Newtonsoft::Json::Utilities::JavaScriptUtils::GetCharEscapeFlags(::Newtonsoft::Json::StringEscapeHandling stringEscapeHandling, char16_t quoteChar) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::JavaScriptUtils*>::get(), "GetCharEscapeFlags", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::StringEscapeHandling>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<bool, ::Array<bool>*>, false>(nullptr, ___internal_method, stringEscapeHandling, quoteChar);
}
inline bool Newtonsoft::Json::Utilities::JavaScriptUtils::ShouldEscapeJavaScriptString(::StringW s, ::ArrayW<bool, ::Array<bool>*> charEscapeFlags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::JavaScriptUtils*>::get(), "ShouldEscapeJavaScriptString", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<bool, ::Array<bool>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, s, charEscapeFlags);
}
inline void Newtonsoft::Json::Utilities::JavaScriptUtils::WriteEscapedJavaScriptString(::System::IO::TextWriter* writer, ::StringW s, char16_t delimiter, bool appendDelimiters,
                                                                                       ::ArrayW<bool, ::Array<bool>*> charEscapeFlags, ::Newtonsoft::Json::StringEscapeHandling stringEscapeHandling,
                                                                                       ::Newtonsoft::Json::IArrayPool_1<char16_t>* bufferPool,
                                                                                       ByRef<::ArrayW<char16_t, ::Array<char16_t>*>> writeBuffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::JavaScriptUtils*>::get(), "WriteEscapedJavaScriptString", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::TextWriter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<bool, ::Array<bool>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::StringEscapeHandling>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::IArrayPool_1<char16_t>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<char16_t, ::Array<char16_t>*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, writer, s, delimiter, appendDelimiters, charEscapeFlags, stringEscapeHandling, bufferPool, writeBuffer);
}
inline ::StringW Newtonsoft::Json::Utilities::JavaScriptUtils::ToEscapedJavaScriptString(::StringW value, char16_t delimiter, bool appendDelimiters,
                                                                                         ::Newtonsoft::Json::StringEscapeHandling stringEscapeHandling) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::JavaScriptUtils*>::get(), "ToEscapedJavaScriptString", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::StringEscapeHandling>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, value, delimiter, appendDelimiters, stringEscapeHandling);
}
inline int32_t Newtonsoft::Json::Utilities::JavaScriptUtils::FirstCharToEscape(::StringW s, ::ArrayW<bool, ::Array<bool>*> charEscapeFlags,
                                                                               ::Newtonsoft::Json::StringEscapeHandling stringEscapeHandling) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::JavaScriptUtils*>::get(), "FirstCharToEscape", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<bool, ::Array<bool>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::StringEscapeHandling>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, s, charEscapeFlags, stringEscapeHandling);
}
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::Utilities::JavaScriptUtils::WriteEscapedJavaScriptStringAsync(::System::IO::TextWriter* writer, ::StringW s, char16_t delimiter,
                                                                                                                         bool appendDelimiters, ::ArrayW<bool, ::Array<bool>*> charEscapeFlags,
                                                                                                                         ::Newtonsoft::Json::StringEscapeHandling stringEscapeHandling,
                                                                                                                         ::Newtonsoft::Json::JsonTextWriter* client,
                                                                                                                         ::ArrayW<char16_t, ::Array<char16_t>*> writeBuffer,
                                                                                                                         ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::JavaScriptUtils*>::get(), "WriteEscapedJavaScriptStringAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 9>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::TextWriter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<bool, ::Array<bool>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::StringEscapeHandling>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonTextWriter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(nullptr, ___internal_method, writer, s, delimiter, appendDelimiters, charEscapeFlags, stringEscapeHandling,
                                                                                       client, writeBuffer, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::Utilities::JavaScriptUtils::WriteEscapedJavaScriptStringWithDelimitersAsync(
    ::System::IO::TextWriter* writer, ::StringW s, char16_t delimiter, ::ArrayW<bool, ::Array<bool>*> charEscapeFlags, ::Newtonsoft::Json::StringEscapeHandling stringEscapeHandling,
    ::Newtonsoft::Json::JsonTextWriter* client, ::ArrayW<char16_t, ::Array<char16_t>*> writeBuffer, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::JavaScriptUtils*>::get(), "WriteEscapedJavaScriptStringWithDelimitersAsync",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::TextWriter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<bool, ::Array<bool>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::StringEscapeHandling>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonTextWriter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(nullptr, ___internal_method, writer, s, delimiter, charEscapeFlags, stringEscapeHandling, client, writeBuffer,
                                                                                       cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::Utilities::JavaScriptUtils::WriteEscapedJavaScriptStringWithDelimitersAsync(
    ::System::Threading::Tasks::Task* task, ::System::IO::TextWriter* writer, ::StringW s, char16_t delimiter, ::ArrayW<bool, ::Array<bool>*> charEscapeFlags,
    ::Newtonsoft::Json::StringEscapeHandling stringEscapeHandling, ::Newtonsoft::Json::JsonTextWriter* client, ::ArrayW<char16_t, ::Array<char16_t>*> writeBuffer,
    ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::JavaScriptUtils*>::get(), "WriteEscapedJavaScriptStringWithDelimitersAsync",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 9>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::TextWriter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<bool, ::Array<bool>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::StringEscapeHandling>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonTextWriter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(nullptr, ___internal_method, task, writer, s, delimiter, charEscapeFlags, stringEscapeHandling, client,
                                                                                       writeBuffer, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::Utilities::JavaScriptUtils::WriteCharAsync(::System::Threading::Tasks::Task* task, ::System::IO::TextWriter* writer, char16_t c,
                                                                                                      ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::JavaScriptUtils*>::get(), "WriteCharAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::TextWriter*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(nullptr, ___internal_method, task, writer, c, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::Utilities::JavaScriptUtils::WriteEscapedJavaScriptStringWithoutDelimitersAsync(
    ::System::IO::TextWriter* writer, ::StringW s, ::ArrayW<bool, ::Array<bool>*> charEscapeFlags, ::Newtonsoft::Json::StringEscapeHandling stringEscapeHandling,
    ::Newtonsoft::Json::JsonTextWriter* client, ::ArrayW<char16_t, ::Array<char16_t>*> writeBuffer, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::JavaScriptUtils*>::get(),
                                               "WriteEscapedJavaScriptStringWithoutDelimitersAsync", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::TextWriter*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<bool, ::Array<bool>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::StringEscapeHandling>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonTextWriter*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(nullptr, ___internal_method, writer, s, charEscapeFlags, stringEscapeHandling, client, writeBuffer,
                                                                                       cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::Utilities::JavaScriptUtils::WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync(
    ::System::IO::TextWriter* writer, ::StringW s, int32_t lastWritePosition, ::ArrayW<bool, ::Array<bool>*> charEscapeFlags, ::Newtonsoft::Json::StringEscapeHandling stringEscapeHandling,
    ::Newtonsoft::Json::JsonTextWriter* client, ::ArrayW<char16_t, ::Array<char16_t>*> writeBuffer, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::JavaScriptUtils*>::get(), "WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::TextWriter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<bool, ::Array<bool>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::StringEscapeHandling>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonTextWriter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(nullptr, ___internal_method, writer, s, lastWritePosition, charEscapeFlags, stringEscapeHandling, client,
                                                                                       writeBuffer, cancellationToken);
}
inline bool Newtonsoft::Json::Utilities::JavaScriptUtils::TryGetDateFromConstructorJson(::Newtonsoft::Json::JsonReader* reader, ByRef<::System::DateTime> dateTime, ByRef<::StringW> errorMessage) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::JavaScriptUtils*>::get(), "TryGetDateFromConstructorJson", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTime>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, reader, dateTime, errorMessage);
}
inline bool Newtonsoft::Json::Utilities::JavaScriptUtils::TryGetDateConstructorValue(::Newtonsoft::Json::JsonReader* reader, ByRef<::System::Nullable_1<int64_t>> integer,
                                                                                     ByRef<::StringW> errorMessage) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::JavaScriptUtils*>::get(), "TryGetDateConstructorValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Nullable_1<int64_t>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, reader, integer, errorMessage);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Utilities::JavaScriptUtils::JavaScriptUtils() {}
