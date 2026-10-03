#pragma once
// IWYU pragma private; include "Newtonsoft/Json/JsonTextReader.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__StringBuffer_impl.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__StringReference_impl.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_impl.hpp"
#include "Newtonsoft/Json/zzzz__JsonToken_impl.hpp"
#include "Newtonsoft/Json/zzzz__ReadType_impl.hpp"
#include "System/Numerics/zzzz__BigInteger_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__DateTimeOffset_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Decimal_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "Newtonsoft/Json/zzzz__JsonTextReader_def.hpp"
#include "Newtonsoft/Json/zzzz__IArrayPool_1_def.hpp"
#include "Newtonsoft/Json/zzzz__IJsonLineInfo_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonNameTable_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReaderException_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonTextReader_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonToken_def.hpp"
#include "Newtonsoft/Json/zzzz__ReadType_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/IO/zzzz__TextReader_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader__DoReadAsBooleanAsync_d__40.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader__DoReadAsBooleanAsync_d__40::*)()>(
    &::Newtonsoft::Json::JsonTextReader__DoReadAsBooleanAsync_d__40::MoveNext)> {
  constexpr static std::size_t size = 0xe30;
  constexpr static std::size_t addrs = 0x6105b70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__DoReadAsBooleanAsync_d__40>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader__DoReadAsBooleanAsync_d__40.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader__DoReadAsBooleanAsync_d__40::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Newtonsoft::Json::JsonTextReader__DoReadAsBooleanAsync_d__40::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x61069a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__DoReadAsBooleanAsync_d__40>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonTextReader__DoReadAsBooleanAsync_d__40::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__DoReadAsBooleanAsync_d__40>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader__DoReadAsBooleanAsync_d__40::SetStateMachine(/* [Nullable(0)] */ ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__DoReadAsBooleanAsync_d__40>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextReader__DoReadAsBooleanAsync_d__40::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Newtonsoft::Json::JsonTextReader__DoReadAsBooleanAsync_d__40::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Nullable_1<bool>>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty:
// "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>", modifiers: "", def_value:
// Some("{}"), comment: None }, CppParam { name: "_i_5__2", ty: "::System::Numerics::BigInteger", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_isTrue_5__3", ty: "bool",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value:
// Some("{}"), comment: None }]
constexpr ::Newtonsoft::Json::JsonTextReader__DoReadAsBooleanAsync_d__40::JsonTextReader__DoReadAsBooleanAsync_d__40(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Nullable_1<bool>> __t__builder, ::Newtonsoft::Json::JsonTextReader* __4__this,
    ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__1, ::System::Numerics::BigInteger _i_5__2,
    bool _isTrue_5__3, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
  this->_i_5__2 = _i_5__2;
  this->_isTrue_5__3 = _isTrue_5__3;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextReader__DoReadAsBooleanAsync_d__40::JsonTextReader__DoReadAsBooleanAsync_d__40() {}
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader__DoReadAsBytesAsync_d__42.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader__DoReadAsBytesAsync_d__42::*)()>(
    &::Newtonsoft::Json::JsonTextReader__DoReadAsBytesAsync_d__42::MoveNext)> {
  constexpr static std::size_t size = 0xe2c;
  constexpr static std::size_t addrs = 0x6106a20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__DoReadAsBytesAsync_d__42>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader__DoReadAsBytesAsync_d__42.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader__DoReadAsBytesAsync_d__42::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Newtonsoft::Json::JsonTextReader__DoReadAsBytesAsync_d__42::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x610784c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__DoReadAsBytesAsync_d__42>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonTextReader__DoReadAsBytesAsync_d__42::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__DoReadAsBytesAsync_d__42>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader__DoReadAsBytesAsync_d__42::SetStateMachine(/* [Nullable(0)] */ ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__DoReadAsBytesAsync_d__42>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextReader__DoReadAsBytesAsync_d__42::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Newtonsoft::Json::JsonTextReader__DoReadAsBytesAsync_d__42::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t>>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty:
// "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "_isWrapped_5__2", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_data_5__3", ty:
// "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__3", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::ArrayW<uint8_t>>",
// modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Newtonsoft::Json::JsonTextReader__DoReadAsBytesAsync_d__42::JsonTextReader__DoReadAsBytesAsync_d__42(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t>> __t__builder, ::Newtonsoft::Json::JsonTextReader* __4__this,
    ::System::Threading::CancellationToken cancellationToken, bool _isWrapped_5__2, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__1,
    ::ArrayW<uint8_t> _data_5__3, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2,
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::ArrayW<uint8_t>> __u__3) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->_isWrapped_5__2 = _isWrapped_5__2;
  this->__u__1 = __u__1;
  this->_data_5__3 = _data_5__3;
  this->__u__2 = __u__2;
  this->__u__3 = __u__3;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextReader__DoReadAsBytesAsync_d__42::JsonTextReader__DoReadAsBytesAsync_d__42() {}
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader__DoReadAsDateTimeAsync_d__45.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader__DoReadAsDateTimeAsync_d__45::*)()>(
    &::Newtonsoft::Json::JsonTextReader__DoReadAsDateTimeAsync_d__45::MoveNext)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x61078cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__DoReadAsDateTimeAsync_d__45>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader__DoReadAsDateTimeAsync_d__45.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader__DoReadAsDateTimeAsync_d__45::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Newtonsoft::Json::JsonTextReader__DoReadAsDateTimeAsync_d__45::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6107c94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__DoReadAsDateTimeAsync_d__45>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonTextReader__DoReadAsDateTimeAsync_d__45::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__DoReadAsDateTimeAsync_d__45>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader__DoReadAsDateTimeAsync_d__45::SetStateMachine(/* [Nullable(0)] */ ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__DoReadAsDateTimeAsync_d__45>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextReader__DoReadAsDateTimeAsync_d__45::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Newtonsoft::Json::JsonTextReader__DoReadAsDateTimeAsync_d__45::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Nullable_1<::System::DateTime>>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty:
// "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Object*>", modifiers: "",
// def_value: Some("{}"), comment: None }]
constexpr ::Newtonsoft::Json::JsonTextReader__DoReadAsDateTimeAsync_d__45::JsonTextReader__DoReadAsDateTimeAsync_d__45(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Nullable_1<::System::DateTime>> __t__builder, ::Newtonsoft::Json::JsonTextReader* __4__this,
    ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Object*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextReader__DoReadAsDateTimeAsync_d__45::JsonTextReader__DoReadAsDateTimeAsync_d__45() {}
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader__DoReadAsDateTimeOffsetAsync_d__47.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader__DoReadAsDateTimeOffsetAsync_d__47::*)()>(
    &::Newtonsoft::Json::JsonTextReader__DoReadAsDateTimeOffsetAsync_d__47::MoveNext)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x6107d14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__DoReadAsDateTimeOffsetAsync_d__47>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader__DoReadAsDateTimeOffsetAsync_d__47.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader__DoReadAsDateTimeOffsetAsync_d__47::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Newtonsoft::Json::JsonTextReader__DoReadAsDateTimeOffsetAsync_d__47::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x61080c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__DoReadAsDateTimeOffsetAsync_d__47>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonTextReader__DoReadAsDateTimeOffsetAsync_d__47::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__DoReadAsDateTimeOffsetAsync_d__47>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader__DoReadAsDateTimeOffsetAsync_d__47::SetStateMachine(/* [Nullable(0)] */ ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__DoReadAsDateTimeOffsetAsync_d__47>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextReader__DoReadAsDateTimeOffsetAsync_d__47::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Newtonsoft::Json::JsonTextReader__DoReadAsDateTimeOffsetAsync_d__47::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Nullable_1<::System::DateTimeOffset>>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this",
// ty: "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Object*>", modifiers: "",
// def_value: Some("{}"), comment: None }]
constexpr ::Newtonsoft::Json::JsonTextReader__DoReadAsDateTimeOffsetAsync_d__47::JsonTextReader__DoReadAsDateTimeOffsetAsync_d__47(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Nullable_1<::System::DateTimeOffset>> __t__builder, ::Newtonsoft::Json::JsonTextReader* __4__this,
    ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Object*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextReader__DoReadAsDateTimeOffsetAsync_d__47::JsonTextReader__DoReadAsDateTimeOffsetAsync_d__47() {}
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader__DoReadAsDecimalAsync_d__49.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader__DoReadAsDecimalAsync_d__49::*)()>(
    &::Newtonsoft::Json::JsonTextReader__DoReadAsDecimalAsync_d__49::MoveNext)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x6108148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__DoReadAsDecimalAsync_d__49>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader__DoReadAsDecimalAsync_d__49.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader__DoReadAsDecimalAsync_d__49::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Newtonsoft::Json::JsonTextReader__DoReadAsDecimalAsync_d__49::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x61084fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__DoReadAsDecimalAsync_d__49>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonTextReader__DoReadAsDecimalAsync_d__49::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__DoReadAsDecimalAsync_d__49>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader__DoReadAsDecimalAsync_d__49::SetStateMachine(/* [Nullable(0)] */ ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__DoReadAsDecimalAsync_d__49>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextReader__DoReadAsDecimalAsync_d__49::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Newtonsoft::Json::JsonTextReader__DoReadAsDecimalAsync_d__49::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Nullable_1<::System::Decimal>>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty:
// "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Object*>", modifiers: "",
// def_value: Some("{}"), comment: None }]
constexpr ::Newtonsoft::Json::JsonTextReader__DoReadAsDecimalAsync_d__49::JsonTextReader__DoReadAsDecimalAsync_d__49(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Nullable_1<::System::Decimal>> __t__builder, ::Newtonsoft::Json::JsonTextReader* __4__this,
    ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Object*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextReader__DoReadAsDecimalAsync_d__49::JsonTextReader__DoReadAsDecimalAsync_d__49() {}
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader__DoReadAsDoubleAsync_d__51.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader__DoReadAsDoubleAsync_d__51::*)()>(
    &::Newtonsoft::Json::JsonTextReader__DoReadAsDoubleAsync_d__51::MoveNext)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x610857c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__DoReadAsDoubleAsync_d__51>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader__DoReadAsDoubleAsync_d__51.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader__DoReadAsDoubleAsync_d__51::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Newtonsoft::Json::JsonTextReader__DoReadAsDoubleAsync_d__51::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6108944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__DoReadAsDoubleAsync_d__51>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonTextReader__DoReadAsDoubleAsync_d__51::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__DoReadAsDoubleAsync_d__51>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader__DoReadAsDoubleAsync_d__51::SetStateMachine(/* [Nullable(0)] */ ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__DoReadAsDoubleAsync_d__51>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextReader__DoReadAsDoubleAsync_d__51::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Newtonsoft::Json::JsonTextReader__DoReadAsDoubleAsync_d__51::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Nullable_1<double_t>>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty:
// "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Object*>", modifiers: "",
// def_value: Some("{}"), comment: None }]
constexpr ::Newtonsoft::Json::JsonTextReader__DoReadAsDoubleAsync_d__51::JsonTextReader__DoReadAsDoubleAsync_d__51(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Nullable_1<double_t>> __t__builder, ::Newtonsoft::Json::JsonTextReader* __4__this,
    ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Object*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextReader__DoReadAsDoubleAsync_d__51::JsonTextReader__DoReadAsDoubleAsync_d__51() {}
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader__DoReadAsInt32Async_d__53.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader__DoReadAsInt32Async_d__53::*)()>(
    &::Newtonsoft::Json::JsonTextReader__DoReadAsInt32Async_d__53::MoveNext)> {
  constexpr static std::size_t size = 0x3c4;
  constexpr static std::size_t addrs = 0x61089c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__DoReadAsInt32Async_d__53>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader__DoReadAsInt32Async_d__53.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader__DoReadAsInt32Async_d__53::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Newtonsoft::Json::JsonTextReader__DoReadAsInt32Async_d__53::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6108d88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__DoReadAsInt32Async_d__53>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonTextReader__DoReadAsInt32Async_d__53::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__DoReadAsInt32Async_d__53>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader__DoReadAsInt32Async_d__53::SetStateMachine(/* [Nullable(0)] */ ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__DoReadAsInt32Async_d__53>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextReader__DoReadAsInt32Async_d__53::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Newtonsoft::Json::JsonTextReader__DoReadAsInt32Async_d__53::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Nullable_1<int32_t>>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty:
// "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Object*>", modifiers: "",
// def_value: Some("{}"), comment: None }]
constexpr ::Newtonsoft::Json::JsonTextReader__DoReadAsInt32Async_d__53::JsonTextReader__DoReadAsInt32Async_d__53(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Nullable_1<int32_t>> __t__builder, ::Newtonsoft::Json::JsonTextReader* __4__this,
    ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Object*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextReader__DoReadAsInt32Async_d__53::JsonTextReader__DoReadAsInt32Async_d__53() {}
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader__DoReadAsStringAsync_d__55.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader__DoReadAsStringAsync_d__55::*)()>(
    &::Newtonsoft::Json::JsonTextReader__DoReadAsStringAsync_d__55::MoveNext)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x6108e08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__DoReadAsStringAsync_d__55>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader__DoReadAsStringAsync_d__55.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader__DoReadAsStringAsync_d__55::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Newtonsoft::Json::JsonTextReader__DoReadAsStringAsync_d__55::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x61090c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__DoReadAsStringAsync_d__55>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonTextReader__DoReadAsStringAsync_d__55::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__DoReadAsStringAsync_d__55>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader__DoReadAsStringAsync_d__55::SetStateMachine(/* [Nullable(0)] */ ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__DoReadAsStringAsync_d__55>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextReader__DoReadAsStringAsync_d__55::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Newtonsoft::Json::JsonTextReader__DoReadAsStringAsync_d__55::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty:
// "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Object*>", modifiers: "",
// def_value: Some("{}"), comment: None }]
constexpr ::Newtonsoft::Json::JsonTextReader__DoReadAsStringAsync_d__55::JsonTextReader__DoReadAsStringAsync_d__55(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __t__builder, ::Newtonsoft::Json::JsonTextReader* __4__this,
    ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Object*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextReader__DoReadAsStringAsync_d__55::JsonTextReader__DoReadAsStringAsync_d__55() {}
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader__DoReadAsync_d__3.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader__DoReadAsync_d__3::*)()>(&::Newtonsoft::Json::JsonTextReader__DoReadAsync_d__3::MoveNext)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x6109144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__DoReadAsync_d__3>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader__DoReadAsync_d__3.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader__DoReadAsync_d__3::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Newtonsoft::Json::JsonTextReader__DoReadAsync_d__3::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x61094bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__DoReadAsync_d__3>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonTextReader__DoReadAsync_d__3::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__DoReadAsync_d__3>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader__DoReadAsync_d__3::SetStateMachine(/* [Nullable(0)] */ ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__DoReadAsync_d__3>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextReader__DoReadAsync_d__3::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Newtonsoft::Json::JsonTextReader__DoReadAsync_d__3::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "task", ty:
// "::System::Threading::Tasks::Task_1<bool>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextReader*", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Newtonsoft::Json::JsonTextReader__DoReadAsync_d__3::JsonTextReader__DoReadAsync_d__3(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::System::Threading::Tasks::Task_1<bool>* task, ::Newtonsoft::Json::JsonTextReader* __4__this,
    ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->task = task;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextReader__DoReadAsync_d__3::JsonTextReader__DoReadAsync_d__3() {}
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader__EatWhitespaceAsync_d__17.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader__EatWhitespaceAsync_d__17::*)()>(
    &::Newtonsoft::Json::JsonTextReader__EatWhitespaceAsync_d__17::MoveNext)> {
  constexpr static std::size_t size = 0x41c;
  constexpr static std::size_t addrs = 0x610953c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__EatWhitespaceAsync_d__17>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader__EatWhitespaceAsync_d__17.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader__EatWhitespaceAsync_d__17::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Newtonsoft::Json::JsonTextReader__EatWhitespaceAsync_d__17::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6109958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__EatWhitespaceAsync_d__17>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonTextReader__EatWhitespaceAsync_d__17::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__EatWhitespaceAsync_d__17>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader__EatWhitespaceAsync_d__17::SetStateMachine(/* [Nullable(0)] */ ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__EatWhitespaceAsync_d__17>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextReader__EatWhitespaceAsync_d__17::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Newtonsoft::Json::JsonTextReader__EatWhitespaceAsync_d__17::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextReader*",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None },
// CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam {
// name: "__u__2", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Newtonsoft::Json::JsonTextReader__EatWhitespaceAsync_d__17::JsonTextReader__EatWhitespaceAsync_d__17(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Newtonsoft::Json::JsonTextReader* __4__this,
    ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t> __u__1,
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextReader__EatWhitespaceAsync_d__17::JsonTextReader__EatWhitespaceAsync_d__17() {}
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader__HandleNullAsync_d__35.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader__HandleNullAsync_d__35::*)()>(&::Newtonsoft::Json::JsonTextReader__HandleNullAsync_d__35::MoveNext)> {
  constexpr static std::size_t size = 0x404;
  constexpr static std::size_t addrs = 0x61099c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__HandleNullAsync_d__35>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader__HandleNullAsync_d__35.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader__HandleNullAsync_d__35::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Newtonsoft::Json::JsonTextReader__HandleNullAsync_d__35::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6109dc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__HandleNullAsync_d__35>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonTextReader__HandleNullAsync_d__35::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__HandleNullAsync_d__35>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader__HandleNullAsync_d__35::SetStateMachine(/* [Nullable(0)] */ ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__HandleNullAsync_d__35>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextReader__HandleNullAsync_d__35::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Newtonsoft::Json::JsonTextReader__HandleNullAsync_d__35::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextReader*",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None },
// CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "__u__2", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Newtonsoft::Json::JsonTextReader__HandleNullAsync_d__35::JsonTextReader__HandleNullAsync_d__35(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Newtonsoft::Json::JsonTextReader* __4__this,
    ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__1,
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextReader__HandleNullAsync_d__35::JsonTextReader__HandleNullAsync_d__35() {}
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader__MatchAndSetAsync_d__21.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader__MatchAndSetAsync_d__21::*)()>(&::Newtonsoft::Json::JsonTextReader__MatchAndSetAsync_d__21::MoveNext)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x6109e34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__MatchAndSetAsync_d__21>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader__MatchAndSetAsync_d__21.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader__MatchAndSetAsync_d__21::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Newtonsoft::Json::JsonTextReader__MatchAndSetAsync_d__21::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x610a18c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__MatchAndSetAsync_d__21>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonTextReader__MatchAndSetAsync_d__21::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__MatchAndSetAsync_d__21>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader__MatchAndSetAsync_d__21::SetStateMachine(/* [Nullable(0)] */ ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__MatchAndSetAsync_d__21>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextReader__MatchAndSetAsync_d__21::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Newtonsoft::Json::JsonTextReader__MatchAndSetAsync_d__21::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextReader*",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "value", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "newToken", ty: "::Newtonsoft::Json::JsonToken", modifiers: "", def_value:
// Some("{}"), comment: None }, CppParam { name: "tokenValue", ty: "::System::Object*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Newtonsoft::Json::JsonTextReader__MatchAndSetAsync_d__21::JsonTextReader__MatchAndSetAsync_d__21(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Newtonsoft::Json::JsonTextReader* __4__this, ::StringW value,
    ::System::Threading::CancellationToken cancellationToken, ::Newtonsoft::Json::JsonToken newToken, ::System::Object* tokenValue,
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->value = value;
  this->cancellationToken = cancellationToken;
  this->newToken = newToken;
  this->tokenValue = tokenValue;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextReader__MatchAndSetAsync_d__21::JsonTextReader__MatchAndSetAsync_d__21() {}
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader__MatchValueAsync_d__19.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader__MatchValueAsync_d__19::*)()>(&::Newtonsoft::Json::JsonTextReader__MatchValueAsync_d__19::MoveNext)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x610a1f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__MatchValueAsync_d__19>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader__MatchValueAsync_d__19.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader__MatchValueAsync_d__19::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Newtonsoft::Json::JsonTextReader__MatchValueAsync_d__19::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x610a4d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__MatchValueAsync_d__19>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonTextReader__MatchValueAsync_d__19::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__MatchValueAsync_d__19>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader__MatchValueAsync_d__19::SetStateMachine(/* [Nullable(0)] */ ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__MatchValueAsync_d__19>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextReader__MatchValueAsync_d__19::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Newtonsoft::Json::JsonTextReader__MatchValueAsync_d__19::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty:
// "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "value", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None },
// CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Newtonsoft::Json::JsonTextReader__MatchValueAsync_d__19::JsonTextReader__MatchValueAsync_d__19(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::Newtonsoft::Json::JsonTextReader* __4__this, ::StringW value,
    ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->value = value;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextReader__MatchValueAsync_d__19::JsonTextReader__MatchValueAsync_d__19() {}
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader__MatchValueWithTrailingSeparatorAsync_d__20.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader__MatchValueWithTrailingSeparatorAsync_d__20::*)()>(
    &::Newtonsoft::Json::JsonTextReader__MatchValueWithTrailingSeparatorAsync_d__20::MoveNext)> {
  constexpr static std::size_t size = 0x42c;
  constexpr static std::size_t addrs = 0x610a554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__MatchValueWithTrailingSeparatorAsync_d__20>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader__MatchValueWithTrailingSeparatorAsync_d__20.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader__MatchValueWithTrailingSeparatorAsync_d__20::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Newtonsoft::Json::JsonTextReader__MatchValueWithTrailingSeparatorAsync_d__20::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x610a980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__MatchValueWithTrailingSeparatorAsync_d__20>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonTextReader__MatchValueWithTrailingSeparatorAsync_d__20::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__MatchValueWithTrailingSeparatorAsync_d__20>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader__MatchValueWithTrailingSeparatorAsync_d__20::SetStateMachine(/* [Nullable(0)] */ ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__MatchValueWithTrailingSeparatorAsync_d__20>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextReader__MatchValueWithTrailingSeparatorAsync_d__20::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Newtonsoft::Json::JsonTextReader__MatchValueWithTrailingSeparatorAsync_d__20::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty:
// "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "value", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None },
// CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Newtonsoft::Json::JsonTextReader__MatchValueWithTrailingSeparatorAsync_d__20::JsonTextReader__MatchValueWithTrailingSeparatorAsync_d__20(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::Newtonsoft::Json::JsonTextReader* __4__this, ::StringW value,
    ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->value = value;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextReader__MatchValueWithTrailingSeparatorAsync_d__20::JsonTextReader__MatchValueWithTrailingSeparatorAsync_d__20() {}
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader__ParseCommentAsync_d__16.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader__ParseCommentAsync_d__16::*)()>(
    &::Newtonsoft::Json::JsonTextReader__ParseCommentAsync_d__16::MoveNext)> {
  constexpr static std::size_t size = 0x91c;
  constexpr static std::size_t addrs = 0x610aa00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ParseCommentAsync_d__16>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader__ParseCommentAsync_d__16.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader__ParseCommentAsync_d__16::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Newtonsoft::Json::JsonTextReader__ParseCommentAsync_d__16::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x610b31c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ParseCommentAsync_d__16>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonTextReader__ParseCommentAsync_d__16::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ParseCommentAsync_d__16>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader__ParseCommentAsync_d__16::SetStateMachine(/* [Nullable(0)] */ ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ParseCommentAsync_d__16>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextReader__ParseCommentAsync_d__16::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Newtonsoft::Json::JsonTextReader__ParseCommentAsync_d__16::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextReader*",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None },
// CppParam { name: "setToken", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_singlelineComment_5__2", ty: "bool", modifiers: "", def_value: Some("{}"),
// comment: None }, CppParam { name: "_initialPosition_5__3", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__3", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Newtonsoft::Json::JsonTextReader__ParseCommentAsync_d__16::JsonTextReader__ParseCommentAsync_d__16(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Newtonsoft::Json::JsonTextReader* __4__this,
    ::System::Threading::CancellationToken cancellationToken, bool setToken, bool _singlelineComment_5__2, int32_t _initialPosition_5__3,
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__1,
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t> __u__2,
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__3) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->setToken = setToken;
  this->_singlelineComment_5__2 = _singlelineComment_5__2;
  this->_initialPosition_5__3 = _initialPosition_5__3;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
  this->__u__3 = __u__3;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextReader__ParseCommentAsync_d__16::JsonTextReader__ParseCommentAsync_d__16() {}
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader__ParseConstructorAsync_d__25.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader__ParseConstructorAsync_d__25::*)()>(
    &::Newtonsoft::Json::JsonTextReader__ParseConstructorAsync_d__25::MoveNext)> {
  constexpr static std::size_t size = 0x9dc;
  constexpr static std::size_t addrs = 0x610b388;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ParseConstructorAsync_d__25>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader__ParseConstructorAsync_d__25.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader__ParseConstructorAsync_d__25::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Newtonsoft::Json::JsonTextReader__ParseConstructorAsync_d__25::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x610bd64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ParseConstructorAsync_d__25>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonTextReader__ParseConstructorAsync_d__25::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ParseConstructorAsync_d__25>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader__ParseConstructorAsync_d__25::SetStateMachine(/* [Nullable(0)] */ ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ParseConstructorAsync_d__25>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextReader__ParseConstructorAsync_d__25::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Newtonsoft::Json::JsonTextReader__ParseConstructorAsync_d__25::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextReader*",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None },
// CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "_initialPosition_5__2", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_endPosition_5__3", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment:
// None }, CppParam { name: "_constructorName_5__4", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__3", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Newtonsoft::Json::JsonTextReader__ParseConstructorAsync_d__25::JsonTextReader__ParseConstructorAsync_d__25(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Newtonsoft::Json::JsonTextReader* __4__this,
    ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__1, int32_t _initialPosition_5__2,
    int32_t _endPosition_5__3, ::StringW _constructorName_5__4, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2,
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t> __u__3) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
  this->_initialPosition_5__2 = _initialPosition_5__2;
  this->_endPosition_5__3 = _endPosition_5__3;
  this->_constructorName_5__4 = _constructorName_5__4;
  this->__u__2 = __u__2;
  this->__u__3 = __u__3;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextReader__ParseConstructorAsync_d__25::JsonTextReader__ParseConstructorAsync_d__25() {}
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader__ParseNumberAsync_d__29.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader__ParseNumberAsync_d__29::*)()>(&::Newtonsoft::Json::JsonTextReader__ParseNumberAsync_d__29::MoveNext)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x610bdd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ParseNumberAsync_d__29>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader__ParseNumberAsync_d__29.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader__ParseNumberAsync_d__29::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Newtonsoft::Json::JsonTextReader__ParseNumberAsync_d__29::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x610c028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ParseNumberAsync_d__29>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonTextReader__ParseNumberAsync_d__29::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ParseNumberAsync_d__29>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader__ParseNumberAsync_d__29::SetStateMachine(/* [Nullable(0)] */ ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ParseNumberAsync_d__29>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextReader__ParseNumberAsync_d__29::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Newtonsoft::Json::JsonTextReader__ParseNumberAsync_d__29::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextReader*",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None },
// CppParam { name: "readType", ty: "::Newtonsoft::Json::ReadType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_firstChar_5__2", ty: "char16_t", modifiers: "", def_value:
// Some("{}"), comment: None }, CppParam { name: "_initialPosition_5__3", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Newtonsoft::Json::JsonTextReader__ParseNumberAsync_d__29::JsonTextReader__ParseNumberAsync_d__29(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Newtonsoft::Json::JsonTextReader* __4__this,
    ::System::Threading::CancellationToken cancellationToken, ::Newtonsoft::Json::ReadType readType, char16_t _firstChar_5__2, int32_t _initialPosition_5__3,
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->readType = readType;
  this->_firstChar_5__2 = _firstChar_5__2;
  this->_initialPosition_5__3 = _initialPosition_5__3;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextReader__ParseNumberAsync_d__29::JsonTextReader__ParseNumberAsync_d__29() {}
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader__ParseNumberNaNAsync_d__26.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader__ParseNumberNaNAsync_d__26::*)()>(
    &::Newtonsoft::Json::JsonTextReader__ParseNumberNaNAsync_d__26::MoveNext)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x610c094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ParseNumberNaNAsync_d__26>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader__ParseNumberNaNAsync_d__26.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader__ParseNumberNaNAsync_d__26::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Newtonsoft::Json::JsonTextReader__ParseNumberNaNAsync_d__26::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x610c394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ParseNumberNaNAsync_d__26>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonTextReader__ParseNumberNaNAsync_d__26::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ParseNumberNaNAsync_d__26>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader__ParseNumberNaNAsync_d__26::SetStateMachine(/* [Nullable(0)] */ ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ParseNumberNaNAsync_d__26>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextReader__ParseNumberNaNAsync_d__26::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Newtonsoft::Json::JsonTextReader__ParseNumberNaNAsync_d__26::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Object*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "readType", ty:
// "::Newtonsoft::Json::ReadType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: Some("{}"),
// comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap1", ty:
// "::Newtonsoft::Json::ReadType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Newtonsoft::Json::JsonTextReader__ParseNumberNaNAsync_d__26::JsonTextReader__ParseNumberNaNAsync_d__26(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Object*> __t__builder, ::Newtonsoft::Json::ReadType readType,
    ::Newtonsoft::Json::JsonTextReader* __4__this, ::System::Threading::CancellationToken cancellationToken, ::Newtonsoft::Json::ReadType __7__wrap1,
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->readType = readType;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__7__wrap1 = __7__wrap1;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextReader__ParseNumberNaNAsync_d__26::JsonTextReader__ParseNumberNaNAsync_d__26() {}
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader__ParseNumberNegativeInfinityAsync_d__28.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader__ParseNumberNegativeInfinityAsync_d__28::*)()>(
    &::Newtonsoft::Json::JsonTextReader__ParseNumberNegativeInfinityAsync_d__28::MoveNext)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x610c414;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ParseNumberNegativeInfinityAsync_d__28>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader__ParseNumberNegativeInfinityAsync_d__28.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader__ParseNumberNegativeInfinityAsync_d__28::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Newtonsoft::Json::JsonTextReader__ParseNumberNegativeInfinityAsync_d__28::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x610c714;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ParseNumberNegativeInfinityAsync_d__28>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonTextReader__ParseNumberNegativeInfinityAsync_d__28::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ParseNumberNegativeInfinityAsync_d__28>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader__ParseNumberNegativeInfinityAsync_d__28::SetStateMachine(/* [Nullable(0)] */ ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ParseNumberNegativeInfinityAsync_d__28>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextReader__ParseNumberNegativeInfinityAsync_d__28::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Newtonsoft::Json::JsonTextReader__ParseNumberNegativeInfinityAsync_d__28::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Object*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "readType", ty:
// "::Newtonsoft::Json::ReadType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: Some("{}"),
// comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap1", ty:
// "::Newtonsoft::Json::ReadType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Newtonsoft::Json::JsonTextReader__ParseNumberNegativeInfinityAsync_d__28::JsonTextReader__ParseNumberNegativeInfinityAsync_d__28(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Object*> __t__builder, ::Newtonsoft::Json::ReadType readType,
    ::Newtonsoft::Json::JsonTextReader* __4__this, ::System::Threading::CancellationToken cancellationToken, ::Newtonsoft::Json::ReadType __7__wrap1,
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->readType = readType;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__7__wrap1 = __7__wrap1;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextReader__ParseNumberNegativeInfinityAsync_d__28::JsonTextReader__ParseNumberNegativeInfinityAsync_d__28() {}
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader__ParseNumberPositiveInfinityAsync_d__27.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader__ParseNumberPositiveInfinityAsync_d__27::*)()>(
    &::Newtonsoft::Json::JsonTextReader__ParseNumberPositiveInfinityAsync_d__27::MoveNext)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x610c794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ParseNumberPositiveInfinityAsync_d__27>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader__ParseNumberPositiveInfinityAsync_d__27.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader__ParseNumberPositiveInfinityAsync_d__27::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Newtonsoft::Json::JsonTextReader__ParseNumberPositiveInfinityAsync_d__27::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x610ca94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ParseNumberPositiveInfinityAsync_d__27>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonTextReader__ParseNumberPositiveInfinityAsync_d__27::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ParseNumberPositiveInfinityAsync_d__27>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader__ParseNumberPositiveInfinityAsync_d__27::SetStateMachine(/* [Nullable(0)] */ ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ParseNumberPositiveInfinityAsync_d__27>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextReader__ParseNumberPositiveInfinityAsync_d__27::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Newtonsoft::Json::JsonTextReader__ParseNumberPositiveInfinityAsync_d__27::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Object*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "readType", ty:
// "::Newtonsoft::Json::ReadType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: Some("{}"),
// comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap1", ty:
// "::Newtonsoft::Json::ReadType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Newtonsoft::Json::JsonTextReader__ParseNumberPositiveInfinityAsync_d__27::JsonTextReader__ParseNumberPositiveInfinityAsync_d__27(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Object*> __t__builder, ::Newtonsoft::Json::ReadType readType,
    ::Newtonsoft::Json::JsonTextReader* __4__this, ::System::Threading::CancellationToken cancellationToken, ::Newtonsoft::Json::ReadType __7__wrap1,
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->readType = readType;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__7__wrap1 = __7__wrap1;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextReader__ParseNumberPositiveInfinityAsync_d__27::JsonTextReader__ParseNumberPositiveInfinityAsync_d__27() {}
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader__ParseObjectAsync_d__15.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader__ParseObjectAsync_d__15::*)()>(&::Newtonsoft::Json::JsonTextReader__ParseObjectAsync_d__15::MoveNext)> {
  constexpr static std::size_t size = 0x688;
  constexpr static std::size_t addrs = 0x610cb14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ParseObjectAsync_d__15>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader__ParseObjectAsync_d__15.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader__ParseObjectAsync_d__15::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Newtonsoft::Json::JsonTextReader__ParseObjectAsync_d__15::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x610d19c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ParseObjectAsync_d__15>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonTextReader__ParseObjectAsync_d__15::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ParseObjectAsync_d__15>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader__ParseObjectAsync_d__15::SetStateMachine(/* [Nullable(0)] */ ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ParseObjectAsync_d__15>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextReader__ParseObjectAsync_d__15::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Newtonsoft::Json::JsonTextReader__ParseObjectAsync_d__15::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty:
// "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value:
// Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None
// }, CppParam { name: "__u__3", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Newtonsoft::Json::JsonTextReader__ParseObjectAsync_d__15::JsonTextReader__ParseObjectAsync_d__15(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::Newtonsoft::Json::JsonTextReader* __4__this,
    ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t> __u__1,
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2,
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__3) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
  this->__u__3 = __u__3;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextReader__ParseObjectAsync_d__15::JsonTextReader__ParseObjectAsync_d__15() {}
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader__ParsePostValueAsync_d__4.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader__ParsePostValueAsync_d__4::*)()>(
    &::Newtonsoft::Json::JsonTextReader__ParsePostValueAsync_d__4::MoveNext)> {
  constexpr static std::size_t size = 0x6c4;
  constexpr static std::size_t addrs = 0x610d21c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ParsePostValueAsync_d__4>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader__ParsePostValueAsync_d__4.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader__ParsePostValueAsync_d__4::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Newtonsoft::Json::JsonTextReader__ParsePostValueAsync_d__4::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x610d8e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ParsePostValueAsync_d__4>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonTextReader__ParsePostValueAsync_d__4::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ParsePostValueAsync_d__4>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader__ParsePostValueAsync_d__4::SetStateMachine(/* [Nullable(0)] */ ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ParsePostValueAsync_d__4>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextReader__ParsePostValueAsync_d__4::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Newtonsoft::Json::JsonTextReader__ParsePostValueAsync_d__4::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty:
// "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "ignoreComments", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Newtonsoft::Json::JsonTextReader__ParsePostValueAsync_d__4::JsonTextReader__ParsePostValueAsync_d__4(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::Newtonsoft::Json::JsonTextReader* __4__this,
    ::System::Threading::CancellationToken cancellationToken, bool ignoreComments, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t> __u__1,
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->ignoreComments = ignoreComments;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextReader__ParsePostValueAsync_d__4::JsonTextReader__ParsePostValueAsync_d__4() {}
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader__ParsePropertyAsync_d__31.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader__ParsePropertyAsync_d__31::*)()>(
    &::Newtonsoft::Json::JsonTextReader__ParsePropertyAsync_d__31::MoveNext)> {
  constexpr static std::size_t size = 0x630;
  constexpr static std::size_t addrs = 0x610d960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ParsePropertyAsync_d__31>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader__ParsePropertyAsync_d__31.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader__ParsePropertyAsync_d__31::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Newtonsoft::Json::JsonTextReader__ParsePropertyAsync_d__31::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x610df90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ParsePropertyAsync_d__31>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonTextReader__ParsePropertyAsync_d__31::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ParsePropertyAsync_d__31>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader__ParsePropertyAsync_d__31::SetStateMachine(/* [Nullable(0)] */ ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ParsePropertyAsync_d__31>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextReader__ParsePropertyAsync_d__31::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Newtonsoft::Json::JsonTextReader__ParsePropertyAsync_d__31::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty:
// "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "_quoteChar_5__2", ty: "char16_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_propertyName_5__3", ty:
// "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers:
// "", def_value: Some("{}"), comment: None }]
constexpr ::Newtonsoft::Json::JsonTextReader__ParsePropertyAsync_d__31::JsonTextReader__ParsePropertyAsync_d__31(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::Newtonsoft::Json::JsonTextReader* __4__this,
    ::System::Threading::CancellationToken cancellationToken, char16_t _quoteChar_5__2, ::StringW _propertyName_5__3,
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->_quoteChar_5__2 = _quoteChar_5__2;
  this->_propertyName_5__3 = _propertyName_5__3;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextReader__ParsePropertyAsync_d__31::JsonTextReader__ParsePropertyAsync_d__31() {}
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader__ParseStringAsync_d__18.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader__ParseStringAsync_d__18::*)()>(&::Newtonsoft::Json::JsonTextReader__ParseStringAsync_d__18::MoveNext)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x610e010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ParseStringAsync_d__18>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader__ParseStringAsync_d__18.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader__ParseStringAsync_d__18::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Newtonsoft::Json::JsonTextReader__ParseStringAsync_d__18::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x610e274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ParseStringAsync_d__18>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonTextReader__ParseStringAsync_d__18::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ParseStringAsync_d__18>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader__ParseStringAsync_d__18::SetStateMachine(/* [Nullable(0)] */ ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ParseStringAsync_d__18>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextReader__ParseStringAsync_d__18::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Newtonsoft::Json::JsonTextReader__ParseStringAsync_d__18::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value:
// Some("{}"), comment: None }, CppParam { name: "quote", ty: "char16_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "readType", ty: "::Newtonsoft::Json::ReadType",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value:
// Some("{}"), comment: None }]
constexpr ::Newtonsoft::Json::JsonTextReader__ParseStringAsync_d__18::JsonTextReader__ParseStringAsync_d__18(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Threading::CancellationToken cancellationToken,
    ::Newtonsoft::Json::JsonTextReader* __4__this, char16_t quote, ::Newtonsoft::Json::ReadType readType,
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->cancellationToken = cancellationToken;
  this->__4__this = __4__this;
  this->quote = quote;
  this->readType = readType;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextReader__ParseStringAsync_d__18::JsonTextReader__ParseStringAsync_d__18() {}
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader__ParseUnicodeAsync_d__12.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader__ParseUnicodeAsync_d__12::*)()>(
    &::Newtonsoft::Json::JsonTextReader__ParseUnicodeAsync_d__12::MoveNext)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x610e2e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ParseUnicodeAsync_d__12>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader__ParseUnicodeAsync_d__12.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader__ParseUnicodeAsync_d__12::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Newtonsoft::Json::JsonTextReader__ParseUnicodeAsync_d__12::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x610e5a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ParseUnicodeAsync_d__12>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonTextReader__ParseUnicodeAsync_d__12::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ParseUnicodeAsync_d__12>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader__ParseUnicodeAsync_d__12::SetStateMachine(/* [Nullable(0)] */ ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ParseUnicodeAsync_d__12>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextReader__ParseUnicodeAsync_d__12::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Newtonsoft::Json::JsonTextReader__ParseUnicodeAsync_d__12::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<char16_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty:
// "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>", modifiers: "", def_value:
// Some("{}"), comment: None }]
constexpr ::Newtonsoft::Json::JsonTextReader__ParseUnicodeAsync_d__12::JsonTextReader__ParseUnicodeAsync_d__12(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<char16_t> __t__builder, ::Newtonsoft::Json::JsonTextReader* __4__this,
    ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextReader__ParseUnicodeAsync_d__12::JsonTextReader__ParseUnicodeAsync_d__12() {}
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader__ParseUnquotedPropertyAsync_d__33.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader__ParseUnquotedPropertyAsync_d__33::*)()>(
    &::Newtonsoft::Json::JsonTextReader__ParseUnquotedPropertyAsync_d__33::MoveNext)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x610e624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ParseUnquotedPropertyAsync_d__33>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader__ParseUnquotedPropertyAsync_d__33.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader__ParseUnquotedPropertyAsync_d__33::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Newtonsoft::Json::JsonTextReader__ParseUnquotedPropertyAsync_d__33::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x610e974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ParseUnquotedPropertyAsync_d__33>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonTextReader__ParseUnquotedPropertyAsync_d__33::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ParseUnquotedPropertyAsync_d__33>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader__ParseUnquotedPropertyAsync_d__33::SetStateMachine(/* [Nullable(0)] */ ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ParseUnquotedPropertyAsync_d__33>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextReader__ParseUnquotedPropertyAsync_d__33::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Newtonsoft::Json::JsonTextReader__ParseUnquotedPropertyAsync_d__33::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextReader*",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None },
// CppParam { name: "_initialPosition_5__2", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Newtonsoft::Json::JsonTextReader__ParseUnquotedPropertyAsync_d__33::JsonTextReader__ParseUnquotedPropertyAsync_d__33(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Newtonsoft::Json::JsonTextReader* __4__this,
    ::System::Threading::CancellationToken cancellationToken, int32_t _initialPosition_5__2,
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->_initialPosition_5__2 = _initialPosition_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextReader__ParseUnquotedPropertyAsync_d__33::JsonTextReader__ParseUnquotedPropertyAsync_d__33() {}
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader__ParseValueAsync_d__8.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader__ParseValueAsync_d__8::*)()>(&::Newtonsoft::Json::JsonTextReader__ParseValueAsync_d__8::MoveNext)> {
  constexpr static std::size_t size = 0x116c;
  constexpr static std::size_t addrs = 0x610e9e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ParseValueAsync_d__8>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader__ParseValueAsync_d__8.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader__ParseValueAsync_d__8::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Newtonsoft::Json::JsonTextReader__ParseValueAsync_d__8::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x610fb4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ParseValueAsync_d__8>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonTextReader__ParseValueAsync_d__8::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ParseValueAsync_d__8>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader__ParseValueAsync_d__8::SetStateMachine(/* [Nullable(0)] */ ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ParseValueAsync_d__8>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextReader__ParseValueAsync_d__8::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Newtonsoft::Json::JsonTextReader__ParseValueAsync_d__8::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty:
// "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value:
// Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None
// }, CppParam { name: "__u__3", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam {
// name: "__u__4", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Object*>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Newtonsoft::Json::JsonTextReader__ParseValueAsync_d__8::JsonTextReader__ParseValueAsync_d__8(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::Newtonsoft::Json::JsonTextReader* __4__this,
    ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t> __u__1,
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__3,
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Object*> __u__4) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
  this->__u__3 = __u__3;
  this->__u__4 = __u__4;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextReader__ParseValueAsync_d__8::JsonTextReader__ParseValueAsync_d__8() {}
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader__ProcessCarriageReturnAsync_d__11.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader__ProcessCarriageReturnAsync_d__11::*)()>(
    &::Newtonsoft::Json::JsonTextReader__ProcessCarriageReturnAsync_d__11::MoveNext)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x610fbcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ProcessCarriageReturnAsync_d__11>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader__ProcessCarriageReturnAsync_d__11.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader__ProcessCarriageReturnAsync_d__11::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Newtonsoft::Json::JsonTextReader__ProcessCarriageReturnAsync_d__11::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x610fe38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ProcessCarriageReturnAsync_d__11>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonTextReader__ProcessCarriageReturnAsync_d__11::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ProcessCarriageReturnAsync_d__11>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader__ProcessCarriageReturnAsync_d__11::SetStateMachine(/* [Nullable(0)] */ ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ProcessCarriageReturnAsync_d__11>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextReader__ProcessCarriageReturnAsync_d__11::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Newtonsoft::Json::JsonTextReader__ProcessCarriageReturnAsync_d__11::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "task", ty: "::System::Threading::Tasks::Task_1<bool>*",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam {
// name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Newtonsoft::Json::JsonTextReader__ProcessCarriageReturnAsync_d__11::JsonTextReader__ProcessCarriageReturnAsync_d__11(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Threading::Tasks::Task_1<bool>* task, ::Newtonsoft::Json::JsonTextReader* __4__this,
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->task = task;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextReader__ProcessCarriageReturnAsync_d__11::JsonTextReader__ProcessCarriageReturnAsync_d__11() {}
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader__ReadCharsAsync_d__14.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader__ReadCharsAsync_d__14::*)()>(&::Newtonsoft::Json::JsonTextReader__ReadCharsAsync_d__14::MoveNext)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x610fea4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ReadCharsAsync_d__14>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader__ReadCharsAsync_d__14.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader__ReadCharsAsync_d__14::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Newtonsoft::Json::JsonTextReader__ReadCharsAsync_d__14::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x611019c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ReadCharsAsync_d__14>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonTextReader__ReadCharsAsync_d__14::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ReadCharsAsync_d__14>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader__ReadCharsAsync_d__14::SetStateMachine(/* [Nullable(0)] */ ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ReadCharsAsync_d__14>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextReader__ReadCharsAsync_d__14::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Newtonsoft::Json::JsonTextReader__ReadCharsAsync_d__14::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty:
// "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "relativePosition", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None
// }, CppParam { name: "append", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "_charsRequired_5__2", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Newtonsoft::Json::JsonTextReader__ReadCharsAsync_d__14::JsonTextReader__ReadCharsAsync_d__14(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::Newtonsoft::Json::JsonTextReader* __4__this, int32_t relativePosition, bool append,
    ::System::Threading::CancellationToken cancellationToken, int32_t _charsRequired_5__2,
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->relativePosition = relativePosition;
  this->append = append;
  this->cancellationToken = cancellationToken;
  this->_charsRequired_5__2 = _charsRequired_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextReader__ReadCharsAsync_d__14::JsonTextReader__ReadCharsAsync_d__14() {}
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader__ReadDataAsync_d__7.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader__ReadDataAsync_d__7::*)()>(&::Newtonsoft::Json::JsonTextReader__ReadDataAsync_d__7::MoveNext)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x611021c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ReadDataAsync_d__7>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader__ReadDataAsync_d__7.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader__ReadDataAsync_d__7::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Newtonsoft::Json::JsonTextReader__ReadDataAsync_d__7::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x61105a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ReadDataAsync_d__7>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonTextReader__ReadDataAsync_d__7::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ReadDataAsync_d__7>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader__ReadDataAsync_d__7::SetStateMachine(/* [Nullable(0)] */ ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ReadDataAsync_d__7>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextReader__ReadDataAsync_d__7::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Newtonsoft::Json::JsonTextReader__ReadDataAsync_d__7::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty:
// "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "append", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam
// { name: "charsRequired", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value:
// Some("{}"), comment: None }]
constexpr ::Newtonsoft::Json::JsonTextReader__ReadDataAsync_d__7::JsonTextReader__ReadDataAsync_d__7(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder, ::Newtonsoft::Json::JsonTextReader* __4__this, bool append, int32_t charsRequired,
    ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->append = append;
  this->charsRequired = charsRequired;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextReader__ReadDataAsync_d__7::JsonTextReader__ReadDataAsync_d__7() {}
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader__ReadFinishedAsync_d__36.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader__ReadFinishedAsync_d__36::*)()>(
    &::Newtonsoft::Json::JsonTextReader__ReadFinishedAsync_d__36::MoveNext)> {
  constexpr static std::size_t size = 0x520;
  constexpr static std::size_t addrs = 0x6110624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ReadFinishedAsync_d__36>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader__ReadFinishedAsync_d__36.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader__ReadFinishedAsync_d__36::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Newtonsoft::Json::JsonTextReader__ReadFinishedAsync_d__36::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6110b44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ReadFinishedAsync_d__36>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonTextReader__ReadFinishedAsync_d__36::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ReadFinishedAsync_d__36>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader__ReadFinishedAsync_d__36::SetStateMachine(/* [Nullable(0)] */ ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ReadFinishedAsync_d__36>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextReader__ReadFinishedAsync_d__36::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Newtonsoft::Json::JsonTextReader__ReadFinishedAsync_d__36::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextReader*",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None },
// CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "__u__2", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Newtonsoft::Json::JsonTextReader__ReadFinishedAsync_d__36::JsonTextReader__ReadFinishedAsync_d__36(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Newtonsoft::Json::JsonTextReader* __4__this,
    ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__1,
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextReader__ReadFinishedAsync_d__36::JsonTextReader__ReadFinishedAsync_d__36() {}
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader__ReadFromFinishedAsync_d__5.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader__ReadFromFinishedAsync_d__5::*)()>(
    &::Newtonsoft::Json::JsonTextReader__ReadFromFinishedAsync_d__5::MoveNext)> {
  constexpr static std::size_t size = 0x558;
  constexpr static std::size_t addrs = 0x6110bb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ReadFromFinishedAsync_d__5>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader__ReadFromFinishedAsync_d__5.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader__ReadFromFinishedAsync_d__5::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Newtonsoft::Json::JsonTextReader__ReadFromFinishedAsync_d__5::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6111108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ReadFromFinishedAsync_d__5>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonTextReader__ReadFromFinishedAsync_d__5::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ReadFromFinishedAsync_d__5>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader__ReadFromFinishedAsync_d__5::SetStateMachine(/* [Nullable(0)] */ ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ReadFromFinishedAsync_d__5>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextReader__ReadFromFinishedAsync_d__5::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Newtonsoft::Json::JsonTextReader__ReadFromFinishedAsync_d__5::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty:
// "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>", modifiers: "", def_value:
// Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None
// }]
constexpr ::Newtonsoft::Json::JsonTextReader__ReadFromFinishedAsync_d__5::JsonTextReader__ReadFromFinishedAsync_d__5(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::Newtonsoft::Json::JsonTextReader* __4__this,
    ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__1,
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextReader__ReadFromFinishedAsync_d__5::JsonTextReader__ReadFromFinishedAsync_d__5() {}
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader__ReadIntoWrappedTypeObjectAsync_d__43.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader__ReadIntoWrappedTypeObjectAsync_d__43::*)()>(
    &::Newtonsoft::Json::JsonTextReader__ReadIntoWrappedTypeObjectAsync_d__43::MoveNext)> {
  constexpr static std::size_t size = 0x54c;
  constexpr static std::size_t addrs = 0x6111188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ReadIntoWrappedTypeObjectAsync_d__43>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader__ReadIntoWrappedTypeObjectAsync_d__43.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader__ReadIntoWrappedTypeObjectAsync_d__43::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Newtonsoft::Json::JsonTextReader__ReadIntoWrappedTypeObjectAsync_d__43::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x61116d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ReadIntoWrappedTypeObjectAsync_d__43>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonTextReader__ReadIntoWrappedTypeObjectAsync_d__43::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ReadIntoWrappedTypeObjectAsync_d__43>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader__ReadIntoWrappedTypeObjectAsync_d__43::SetStateMachine(/* [Nullable(0)] */ ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ReadIntoWrappedTypeObjectAsync_d__43>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextReader__ReadIntoWrappedTypeObjectAsync_d__43::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Newtonsoft::Json::JsonTextReader__ReadIntoWrappedTypeObjectAsync_d__43::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextReader*",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None },
// CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Newtonsoft::Json::JsonTextReader__ReadIntoWrappedTypeObjectAsync_d__43::JsonTextReader__ReadIntoWrappedTypeObjectAsync_d__43(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Newtonsoft::Json::JsonTextReader* __4__this,
    ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextReader__ReadIntoWrappedTypeObjectAsync_d__43::JsonTextReader__ReadIntoWrappedTypeObjectAsync_d__43() {}
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader__ReadNullCharAsync_d__34.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader__ReadNullCharAsync_d__34::*)()>(
    &::Newtonsoft::Json::JsonTextReader__ReadNullCharAsync_d__34::MoveNext)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x6111740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ReadNullCharAsync_d__34>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader__ReadNullCharAsync_d__34.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader__ReadNullCharAsync_d__34::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Newtonsoft::Json::JsonTextReader__ReadNullCharAsync_d__34::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6111a18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ReadNullCharAsync_d__34>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonTextReader__ReadNullCharAsync_d__34::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ReadNullCharAsync_d__34>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader__ReadNullCharAsync_d__34::SetStateMachine(/* [Nullable(0)] */ ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ReadNullCharAsync_d__34>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextReader__ReadNullCharAsync_d__34::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Newtonsoft::Json::JsonTextReader__ReadNullCharAsync_d__34::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty:
// "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value:
// Some("{}"), comment: None }]
constexpr ::Newtonsoft::Json::JsonTextReader__ReadNullCharAsync_d__34::JsonTextReader__ReadNullCharAsync_d__34(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::Newtonsoft::Json::JsonTextReader* __4__this,
    ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextReader__ReadNullCharAsync_d__34::JsonTextReader__ReadNullCharAsync_d__34() {}
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader__ReadNumberIntoBufferAsync_d__32.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader__ReadNumberIntoBufferAsync_d__32::*)()>(
    &::Newtonsoft::Json::JsonTextReader__ReadNumberIntoBufferAsync_d__32::MoveNext)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x6111a98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ReadNumberIntoBufferAsync_d__32>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader__ReadNumberIntoBufferAsync_d__32.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader__ReadNumberIntoBufferAsync_d__32::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Newtonsoft::Json::JsonTextReader__ReadNumberIntoBufferAsync_d__32::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6111da4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ReadNumberIntoBufferAsync_d__32>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonTextReader__ReadNumberIntoBufferAsync_d__32::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ReadNumberIntoBufferAsync_d__32>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader__ReadNumberIntoBufferAsync_d__32::SetStateMachine(/* [Nullable(0)] */ ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ReadNumberIntoBufferAsync_d__32>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextReader__ReadNumberIntoBufferAsync_d__32::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Newtonsoft::Json::JsonTextReader__ReadNumberIntoBufferAsync_d__32::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextReader*",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None },
// CppParam { name: "_charPos_5__2", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Newtonsoft::Json::JsonTextReader__ReadNumberIntoBufferAsync_d__32::JsonTextReader__ReadNumberIntoBufferAsync_d__32(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Newtonsoft::Json::JsonTextReader* __4__this,
    ::System::Threading::CancellationToken cancellationToken, int32_t _charPos_5__2, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->_charPos_5__2 = _charPos_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextReader__ReadNumberIntoBufferAsync_d__32::JsonTextReader__ReadNumberIntoBufferAsync_d__32() {}
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader__ReadNumberValueAsync_d__38.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader__ReadNumberValueAsync_d__38::*)()>(
    &::Newtonsoft::Json::JsonTextReader__ReadNumberValueAsync_d__38::MoveNext)> {
  constexpr static std::size_t size = 0xfd0;
  constexpr static std::size_t addrs = 0x6111e10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ReadNumberValueAsync_d__38>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader__ReadNumberValueAsync_d__38.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader__ReadNumberValueAsync_d__38::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Newtonsoft::Json::JsonTextReader__ReadNumberValueAsync_d__38::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6112de0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ReadNumberValueAsync_d__38>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonTextReader__ReadNumberValueAsync_d__38::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ReadNumberValueAsync_d__38>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader__ReadNumberValueAsync_d__38::SetStateMachine(/* [Nullable(0)] */ ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ReadNumberValueAsync_d__38>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextReader__ReadNumberValueAsync_d__38::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Newtonsoft::Json::JsonTextReader__ReadNumberValueAsync_d__38::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Object*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty:
// "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "readType", ty: "::Newtonsoft::Json::ReadType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__3", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Object*>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Newtonsoft::Json::JsonTextReader__ReadNumberValueAsync_d__38::JsonTextReader__ReadNumberValueAsync_d__38(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Object*> __t__builder, ::Newtonsoft::Json::JsonTextReader* __4__this,
    ::System::Threading::CancellationToken cancellationToken, ::Newtonsoft::Json::ReadType readType, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__1,
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2,
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Object*> __u__3) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->readType = readType;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
  this->__u__3 = __u__3;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextReader__ReadNumberValueAsync_d__38::JsonTextReader__ReadNumberValueAsync_d__38() {}
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader__ReadStringIntoBufferAsync_d__9.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader__ReadStringIntoBufferAsync_d__9::*)()>(
    &::Newtonsoft::Json::JsonTextReader__ReadStringIntoBufferAsync_d__9::MoveNext)> {
  constexpr static std::size_t size = 0xe28;
  constexpr static std::size_t addrs = 0x6112e60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ReadStringIntoBufferAsync_d__9>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader__ReadStringIntoBufferAsync_d__9.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader__ReadStringIntoBufferAsync_d__9::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Newtonsoft::Json::JsonTextReader__ReadStringIntoBufferAsync_d__9::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6113c88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ReadStringIntoBufferAsync_d__9>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonTextReader__ReadStringIntoBufferAsync_d__9::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ReadStringIntoBufferAsync_d__9>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader__ReadStringIntoBufferAsync_d__9::SetStateMachine(/* [Nullable(0)] */ ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ReadStringIntoBufferAsync_d__9>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextReader__ReadStringIntoBufferAsync_d__9::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Newtonsoft::Json::JsonTextReader__ReadStringIntoBufferAsync_d__9::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextReader*",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None },
// CppParam { name: "quote", ty: "char16_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_charPos_5__2", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None
// }, CppParam { name: "_initialPosition_5__3", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_lastWritePosition_5__4", ty: "int32_t", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "_escapeStartPos_5__5", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_writeChar_5__6", ty:
// "char16_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "__u__3", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<char16_t>", modifiers: "", def_value:
// Some("{}"), comment: None }, CppParam { name: "_anotherHighSurrogate_5__7", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_highSurrogate_5__8", ty:
// "char16_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__4", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers:
// "", def_value: Some("{}"), comment: None }]
constexpr ::Newtonsoft::Json::JsonTextReader__ReadStringIntoBufferAsync_d__9::JsonTextReader__ReadStringIntoBufferAsync_d__9(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Newtonsoft::Json::JsonTextReader* __4__this,
    ::System::Threading::CancellationToken cancellationToken, char16_t quote, int32_t _charPos_5__2, int32_t _initialPosition_5__3, int32_t _lastWritePosition_5__4, int32_t _escapeStartPos_5__5,
    char16_t _writeChar_5__6, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t> __u__1,
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__2,
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<char16_t> __u__3, bool _anotherHighSurrogate_5__7, char16_t _highSurrogate_5__8,
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__4) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->quote = quote;
  this->_charPos_5__2 = _charPos_5__2;
  this->_initialPosition_5__3 = _initialPosition_5__3;
  this->_lastWritePosition_5__4 = _lastWritePosition_5__4;
  this->_escapeStartPos_5__5 = _escapeStartPos_5__5;
  this->_writeChar_5__6 = _writeChar_5__6;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
  this->__u__3 = __u__3;
  this->_anotherHighSurrogate_5__7 = _anotherHighSurrogate_5__7;
  this->_highSurrogate_5__8 = _highSurrogate_5__8;
  this->__u__4 = __u__4;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextReader__ReadStringIntoBufferAsync_d__9::JsonTextReader__ReadStringIntoBufferAsync_d__9() {}
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader__ReadStringValueAsync_d__37.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader__ReadStringValueAsync_d__37::*)()>(
    &::Newtonsoft::Json::JsonTextReader__ReadStringValueAsync_d__37::MoveNext)> {
  constexpr static std::size_t size = 0x11b8;
  constexpr static std::size_t addrs = 0x6113cf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ReadStringValueAsync_d__37>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader__ReadStringValueAsync_d__37.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader__ReadStringValueAsync_d__37::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Newtonsoft::Json::JsonTextReader__ReadStringValueAsync_d__37::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6114eac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ReadStringValueAsync_d__37>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonTextReader__ReadStringValueAsync_d__37::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ReadStringValueAsync_d__37>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader__ReadStringValueAsync_d__37::SetStateMachine(/* [Nullable(0)] */ ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader__ReadStringValueAsync_d__37>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextReader__ReadStringValueAsync_d__37::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Newtonsoft::Json::JsonTextReader__ReadStringValueAsync_d__37::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Object*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty:
// "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "readType", ty: "::Newtonsoft::Json::ReadType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_expected_5__2", ty:
// "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers:
// "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__3", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Object*>", modifiers: "",
// def_value: Some("{}"), comment: None }]
constexpr ::Newtonsoft::Json::JsonTextReader__ReadStringValueAsync_d__37::JsonTextReader__ReadStringValueAsync_d__37(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Object*> __t__builder, ::Newtonsoft::Json::JsonTextReader* __4__this,
    ::System::Threading::CancellationToken cancellationToken, ::Newtonsoft::Json::ReadType readType, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__1,
    ::StringW _expected_5__2, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2,
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Object*> __u__3) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->readType = readType;
  this->__u__1 = __u__1;
  this->_expected_5__2 = _expected_5__2;
  this->__u__2 = __u__2;
  this->__u__3 = __u__3;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextReader__ReadStringValueAsync_d__37::JsonTextReader__ReadStringValueAsync_d__37() {}
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::Newtonsoft::Json::JsonTextReader::*)(::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextReader::ReadAsync)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x60fcb68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.DoReadAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::Newtonsoft::Json::JsonTextReader::*)(::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextReader::DoReadAsync)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x60fcb78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "DoReadAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.DoReadAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (
    ::Newtonsoft::Json::JsonTextReader::*)(::System::Threading::Tasks::Task_1<bool>*, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextReader::DoReadAsync)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x60fd0d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                                                { "DoReadAsync", {}, { ::i2c::type_of<::System::Threading::Tasks::Task_1<bool>*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParsePostValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::Newtonsoft::Json::JsonTextReader::*)(bool, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextReader::ParsePostValueAsync)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x60fcfd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                                                             { "ParsePostValueAsync", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadFromFinishedAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::Newtonsoft::Json::JsonTextReader::*)(::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextReader::ReadFromFinishedAsync)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x60fd1cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ReadFromFinishedAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadDataAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<int32_t>* (::Newtonsoft::Json::JsonTextReader::*)(bool, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextReader::ReadDataAsync)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x60fd2bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ReadDataAsync", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadDataAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<int32_t>* (::Newtonsoft::Json::JsonTextReader::*)(bool, int32_t, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextReader::ReadDataAsync)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x60fd2c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                                                { "ReadDataAsync", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::Newtonsoft::Json::JsonTextReader::*)(::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextReader::ParseValueAsync)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x60fcdf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ParseValueAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadStringIntoBufferAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextReader::*)(char16_t, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextReader::ReadStringIntoBufferAsync)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x60fd3d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                                                             { "ReadStringIntoBufferAsync", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ProcessCarriageReturnAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextReader::*)(bool, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextReader::ProcessCarriageReturnAsync)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x60fd4a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                                                             { "ProcessCarriageReturnAsync", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ProcessCarriageReturnAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextReader::*)(::System::Threading::Tasks::Task_1<bool>*)>(
    &::Newtonsoft::Json::JsonTextReader::ProcessCarriageReturnAsync)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x60fd710;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                                                                                           { "ProcessCarriageReturnAsync", {}, { ::i2c::type_of<::System::Threading::Tasks::Task_1<bool>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseUnicodeAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<char16_t>* (::Newtonsoft::Json::JsonTextReader::*)(::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextReader::ParseUnicodeAsync)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x60fd7d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ParseUnicodeAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.EnsureCharsAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::Newtonsoft::Json::JsonTextReader::*)(int32_t, bool, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextReader::EnsureCharsAsync)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x60fd5d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                                                { "EnsureCharsAsync", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadCharsAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::Newtonsoft::Json::JsonTextReader::*)(int32_t, bool, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextReader::ReadCharsAsync)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x60fd8bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                                                { "ReadCharsAsync", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseObjectAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::Newtonsoft::Json::JsonTextReader::*)(::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextReader::ParseObjectAsync)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x60fcee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ParseObjectAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseCommentAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextReader::*)(bool, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextReader::ParseCommentAsync)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x60fd9c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                                                             { "ParseCommentAsync", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.EatWhitespaceAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextReader::*)(::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextReader::EatWhitespaceAsync)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x60fda9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "EatWhitespaceAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseStringAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::Newtonsoft::Json::JsonTextReader::*)(char16_t, ::Newtonsoft::Json::ReadType, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextReader::ParseStringAsync)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x60fdb60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                            { "ParseStringAsync", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<::Newtonsoft::Json::ReadType>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.MatchValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::Newtonsoft::Json::JsonTextReader::*)(::StringW, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextReader::MatchValueAsync)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x60fdc3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                                                             { "MatchValueAsync", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.MatchValueWithTrailingSeparatorAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::Newtonsoft::Json::JsonTextReader::*)(::StringW, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextReader::MatchValueWithTrailingSeparatorAsync)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x60fdd30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                                                { "MatchValueWithTrailingSeparatorAsync", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.MatchAndSetAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextReader::*)(::StringW, ::Newtonsoft::Json::JsonToken, ::System::Object*, ::System::Threading::CancellationToken)>(
        &::Newtonsoft::Json::JsonTextReader::MatchAndSetAsync)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x60fde24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                                                                                           { "MatchAndSetAsync",
                                                                                             {},
                                                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Newtonsoft::Json::JsonToken>(),
                                                                                               ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseTrueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextReader::*)(::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextReader::ParseTrueAsync)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x60fdf08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ParseTrueAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseFalseAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextReader::*)(::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextReader::ParseFalseAsync)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x60fdfa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ParseFalseAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseNullAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextReader::*)(::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextReader::ParseNullAsync)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x60fe034;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ParseNullAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseConstructorAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextReader::*)(::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextReader::ParseConstructorAsync)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x60fe0b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ParseConstructorAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseNumberNaNAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Object*>* (
    ::Newtonsoft::Json::JsonTextReader::*)(::Newtonsoft::Json::ReadType, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextReader::ParseNumberNaNAsync)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x60fe178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                                                { "ParseNumberNaNAsync", {}, { ::i2c::type_of<::Newtonsoft::Json::ReadType>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseNumberPositiveInfinityAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Object*>* (
    ::Newtonsoft::Json::JsonTextReader::*)(::Newtonsoft::Json::ReadType, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextReader::ParseNumberPositiveInfinityAsync)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x60fe270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                                         { "ParseNumberPositiveInfinityAsync", {}, { ::i2c::type_of<::Newtonsoft::Json::ReadType>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseNumberNegativeInfinityAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Object*>* (
    ::Newtonsoft::Json::JsonTextReader::*)(::Newtonsoft::Json::ReadType, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextReader::ParseNumberNegativeInfinityAsync)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x60fe368;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                                         { "ParseNumberNegativeInfinityAsync", {}, { ::i2c::type_of<::Newtonsoft::Json::ReadType>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseNumberAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextReader::*)(::Newtonsoft::Json::ReadType, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextReader::ParseNumberAsync)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x60fe460;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                                                { "ParseNumberAsync", {}, { ::i2c::type_of<::Newtonsoft::Json::ReadType>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseUndefinedAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextReader::*)(::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextReader::ParseUndefinedAsync)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x60fe52c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ParseUndefinedAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParsePropertyAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::Newtonsoft::Json::JsonTextReader::*)(::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextReader::ParsePropertyAsync)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x60fe5a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ParsePropertyAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadNumberIntoBufferAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextReader::*)(::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextReader::ReadNumberIntoBufferAsync)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x60fe698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ReadNumberIntoBufferAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseUnquotedPropertyAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextReader::*)(::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextReader::ParseUnquotedPropertyAsync)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x60fe75c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ParseUnquotedPropertyAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadNullCharAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::Newtonsoft::Json::JsonTextReader::*)(::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextReader::ReadNullCharAsync)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x60fe820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ReadNullCharAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.HandleNullAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextReader::*)(::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextReader::HandleNullAsync)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x60fe90c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "HandleNullAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadFinishedAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextReader::*)(::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextReader::ReadFinishedAsync)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x60fe9d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ReadFinishedAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadStringValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Object*>* (
    ::Newtonsoft::Json::JsonTextReader::*)(::Newtonsoft::Json::ReadType, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextReader::ReadStringValueAsync)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x60fea94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                                                { "ReadStringValueAsync", {}, { ::i2c::type_of<::Newtonsoft::Json::ReadType>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadNumberValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Object*>* (
    ::Newtonsoft::Json::JsonTextReader::*)(::Newtonsoft::Json::ReadType, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextReader::ReadNumberValueAsync)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x60feb90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                                                { "ReadNumberValueAsync", {}, { ::i2c::type_of<::Newtonsoft::Json::ReadType>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadAsBooleanAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Nullable_1<bool>>* (::Newtonsoft::Json::JsonTextReader::*)(::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextReader::ReadAsBooleanAsync)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x60fec8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.DoReadAsBooleanAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Nullable_1<bool>>* (::Newtonsoft::Json::JsonTextReader::*)(::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextReader::DoReadAsBooleanAsync)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x60fec9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "DoReadAsBooleanAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadAsBytesAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>* (::Newtonsoft::Json::JsonTextReader::*)(::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextReader::ReadAsBytesAsync)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x60fed90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.DoReadAsBytesAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>* (::Newtonsoft::Json::JsonTextReader::*)(::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextReader::DoReadAsBytesAsync)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x60feda0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "DoReadAsBytesAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadIntoWrappedTypeObjectAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextReader::*)(::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextReader::ReadIntoWrappedTypeObjectAsync)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x60fee94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                                                                                           { "ReadIntoWrappedTypeObjectAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadAsDateTimeAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Nullable_1<::System::DateTime>>* (
    ::Newtonsoft::Json::JsonTextReader::*)(::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextReader::ReadAsDateTimeAsync)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x60fef54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.DoReadAsDateTimeAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Nullable_1<::System::DateTime>>* (
    ::Newtonsoft::Json::JsonTextReader::*)(::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextReader::DoReadAsDateTimeAsync)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x60fef64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "DoReadAsDateTimeAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadAsDateTimeOffsetAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Nullable_1<::System::DateTimeOffset>>* (
    ::Newtonsoft::Json::JsonTextReader::*)(::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextReader::ReadAsDateTimeOffsetAsync)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x60ff050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.DoReadAsDateTimeOffsetAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Nullable_1<::System::DateTimeOffset>>* (
    ::Newtonsoft::Json::JsonTextReader::*)(::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextReader::DoReadAsDateTimeOffsetAsync)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x60ff060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "DoReadAsDateTimeOffsetAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadAsDecimalAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Nullable_1<::System::Decimal>>* (
    ::Newtonsoft::Json::JsonTextReader::*)(::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextReader::ReadAsDecimalAsync)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x60ff14c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.DoReadAsDecimalAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Nullable_1<::System::Decimal>>* (
    ::Newtonsoft::Json::JsonTextReader::*)(::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextReader::DoReadAsDecimalAsync)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x60ff15c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "DoReadAsDecimalAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadAsDoubleAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Nullable_1<double_t>>* (
    ::Newtonsoft::Json::JsonTextReader::*)(::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextReader::ReadAsDoubleAsync)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x60ff248;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.DoReadAsDoubleAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Nullable_1<double_t>>* (
    ::Newtonsoft::Json::JsonTextReader::*)(::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextReader::DoReadAsDoubleAsync)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x60ff258;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "DoReadAsDoubleAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadAsInt32Async
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>* (
    ::Newtonsoft::Json::JsonTextReader::*)(::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextReader::ReadAsInt32Async)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x60ff344;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.DoReadAsInt32Async
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>* (
    ::Newtonsoft::Json::JsonTextReader::*)(::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextReader::DoReadAsInt32Async)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x60ff354;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "DoReadAsInt32Async", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadAsStringAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::Newtonsoft::Json::JsonTextReader::*)(::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextReader::ReadAsStringAsync)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x60ff440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.DoReadAsStringAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::Newtonsoft::Json::JsonTextReader::*)(::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonTextReader::DoReadAsStringAsync)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x60ff450;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "DoReadAsStringAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)(::System::IO::TextReader*)>(&::Newtonsoft::Json::JsonTextReader::_ctor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x60efa74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::TextReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.get_PropertyNameTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::JsonNameTable* (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::get_PropertyNameTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60ff53c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "get_PropertyNameTable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.set_PropertyNameTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)(::Newtonsoft::Json::JsonNameTable*)>(&::Newtonsoft::Json::JsonTextReader::set_PropertyNameTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60ff544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "set_PropertyNameTable", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonNameTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.get_ArrayPool
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::IArrayPool_1<char16_t>* (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::get_ArrayPool)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60ff54c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "get_ArrayPool", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.set_ArrayPool
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)(::Newtonsoft::Json::IArrayPool_1<char16_t>*)>(&::Newtonsoft::Json::JsonTextReader::set_ArrayPool)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x60ff554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "set_ArrayPool", {}, { ::i2c::type_of<::Newtonsoft::Json::IArrayPool_1<char16_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.EnsureBufferNotEmpty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::EnsureBufferNotEmpty)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x60ff5ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "EnsureBufferNotEmpty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.SetNewLine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)(bool)>(&::Newtonsoft::Json::JsonTextReader::SetNewLine)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x60fd6b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "SetNewLine", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.OnNewLine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)(int32_t)>(&::Newtonsoft::Json::JsonTextReader::OnNewLine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x60ff5dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "OnNewLine", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)(char16_t, ::Newtonsoft::Json::ReadType)>(&::Newtonsoft::Json::JsonTextReader::ParseString)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x60ff5ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                                                                                           { "ParseString", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<::Newtonsoft::Json::ReadType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseReadString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)(char16_t, ::Newtonsoft::Json::ReadType)>(&::Newtonsoft::Json::JsonTextReader::ParseReadString)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x60ffbdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                                                                                           { "ParseReadString", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<::Newtonsoft::Json::ReadType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.BlockCopyChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<char16_t>, int32_t, ::ArrayW<char16_t>, int32_t, int32_t)>(&::Newtonsoft::Json::JsonTextReader::BlockCopyChars)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x60fff68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                            { "BlockCopyChars",
                              {},
                              { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ShiftBufferIfNeeded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::ShiftBufferIfNeeded)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x60ff634;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ShiftBufferIfNeeded", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Newtonsoft::Json::JsonTextReader::*)(bool)>(&::Newtonsoft::Json::JsonTextReader::ReadData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60fff7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ReadData", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.PrepareBufferForReadData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)(bool, int32_t)>(&::Newtonsoft::Json::JsonTextReader::PrepareBufferForReadData)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x6100014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "PrepareBufferForReadData", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Newtonsoft::Json::JsonTextReader::*)(bool, int32_t)>(&::Newtonsoft::Json::JsonTextReader::ReadData)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x60fff84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ReadData", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.EnsureChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::JsonTextReader::*)(int32_t, bool)>(&::Newtonsoft::Json::JsonTextReader::EnsureChars)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x61001a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "EnsureChars", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::JsonTextReader::*)(int32_t, bool)>(&::Newtonsoft::Json::JsonTextReader::ReadChars)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x61001c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ReadChars", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::Read)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x6100234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadAsInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<int32_t> (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::ReadAsInt32)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x6101038;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadAsDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::System::DateTime> (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::ReadAsDateTime)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x6101520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadAsString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::ReadAsString)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6101b54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadAsBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::ReadAsBytes)> {
  constexpr static std::size_t size = 0x464;
  constexpr static std::size_t addrs = 0x6101b84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadStringValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Newtonsoft::Json::JsonTextReader::*)(::Newtonsoft::Json::ReadType)>(&::Newtonsoft::Json::JsonTextReader::ReadStringValue)> {
  constexpr static std::size_t size = 0x51c;
  constexpr static std::size_t addrs = 0x6101638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ReadStringValue", {}, { ::i2c::type_of<::Newtonsoft::Json::ReadType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.FinishReadQuotedStringValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Newtonsoft::Json::JsonTextReader::*)(::Newtonsoft::Json::ReadType)>(
    &::Newtonsoft::Json::JsonTextReader::FinishReadQuotedStringValue)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x61023a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "FinishReadQuotedStringValue", {}, { ::i2c::type_of<::Newtonsoft::Json::ReadType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.CreateUnexpectedCharacterException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::JsonReaderException* (::Newtonsoft::Json::JsonTextReader::*)(char16_t)>(
    &::Newtonsoft::Json::JsonTextReader::CreateUnexpectedCharacterException)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6102154;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "CreateUnexpectedCharacterException", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadAsBoolean
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<bool> (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::ReadAsBoolean)> {
  constexpr static std::size_t size = 0x5ac;
  constexpr static std::size_t addrs = 0x6102874;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ProcessValueComma
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::ProcessValueComma)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x61020f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ProcessValueComma", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadNumberValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Newtonsoft::Json::JsonTextReader::*)(::Newtonsoft::Json::ReadType)>(&::Newtonsoft::Json::JsonTextReader::ReadNumberValue)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x6101150;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ReadNumberValue", {}, { ::i2c::type_of<::Newtonsoft::Json::ReadType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.FinishReadQuotedNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Newtonsoft::Json::JsonTextReader::*)(::Newtonsoft::Json::ReadType)>(
    &::Newtonsoft::Json::JsonTextReader::FinishReadQuotedNumber)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x6102e20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "FinishReadQuotedNumber", {}, { ::i2c::type_of<::Newtonsoft::Json::ReadType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadAsDateTimeOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::System::DateTimeOffset> (::Newtonsoft::Json::JsonTextReader::*)()>(
    &::Newtonsoft::Json::JsonTextReader::ReadAsDateTimeOffset)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x6102fb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadAsDecimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::System::Decimal> (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::ReadAsDecimal)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x61030e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadAsDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<double_t> (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::ReadAsDouble)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x6103210;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.HandleNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::HandleNull)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6102038;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "HandleNull", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadFinished
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::ReadFinished)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x6102274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ReadFinished", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadNullChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::ReadNullChar)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6101fe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ReadNullChar", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.EnsureBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::EnsureBuffer)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x60fcdb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "EnsureBuffer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadStringIntoBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)(char16_t)>(&::Newtonsoft::Json::JsonTextReader::ReadStringIntoBuffer)> {
  constexpr static std::size_t size = 0x4e4;
  constexpr static std::size_t addrs = 0x60ff6f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ReadStringIntoBuffer", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.FinishReadStringIntoBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)(int32_t, int32_t, int32_t)>(&::Newtonsoft::Json::JsonTextReader::FinishReadStringIntoBuffer)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6103498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                                                             { "FinishReadStringIntoBuffer", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.WriteCharToBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)(char16_t, int32_t, int32_t)>(&::Newtonsoft::Json::JsonTextReader::WriteCharToBuffer)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6103448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                                                             { "WriteCharToBuffer", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ConvertUnicode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::Newtonsoft::Json::JsonTextReader::*)(bool)>(&::Newtonsoft::Json::JsonTextReader::ConvertUnicode)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x6103530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ConvertUnicode", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseUnicode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::ParseUnicode)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6103408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ParseUnicode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadNumberIntoBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::ReadNumberIntoBuffer)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6103688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ReadNumberIntoBuffer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadNumberCharIntoBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::JsonTextReader::*)(char16_t, int32_t)>(&::Newtonsoft::Json::JsonTextReader::ReadNumberCharIntoBuffer)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x610370c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ReadNumberCharIntoBuffer", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ClearRecentString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::ClearRecentString)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x610386c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ClearRecentString", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParsePostValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::JsonTextReader::*)(bool)>(&::Newtonsoft::Json::JsonTextReader::ParsePostValue)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x6100a20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ParsePostValue", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::ParseObject)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x61008c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ParseObject", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::ParseProperty)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x6103878;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ParseProperty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ValidIdentifierChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::JsonTextReader::*)(char16_t)>(&::Newtonsoft::Json::JsonTextReader::ValidIdentifierChar)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6103a98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ValidIdentifierChar", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseUnquotedProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::ParseUnquotedProperty)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6103ae8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ParseUnquotedProperty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadUnquotedPropertyReportIfDone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::JsonTextReader::*)(char16_t, int32_t)>(&::Newtonsoft::Json::JsonTextReader::ReadUnquotedPropertyReportIfDone)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6103bac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                                                                                           { "ReadUnquotedPropertyReportIfDone", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::ParseValue)> {
  constexpr static std::size_t size = 0x480;
  constexpr static std::size_t addrs = 0x6100440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ParseValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ProcessLineFeed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::ProcessLineFeed)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6102258;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ProcessLineFeed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ProcessCarriageReturn
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)(bool)>(&::Newtonsoft::Json::JsonTextReader::ProcessCarriageReturn)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6102210;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ProcessCarriageReturn", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.EatWhitespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::EatWhitespace)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6100ca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "EatWhitespace", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseConstructor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::ParseConstructor)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x6103ee0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ParseConstructor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)(::Newtonsoft::Json::ReadType)>(&::Newtonsoft::Json::JsonTextReader::ParseNumber)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6102660;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ParseNumber", {}, { ::i2c::type_of<::Newtonsoft::Json::ReadType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseReadNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)(::Newtonsoft::Json::ReadType, char16_t, int32_t)>(
    &::Newtonsoft::Json::JsonTextReader::ParseReadNumber)> {
  constexpr static std::size_t size = 0xfac;
  constexpr static std::size_t addrs = 0x61042ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                                                             { "ParseReadNumber", {}, { ::i2c::type_of<::Newtonsoft::Json::ReadType>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ThrowReaderError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::JsonReaderException* (::Newtonsoft::Json::JsonTextReader::*)(::StringW, ::System::Exception*)>(
    &::Newtonsoft::Json::JsonTextReader::ThrowReaderError)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6105258;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ThrowReaderError", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.BigIntegerParse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::StringW, ::System::Globalization::CultureInfo*)>(&::Newtonsoft::Json::JsonTextReader::BigIntegerParse)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6105284;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                                                             { "BigIntegerParse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::CultureInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseComment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)(bool)>(&::Newtonsoft::Json::JsonTextReader::ParseComment)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x6100d90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ParseComment", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.EndComment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)(bool, int32_t, int32_t)>(&::Newtonsoft::Json::JsonTextReader::EndComment)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6105310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                                                                                           { "EndComment", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.MatchValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::JsonTextReader::*)(::StringW)>(&::Newtonsoft::Json::JsonTextReader::MatchValue)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6105344;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "MatchValue", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.MatchValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::JsonTextReader::*)(bool, ::StringW)>(&::Newtonsoft::Json::JsonTextReader::MatchValue)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x61053a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "MatchValue", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.MatchValueWithTrailingSeparator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::JsonTextReader::*)(::StringW)>(&::Newtonsoft::Json::JsonTextReader::MatchValueWithTrailingSeparator)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x61026c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "MatchValueWithTrailingSeparator", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.IsSeparator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::JsonTextReader::*)(char16_t)>(&::Newtonsoft::Json::JsonTextReader::IsSeparator)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x6105470;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "IsSeparator", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseTrue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::ParseTrue)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6103cb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ParseTrue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::ParseNull)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6103328;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ParseNull", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseUndefined
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::ParseUndefined)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x61041d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ParseUndefined", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseFalse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::ParseFalse)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6103dcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ParseFalse", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseNumberNegativeInfinity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Newtonsoft::Json::JsonTextReader::*)(::Newtonsoft::Json::ReadType)>(
    &::Newtonsoft::Json::JsonTextReader::ParseNumberNegativeInfinity)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x61025dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ParseNumberNegativeInfinity", {}, { ::i2c::type_of<::Newtonsoft::Json::ReadType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseNumberNegativeInfinity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Newtonsoft::Json::JsonTextReader::*)(::Newtonsoft::Json::ReadType, bool)>(
    &::Newtonsoft::Json::JsonTextReader::ParseNumberNegativeInfinity)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x61055b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                                                             { "ParseNumberNegativeInfinity", {}, { ::i2c::type_of<::Newtonsoft::Json::ReadType>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseNumberPositiveInfinity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Newtonsoft::Json::JsonTextReader::*)(::Newtonsoft::Json::ReadType)>(
    &::Newtonsoft::Json::JsonTextReader::ParseNumberPositiveInfinity)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x610276c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ParseNumberPositiveInfinity", {}, { ::i2c::type_of<::Newtonsoft::Json::ReadType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseNumberPositiveInfinity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Newtonsoft::Json::JsonTextReader::*)(::Newtonsoft::Json::ReadType, bool)>(
    &::Newtonsoft::Json::JsonTextReader::ParseNumberPositiveInfinity)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x6105758;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                                                             { "ParseNumberPositiveInfinity", {}, { ::i2c::type_of<::Newtonsoft::Json::ReadType>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseNumberNaN
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Newtonsoft::Json::JsonTextReader::*)(::Newtonsoft::Json::ReadType)>(&::Newtonsoft::Json::JsonTextReader::ParseNumberNaN)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x61027f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ParseNumberNaN", {}, { ::i2c::type_of<::Newtonsoft::Json::ReadType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseNumberNaN
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Newtonsoft::Json::JsonTextReader::*)(::Newtonsoft::Json::ReadType, bool)>(
    &::Newtonsoft::Json::JsonTextReader::ParseNumberNaN)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x61058fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                                                                                           { "ParseNumberNaN", {}, { ::i2c::type_of<::Newtonsoft::Json::ReadType>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::Close)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6105aa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.HasLineInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::HasLineInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6105b10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "HasLineInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.get_LineNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::get_LineNumber)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6105b18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "get_LineNumber", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.get_LinePosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::get_LinePosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6105b64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "get_LinePosition", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& Newtonsoft::Json::JsonTextReader::__cordl_internal_get__safeAsync() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____safeAsync;
}
constexpr bool const& Newtonsoft::Json::JsonTextReader::__cordl_internal_get__safeAsync() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____safeAsync;
}
constexpr void Newtonsoft::Json::JsonTextReader::__cordl_internal_set__safeAsync(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____safeAsync = value;
}
constexpr ::System::IO::TextReader*& Newtonsoft::Json::JsonTextReader::__cordl_internal_get__reader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reader;
}
constexpr ::System::IO::TextReader* const& Newtonsoft::Json::JsonTextReader::__cordl_internal_get__reader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reader;
}
constexpr void Newtonsoft::Json::JsonTextReader::__cordl_internal_set__reader(::System::IO::TextReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____reader = value;
}
constexpr ::ArrayW<char16_t>& Newtonsoft::Json::JsonTextReader::__cordl_internal_get__chars() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____chars;
}
constexpr ::ArrayW<char16_t> const& Newtonsoft::Json::JsonTextReader::__cordl_internal_get__chars() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____chars;
}
constexpr void Newtonsoft::Json::JsonTextReader::__cordl_internal_set__chars(::ArrayW<char16_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____chars = value;
}
constexpr int32_t& Newtonsoft::Json::JsonTextReader::__cordl_internal_get__charsUsed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____charsUsed;
}
constexpr int32_t const& Newtonsoft::Json::JsonTextReader::__cordl_internal_get__charsUsed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____charsUsed;
}
constexpr void Newtonsoft::Json::JsonTextReader::__cordl_internal_set__charsUsed(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____charsUsed = value;
}
constexpr int32_t& Newtonsoft::Json::JsonTextReader::__cordl_internal_get__charPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____charPos;
}
constexpr int32_t const& Newtonsoft::Json::JsonTextReader::__cordl_internal_get__charPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____charPos;
}
constexpr void Newtonsoft::Json::JsonTextReader::__cordl_internal_set__charPos(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____charPos = value;
}
constexpr int32_t& Newtonsoft::Json::JsonTextReader::__cordl_internal_get__lineStartPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lineStartPos;
}
constexpr int32_t const& Newtonsoft::Json::JsonTextReader::__cordl_internal_get__lineStartPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lineStartPos;
}
constexpr void Newtonsoft::Json::JsonTextReader::__cordl_internal_set__lineStartPos(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lineStartPos = value;
}
constexpr int32_t& Newtonsoft::Json::JsonTextReader::__cordl_internal_get__lineNumber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lineNumber;
}
constexpr int32_t const& Newtonsoft::Json::JsonTextReader::__cordl_internal_get__lineNumber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lineNumber;
}
constexpr void Newtonsoft::Json::JsonTextReader::__cordl_internal_set__lineNumber(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lineNumber = value;
}
constexpr bool& Newtonsoft::Json::JsonTextReader::__cordl_internal_get__isEndOfFile() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isEndOfFile;
}
constexpr bool const& Newtonsoft::Json::JsonTextReader::__cordl_internal_get__isEndOfFile() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isEndOfFile;
}
constexpr void Newtonsoft::Json::JsonTextReader::__cordl_internal_set__isEndOfFile(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isEndOfFile = value;
}
constexpr ::Newtonsoft::Json::Utilities::StringBuffer& Newtonsoft::Json::JsonTextReader::__cordl_internal_get__stringBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stringBuffer;
}
constexpr ::Newtonsoft::Json::Utilities::StringBuffer const& Newtonsoft::Json::JsonTextReader::__cordl_internal_get__stringBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stringBuffer;
}
constexpr void Newtonsoft::Json::JsonTextReader::__cordl_internal_set__stringBuffer(::Newtonsoft::Json::Utilities::StringBuffer value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____stringBuffer = value;
}
constexpr ::Newtonsoft::Json::Utilities::StringReference& Newtonsoft::Json::JsonTextReader::__cordl_internal_get__stringReference() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stringReference;
}
constexpr ::Newtonsoft::Json::Utilities::StringReference const& Newtonsoft::Json::JsonTextReader::__cordl_internal_get__stringReference() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stringReference;
}
constexpr void Newtonsoft::Json::JsonTextReader::__cordl_internal_set__stringReference(::Newtonsoft::Json::Utilities::StringReference value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____stringReference = value;
}
constexpr ::Newtonsoft::Json::IArrayPool_1<char16_t>*& Newtonsoft::Json::JsonTextReader::__cordl_internal_get__arrayPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arrayPool;
}
constexpr ::Newtonsoft::Json::IArrayPool_1<char16_t>* const& Newtonsoft::Json::JsonTextReader::__cordl_internal_get__arrayPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arrayPool;
}
constexpr void Newtonsoft::Json::JsonTextReader::__cordl_internal_set__arrayPool(::Newtonsoft::Json::IArrayPool_1<char16_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____arrayPool = value;
}
constexpr ::Newtonsoft::Json::JsonNameTable*& Newtonsoft::Json::JsonTextReader::__cordl_internal_get__PropertyNameTable_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____PropertyNameTable_k__BackingField;
}
constexpr ::Newtonsoft::Json::JsonNameTable* const& Newtonsoft::Json::JsonTextReader::__cordl_internal_get__PropertyNameTable_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____PropertyNameTable_k__BackingField;
}
constexpr void Newtonsoft::Json::JsonTextReader::__cordl_internal_set__PropertyNameTable_k__BackingField(::Newtonsoft::Json::JsonNameTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____PropertyNameTable_k__BackingField = value;
}
inline ::System::Threading::Tasks::Task_1<bool>* Newtonsoft::Json::JsonTextReader::ReadAsync(::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<bool>* Newtonsoft::Json::JsonTextReader::DoReadAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "DoReadAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<bool>* Newtonsoft::Json::JsonTextReader::DoReadAsync(::System::Threading::Tasks::Task_1<bool>* task,
                                                                                               ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                                              { "DoReadAsync", {}, { ::i2c::type_of<::System::Threading::Tasks::Task_1<bool>*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, task, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<bool>* Newtonsoft::Json::JsonTextReader::ParsePostValueAsync(bool ignoreComments, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                                                           { "ParsePostValueAsync", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, ignoreComments, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<bool>* Newtonsoft::Json::JsonTextReader::ReadFromFinishedAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ReadFromFinishedAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<int32_t>* Newtonsoft::Json::JsonTextReader::ReadDataAsync(bool append, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ReadDataAsync", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>*>(this, ___internal_method, append, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<int32_t>* Newtonsoft::Json::JsonTextReader::ReadDataAsync(bool append, int32_t charsRequired, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                                                           { "ReadDataAsync", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>*>(this, ___internal_method, append, charsRequired, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<bool>* Newtonsoft::Json::JsonTextReader::ParseValueAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ParseValueAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextReader::ReadStringIntoBufferAsync(char16_t quote, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                                                           { "ReadStringIntoBufferAsync", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, quote, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextReader::ProcessCarriageReturnAsync(bool append, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                                                           { "ProcessCarriageReturnAsync", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, append, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextReader::ProcessCarriageReturnAsync(::System::Threading::Tasks::Task_1<bool>* task) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ProcessCarriageReturnAsync", {}, { ::i2c::type_of<::System::Threading::Tasks::Task_1<bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, task);
}
inline ::System::Threading::Tasks::Task_1<char16_t>* Newtonsoft::Json::JsonTextReader::ParseUnicodeAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ParseUnicodeAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<char16_t>*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<bool>* Newtonsoft::Json::JsonTextReader::EnsureCharsAsync(int32_t relativePosition, bool append, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                                              { "EnsureCharsAsync", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, relativePosition, append, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<bool>* Newtonsoft::Json::JsonTextReader::ReadCharsAsync(int32_t relativePosition, bool append, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                                                           { "ReadCharsAsync", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, relativePosition, append, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<bool>* Newtonsoft::Json::JsonTextReader::ParseObjectAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ParseObjectAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextReader::ParseCommentAsync(bool setToken, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ParseCommentAsync", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, setToken, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextReader::EatWhitespaceAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "EatWhitespaceAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextReader::ParseStringAsync(char16_t quote, ::Newtonsoft::Json::ReadType readType,
                                                                                            ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                          { "ParseStringAsync", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<::Newtonsoft::Json::ReadType>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, quote, readType, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<bool>* Newtonsoft::Json::JsonTextReader::MatchValueAsync(::StringW value, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                                                           { "MatchValueAsync", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<bool>* Newtonsoft::Json::JsonTextReader::MatchValueWithTrailingSeparatorAsync(::StringW value, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                                                           { "MatchValueWithTrailingSeparatorAsync", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextReader::MatchAndSetAsync(::StringW value, ::Newtonsoft::Json::JsonToken newToken, /* [Nullable(2)] */ ::System::Object* tokenValue,
                                                                                            ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "MatchAndSetAsync",
                                                                                                 {},
                                                                                                 { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Newtonsoft::Json::JsonToken>(),
                                                                                                   ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, newToken, tokenValue, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextReader::ParseTrueAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ParseTrueAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextReader::ParseFalseAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ParseFalseAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextReader::ParseNullAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ParseNullAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextReader::ParseConstructorAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ParseConstructorAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::System::Object*>* Newtonsoft::Json::JsonTextReader::ParseNumberNaNAsync(::Newtonsoft::Json::ReadType readType,
                                                                                                                    ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                                              { "ParseNumberNaNAsync", {}, { ::i2c::type_of<::Newtonsoft::Json::ReadType>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Object*>*>(this, ___internal_method, readType, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::System::Object*>* Newtonsoft::Json::JsonTextReader::ParseNumberPositiveInfinityAsync(::Newtonsoft::Json::ReadType readType,
                                                                                                                                 ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                                       { "ParseNumberPositiveInfinityAsync", {}, { ::i2c::type_of<::Newtonsoft::Json::ReadType>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Object*>*>(this, ___internal_method, readType, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::System::Object*>* Newtonsoft::Json::JsonTextReader::ParseNumberNegativeInfinityAsync(::Newtonsoft::Json::ReadType readType,
                                                                                                                                 ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                                       { "ParseNumberNegativeInfinityAsync", {}, { ::i2c::type_of<::Newtonsoft::Json::ReadType>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Object*>*>(this, ___internal_method, readType, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextReader::ParseNumberAsync(::Newtonsoft::Json::ReadType readType, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                                                           { "ParseNumberAsync", {}, { ::i2c::type_of<::Newtonsoft::Json::ReadType>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, readType, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextReader::ParseUndefinedAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ParseUndefinedAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<bool>* Newtonsoft::Json::JsonTextReader::ParsePropertyAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ParsePropertyAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextReader::ReadNumberIntoBufferAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ReadNumberIntoBufferAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextReader::ParseUnquotedPropertyAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ParseUnquotedPropertyAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<bool>* Newtonsoft::Json::JsonTextReader::ReadNullCharAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ReadNullCharAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextReader::HandleNullAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "HandleNullAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextReader::ReadFinishedAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ReadFinishedAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::System::Object*>* Newtonsoft::Json::JsonTextReader::ReadStringValueAsync(::Newtonsoft::Json::ReadType readType,
                                                                                                                     ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                                              { "ReadStringValueAsync", {}, { ::i2c::type_of<::Newtonsoft::Json::ReadType>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Object*>*>(this, ___internal_method, readType, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::System::Object*>* Newtonsoft::Json::JsonTextReader::ReadNumberValueAsync(::Newtonsoft::Json::ReadType readType,
                                                                                                                     ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                                              { "ReadNumberValueAsync", {}, { ::i2c::type_of<::Newtonsoft::Json::ReadType>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Object*>*>(this, ___internal_method, readType, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<bool>>* Newtonsoft::Json::JsonTextReader::ReadAsBooleanAsync(::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Nullable_1<bool>>*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<bool>>* Newtonsoft::Json::JsonTextReader::DoReadAsBooleanAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "DoReadAsBooleanAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Nullable_1<bool>>*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>* Newtonsoft::Json::JsonTextReader::ReadAsBytesAsync(::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>* Newtonsoft::Json::JsonTextReader::DoReadAsBytesAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "DoReadAsBytesAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextReader::ReadIntoWrappedTypeObjectAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                                                                                         { "ReadIntoWrappedTypeObjectAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<::System::DateTime>>* Newtonsoft::Json::JsonTextReader::ReadAsDateTimeAsync(::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Nullable_1<::System::DateTime>>*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<::System::DateTime>>* Newtonsoft::Json::JsonTextReader::DoReadAsDateTimeAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "DoReadAsDateTimeAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Nullable_1<::System::DateTime>>*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<::System::DateTimeOffset>>*
Newtonsoft::Json::JsonTextReader::ReadAsDateTimeOffsetAsync(::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Nullable_1<::System::DateTimeOffset>>*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<::System::DateTimeOffset>>*
Newtonsoft::Json::JsonTextReader::DoReadAsDateTimeOffsetAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "DoReadAsDateTimeOffsetAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Nullable_1<::System::DateTimeOffset>>*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<::System::Decimal>>* Newtonsoft::Json::JsonTextReader::ReadAsDecimalAsync(::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Nullable_1<::System::Decimal>>*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<::System::Decimal>>* Newtonsoft::Json::JsonTextReader::DoReadAsDecimalAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "DoReadAsDecimalAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Nullable_1<::System::Decimal>>*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<double_t>>* Newtonsoft::Json::JsonTextReader::ReadAsDoubleAsync(::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Nullable_1<double_t>>*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<double_t>>* Newtonsoft::Json::JsonTextReader::DoReadAsDoubleAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "DoReadAsDoubleAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Nullable_1<double_t>>*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>* Newtonsoft::Json::JsonTextReader::ReadAsInt32Async(::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>* Newtonsoft::Json::JsonTextReader::DoReadAsInt32Async(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "DoReadAsInt32Async", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* Newtonsoft::Json::JsonTextReader::ReadAsStringAsync(::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* Newtonsoft::Json::JsonTextReader::DoReadAsStringAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "DoReadAsStringAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method, cancellationToken);
}
inline void Newtonsoft::Json::JsonTextReader::_ctor(::System::IO::TextReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::TextReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
inline ::Newtonsoft::Json::JsonNameTable* Newtonsoft::Json::JsonTextReader::get_PropertyNameTable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "get_PropertyNameTable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::JsonNameTable*>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader::set_PropertyNameTable(::Newtonsoft::Json::JsonNameTable* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "set_PropertyNameTable", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonNameTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::IArrayPool_1<char16_t>* Newtonsoft::Json::JsonTextReader::get_ArrayPool() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "get_ArrayPool", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::IArrayPool_1<char16_t>*>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader::set_ArrayPool(::Newtonsoft::Json::IArrayPool_1<char16_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "set_ArrayPool", {}, { ::i2c::type_of<::Newtonsoft::Json::IArrayPool_1<char16_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextReader::EnsureBufferNotEmpty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "EnsureBufferNotEmpty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader::SetNewLine(bool hasNextChar) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "SetNewLine", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hasNextChar);
}
inline void Newtonsoft::Json::JsonTextReader::OnNewLine(int32_t pos) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "OnNewLine", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pos);
}
inline void Newtonsoft::Json::JsonTextReader::ParseString(char16_t quote, ::Newtonsoft::Json::ReadType readType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ParseString", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<::Newtonsoft::Json::ReadType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, quote, readType);
}
inline void Newtonsoft::Json::JsonTextReader::ParseReadString(char16_t quote, ::Newtonsoft::Json::ReadType readType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                                                                                         { "ParseReadString", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<::Newtonsoft::Json::ReadType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, quote, readType);
}
inline void Newtonsoft::Json::JsonTextReader::BlockCopyChars(::ArrayW<char16_t> src, int32_t srcOffset, ::ArrayW<char16_t> dst, int32_t dstOffset, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
          { "BlockCopyChars", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, src, srcOffset, dst, dstOffset, count);
}
inline void Newtonsoft::Json::JsonTextReader::ShiftBufferIfNeeded() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ShiftBufferIfNeeded", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Newtonsoft::Json::JsonTextReader::ReadData(bool append) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ReadData", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, append);
}
inline void Newtonsoft::Json::JsonTextReader::PrepareBufferForReadData(bool append, int32_t charsRequired) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "PrepareBufferForReadData", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, append, charsRequired);
}
inline int32_t Newtonsoft::Json::JsonTextReader::ReadData(bool append, int32_t charsRequired) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ReadData", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, append, charsRequired);
}
inline bool Newtonsoft::Json::JsonTextReader::EnsureChars(int32_t relativePosition, bool append) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "EnsureChars", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, relativePosition, append);
}
inline bool Newtonsoft::Json::JsonTextReader::ReadChars(int32_t relativePosition, bool append) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ReadChars", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, relativePosition, append);
}
inline bool Newtonsoft::Json::JsonTextReader::Read() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Nullable_1<int32_t> Newtonsoft::Json::JsonTextReader::ReadAsInt32() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int32_t>>(this, ___internal_method);
}
inline ::System::Nullable_1<::System::DateTime> Newtonsoft::Json::JsonTextReader::ReadAsDateTime() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::DateTime>>(this, ___internal_method);
}
inline ::StringW Newtonsoft::Json::JsonTextReader::ReadAsString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Newtonsoft::Json::JsonTextReader::ReadAsBytes() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::System::Object* Newtonsoft::Json::JsonTextReader::ReadStringValue(::Newtonsoft::Json::ReadType readType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ReadStringValue", {}, { ::i2c::type_of<::Newtonsoft::Json::ReadType>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, readType);
}
inline ::System::Object* Newtonsoft::Json::JsonTextReader::FinishReadQuotedStringValue(::Newtonsoft::Json::ReadType readType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "FinishReadQuotedStringValue", {}, { ::i2c::type_of<::Newtonsoft::Json::ReadType>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, readType);
}
inline ::Newtonsoft::Json::JsonReaderException* Newtonsoft::Json::JsonTextReader::CreateUnexpectedCharacterException(char16_t c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "CreateUnexpectedCharacterException", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::JsonReaderException*>(this, ___internal_method, c);
}
inline ::System::Nullable_1<bool> Newtonsoft::Json::JsonTextReader::ReadAsBoolean() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<bool>>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader::ProcessValueComma() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ProcessValueComma", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Newtonsoft::Json::JsonTextReader::ReadNumberValue(::Newtonsoft::Json::ReadType readType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ReadNumberValue", {}, { ::i2c::type_of<::Newtonsoft::Json::ReadType>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, readType);
}
inline ::System::Object* Newtonsoft::Json::JsonTextReader::FinishReadQuotedNumber(::Newtonsoft::Json::ReadType readType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "FinishReadQuotedNumber", {}, { ::i2c::type_of<::Newtonsoft::Json::ReadType>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, readType);
}
inline ::System::Nullable_1<::System::DateTimeOffset> Newtonsoft::Json::JsonTextReader::ReadAsDateTimeOffset() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::DateTimeOffset>>(this, ___internal_method);
}
inline ::System::Nullable_1<::System::Decimal> Newtonsoft::Json::JsonTextReader::ReadAsDecimal() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::Decimal>>(this, ___internal_method);
}
inline ::System::Nullable_1<double_t> Newtonsoft::Json::JsonTextReader::ReadAsDouble() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<double_t>>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader::HandleNull() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "HandleNull", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader::ReadFinished() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ReadFinished", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Newtonsoft::Json::JsonTextReader::ReadNullChar() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ReadNullChar", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader::EnsureBuffer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "EnsureBuffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader::ReadStringIntoBuffer(char16_t quote) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ReadStringIntoBuffer", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, quote);
}
inline void Newtonsoft::Json::JsonTextReader::FinishReadStringIntoBuffer(int32_t charPos, int32_t initialPosition, int32_t lastWritePosition) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                                                           { "FinishReadStringIntoBuffer", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, charPos, initialPosition, lastWritePosition);
}
inline void Newtonsoft::Json::JsonTextReader::WriteCharToBuffer(char16_t writeChar, int32_t lastWritePosition, int32_t writeToPosition) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "WriteCharToBuffer", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writeChar, lastWritePosition, writeToPosition);
}
inline char16_t Newtonsoft::Json::JsonTextReader::ConvertUnicode(bool enoughChars) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ConvertUnicode", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(this, ___internal_method, enoughChars);
}
inline char16_t Newtonsoft::Json::JsonTextReader::ParseUnicode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ParseUnicode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader::ReadNumberIntoBuffer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ReadNumberIntoBuffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Newtonsoft::Json::JsonTextReader::ReadNumberCharIntoBuffer(char16_t currentChar, int32_t charPos) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ReadNumberCharIntoBuffer", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, currentChar, charPos);
}
inline void Newtonsoft::Json::JsonTextReader::ClearRecentString() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ClearRecentString", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Newtonsoft::Json::JsonTextReader::ParsePostValue(bool ignoreComments) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ParsePostValue", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ignoreComments);
}
inline bool Newtonsoft::Json::JsonTextReader::ParseObject() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ParseObject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Newtonsoft::Json::JsonTextReader::ParseProperty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ParseProperty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Newtonsoft::Json::JsonTextReader::ValidIdentifierChar(char16_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ValidIdentifierChar", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextReader::ParseUnquotedProperty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ParseUnquotedProperty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Newtonsoft::Json::JsonTextReader::ReadUnquotedPropertyReportIfDone(char16_t currentChar, int32_t initialPosition) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ReadUnquotedPropertyReportIfDone", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, currentChar, initialPosition);
}
inline bool Newtonsoft::Json::JsonTextReader::ParseValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ParseValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader::ProcessLineFeed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ProcessLineFeed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader::ProcessCarriageReturn(bool append) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ProcessCarriageReturn", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, append);
}
inline void Newtonsoft::Json::JsonTextReader::EatWhitespace() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "EatWhitespace", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader::ParseConstructor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ParseConstructor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader::ParseNumber(::Newtonsoft::Json::ReadType readType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ParseNumber", {}, { ::i2c::type_of<::Newtonsoft::Json::ReadType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, readType);
}
inline void Newtonsoft::Json::JsonTextReader::ParseReadNumber(::Newtonsoft::Json::ReadType readType, char16_t firstChar, int32_t initialPosition) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                                                           { "ParseReadNumber", {}, { ::i2c::type_of<::Newtonsoft::Json::ReadType>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, readType, firstChar, initialPosition);
}
inline ::Newtonsoft::Json::JsonReaderException* Newtonsoft::Json::JsonTextReader::ThrowReaderError(::StringW message, /* [Nullable(2)] */ ::System::Exception* ex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ThrowReaderError", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::JsonReaderException*>(this, ___internal_method, message, ex);
}
inline ::System::Object* Newtonsoft::Json::JsonTextReader::BigIntegerParse(::StringW number, ::System::Globalization::CultureInfo* culture) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                                                           { "BigIntegerParse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::CultureInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, number, culture);
}
inline void Newtonsoft::Json::JsonTextReader::ParseComment(bool setToken) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ParseComment", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, setToken);
}
inline void Newtonsoft::Json::JsonTextReader::EndComment(bool setToken, int32_t initialPosition, int32_t endPosition) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                                                                                         { "EndComment", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, setToken, initialPosition, endPosition);
}
inline bool Newtonsoft::Json::JsonTextReader::MatchValue(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "MatchValue", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool Newtonsoft::Json::JsonTextReader::MatchValue(bool enoughChars, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "MatchValue", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, enoughChars, value);
}
inline bool Newtonsoft::Json::JsonTextReader::MatchValueWithTrailingSeparator(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "MatchValueWithTrailingSeparator", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool Newtonsoft::Json::JsonTextReader::IsSeparator(char16_t c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "IsSeparator", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, c);
}
inline void Newtonsoft::Json::JsonTextReader::ParseTrue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ParseTrue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader::ParseNull() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ParseNull", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader::ParseUndefined() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ParseUndefined", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader::ParseFalse() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ParseFalse", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Newtonsoft::Json::JsonTextReader::ParseNumberNegativeInfinity(::Newtonsoft::Json::ReadType readType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ParseNumberNegativeInfinity", {}, { ::i2c::type_of<::Newtonsoft::Json::ReadType>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, readType);
}
inline ::System::Object* Newtonsoft::Json::JsonTextReader::ParseNumberNegativeInfinity(::Newtonsoft::Json::ReadType readType, bool matched) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ParseNumberNegativeInfinity", {}, { ::i2c::type_of<::Newtonsoft::Json::ReadType>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, readType, matched);
}
inline ::System::Object* Newtonsoft::Json::JsonTextReader::ParseNumberPositiveInfinity(::Newtonsoft::Json::ReadType readType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ParseNumberPositiveInfinity", {}, { ::i2c::type_of<::Newtonsoft::Json::ReadType>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, readType);
}
inline ::System::Object* Newtonsoft::Json::JsonTextReader::ParseNumberPositiveInfinity(::Newtonsoft::Json::ReadType readType, bool matched) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ParseNumberPositiveInfinity", {}, { ::i2c::type_of<::Newtonsoft::Json::ReadType>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, readType, matched);
}
inline ::System::Object* Newtonsoft::Json::JsonTextReader::ParseNumberNaN(::Newtonsoft::Json::ReadType readType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ParseNumberNaN", {}, { ::i2c::type_of<::Newtonsoft::Json::ReadType>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, readType);
}
inline ::System::Object* Newtonsoft::Json::JsonTextReader::ParseNumberNaN(::Newtonsoft::Json::ReadType readType, bool matched) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "ParseNumberNaN", {}, { ::i2c::type_of<::Newtonsoft::Json::ReadType>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, readType, matched);
}
inline void Newtonsoft::Json::JsonTextReader::Close() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Newtonsoft::Json::JsonTextReader::HasLineInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "HasLineInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Newtonsoft::Json::JsonTextReader::get_LineNumber() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "get_LineNumber", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Newtonsoft::Json::JsonTextReader::get_LinePosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), { "get_LinePosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Newtonsoft::Json::JsonTextReader* Newtonsoft::Json::JsonTextReader::New_ctor(::System::IO::TextReader* reader) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::JsonTextReader*>(reader));
}
/// @brief Convert operator to "::Newtonsoft::Json::IJsonLineInfo"
constexpr Newtonsoft::Json::JsonTextReader::operator ::Newtonsoft::Json::IJsonLineInfo*() noexcept {
  return static_cast<::Newtonsoft::Json::IJsonLineInfo*>(static_cast<void*>(this));
}
/// @brief Convert to "::Newtonsoft::Json::IJsonLineInfo"
constexpr ::Newtonsoft::Json::IJsonLineInfo* Newtonsoft::Json::JsonTextReader::i___Newtonsoft__Json__IJsonLineInfo() noexcept {
  return static_cast<::Newtonsoft::Json::IJsonLineInfo*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextReader::JsonTextReader() {}
