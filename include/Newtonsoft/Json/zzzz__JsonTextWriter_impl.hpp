#pragma once
// IWYU pragma private; include "Newtonsoft\Json\JsonTextWriter.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriter_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__DateTimeOffset_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__TimeSpan_impl.hpp"
#include "Newtonsoft/Json/zzzz__JsonTextWriter_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__Base64Encoder_def.hpp"
#include "Newtonsoft/Json/zzzz__IArrayPool_1_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonTextWriter_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonToken_def.hpp"
#include "System/IO/zzzz__TextWriter_def.hpp"
#include "System/Numerics/zzzz__BigInteger_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter__CloseBufferAndWriterAsync_d__9.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter__CloseBufferAndWriterAsync_d__9::*)()>(
    &::Newtonsoft::Json::JsonTextWriter__CloseBufferAndWriterAsync_d__9::MoveNext)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x5d00e64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter__CloseBufferAndWriterAsync_d__9>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter__CloseBufferAndWriterAsync_d__9.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter__CloseBufferAndWriterAsync_d__9::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Newtonsoft::Json::JsonTextWriter__CloseBufferAndWriterAsync_d__9::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d010a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter__CloseBufferAndWriterAsync_d__9>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonTextWriter__CloseBufferAndWriterAsync_d__9::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter__CloseBufferAndWriterAsync_d__9>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextWriter__CloseBufferAndWriterAsync_d__9::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter__CloseBufferAndWriterAsync_d__9>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextWriter__CloseBufferAndWriterAsync_d__9::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Newtonsoft::Json::JsonTextWriter__CloseBufferAndWriterAsync_d__9::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextWriter*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::JsonTextWriter__CloseBufferAndWriterAsync_d__9::JsonTextWriter__CloseBufferAndWriterAsync_d__9(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Newtonsoft::Json::JsonTextWriter* __4__this,
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextWriter__CloseBufferAndWriterAsync_d__9::JsonTextWriter__CloseBufferAndWriterAsync_d__9() {}
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter__DoCloseAsync_d__8.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter__DoCloseAsync_d__8::*)()>(&::Newtonsoft::Json::JsonTextWriter__DoCloseAsync_d__8::MoveNext)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x5d01110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter__DoCloseAsync_d__8>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter__DoCloseAsync_d__8.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter__DoCloseAsync_d__8::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Newtonsoft::Json::JsonTextWriter__DoCloseAsync_d__8::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d01464;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter__DoCloseAsync_d__8>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonTextWriter__DoCloseAsync_d__8::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter__DoCloseAsync_d__8>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextWriter__DoCloseAsync_d__8::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter__DoCloseAsync_d__8>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextWriter__DoCloseAsync_d__8::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Newtonsoft::Json::JsonTextWriter__DoCloseAsync_d__8::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextWriter*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::JsonTextWriter__DoCloseAsync_d__8::JsonTextWriter__DoCloseAsync_d__8(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                                                   ::Newtonsoft::Json::JsonTextWriter* __4__this,
                                                                                                   ::System::Threading::CancellationToken cancellationToken,
                                                                                                   ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextWriter__DoCloseAsync_d__8::JsonTextWriter__DoCloseAsync_d__8() {}
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter__DoWriteCommentAsync_d__115.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter__DoWriteCommentAsync_d__115::*)()>(
    &::Newtonsoft::Json::JsonTextWriter__DoWriteCommentAsync_d__115::MoveNext)> {
  constexpr static std::size_t size = 0x4b0;
  constexpr static std::size_t addrs = 0x5d014d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter__DoWriteCommentAsync_d__115>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter__DoWriteCommentAsync_d__115.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter__DoWriteCommentAsync_d__115::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Newtonsoft::Json::JsonTextWriter__DoWriteCommentAsync_d__115::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d0198c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter__DoWriteCommentAsync_d__115>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonTextWriter__DoWriteCommentAsync_d__115::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter__DoWriteCommentAsync_d__115>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextWriter__DoWriteCommentAsync_d__115::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter__DoWriteCommentAsync_d__115>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextWriter__DoWriteCommentAsync_d__115::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Newtonsoft::Json::JsonTextWriter__DoWriteCommentAsync_d__115::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextWriter*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "text", ty: "::StringW",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::JsonTextWriter__DoWriteCommentAsync_d__115::JsonTextWriter__DoWriteCommentAsync_d__115(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Newtonsoft::Json::JsonTextWriter* __4__this,
    ::System::Threading::CancellationToken cancellationToken, ::StringW text, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->text = text;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextWriter__DoWriteCommentAsync_d__115::JsonTextWriter__DoWriteCommentAsync_d__115() {}
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter__DoWritePropertyNameAsync_d__30.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter__DoWritePropertyNameAsync_d__30::*)()>(
    &::Newtonsoft::Json::JsonTextWriter__DoWritePropertyNameAsync_d__30::MoveNext)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x5d019f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter__DoWritePropertyNameAsync_d__30>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter__DoWritePropertyNameAsync_d__30.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter__DoWritePropertyNameAsync_d__30::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Newtonsoft::Json::JsonTextWriter__DoWritePropertyNameAsync_d__30::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d01d2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter__DoWritePropertyNameAsync_d__30>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonTextWriter__DoWritePropertyNameAsync_d__30::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter__DoWritePropertyNameAsync_d__30>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextWriter__DoWritePropertyNameAsync_d__30::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter__DoWritePropertyNameAsync_d__30>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextWriter__DoWritePropertyNameAsync_d__30::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Newtonsoft::Json::JsonTextWriter__DoWritePropertyNameAsync_d__30::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "task", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextWriter*", modifiers: "", def_value: Some("{}") }, CppParam { name: "name", ty: "::StringW", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::JsonTextWriter__DoWritePropertyNameAsync_d__30::JsonTextWriter__DoWritePropertyNameAsync_d__30(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Threading::Tasks::Task* task, ::Newtonsoft::Json::JsonTextWriter* __4__this, ::StringW name,
    ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->task = task;
  this->__4__this = __4__this;
  this->name = name;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextWriter__DoWritePropertyNameAsync_d__30::JsonTextWriter__DoWritePropertyNameAsync_d__30() {}
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter__DoWritePropertyNameAsync_d__32.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter__DoWritePropertyNameAsync_d__32::*)()>(
    &::Newtonsoft::Json::JsonTextWriter__DoWritePropertyNameAsync_d__32::MoveNext)> {
  constexpr static std::size_t size = 0x5a4;
  constexpr static std::size_t addrs = 0x5d01d98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter__DoWritePropertyNameAsync_d__32>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter__DoWritePropertyNameAsync_d__32.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter__DoWritePropertyNameAsync_d__32::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Newtonsoft::Json::JsonTextWriter__DoWritePropertyNameAsync_d__32::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d0240c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter__DoWritePropertyNameAsync_d__32>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonTextWriter__DoWritePropertyNameAsync_d__32::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter__DoWritePropertyNameAsync_d__32>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextWriter__DoWritePropertyNameAsync_d__32::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter__DoWritePropertyNameAsync_d__32>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextWriter__DoWritePropertyNameAsync_d__32::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Newtonsoft::Json::JsonTextWriter__DoWritePropertyNameAsync_d__32::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextWriter*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "escape", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::JsonTextWriter__DoWritePropertyNameAsync_d__32::JsonTextWriter__DoWritePropertyNameAsync_d__32(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Newtonsoft::Json::JsonTextWriter* __4__this, ::StringW name,
    ::System::Threading::CancellationToken cancellationToken, bool escape, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->name = name;
  this->cancellationToken = cancellationToken;
  this->escape = escape;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextWriter__DoWritePropertyNameAsync_d__32::JsonTextWriter__DoWritePropertyNameAsync_d__32() {}
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter__DoWriteRawValueAsync_d__121.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter__DoWriteRawValueAsync_d__121::*)()>(
    &::Newtonsoft::Json::JsonTextWriter__DoWriteRawValueAsync_d__121::MoveNext)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x5d02478;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter__DoWriteRawValueAsync_d__121>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter__DoWriteRawValueAsync_d__121.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter__DoWriteRawValueAsync_d__121::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Newtonsoft::Json::JsonTextWriter__DoWriteRawValueAsync_d__121::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d026f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter__DoWriteRawValueAsync_d__121>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonTextWriter__DoWriteRawValueAsync_d__121::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter__DoWriteRawValueAsync_d__121>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextWriter__DoWriteRawValueAsync_d__121::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter__DoWriteRawValueAsync_d__121>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextWriter__DoWriteRawValueAsync_d__121::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Newtonsoft::Json::JsonTextWriter__DoWriteRawValueAsync_d__121::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "task", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextWriter*", modifiers: "", def_value: Some("{}") }, CppParam { name: "json", ty: "::StringW", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::JsonTextWriter__DoWriteRawValueAsync_d__121::JsonTextWriter__DoWriteRawValueAsync_d__121(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Threading::Tasks::Task* task, ::Newtonsoft::Json::JsonTextWriter* __4__this, ::StringW json,
    ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->task = task;
  this->__4__this = __4__this;
  this->json = json;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextWriter__DoWriteRawValueAsync_d__121::JsonTextWriter__DoWriteRawValueAsync_d__121() {}
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter__DoWriteStartArrayAsync_d__35.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter__DoWriteStartArrayAsync_d__35::*)()>(
    &::Newtonsoft::Json::JsonTextWriter__DoWriteStartArrayAsync_d__35::MoveNext)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x5d0275c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter__DoWriteStartArrayAsync_d__35>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter__DoWriteStartArrayAsync_d__35.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter__DoWriteStartArrayAsync_d__35::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Newtonsoft::Json::JsonTextWriter__DoWriteStartArrayAsync_d__35::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d02a08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter__DoWriteStartArrayAsync_d__35>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonTextWriter__DoWriteStartArrayAsync_d__35::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter__DoWriteStartArrayAsync_d__35>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextWriter__DoWriteStartArrayAsync_d__35::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter__DoWriteStartArrayAsync_d__35>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextWriter__DoWriteStartArrayAsync_d__35::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Newtonsoft::Json::JsonTextWriter__DoWriteStartArrayAsync_d__35::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "task", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextWriter*", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::JsonTextWriter__DoWriteStartArrayAsync_d__35::JsonTextWriter__DoWriteStartArrayAsync_d__35(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Threading::Tasks::Task* task, ::Newtonsoft::Json::JsonTextWriter* __4__this,
    ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->task = task;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextWriter__DoWriteStartArrayAsync_d__35::JsonTextWriter__DoWriteStartArrayAsync_d__35() {}
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter__DoWriteStartConstructorAsync_d__40.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter__DoWriteStartConstructorAsync_d__40::*)()>(
    &::Newtonsoft::Json::JsonTextWriter__DoWriteStartConstructorAsync_d__40::MoveNext)> {
  constexpr static std::size_t size = 0x474;
  constexpr static std::size_t addrs = 0x5d02a74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter__DoWriteStartConstructorAsync_d__40>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter__DoWriteStartConstructorAsync_d__40.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter__DoWriteStartConstructorAsync_d__40::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Newtonsoft::Json::JsonTextWriter__DoWriteStartConstructorAsync_d__40::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d02fc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter__DoWriteStartConstructorAsync_d__40>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonTextWriter__DoWriteStartConstructorAsync_d__40::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter__DoWriteStartConstructorAsync_d__40>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextWriter__DoWriteStartConstructorAsync_d__40::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter__DoWriteStartConstructorAsync_d__40>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextWriter__DoWriteStartConstructorAsync_d__40::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Newtonsoft::Json::JsonTextWriter__DoWriteStartConstructorAsync_d__40::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextWriter*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "name", ty: "::StringW",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::JsonTextWriter__DoWriteStartConstructorAsync_d__40::JsonTextWriter__DoWriteStartConstructorAsync_d__40(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Newtonsoft::Json::JsonTextWriter* __4__this,
    ::System::Threading::CancellationToken cancellationToken, ::StringW name, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->name = name;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextWriter__DoWriteStartConstructorAsync_d__40::JsonTextWriter__DoWriteStartConstructorAsync_d__40() {}
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter__DoWriteStartObjectAsync_d__38.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter__DoWriteStartObjectAsync_d__38::*)()>(
    &::Newtonsoft::Json::JsonTextWriter__DoWriteStartObjectAsync_d__38::MoveNext)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x5d03030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter__DoWriteStartObjectAsync_d__38>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter__DoWriteStartObjectAsync_d__38.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter__DoWriteStartObjectAsync_d__38::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Newtonsoft::Json::JsonTextWriter__DoWriteStartObjectAsync_d__38::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d032dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter__DoWriteStartObjectAsync_d__38>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonTextWriter__DoWriteStartObjectAsync_d__38::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter__DoWriteStartObjectAsync_d__38>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextWriter__DoWriteStartObjectAsync_d__38::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter__DoWriteStartObjectAsync_d__38>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextWriter__DoWriteStartObjectAsync_d__38::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Newtonsoft::Json::JsonTextWriter__DoWriteStartObjectAsync_d__38::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "task", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextWriter*", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::JsonTextWriter__DoWriteStartObjectAsync_d__38::JsonTextWriter__DoWriteStartObjectAsync_d__38(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Threading::Tasks::Task* task, ::Newtonsoft::Json::JsonTextWriter* __4__this,
    ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->task = task;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextWriter__DoWriteStartObjectAsync_d__38::JsonTextWriter__DoWriteStartObjectAsync_d__38() {}
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter__DoWriteUndefinedAsync_d__43.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter__DoWriteUndefinedAsync_d__43::*)()>(
    &::Newtonsoft::Json::JsonTextWriter__DoWriteUndefinedAsync_d__43::MoveNext)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x5d03348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter__DoWriteUndefinedAsync_d__43>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter__DoWriteUndefinedAsync_d__43.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter__DoWriteUndefinedAsync_d__43::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Newtonsoft::Json::JsonTextWriter__DoWriteUndefinedAsync_d__43::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d0363c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter__DoWriteUndefinedAsync_d__43>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonTextWriter__DoWriteUndefinedAsync_d__43::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter__DoWriteUndefinedAsync_d__43>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextWriter__DoWriteUndefinedAsync_d__43::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter__DoWriteUndefinedAsync_d__43>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextWriter__DoWriteUndefinedAsync_d__43::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Newtonsoft::Json::JsonTextWriter__DoWriteUndefinedAsync_d__43::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "task", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextWriter*", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::JsonTextWriter__DoWriteUndefinedAsync_d__43::JsonTextWriter__DoWriteUndefinedAsync_d__43(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Threading::Tasks::Task* task, ::Newtonsoft::Json::JsonTextWriter* __4__this,
    ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->task = task;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextWriter__DoWriteUndefinedAsync_d__43::JsonTextWriter__DoWriteUndefinedAsync_d__43() {}
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter__DoWriteValueAsync_d__60.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter__DoWriteValueAsync_d__60::*)()>(
    &::Newtonsoft::Json::JsonTextWriter__DoWriteValueAsync_d__60::MoveNext)> {
  constexpr static std::size_t size = 0x5c4;
  constexpr static std::size_t addrs = 0x5d036a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter__DoWriteValueAsync_d__60>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter__DoWriteValueAsync_d__60.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter__DoWriteValueAsync_d__60::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Newtonsoft::Json::JsonTextWriter__DoWriteValueAsync_d__60::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d03db8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter__DoWriteValueAsync_d__60>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonTextWriter__DoWriteValueAsync_d__60::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter__DoWriteValueAsync_d__60>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextWriter__DoWriteValueAsync_d__60::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter__DoWriteValueAsync_d__60>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextWriter__DoWriteValueAsync_d__60::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Newtonsoft::Json::JsonTextWriter__DoWriteValueAsync_d__60::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextWriter*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty:
// "::System::DateTime", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "",
// def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::JsonTextWriter__DoWriteValueAsync_d__60::JsonTextWriter__DoWriteValueAsync_d__60(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Newtonsoft::Json::JsonTextWriter* __4__this,
    ::System::Threading::CancellationToken cancellationToken, ::System::DateTime value, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->value = value;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextWriter__DoWriteValueAsync_d__60::JsonTextWriter__DoWriteValueAsync_d__60() {}
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter__DoWriteValueAsync_d__64.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter__DoWriteValueAsync_d__64::*)()>(
    &::Newtonsoft::Json::JsonTextWriter__DoWriteValueAsync_d__64::MoveNext)> {
  constexpr static std::size_t size = 0x578;
  constexpr static std::size_t addrs = 0x5d03e24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter__DoWriteValueAsync_d__64>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter__DoWriteValueAsync_d__64.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter__DoWriteValueAsync_d__64::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Newtonsoft::Json::JsonTextWriter__DoWriteValueAsync_d__64::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d0439c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter__DoWriteValueAsync_d__64>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonTextWriter__DoWriteValueAsync_d__64::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter__DoWriteValueAsync_d__64>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextWriter__DoWriteValueAsync_d__64::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter__DoWriteValueAsync_d__64>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextWriter__DoWriteValueAsync_d__64::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Newtonsoft::Json::JsonTextWriter__DoWriteValueAsync_d__64::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextWriter*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty:
// "::System::DateTimeOffset", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers:
// "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::JsonTextWriter__DoWriteValueAsync_d__64::JsonTextWriter__DoWriteValueAsync_d__64(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Newtonsoft::Json::JsonTextWriter* __4__this,
    ::System::Threading::CancellationToken cancellationToken, ::System::DateTimeOffset value, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->value = value;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextWriter__DoWriteValueAsync_d__64::JsonTextWriter__DoWriteValueAsync_d__64() {}
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter__DoWriteValueAsync_d__78.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter__DoWriteValueAsync_d__78::*)()>(
    &::Newtonsoft::Json::JsonTextWriter__DoWriteValueAsync_d__78::MoveNext)> {
  constexpr static std::size_t size = 0x4b4;
  constexpr static std::size_t addrs = 0x5d04408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter__DoWriteValueAsync_d__78>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter__DoWriteValueAsync_d__78.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter__DoWriteValueAsync_d__78::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Newtonsoft::Json::JsonTextWriter__DoWriteValueAsync_d__78::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d048bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter__DoWriteValueAsync_d__78>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonTextWriter__DoWriteValueAsync_d__78::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter__DoWriteValueAsync_d__78>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextWriter__DoWriteValueAsync_d__78::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter__DoWriteValueAsync_d__78>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextWriter__DoWriteValueAsync_d__78::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Newtonsoft::Json::JsonTextWriter__DoWriteValueAsync_d__78::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextWriter*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "::System::Guid",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::JsonTextWriter__DoWriteValueAsync_d__78::JsonTextWriter__DoWriteValueAsync_d__78(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Newtonsoft::Json::JsonTextWriter* __4__this,
    ::System::Threading::CancellationToken cancellationToken, ::System::Guid value, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->value = value;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextWriter__DoWriteValueAsync_d__78::JsonTextWriter__DoWriteValueAsync_d__78() {}
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter__DoWriteValueAsync_d__97.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter__DoWriteValueAsync_d__97::*)()>(
    &::Newtonsoft::Json::JsonTextWriter__DoWriteValueAsync_d__97::MoveNext)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x5d04928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter__DoWriteValueAsync_d__97>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter__DoWriteValueAsync_d__97.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter__DoWriteValueAsync_d__97::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Newtonsoft::Json::JsonTextWriter__DoWriteValueAsync_d__97::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d04c4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter__DoWriteValueAsync_d__97>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonTextWriter__DoWriteValueAsync_d__97::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter__DoWriteValueAsync_d__97>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextWriter__DoWriteValueAsync_d__97::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter__DoWriteValueAsync_d__97>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextWriter__DoWriteValueAsync_d__97::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Newtonsoft::Json::JsonTextWriter__DoWriteValueAsync_d__97::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "task", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "value", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextWriter*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::JsonTextWriter__DoWriteValueAsync_d__97::JsonTextWriter__DoWriteValueAsync_d__97(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Threading::Tasks::Task* task, ::StringW value,
    ::Newtonsoft::Json::JsonTextWriter* __4__this, ::System::Threading::CancellationToken cancellationToken,
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->task = task;
  this->value = value;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextWriter__DoWriteValueAsync_d__97::JsonTextWriter__DoWriteValueAsync_d__97() {}
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter__DoWriteValueAsync_d__99.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter__DoWriteValueAsync_d__99::*)()>(
    &::Newtonsoft::Json::JsonTextWriter__DoWriteValueAsync_d__99::MoveNext)> {
  constexpr static std::size_t size = 0x4f0;
  constexpr static std::size_t addrs = 0x5d04cb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter__DoWriteValueAsync_d__99>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter__DoWriteValueAsync_d__99.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter__DoWriteValueAsync_d__99::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Newtonsoft::Json::JsonTextWriter__DoWriteValueAsync_d__99::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d051a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter__DoWriteValueAsync_d__99>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonTextWriter__DoWriteValueAsync_d__99::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter__DoWriteValueAsync_d__99>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextWriter__DoWriteValueAsync_d__99::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter__DoWriteValueAsync_d__99>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextWriter__DoWriteValueAsync_d__99::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Newtonsoft::Json::JsonTextWriter__DoWriteValueAsync_d__99::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextWriter*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty:
// "::System::TimeSpan", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "",
// def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::JsonTextWriter__DoWriteValueAsync_d__99::JsonTextWriter__DoWriteValueAsync_d__99(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Newtonsoft::Json::JsonTextWriter* __4__this,
    ::System::Threading::CancellationToken cancellationToken, ::System::TimeSpan value, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->value = value;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextWriter__DoWriteValueAsync_d__99::JsonTextWriter__DoWriteValueAsync_d__99() {}
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter__WriteIndentAsync_d__13.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter__WriteIndentAsync_d__13::*)()>(&::Newtonsoft::Json::JsonTextWriter__WriteIndentAsync_d__13::MoveNext)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x5d05214;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter__WriteIndentAsync_d__13>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter__WriteIndentAsync_d__13.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter__WriteIndentAsync_d__13::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Newtonsoft::Json::JsonTextWriter__WriteIndentAsync_d__13::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d05594;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter__WriteIndentAsync_d__13>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonTextWriter__WriteIndentAsync_d__13::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter__WriteIndentAsync_d__13>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextWriter__WriteIndentAsync_d__13::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter__WriteIndentAsync_d__13>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextWriter__WriteIndentAsync_d__13::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Newtonsoft::Json::JsonTextWriter__WriteIndentAsync_d__13::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextWriter*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "newLineLen", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "currentIndentCount", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::JsonTextWriter__WriteIndentAsync_d__13::JsonTextWriter__WriteIndentAsync_d__13(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Newtonsoft::Json::JsonTextWriter* __4__this, int32_t newLineLen, int32_t currentIndentCount,
    ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->newLineLen = newLineLen;
  this->currentIndentCount = currentIndentCount;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextWriter__WriteIndentAsync_d__13::JsonTextWriter__WriteIndentAsync_d__13() {}
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter__WriteIntegerValueAsync_d__24.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter__WriteIntegerValueAsync_d__24::*)()>(
    &::Newtonsoft::Json::JsonTextWriter__WriteIntegerValueAsync_d__24::MoveNext)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x5d05600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter__WriteIntegerValueAsync_d__24>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter__WriteIntegerValueAsync_d__24.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter__WriteIntegerValueAsync_d__24::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Newtonsoft::Json::JsonTextWriter__WriteIntegerValueAsync_d__24::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d0587c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter__WriteIntegerValueAsync_d__24>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonTextWriter__WriteIntegerValueAsync_d__24::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter__WriteIntegerValueAsync_d__24>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextWriter__WriteIntegerValueAsync_d__24::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter__WriteIntegerValueAsync_d__24>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextWriter__WriteIntegerValueAsync_d__24::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Newtonsoft::Json::JsonTextWriter__WriteIntegerValueAsync_d__24::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "task", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextWriter*", modifiers: "", def_value: Some("{}") }, CppParam { name: "uvalue", ty: "uint64_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "negative", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::JsonTextWriter__WriteIntegerValueAsync_d__24::JsonTextWriter__WriteIntegerValueAsync_d__24(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Threading::Tasks::Task* task, ::Newtonsoft::Json::JsonTextWriter* __4__this,
    uint64_t uvalue, bool negative, ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->task = task;
  this->__4__this = __4__this;
  this->uvalue = uvalue;
  this->negative = negative;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextWriter__WriteIntegerValueAsync_d__24::JsonTextWriter__WriteIntegerValueAsync_d__24() {}
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter__WriteValueInternalAsync_d__15.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter__WriteValueInternalAsync_d__15::*)()>(
    &::Newtonsoft::Json::JsonTextWriter__WriteValueInternalAsync_d__15::MoveNext)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x5d058e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter__WriteValueInternalAsync_d__15>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter__WriteValueInternalAsync_d__15.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter__WriteValueInternalAsync_d__15::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Newtonsoft::Json::JsonTextWriter__WriteValueInternalAsync_d__15::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d05ba0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter__WriteValueInternalAsync_d__15>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonTextWriter__WriteValueInternalAsync_d__15::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter__WriteValueInternalAsync_d__15>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextWriter__WriteValueInternalAsync_d__15::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter__WriteValueInternalAsync_d__15>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextWriter__WriteValueInternalAsync_d__15::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Newtonsoft::Json::JsonTextWriter__WriteValueInternalAsync_d__15::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "task", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextWriter*", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "::StringW", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::JsonTextWriter__WriteValueInternalAsync_d__15::JsonTextWriter__WriteValueInternalAsync_d__15(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Threading::Tasks::Task* task, ::Newtonsoft::Json::JsonTextWriter* __4__this,
    ::StringW value, ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->task = task;
  this->__4__this = __4__this;
  this->value = value;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextWriter__WriteValueInternalAsync_d__15::JsonTextWriter__WriteValueInternalAsync_d__15() {}
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter__WriteValueNonNullAsync_d__54.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter__WriteValueNonNullAsync_d__54::*)()>(
    &::Newtonsoft::Json::JsonTextWriter__WriteValueNonNullAsync_d__54::MoveNext)> {
  constexpr static std::size_t size = 0x4fc;
  constexpr static std::size_t addrs = 0x5d05c0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter__WriteValueNonNullAsync_d__54>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter__WriteValueNonNullAsync_d__54.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter__WriteValueNonNullAsync_d__54::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Newtonsoft::Json::JsonTextWriter__WriteValueNonNullAsync_d__54::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d06108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter__WriteValueNonNullAsync_d__54>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonTextWriter__WriteValueNonNullAsync_d__54::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter__WriteValueNonNullAsync_d__54>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextWriter__WriteValueNonNullAsync_d__54::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter__WriteValueNonNullAsync_d__54>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextWriter__WriteValueNonNullAsync_d__54::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Newtonsoft::Json::JsonTextWriter__WriteValueNonNullAsync_d__54::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextWriter*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty:
// "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "",
// def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::JsonTextWriter__WriteValueNonNullAsync_d__54::JsonTextWriter__WriteValueNonNullAsync_d__54(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Newtonsoft::Json::JsonTextWriter* __4__this,
    ::System::Threading::CancellationToken cancellationToken, ::ArrayW<uint8_t> value, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->value = value;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextWriter__WriteValueNonNullAsync_d__54::JsonTextWriter__WriteValueNonNullAsync_d__54() {}
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter__WriteValueNotNullAsync_d__110.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter__WriteValueNotNullAsync_d__110::*)()>(
    &::Newtonsoft::Json::JsonTextWriter__WriteValueNotNullAsync_d__110::MoveNext)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x5d06174;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter__WriteValueNotNullAsync_d__110>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter__WriteValueNotNullAsync_d__110.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter__WriteValueNotNullAsync_d__110::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Newtonsoft::Json::JsonTextWriter__WriteValueNotNullAsync_d__110::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d0641c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter__WriteValueNotNullAsync_d__110>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonTextWriter__WriteValueNotNullAsync_d__110::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter__WriteValueNotNullAsync_d__110>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextWriter__WriteValueNotNullAsync_d__110::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter__WriteValueNotNullAsync_d__110>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextWriter__WriteValueNotNullAsync_d__110::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Newtonsoft::Json::JsonTextWriter__WriteValueNotNullAsync_d__110::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "task", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextWriter*", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "::System::Uri*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::JsonTextWriter__WriteValueNotNullAsync_d__110::JsonTextWriter__WriteValueNotNullAsync_d__110(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Threading::Tasks::Task* task, ::Newtonsoft::Json::JsonTextWriter* __4__this,
    ::System::Uri* value, ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->task = task;
  this->__4__this = __4__this;
  this->value = value;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextWriter__WriteValueNotNullAsync_d__110::JsonTextWriter__WriteValueNotNullAsync_d__110() {}
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.FlushAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextWriter::*)(::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextWriter::FlushAsync)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5cfb348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.DoFlushAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextWriter::*)(::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextWriter::DoFlushAsync)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5cfb35c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { "DoFlushAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValueDelimiterAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextWriter::*)(::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextWriter::WriteValueDelimiterAsync)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5cfb3f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.DoWriteValueDelimiterAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextWriter::*)(::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextWriter::DoWriteValueDelimiterAsync)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5cfb408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { "DoWriteValueDelimiterAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteEndAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::Newtonsoft::Json::JsonTextWriter::*)(::Newtonsoft::Json::JsonToken, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextWriter::WriteEndAsync)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5cfb47c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.DoWriteEndAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::Newtonsoft::Json::JsonTextWriter::*)(::Newtonsoft::Json::JsonToken, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextWriter::DoWriteEndAsync)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5cfb490;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                                { "DoWriteEndAsync", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonToken>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.CloseAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextWriter::*)(::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextWriter::CloseAsync)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5cfb5e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.DoCloseAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextWriter::*)(::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextWriter::DoCloseAsync)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5cfb5f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { "DoCloseAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.CloseBufferAndWriterAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextWriter::*)()>(&::Newtonsoft::Json::JsonTextWriter::CloseBufferAndWriterAsync)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5cfb6b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { "CloseBufferAndWriterAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteEndAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextWriter::*)(::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextWriter::WriteEndAsync)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5cfb768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteIndentAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextWriter::*)(::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextWriter::WriteIndentAsync)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5cfb780;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.DoWriteIndentAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextWriter::*)(::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextWriter::DoWriteIndentAsync)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5cfb794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { "DoWriteIndentAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteIndentAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextWriter::*)(int32_t, int32_t, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextWriter::WriteIndentAsync)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5cfb934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                                { "WriteIndentAsync", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValueInternalAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::Newtonsoft::Json::JsonTextWriter::*)(::Newtonsoft::Json::JsonToken, ::StringW, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextWriter::WriteValueInternalAsync)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5cfba0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
            { "WriteValueInternalAsync", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonToken>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValueInternalAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::Newtonsoft::Json::JsonTextWriter::*)(::System::Threading::Tasks::Task*, ::StringW, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextWriter::WriteValueInternalAsync)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5cfbafc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
            { "WriteValueInternalAsync", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteIndentSpaceAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextWriter::*)(::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextWriter::WriteIndentSpaceAsync)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5cfbbd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.DoWriteIndentSpaceAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextWriter::*)(::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextWriter::DoWriteIndentSpaceAsync)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5cfbbe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { "DoWriteIndentSpaceAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteRawAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextWriter::*)(::StringW, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextWriter::WriteRawAsync)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5cfbc5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.DoWriteRawAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextWriter::*)(::StringW, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextWriter::DoWriteRawAsync)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5cfbc70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                                             { "DoWriteRawAsync", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteNullAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextWriter::*)(::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextWriter::WriteNullAsync)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5cfbce8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.DoWriteNullAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextWriter::*)(::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextWriter::DoWriteNullAsync)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5cfbcfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { "DoWriteNullAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteDigitsAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextWriter::*)(uint64_t, bool, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextWriter::WriteDigitsAsync)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5cfbd74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                                { "WriteDigitsAsync", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteIntegerValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextWriter::*)(uint64_t, bool, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextWriter::WriteIntegerValueAsync)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5cfbf4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                                { "WriteIntegerValueAsync", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteIntegerValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::Newtonsoft::Json::JsonTextWriter::*)(::System::Threading::Tasks::Task*, uint64_t, bool, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextWriter::WriteIntegerValueAsync)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5cfc02c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { "WriteIntegerValueAsync",
                                                                                                          {},
                                                                                                          { ::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<uint64_t>(),
                                                                                                            ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteIntegerValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextWriter::*)(int64_t, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextWriter::WriteIntegerValueAsync)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5cfc114;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                                             { "WriteIntegerValueAsync", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteIntegerValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextWriter::*)(uint64_t, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextWriter::WriteIntegerValueAsync)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cfc128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                                             { "WriteIntegerValueAsync", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteEscapedStringAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextWriter::*)(::StringW, bool, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextWriter::WriteEscapedStringAsync)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5cfc134;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                                { "WriteEscapedStringAsync", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WritePropertyNameAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextWriter::*)(::StringW, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextWriter::WritePropertyNameAsync)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5cfc1ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.DoWritePropertyNameAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextWriter::*)(::StringW, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextWriter::DoWritePropertyNameAsync)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5cfc200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                                             { "DoWritePropertyNameAsync", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.DoWritePropertyNameAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::Newtonsoft::Json::JsonTextWriter::*)(::System::Threading::Tasks::Task*, ::StringW, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextWriter::DoWritePropertyNameAsync)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5cfc370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
            { "DoWritePropertyNameAsync", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WritePropertyNameAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextWriter::*)(::StringW, bool, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextWriter::WritePropertyNameAsync)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5cfc448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.DoWritePropertyNameAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextWriter::*)(::StringW, bool, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextWriter::DoWritePropertyNameAsync)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5cfc464;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                         { "DoWritePropertyNameAsync", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteStartArrayAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextWriter::*)(::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextWriter::WriteStartArrayAsync)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5cfc540;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.DoWriteStartArrayAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextWriter::*)(::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextWriter::DoWriteStartArrayAsync)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5cfc554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { "DoWriteStartArrayAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.DoWriteStartArrayAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::Newtonsoft::Json::JsonTextWriter::*)(::System::Threading::Tasks::Task*, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextWriter::DoWriteStartArrayAsync)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5cfc630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                                { "DoWriteStartArrayAsync", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteStartObjectAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextWriter::*)(::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextWriter::WriteStartObjectAsync)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5cfc6f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.DoWriteStartObjectAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextWriter::*)(::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextWriter::DoWriteStartObjectAsync)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5cfc70c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { "DoWriteStartObjectAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.DoWriteStartObjectAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::Newtonsoft::Json::JsonTextWriter::*)(::System::Threading::Tasks::Task*, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextWriter::DoWriteStartObjectAsync)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5cfc7e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                                { "DoWriteStartObjectAsync", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteStartConstructorAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextWriter::*)(::StringW, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextWriter::WriteStartConstructorAsync)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5cfc8b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.DoWriteStartConstructorAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextWriter::*)(::StringW, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextWriter::DoWriteStartConstructorAsync)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5cfc8c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                                             { "DoWriteStartConstructorAsync", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteUndefinedAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextWriter::*)(::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextWriter::WriteUndefinedAsync)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5cfc98c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 63 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.DoWriteUndefinedAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextWriter::*)(::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextWriter::DoWriteUndefinedAsync)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5cfc9a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { "DoWriteUndefinedAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.DoWriteUndefinedAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::Newtonsoft::Json::JsonTextWriter::*)(::System::Threading::Tasks::Task*, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextWriter::DoWriteUndefinedAsync)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5cfcab0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                                { "DoWriteUndefinedAsync", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteWhitespaceAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextWriter::*)(::StringW, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextWriter::WriteWhitespaceAsync)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5cfcb78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 64 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.DoWriteWhitespaceAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextWriter::*)(::StringW, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextWriter::DoWriteWhitespaceAsync)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5cfcb8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                                             { "DoWriteWhitespaceAsync", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextWriter::*)(bool, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextWriter::WriteValueAsync)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5cfcc14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.DoWriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextWriter::*)(bool, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextWriter::DoWriteValueAsync)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5cfcc30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                                             { "DoWriteValueAsync", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextWriter::*)(::System::Nullable_1<bool>, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextWriter::WriteValueAsync)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5cfccb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.DoWriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextWriter::*)(::System::Nullable_1<bool>, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextWriter::DoWriteValueAsync)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5cfcccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                                             { "DoWriteValueAsync", {}, { ::i2c::type_of<::System::Nullable_1<bool>>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextWriter::*)(uint8_t, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextWriter::WriteValueAsync)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5cfcd60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::Newtonsoft::Json::JsonTextWriter::*)(::System::Nullable_1<uint8_t>, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextWriter::WriteValueAsync)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5cfcd84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.DoWriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::Newtonsoft::Json::JsonTextWriter::*)(::System::Nullable_1<uint8_t>, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextWriter::DoWriteValueAsync)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5cfcda0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                                { "DoWriteValueAsync", {}, { ::i2c::type_of<::System::Nullable_1<uint8_t>>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextWriter::*)(::ArrayW<uint8_t>, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextWriter::WriteValueAsync)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5cfce34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValueNonNullAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextWriter::*)(::ArrayW<uint8_t>, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextWriter::WriteValueNonNullAsync)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5cfce64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                                             { "WriteValueNonNullAsync", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextWriter::*)(char16_t, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextWriter::WriteValueAsync)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5cfcf2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.DoWriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextWriter::*)(char16_t, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextWriter::DoWriteValueAsync)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5cfcf40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                                             { "DoWriteValueAsync", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::Newtonsoft::Json::JsonTextWriter::*)(::System::Nullable_1<char16_t>, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextWriter::WriteValueAsync)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5cfcfc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.DoWriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::Newtonsoft::Json::JsonTextWriter::*)(::System::Nullable_1<char16_t>, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextWriter::DoWriteValueAsync)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5cfcfdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                                { "DoWriteValueAsync", {}, { ::i2c::type_of<::System::Nullable_1<char16_t>>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextWriter::*)(::System::DateTime, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextWriter::WriteValueAsync)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5cfd06c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.DoWriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextWriter::*)(::System::DateTime, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextWriter::DoWriteValueAsync)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5cfd080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                                             { "DoWriteValueAsync", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::Newtonsoft::Json::JsonTextWriter::*)(::System::Nullable_1<::System::DateTime>, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextWriter::WriteValueAsync)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5cfd148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.DoWriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::Newtonsoft::Json::JsonTextWriter::*)(::System::Nullable_1<::System::DateTime>, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextWriter::DoWriteValueAsync)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5cfd15c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                         { "DoWriteValueAsync", {}, { ::i2c::type_of<::System::Nullable_1<::System::DateTime>>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextWriter::*)(::System::DateTimeOffset, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextWriter::WriteValueAsync)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5cfd1f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 34 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.DoWriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextWriter::*)(::System::DateTimeOffset, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextWriter::DoWriteValueAsync)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5cfd20c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                                             { "DoWriteValueAsync", {}, { ::i2c::type_of<::System::DateTimeOffset>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::Newtonsoft::Json::JsonTextWriter::*)(::System::Nullable_1<::System::DateTimeOffset>, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextWriter::WriteValueAsync)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5cfd2e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 35 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.DoWriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::Newtonsoft::Json::JsonTextWriter::*)(::System::Nullable_1<::System::DateTimeOffset>, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextWriter::DoWriteValueAsync)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5cfd338;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                         { "DoWriteValueAsync", {}, { ::i2c::type_of<::System::Nullable_1<::System::DateTimeOffset>>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextWriter::*)(::System::Decimal, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextWriter::WriteValueAsync)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5cfd3c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 36 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.DoWriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextWriter::*)(::System::Decimal, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextWriter::DoWriteValueAsync)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5cfd3dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                                             { "DoWriteValueAsync", {}, { ::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::Newtonsoft::Json::JsonTextWriter::*)(::System::Nullable_1<::System::Decimal>, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextWriter::WriteValueAsync)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5cfd46c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 37 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.DoWriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::Newtonsoft::Json::JsonTextWriter::*)(::System::Nullable_1<::System::Decimal>, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextWriter::DoWriteValueAsync)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5cfd4e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                                { "DoWriteValueAsync", {}, { ::i2c::type_of<::System::Nullable_1<::System::Decimal>>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextWriter::*)(double_t, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextWriter::WriteValueAsync)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5cfd570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 38 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextWriter::*)(double_t, bool, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextWriter::WriteValueAsync)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5cfd590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                                { "WriteValueAsync", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::Newtonsoft::Json::JsonTextWriter::*)(::System::Nullable_1<double_t>, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextWriter::WriteValueAsync)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5cfd630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 39 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextWriter::*)(float_t, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextWriter::WriteValueAsync)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5cfd710;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 40 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextWriter::*)(float_t, bool, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextWriter::WriteValueAsync)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5cfd730;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                                { "WriteValueAsync", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::Newtonsoft::Json::JsonTextWriter::*)(::System::Nullable_1<float_t>, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextWriter::WriteValueAsync)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5cfd7d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 41 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextWriter::*)(::System::Guid, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextWriter::WriteValueAsync)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5cfd89c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 42 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.DoWriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextWriter::*)(::System::Guid, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextWriter::DoWriteValueAsync)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5cfd8b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                                             { "DoWriteValueAsync", {}, { ::i2c::type_of<::System::Guid>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::Newtonsoft::Json::JsonTextWriter::*)(::System::Nullable_1<::System::Guid>, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextWriter::WriteValueAsync)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5cfd988;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 43 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.DoWriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::Newtonsoft::Json::JsonTextWriter::*)(::System::Nullable_1<::System::Guid>, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextWriter::DoWriteValueAsync)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5cfd9dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                                { "DoWriteValueAsync", {}, { ::i2c::type_of<::System::Nullable_1<::System::Guid>>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextWriter::*)(int32_t, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextWriter::WriteValueAsync)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5cfda70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 44 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::Newtonsoft::Json::JsonTextWriter::*)(::System::Nullable_1<int32_t>, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextWriter::WriteValueAsync)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5cfda98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 45 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.DoWriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::Newtonsoft::Json::JsonTextWriter::*)(::System::Nullable_1<int32_t>, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextWriter::DoWriteValueAsync)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5cfdaac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                                { "DoWriteValueAsync", {}, { ::i2c::type_of<::System::Nullable_1<int32_t>>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextWriter::*)(int64_t, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextWriter::WriteValueAsync)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5cfdb48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 46 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::Newtonsoft::Json::JsonTextWriter::*)(::System::Nullable_1<int64_t>, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextWriter::WriteValueAsync)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5cfdb70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 47 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.DoWriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::Newtonsoft::Json::JsonTextWriter::*)(::System::Nullable_1<int64_t>, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextWriter::DoWriteValueAsync)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5cfdb84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                                { "DoWriteValueAsync", {}, { ::i2c::type_of<::System::Nullable_1<int64_t>>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::Newtonsoft::Json::JsonTextWriter::*)(::System::Numerics::BigInteger, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextWriter::WriteValueAsync)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5cfdc2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                                { "WriteValueAsync", {}, { ::i2c::type_of<::System::Numerics::BigInteger>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextWriter::*)(::System::Object*, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextWriter::WriteValueAsync)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5cfdd04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 48 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextWriter::*)(int8_t, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextWriter::WriteValueAsync)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5cfde5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 49 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextWriter::*)(::System::Nullable_1<int8_t>, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextWriter::WriteValueAsync)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5cfde88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 50 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.DoWriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextWriter::*)(::System::Nullable_1<int8_t>, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextWriter::DoWriteValueAsync)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5cfdea4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                                { "DoWriteValueAsync", {}, { ::i2c::type_of<::System::Nullable_1<int8_t>>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextWriter::*)(int16_t, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextWriter::WriteValueAsync)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5cfdf40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 51 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::Newtonsoft::Json::JsonTextWriter::*)(::System::Nullable_1<int16_t>, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextWriter::WriteValueAsync)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5cfdf6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 52 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.DoWriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::Newtonsoft::Json::JsonTextWriter::*)(::System::Nullable_1<int16_t>, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextWriter::DoWriteValueAsync)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5cfdf88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                                { "DoWriteValueAsync", {}, { ::i2c::type_of<::System::Nullable_1<int16_t>>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextWriter::*)(::StringW, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextWriter::WriteValueAsync)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5cfe024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 53 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.DoWriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextWriter::*)(::StringW, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextWriter::DoWriteValueAsync)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5cfe038;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                                             { "DoWriteValueAsync", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.DoWriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::Newtonsoft::Json::JsonTextWriter::*)(::System::Threading::Tasks::Task*, ::StringW, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextWriter::DoWriteValueAsync)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5cfe174;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                         { "DoWriteValueAsync", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextWriter::*)(::System::TimeSpan, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextWriter::WriteValueAsync)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5cfe24c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 54 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.DoWriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextWriter::*)(::System::TimeSpan, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextWriter::DoWriteValueAsync)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5cfe260;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                                             { "DoWriteValueAsync", {}, { ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::Newtonsoft::Json::JsonTextWriter::*)(::System::Nullable_1<::System::TimeSpan>, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextWriter::WriteValueAsync)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5cfe328;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 55 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.DoWriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::Newtonsoft::Json::JsonTextWriter::*)(::System::Nullable_1<::System::TimeSpan>, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextWriter::DoWriteValueAsync)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5cfe33c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                         { "DoWriteValueAsync", {}, { ::i2c::type_of<::System::Nullable_1<::System::TimeSpan>>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextWriter::*)(uint32_t, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextWriter::WriteValueAsync)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5cfe3d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 56 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::Newtonsoft::Json::JsonTextWriter::*)(::System::Nullable_1<uint32_t>, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextWriter::WriteValueAsync)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5cfe3fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 57 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.DoWriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::Newtonsoft::Json::JsonTextWriter::*)(::System::Nullable_1<uint32_t>, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextWriter::DoWriteValueAsync)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5cfe410;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                                { "DoWriteValueAsync", {}, { ::i2c::type_of<::System::Nullable_1<uint32_t>>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextWriter::*)(uint64_t, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextWriter::WriteValueAsync)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5cfe4a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 58 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::Newtonsoft::Json::JsonTextWriter::*)(::System::Nullable_1<uint64_t>, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextWriter::WriteValueAsync)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5cfe4c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 59 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.DoWriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::Newtonsoft::Json::JsonTextWriter::*)(::System::Nullable_1<uint64_t>, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextWriter::DoWriteValueAsync)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5cfe4d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                                { "DoWriteValueAsync", {}, { ::i2c::type_of<::System::Nullable_1<uint64_t>>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextWriter::*)(::System::Uri*, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextWriter::WriteValueAsync)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5cfe578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 60 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValueNotNullAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextWriter::*)(::System::Uri*, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextWriter::WriteValueNotNullAsync)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5cfe63c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                                             { "WriteValueNotNullAsync", {}, { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValueNotNullAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::Newtonsoft::Json::JsonTextWriter::*)(::System::Threading::Tasks::Task*, ::System::Uri*, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextWriter::WriteValueNotNullAsync)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5cfe724;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
            { "WriteValueNotNullAsync", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextWriter::*)(uint16_t, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextWriter::WriteValueAsync)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5cfe7fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 61 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::Newtonsoft::Json::JsonTextWriter::*)(::System::Nullable_1<uint16_t>, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextWriter::WriteValueAsync)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5cfe820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 62 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.DoWriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::Newtonsoft::Json::JsonTextWriter::*)(::System::Nullable_1<uint16_t>, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextWriter::DoWriteValueAsync)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5cfe83c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                                { "DoWriteValueAsync", {}, { ::i2c::type_of<::System::Nullable_1<uint16_t>>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteCommentAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextWriter::*)(::StringW, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextWriter::WriteCommentAsync)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5cfe8d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.DoWriteCommentAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextWriter::*)(::StringW, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextWriter::DoWriteCommentAsync)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5cfe8e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                                             { "DoWriteCommentAsync", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteEndArrayAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextWriter::*)(::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextWriter::WriteEndArrayAsync)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5cfe9ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteEndConstructorAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextWriter::*)(::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextWriter::WriteEndConstructorAsync)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5cfe9d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteEndObjectAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextWriter::*)(::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextWriter::WriteEndObjectAsync)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5cfe9f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteRawValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextWriter::*)(::StringW, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextWriter::WriteRawValueAsync)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5cfea18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.DoWriteRawValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextWriter::*)(::StringW, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextWriter::DoWriteRawValueAsync)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5cfea2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                                             { "DoWriteRawValueAsync", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.DoWriteRawValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::Newtonsoft::Json::JsonTextWriter::*)(::System::Threading::Tasks::Task*, ::StringW, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextWriter::DoWriteRawValueAsync)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5cfeb10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
            { "DoWriteRawValueAsync", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.EnsureWriteBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<char16_t> (::Newtonsoft::Json::JsonTextWriter::*)(int32_t, int32_t)>(&::Newtonsoft::Json::JsonTextWriter::EnsureWriteBuffer)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5cfebe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { "EnsureWriteBuffer", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.get_Base64Encoder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Utilities::Base64Encoder* (::Newtonsoft::Json::JsonTextWriter::*)()>(
    &::Newtonsoft::Json::JsonTextWriter::get_Base64Encoder)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5cfec84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { "get_Base64Encoder", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.get_ArrayPool
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::IArrayPool_1<char16_t>* (::Newtonsoft::Json::JsonTextWriter::*)()>(&::Newtonsoft::Json::JsonTextWriter::get_ArrayPool)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cfecf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { "get_ArrayPool", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.set_ArrayPool
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(::Newtonsoft::Json::IArrayPool_1<char16_t>*)>(&::Newtonsoft::Json::JsonTextWriter::set_ArrayPool)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5cfecfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { "set_ArrayPool", {}, { ::i2c::type_of<::Newtonsoft::Json::IArrayPool_1<char16_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.get_Indentation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Newtonsoft::Json::JsonTextWriter::*)()>(&::Newtonsoft::Json::JsonTextWriter::get_Indentation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cfed54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { "get_Indentation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.set_Indentation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(int32_t)>(&::Newtonsoft::Json::JsonTextWriter::set_Indentation)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5cfed5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { "set_Indentation", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.get_QuoteChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::Newtonsoft::Json::JsonTextWriter::*)()>(&::Newtonsoft::Json::JsonTextWriter::get_QuoteChar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cfedb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { "get_QuoteChar", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.set_QuoteChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(char16_t)>(&::Newtonsoft::Json::JsonTextWriter::set_QuoteChar)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5cfedbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { "set_QuoteChar", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.get_IndentChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::Newtonsoft::Json::JsonTextWriter::*)()>(&::Newtonsoft::Json::JsonTextWriter::get_IndentChar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cfee94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { "get_IndentChar", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.set_IndentChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(char16_t)>(&::Newtonsoft::Json::JsonTextWriter::set_IndentChar)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5cfee9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { "set_IndentChar", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.get_QuoteName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::JsonTextWriter::*)()>(&::Newtonsoft::Json::JsonTextWriter::get_QuoteName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cfeeb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { "get_QuoteName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.set_QuoteName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(bool)>(&::Newtonsoft::Json::JsonTextWriter::set_QuoteName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cfeebc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { "set_QuoteName", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(::System::IO::TextWriter*)>(&::Newtonsoft::Json::JsonTextWriter::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5cfeec4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::TextWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.Flush
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)()>(&::Newtonsoft::Json::JsonTextWriter::Flush)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5cff00c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 66 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)()>(&::Newtonsoft::Json::JsonTextWriter::Close)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5cff028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 67 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.CloseBufferAndWriter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)()>(&::Newtonsoft::Json::JsonTextWriter::CloseBufferAndWriter)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5cff044;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { "CloseBufferAndWriter", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteStartObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)()>(&::Newtonsoft::Json::JsonTextWriter::WriteStartObject)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5cff08c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 68 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteStartArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)()>(&::Newtonsoft::Json::JsonTextWriter::WriteStartArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5cff0c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 70 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteStartConstructor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(::StringW)>(&::Newtonsoft::Json::JsonTextWriter::WriteStartConstructor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5cff104;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 72 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteEnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(::Newtonsoft::Json::JsonToken)>(&::Newtonsoft::Json::JsonTextWriter::WriteEnd)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5cff1bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 78 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WritePropertyName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(::StringW)>(&::Newtonsoft::Json::JsonTextWriter::WritePropertyName)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5cff2b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 74 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WritePropertyName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(::StringW, bool)>(&::Newtonsoft::Json::JsonTextWriter::WritePropertyName)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5cff3dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 75 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.OnStringEscapeHandlingChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)()>(&::Newtonsoft::Json::JsonTextWriter::OnStringEscapeHandlingChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cff4a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 65 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.UpdateCharEscapeFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)()>(&::Newtonsoft::Json::JsonTextWriter::UpdateCharEscapeFlags)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5cfee24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { "UpdateCharEscapeFlags", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteIndent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)()>(&::Newtonsoft::Json::JsonTextWriter::WriteIndent)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5cff4a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 79 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.SetIndentChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Newtonsoft::Json::JsonTextWriter::*)()>(&::Newtonsoft::Json::JsonTextWriter::SetIndentChars)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5cfb85c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { "SetIndentChars", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValueDelimiter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)()>(&::Newtonsoft::Json::JsonTextWriter::WriteValueDelimiter)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5cff5cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 80 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteIndentSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)()>(&::Newtonsoft::Json::JsonTextWriter::WriteIndentSpace)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5cff5f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 81 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValueInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(::StringW, ::Newtonsoft::Json::JsonToken)>(
    &::Newtonsoft::Json::JsonTextWriter::WriteValueInternal)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5cff614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { "WriteValueInternal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Newtonsoft::Json::JsonToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(::System::Object*)>(&::Newtonsoft::Json::JsonTextWriter::WriteValue)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5cff634;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 123 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)()>(&::Newtonsoft::Json::JsonTextWriter::WriteNull)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5cff760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 82 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteUndefined
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)()>(&::Newtonsoft::Json::JsonTextWriter::WriteUndefined)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5cff7f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 83 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteRaw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(::StringW)>(&::Newtonsoft::Json::JsonTextWriter::WriteRaw)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5cff890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 84 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(::StringW)>(&::Newtonsoft::Json::JsonTextWriter::WriteValue)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5cff8b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 86 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteEscapedString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(::StringW, bool)>(&::Newtonsoft::Json::JsonTextWriter::WriteEscapedString)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5cff304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { "WriteEscapedString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(int32_t)>(&::Newtonsoft::Json::JsonTextWriter::WriteValue)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5cff9a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 87 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(uint32_t)>(&::Newtonsoft::Json::JsonTextWriter::WriteValue)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5cffa30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 88 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(int64_t)>(&::Newtonsoft::Json::JsonTextWriter::WriteValue)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5cffabc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 89 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(uint64_t)>(&::Newtonsoft::Json::JsonTextWriter::WriteValue)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5cffb00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 90 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(float_t)>(&::Newtonsoft::Json::JsonTextWriter::WriteValue)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5cffbb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 91 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(::System::Nullable_1<float_t>)>(&::Newtonsoft::Json::JsonTextWriter::WriteValue)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5cffc78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 108 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(double_t)>(&::Newtonsoft::Json::JsonTextWriter::WriteValue)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5cffd9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 92 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(::System::Nullable_1<double_t>)>(&::Newtonsoft::Json::JsonTextWriter::WriteValue)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5cffe5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 109 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(bool)>(&::Newtonsoft::Json::JsonTextWriter::WriteValue)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5cfff80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 93 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(int16_t)>(&::Newtonsoft::Json::JsonTextWriter::WriteValue)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5d0002c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 94 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(uint16_t)>(&::Newtonsoft::Json::JsonTextWriter::WriteValue)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5d00070;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 95 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(char16_t)>(&::Newtonsoft::Json::JsonTextWriter::WriteValue)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5d000b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 96 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(uint8_t)>(&::Newtonsoft::Json::JsonTextWriter::WriteValue)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5d00160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 97 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(int8_t)>(&::Newtonsoft::Json::JsonTextWriter::WriteValue)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5d001a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 98 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(::System::Decimal)>(&::Newtonsoft::Json::JsonTextWriter::WriteValue)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5d001e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 99 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(::System::DateTime)>(&::Newtonsoft::Json::JsonTextWriter::WriteValue)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5d0029c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 100 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValueToBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Newtonsoft::Json::JsonTextWriter::*)(::System::DateTime)>(&::Newtonsoft::Json::JsonTextWriter::WriteValueToBuffer)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5d00434;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { "WriteValueToBuffer", {}, { ::i2c::type_of<::System::DateTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(::ArrayW<uint8_t>)>(&::Newtonsoft::Json::JsonTextWriter::WriteValue)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5d00564;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 121 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(::System::DateTimeOffset)>(&::Newtonsoft::Json::JsonTextWriter::WriteValue)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5d0062c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 101 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValueToBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Newtonsoft::Json::JsonTextWriter::*)(::System::DateTimeOffset)>(&::Newtonsoft::Json::JsonTextWriter::WriteValueToBuffer)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x5d00798;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { "WriteValueToBuffer", {}, { ::i2c::type_of<::System::DateTimeOffset>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(::System::Guid)>(&::Newtonsoft::Json::JsonTextWriter::WriteValue)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5d00924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 102 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(::System::TimeSpan)>(&::Newtonsoft::Json::JsonTextWriter::WriteValue)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5d00a34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 103 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(::System::Uri*)>(&::Newtonsoft::Json::JsonTextWriter::WriteValue)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5d00b5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 122 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteComment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(::StringW)>(&::Newtonsoft::Json::JsonTextWriter::WriteComment)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5d00c28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 124 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteWhitespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(::StringW)>(&::Newtonsoft::Json::JsonTextWriter::WriteWhitespace)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5d00cf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 125 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.EnsureWriteBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)()>(&::Newtonsoft::Json::JsonTextWriter::EnsureWriteBuffer)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5cff974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { "EnsureWriteBuffer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteIntegerValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(int64_t)>(&::Newtonsoft::Json::JsonTextWriter::WriteIntegerValue)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5cffa74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { "WriteIntegerValue", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteIntegerValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(uint64_t, bool)>(&::Newtonsoft::Json::JsonTextWriter::WriteIntegerValue)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5cffb48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { "WriteIntegerValue", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteNumberToBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Newtonsoft::Json::JsonTextWriter::*)(uint64_t, bool)>(&::Newtonsoft::Json::JsonTextWriter::WriteNumberToBuffer)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5cfbe64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { "WriteNumberToBuffer", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteIntegerValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(int32_t)>(&::Newtonsoft::Json::JsonTextWriter::WriteIntegerValue)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5cff9e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { "WriteIntegerValue", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteIntegerValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(uint32_t, bool)>(&::Newtonsoft::Json::JsonTextWriter::WriteIntegerValue)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5d00df4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { "WriteIntegerValue", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteNumberToBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Newtonsoft::Json::JsonTextWriter::*)(uint32_t, bool)>(&::Newtonsoft::Json::JsonTextWriter::WriteNumberToBuffer)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5d00d30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { "WriteNumberToBuffer", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr bool& Newtonsoft::Json::JsonTextWriter::__cordl_internal_get__safeAsync() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____safeAsync;
}
constexpr bool const& Newtonsoft::Json::JsonTextWriter::__cordl_internal_get__safeAsync() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____safeAsync;
}
constexpr void Newtonsoft::Json::JsonTextWriter::__cordl_internal_set__safeAsync(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____safeAsync = value;
}
constexpr ::System::IO::TextWriter*& Newtonsoft::Json::JsonTextWriter::__cordl_internal_get__writer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____writer;
}
constexpr ::System::IO::TextWriter* const& Newtonsoft::Json::JsonTextWriter::__cordl_internal_get__writer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____writer;
}
constexpr void Newtonsoft::Json::JsonTextWriter::__cordl_internal_set__writer(::System::IO::TextWriter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____writer = value;
}
constexpr ::Newtonsoft::Json::Utilities::Base64Encoder*& Newtonsoft::Json::JsonTextWriter::__cordl_internal_get__base64Encoder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____base64Encoder;
}
constexpr ::Newtonsoft::Json::Utilities::Base64Encoder* const& Newtonsoft::Json::JsonTextWriter::__cordl_internal_get__base64Encoder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____base64Encoder;
}
constexpr void Newtonsoft::Json::JsonTextWriter::__cordl_internal_set__base64Encoder(::Newtonsoft::Json::Utilities::Base64Encoder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____base64Encoder = value;
}
constexpr char16_t& Newtonsoft::Json::JsonTextWriter::__cordl_internal_get__indentChar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____indentChar;
}
constexpr char16_t const& Newtonsoft::Json::JsonTextWriter::__cordl_internal_get__indentChar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____indentChar;
}
constexpr void Newtonsoft::Json::JsonTextWriter::__cordl_internal_set__indentChar(char16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____indentChar = value;
}
constexpr int32_t& Newtonsoft::Json::JsonTextWriter::__cordl_internal_get__indentation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____indentation;
}
constexpr int32_t const& Newtonsoft::Json::JsonTextWriter::__cordl_internal_get__indentation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____indentation;
}
constexpr void Newtonsoft::Json::JsonTextWriter::__cordl_internal_set__indentation(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____indentation = value;
}
constexpr char16_t& Newtonsoft::Json::JsonTextWriter::__cordl_internal_get__quoteChar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____quoteChar;
}
constexpr char16_t const& Newtonsoft::Json::JsonTextWriter::__cordl_internal_get__quoteChar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____quoteChar;
}
constexpr void Newtonsoft::Json::JsonTextWriter::__cordl_internal_set__quoteChar(char16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____quoteChar = value;
}
constexpr bool& Newtonsoft::Json::JsonTextWriter::__cordl_internal_get__quoteName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____quoteName;
}
constexpr bool const& Newtonsoft::Json::JsonTextWriter::__cordl_internal_get__quoteName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____quoteName;
}
constexpr void Newtonsoft::Json::JsonTextWriter::__cordl_internal_set__quoteName(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____quoteName = value;
}
constexpr ::ArrayW<bool>& Newtonsoft::Json::JsonTextWriter::__cordl_internal_get__charEscapeFlags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____charEscapeFlags;
}
constexpr ::ArrayW<bool> const& Newtonsoft::Json::JsonTextWriter::__cordl_internal_get__charEscapeFlags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____charEscapeFlags;
}
constexpr void Newtonsoft::Json::JsonTextWriter::__cordl_internal_set__charEscapeFlags(::ArrayW<bool> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____charEscapeFlags = value;
}
constexpr ::ArrayW<char16_t>& Newtonsoft::Json::JsonTextWriter::__cordl_internal_get__writeBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____writeBuffer;
}
constexpr ::ArrayW<char16_t> const& Newtonsoft::Json::JsonTextWriter::__cordl_internal_get__writeBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____writeBuffer;
}
constexpr void Newtonsoft::Json::JsonTextWriter::__cordl_internal_set__writeBuffer(::ArrayW<char16_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____writeBuffer = value;
}
constexpr ::Newtonsoft::Json::IArrayPool_1<char16_t>*& Newtonsoft::Json::JsonTextWriter::__cordl_internal_get__arrayPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arrayPool;
}
constexpr ::Newtonsoft::Json::IArrayPool_1<char16_t>* const& Newtonsoft::Json::JsonTextWriter::__cordl_internal_get__arrayPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arrayPool;
}
constexpr void Newtonsoft::Json::JsonTextWriter::__cordl_internal_set__arrayPool(::Newtonsoft::Json::IArrayPool_1<char16_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____arrayPool = value;
}
constexpr ::ArrayW<char16_t>& Newtonsoft::Json::JsonTextWriter::__cordl_internal_get__indentChars() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____indentChars;
}
constexpr ::ArrayW<char16_t> const& Newtonsoft::Json::JsonTextWriter::__cordl_internal_get__indentChars() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____indentChars;
}
constexpr void Newtonsoft::Json::JsonTextWriter::__cordl_internal_set__indentChars(::ArrayW<char16_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____indentChars = value;
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::FlushAsync(::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::DoFlushAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { "DoFlushAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::WriteValueDelimiterAsync(::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::DoWriteValueDelimiterAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { "DoWriteValueDelimiterAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::WriteEndAsync(::Newtonsoft::Json::JsonToken token, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, token, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::DoWriteEndAsync(::Newtonsoft::Json::JsonToken token, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                                           { "DoWriteEndAsync", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonToken>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, token, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::CloseAsync(::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::DoCloseAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { "DoCloseAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::CloseBufferAndWriterAsync() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { "CloseBufferAndWriterAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::WriteEndAsync(::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::WriteIndentAsync(::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::DoWriteIndentAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { "DoWriteIndentAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::WriteIndentAsync(int32_t currentIndentCount, int32_t newLineLen, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                              { "WriteIndentAsync", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, currentIndentCount, newLineLen, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::WriteValueInternalAsync(::Newtonsoft::Json::JsonToken token, ::StringW value,
                                                                                                   ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                       { "WriteValueInternalAsync", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonToken>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, token, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::WriteValueInternalAsync(::System::Threading::Tasks::Task* task, ::StringW value,
                                                                                                   ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
          { "WriteValueInternalAsync", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, task, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::WriteIndentSpaceAsync(::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::DoWriteIndentSpaceAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { "DoWriteIndentSpaceAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::WriteRawAsync(::StringW json, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, json, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::DoWriteRawAsync(::StringW json, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                                           { "DoWriteRawAsync", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, json, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::WriteNullAsync(::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::DoWriteNullAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { "DoWriteNullAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::WriteDigitsAsync(uint64_t uvalue, bool negative, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                              { "WriteDigitsAsync", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, uvalue, negative, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::WriteIntegerValueAsync(uint64_t uvalue, bool negative, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                              { "WriteIntegerValueAsync", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, uvalue, negative, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::WriteIntegerValueAsync(::System::Threading::Tasks::Task* task, uint64_t uvalue, bool negative,
                                                                                                  ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { "WriteIntegerValueAsync",
                                                                                                        {},
                                                                                                        { ::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<uint64_t>(),
                                                                                                          ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, task, uvalue, negative, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::WriteIntegerValueAsync(int64_t value, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                                           { "WriteIntegerValueAsync", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::WriteIntegerValueAsync(uint64_t uvalue, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                                           { "WriteIntegerValueAsync", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, uvalue, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::WriteEscapedStringAsync(::StringW value, bool quote, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                              { "WriteEscapedStringAsync", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, quote, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::WritePropertyNameAsync(::StringW name, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, name, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::DoWritePropertyNameAsync(::StringW name, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                                           { "DoWritePropertyNameAsync", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, name, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::DoWritePropertyNameAsync(::System::Threading::Tasks::Task* task, ::StringW name,
                                                                                                    ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
          { "DoWritePropertyNameAsync", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, task, name, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::WritePropertyNameAsync(::StringW name, bool escape, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, name, escape, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::DoWritePropertyNameAsync(::StringW name, bool escape, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                              { "DoWritePropertyNameAsync", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, name, escape, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::WriteStartArrayAsync(::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::DoWriteStartArrayAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { "DoWriteStartArrayAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::DoWriteStartArrayAsync(::System::Threading::Tasks::Task* task, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                              { "DoWriteStartArrayAsync", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, task, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::WriteStartObjectAsync(::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::DoWriteStartObjectAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { "DoWriteStartObjectAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::DoWriteStartObjectAsync(::System::Threading::Tasks::Task* task, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                              { "DoWriteStartObjectAsync", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, task, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::WriteStartConstructorAsync(::StringW name, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, name, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::DoWriteStartConstructorAsync(::StringW name, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                                           { "DoWriteStartConstructorAsync", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, name, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::WriteUndefinedAsync(::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 63 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::DoWriteUndefinedAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { "DoWriteUndefinedAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::DoWriteUndefinedAsync(::System::Threading::Tasks::Task* task, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                              { "DoWriteUndefinedAsync", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, task, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::WriteWhitespaceAsync(::StringW ws, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 64 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, ws, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::DoWriteWhitespaceAsync(::StringW ws, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                                           { "DoWriteWhitespaceAsync", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, ws, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::WriteValueAsync(bool value, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::DoWriteValueAsync(bool value, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { "DoWriteValueAsync", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::WriteValueAsync(::System::Nullable_1<bool> value, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::DoWriteValueAsync(::System::Nullable_1<bool> value, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                                           { "DoWriteValueAsync", {}, { ::i2c::type_of<::System::Nullable_1<bool>>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::WriteValueAsync(uint8_t value, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::WriteValueAsync(::System::Nullable_1<uint8_t> value, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::DoWriteValueAsync(::System::Nullable_1<uint8_t> value, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                              { "DoWriteValueAsync", {}, { ::i2c::type_of<::System::Nullable_1<uint8_t>>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::WriteValueAsync(::ArrayW<uint8_t> value, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::WriteValueNonNullAsync(::ArrayW<uint8_t> value, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                                           { "WriteValueNonNullAsync", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::WriteValueAsync(char16_t value, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::DoWriteValueAsync(char16_t value, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                                           { "DoWriteValueAsync", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::WriteValueAsync(::System::Nullable_1<char16_t> value, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::DoWriteValueAsync(::System::Nullable_1<char16_t> value, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                              { "DoWriteValueAsync", {}, { ::i2c::type_of<::System::Nullable_1<char16_t>>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::WriteValueAsync(::System::DateTime value, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::DoWriteValueAsync(::System::DateTime value, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                                           { "DoWriteValueAsync", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::WriteValueAsync(::System::Nullable_1<::System::DateTime> value, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::DoWriteValueAsync(::System::Nullable_1<::System::DateTime> value, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                              { "DoWriteValueAsync", {}, { ::i2c::type_of<::System::Nullable_1<::System::DateTime>>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::WriteValueAsync(::System::DateTimeOffset value, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::DoWriteValueAsync(::System::DateTimeOffset value, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                                           { "DoWriteValueAsync", {}, { ::i2c::type_of<::System::DateTimeOffset>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::WriteValueAsync(::System::Nullable_1<::System::DateTimeOffset> value,
                                                                                           ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::DoWriteValueAsync(::System::Nullable_1<::System::DateTimeOffset> value,
                                                                                             ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                       { "DoWriteValueAsync", {}, { ::i2c::type_of<::System::Nullable_1<::System::DateTimeOffset>>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::WriteValueAsync(::System::Decimal value, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 36 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::DoWriteValueAsync(::System::Decimal value, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                                           { "DoWriteValueAsync", {}, { ::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::WriteValueAsync(::System::Nullable_1<::System::Decimal> value, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 37 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::DoWriteValueAsync(::System::Nullable_1<::System::Decimal> value, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                              { "DoWriteValueAsync", {}, { ::i2c::type_of<::System::Nullable_1<::System::Decimal>>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::WriteValueAsync(double_t value, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 38 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::WriteValueAsync(double_t value, bool nullable, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                              { "WriteValueAsync", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, nullable, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::WriteValueAsync(::System::Nullable_1<double_t> value, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 39 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::WriteValueAsync(float_t value, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 40 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::WriteValueAsync(float_t value, bool nullable, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                              { "WriteValueAsync", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, nullable, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::WriteValueAsync(::System::Nullable_1<float_t> value, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 41 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::WriteValueAsync(::System::Guid value, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 42 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::DoWriteValueAsync(::System::Guid value, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                                           { "DoWriteValueAsync", {}, { ::i2c::type_of<::System::Guid>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::WriteValueAsync(::System::Nullable_1<::System::Guid> value, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 43 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::DoWriteValueAsync(::System::Nullable_1<::System::Guid> value, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                              { "DoWriteValueAsync", {}, { ::i2c::type_of<::System::Nullable_1<::System::Guid>>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::WriteValueAsync(int32_t value, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 44 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::WriteValueAsync(::System::Nullable_1<int32_t> value, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 45 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::DoWriteValueAsync(::System::Nullable_1<int32_t> value, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                              { "DoWriteValueAsync", {}, { ::i2c::type_of<::System::Nullable_1<int32_t>>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::WriteValueAsync(int64_t value, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 46 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::WriteValueAsync(::System::Nullable_1<int64_t> value, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 47 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::DoWriteValueAsync(::System::Nullable_1<int64_t> value, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                              { "DoWriteValueAsync", {}, { ::i2c::type_of<::System::Nullable_1<int64_t>>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::WriteValueAsync(::System::Numerics::BigInteger value, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                                           { "WriteValueAsync", {}, { ::i2c::type_of<::System::Numerics::BigInteger>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::WriteValueAsync(::System::Object* value, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 48 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::WriteValueAsync(int8_t value, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 49 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::WriteValueAsync(::System::Nullable_1<int8_t> value, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 50 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::DoWriteValueAsync(::System::Nullable_1<int8_t> value, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                                           { "DoWriteValueAsync", {}, { ::i2c::type_of<::System::Nullable_1<int8_t>>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::WriteValueAsync(int16_t value, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 51 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::WriteValueAsync(::System::Nullable_1<int16_t> value, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 52 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::DoWriteValueAsync(::System::Nullable_1<int16_t> value, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                              { "DoWriteValueAsync", {}, { ::i2c::type_of<::System::Nullable_1<int16_t>>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::WriteValueAsync(::StringW value, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 53 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::DoWriteValueAsync(::StringW value, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                                           { "DoWriteValueAsync", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::DoWriteValueAsync(::System::Threading::Tasks::Task* task, ::StringW value,
                                                                                             ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                       { "DoWriteValueAsync", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, task, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::WriteValueAsync(::System::TimeSpan value, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 54 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::DoWriteValueAsync(::System::TimeSpan value, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                                           { "DoWriteValueAsync", {}, { ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::WriteValueAsync(::System::Nullable_1<::System::TimeSpan> value, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 55 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::DoWriteValueAsync(::System::Nullable_1<::System::TimeSpan> value, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                              { "DoWriteValueAsync", {}, { ::i2c::type_of<::System::Nullable_1<::System::TimeSpan>>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::WriteValueAsync(uint32_t value, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 56 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::WriteValueAsync(::System::Nullable_1<uint32_t> value, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 57 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::DoWriteValueAsync(::System::Nullable_1<uint32_t> value, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                              { "DoWriteValueAsync", {}, { ::i2c::type_of<::System::Nullable_1<uint32_t>>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::WriteValueAsync(uint64_t value, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 58 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::WriteValueAsync(::System::Nullable_1<uint64_t> value, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 59 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::DoWriteValueAsync(::System::Nullable_1<uint64_t> value, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                              { "DoWriteValueAsync", {}, { ::i2c::type_of<::System::Nullable_1<uint64_t>>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::WriteValueAsync(::System::Uri* value, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 60 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::WriteValueNotNullAsync(::System::Uri* value, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                                           { "WriteValueNotNullAsync", {}, { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::WriteValueNotNullAsync(::System::Threading::Tasks::Task* task, ::System::Uri* value,
                                                                                                  ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
          { "WriteValueNotNullAsync", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, task, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::WriteValueAsync(uint16_t value, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 61 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::WriteValueAsync(::System::Nullable_1<uint16_t> value, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 62 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::DoWriteValueAsync(::System::Nullable_1<uint16_t> value, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                              { "DoWriteValueAsync", {}, { ::i2c::type_of<::System::Nullable_1<uint16_t>>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::WriteCommentAsync(::StringW text, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, text, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::DoWriteCommentAsync(::StringW text, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                                           { "DoWriteCommentAsync", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, text, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::WriteEndArrayAsync(::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::WriteEndConstructorAsync(::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::WriteEndObjectAsync(::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::WriteRawValueAsync(::StringW json, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, json, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::DoWriteRawValueAsync(::StringW json, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                                                           { "DoWriteRawValueAsync", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, json, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextWriter::DoWriteRawValueAsync(::System::Threading::Tasks::Task* task, ::StringW json,
                                                                                                ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
          { "DoWriteRawValueAsync", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, task, json, cancellationToken);
}
inline ::ArrayW<char16_t> Newtonsoft::Json::JsonTextWriter::EnsureWriteBuffer(int32_t length, int32_t copyTo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { "EnsureWriteBuffer", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<char16_t>>(this, ___internal_method, length, copyTo);
}
inline ::Newtonsoft::Json::Utilities::Base64Encoder* Newtonsoft::Json::JsonTextWriter::get_Base64Encoder() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { "get_Base64Encoder", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Utilities::Base64Encoder*>(this, ___internal_method);
}
inline ::Newtonsoft::Json::IArrayPool_1<char16_t>* Newtonsoft::Json::JsonTextWriter::get_ArrayPool() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { "get_ArrayPool", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::IArrayPool_1<char16_t>*>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextWriter::set_ArrayPool(::Newtonsoft::Json::IArrayPool_1<char16_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { "set_ArrayPool", {}, { ::i2c::type_of<::Newtonsoft::Json::IArrayPool_1<char16_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Newtonsoft::Json::JsonTextWriter::get_Indentation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { "get_Indentation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextWriter::set_Indentation(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { "set_Indentation", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline char16_t Newtonsoft::Json::JsonTextWriter::get_QuoteChar() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { "get_QuoteChar", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextWriter::set_QuoteChar(char16_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { "set_QuoteChar", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline char16_t Newtonsoft::Json::JsonTextWriter::get_IndentChar() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { "get_IndentChar", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextWriter::set_IndentChar(char16_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { "set_IndentChar", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Newtonsoft::Json::JsonTextWriter::get_QuoteName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { "get_QuoteName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextWriter::set_QuoteName(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { "set_QuoteName", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextWriter::_ctor(::System::IO::TextWriter* textWriter) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::TextWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, textWriter);
}
inline void Newtonsoft::Json::JsonTextWriter::Flush() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 66 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextWriter::Close() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 67 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextWriter::CloseBufferAndWriter() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { "CloseBufferAndWriter", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteStartObject() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 68 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteStartArray() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 70 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteStartConstructor(::StringW name) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 72 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteEnd(::Newtonsoft::Json::JsonToken token) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 78 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token);
}
inline void Newtonsoft::Json::JsonTextWriter::WritePropertyName(::StringW name) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 74 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void Newtonsoft::Json::JsonTextWriter::WritePropertyName(::StringW name, bool escape) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 75 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, escape);
}
inline void Newtonsoft::Json::JsonTextWriter::OnStringEscapeHandlingChanged() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 65 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextWriter::UpdateCharEscapeFlags() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { "UpdateCharEscapeFlags", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteIndent() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 79 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Newtonsoft::Json::JsonTextWriter::SetIndentChars() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { "SetIndentChars", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteValueDelimiter() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 80 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteIndentSpace() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 81 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteValueInternal(::StringW value, ::Newtonsoft::Json::JsonToken token) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { "WriteValueInternal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Newtonsoft::Json::JsonToken>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, token);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteValue(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 123 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteNull() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 82 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteUndefined() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 83 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteRaw(::StringW json) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 84 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, json);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteValue(::StringW value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 86 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteEscapedString(::StringW value, bool quote) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { "WriteEscapedString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, quote);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteValue(int32_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 87 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteValue(uint32_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 88 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteValue(int64_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 89 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteValue(uint64_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 90 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteValue(float_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 91 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteValue(::System::Nullable_1<float_t> value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 108 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteValue(double_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 92 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteValue(::System::Nullable_1<double_t> value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 109 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteValue(bool value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 93 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteValue(int16_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 94 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteValue(uint16_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 95 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteValue(char16_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 96 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteValue(uint8_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 97 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteValue(int8_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 98 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteValue(::System::Decimal value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 99 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteValue(::System::DateTime value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 100 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Newtonsoft::Json::JsonTextWriter::WriteValueToBuffer(::System::DateTime value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { "WriteValueToBuffer", {}, { ::i2c::type_of<::System::DateTime>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteValue(::ArrayW<uint8_t> value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 121 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteValue(::System::DateTimeOffset value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 101 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Newtonsoft::Json::JsonTextWriter::WriteValueToBuffer(::System::DateTimeOffset value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { "WriteValueToBuffer", {}, { ::i2c::type_of<::System::DateTimeOffset>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteValue(::System::Guid value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 102 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteValue(::System::TimeSpan value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 103 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteValue(::System::Uri* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 122 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteComment(::StringW text) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 124 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteWhitespace(::StringW ws) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 125 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ws);
}
inline void Newtonsoft::Json::JsonTextWriter::EnsureWriteBuffer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { "EnsureWriteBuffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteIntegerValue(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { "WriteIntegerValue", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteIntegerValue(uint64_t value, bool negative) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { "WriteIntegerValue", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, negative);
}
inline int32_t Newtonsoft::Json::JsonTextWriter::WriteNumberToBuffer(uint64_t value, bool negative) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { "WriteNumberToBuffer", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value, negative);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteIntegerValue(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { "WriteIntegerValue", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteIntegerValue(uint32_t value, bool negative) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { "WriteIntegerValue", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, negative);
}
inline int32_t Newtonsoft::Json::JsonTextWriter::WriteNumberToBuffer(uint32_t value, bool negative) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), { "WriteNumberToBuffer", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value, negative);
}
inline ::Newtonsoft::Json::JsonTextWriter* Newtonsoft::Json::JsonTextWriter::New_ctor(::System::IO::TextWriter* textWriter) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::JsonTextWriter*>(textWriter));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextWriter::JsonTextWriter() {}
