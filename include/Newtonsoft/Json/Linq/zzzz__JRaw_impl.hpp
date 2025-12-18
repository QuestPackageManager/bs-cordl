#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Linq/JRaw.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JRaw__CreateAsync_d__0::*)()>(
    &::Newtonsoft::Json::Linq::JRaw__CreateAsync_d__0::MoveNext)> {
  constexpr static std::size_t size = 0x574;
  constexpr static std::size_t addrs = 0x5bcc264;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JRaw__CreateAsync_d__0>::get(),
                                                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JRaw__CreateAsync_d__0.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JRaw__CreateAsync_d__0::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Newtonsoft::Json::Linq::JRaw__CreateAsync_d__0::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5bcc7d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JRaw__CreateAsync_d__0>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::Linq::JRaw__CreateAsync_d__0::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JRaw__CreateAsync_d__0>::get(),
                                                                             "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JRaw__CreateAsync_d__0::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JRaw__CreateAsync_d__0>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::Linq::JRaw__CreateAsync_d__0::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Newtonsoft::Json::Linq::JRaw__CreateAsync_d__0::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Threading::Tasks::Task_1<::Newtonsoft::Json::Linq::JRaw*>* (*)(::Newtonsoft::Json::JsonReader*, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::Linq::JRaw::CreateAsync)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5bcbdf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JRaw*>::get(), "CreateAsync", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JRaw._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JRaw::*)(::Newtonsoft::Json::Linq::JRaw*)>(&::Newtonsoft::Json::Linq::JRaw::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5bcbee0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JRaw*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JRaw*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JRaw._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Newtonsoft::Json::Linq::JRaw::*)(::Newtonsoft::Json::Linq::JRaw*, ::Newtonsoft::Json::Linq::JsonCloneSettings*)>(&::Newtonsoft::Json::Linq::JRaw::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bcbeec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JRaw*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JRaw*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JsonCloneSettings*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JRaw._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JRaw::*)(::System::Object*)>(&::Newtonsoft::Json::Linq::JRaw::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5bcbef4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JRaw*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JRaw.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JRaw* (*)(::Newtonsoft::Json::JsonReader*)>(&::Newtonsoft::Json::Linq::JRaw::Create)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x5bcbf00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JRaw*>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JRaw.CloneToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (::Newtonsoft::Json::Linq::JRaw::*)(::Newtonsoft::Json::Linq::JsonCloneSettings*)>(
    &::Newtonsoft::Json::Linq::JRaw::CloneToken)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5bcc1f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JRaw*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JRaw*>::get(), 13));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task_1<::Newtonsoft::Json::Linq::JRaw*>* Newtonsoft::Json::Linq::JRaw::CreateAsync(::Newtonsoft::Json::JsonReader* reader,
                                                                                                                      ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JRaw*>::get(), "CreateAsync", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Newtonsoft::Json::Linq::JRaw*>*, false>(nullptr, ___internal_method, reader, cancellationToken);
}
inline void Newtonsoft::Json::Linq::JRaw::_ctor(::Newtonsoft::Json::Linq::JRaw* other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JRaw*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JRaw*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, other);
}
inline void Newtonsoft::Json::Linq::JRaw::_ctor(::Newtonsoft::Json::Linq::JRaw* other, ::Newtonsoft::Json::Linq::JsonCloneSettings* settings) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JRaw*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JRaw*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JsonCloneSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, other, settings);
}
inline void Newtonsoft::Json::Linq::JRaw::_ctor(::System::Object* rawJson) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JRaw*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rawJson);
}
inline ::Newtonsoft::Json::Linq::JRaw* Newtonsoft::Json::Linq::JRaw::Create(::Newtonsoft::Json::JsonReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JRaw*>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JRaw*, false>(nullptr, ___internal_method, reader);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JRaw::CloneToken(::Newtonsoft::Json::Linq::JsonCloneSettings* settings) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JRaw*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*, false>(this, ___internal_method, settings);
}
inline ::Newtonsoft::Json::Linq::JRaw* Newtonsoft::Json::Linq::JRaw::New_ctor(::Newtonsoft::Json::Linq::JRaw* other) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Linq::JRaw*>(other));
}
inline ::Newtonsoft::Json::Linq::JRaw* Newtonsoft::Json::Linq::JRaw::New_ctor(::Newtonsoft::Json::Linq::JRaw* other, ::Newtonsoft::Json::Linq::JsonCloneSettings* settings) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Linq::JRaw*>(other, settings));
}
inline ::Newtonsoft::Json::Linq::JRaw* Newtonsoft::Json::Linq::JRaw::New_ctor(::System::Object* rawJson) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Linq::JRaw*>(rawJson));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Linq::JRaw::JRaw() {}
