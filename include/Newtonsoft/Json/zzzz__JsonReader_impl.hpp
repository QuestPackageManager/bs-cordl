#pragma once
// IWYU pragma private; include "Newtonsoft\Json\JsonReader.hpp"
#include "Newtonsoft/Json/zzzz__DateParseHandling_impl.hpp"
#include "Newtonsoft/Json/zzzz__DateTimeZoneHandling_impl.hpp"
#include "Newtonsoft/Json/zzzz__FloatParseHandling_impl.hpp"
#include "Newtonsoft/Json/zzzz__JsonPosition_impl.hpp"
#include "Newtonsoft/Json/zzzz__JsonToken_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonContract_def.hpp"
#include "Newtonsoft/Json/zzzz__DateParseHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__DateTimeZoneHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__FloatParseHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonContainerType_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonPosition_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReaderException_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonToken_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::JsonReader_State::JsonReader_State(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonReader_State::JsonReader_State() {}
constexpr ::Newtonsoft::Json::JsonReader_State Newtonsoft::Json::JsonReader_State::Start{ static_cast<int32_t>(0x0) };
constexpr ::Newtonsoft::Json::JsonReader_State Newtonsoft::Json::JsonReader_State::Complete{ static_cast<int32_t>(0x1) };
constexpr ::Newtonsoft::Json::JsonReader_State Newtonsoft::Json::JsonReader_State::Property{ static_cast<int32_t>(0x2) };
constexpr ::Newtonsoft::Json::JsonReader_State Newtonsoft::Json::JsonReader_State::ObjectStart{ static_cast<int32_t>(0x3) };
constexpr ::Newtonsoft::Json::JsonReader_State Newtonsoft::Json::JsonReader_State::Object{ static_cast<int32_t>(0x4) };
constexpr ::Newtonsoft::Json::JsonReader_State Newtonsoft::Json::JsonReader_State::ArrayStart{ static_cast<int32_t>(0x5) };
constexpr ::Newtonsoft::Json::JsonReader_State Newtonsoft::Json::JsonReader_State::Array{ static_cast<int32_t>(0x6) };
constexpr ::Newtonsoft::Json::JsonReader_State Newtonsoft::Json::JsonReader_State::Closed{ static_cast<int32_t>(0x7) };
constexpr ::Newtonsoft::Json::JsonReader_State Newtonsoft::Json::JsonReader_State::PostValue{ static_cast<int32_t>(0x8) };
constexpr ::Newtonsoft::Json::JsonReader_State Newtonsoft::Json::JsonReader_State::ConstructorStart{ static_cast<int32_t>(0x9) };
constexpr ::Newtonsoft::Json::JsonReader_State Newtonsoft::Json::JsonReader_State::Constructor{ static_cast<int32_t>(0xa) };
constexpr ::Newtonsoft::Json::JsonReader_State Newtonsoft::Json::JsonReader_State::Error{ static_cast<int32_t>(0xb) };
constexpr ::Newtonsoft::Json::JsonReader_State Newtonsoft::Json::JsonReader_State::Finished{ static_cast<int32_t>(0xc) };
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader__MoveToContentFromNonContentAsync_d__14.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonReader__MoveToContentFromNonContentAsync_d__14::*)()>(
    &::Newtonsoft::Json::JsonReader__MoveToContentFromNonContentAsync_d__14::MoveNext)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x5cdd248;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader__MoveToContentFromNonContentAsync_d__14>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader__MoveToContentFromNonContentAsync_d__14.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonReader__MoveToContentFromNonContentAsync_d__14::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Newtonsoft::Json::JsonReader__MoveToContentFromNonContentAsync_d__14::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5cdd530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader__MoveToContentFromNonContentAsync_d__14>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonReader__MoveToContentFromNonContentAsync_d__14::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader__MoveToContentFromNonContentAsync_d__14>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Newtonsoft::Json::JsonReader__MoveToContentFromNonContentAsync_d__14::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader__MoveToContentFromNonContentAsync_d__14>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonReader__MoveToContentFromNonContentAsync_d__14::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Newtonsoft::Json::JsonReader__MoveToContentFromNonContentAsync_d__14::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonReader*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::JsonReader__MoveToContentFromNonContentAsync_d__14::JsonReader__MoveToContentFromNonContentAsync_d__14(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::Newtonsoft::Json::JsonReader* __4__this,
    ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonReader__MoveToContentFromNonContentAsync_d__14::JsonReader__MoveToContentFromNonContentAsync_d__14() {}
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader__ReadAndMoveToContentAsync_d__12.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonReader__ReadAndMoveToContentAsync_d__12::*)()>(
    &::Newtonsoft::Json::JsonReader__ReadAndMoveToContentAsync_d__12::MoveNext)> {
  constexpr static std::size_t size = 0x394;
  constexpr static std::size_t addrs = 0x5cdd5b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader__ReadAndMoveToContentAsync_d__12>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader__ReadAndMoveToContentAsync_d__12.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonReader__ReadAndMoveToContentAsync_d__12::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Newtonsoft::Json::JsonReader__ReadAndMoveToContentAsync_d__12::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5cdd944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader__ReadAndMoveToContentAsync_d__12>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonReader__ReadAndMoveToContentAsync_d__12::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader__ReadAndMoveToContentAsync_d__12>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Newtonsoft::Json::JsonReader__ReadAndMoveToContentAsync_d__12::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader__ReadAndMoveToContentAsync_d__12>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonReader__ReadAndMoveToContentAsync_d__12::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Newtonsoft::Json::JsonReader__ReadAndMoveToContentAsync_d__12::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonReader*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::JsonReader__ReadAndMoveToContentAsync_d__12::JsonReader__ReadAndMoveToContentAsync_d__12(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::Newtonsoft::Json::JsonReader* __4__this,
    ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonReader__ReadAndMoveToContentAsync_d__12::JsonReader__ReadAndMoveToContentAsync_d__12() {}
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader__ReadArrayIntoByteArrayAsync_d__5.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonReader__ReadArrayIntoByteArrayAsync_d__5::*)()>(
    &::Newtonsoft::Json::JsonReader__ReadArrayIntoByteArrayAsync_d__5::MoveNext)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x5cdd9c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader__ReadArrayIntoByteArrayAsync_d__5>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader__ReadArrayIntoByteArrayAsync_d__5.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonReader__ReadArrayIntoByteArrayAsync_d__5::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Newtonsoft::Json::JsonReader__ReadArrayIntoByteArrayAsync_d__5::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5cddd64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader__ReadArrayIntoByteArrayAsync_d__5>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonReader__ReadArrayIntoByteArrayAsync_d__5::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader__ReadArrayIntoByteArrayAsync_d__5>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Newtonsoft::Json::JsonReader__ReadArrayIntoByteArrayAsync_d__5::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader__ReadArrayIntoByteArrayAsync_d__5>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonReader__ReadArrayIntoByteArrayAsync_d__5::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Newtonsoft::Json::JsonReader__ReadArrayIntoByteArrayAsync_d__5::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonReader*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_buffer_5__2",
// ty: "::System::Collections::Generic::List_1<uint8_t>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::JsonReader__ReadArrayIntoByteArrayAsync_d__5::JsonReader__ReadArrayIntoByteArrayAsync_d__5(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t>> __t__builder, ::Newtonsoft::Json::JsonReader* __4__this,
    ::System::Threading::CancellationToken cancellationToken, ::System::Collections::Generic::List_1<uint8_t>* _buffer_5__2,
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->_buffer_5__2 = _buffer_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonReader__ReadArrayIntoByteArrayAsync_d__5::JsonReader__ReadArrayIntoByteArrayAsync_d__5() {}
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader__ReaderReadAndAssertAsync_d__2.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonReader__ReaderReadAndAssertAsync_d__2::*)()>(
    &::Newtonsoft::Json::JsonReader__ReaderReadAndAssertAsync_d__2::MoveNext)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x5cddde4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader__ReaderReadAndAssertAsync_d__2>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader__ReaderReadAndAssertAsync_d__2.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonReader__ReaderReadAndAssertAsync_d__2::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Newtonsoft::Json::JsonReader__ReaderReadAndAssertAsync_d__2::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5cde090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader__ReaderReadAndAssertAsync_d__2>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonReader__ReaderReadAndAssertAsync_d__2::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader__ReaderReadAndAssertAsync_d__2>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Newtonsoft::Json::JsonReader__ReaderReadAndAssertAsync_d__2::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader__ReaderReadAndAssertAsync_d__2>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonReader__ReaderReadAndAssertAsync_d__2::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Newtonsoft::Json::JsonReader__ReaderReadAndAssertAsync_d__2::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonReader*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::JsonReader__ReaderReadAndAssertAsync_d__2::JsonReader__ReaderReadAndAssertAsync_d__2(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Newtonsoft::Json::JsonReader* __4__this, ::System::Threading::CancellationToken cancellationToken,
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonReader__ReaderReadAndAssertAsync_d__2::JsonReader__ReaderReadAndAssertAsync_d__2() {}
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader__SkipAsync_d__1.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonReader__SkipAsync_d__1::*)()>(&::Newtonsoft::Json::JsonReader__SkipAsync_d__1::MoveNext)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0x5cde0fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader__SkipAsync_d__1>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader__SkipAsync_d__1.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonReader__SkipAsync_d__1::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Newtonsoft::Json::JsonReader__SkipAsync_d__1::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5cde508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader__SkipAsync_d__1>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonReader__SkipAsync_d__1::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader__SkipAsync_d__1>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Newtonsoft::Json::JsonReader__SkipAsync_d__1::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader__SkipAsync_d__1>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonReader__SkipAsync_d__1::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Newtonsoft::Json::JsonReader__SkipAsync_d__1::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonReader*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_depth_5__2", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::JsonReader__SkipAsync_d__1::JsonReader__SkipAsync_d__1(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                                     ::Newtonsoft::Json::JsonReader* __4__this, ::System::Threading::CancellationToken cancellationToken,
                                                                                     ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__1,
                                                                                     int32_t _depth_5__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
  this->_depth_5__2 = _depth_5__2;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonReader__SkipAsync_d__1::JsonReader__SkipAsync_d__1() {}
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.ReadAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::Newtonsoft::Json::JsonReader::*)(::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonReader::ReadAsync)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5cd8498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.SkipAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonReader::*)(::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonReader::SkipAsync)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5cd8564;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "SkipAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.ReaderReadAndAssertAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonReader::*)(::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonReader::ReaderReadAndAssertAsync)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5cd8628;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "ReaderReadAndAssertAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.ReadAsBooleanAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Nullable_1<bool>>* (::Newtonsoft::Json::JsonReader::*)(::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonReader::ReadAsBooleanAsync)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5cd86e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.ReadAsBytesAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>* (::Newtonsoft::Json::JsonReader::*)(::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonReader::ReadAsBytesAsync)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5cd87e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.ReadArrayIntoByteArrayAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>* (::Newtonsoft::Json::JsonReader::*)(::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonReader::ReadArrayIntoByteArrayAsync)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5cd88e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "ReadArrayIntoByteArrayAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.ReadAsDateTimeAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Nullable_1<::System::DateTime>>* (
    ::Newtonsoft::Json::JsonReader::*)(::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonReader::ReadAsDateTimeAsync)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5cd89d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.ReadAsDateTimeOffsetAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Nullable_1<::System::DateTimeOffset>>* (
    ::Newtonsoft::Json::JsonReader::*)(::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonReader::ReadAsDateTimeOffsetAsync)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5cd8ad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.ReadAsDecimalAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Nullable_1<::System::Decimal>>* (
    ::Newtonsoft::Json::JsonReader::*)(::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonReader::ReadAsDecimalAsync)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5cd8bd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.ReadAsDoubleAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Nullable_1<double_t>>* (::Newtonsoft::Json::JsonReader::*)(::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonReader::ReadAsDoubleAsync)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5cd8cf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.ReadAsInt32Async
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>* (::Newtonsoft::Json::JsonReader::*)(::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonReader::ReadAsInt32Async)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5cd8d8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.ReadAsStringAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::Newtonsoft::Json::JsonReader::*)(::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonReader::ReadAsStringAsync)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5cd8e88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.ReadAndMoveToContentAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::Newtonsoft::Json::JsonReader::*)(::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonReader::ReadAndMoveToContentAsync)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5cd8f84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "ReadAndMoveToContentAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.MoveToContentAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::Newtonsoft::Json::JsonReader::*)(::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonReader::MoveToContentAsync)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5cd9070;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "MoveToContentAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.MoveToContentFromNonContentAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::Newtonsoft::Json::JsonReader::*)(::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonReader::MoveToContentFromNonContentAsync)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5cd9114;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(),
                                                                                           { "MoveToContentFromNonContentAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.get_CurrentState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::JsonReader_State (::Newtonsoft::Json::JsonReader::*)()>(&::Newtonsoft::Json::JsonReader::get_CurrentState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cd9200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "get_CurrentState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.get_CloseInput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::JsonReader::*)()>(&::Newtonsoft::Json::JsonReader::get_CloseInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cd9208;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "get_CloseInput", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.set_CloseInput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonReader::*)(bool)>(&::Newtonsoft::Json::JsonReader::set_CloseInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cd9210;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "set_CloseInput", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.get_SupportMultipleContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::JsonReader::*)()>(&::Newtonsoft::Json::JsonReader::get_SupportMultipleContent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cd9218;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "get_SupportMultipleContent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.set_SupportMultipleContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonReader::*)(bool)>(&::Newtonsoft::Json::JsonReader::set_SupportMultipleContent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cd9220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "set_SupportMultipleContent", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.get_QuoteChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::Newtonsoft::Json::JsonReader::*)()>(&::Newtonsoft::Json::JsonReader::get_QuoteChar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cd9228;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.set_QuoteChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonReader::*)(char16_t)>(&::Newtonsoft::Json::JsonReader::set_QuoteChar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cd9230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.get_DateTimeZoneHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::DateTimeZoneHandling (::Newtonsoft::Json::JsonReader::*)()>(&::Newtonsoft::Json::JsonReader::get_DateTimeZoneHandling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cd9238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "get_DateTimeZoneHandling", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.set_DateTimeZoneHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonReader::*)(::Newtonsoft::Json::DateTimeZoneHandling)>(&::Newtonsoft::Json::JsonReader::set_DateTimeZoneHandling)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5cd9240;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "set_DateTimeZoneHandling", {}, { ::i2c::type_of<::Newtonsoft::Json::DateTimeZoneHandling>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.get_DateParseHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::DateParseHandling (::Newtonsoft::Json::JsonReader::*)()>(&::Newtonsoft::Json::JsonReader::get_DateParseHandling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cd929c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "get_DateParseHandling", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.set_DateParseHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonReader::*)(::Newtonsoft::Json::DateParseHandling)>(&::Newtonsoft::Json::JsonReader::set_DateParseHandling)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5cd92a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "set_DateParseHandling", {}, { ::i2c::type_of<::Newtonsoft::Json::DateParseHandling>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.get_FloatParseHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::FloatParseHandling (::Newtonsoft::Json::JsonReader::*)()>(&::Newtonsoft::Json::JsonReader::get_FloatParseHandling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cd9300;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "get_FloatParseHandling", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.set_FloatParseHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonReader::*)(::Newtonsoft::Json::FloatParseHandling)>(&::Newtonsoft::Json::JsonReader::set_FloatParseHandling)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5cd9308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "set_FloatParseHandling", {}, { ::i2c::type_of<::Newtonsoft::Json::FloatParseHandling>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.get_DateFormatString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::JsonReader::*)()>(&::Newtonsoft::Json::JsonReader::get_DateFormatString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cd9364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "get_DateFormatString", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.set_DateFormatString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonReader::*)(::StringW)>(&::Newtonsoft::Json::JsonReader::set_DateFormatString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cd936c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "set_DateFormatString", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.get_MaxDepth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<int32_t> (::Newtonsoft::Json::JsonReader::*)()>(&::Newtonsoft::Json::JsonReader::get_MaxDepth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cd9374;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "get_MaxDepth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.set_MaxDepth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonReader::*)(::System::Nullable_1<int32_t>)>(&::Newtonsoft::Json::JsonReader::set_MaxDepth)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5cd937c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "set_MaxDepth", {}, { ::i2c::type_of<::System::Nullable_1<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.get_TokenType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::JsonToken (::Newtonsoft::Json::JsonReader::*)()>(&::Newtonsoft::Json::JsonReader::get_TokenType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cd9450;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Newtonsoft::Json::JsonReader::*)()>(&::Newtonsoft::Json::JsonReader::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cd9458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.get_ValueType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::Newtonsoft::Json::JsonReader::*)()>(&::Newtonsoft::Json::JsonReader::get_ValueType)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5cd9460;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.get_Depth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Newtonsoft::Json::JsonReader::*)()>(&::Newtonsoft::Json::JsonReader::get_Depth)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5cd947c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.get_Path
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::JsonReader::*)()>(&::Newtonsoft::Json::JsonReader::get_Path)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5cd9500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.get_Culture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::CultureInfo* (::Newtonsoft::Json::JsonReader::*)()>(&::Newtonsoft::Json::JsonReader::get_Culture)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5cd963c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "get_Culture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.set_Culture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonReader::*)(::System::Globalization::CultureInfo*)>(&::Newtonsoft::Json::JsonReader::set_Culture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cd96a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "set_Culture", {}, { ::i2c::type_of<::System::Globalization::CultureInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.GetPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::JsonPosition (::Newtonsoft::Json::JsonReader::*)(int32_t)>(&::Newtonsoft::Json::JsonReader::GetPosition)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5cd96b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "GetPosition", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonReader::*)()>(&::Newtonsoft::Json::JsonReader::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5cd9760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.Push
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonReader::*)(::Newtonsoft::Json::JsonContainerType)>(&::Newtonsoft::Json::JsonReader::Push)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x5cd97cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "Push", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonContainerType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.Pop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::JsonContainerType (::Newtonsoft::Json::JsonReader::*)()>(&::Newtonsoft::Json::JsonReader::Pop)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5cd9a94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "Pop", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.Peek
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::JsonContainerType (::Newtonsoft::Json::JsonReader::*)()>(&::Newtonsoft::Json::JsonReader::Peek)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cd9bd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "Peek", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::JsonReader::*)()>(&::Newtonsoft::Json::JsonReader::Read)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.ReadAsInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<int32_t> (::Newtonsoft::Json::JsonReader::*)()>(&::Newtonsoft::Json::JsonReader::ReadAsInt32)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0x5cd9bd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.ReadInt32String
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<int32_t> (::Newtonsoft::Json::JsonReader::*)(::StringW)>(&::Newtonsoft::Json::JsonReader::ReadInt32String)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5cda180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "ReadInt32String", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.ReadAsString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::JsonReader::*)()>(&::Newtonsoft::Json::JsonReader::ReadAsString)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x5cda308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.ReadAsBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Newtonsoft::Json::JsonReader::*)()>(&::Newtonsoft::Json::JsonReader::ReadAsBytes)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0x5cda5d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.ReadArrayIntoByteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Newtonsoft::Json::JsonReader::*)()>(&::Newtonsoft::Json::JsonReader::ReadArrayIntoByteArray)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5cdac10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "ReadArrayIntoByteArray", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.ReadArrayElementIntoByteArrayReportDone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::JsonReader::*)(::System::Collections::Generic::List_1<uint8_t>*)>(
    &::Newtonsoft::Json::JsonReader::ReadArrayElementIntoByteArrayReportDone)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x5cdad14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(),
                                                             { "ReadArrayElementIntoByteArrayReportDone", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<uint8_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.ReadAsDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<double_t> (::Newtonsoft::Json::JsonReader::*)()>(&::Newtonsoft::Json::JsonReader::ReadAsDouble)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x5cdaf34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.ReadDoubleString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<double_t> (::Newtonsoft::Json::JsonReader::*)(::StringW)>(&::Newtonsoft::Json::JsonReader::ReadDoubleString)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5cdb228;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "ReadDoubleString", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.ReadAsBoolean
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<bool> (::Newtonsoft::Json::JsonReader::*)()>(&::Newtonsoft::Json::JsonReader::ReadAsBoolean)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x5cdb3b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.ReadBooleanString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<bool> (::Newtonsoft::Json::JsonReader::*)(::StringW)>(&::Newtonsoft::Json::JsonReader::ReadBooleanString)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5cdb6e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "ReadBooleanString", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.ReadAsDecimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::System::Decimal> (::Newtonsoft::Json::JsonReader::*)()>(&::Newtonsoft::Json::JsonReader::ReadAsDecimal)> {
  constexpr static std::size_t size = 0x464;
  constexpr static std::size_t addrs = 0x5cdb870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.ReadDecimalString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::System::Decimal> (::Newtonsoft::Json::JsonReader::*)(::StringW)>(&::Newtonsoft::Json::JsonReader::ReadDecimalString)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x5cdbcd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "ReadDecimalString", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.ReadAsDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::System::DateTime> (::Newtonsoft::Json::JsonReader::*)()>(&::Newtonsoft::Json::JsonReader::ReadAsDateTime)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x5cdbf4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.ReadDateTimeString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::System::DateTime> (::Newtonsoft::Json::JsonReader::*)(::StringW)>(&::Newtonsoft::Json::JsonReader::ReadDateTimeString)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x5cdc20c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "ReadDateTimeString", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.ReadAsDateTimeOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::System::DateTimeOffset> (::Newtonsoft::Json::JsonReader::*)()>(&::Newtonsoft::Json::JsonReader::ReadAsDateTimeOffset)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x5cdc46c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.ReadDateTimeOffsetString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::System::DateTimeOffset> (::Newtonsoft::Json::JsonReader::*)(::StringW)>(
    &::Newtonsoft::Json::JsonReader::ReadDateTimeOffsetString)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x5cdc70c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "ReadDateTimeOffsetString", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.ReaderReadAndAssert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonReader::*)()>(&::Newtonsoft::Json::JsonReader::ReaderReadAndAssert)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5cdabc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "ReaderReadAndAssert", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.CreateUnexpectedEndException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::JsonReaderException* (::Newtonsoft::Json::JsonReader::*)()>(&::Newtonsoft::Json::JsonReader::CreateUnexpectedEndException)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5cdc948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "CreateUnexpectedEndException", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.ReadIntoWrappedTypeObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonReader::*)()>(&::Newtonsoft::Json::JsonReader::ReadIntoWrappedTypeObject)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x5cda9e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "ReadIntoWrappedTypeObject", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.Skip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonReader::*)()>(&::Newtonsoft::Json::JsonReader::Skip)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5cdc998;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "Skip", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.SetToken
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonReader::*)(::Newtonsoft::Json::JsonToken)>(&::Newtonsoft::Json::JsonReader::SetToken)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cdad08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "SetToken", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.SetToken
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonReader::*)(::Newtonsoft::Json::JsonToken, ::System::Object*)>(&::Newtonsoft::Json::JsonReader::SetToken)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cdca48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "SetToken", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonToken>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.SetToken
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonReader::*)(::Newtonsoft::Json::JsonToken, ::System::Object*, bool)>(&::Newtonsoft::Json::JsonReader::SetToken)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5cda064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(),
                                                             { "SetToken", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonToken>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.SetPostValueState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonReader::*)(bool)>(&::Newtonsoft::Json::JsonReader::SetPostValueState)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5cdcb4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "SetPostValueState", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.UpdateScopeWithFinishedValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonReader::*)()>(&::Newtonsoft::Json::JsonReader::UpdateScopeWithFinishedValue)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5cd9a74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "UpdateScopeWithFinishedValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.ValidateEnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonReader::*)(::Newtonsoft::Json::JsonToken)>(&::Newtonsoft::Json::JsonReader::ValidateEnd)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5cdca50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "ValidateEnd", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.SetStateBasedOnCurrent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonReader::*)()>(&::Newtonsoft::Json::JsonReader::SetStateBasedOnCurrent)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5cdcc54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "SetStateBasedOnCurrent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.SetFinished
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonReader::*)()>(&::Newtonsoft::Json::JsonReader::SetFinished)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5cdcb88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "SetFinished", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.GetTypeForCloseToken
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::JsonContainerType (::Newtonsoft::Json::JsonReader::*)(::Newtonsoft::Json::JsonToken)>(
    &::Newtonsoft::Json::JsonReader::GetTypeForCloseToken)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5cdcbac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "GetTypeForCloseToken", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonReader::*)()>(&::Newtonsoft::Json::JsonReader::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5cdcd48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonReader::*)(bool)>(&::Newtonsoft::Json::JsonReader::Dispose)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5cdcdbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonReader::*)()>(&::Newtonsoft::Json::JsonReader::Close)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5cdcde0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.ReadAndAssert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonReader::*)()>(&::Newtonsoft::Json::JsonReader::ReadAndAssert)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5cdcdf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "ReadAndAssert", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.ReadForTypeAndAssert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonReader::*)(::Newtonsoft::Json::Serialization::JsonContract*, bool)>(
    &::Newtonsoft::Json::JsonReader::ReadForTypeAndAssert)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5cdce4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(),
                                                             { "ReadForTypeAndAssert", {}, { ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContract*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.ReadForType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::JsonReader::*)(::Newtonsoft::Json::Serialization::JsonContract*, bool)>(
    &::Newtonsoft::Json::JsonReader::ReadForType)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x5cdce98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(),
                                                             { "ReadForType", {}, { ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContract*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.ReadAndMoveToContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::JsonReader::*)()>(&::Newtonsoft::Json::JsonReader::ReadAndMoveToContent)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5cdd1c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "ReadAndMoveToContent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.MoveToContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::JsonReader::*)()>(&::Newtonsoft::Json::JsonReader::MoveToContent)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5cdd1f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "MoveToContent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.GetContentToken
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::JsonToken (::Newtonsoft::Json::JsonReader::*)()>(&::Newtonsoft::Json::JsonReader::GetContentToken)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5cd9f84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "GetContentToken", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Newtonsoft::Json::JsonToken& Newtonsoft::Json::JsonReader::__cordl_internal_get__tokenType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tokenType;
}
constexpr ::Newtonsoft::Json::JsonToken const& Newtonsoft::Json::JsonReader::__cordl_internal_get__tokenType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tokenType;
}
constexpr void Newtonsoft::Json::JsonReader::__cordl_internal_set__tokenType(::Newtonsoft::Json::JsonToken value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tokenType = value;
}
constexpr ::System::Object*& Newtonsoft::Json::JsonReader::__cordl_internal_get__value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
constexpr ::System::Object* const& Newtonsoft::Json::JsonReader::__cordl_internal_get__value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
constexpr void Newtonsoft::Json::JsonReader::__cordl_internal_set__value(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____value = value;
}
constexpr char16_t& Newtonsoft::Json::JsonReader::__cordl_internal_get__quoteChar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____quoteChar;
}
constexpr char16_t const& Newtonsoft::Json::JsonReader::__cordl_internal_get__quoteChar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____quoteChar;
}
constexpr void Newtonsoft::Json::JsonReader::__cordl_internal_set__quoteChar(char16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____quoteChar = value;
}
constexpr ::Newtonsoft::Json::JsonReader_State& Newtonsoft::Json::JsonReader::__cordl_internal_get__currentState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentState;
}
constexpr ::Newtonsoft::Json::JsonReader_State const& Newtonsoft::Json::JsonReader::__cordl_internal_get__currentState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentState;
}
constexpr void Newtonsoft::Json::JsonReader::__cordl_internal_set__currentState(::Newtonsoft::Json::JsonReader_State value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentState = value;
}
constexpr ::Newtonsoft::Json::JsonPosition& Newtonsoft::Json::JsonReader::__cordl_internal_get__currentPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentPosition;
}
constexpr ::Newtonsoft::Json::JsonPosition const& Newtonsoft::Json::JsonReader::__cordl_internal_get__currentPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentPosition;
}
constexpr void Newtonsoft::Json::JsonReader::__cordl_internal_set__currentPosition(::Newtonsoft::Json::JsonPosition value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentPosition = value;
}
constexpr ::System::Globalization::CultureInfo*& Newtonsoft::Json::JsonReader::__cordl_internal_get__culture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____culture;
}
constexpr ::System::Globalization::CultureInfo* const& Newtonsoft::Json::JsonReader::__cordl_internal_get__culture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____culture;
}
constexpr void Newtonsoft::Json::JsonReader::__cordl_internal_set__culture(::System::Globalization::CultureInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____culture = value;
}
constexpr ::Newtonsoft::Json::DateTimeZoneHandling& Newtonsoft::Json::JsonReader::__cordl_internal_get__dateTimeZoneHandling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dateTimeZoneHandling;
}
constexpr ::Newtonsoft::Json::DateTimeZoneHandling const& Newtonsoft::Json::JsonReader::__cordl_internal_get__dateTimeZoneHandling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dateTimeZoneHandling;
}
constexpr void Newtonsoft::Json::JsonReader::__cordl_internal_set__dateTimeZoneHandling(::Newtonsoft::Json::DateTimeZoneHandling value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dateTimeZoneHandling = value;
}
constexpr ::System::Nullable_1<int32_t>& Newtonsoft::Json::JsonReader::__cordl_internal_get__maxDepth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxDepth;
}
constexpr ::System::Nullable_1<int32_t> const& Newtonsoft::Json::JsonReader::__cordl_internal_get__maxDepth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxDepth;
}
constexpr void Newtonsoft::Json::JsonReader::__cordl_internal_set__maxDepth(::System::Nullable_1<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxDepth = value;
}
constexpr bool& Newtonsoft::Json::JsonReader::__cordl_internal_get__hasExceededMaxDepth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasExceededMaxDepth;
}
constexpr bool const& Newtonsoft::Json::JsonReader::__cordl_internal_get__hasExceededMaxDepth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasExceededMaxDepth;
}
constexpr void Newtonsoft::Json::JsonReader::__cordl_internal_set__hasExceededMaxDepth(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasExceededMaxDepth = value;
}
constexpr ::Newtonsoft::Json::DateParseHandling& Newtonsoft::Json::JsonReader::__cordl_internal_get__dateParseHandling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dateParseHandling;
}
constexpr ::Newtonsoft::Json::DateParseHandling const& Newtonsoft::Json::JsonReader::__cordl_internal_get__dateParseHandling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dateParseHandling;
}
constexpr void Newtonsoft::Json::JsonReader::__cordl_internal_set__dateParseHandling(::Newtonsoft::Json::DateParseHandling value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dateParseHandling = value;
}
constexpr ::Newtonsoft::Json::FloatParseHandling& Newtonsoft::Json::JsonReader::__cordl_internal_get__floatParseHandling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floatParseHandling;
}
constexpr ::Newtonsoft::Json::FloatParseHandling const& Newtonsoft::Json::JsonReader::__cordl_internal_get__floatParseHandling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floatParseHandling;
}
constexpr void Newtonsoft::Json::JsonReader::__cordl_internal_set__floatParseHandling(::Newtonsoft::Json::FloatParseHandling value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____floatParseHandling = value;
}
constexpr ::StringW& Newtonsoft::Json::JsonReader::__cordl_internal_get__dateFormatString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dateFormatString;
}
constexpr ::StringW const& Newtonsoft::Json::JsonReader::__cordl_internal_get__dateFormatString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dateFormatString;
}
constexpr void Newtonsoft::Json::JsonReader::__cordl_internal_set__dateFormatString(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dateFormatString = value;
}
constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::JsonPosition>*& Newtonsoft::Json::JsonReader::__cordl_internal_get__stack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stack;
}
constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::JsonPosition>* const& Newtonsoft::Json::JsonReader::__cordl_internal_get__stack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stack;
}
constexpr void Newtonsoft::Json::JsonReader::__cordl_internal_set__stack(::System::Collections::Generic::List_1<::Newtonsoft::Json::JsonPosition>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____stack = value;
}
constexpr bool& Newtonsoft::Json::JsonReader::__cordl_internal_get__CloseInput_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CloseInput_k__BackingField;
}
constexpr bool const& Newtonsoft::Json::JsonReader::__cordl_internal_get__CloseInput_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CloseInput_k__BackingField;
}
constexpr void Newtonsoft::Json::JsonReader::__cordl_internal_set__CloseInput_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____CloseInput_k__BackingField = value;
}
constexpr bool& Newtonsoft::Json::JsonReader::__cordl_internal_get__SupportMultipleContent_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SupportMultipleContent_k__BackingField;
}
constexpr bool const& Newtonsoft::Json::JsonReader::__cordl_internal_get__SupportMultipleContent_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SupportMultipleContent_k__BackingField;
}
constexpr void Newtonsoft::Json::JsonReader::__cordl_internal_set__SupportMultipleContent_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____SupportMultipleContent_k__BackingField = value;
}
inline ::System::Threading::Tasks::Task_1<bool>* Newtonsoft::Json::JsonReader::ReadAsync(::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonReader::SkipAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "SkipAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonReader::ReaderReadAndAssertAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "ReaderReadAndAssertAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<bool>>* Newtonsoft::Json::JsonReader::ReadAsBooleanAsync(::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Nullable_1<bool>>*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>* Newtonsoft::Json::JsonReader::ReadAsBytesAsync(::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>* Newtonsoft::Json::JsonReader::ReadArrayIntoByteArrayAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "ReadArrayIntoByteArrayAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<::System::DateTime>>* Newtonsoft::Json::JsonReader::ReadAsDateTimeAsync(::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Nullable_1<::System::DateTime>>*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<::System::DateTimeOffset>>*
Newtonsoft::Json::JsonReader::ReadAsDateTimeOffsetAsync(::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Nullable_1<::System::DateTimeOffset>>*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<::System::Decimal>>* Newtonsoft::Json::JsonReader::ReadAsDecimalAsync(::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Nullable_1<::System::Decimal>>*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<double_t>>* Newtonsoft::Json::JsonReader::ReadAsDoubleAsync(::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Nullable_1<double_t>>*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>* Newtonsoft::Json::JsonReader::ReadAsInt32Async(::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* Newtonsoft::Json::JsonReader::ReadAsStringAsync(::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<bool>* Newtonsoft::Json::JsonReader::ReadAndMoveToContentAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "ReadAndMoveToContentAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<bool>* Newtonsoft::Json::JsonReader::MoveToContentAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "MoveToContentAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<bool>* Newtonsoft::Json::JsonReader::MoveToContentFromNonContentAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "MoveToContentFromNonContentAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, cancellationToken);
}
inline ::Newtonsoft::Json::JsonReader_State Newtonsoft::Json::JsonReader::get_CurrentState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "get_CurrentState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::JsonReader_State>(this, ___internal_method);
}
inline bool Newtonsoft::Json::JsonReader::get_CloseInput() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "get_CloseInput", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonReader::set_CloseInput(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "set_CloseInput", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Newtonsoft::Json::JsonReader::get_SupportMultipleContent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "get_SupportMultipleContent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonReader::set_SupportMultipleContent(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "set_SupportMultipleContent", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline char16_t Newtonsoft::Json::JsonReader::get_QuoteChar() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonReader::set_QuoteChar(char16_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::DateTimeZoneHandling Newtonsoft::Json::JsonReader::get_DateTimeZoneHandling() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "get_DateTimeZoneHandling", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::DateTimeZoneHandling>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonReader::set_DateTimeZoneHandling(::Newtonsoft::Json::DateTimeZoneHandling value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "set_DateTimeZoneHandling", {}, { ::i2c::type_of<::Newtonsoft::Json::DateTimeZoneHandling>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::DateParseHandling Newtonsoft::Json::JsonReader::get_DateParseHandling() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "get_DateParseHandling", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::DateParseHandling>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonReader::set_DateParseHandling(::Newtonsoft::Json::DateParseHandling value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "set_DateParseHandling", {}, { ::i2c::type_of<::Newtonsoft::Json::DateParseHandling>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::FloatParseHandling Newtonsoft::Json::JsonReader::get_FloatParseHandling() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "get_FloatParseHandling", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::FloatParseHandling>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonReader::set_FloatParseHandling(::Newtonsoft::Json::FloatParseHandling value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "set_FloatParseHandling", {}, { ::i2c::type_of<::Newtonsoft::Json::FloatParseHandling>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Newtonsoft::Json::JsonReader::get_DateFormatString() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "get_DateFormatString", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonReader::set_DateFormatString(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "set_DateFormatString", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Nullable_1<int32_t> Newtonsoft::Json::JsonReader::get_MaxDepth() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "get_MaxDepth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int32_t>>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonReader::set_MaxDepth(::System::Nullable_1<int32_t> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "set_MaxDepth", {}, { ::i2c::type_of<::System::Nullable_1<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::JsonToken Newtonsoft::Json::JsonReader::get_TokenType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::JsonToken>(this, ___internal_method);
}
inline ::System::Object* Newtonsoft::Json::JsonReader::get_Value() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Type* Newtonsoft::Json::JsonReader::get_ValueType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline int32_t Newtonsoft::Json::JsonReader::get_Depth() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW Newtonsoft::Json::JsonReader::get_Path() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Globalization::CultureInfo* Newtonsoft::Json::JsonReader::get_Culture() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "get_Culture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureInfo*>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonReader::set_Culture(::System::Globalization::CultureInfo* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "set_Culture", {}, { ::i2c::type_of<::System::Globalization::CultureInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::JsonPosition Newtonsoft::Json::JsonReader::GetPosition(int32_t depth) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "GetPosition", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::JsonPosition>(this, ___internal_method, depth);
}
inline void Newtonsoft::Json::JsonReader::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonReader::Push(::Newtonsoft::Json::JsonContainerType value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "Push", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonContainerType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::JsonContainerType Newtonsoft::Json::JsonReader::Pop() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "Pop", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::JsonContainerType>(this, ___internal_method);
}
inline ::Newtonsoft::Json::JsonContainerType Newtonsoft::Json::JsonReader::Peek() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "Peek", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::JsonContainerType>(this, ___internal_method);
}
inline bool Newtonsoft::Json::JsonReader::Read() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Nullable_1<int32_t> Newtonsoft::Json::JsonReader::ReadAsInt32() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int32_t>>(this, ___internal_method);
}
inline ::System::Nullable_1<int32_t> Newtonsoft::Json::JsonReader::ReadInt32String(::StringW s) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "ReadInt32String", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int32_t>>(this, ___internal_method, s);
}
inline ::StringW Newtonsoft::Json::JsonReader::ReadAsString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Newtonsoft::Json::JsonReader::ReadAsBytes() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Newtonsoft::Json::JsonReader::ReadArrayIntoByteArray() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "ReadArrayIntoByteArray", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline bool Newtonsoft::Json::JsonReader::ReadArrayElementIntoByteArrayReportDone(::System::Collections::Generic::List_1<uint8_t>* buffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(),
                                                           { "ReadArrayElementIntoByteArrayReportDone", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<uint8_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, buffer);
}
inline ::System::Nullable_1<double_t> Newtonsoft::Json::JsonReader::ReadAsDouble() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<double_t>>(this, ___internal_method);
}
inline ::System::Nullable_1<double_t> Newtonsoft::Json::JsonReader::ReadDoubleString(::StringW s) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "ReadDoubleString", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<double_t>>(this, ___internal_method, s);
}
inline ::System::Nullable_1<bool> Newtonsoft::Json::JsonReader::ReadAsBoolean() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<bool>>(this, ___internal_method);
}
inline ::System::Nullable_1<bool> Newtonsoft::Json::JsonReader::ReadBooleanString(::StringW s) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "ReadBooleanString", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<bool>>(this, ___internal_method, s);
}
inline ::System::Nullable_1<::System::Decimal> Newtonsoft::Json::JsonReader::ReadAsDecimal() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::Decimal>>(this, ___internal_method);
}
inline ::System::Nullable_1<::System::Decimal> Newtonsoft::Json::JsonReader::ReadDecimalString(::StringW s) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "ReadDecimalString", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::Decimal>>(this, ___internal_method, s);
}
inline ::System::Nullable_1<::System::DateTime> Newtonsoft::Json::JsonReader::ReadAsDateTime() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::DateTime>>(this, ___internal_method);
}
inline ::System::Nullable_1<::System::DateTime> Newtonsoft::Json::JsonReader::ReadDateTimeString(::StringW s) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "ReadDateTimeString", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::DateTime>>(this, ___internal_method, s);
}
inline ::System::Nullable_1<::System::DateTimeOffset> Newtonsoft::Json::JsonReader::ReadAsDateTimeOffset() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::DateTimeOffset>>(this, ___internal_method);
}
inline ::System::Nullable_1<::System::DateTimeOffset> Newtonsoft::Json::JsonReader::ReadDateTimeOffsetString(::StringW s) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "ReadDateTimeOffsetString", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::DateTimeOffset>>(this, ___internal_method, s);
}
inline void Newtonsoft::Json::JsonReader::ReaderReadAndAssert() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "ReaderReadAndAssert", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Newtonsoft::Json::JsonReaderException* Newtonsoft::Json::JsonReader::CreateUnexpectedEndException() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "CreateUnexpectedEndException", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::JsonReaderException*>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonReader::ReadIntoWrappedTypeObject() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "ReadIntoWrappedTypeObject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonReader::Skip() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "Skip", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonReader::SetToken(::Newtonsoft::Json::JsonToken newToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "SetToken", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonToken>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newToken);
}
inline void Newtonsoft::Json::JsonReader::SetToken(::Newtonsoft::Json::JsonToken newToken, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "SetToken", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonToken>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newToken, value);
}
inline void Newtonsoft::Json::JsonReader::SetToken(::Newtonsoft::Json::JsonToken newToken, ::System::Object* value, bool updateIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(),
                                                           { "SetToken", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonToken>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newToken, value, updateIndex);
}
inline void Newtonsoft::Json::JsonReader::SetPostValueState(bool updateIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "SetPostValueState", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updateIndex);
}
inline void Newtonsoft::Json::JsonReader::UpdateScopeWithFinishedValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "UpdateScopeWithFinishedValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonReader::ValidateEnd(::Newtonsoft::Json::JsonToken endToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "ValidateEnd", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonToken>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, endToken);
}
inline void Newtonsoft::Json::JsonReader::SetStateBasedOnCurrent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "SetStateBasedOnCurrent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonReader::SetFinished() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "SetFinished", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Newtonsoft::Json::JsonContainerType Newtonsoft::Json::JsonReader::GetTypeForCloseToken(::Newtonsoft::Json::JsonToken token) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "GetTypeForCloseToken", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::JsonContainerType>(this, ___internal_method, token);
}
inline void Newtonsoft::Json::JsonReader::System_IDisposable_Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonReader::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void Newtonsoft::Json::JsonReader::Close() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonReader::ReadAndAssert() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "ReadAndAssert", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonReader::ReadForTypeAndAssert(::Newtonsoft::Json::Serialization::JsonContract* contract, bool hasConverter) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(),
                                                           { "ReadForTypeAndAssert", {}, { ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContract*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, contract, hasConverter);
}
inline bool Newtonsoft::Json::JsonReader::ReadForType(::Newtonsoft::Json::Serialization::JsonContract* contract, bool hasConverter) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "ReadForType", {}, { ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContract*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, contract, hasConverter);
}
inline bool Newtonsoft::Json::JsonReader::ReadAndMoveToContent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "ReadAndMoveToContent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Newtonsoft::Json::JsonReader::MoveToContent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "MoveToContent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Newtonsoft::Json::JsonToken Newtonsoft::Json::JsonReader::GetContentToken() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonReader*>(), { "GetContentToken", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::JsonToken>(this, ___internal_method);
}
inline ::Newtonsoft::Json::JsonReader* Newtonsoft::Json::JsonReader::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::JsonReader*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Newtonsoft::Json::JsonReader::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Newtonsoft::Json::JsonReader::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonReader::JsonReader() {}
