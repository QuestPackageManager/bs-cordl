#pragma once
// IWYU pragma private; include "Newtonsoft\Json\JsonWriter.hpp"
#include "Newtonsoft/Json/zzzz__DateFormatHandling_impl.hpp"
#include "Newtonsoft/Json/zzzz__DateTimeZoneHandling_impl.hpp"
#include "Newtonsoft/Json/zzzz__FloatFormatHandling_impl.hpp"
#include "Newtonsoft/Json/zzzz__Formatting_impl.hpp"
#include "Newtonsoft/Json/zzzz__JsonContainerType_impl.hpp"
#include "Newtonsoft/Json/zzzz__JsonPosition_impl.hpp"
#include "Newtonsoft/Json/zzzz__JsonToken_impl.hpp"
#include "Newtonsoft/Json/zzzz__StringEscapeHandling_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriter_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__PrimitiveTypeCode_def.hpp"
#include "Newtonsoft/Json/zzzz__DateFormatHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__DateTimeZoneHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__FloatFormatHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__Formatting_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonContainerType_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonPosition_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonToken_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriterException_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriter_def.hpp"
#include "Newtonsoft/Json/zzzz__StringEscapeHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__WriteState_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__IConvertible_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "System/zzzz__Uri_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::JsonWriter_State::JsonWriter_State(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonWriter_State::JsonWriter_State() {}
constexpr ::Newtonsoft::Json::JsonWriter_State Newtonsoft::Json::JsonWriter_State::Start{ static_cast<int32_t>(0x0) };
constexpr ::Newtonsoft::Json::JsonWriter_State Newtonsoft::Json::JsonWriter_State::Property{ static_cast<int32_t>(0x1) };
constexpr ::Newtonsoft::Json::JsonWriter_State Newtonsoft::Json::JsonWriter_State::ObjectStart{ static_cast<int32_t>(0x2) };
constexpr ::Newtonsoft::Json::JsonWriter_State Newtonsoft::Json::JsonWriter_State::Object{ static_cast<int32_t>(0x3) };
constexpr ::Newtonsoft::Json::JsonWriter_State Newtonsoft::Json::JsonWriter_State::ArrayStart{ static_cast<int32_t>(0x4) };
constexpr ::Newtonsoft::Json::JsonWriter_State Newtonsoft::Json::JsonWriter_State::Array{ static_cast<int32_t>(0x5) };
constexpr ::Newtonsoft::Json::JsonWriter_State Newtonsoft::Json::JsonWriter_State::ConstructorStart{ static_cast<int32_t>(0x6) };
constexpr ::Newtonsoft::Json::JsonWriter_State Newtonsoft::Json::JsonWriter_State::Constructor{ static_cast<int32_t>(0x7) };
constexpr ::Newtonsoft::Json::JsonWriter_State Newtonsoft::Json::JsonWriter_State::Closed{ static_cast<int32_t>(0x8) };
constexpr ::Newtonsoft::Json::JsonWriter_State Newtonsoft::Json::JsonWriter_State::Error{ static_cast<int32_t>(0x9) };
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter___InternalWriteEndAsync_g__AwaitEnd_11_2_d.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter___InternalWriteEndAsync_g__AwaitEnd_11_2_d::*)()>(
    &::Newtonsoft::Json::JsonWriter___InternalWriteEndAsync_g__AwaitEnd_11_2_d::MoveNext)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x5d17708;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter___InternalWriteEndAsync_g__AwaitEnd_11_2_d>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter___InternalWriteEndAsync_g__AwaitEnd_11_2_d.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter___InternalWriteEndAsync_g__AwaitEnd_11_2_d::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Newtonsoft::Json::JsonWriter___InternalWriteEndAsync_g__AwaitEnd_11_2_d::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d17984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter___InternalWriteEndAsync_g__AwaitEnd_11_2_d>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonWriter___InternalWriteEndAsync_g__AwaitEnd_11_2_d::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter___InternalWriteEndAsync_g__AwaitEnd_11_2_d>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter___InternalWriteEndAsync_g__AwaitEnd_11_2_d::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter___InternalWriteEndAsync_g__AwaitEnd_11_2_d>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonWriter___InternalWriteEndAsync_g__AwaitEnd_11_2_d::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Newtonsoft::Json::JsonWriter___InternalWriteEndAsync_g__AwaitEnd_11_2_d::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "task", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonWriter*", modifiers: "", def_value: Some("{}") }, CppParam { name: "LevelsToComplete", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "CancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::JsonWriter___InternalWriteEndAsync_g__AwaitEnd_11_2_d::JsonWriter___InternalWriteEndAsync_g__AwaitEnd_11_2_d(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Threading::Tasks::Task* task, ::Newtonsoft::Json::JsonWriter* __4__this,
    int32_t LevelsToComplete, ::System::Threading::CancellationToken CancellationToken, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->task = task;
  this->__4__this = __4__this;
  this->LevelsToComplete = LevelsToComplete;
  this->CancellationToken = CancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonWriter___InternalWriteEndAsync_g__AwaitEnd_11_2_d::JsonWriter___InternalWriteEndAsync_g__AwaitEnd_11_2_d() {}
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter___InternalWriteEndAsync_g__AwaitIndent_11_1_d.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter___InternalWriteEndAsync_g__AwaitIndent_11_1_d::*)()>(
    &::Newtonsoft::Json::JsonWriter___InternalWriteEndAsync_g__AwaitIndent_11_1_d::MoveNext)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x5d179f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter___InternalWriteEndAsync_g__AwaitIndent_11_1_d>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter___InternalWriteEndAsync_g__AwaitIndent_11_1_d.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter___InternalWriteEndAsync_g__AwaitIndent_11_1_d::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Newtonsoft::Json::JsonWriter___InternalWriteEndAsync_g__AwaitIndent_11_1_d::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d17d1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter___InternalWriteEndAsync_g__AwaitIndent_11_1_d>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonWriter___InternalWriteEndAsync_g__AwaitIndent_11_1_d::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter___InternalWriteEndAsync_g__AwaitIndent_11_1_d>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter___InternalWriteEndAsync_g__AwaitIndent_11_1_d::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter___InternalWriteEndAsync_g__AwaitIndent_11_1_d>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonWriter___InternalWriteEndAsync_g__AwaitIndent_11_1_d::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Newtonsoft::Json::JsonWriter___InternalWriteEndAsync_g__AwaitIndent_11_1_d::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "task", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonWriter*", modifiers: "", def_value: Some("{}") }, CppParam { name: "token", ty: "::Newtonsoft::Json::JsonToken", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "CancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "LevelsToComplete", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value:
