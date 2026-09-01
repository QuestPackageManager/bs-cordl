#pragma once
// IWYU pragma private; include "Newtonsoft\Json\Linq\JRaw.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JValue_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JRaw_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JRaw_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JToken_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JsonCloneSettings_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonTextWriter_def.hpp"
#include "System/IO/zzzz__StringWriter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JRaw__CreateAsync_d__0.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JRaw__CreateAsync_d__0::*)()>(&::Newtonsoft::Json::Linq::JRaw__CreateAsync_d__0::MoveNext)> {
  constexpr static std::size_t size = 0x574;
  constexpr static std::size_t addrs = 0x5d7a720;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JRaw__CreateAsync_d__0>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JRaw__CreateAsync_d__0.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JRaw__CreateAsync_d__0::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Newtonsoft::Json::Linq::JRaw__CreateAsync_d__0::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5d7ac94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JRaw__CreateAsync_d__0>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::Linq::JRaw__CreateAsync_d__0::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JRaw__CreateAsync_d__0>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JRaw__CreateAsync_d__0::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JRaw__CreateAsync_d__0>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::Linq::JRaw__CreateAsync_d__0::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Newtonsoft::Json::Linq::JRaw__CreateAsync_d__0::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Newtonsoft::Json::Linq::JRaw*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "reader", ty:
// "::Newtonsoft::Json::JsonReader*", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "_sw_5__2", ty: "::System::IO::StringWriter*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_jsonWriter_5__3", ty: "::Newtonsoft::Json::JsonTextWriter*", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::Linq::JRaw__CreateAsync_d__0::JRaw__CreateAsync_d__0(int32_t __1__state,
                                                                                   ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Newtonsoft::Json::Linq::JRaw*> __t__builder,
                                                                                   ::Newtonsoft::Json::JsonReader* reader, ::System::Threading::CancellationToken cancellationToken,
                                                                                   ::System::IO::StringWriter* _sw_5__2, ::Newtonsoft::Json::JsonTextWriter* _jsonWriter_5__3,
                                                                                   ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->reader = reader;
  this->cancellationToken = cancellationToken;
  this->_sw_5__2 = _sw_5__2;
  this->_jsonWriter_5__3 = _jsonWriter_5__3;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Linq::JRaw__CreateAsync_d__0::JRaw__CreateAsync_d__0() {}
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JRaw.CreateAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<
    ::System::Threading::Tasks::Task_1<::Newtonsoft::Json::Linq::JRaw*>* (*)(::Newtonsoft::Json::JsonReader*, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::Linq::JRaw::CreateAsync)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5d7a2ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JRaw*>(),
                                                             { "CreateAsync", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JRaw._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JRaw::*)(::Newtonsoft::Json::Linq::JRaw*)>(&::Newtonsoft::Json::Linq::JRaw::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d7a39c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JRaw*>(), { ".ctor", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JRaw*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JRaw._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JRaw::*)(::Newtonsoft::Json::Linq::JRaw*, ::Newtonsoft::Json::Linq::JsonCloneSettings*)>(
    &::Newtonsoft::Json::Linq::JRaw::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d7a3a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JRaw*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JRaw*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JsonCloneSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JRaw._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JRaw::*)(::System::Object*)>(&::Newtonsoft::Json::Linq::JRaw::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d7a3b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JRaw*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JRaw.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JRaw* (*)(::Newtonsoft::Json::JsonReader*)>(&::Newtonsoft::Json::Linq::JRaw::Create)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x5d7a3bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JRaw*>(), { "Create", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JRaw.CloneToken
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JToken* (::Newtonsoft::Json::Linq::JRaw::*)(::Newtonsoft::Json::Linq::JsonCloneSettings*)>(
    &::Newtonsoft::Json::Linq::JRaw::CloneToken)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5d7a6b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JRaw*>(), { ::i2c::class_of<::Newtonsoft::Json::Linq::JRaw*>(), 13 }));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task_1<::Newtonsoft::Json::Linq::JRaw*>* Newtonsoft::Json::Linq::JRaw::CreateAsync(::Newtonsoft::Json::JsonReader* reader,
                                                                                                                      ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JRaw*>(),
                                                           { "CreateAsync", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Newtonsoft::Json::Linq::JRaw*>*>(nullptr, ___internal_method, reader, cancellationToken);
}
inline void Newtonsoft::Json::Linq::JRaw::_ctor(::Newtonsoft::Json::Linq::JRaw* other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JRaw*>(), { ".ctor", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JRaw*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void Newtonsoft::Json::Linq::JRaw::_ctor(::Newtonsoft::Json::Linq::JRaw* other, ::Newtonsoft::Json::Linq::JsonCloneSettings* settings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JRaw*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JRaw*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JsonCloneSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other, settings);
}
inline void Newtonsoft::Json::Linq::JRaw::_ctor(::System::Object* rawJson) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JRaw*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rawJson);
}
inline ::Newtonsoft::Json::Linq::JRaw* Newtonsoft::Json::Linq::JRaw::Create(::Newtonsoft::Json::JsonReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JRaw*>(), { "Create", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JRaw*>(nullptr, ___internal_method, reader);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JRaw::CloneToken(::Newtonsoft::Json::Linq::JsonCloneSettings* settings) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Linq::JRaw*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*>(this, ___internal_method, settings);
}
inline ::Newtonsoft::Json::Linq::JRaw* Newtonsoft::Json::Linq::JRaw::New_ctor(::Newtonsoft::Json::Linq::JRaw* other) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Linq::JRaw*>(other));
}
inline ::Newtonsoft::Json::Linq::JRaw* Newtonsoft::Json::Linq::JRaw::New_ctor(::Newtonsoft::Json::Linq::JRaw* other, ::Newtonsoft::Json::Linq::JsonCloneSettings* settings) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Linq::JRaw*>(other, settings));
}
inline ::Newtonsoft::Json::Linq::JRaw* Newtonsoft::Json::Linq::JRaw::New_ctor(::System::Object* rawJson) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Linq::JRaw*>(rawJson));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Linq::JRaw::JRaw() {}
