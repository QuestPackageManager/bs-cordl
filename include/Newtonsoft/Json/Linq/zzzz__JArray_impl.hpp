#pragma once
// IWYU pragma private; include "Newtonsoft\Json\Linq\JArray.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JContainer_impl.hpp"
#include "Newtonsoft/Json/zzzz__JsonConverter_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JArray_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JArray_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JTokenType_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JToken_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JsonCloneSettings_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JsonLoadSettings_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JsonMergeSettings_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonSerializer_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriter_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JArray__LoadAsync_d__2.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JArray__LoadAsync_d__2::*)()>(&::Newtonsoft::Json::Linq::JArray__LoadAsync_d__2::MoveNext)> {
  constexpr static std::size_t size = 0x658;
  constexpr static std::size_t addrs = 0x5d697bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JArray__LoadAsync_d__2>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JArray__LoadAsync_d__2.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JArray__LoadAsync_d__2::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Newtonsoft::Json::Linq::JArray__LoadAsync_d__2::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5d69e14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JArray__LoadAsync_d__2>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::Linq::JArray__LoadAsync_d__2::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JArray__LoadAsync_d__2>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JArray__LoadAsync_d__2::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JArray__LoadAsync_d__2>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::Linq::JArray__LoadAsync_d__2::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Newtonsoft::Json::Linq::JArray__LoadAsync_d__2::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Newtonsoft::Json::Linq::JArray*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "reader", ty:
// "::Newtonsoft::Json::JsonReader*", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "settings", ty: "::Newtonsoft::Json::Linq::JsonLoadSettings*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_a_5__2", ty: "::Newtonsoft::Json::Linq::JArray*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::Linq::JArray__LoadAsync_d__2::JArray__LoadAsync_d__2(int32_t __1__state,
                                                                                   ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Newtonsoft::Json::Linq::JArray*> __t__builder,
                                                                                   ::Newtonsoft::Json::JsonReader* reader, ::System::Threading::CancellationToken cancellationToken,
                                                                                   ::Newtonsoft::Json::Linq::JsonLoadSettings* settings, ::Newtonsoft::Json::Linq::JArray* _a_5__2,
                                                                                   ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__1,
                                                                                   ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->reader = reader;
  this->cancellationToken = cancellationToken;
  this->settings = settings;
  this->_a_5__2 = _a_5__2;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Linq::JArray__LoadAsync_d__2::JArray__LoadAsync_d__2() {}
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JArray__WriteToAsync_d__0.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JArray__WriteToAsync_d__0::*)()>(&::Newtonsoft::Json::Linq::JArray__WriteToAsync_d__0::MoveNext)> {
  constexpr static std::size_t size = 0x3d4;
  constexpr static std::size_t addrs = 0x5d69e94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JArray__WriteToAsync_d__0>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JArray__WriteToAsync_d__0.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JArray__WriteToAsync_d__0::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Newtonsoft::Json::Linq::JArray__WriteToAsync_d__0::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d6a268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JArray__WriteToAsync_d__0>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::Linq::JArray__WriteToAsync_d__0::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JArray__WriteToAsync_d__0>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JArray__WriteToAsync_d__0::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JArray__WriteToAsync_d__0>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::Linq::JArray__WriteToAsync_d__0::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Newtonsoft::Json::Linq::JArray__WriteToAsync_d__0::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "writer", ty: "::Newtonsoft::Json::JsonWriter*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::Newtonsoft::Json::Linq::JArray*", modifiers: "", def_value: Some("{}") }, CppParam { name: "converters", ty: "::ArrayW<::Newtonsoft::Json::JsonConverter*>", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "_i_5__2", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::Linq::JArray__WriteToAsync_d__0::JArray__WriteToAsync_d__0(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                                         ::Newtonsoft::Json::JsonWriter* writer, ::System::Threading::CancellationToken cancellationToken,
                                                                                         ::Newtonsoft::Json::Linq::JArray* __4__this, ::ArrayW<::Newtonsoft::Json::JsonConverter*> converters,
                                                                                         ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1,
                                                                                         int32_t _i_5__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->writer = writer;
  this->cancellationToken = cancellationToken;
  this->__4__this = __4__this;
  this->converters = converters;
  this->__u__1 = __u__1;
  this->_i_5__2 = _i_5__2;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Linq::JArray__WriteToAsync_d__0::JArray__WriteToAsync_d__0() {}
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JArray.WriteToAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::Linq::JArray::*)(::Newtonsoft::Json::JsonWriter*, ::System::Threading::CancellationToken,
                                                                                                                               ::ArrayW<::Newtonsoft::Json::JsonConverter*>)>(
    &::Newtonsoft::Json::Linq::JArray::WriteToAsync)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5d68794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), { ::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JArray.LoadAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Threading::Tasks::Task_1<::Newtonsoft::Json::Linq::JArray*>* (*)(::Newtonsoft::Json::JsonReader*, ::System::Threading::CancellationToken)>(
        &::Newtonsoft::Json::Linq::JArray::LoadAsync)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d68870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(),
                                                             { "LoadAsync", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JArray.LoadAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Threading::Tasks::Task_1<::Newtonsoft::Json::Linq::JArray*>* (*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Linq::JsonLoadSettings*,
                                                                                           ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::Linq::JArray::LoadAsync)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5d6887c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), { "LoadAsync",
                                                                                    {},
                                                                                    { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JsonLoadSettings*>(),
                                                                                      ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JArray.get_ChildrenTokens
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* (::Newtonsoft::Json::Linq::JArray::*)()>(
    &::Newtonsoft::Json::Linq::JArray::get_ChildrenTokens)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d68970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), { ::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), 75 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JArray.get_Type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JTokenType (::Newtonsoft::Json::Linq::JArray::*)()>(&::Newtonsoft::Json::Linq::JArray::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d68978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), { ::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JArray._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JArray::*)()>(&::Newtonsoft::Json::Linq::JArray::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5d68980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JArray._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JArray::*)(::Newtonsoft::Json::Linq::JArray*)>(&::Newtonsoft::Json::Linq::JArray::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5d689fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), { ".ctor", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JArray*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JArray._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JArray::*)(::Newtonsoft::Json::Linq::JArray*, ::Newtonsoft::Json::Linq::JsonCloneSettings*)>(
    &::Newtonsoft::Json::Linq::JArray::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5d68a8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JArray*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JsonCloneSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JArray._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JArray::*)(::ArrayW<::System::Object*>)>(&::Newtonsoft::Json::Linq::JArray::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d68b20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JArray._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JArray::*)(::System::Object*)>(&::Newtonsoft::Json::Linq::JArray::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5d68b24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JArray.DeepEquals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Linq::JArray::*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JArray::DeepEquals)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5d68bc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), { ::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JArray.CloneToken
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JToken* (::Newtonsoft::Json::Linq::JArray::*)(::Newtonsoft::Json::Linq::JsonCloneSettings*)>(
    &::Newtonsoft::Json::Linq::JArray::CloneToken)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d68c64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), { ::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JArray.Load
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JArray* (*)(::Newtonsoft::Json::JsonReader*)>(&::Newtonsoft::Json::Linq::JArray::Load)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d68cd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), { "Load", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JArray.Load
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JArray* (*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Linq::JsonLoadSettings*)>(
    &::Newtonsoft::Json::Linq::JArray::Load)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x5d68cd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(),
                                                             { "Load", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JsonLoadSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JArray.Parse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JArray* (*)(::StringW)>(&::Newtonsoft::Json::Linq::JArray::Parse)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d68e90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), { "Parse", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JArray.Parse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JArray* (*)(::StringW, ::Newtonsoft::Json::Linq::JsonLoadSettings*)>(&::Newtonsoft::Json::Linq::JArray::Parse)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x5d68e98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), { "Parse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JsonLoadSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JArray.FromObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JArray* (*)(::System::Object*)>(&::Newtonsoft::Json::Linq::JArray::FromObject)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d69050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), { "FromObject", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JArray.FromObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JArray* (*)(::System::Object*, ::Newtonsoft::Json::JsonSerializer*)>(&::Newtonsoft::Json::Linq::JArray::FromObject)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5d69070;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(),
                                                             { "FromObject", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Newtonsoft::Json::JsonSerializer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JArray.WriteTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JArray::*)(::Newtonsoft::Json::JsonWriter*, ::ArrayW<::Newtonsoft::Json::JsonConverter*>)>(
    &::Newtonsoft::Json::Linq::JArray::WriteTo)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5d691f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), { ::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JArray.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JToken* (::Newtonsoft::Json::Linq::JArray::*)(::System::Object*)>(&::Newtonsoft::Json::Linq::JArray::get_Item)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5d692d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), { ::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JArray.set_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JArray::*)(::System::Object*, ::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JArray::set_Item)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5d693e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), { ::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JArray.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JToken* (::Newtonsoft::Json::Linq::JArray::*)(int32_t)>(&::Newtonsoft::Json::Linq::JArray::get_Item)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d69500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JArray.set_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JArray::*)(int32_t, ::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JArray::set_Item)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d69510;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(),
                                                                                           { "set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JArray.IndexOfItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Newtonsoft::Json::Linq::JArray::*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JArray::IndexOfItem)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5d69520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), { ::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), 80 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JArray.MergeItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JArray::*)(::System::Object*, ::Newtonsoft::Json::Linq::JsonMergeSettings*)>(
    &::Newtonsoft::Json::Linq::JArray::MergeItem)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5d69594;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), { ::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), 92 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JArray.IndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Newtonsoft::Json::Linq::JArray::*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JArray::IndexOf)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d69688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), { "IndexOf", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JArray.Insert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JArray::*)(int32_t, ::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JArray::Insert)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5d69698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), { "Insert", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JArray.RemoveAt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JArray::*)(int32_t)>(&::Newtonsoft::Json::Linq::JArray::RemoveAt)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d696b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), { "RemoveAt", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JArray.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* (::Newtonsoft::Json::Linq::JArray::*)()>(
    &::Newtonsoft::Json::Linq::JArray::GetEnumerator)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5d696c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), { "GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JArray.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JArray::*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JArray::Add)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d6975c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), { "Add", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JArray.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JArray::*)()>(&::Newtonsoft::Json::Linq::JArray::Clear)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d6976c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JArray.Contains
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Linq::JArray::*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JArray::Contains)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d6977c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), { "Contains", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JArray.CopyTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JArray::*)(::ArrayW<::Newtonsoft::Json::Linq::JToken*>, int32_t)>(&::Newtonsoft::Json::Linq::JArray::CopyTo)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d6978c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), { "CopyTo", {}, { ::i2c::type_of<::ArrayW<::Newtonsoft::Json::Linq::JToken*>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JArray.get_IsReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Linq::JArray::*)()>(&::Newtonsoft::Json::Linq::JArray::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d6979c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), { "get_IsReadOnly", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JArray.Remove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Linq::JArray::*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JArray::Remove)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d697a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), { "Remove", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JArray.GetDeepHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Newtonsoft::Json::Linq::JArray::*)()>(&::Newtonsoft::Json::Linq::JArray::GetDeepHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d697b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), { ::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), 25 }));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JToken*>*& Newtonsoft::Json::Linq::JArray::__cordl_internal_get__values() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____values;
}
constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JToken*>* const& Newtonsoft::Json::Linq::JArray::__cordl_internal_get__values() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____values;
}
constexpr void Newtonsoft::Json::Linq::JArray::__cordl_internal_set__values(::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JToken*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____values = value;
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::Linq::JArray::WriteToAsync(::Newtonsoft::Json::JsonWriter* writer, ::System::Threading::CancellationToken cancellationToken,
                                                                                      ::ArrayW<::Newtonsoft::Json::JsonConverter*> converters) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, writer, cancellationToken, converters);
}
inline ::System::Threading::Tasks::Task_1<::Newtonsoft::Json::Linq::JArray*>* Newtonsoft::Json::Linq::JArray::LoadAsync(::Newtonsoft::Json::JsonReader* reader,
                                                                                                                        ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(),
                                                           { "LoadAsync", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Newtonsoft::Json::Linq::JArray*>*>(nullptr, ___internal_method, reader, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::Newtonsoft::Json::Linq::JArray*>*
Newtonsoft::Json::Linq::JArray::LoadAsync(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Linq::JsonLoadSettings* settings, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), { "LoadAsync",
                                                                                  {},
                                                                                  { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JsonLoadSettings*>(),
                                                                                    ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Newtonsoft::Json::Linq::JArray*>*>(nullptr, ___internal_method, reader, settings, cancellationToken);
}
inline ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* Newtonsoft::Json::Linq::JArray::get_ChildrenTokens() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), 75 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>*>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Linq::JTokenType Newtonsoft::Json::Linq::JArray::get_Type() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JTokenType>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JArray::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JArray::_ctor(::Newtonsoft::Json::Linq::JArray* other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), { ".ctor", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JArray*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void Newtonsoft::Json::Linq::JArray::_ctor(::Newtonsoft::Json::Linq::JArray* other, ::Newtonsoft::Json::Linq::JsonCloneSettings* settings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JArray*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JsonCloneSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other, settings);
}
inline void Newtonsoft::Json::Linq::JArray::_ctor(::ArrayW<::System::Object*> content) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, content);
}
inline void Newtonsoft::Json::Linq::JArray::_ctor(::System::Object* content) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, content);
}
inline bool Newtonsoft::Json::Linq::JArray::DeepEquals(::Newtonsoft::Json::Linq::JToken* node) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, node);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JArray::CloneToken(::Newtonsoft::Json::Linq::JsonCloneSettings* settings) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*>(this, ___internal_method, settings);
}
inline ::Newtonsoft::Json::Linq::JArray* Newtonsoft::Json::Linq::JArray::Load(::Newtonsoft::Json::JsonReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), { "Load", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JArray*>(nullptr, ___internal_method, reader);
}
inline ::Newtonsoft::Json::Linq::JArray* Newtonsoft::Json::Linq::JArray::Load(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Linq::JsonLoadSettings* settings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(),
                                                           { "Load", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JsonLoadSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JArray*>(nullptr, ___internal_method, reader, settings);
}
inline ::Newtonsoft::Json::Linq::JArray* Newtonsoft::Json::Linq::JArray::Parse(::StringW json) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), { "Parse", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JArray*>(nullptr, ___internal_method, json);
}
inline ::Newtonsoft::Json::Linq::JArray* Newtonsoft::Json::Linq::JArray::Parse(::StringW json, ::Newtonsoft::Json::Linq::JsonLoadSettings* settings) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), { "Parse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JsonLoadSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JArray*>(nullptr, ___internal_method, json, settings);
}
inline ::Newtonsoft::Json::Linq::JArray* Newtonsoft::Json::Linq::JArray::FromObject(::System::Object* o) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), { "FromObject", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JArray*>(nullptr, ___internal_method, o);
}
inline ::Newtonsoft::Json::Linq::JArray* Newtonsoft::Json::Linq::JArray::FromObject(::System::Object* o, ::Newtonsoft::Json::JsonSerializer* jsonSerializer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), { "FromObject", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Newtonsoft::Json::JsonSerializer*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JArray*>(nullptr, ___internal_method, o, jsonSerializer);
}
inline void Newtonsoft::Json::Linq::JArray::WriteTo(::Newtonsoft::Json::JsonWriter* writer, ::ArrayW<::Newtonsoft::Json::JsonConverter*> converters) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, converters);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JArray::get_Item(::System::Object* key) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*>(this, ___internal_method, key);
}
inline void Newtonsoft::Json::Linq::JArray::set_Item(::System::Object* key, ::Newtonsoft::Json::Linq::JToken* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JArray::get_Item(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*>(this, ___internal_method, index);
}
inline void Newtonsoft::Json::Linq::JArray::set_Item(int32_t index, ::Newtonsoft::Json::Linq::JToken* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), { "set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline int32_t Newtonsoft::Json::Linq::JArray::IndexOfItem(::Newtonsoft::Json::Linq::JToken* item) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), 80 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, item);
}
inline void Newtonsoft::Json::Linq::JArray::MergeItem(::System::Object* content, ::Newtonsoft::Json::Linq::JsonMergeSettings* settings) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), 92 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, content, settings);
}
inline int32_t Newtonsoft::Json::Linq::JArray::IndexOf(::Newtonsoft::Json::Linq::JToken* item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), { "IndexOf", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, item);
}
inline void Newtonsoft::Json::Linq::JArray::Insert(int32_t index, ::Newtonsoft::Json::Linq::JToken* item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), { "Insert", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, item);
}
inline void Newtonsoft::Json::Linq::JArray::RemoveAt(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), { "RemoveAt", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* Newtonsoft::Json::Linq::JArray::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JArray::Add(::Newtonsoft::Json::Linq::JToken* item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), { "Add", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
inline void Newtonsoft::Json::Linq::JArray::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Newtonsoft::Json::Linq::JArray::Contains(::Newtonsoft::Json::Linq::JToken* item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), { "Contains", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
inline void Newtonsoft::Json::Linq::JArray::CopyTo(::ArrayW<::Newtonsoft::Json::Linq::JToken*> array, int32_t arrayIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), { "CopyTo", {}, { ::i2c::type_of<::ArrayW<::Newtonsoft::Json::Linq::JToken*>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, arrayIndex);
}
inline bool Newtonsoft::Json::Linq::JArray::get_IsReadOnly() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), { "get_IsReadOnly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Newtonsoft::Json::Linq::JArray::Remove(::Newtonsoft::Json::Linq::JToken* item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), { "Remove", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
inline int32_t Newtonsoft::Json::Linq::JArray::GetDeepHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Linq::JArray* Newtonsoft::Json::Linq::JArray::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Linq::JArray*>());
}
inline ::Newtonsoft::Json::Linq::JArray* Newtonsoft::Json::Linq::JArray::New_ctor(::Newtonsoft::Json::Linq::JArray* other) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Linq::JArray*>(other));
}
inline ::Newtonsoft::Json::Linq::JArray* Newtonsoft::Json::Linq::JArray::New_ctor(::Newtonsoft::Json::Linq::JArray* other, ::Newtonsoft::Json::Linq::JsonCloneSettings* settings) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Linq::JArray*>(other, settings));
}
inline ::Newtonsoft::Json::Linq::JArray* Newtonsoft::Json::Linq::JArray::New_ctor(::ArrayW<::System::Object*> content) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Linq::JArray*>(content));
}
inline ::Newtonsoft::Json::Linq::JArray* Newtonsoft::Json::Linq::JArray::New_ctor(::System::Object* content) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Linq::JArray*>(content));
}
/// @brief Convert operator to "::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr Newtonsoft::Json::Linq::JArray::operator ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept {
  return static_cast<::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>*
Newtonsoft::Json::Linq::JArray::i___System__Collections__Generic__IList_1___Newtonsoft__Json__Linq__JToken__() noexcept {
  return static_cast<::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr Newtonsoft::Json::Linq::JArray::operator ::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr ::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>*
Newtonsoft::Json::Linq::JArray::i___System__Collections__Generic__ICollection_1___Newtonsoft__Json__Linq__JToken__() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr Newtonsoft::Json::Linq::JArray::operator ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*
Newtonsoft::Json::Linq::JArray::i___System__Collections__Generic__IEnumerable_1___Newtonsoft__Json__Linq__JToken__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr Newtonsoft::Json::Linq::JArray::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Newtonsoft::Json::Linq::JArray::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Linq::JArray::JArray() {}