// Some("{}") }]
constexpr ::Newtonsoft::Json::JsonWriter___InternalWriteEndAsync_g__AwaitIndent_11_1_d::JsonWriter___InternalWriteEndAsync_g__AwaitIndent_11_1_d(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Threading::Tasks::Task* task, ::Newtonsoft::Json::JsonWriter* __4__this,
    ::Newtonsoft::Json::JsonToken token, ::System::Threading::CancellationToken CancellationToken, int32_t LevelsToComplete,
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->task = task;
  this->__4__this = __4__this;
  this->token = token;
  this->CancellationToken = CancellationToken;
  this->LevelsToComplete = LevelsToComplete;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonWriter___InternalWriteEndAsync_g__AwaitIndent_11_1_d::JsonWriter___InternalWriteEndAsync_g__AwaitIndent_11_1_d() {}
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter___InternalWriteEndAsync_g__AwaitProperty_11_0_d.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter___InternalWriteEndAsync_g__AwaitProperty_11_0_d::*)()>(
    &::Newtonsoft::Json::JsonWriter___InternalWriteEndAsync_g__AwaitProperty_11_0_d::MoveNext)> {
  constexpr static std::size_t size = 0x3f4;
  constexpr static std::size_t addrs = 0x5d17d88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter___InternalWriteEndAsync_g__AwaitProperty_11_0_d>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter___InternalWriteEndAsync_g__AwaitProperty_11_0_d.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter___InternalWriteEndAsync_g__AwaitProperty_11_0_d::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Newtonsoft::Json::JsonWriter___InternalWriteEndAsync_g__AwaitProperty_11_0_d::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d1817c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter___InternalWriteEndAsync_g__AwaitProperty_11_0_d>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonWriter___InternalWriteEndAsync_g__AwaitProperty_11_0_d::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter___InternalWriteEndAsync_g__AwaitProperty_11_0_d>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter___InternalWriteEndAsync_g__AwaitProperty_11_0_d::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter___InternalWriteEndAsync_g__AwaitProperty_11_0_d>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonWriter___InternalWriteEndAsync_g__AwaitProperty_11_0_d::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Newtonsoft::Json::JsonWriter___InternalWriteEndAsync_g__AwaitProperty_11_0_d::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "task", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonWriter*", modifiers: "", def_value: Some("{}") }, CppParam { name: "CancellationToken", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "token", ty: "::Newtonsoft::Json::JsonToken", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "LevelsToComplete", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter",
// modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::JsonWriter___InternalWriteEndAsync_g__AwaitProperty_11_0_d::JsonWriter___InternalWriteEndAsync_g__AwaitProperty_11_0_d(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Threading::Tasks::Task* task, ::Newtonsoft::Json::JsonWriter* __4__this,
    ::System::Threading::CancellationToken CancellationToken, ::Newtonsoft::Json::JsonToken token, int32_t LevelsToComplete,
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->task = task;
  this->__4__this = __4__this;
  this->CancellationToken = CancellationToken;
  this->token = token;
  this->LevelsToComplete = LevelsToComplete;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonWriter___InternalWriteEndAsync_g__AwaitProperty_11_0_d::JsonWriter___InternalWriteEndAsync_g__AwaitProperty_11_0_d() {}
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter___InternalWriteEndAsync_g__AwaitRemaining_11_3_d.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter___InternalWriteEndAsync_g__AwaitRemaining_11_3_d::*)()>(
    &::Newtonsoft::Json::JsonWriter___InternalWriteEndAsync_g__AwaitRemaining_11_3_d::MoveNext)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0x5d181e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter___InternalWriteEndAsync_g__AwaitRemaining_11_3_d>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter___InternalWriteEndAsync_g__AwaitRemaining_11_3_d.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter___InternalWriteEndAsync_g__AwaitRemaining_11_3_d::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Newtonsoft::Json::JsonWriter___InternalWriteEndAsync_g__AwaitRemaining_11_3_d::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d185b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter___InternalWriteEndAsync_g__AwaitRemaining_11_3_d>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonWriter___InternalWriteEndAsync_g__AwaitRemaining_11_3_d::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter___InternalWriteEndAsync_g__AwaitRemaining_11_3_d>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter___InternalWriteEndAsync_g__AwaitRemaining_11_3_d::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter___InternalWriteEndAsync_g__AwaitRemaining_11_3_d>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonWriter___InternalWriteEndAsync_g__AwaitRemaining_11_3_d::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Newtonsoft::Json::JsonWriter___InternalWriteEndAsync_g__AwaitRemaining_11_3_d::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonWriter*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "CancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "LevelsToComplete", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "_token_5__2", ty: "::Newtonsoft::Json::JsonToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::JsonWriter___InternalWriteEndAsync_g__AwaitRemaining_11_3_d::JsonWriter___InternalWriteEndAsync_g__AwaitRemaining_11_3_d(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Newtonsoft::Json::JsonWriter* __4__this, ::System::Threading::CancellationToken CancellationToken,
    int32_t LevelsToComplete, ::Newtonsoft::Json::JsonToken _token_5__2, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->CancellationToken = CancellationToken;
  this->LevelsToComplete = LevelsToComplete;
  this->_token_5__2 = _token_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonWriter___InternalWriteEndAsync_g__AwaitRemaining_11_3_d::JsonWriter___InternalWriteEndAsync_g__AwaitRemaining_11_3_d() {}
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter__AutoCompleteAsync_d__1.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter__AutoCompleteAsync_d__1::*)()>(&::Newtonsoft::Json::JsonWriter__AutoCompleteAsync_d__1::MoveNext)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x5d18620;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter__AutoCompleteAsync_d__1>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter__AutoCompleteAsync_d__1.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter__AutoCompleteAsync_d__1::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Newtonsoft::Json::JsonWriter__AutoCompleteAsync_d__1::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d188b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter__AutoCompleteAsync_d__1>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonWriter__AutoCompleteAsync_d__1::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter__AutoCompleteAsync_d__1>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter__AutoCompleteAsync_d__1::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter__AutoCompleteAsync_d__1>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonWriter__AutoCompleteAsync_d__1::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Newtonsoft::Json::JsonWriter__AutoCompleteAsync_d__1::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonWriter*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::JsonWriter__AutoCompleteAsync_d__1::JsonWriter__AutoCompleteAsync_d__1(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Newtonsoft::Json::JsonWriter* __4__this, ::System::Threading::CancellationToken cancellationToken,
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonWriter__AutoCompleteAsync_d__1::JsonWriter__AutoCompleteAsync_d__1() {}
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter__InternalWriteStartAsync_d__20.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter__InternalWriteStartAsync_d__20::*)()>(
    &::Newtonsoft::Json::JsonWriter__InternalWriteStartAsync_d__20::MoveNext)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x5d18920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter__InternalWriteStartAsync_d__20>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter__InternalWriteStartAsync_d__20.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter__InternalWriteStartAsync_d__20::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Newtonsoft::Json::JsonWriter__InternalWriteStartAsync_d__20::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d18b40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter__InternalWriteStartAsync_d__20>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonWriter__InternalWriteStartAsync_d__20::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter__InternalWriteStartAsync_d__20>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter__InternalWriteStartAsync_d__20::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter__InternalWriteStartAsync_d__20>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonWriter__InternalWriteStartAsync_d__20::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Newtonsoft::Json::JsonWriter__InternalWriteStartAsync_d__20::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonWriter*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "token", ty: "::Newtonsoft::Json::JsonToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "container", ty: "::Newtonsoft::Json::JsonContainerType", modifiers: "", def_value: Some("{}") },
// CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::JsonWriter__InternalWriteStartAsync_d__20::JsonWriter__InternalWriteStartAsync_d__20(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Newtonsoft::Json::JsonWriter* __4__this, ::Newtonsoft::Json::JsonToken token,
    ::System::Threading::CancellationToken cancellationToken, ::Newtonsoft::Json::JsonContainerType container,
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->token = token;
  this->cancellationToken = cancellationToken;
  this->container = container;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonWriter__InternalWriteStartAsync_d__20::JsonWriter__InternalWriteStartAsync_d__20() {}
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter__WriteConstructorDateAsync_d__32.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter__WriteConstructorDateAsync_d__32::*)()>(
    &::Newtonsoft::Json::JsonWriter__WriteConstructorDateAsync_d__32::MoveNext)> {
  constexpr static std::size_t size = 0x714;
  constexpr static std::size_t addrs = 0x5d18bac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter__WriteConstructorDateAsync_d__32>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter__WriteConstructorDateAsync_d__32.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter__WriteConstructorDateAsync_d__32::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Newtonsoft::Json::JsonWriter__WriteConstructorDateAsync_d__32::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d19380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter__WriteConstructorDateAsync_d__32>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonWriter__WriteConstructorDateAsync_d__32::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter__WriteConstructorDateAsync_d__32>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter__WriteConstructorDateAsync_d__32::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter__WriteConstructorDateAsync_d__32>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonWriter__WriteConstructorDateAsync_d__32::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Newtonsoft::Json::JsonWriter__WriteConstructorDateAsync_d__32::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "reader", ty: "::Newtonsoft::Json::JsonReader*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::Newtonsoft::Json::JsonWriter*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_date_5__2", ty: "::System::DateTime", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::JsonWriter__WriteConstructorDateAsync_d__32::JsonWriter__WriteConstructorDateAsync_d__32(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Newtonsoft::Json::JsonReader* reader, ::System::Threading::CancellationToken cancellationToken,
    ::Newtonsoft::Json::JsonWriter* __4__this, ::System::DateTime _date_5__2, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__1,
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->reader = reader;
  this->cancellationToken = cancellationToken;
  this->__4__this = __4__this;
  this->_date_5__2 = _date_5__2;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonWriter__WriteConstructorDateAsync_d__32::JsonWriter__WriteConstructorDateAsync_d__32() {}
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter__WriteTokenAsync_d__30.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter__WriteTokenAsync_d__30::*)()>(&::Newtonsoft::Json::JsonWriter__WriteTokenAsync_d__30::MoveNext)> {
  constexpr static std::size_t size = 0x624;
  constexpr static std::size_t addrs = 0x5d193ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter__WriteTokenAsync_d__30>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter__WriteTokenAsync_d__30.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter__WriteTokenAsync_d__30::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Newtonsoft::Json::JsonWriter__WriteTokenAsync_d__30::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d19a20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter__WriteTokenAsync_d__30>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonWriter__WriteTokenAsync_d__30::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter__WriteTokenAsync_d__30>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter__WriteTokenAsync_d__30::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter__WriteTokenAsync_d__30>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonWriter__WriteTokenAsync_d__30::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Newtonsoft::Json::JsonWriter__WriteTokenAsync_d__30::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonWriter*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "reader", ty: "::Newtonsoft::Json::JsonReader*", modifiers: "", def_value: Some("{}") }, CppParam { name: "writeDateConstructorAsDate", ty: "bool", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "writeComments", ty: "bool",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "writeChildren", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_initialDepth_5__2", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "__u__2", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::JsonWriter__WriteTokenAsync_d__30::JsonWriter__WriteTokenAsync_d__30(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Newtonsoft::Json::JsonWriter* __4__this, ::Newtonsoft::Json::JsonReader* reader,
    bool writeDateConstructorAsDate, ::System::Threading::CancellationToken cancellationToken, bool writeComments, bool writeChildren, int32_t _initialDepth_5__2,
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1,
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->reader = reader;
  this->writeDateConstructorAsDate = writeDateConstructorAsDate;
  this->cancellationToken = cancellationToken;
  this->writeComments = writeComments;
  this->writeChildren = writeChildren;
  this->_initialDepth_5__2 = _initialDepth_5__2;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonWriter__WriteTokenAsync_d__30::JsonWriter__WriteTokenAsync_d__30() {}
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter__WriteTokenSyncReadingAsync_d__31.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter__WriteTokenSyncReadingAsync_d__31::*)()>(
    &::Newtonsoft::Json::JsonWriter__WriteTokenSyncReadingAsync_d__31::MoveNext)> {
  constexpr static std::size_t size = 0x4cc;
  constexpr static std::size_t addrs = 0x5d19a8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter__WriteTokenSyncReadingAsync_d__31>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter__WriteTokenSyncReadingAsync_d__31.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter__WriteTokenSyncReadingAsync_d__31::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Newtonsoft::Json::JsonWriter__WriteTokenSyncReadingAsync_d__31::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d19f58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter__WriteTokenSyncReadingAsync_d__31>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonWriter__WriteTokenSyncReadingAsync_d__31::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter__WriteTokenSyncReadingAsync_d__31>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter__WriteTokenSyncReadingAsync_d__31::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter__WriteTokenSyncReadingAsync_d__31>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonWriter__WriteTokenSyncReadingAsync_d__31::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Newtonsoft::Json::JsonWriter__WriteTokenSyncReadingAsync_d__31::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonWriter*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "reader", ty: "::Newtonsoft::Json::JsonReader*", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_initialDepth_5__2", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::JsonWriter__WriteTokenSyncReadingAsync_d__31::JsonWriter__WriteTokenSyncReadingAsync_d__31(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Newtonsoft::Json::JsonWriter* __4__this, ::Newtonsoft::Json::JsonReader* reader,
    ::System::Threading::CancellationToken cancellationToken, int32_t _initialDepth_5__2, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->reader = reader;
  this->cancellationToken = cancellationToken;
  this->_initialDepth_5__2 = _initialDepth_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonWriter__WriteTokenSyncReadingAsync_d__31::JsonWriter__WriteTokenSyncReadingAsync_d__31() {}
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.AutoCompleteAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::JsonToken, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonWriter::AutoCompleteAsync)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x5d0d1d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                                                { "AutoCompleteAsync", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonToken>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.AutoCompleteAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonWriter::*)(::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonWriter::AutoCompleteAsync)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5d0d474;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "AutoCompleteAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.CloseAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonWriter::*)(::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonWriter::CloseAsync)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5d0d534;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.FlushAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonWriter::*)(::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonWriter::FlushAsync)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5d0d624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteEndAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::JsonToken, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonWriter::WriteEndAsync)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5d0d714;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteIndentAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonWriter::*)(::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonWriter::WriteIndentAsync)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5d0d80c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValueDelimiterAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonWriter::*)(::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonWriter::WriteValueDelimiterAsync)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5d0d8fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteIndentSpaceAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonWriter::*)(::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonWriter::WriteIndentSpaceAsync)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5d0d9ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteRawAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonWriter::*)(::StringW, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonWriter::WriteRawAsync)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5d0dadc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteEndAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonWriter::*)(::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonWriter::WriteEndAsync)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5d0dbd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteEndInternalAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonWriter::*)(::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonWriter::WriteEndInternalAsync)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5d0dcc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "WriteEndInternalAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.InternalWriteEndAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::JsonContainerType, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonWriter::InternalWriteEndAsync)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x5d0de4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                                         { "InternalWriteEndAsync", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonContainerType>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteEndArrayAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonWriter::*)(::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonWriter::WriteEndArrayAsync)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5d0e6bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteEndConstructorAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonWriter::*)(::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonWriter::WriteEndConstructorAsync)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5d0e7ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteEndObjectAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonWriter::*)(::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonWriter::WriteEndObjectAsync)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5d0e89c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteNullAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonWriter::*)(::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonWriter::WriteNullAsync)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5d0e98c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WritePropertyNameAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonWriter::*)(::StringW, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonWriter::WritePropertyNameAsync)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5d0ea7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WritePropertyNameAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonWriter::*)(::StringW, bool, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonWriter::WritePropertyNameAsync)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5d0eb74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.InternalWritePropertyNameAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonWriter::*)(::StringW, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonWriter::InternalWritePropertyNameAsync)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5d0233c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                                                             { "InternalWritePropertyNameAsync", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteStartArrayAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonWriter::*)(::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonWriter::WriteStartArrayAsync)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5d0ec80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.InternalWriteStartAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::JsonToken, ::Newtonsoft::Json::JsonContainerType, ::System::Threading::CancellationToken)>(
        &::Newtonsoft::Json::JsonWriter::InternalWriteStartAsync)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5d02ee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                                                                                           { "InternalWriteStartAsync",
                                                                                             {},
                                                                                             { ::i2c::type_of<::Newtonsoft::Json::JsonToken>(), ::i2c::type_of<::Newtonsoft::Json::JsonContainerType>(),
                                                                                               ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteCommentAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonWriter::*)(::StringW, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonWriter::WriteCommentAsync)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5d0ed70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.InternalWriteCommentAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonWriter::*)(::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonWriter::InternalWriteCommentAsync)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d01980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "InternalWriteCommentAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteRawValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonWriter::*)(::StringW, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonWriter::WriteRawValueAsync)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5d0ee68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteStartConstructorAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonWriter::*)(::StringW, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonWriter::WriteStartConstructorAsync)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5d0ef60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteStartObjectAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonWriter::*)(::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonWriter::WriteStartObjectAsync)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5d0f058;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteTokenAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::JsonReader*, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonWriter::WriteTokenAsync)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d0f148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                                                { "WriteTokenAsync", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteTokenAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::JsonReader*, bool, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonWriter::WriteTokenAsync)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5d0f154;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                            { "WriteTokenAsync", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteTokenAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::JsonToken, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonWriter::WriteTokenAsync)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d0f1e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                                                { "WriteTokenAsync", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonToken>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteTokenAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::JsonToken, ::System::Object*, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonWriter::WriteTokenAsync)> {
  constexpr static std::size_t size = 0x76c;
  constexpr static std::size_t addrs = 0x5d0f1f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
            { "WriteTokenAsync", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonToken>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteTokenAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::JsonReader*, bool, bool, bool, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonWriter::WriteTokenAsync)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5d0f960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteTokenSyncReadingAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::JsonReader*, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonWriter::WriteTokenSyncReadingAsync)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5d0fa64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                                         { "WriteTokenSyncReadingAsync", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteConstructorDateAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::JsonReader*, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonWriter::WriteConstructorDateAsync)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5d0fb2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                                                { "WriteConstructorDateAsync", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonWriter::*)(bool, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonWriter::WriteValueAsync)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5d0fbf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonWriter::*)(::System::Nullable_1<bool>, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonWriter::WriteValueAsync)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5d0fcec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonWriter::*)(uint8_t, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonWriter::WriteValueAsync)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5d0fde4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonWriter::*)(::System::Nullable_1<uint8_t>, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonWriter::WriteValueAsync)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5d0fedc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonWriter::*)(::ArrayW<uint8_t>, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonWriter::WriteValueAsync)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5d0ffd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonWriter::*)(char16_t, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonWriter::WriteValueAsync)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5d100cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonWriter::*)(::System::Nullable_1<char16_t>, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonWriter::WriteValueAsync)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5d101c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonWriter::*)(::System::DateTime, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonWriter::WriteValueAsync)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5d102bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::Newtonsoft::Json::JsonWriter::*)(::System::Nullable_1<::System::DateTime>, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonWriter::WriteValueAsync)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5d103b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonWriter::*)(::System::DateTimeOffset, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonWriter::WriteValueAsync)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5d104c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 34 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::Newtonsoft::Json::JsonWriter::*)(::System::Nullable_1<::System::DateTimeOffset>, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonWriter::WriteValueAsync)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5d105cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 35 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonWriter::*)(::System::Decimal, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonWriter::WriteValueAsync)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5d106e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 36 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::Newtonsoft::Json::JsonWriter::*)(::System::Nullable_1<::System::Decimal>, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonWriter::WriteValueAsync)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5d107ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 37 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonWriter::*)(double_t, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonWriter::WriteValueAsync)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5d1093c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 38 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonWriter::*)(::System::Nullable_1<double_t>, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonWriter::WriteValueAsync)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5d10a40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 39 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonWriter::*)(float_t, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonWriter::WriteValueAsync)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5d10b4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 40 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonWriter::*)(::System::Nullable_1<float_t>, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonWriter::WriteValueAsync)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5d10c50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 41 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonWriter::*)(::System::Guid, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonWriter::WriteValueAsync)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5d10d48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 42 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::Newtonsoft::Json::JsonWriter::*)(::System::Nullable_1<::System::Guid>, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonWriter::WriteValueAsync)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5d10e54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 43 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonWriter::*)(int32_t, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonWriter::WriteValueAsync)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5d10f68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 44 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonWriter::*)(::System::Nullable_1<int32_t>, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonWriter::WriteValueAsync)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5d11060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 45 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonWriter::*)(int64_t, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonWriter::WriteValueAsync)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5d11158;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 46 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonWriter::*)(::System::Nullable_1<int64_t>, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonWriter::WriteValueAsync)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5d11250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 47 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonWriter::*)(::System::Object*, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonWriter::WriteValueAsync)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5d1135c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 48 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonWriter::*)(int8_t, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonWriter::WriteValueAsync)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5d11454;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 49 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonWriter::*)(::System::Nullable_1<int8_t>, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonWriter::WriteValueAsync)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5d1154c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 50 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonWriter::*)(int16_t, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonWriter::WriteValueAsync)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5d11644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 51 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonWriter::*)(::System::Nullable_1<int16_t>, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonWriter::WriteValueAsync)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5d1173c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 52 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonWriter::*)(::StringW, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonWriter::WriteValueAsync)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5d11834;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 53 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonWriter::*)(::System::TimeSpan, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonWriter::WriteValueAsync)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5d1192c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 54 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::Newtonsoft::Json::JsonWriter::*)(::System::Nullable_1<::System::TimeSpan>, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonWriter::WriteValueAsync)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5d11a24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 55 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonWriter::*)(uint32_t, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonWriter::WriteValueAsync)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5d11b30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 56 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonWriter::*)(::System::Nullable_1<uint32_t>, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonWriter::WriteValueAsync)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5d11c28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 57 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonWriter::*)(uint64_t, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonWriter::WriteValueAsync)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5d11d20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 58 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonWriter::*)(::System::Nullable_1<uint64_t>, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonWriter::WriteValueAsync)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5d11e18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 59 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonWriter::*)(::System::Uri*, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonWriter::WriteValueAsync)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5d11f24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 60 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonWriter::*)(uint16_t, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonWriter::WriteValueAsync)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5d1201c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 61 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonWriter::*)(::System::Nullable_1<uint16_t>, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonWriter::WriteValueAsync)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5d12114;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 62 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteUndefinedAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonWriter::*)(::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonWriter::WriteUndefinedAsync)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5d1220c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 63 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteWhitespaceAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonWriter::*)(::StringW, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonWriter::WriteWhitespaceAsync)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5d122fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 64 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.InternalWriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::JsonToken, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonWriter::InternalWriteValueAsync)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5d03c6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                                                { "InternalWriteValueAsync", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonToken>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.SetWriteStateAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::JsonToken, ::System::Object*, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonWriter::SetWriteStateAsync)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x5d1240c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
            { "SetWriteStateAsync", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonToken>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValueAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)(::Newtonsoft::Json::JsonWriter*, ::Newtonsoft::Json::Utilities::PrimitiveTypeCode, ::System::Object*,
                                                                                             ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonWriter::WriteValueAsync)> {
  constexpr static std::size_t size = 0x102c;
  constexpr static std::size_t addrs = 0x5d126f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                                                             { "WriteValueAsync",
                                                               {},
                                                               { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::Newtonsoft::Json::Utilities::PrimitiveTypeCode>(),
                                                                 ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.BuildStateArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::ArrayW<::Newtonsoft::Json::JsonWriter_State>> (*)()>(&::Newtonsoft::Json::JsonWriter::BuildStateArray)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x5d13968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "BuildStateArray", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.get_CloseOutput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::get_CloseOutput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d13eac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "get_CloseOutput", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.set_CloseOutput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(bool)>(&::Newtonsoft::Json::JsonWriter::set_CloseOutput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d13eb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "set_CloseOutput", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.get_AutoCompleteOnClose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::get_AutoCompleteOnClose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d13ebc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "get_AutoCompleteOnClose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.set_AutoCompleteOnClose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(bool)>(&::Newtonsoft::Json::JsonWriter::set_AutoCompleteOnClose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d13ec4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "set_AutoCompleteOnClose", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.get_Top
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::get_Top)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5d0140c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "get_Top", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.get_WriteState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::WriteState (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::get_WriteState)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5d13ecc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "get_WriteState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.get_ContainerPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::get_ContainerPath)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5d13f70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "get_ContainerPath", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.get_Path
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::get_Path)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5d14008;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "get_Path", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.get_Formatting
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Formatting (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::get_Formatting)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d14148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "get_Formatting", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.set_Formatting
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::Formatting)>(&::Newtonsoft::Json::JsonWriter::set_Formatting)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5d14150;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "set_Formatting", {}, { ::i2c::type_of<::Newtonsoft::Json::Formatting>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.get_DateFormatHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::DateFormatHandling (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::get_DateFormatHandling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d141ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "get_DateFormatHandling", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.set_DateFormatHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::DateFormatHandling)>(&::Newtonsoft::Json::JsonWriter::set_DateFormatHandling)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5d141b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "set_DateFormatHandling", {}, { ::i2c::type_of<::Newtonsoft::Json::DateFormatHandling>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.get_DateTimeZoneHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::DateTimeZoneHandling (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::get_DateTimeZoneHandling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d14210;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "get_DateTimeZoneHandling", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.set_DateTimeZoneHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::DateTimeZoneHandling)>(&::Newtonsoft::Json::JsonWriter::set_DateTimeZoneHandling)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5d14218;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "set_DateTimeZoneHandling", {}, { ::i2c::type_of<::Newtonsoft::Json::DateTimeZoneHandling>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.get_StringEscapeHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::StringEscapeHandling (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::get_StringEscapeHandling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d14274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "get_StringEscapeHandling", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.set_StringEscapeHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::StringEscapeHandling)>(&::Newtonsoft::Json::JsonWriter::set_StringEscapeHandling)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d1427c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "set_StringEscapeHandling", {}, { ::i2c::type_of<::Newtonsoft::Json::StringEscapeHandling>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.OnStringEscapeHandlingChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::OnStringEscapeHandlingChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d142e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 65 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.get_FloatFormatHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::FloatFormatHandling (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::get_FloatFormatHandling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d142ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "get_FloatFormatHandling", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.set_FloatFormatHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::FloatFormatHandling)>(&::Newtonsoft::Json::JsonWriter::set_FloatFormatHandling)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5d142f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "set_FloatFormatHandling", {}, { ::i2c::type_of<::Newtonsoft::Json::FloatFormatHandling>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.get_DateFormatString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::get_DateFormatString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d14350;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "get_DateFormatString", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.set_DateFormatString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::StringW)>(&::Newtonsoft::Json::JsonWriter::set_DateFormatString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d14358;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "set_DateFormatString", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.get_Culture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::CultureInfo* (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::get_Culture)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d03d4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "get_Culture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.set_Culture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::System::Globalization::CultureInfo*)>(&::Newtonsoft::Json::JsonWriter::set_Culture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d14360;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "set_Culture", {}, { ::i2c::type_of<::System::Globalization::CultureInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5d14368;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.UpdateScopeWithFinishedValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::UpdateScopeWithFinishedValue)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5d123f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "UpdateScopeWithFinishedValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.Push
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::JsonContainerType)>(&::Newtonsoft::Json::JsonWriter::Push)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5d14380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "Push", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonContainerType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.Pop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::JsonContainerType (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::Pop)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5d0e1f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "Pop", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.Peek
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::JsonContainerType (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::Peek)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d0de44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "Peek", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.Flush
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::Flush)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 66 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::Close)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5d14500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 67 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteStartObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::WriteStartObject)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d14588;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 68 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteEndObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::WriteEndObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d145d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 69 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteStartArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::WriteStartArray)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d145e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 70 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteEndArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::WriteEndArray)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d145ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 71 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteStartConstructor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::StringW)>(&::Newtonsoft::Json::JsonWriter::WriteStartConstructor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d145f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 72 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteEndConstructor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::WriteEndConstructor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d14600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 73 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WritePropertyName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::StringW)>(&::Newtonsoft::Json::JsonWriter::WritePropertyName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d14608;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 74 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WritePropertyName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::StringW, bool)>(&::Newtonsoft::Json::JsonWriter::WritePropertyName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d14628;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 75 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteEnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::WriteEnd)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d14638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 76 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteToken
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::JsonReader*)>(&::Newtonsoft::Json::JsonWriter::WriteToken)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d14718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "WriteToken", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteToken
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::JsonReader*, bool)>(&::Newtonsoft::Json::JsonWriter::WriteToken)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5d0c364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "WriteToken", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteToken
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::JsonToken, ::System::Object*)>(&::Newtonsoft::Json::JsonWriter::WriteToken)> {
  constexpr static std::size_t size = 0x684;
  constexpr static std::size_t addrs = 0x5d14720;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "WriteToken", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonToken>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteToken
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::JsonToken)>(&::Newtonsoft::Json::JsonWriter::WriteToken)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d14da4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "WriteToken", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteToken
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::JsonReader*, bool, bool, bool)>(&::Newtonsoft::Json::JsonWriter::WriteToken)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x5d14dac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 77 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.IsWriteTokenIncomplete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::JsonReader*, bool, int32_t)>(
    &::Newtonsoft::Json::JsonWriter::IsWriteTokenIncomplete)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5d150e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                                                { "IsWriteTokenIncomplete", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.CalculateWriteTokenInitialDepth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::JsonReader*)>(
    &::Newtonsoft::Json::JsonWriter::CalculateWriteTokenInitialDepth)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5d14fb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "CalculateWriteTokenInitialDepth", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.CalculateWriteTokenFinalDepth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::JsonReader*)>(&::Newtonsoft::Json::JsonWriter::CalculateWriteTokenFinalDepth)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5d15150;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "CalculateWriteTokenFinalDepth", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteConstructorDate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::JsonReader*)>(&::Newtonsoft::Json::JsonWriter::WriteConstructorDate)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5d15010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "WriteConstructorDate", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteEnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::JsonContainerType)>(&::Newtonsoft::Json::JsonWriter::WriteEnd)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5d14640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "WriteEnd", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonContainerType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.AutoCompleteAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::AutoCompleteAll)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5d14548;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "AutoCompleteAll", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.GetCloseTokenForType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::JsonToken (::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::JsonContainerType)>(
    &::Newtonsoft::Json::JsonWriter::GetCloseTokenForType)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5d0e2d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "GetCloseTokenForType", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonContainerType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.AutoCompleteClose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::JsonContainerType)>(&::Newtonsoft::Json::JsonWriter::AutoCompleteClose)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5d151b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "AutoCompleteClose", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonContainerType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.CalculateLevelsToComplete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::JsonContainerType)>(
    &::Newtonsoft::Json::JsonWriter::CalculateLevelsToComplete)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5d0e0f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "CalculateLevelsToComplete", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonContainerType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.UpdateCurrentState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::UpdateCurrentState)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5d0e60c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "UpdateCurrentState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteEnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::JsonToken)>(&::Newtonsoft::Json::JsonWriter::WriteEnd)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d15270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 78 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteIndent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::WriteIndent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d15274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 79 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValueDelimiter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::WriteValueDelimiter)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d15278;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 80 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteIndentSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::WriteIndentSpace)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d1527c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 81 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.AutoComplete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::JsonToken)>(&::Newtonsoft::Json::JsonWriter::AutoComplete)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x5d15280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "AutoComplete", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::WriteNull)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5d15494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 82 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteUndefined
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::WriteUndefined)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5d154c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 83 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteRaw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::StringW)>(&::Newtonsoft::Json::JsonWriter::WriteRaw)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d154e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 84 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteRawValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::StringW)>(&::Newtonsoft::Json::JsonWriter::WriteRawValue)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5d154ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 85 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::StringW)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5d1553c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 86 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(int32_t)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5d15558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 87 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(uint32_t)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5d15574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 88 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(int64_t)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5d15590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 89 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(uint64_t)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5d155ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 90 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(float_t)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5d155c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 91 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(double_t)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5d155e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 92 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(bool)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5d15600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 93 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(int16_t)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5d1561c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 94 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(uint16_t)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5d15638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 95 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(char16_t)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5d15654;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 96 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(uint8_t)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5d15670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 97 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(int8_t)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5d1568c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 98 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::System::Decimal)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5d156a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 99 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::System::DateTime)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5d156c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 100 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::System::DateTimeOffset)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5d156e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 101 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::System::Guid)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5d156fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 102 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::System::TimeSpan)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5d15718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 103 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::System::Nullable_1<int32_t>)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5d15734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 104 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::System::Nullable_1<uint32_t>)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5d157cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 105 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::System::Nullable_1<int64_t>)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5d15864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 106 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::System::Nullable_1<uint64_t>)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5d15900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 107 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::System::Nullable_1<float_t>)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5d1599c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 108 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::System::Nullable_1<double_t>)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5d15a38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 109 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::System::Nullable_1<bool>)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5d15ad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 110 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::System::Nullable_1<int16_t>)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5d15b74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 111 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::System::Nullable_1<uint16_t>)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5d15c0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 112 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::System::Nullable_1<char16_t>)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5d15ca4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 113 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::System::Nullable_1<uint8_t>)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5d15d3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 114 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::System::Nullable_1<int8_t>)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5d15dd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 115 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::System::Nullable_1<::System::Decimal>)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5d15e6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 116 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::System::Nullable_1<::System::DateTime>)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5d15f08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 117 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::System::Nullable_1<::System::DateTimeOffset>)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5d15fa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 118 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::System::Nullable_1<::System::Guid>)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5d16040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 119 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::System::Nullable_1<::System::TimeSpan>)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5d160e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 120 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::ArrayW<uint8_t>)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5d1617c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 121 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::System::Uri*)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5d161ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 122 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::System::Object*)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5d16250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 123 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteComment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::StringW)>(&::Newtonsoft::Json::JsonWriter::WriteComment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d17390;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 124 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteWhitespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::StringW)>(&::Newtonsoft::Json::JsonWriter::WriteWhitespace)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d173a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 125 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5d17404;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(bool)>(&::Newtonsoft::Json::JsonWriter::Dispose)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5d17478;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 126 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Newtonsoft::Json::JsonWriter*, ::Newtonsoft::Json::Utilities::PrimitiveTypeCode, ::System::Object*)>(
    &::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x1004;
  constexpr static std::size_t addrs = 0x5d1638c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
            { "WriteValue", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::Newtonsoft::Json::Utilities::PrimitiveTypeCode>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.ResolveConvertibleValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IConvertible*, ::by_ref<::Newtonsoft::Json::Utilities::PrimitiveTypeCode>, ::by_ref<::System::Object*>)>(
    &::Newtonsoft::Json::JsonWriter::ResolveConvertibleValue)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x5d13724;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                                                             { "ResolveConvertibleValue",
                                                               {},
                                                               { ::i2c::type_of<::System::IConvertible*>(), ::i2c::type_of<::by_ref<::Newtonsoft::Json::Utilities::PrimitiveTypeCode>>(),
                                                                 ::i2c::type_of<::by_ref<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.CreateUnsupportedTypeException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::JsonWriterException* (*)(::Newtonsoft::Json::JsonWriter*, ::System::Object*)>(
    &::Newtonsoft::Json::JsonWriter::CreateUnsupportedTypeException)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5d138a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                                                             { "CreateUnsupportedTypeException", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.SetWriteState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::JsonToken, ::System::Object*)>(&::Newtonsoft::Json::JsonWriter::SetWriteState)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5d1749c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "SetWriteState", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonToken>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.InternalWriteEnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::JsonContainerType)>(&::Newtonsoft::Json::JsonWriter::InternalWriteEnd)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d145dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "InternalWriteEnd", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonContainerType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.InternalWritePropertyName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::StringW)>(&::Newtonsoft::Json::JsonWriter::InternalWritePropertyName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d14618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "InternalWritePropertyName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.InternalWriteRaw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::InternalWriteRaw)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d154e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "InternalWriteRaw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.InternalWriteStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::JsonToken, ::Newtonsoft::Json::JsonContainerType)>(
    &::Newtonsoft::Json::JsonWriter::InternalWriteStart)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5d14594;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                                                { "InternalWriteStart", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonToken>(), ::i2c::type_of<::Newtonsoft::Json::JsonContainerType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.InternalWriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::JsonToken)>(&::Newtonsoft::Json::JsonWriter::InternalWriteValue)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5d154b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "InternalWriteValue", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.InternalWriteWhitespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::StringW)>(&::Newtonsoft::Json::JsonWriter::InternalWriteWhitespace)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5d173a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "InternalWriteWhitespace", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.InternalWriteComment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::InternalWriteComment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d17398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "InternalWriteComment", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter._InternalWriteEndAsync_g__AwaitProperty_11_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonWriter::*)(::System::Threading::Tasks::Task*, int32_t, ::Newtonsoft::Json::JsonToken,
                                                                                                                             ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonWriter::_InternalWriteEndAsync_g__AwaitProperty_11_0)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5d0e36c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "<InternalWriteEndAsync>g__AwaitProperty|11_0",
                                                                                  {},
                                                                                  { ::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<int32_t>(),
                                                                                    ::i2c::type_of<::Newtonsoft::Json::JsonToken>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter._InternalWriteEndAsync_g__AwaitIndent_11_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonWriter::*)(::System::Threading::Tasks::Task*, int32_t, ::Newtonsoft::Json::JsonToken,
                                                                                                                             ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonWriter::_InternalWriteEndAsync_g__AwaitIndent_11_1)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5d0e448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "<InternalWriteEndAsync>g__AwaitIndent|11_1",
                                                                                  {},
                                                                                  { ::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<int32_t>(),
                                                                                    ::i2c::type_of<::Newtonsoft::Json::JsonToken>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter._InternalWriteEndAsync_g__AwaitEnd_11_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::Newtonsoft::Json::JsonWriter::*)(::System::Threading::Tasks::Task*, int32_t, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonWriter::_InternalWriteEndAsync_g__AwaitEnd_11_2)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5d0e530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                                                { "<InternalWriteEndAsync>g__AwaitEnd|11_2",
                                                  {},
                                                  { ::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter._InternalWriteEndAsync_g__AwaitRemaining_11_3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonWriter::*)(int32_t, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::JsonWriter::_InternalWriteEndAsync_g__AwaitRemaining_11_3)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5d1763c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                                                { "<InternalWriteEndAsync>g__AwaitRemaining|11_3", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::JsonPosition>*& Newtonsoft::Json::JsonWriter::__cordl_internal_get__stack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stack;
}
constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::JsonPosition>* const& Newtonsoft::Json::JsonWriter::__cordl_internal_get__stack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stack;
}
constexpr void Newtonsoft::Json::JsonWriter::__cordl_internal_set__stack(::System::Collections::Generic::List_1<::Newtonsoft::Json::JsonPosition>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____stack = value;
}
constexpr ::Newtonsoft::Json::JsonPosition& Newtonsoft::Json::JsonWriter::__cordl_internal_get__currentPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentPosition;
}
constexpr ::Newtonsoft::Json::JsonPosition const& Newtonsoft::Json::JsonWriter::__cordl_internal_get__currentPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentPosition;
}
constexpr void Newtonsoft::Json::JsonWriter::__cordl_internal_set__currentPosition(::Newtonsoft::Json::JsonPosition value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentPosition = value;
}
constexpr ::Newtonsoft::Json::JsonWriter_State& Newtonsoft::Json::JsonWriter::__cordl_internal_get__currentState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentState;
}
constexpr ::Newtonsoft::Json::JsonWriter_State const& Newtonsoft::Json::JsonWriter::__cordl_internal_get__currentState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentState;
}
constexpr void Newtonsoft::Json::JsonWriter::__cordl_internal_set__currentState(::Newtonsoft::Json::JsonWriter_State value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentState = value;
}
constexpr ::Newtonsoft::Json::Formatting& Newtonsoft::Json::JsonWriter::__cordl_internal_get__formatting() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____formatting;
}
constexpr ::Newtonsoft::Json::Formatting const& Newtonsoft::Json::JsonWriter::__cordl_internal_get__formatting() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____formatting;
}
constexpr void Newtonsoft::Json::JsonWriter::__cordl_internal_set__formatting(::Newtonsoft::Json::Formatting value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____formatting = value;
}
constexpr bool& Newtonsoft::Json::JsonWriter::__cordl_internal_get__CloseOutput_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CloseOutput_k__BackingField;
}
constexpr bool const& Newtonsoft::Json::JsonWriter::__cordl_internal_get__CloseOutput_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CloseOutput_k__BackingField;
}
constexpr void Newtonsoft::Json::JsonWriter::__cordl_internal_set__CloseOutput_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____CloseOutput_k__BackingField = value;
}
constexpr bool& Newtonsoft::Json::JsonWriter::__cordl_internal_get__AutoCompleteOnClose_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AutoCompleteOnClose_k__BackingField;
}
constexpr bool const& Newtonsoft::Json::JsonWriter::__cordl_internal_get__AutoCompleteOnClose_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AutoCompleteOnClose_k__BackingField;
}
constexpr void Newtonsoft::Json::JsonWriter::__cordl_internal_set__AutoCompleteOnClose_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____AutoCompleteOnClose_k__BackingField = value;
}
constexpr ::Newtonsoft::Json::DateFormatHandling& Newtonsoft::Json::JsonWriter::__cordl_internal_get__dateFormatHandling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dateFormatHandling;
}
constexpr ::Newtonsoft::Json::DateFormatHandling const& Newtonsoft::Json::JsonWriter::__cordl_internal_get__dateFormatHandling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dateFormatHandling;
}
constexpr void Newtonsoft::Json::JsonWriter::__cordl_internal_set__dateFormatHandling(::Newtonsoft::Json::DateFormatHandling value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dateFormatHandling = value;
}
constexpr ::Newtonsoft::Json::DateTimeZoneHandling& Newtonsoft::Json::JsonWriter::__cordl_internal_get__dateTimeZoneHandling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dateTimeZoneHandling;
}
constexpr ::Newtonsoft::Json::DateTimeZoneHandling const& Newtonsoft::Json::JsonWriter::__cordl_internal_get__dateTimeZoneHandling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dateTimeZoneHandling;
}
constexpr void Newtonsoft::Json::JsonWriter::__cordl_internal_set__dateTimeZoneHandling(::Newtonsoft::Json::DateTimeZoneHandling value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dateTimeZoneHandling = value;
}
constexpr ::Newtonsoft::Json::StringEscapeHandling& Newtonsoft::Json::JsonWriter::__cordl_internal_get__stringEscapeHandling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stringEscapeHandling;
}
constexpr ::Newtonsoft::Json::StringEscapeHandling const& Newtonsoft::Json::JsonWriter::__cordl_internal_get__stringEscapeHandling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stringEscapeHandling;
}
constexpr void Newtonsoft::Json::JsonWriter::__cordl_internal_set__stringEscapeHandling(::Newtonsoft::Json::StringEscapeHandling value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____stringEscapeHandling = value;
}
constexpr ::Newtonsoft::Json::FloatFormatHandling& Newtonsoft::Json::JsonWriter::__cordl_internal_get__floatFormatHandling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floatFormatHandling;
}
constexpr ::Newtonsoft::Json::FloatFormatHandling const& Newtonsoft::Json::JsonWriter::__cordl_internal_get__floatFormatHandling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floatFormatHandling;
}
constexpr void Newtonsoft::Json::JsonWriter::__cordl_internal_set__floatFormatHandling(::Newtonsoft::Json::FloatFormatHandling value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____floatFormatHandling = value;
}
constexpr ::StringW& Newtonsoft::Json::JsonWriter::__cordl_internal_get__dateFormatString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dateFormatString;
}
constexpr ::StringW const& Newtonsoft::Json::JsonWriter::__cordl_internal_get__dateFormatString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dateFormatString;
}
constexpr void Newtonsoft::Json::JsonWriter::__cordl_internal_set__dateFormatString(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dateFormatString = value;
}
constexpr ::System::Globalization::CultureInfo*& Newtonsoft::Json::JsonWriter::__cordl_internal_get__culture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____culture;
}
constexpr ::System::Globalization::CultureInfo* const& Newtonsoft::Json::JsonWriter::__cordl_internal_get__culture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____culture;
}
constexpr void Newtonsoft::Json::JsonWriter::__cordl_internal_set__culture(::System::Globalization::CultureInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____culture = value;
}
inline void Newtonsoft::Json::JsonWriter::setStaticF_StateArray(::ArrayW<::ArrayW<::Newtonsoft::Json::JsonWriter_State>> value) {
  ::cordl_internals::setStaticField<::ArrayW<::ArrayW<::Newtonsoft::Json::JsonWriter_State>>, "StateArray", ::Newtonsoft::Json::JsonWriter*>(
      std::forward<::ArrayW<::ArrayW<::Newtonsoft::Json::JsonWriter_State>>>(value));
}
inline ::ArrayW<::ArrayW<::Newtonsoft::Json::JsonWriter_State>> Newtonsoft::Json::JsonWriter::getStaticF_StateArray() {
  return ::cordl_internals::getStaticField<::ArrayW<::ArrayW<::Newtonsoft::Json::JsonWriter_State>>, "StateArray", ::Newtonsoft::Json::JsonWriter*>();
}
inline void Newtonsoft::Json::JsonWriter::setStaticF_StateArrayTemplate(::ArrayW<::ArrayW<::Newtonsoft::Json::JsonWriter_State>> value) {
  ::cordl_internals::setStaticField<::ArrayW<::ArrayW<::Newtonsoft::Json::JsonWriter_State>>, "StateArrayTemplate", ::Newtonsoft::Json::JsonWriter*>(
      std::forward<::ArrayW<::ArrayW<::Newtonsoft::Json::JsonWriter_State>>>(value));
}
inline ::ArrayW<::ArrayW<::Newtonsoft::Json::JsonWriter_State>> Newtonsoft::Json::JsonWriter::getStaticF_StateArrayTemplate() {
  return ::cordl_internals::getStaticField<::ArrayW<::ArrayW<::Newtonsoft::Json::JsonWriter_State>>, "StateArrayTemplate", ::Newtonsoft::Json::JsonWriter*>();
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonWriter::AutoCompleteAsync(::Newtonsoft::Json::JsonToken tokenBeingWritten, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                                              { "AutoCompleteAsync", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonToken>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, tokenBeingWritten, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonWriter::AutoCompleteAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "AutoCompleteAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonWriter::CloseAsync(::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonWriter::FlushAsync(::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonWriter::WriteEndAsync(::Newtonsoft::Json::JsonToken token, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, token, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonWriter::WriteIndentAsync(::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonWriter::WriteValueDelimiterAsync(::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonWriter::WriteIndentSpaceAsync(::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonWriter::WriteRawAsync(::StringW json, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, json, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonWriter::WriteEndAsync(::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonWriter::WriteEndInternalAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "WriteEndInternalAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonWriter::InternalWriteEndAsync(::Newtonsoft::Json::JsonContainerType type, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                                              { "InternalWriteEndAsync", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonContainerType>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, type, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonWriter::WriteEndArrayAsync(::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonWriter::WriteEndConstructorAsync(::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonWriter::WriteEndObjectAsync(::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonWriter::WriteNullAsync(::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonWriter::WritePropertyNameAsync(::StringW name, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, name, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonWriter::WritePropertyNameAsync(::StringW name, bool escape, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, name, escape, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonWriter::InternalWritePropertyNameAsync(::StringW name, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                                                           { "InternalWritePropertyNameAsync", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, name, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonWriter::WriteStartArrayAsync(::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonWriter::InternalWriteStartAsync(::Newtonsoft::Json::JsonToken token, ::Newtonsoft::Json::JsonContainerType container,
                                                                                               ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                          { "InternalWriteStartAsync",
                            {},
                            { ::i2c::type_of<::Newtonsoft::Json::JsonToken>(), ::i2c::type_of<::Newtonsoft::Json::JsonContainerType>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, token, container, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonWriter::WriteCommentAsync(::StringW text, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, text, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonWriter::InternalWriteCommentAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "InternalWriteCommentAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonWriter::WriteRawValueAsync(::StringW json, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, json, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonWriter::WriteStartConstructorAsync(::StringW name, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, name, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonWriter::WriteStartObjectAsync(::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonWriter::WriteTokenAsync(::Newtonsoft::Json::JsonReader* reader, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                                              { "WriteTokenAsync", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, reader, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonWriter::WriteTokenAsync(::Newtonsoft::Json::JsonReader* reader, bool writeChildren,
                                                                                       ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                          { "WriteTokenAsync", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, reader, writeChildren, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonWriter::WriteTokenAsync(::Newtonsoft::Json::JsonToken token, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                                                           { "WriteTokenAsync", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonToken>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, token, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonWriter::WriteTokenAsync(::Newtonsoft::Json::JsonToken token, ::System::Object* value,
                                                                                       ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                       { "WriteTokenAsync", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonToken>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, token, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonWriter::WriteTokenAsync(::Newtonsoft::Json::JsonReader* reader, bool writeChildren, bool writeDateConstructorAsDate, bool writeComments,
                                                                                       ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, reader, writeChildren, writeDateConstructorAsDate, writeComments, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonWriter::WriteTokenSyncReadingAsync(::Newtonsoft::Json::JsonReader* reader, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                                              { "WriteTokenSyncReadingAsync", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, reader, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonWriter::WriteConstructorDateAsync(::Newtonsoft::Json::JsonReader* reader, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                                              { "WriteConstructorDateAsync", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, reader, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonWriter::WriteValueAsync(bool value, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonWriter::WriteValueAsync(::System::Nullable_1<bool> value, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonWriter::WriteValueAsync(uint8_t value, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonWriter::WriteValueAsync(::System::Nullable_1<uint8_t> value, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonWriter::WriteValueAsync(::ArrayW<uint8_t> value, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonWriter::WriteValueAsync(char16_t value, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonWriter::WriteValueAsync(::System::Nullable_1<char16_t> value, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonWriter::WriteValueAsync(::System::DateTime value, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonWriter::WriteValueAsync(::System::Nullable_1<::System::DateTime> value, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonWriter::WriteValueAsync(::System::DateTimeOffset value, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonWriter::WriteValueAsync(::System::Nullable_1<::System::DateTimeOffset> value, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonWriter::WriteValueAsync(::System::Decimal value, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 36 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonWriter::WriteValueAsync(::System::Nullable_1<::System::Decimal> value, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 37 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonWriter::WriteValueAsync(double_t value, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 38 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonWriter::WriteValueAsync(::System::Nullable_1<double_t> value, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 39 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonWriter::WriteValueAsync(float_t value, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 40 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonWriter::WriteValueAsync(::System::Nullable_1<float_t> value, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 41 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonWriter::WriteValueAsync(::System::Guid value, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 42 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonWriter::WriteValueAsync(::System::Nullable_1<::System::Guid> value, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 43 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonWriter::WriteValueAsync(int32_t value, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 44 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonWriter::WriteValueAsync(::System::Nullable_1<int32_t> value, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 45 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonWriter::WriteValueAsync(int64_t value, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 46 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonWriter::WriteValueAsync(::System::Nullable_1<int64_t> value, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 47 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonWriter::WriteValueAsync(::System::Object* value, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 48 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonWriter::WriteValueAsync(int8_t value, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 49 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonWriter::WriteValueAsync(::System::Nullable_1<int8_t> value, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 50 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonWriter::WriteValueAsync(int16_t value, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 51 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonWriter::WriteValueAsync(::System::Nullable_1<int16_t> value, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 52 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonWriter::WriteValueAsync(::StringW value, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 53 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonWriter::WriteValueAsync(::System::TimeSpan value, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 54 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonWriter::WriteValueAsync(::System::Nullable_1<::System::TimeSpan> value, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 55 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonWriter::WriteValueAsync(uint32_t value, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 56 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonWriter::WriteValueAsync(::System::Nullable_1<uint32_t> value, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 57 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonWriter::WriteValueAsync(uint64_t value, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 58 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonWriter::WriteValueAsync(::System::Nullable_1<uint64_t> value, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 59 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonWriter::WriteValueAsync(::System::Uri* value, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 60 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonWriter::WriteValueAsync(uint16_t value, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 61 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonWriter::WriteValueAsync(::System::Nullable_1<uint16_t> value, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 62 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonWriter::WriteUndefinedAsync(::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 63 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonWriter::WriteWhitespaceAsync(::StringW ws, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 64 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, ws, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonWriter::InternalWriteValueAsync(::Newtonsoft::Json::JsonToken token, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                                              { "InternalWriteValueAsync", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonToken>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, token, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonWriter::SetWriteStateAsync(::Newtonsoft::Json::JsonToken token, ::System::Object* value,
                                                                                          ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
          { "SetWriteStateAsync", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonToken>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, token, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonWriter::WriteValueAsync(::Newtonsoft::Json::JsonWriter* writer, ::Newtonsoft::Json::Utilities::PrimitiveTypeCode typeCode,
                                                                                       ::System::Object* value, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "WriteValueAsync",
                                                                                {},
                                                                                { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::Newtonsoft::Json::Utilities::PrimitiveTypeCode>(),
                                                                                  ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method, writer, typeCode, value, cancellationToken);
}
inline ::ArrayW<::ArrayW<::Newtonsoft::Json::JsonWriter_State>> Newtonsoft::Json::JsonWriter::BuildStateArray() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "BuildStateArray", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::ArrayW<::Newtonsoft::Json::JsonWriter_State>>>(nullptr, ___internal_method);
}
inline bool Newtonsoft::Json::JsonWriter::get_CloseOutput() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "get_CloseOutput", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::set_CloseOutput(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "set_CloseOutput", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Newtonsoft::Json::JsonWriter::get_AutoCompleteOnClose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "get_AutoCompleteOnClose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::set_AutoCompleteOnClose(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "set_AutoCompleteOnClose", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Newtonsoft::Json::JsonWriter::get_Top() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "get_Top", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Newtonsoft::Json::WriteState Newtonsoft::Json::JsonWriter::get_WriteState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "get_WriteState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::WriteState>(this, ___internal_method);
}
inline ::StringW Newtonsoft::Json::JsonWriter::get_ContainerPath() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "get_ContainerPath", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Newtonsoft::Json::JsonWriter::get_Path() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "get_Path", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Formatting Newtonsoft::Json::JsonWriter::get_Formatting() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "get_Formatting", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Formatting>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::set_Formatting(::Newtonsoft::Json::Formatting value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "set_Formatting", {}, { ::i2c::type_of<::Newtonsoft::Json::Formatting>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::DateFormatHandling Newtonsoft::Json::JsonWriter::get_DateFormatHandling() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "get_DateFormatHandling", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::DateFormatHandling>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::set_DateFormatHandling(::Newtonsoft::Json::DateFormatHandling value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "set_DateFormatHandling", {}, { ::i2c::type_of<::Newtonsoft::Json::DateFormatHandling>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::DateTimeZoneHandling Newtonsoft::Json::JsonWriter::get_DateTimeZoneHandling() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "get_DateTimeZoneHandling", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::DateTimeZoneHandling>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::set_DateTimeZoneHandling(::Newtonsoft::Json::DateTimeZoneHandling value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "set_DateTimeZoneHandling", {}, { ::i2c::type_of<::Newtonsoft::Json::DateTimeZoneHandling>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::StringEscapeHandling Newtonsoft::Json::JsonWriter::get_StringEscapeHandling() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "get_StringEscapeHandling", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::StringEscapeHandling>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::set_StringEscapeHandling(::Newtonsoft::Json::StringEscapeHandling value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "set_StringEscapeHandling", {}, { ::i2c::type_of<::Newtonsoft::Json::StringEscapeHandling>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::OnStringEscapeHandlingChanged() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 65 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Newtonsoft::Json::FloatFormatHandling Newtonsoft::Json::JsonWriter::get_FloatFormatHandling() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "get_FloatFormatHandling", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::FloatFormatHandling>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::set_FloatFormatHandling(::Newtonsoft::Json::FloatFormatHandling value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "set_FloatFormatHandling", {}, { ::i2c::type_of<::Newtonsoft::Json::FloatFormatHandling>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Newtonsoft::Json::JsonWriter::get_DateFormatString() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "get_DateFormatString", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::set_DateFormatString(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "set_DateFormatString", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Globalization::CultureInfo* Newtonsoft::Json::JsonWriter::get_Culture() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "get_Culture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureInfo*>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::set_Culture(::System::Globalization::CultureInfo* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "set_Culture", {}, { ::i2c::type_of<::System::Globalization::CultureInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::UpdateScopeWithFinishedValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "UpdateScopeWithFinishedValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::Push(::Newtonsoft::Json::JsonContainerType value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "Push", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonContainerType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::JsonContainerType Newtonsoft::Json::JsonWriter::Pop() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "Pop", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::JsonContainerType>(this, ___internal_method);
}
inline ::Newtonsoft::Json::JsonContainerType Newtonsoft::Json::JsonWriter::Peek() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "Peek", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::JsonContainerType>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::Flush() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 66 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::Close() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 67 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::WriteStartObject() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 68 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::WriteEndObject() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 69 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::WriteStartArray() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 70 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::WriteEndArray() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 71 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::WriteStartConstructor(::StringW name) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 72 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void Newtonsoft::Json::JsonWriter::WriteEndConstructor() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 73 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::WritePropertyName(::StringW name) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 74 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void Newtonsoft::Json::JsonWriter::WritePropertyName(::StringW name, bool escape) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 75 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, escape);
}
inline void Newtonsoft::Json::JsonWriter::WriteEnd() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 76 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::WriteToken(::Newtonsoft::Json::JsonReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "WriteToken", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
inline void Newtonsoft::Json::JsonWriter::WriteToken(::Newtonsoft::Json::JsonReader* reader, bool writeChildren) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "WriteToken", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, writeChildren);
}
inline void Newtonsoft::Json::JsonWriter::WriteToken(::Newtonsoft::Json::JsonToken token, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "WriteToken", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonToken>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteToken(::Newtonsoft::Json::JsonToken token) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "WriteToken", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonToken>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token);
}
inline void Newtonsoft::Json::JsonWriter::WriteToken(::Newtonsoft::Json::JsonReader* reader, bool writeChildren, bool writeDateConstructorAsDate, bool writeComments) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 77 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, writeChildren, writeDateConstructorAsDate, writeComments);
}
inline bool Newtonsoft::Json::JsonWriter::IsWriteTokenIncomplete(::Newtonsoft::Json::JsonReader* reader, bool writeChildren, int32_t initialDepth) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                                              { "IsWriteTokenIncomplete", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, reader, writeChildren, initialDepth);
}
inline int32_t Newtonsoft::Json::JsonWriter::CalculateWriteTokenInitialDepth(::Newtonsoft::Json::JsonReader* reader) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "CalculateWriteTokenInitialDepth", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, reader);
}
inline int32_t Newtonsoft::Json::JsonWriter::CalculateWriteTokenFinalDepth(::Newtonsoft::Json::JsonReader* reader) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "CalculateWriteTokenFinalDepth", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, reader);
}
inline void Newtonsoft::Json::JsonWriter::WriteConstructorDate(::Newtonsoft::Json::JsonReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "WriteConstructorDate", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
inline void Newtonsoft::Json::JsonWriter::WriteEnd(::Newtonsoft::Json::JsonContainerType type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "WriteEnd", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonContainerType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline void Newtonsoft::Json::JsonWriter::AutoCompleteAll() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "AutoCompleteAll", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Newtonsoft::Json::JsonToken Newtonsoft::Json::JsonWriter::GetCloseTokenForType(::Newtonsoft::Json::JsonContainerType type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "GetCloseTokenForType", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonContainerType>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::JsonToken>(this, ___internal_method, type);
}
inline void Newtonsoft::Json::JsonWriter::AutoCompleteClose(::Newtonsoft::Json::JsonContainerType type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "AutoCompleteClose", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonContainerType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline int32_t Newtonsoft::Json::JsonWriter::CalculateLevelsToComplete(::Newtonsoft::Json::JsonContainerType type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "CalculateLevelsToComplete", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonContainerType>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, type);
}
inline void Newtonsoft::Json::JsonWriter::UpdateCurrentState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "UpdateCurrentState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::WriteEnd(::Newtonsoft::Json::JsonToken token) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 78 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token);
}
inline void Newtonsoft::Json::JsonWriter::WriteIndent() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 79 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::WriteValueDelimiter() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 80 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::WriteIndentSpace() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 81 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::AutoComplete(::Newtonsoft::Json::JsonToken tokenBeingWritten) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "AutoComplete", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonToken>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tokenBeingWritten);
}
inline void Newtonsoft::Json::JsonWriter::WriteNull() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 82 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::WriteUndefined() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 83 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::WriteRaw(::StringW json) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 84 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, json);
}
inline void Newtonsoft::Json::JsonWriter::WriteRawValue(::StringW json) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 85 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, json);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::StringW value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 86 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(int32_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 87 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(uint32_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 88 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(int64_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 89 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(uint64_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 90 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(float_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 91 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(double_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 92 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(bool value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 93 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(int16_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 94 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(uint16_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 95 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(char16_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 96 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(uint8_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 97 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(int8_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 98 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::System::Decimal value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 99 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::System::DateTime value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 100 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::System::DateTimeOffset value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 101 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::System::Guid value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 102 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::System::TimeSpan value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 103 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::System::Nullable_1<int32_t> value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 104 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::System::Nullable_1<uint32_t> value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 105 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::System::Nullable_1<int64_t> value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 106 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::System::Nullable_1<uint64_t> value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 107 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::System::Nullable_1<float_t> value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 108 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::System::Nullable_1<double_t> value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 109 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::System::Nullable_1<bool> value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 110 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::System::Nullable_1<int16_t> value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 111 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::System::Nullable_1<uint16_t> value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 112 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::System::Nullable_1<char16_t> value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 113 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::System::Nullable_1<uint8_t> value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 114 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::System::Nullable_1<int8_t> value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 115 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::System::Nullable_1<::System::Decimal> value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 116 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::System::Nullable_1<::System::DateTime> value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 117 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::System::Nullable_1<::System::DateTimeOffset> value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 118 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::System::Nullable_1<::System::Guid> value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 119 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::System::Nullable_1<::System::TimeSpan> value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 120 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::ArrayW<uint8_t> value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 121 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::System::Uri* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 122 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 123 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteComment(::StringW text) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 124 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void Newtonsoft::Json::JsonWriter::WriteWhitespace(::StringW ws) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 125 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ws);
}
inline void Newtonsoft::Json::JsonWriter::System_IDisposable_Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 126 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::Newtonsoft::Json::JsonWriter* writer, ::Newtonsoft::Json::Utilities::PrimitiveTypeCode typeCode, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
          { "WriteValue", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::Newtonsoft::Json::Utilities::PrimitiveTypeCode>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, typeCode, value);
}
inline void Newtonsoft::Json::JsonWriter::ResolveConvertibleValue(::System::IConvertible* convertible, ::by_ref<::Newtonsoft::Json::Utilities::PrimitiveTypeCode> typeCode,
                                                                  ::by_ref<::System::Object*> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                                                           { "ResolveConvertibleValue",
                                                             {},
                                                             { ::i2c::type_of<::System::IConvertible*>(), ::i2c::type_of<::by_ref<::Newtonsoft::Json::Utilities::PrimitiveTypeCode>>(),
                                                               ::i2c::type_of<::by_ref<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, convertible, typeCode, value);
}
inline ::Newtonsoft::Json::JsonWriterException* Newtonsoft::Json::JsonWriter::CreateUnsupportedTypeException(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                                                           { "CreateUnsupportedTypeException", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::JsonWriterException*>(nullptr, ___internal_method, writer, value);
}
inline void Newtonsoft::Json::JsonWriter::SetWriteState(::Newtonsoft::Json::JsonToken token, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "SetWriteState", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonToken>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token, value);
}
inline void Newtonsoft::Json::JsonWriter::InternalWriteEnd(::Newtonsoft::Json::JsonContainerType container) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "InternalWriteEnd", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonContainerType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container);
}
inline void Newtonsoft::Json::JsonWriter::InternalWritePropertyName(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "InternalWritePropertyName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void Newtonsoft::Json::JsonWriter::InternalWriteRaw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "InternalWriteRaw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::InternalWriteStart(::Newtonsoft::Json::JsonToken token, ::Newtonsoft::Json::JsonContainerType container) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                                              { "InternalWriteStart", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonToken>(), ::i2c::type_of<::Newtonsoft::Json::JsonContainerType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token, container);
}
inline void Newtonsoft::Json::JsonWriter::InternalWriteValue(::Newtonsoft::Json::JsonToken token) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "InternalWriteValue", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonToken>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token);
}
inline void Newtonsoft::Json::JsonWriter::InternalWriteWhitespace(::StringW ws) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "InternalWriteWhitespace", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ws);
}
inline void Newtonsoft::Json::JsonWriter::InternalWriteComment() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "InternalWriteComment", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonWriter::_InternalWriteEndAsync_g__AwaitProperty_11_0(::System::Threading::Tasks::Task* task, int32_t LevelsToComplete,
                                                                                                                    ::Newtonsoft::Json::JsonToken token,
                                                                                                                    ::System::Threading::CancellationToken CancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "<InternalWriteEndAsync>g__AwaitProperty|11_0",
                                                                                {},
                                                                                { ::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<int32_t>(),
                                                                                  ::i2c::type_of<::Newtonsoft::Json::JsonToken>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, task, LevelsToComplete, token, CancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonWriter::_InternalWriteEndAsync_g__AwaitIndent_11_1(::System::Threading::Tasks::Task* task, int32_t LevelsToComplete,
                                                                                                                  ::Newtonsoft::Json::JsonToken token,
                                                                                                                  ::System::Threading::CancellationToken CancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), { "<InternalWriteEndAsync>g__AwaitIndent|11_1",
                                                                                {},
                                                                                { ::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<int32_t>(),
                                                                                  ::i2c::type_of<::Newtonsoft::Json::JsonToken>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, task, LevelsToComplete, token, CancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonWriter::_InternalWriteEndAsync_g__AwaitEnd_11_2(::System::Threading::Tasks::Task* task, int32_t LevelsToComplete,
                                                                                                               ::System::Threading::CancellationToken CancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                                              { "<InternalWriteEndAsync>g__AwaitEnd|11_2",
                                                {},
                                                { ::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, task, LevelsToComplete, CancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonWriter::_InternalWriteEndAsync_g__AwaitRemaining_11_3(int32_t LevelsToComplete,
                                                                                                                     ::System::Threading::CancellationToken CancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                                              { "<InternalWriteEndAsync>g__AwaitRemaining|11_3", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, LevelsToComplete, CancellationToken);
}
inline ::Newtonsoft::Json::JsonWriter* Newtonsoft::Json::JsonWriter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::JsonWriter*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Newtonsoft::Json::JsonWriter::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Newtonsoft::Json::JsonWriter::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonWriter::JsonWriter() {}
