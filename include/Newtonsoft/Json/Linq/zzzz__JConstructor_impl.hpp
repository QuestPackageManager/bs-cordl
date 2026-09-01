#pragma once
// IWYU pragma private; include "Newtonsoft\Json\Linq\JConstructor.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JContainer_impl.hpp"
#include "Newtonsoft/Json/zzzz__JsonConverter_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JConstructor_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JConstructor_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JTokenType_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JToken_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JsonCloneSettings_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JsonLoadSettings_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JsonMergeSettings_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriter_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JConstructor__LoadAsync_d__2.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JConstructor__LoadAsync_d__2::*)()>(&::Newtonsoft::Json::Linq::JConstructor__LoadAsync_d__2::MoveNext)> {
  constexpr static std::size_t size = 0x6a0;
  constexpr static std::size_t addrs = 0x5d6c8cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor__LoadAsync_d__2>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JConstructor__LoadAsync_d__2.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JConstructor__LoadAsync_d__2::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Newtonsoft::Json::Linq::JConstructor__LoadAsync_d__2::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5d6d048;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor__LoadAsync_d__2>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::Linq::JConstructor__LoadAsync_d__2::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor__LoadAsync_d__2>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JConstructor__LoadAsync_d__2::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor__LoadAsync_d__2>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::Linq::JConstructor__LoadAsync_d__2::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Newtonsoft::Json::Linq::JConstructor__LoadAsync_d__2::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Newtonsoft::Json::Linq::JConstructor*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "reader", ty:
// "::Newtonsoft::Json::JsonReader*", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "settings", ty: "::Newtonsoft::Json::Linq::JsonLoadSettings*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_c_5__2", ty: "::Newtonsoft::Json::Linq::JConstructor*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::Linq::JConstructor__LoadAsync_d__2::JConstructor__LoadAsync_d__2(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Newtonsoft::Json::Linq::JConstructor*> __t__builder, ::Newtonsoft::Json::JsonReader* reader,
    ::System::Threading::CancellationToken cancellationToken, ::Newtonsoft::Json::Linq::JsonLoadSettings* settings, ::Newtonsoft::Json::Linq::JConstructor* _c_5__2,
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__1,
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->reader = reader;
  this->cancellationToken = cancellationToken;
  this->settings = settings;
  this->_c_5__2 = _c_5__2;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Linq::JConstructor__LoadAsync_d__2::JConstructor__LoadAsync_d__2() {}
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JConstructor__WriteToAsync_d__0.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JConstructor__WriteToAsync_d__0::*)()>(&::Newtonsoft::Json::Linq::JConstructor__WriteToAsync_d__0::MoveNext)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0x5d6d0c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor__WriteToAsync_d__0>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JConstructor__WriteToAsync_d__0.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JConstructor__WriteToAsync_d__0::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Newtonsoft::Json::Linq::JConstructor__WriteToAsync_d__0::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d6d4c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor__WriteToAsync_d__0>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::Linq::JConstructor__WriteToAsync_d__0::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor__WriteToAsync_d__0>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JConstructor__WriteToAsync_d__0::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor__WriteToAsync_d__0>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::Linq::JConstructor__WriteToAsync_d__0::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Newtonsoft::Json::Linq::JConstructor__WriteToAsync_d__0::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "writer", ty: "::Newtonsoft::Json::JsonWriter*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::Linq::JConstructor*", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "converters", ty: "::ArrayW<::Newtonsoft::Json::JsonConverter*>", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_i_5__2", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::Linq::JConstructor__WriteToAsync_d__0::JConstructor__WriteToAsync_d__0(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                                                     ::Newtonsoft::Json::JsonWriter* writer, ::Newtonsoft::Json::Linq::JConstructor* __4__this,
                                                                                                     ::System::Threading::CancellationToken cancellationToken,
                                                                                                     ::ArrayW<::Newtonsoft::Json::JsonConverter*> converters,
                                                                                                     ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1,
                                                                                                     int32_t _i_5__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->writer = writer;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->converters = converters;
  this->__u__1 = __u__1;
  this->_i_5__2 = _i_5__2;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Linq::JConstructor__WriteToAsync_d__0::JConstructor__WriteToAsync_d__0() {}
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JConstructor.WriteToAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::Newtonsoft::Json::Linq::JConstructor::*)(::Newtonsoft::Json::JsonWriter*, ::System::Threading::CancellationToken, ::ArrayW<::Newtonsoft::Json::JsonConverter*>)>(
    &::Newtonsoft::Json::Linq::JConstructor::WriteToAsync)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5d6a2d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(), { ::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JConstructor.LoadAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Threading::Tasks::Task_1<::Newtonsoft::Json::Linq::JConstructor*>* (*)(::Newtonsoft::Json::JsonReader*, ::System::Threading::CancellationToken)>(
        &::Newtonsoft::Json::Linq::JConstructor::LoadAsync)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d6a3b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(),
                                                             { "LoadAsync", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JConstructor.LoadAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Threading::Tasks::Task_1<::Newtonsoft::Json::Linq::JConstructor*>* (*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Linq::JsonLoadSettings*,
                                                                                                 ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::Linq::JConstructor::LoadAsync)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5d6a3bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(),
                                                             { "LoadAsync",
                                                               {},
                                                               { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JsonLoadSettings*>(),
                                                                 ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JConstructor.get_ChildrenTokens
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* (::Newtonsoft::Json::Linq::JConstructor::*)()>(
    &::Newtonsoft::Json::Linq::JConstructor::get_ChildrenTokens)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d6a4b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(), { ::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(), 75 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JConstructor.IndexOfItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Newtonsoft::Json::Linq::JConstructor::*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JConstructor::IndexOfItem)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5d6a4b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(), { ::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(), 80 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JConstructor.MergeItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JConstructor::*)(::System::Object*, ::Newtonsoft::Json::Linq::JsonMergeSettings*)>(
    &::Newtonsoft::Json::Linq::JConstructor::MergeItem)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5d6a52c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(), { ::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(), 92 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JConstructor.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Linq::JConstructor::*)()>(&::Newtonsoft::Json::Linq::JConstructor::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d6b294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(), { "get_Name", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JConstructor.set_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JConstructor::*)(::StringW)>(&::Newtonsoft::Json::Linq::JConstructor::set_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d6b29c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(), { "set_Name", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JConstructor.get_Type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JTokenType (::Newtonsoft::Json::Linq::JConstructor::*)()>(&::Newtonsoft::Json::Linq::JConstructor::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d6b2a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(), { ::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JConstructor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JConstructor::*)()>(&::Newtonsoft::Json::Linq::JConstructor::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5d6b2ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JConstructor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JConstructor::*)(::Newtonsoft::Json::Linq::JConstructor*)>(&::Newtonsoft::Json::Linq::JConstructor::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5d6b378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(), { ".ctor", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JConstructor*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JConstructor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JConstructor::*)(::Newtonsoft::Json::Linq::JConstructor*, ::Newtonsoft::Json::Linq::JsonCloneSettings*)>(
    &::Newtonsoft::Json::Linq::JConstructor::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5d6b760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JConstructor*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JsonCloneSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JConstructor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JConstructor::*)(::StringW, ::ArrayW<::System::Object*>)>(&::Newtonsoft::Json::Linq::JConstructor::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5d6b804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JConstructor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JConstructor::*)(::StringW, ::System::Object*)>(&::Newtonsoft::Json::Linq::JConstructor::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5d6b838;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JConstructor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JConstructor::*)(::StringW)>(&::Newtonsoft::Json::Linq::JConstructor::_ctor)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5d6b86c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JConstructor.DeepEquals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Linq::JConstructor::*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JConstructor::DeepEquals)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5d6b990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(), { ::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JConstructor.CloneToken
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JToken* (::Newtonsoft::Json::Linq::JConstructor::*)(::Newtonsoft::Json::Linq::JsonCloneSettings*)>(
    &::Newtonsoft::Json::Linq::JConstructor::CloneToken)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d6bd0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(), { ::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JConstructor.WriteTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JConstructor::*)(::Newtonsoft::Json::JsonWriter*, ::ArrayW<::Newtonsoft::Json::JsonConverter*>)>(
    &::Newtonsoft::Json::Linq::JConstructor::WriteTo)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5d6bd78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(), { ::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JConstructor.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JToken* (::Newtonsoft::Json::Linq::JConstructor::*)(::System::Object*)>(
    &::Newtonsoft::Json::Linq::JConstructor::get_Item)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5d6be6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(), { ::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JConstructor.set_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JConstructor::*)(::System::Object*, ::Newtonsoft::Json::Linq::JToken*)>(
    &::Newtonsoft::Json::Linq::JConstructor::set_Item)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5d6bf7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(), { ::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JConstructor.GetDeepHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Newtonsoft::Json::Linq::JConstructor::*)()>(&::Newtonsoft::Json::Linq::JConstructor::GetDeepHashCode)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5d6c094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(), { ::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JConstructor.Load
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JConstructor* (*)(::Newtonsoft::Json::JsonReader*)>(&::Newtonsoft::Json::Linq::JConstructor::Load)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d6c3c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(), { "Load", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JConstructor.Load
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JConstructor* (*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Linq::JsonLoadSettings*)>(
    &::Newtonsoft::Json::Linq::JConstructor::Load)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x5d6c3cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(),
                                                             { "Load", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JsonLoadSettings*>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& Newtonsoft::Json::Linq::JConstructor::__cordl_internal_get__name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name;
}
constexpr ::StringW const& Newtonsoft::Json::Linq::JConstructor::__cordl_internal_get__name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name;
}
constexpr void Newtonsoft::Json::Linq::JConstructor::__cordl_internal_set__name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____name = value;
}
constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JToken*>*& Newtonsoft::Json::Linq::JConstructor::__cordl_internal_get__values() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____values;
}
constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JToken*>* const& Newtonsoft::Json::Linq::JConstructor::__cordl_internal_get__values() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____values;
}
constexpr void Newtonsoft::Json::Linq::JConstructor::__cordl_internal_set__values(::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JToken*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____values = value;
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::Linq::JConstructor::WriteToAsync(::Newtonsoft::Json::JsonWriter* writer, ::System::Threading::CancellationToken cancellationToken,
                                                                                            ::ArrayW<::Newtonsoft::Json::JsonConverter*> converters) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, writer, cancellationToken, converters);
}
inline ::System::Threading::Tasks::Task_1<::Newtonsoft::Json::Linq::JConstructor*>* Newtonsoft::Json::Linq::JConstructor::LoadAsync(::Newtonsoft::Json::JsonReader* reader,
                                                                                                                                    ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(),
                                                           { "LoadAsync", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Newtonsoft::Json::Linq::JConstructor*>*>(nullptr, ___internal_method, reader, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::Newtonsoft::Json::Linq::JConstructor*>* Newtonsoft::Json::Linq::JConstructor::LoadAsync(::Newtonsoft::Json::JsonReader* reader,
                                                                                                                                    ::Newtonsoft::Json::Linq::JsonLoadSettings* settings,
                                                                                                                                    ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(),
                                                           { "LoadAsync",
                                                             {},
                                                             { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JsonLoadSettings*>(),
                                                               ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Newtonsoft::Json::Linq::JConstructor*>*>(nullptr, ___internal_method, reader, settings, cancellationToken);
}
inline ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* Newtonsoft::Json::Linq::JConstructor::get_ChildrenTokens() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(), 75 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>*>(this, ___internal_method);
}
inline int32_t Newtonsoft::Json::Linq::JConstructor::IndexOfItem(::Newtonsoft::Json::Linq::JToken* item) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(), 80 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, item);
}
inline void Newtonsoft::Json::Linq::JConstructor::MergeItem(::System::Object* content, ::Newtonsoft::Json::Linq::JsonMergeSettings* settings) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(), 92 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, content, settings);
}
inline ::StringW Newtonsoft::Json::Linq::JConstructor::get_Name() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(), { "get_Name", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JConstructor::set_Name(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(), { "set_Name", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::Linq::JTokenType Newtonsoft::Json::Linq::JConstructor::get_Type() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JTokenType>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JConstructor::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JConstructor::_ctor(::Newtonsoft::Json::Linq::JConstructor* other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(), { ".ctor", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JConstructor*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void Newtonsoft::Json::Linq::JConstructor::_ctor(::Newtonsoft::Json::Linq::JConstructor* other, ::Newtonsoft::Json::Linq::JsonCloneSettings* settings) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JConstructor*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JsonCloneSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other, settings);
}
inline void Newtonsoft::Json::Linq::JConstructor::_ctor(::StringW name, ::ArrayW<::System::Object*> content) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, content);
}
inline void Newtonsoft::Json::Linq::JConstructor::_ctor(::StringW name, ::System::Object* content) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, content);
}
inline void Newtonsoft::Json::Linq::JConstructor::_ctor(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline bool Newtonsoft::Json::Linq::JConstructor::DeepEquals(::Newtonsoft::Json::Linq::JToken* node) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, node);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JConstructor::CloneToken(::Newtonsoft::Json::Linq::JsonCloneSettings* settings) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*>(this, ___internal_method, settings);
}
inline void Newtonsoft::Json::Linq::JConstructor::WriteTo(::Newtonsoft::Json::JsonWriter* writer, ::ArrayW<::Newtonsoft::Json::JsonConverter*> converters) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, converters);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JConstructor::get_Item(::System::Object* key) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*>(this, ___internal_method, key);
}
inline void Newtonsoft::Json::Linq::JConstructor::set_Item(::System::Object* key, ::Newtonsoft::Json::Linq::JToken* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
inline int32_t Newtonsoft::Json::Linq::JConstructor::GetDeepHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Linq::JConstructor* Newtonsoft::Json::Linq::JConstructor::Load(::Newtonsoft::Json::JsonReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(), { "Load", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JConstructor*>(nullptr, ___internal_method, reader);
}
inline ::Newtonsoft::Json::Linq::JConstructor* Newtonsoft::Json::Linq::JConstructor::Load(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Linq::JsonLoadSettings* settings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(),
                                                           { "Load", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JsonLoadSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JConstructor*>(nullptr, ___internal_method, reader, settings);
}
inline ::Newtonsoft::Json::Linq::JConstructor* Newtonsoft::Json::Linq::JConstructor::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Linq::JConstructor*>());
}
inline ::Newtonsoft::Json::Linq::JConstructor* Newtonsoft::Json::Linq::JConstructor::New_ctor(::Newtonsoft::Json::Linq::JConstructor* other) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Linq::JConstructor*>(other));
}
inline ::Newtonsoft::Json::Linq::JConstructor* Newtonsoft::Json::Linq::JConstructor::New_ctor(::Newtonsoft::Json::Linq::JConstructor* other, ::Newtonsoft::Json::Linq::JsonCloneSettings* settings) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Linq::JConstructor*>(other, settings));
}
inline ::Newtonsoft::Json::Linq::JConstructor* Newtonsoft::Json::Linq::JConstructor::New_ctor(::StringW name, ::ArrayW<::System::Object*> content) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Linq::JConstructor*>(name, content));
}
inline ::Newtonsoft::Json::Linq::JConstructor* Newtonsoft::Json::Linq::JConstructor::New_ctor(::StringW name, ::System::Object* content) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Linq::JConstructor*>(name, content));
}
inline ::Newtonsoft::Json::Linq::JConstructor* Newtonsoft::Json::Linq::JConstructor::New_ctor(::StringW name) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Linq::JConstructor*>(name));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Linq::JConstructor::JConstructor() {}
