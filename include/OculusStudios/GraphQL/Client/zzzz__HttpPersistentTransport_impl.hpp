#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/Client/HttpPersistentTransport.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationTokenRegistration_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__TimeSpan_impl.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__HttpPersistentTransport_def.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLLiveQuery_def.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLRequest_def.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLResponseStream_def.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLResponse_def.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__HttpPersistentTransport_def.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__HttpRequestManager_def.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__IGraphQLClientTransport_def.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__MinimalMainThreadExecutor_def.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__IGraphQLClientEvents_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Diagnostics/zzzz__Stopwatch_def.hpp"
#include "System/IO/zzzz__StreamReader_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/Http/zzzz__HttpRequestMessage_def.hpp"
#include "System/Net/Http/zzzz__HttpResponseMessage_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::HttpPersistentTransport___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::Client::HttpPersistentTransport___c::*)()>(
    &::OculusStudios::GraphQL::Client::HttpPersistentTransport___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d0fb3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::HttpPersistentTransport___c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::HttpPersistentTransport___c._ExecuteAsync_b__15_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::Client::HttpPersistentTransport___c::*)()>(
    &::OculusStudios::GraphQL::Client::HttpPersistentTransport___c::_ExecuteAsync_b__15_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d0fb40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::HttpPersistentTransport___c*>::get(), "<ExecuteAsync>b__15_0",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void OculusStudios::GraphQL::Client::HttpPersistentTransport___c::setStaticF___9(::OculusStudios::GraphQL::Client::HttpPersistentTransport___c* value) {
  ::cordl_internals::setStaticField<::OculusStudios::GraphQL::Client::HttpPersistentTransport___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::HttpPersistentTransport___c*>::get>(
      std::forward<::OculusStudios::GraphQL::Client::HttpPersistentTransport___c*>(value));
}
inline ::OculusStudios::GraphQL::Client::HttpPersistentTransport___c* OculusStudios::GraphQL::Client::HttpPersistentTransport___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::OculusStudios::GraphQL::Client::HttpPersistentTransport___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::HttpPersistentTransport___c*>::get>();
}
inline void OculusStudios::GraphQL::Client::HttpPersistentTransport___c::setStaticF___9__15_0(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "<>9__15_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::HttpPersistentTransport___c*>::get>(
      std::forward<::System::Action*>(value));
}
inline ::System::Action* OculusStudios::GraphQL::Client::HttpPersistentTransport___c::getStaticF___9__15_0() {
  return ::cordl_internals::getStaticField<::System::Action*, "<>9__15_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::HttpPersistentTransport___c*>::get>();
}
inline void OculusStudios::GraphQL::Client::HttpPersistentTransport___c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::HttpPersistentTransport___c*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void OculusStudios::GraphQL::Client::HttpPersistentTransport___c::_ExecuteAsync_b__15_0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::HttpPersistentTransport___c*>::get(), "<ExecuteAsync>b__15_0",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::OculusStudios::GraphQL::Client::HttpPersistentTransport___c* OculusStudios::GraphQL::Client::HttpPersistentTransport___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OculusStudios::GraphQL::Client::HttpPersistentTransport___c*>());
}
// Ctor Parameters []
constexpr ::OculusStudios::GraphQL::Client::HttpPersistentTransport___c::HttpPersistentTransport___c() {}
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_0::*)()>(
    &::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d0fb44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_0*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::OculusStudios::GraphQL::Client::GraphQLResponseStream*& OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_0::__cordl_internal_get_responseStream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___responseStream;
}
constexpr ::OculusStudios::GraphQL::Client::GraphQLResponseStream* const& OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_0::__cordl_internal_get_responseStream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___responseStream;
}
constexpr void OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_0::__cordl_internal_set_responseStream(::OculusStudios::GraphQL::Client::GraphQLResponseStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___responseStream)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_0* OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_0*>());
}
// Ctor Parameters []
constexpr ::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_0::HttpPersistentTransport___c__DisplayClass17_0() {}
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_1._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_1::*)()>(
    &::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_1::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d0fb48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_1*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_1._ReadFromStream_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_1::*)()>(
    &::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_1::_ReadFromStream_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5d0fb4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_1*>::get(),
                                                 "<ReadFromStream>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::IO::StreamReader*& OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_1::__cordl_internal_get_reader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reader;
}
constexpr ::System::IO::StreamReader* const& OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_1::__cordl_internal_get_reader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reader;
}
constexpr void OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_1::__cordl_internal_set_reader(::System::IO::StreamReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___reader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_0*&
OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_1::__cordl_internal_get_CS$__8__locals1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CS$__8__locals1;
}
constexpr ::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_0* const&
OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_1::__cordl_internal_get_CS$__8__locals1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CS$__8__locals1;
}
constexpr void OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_1::__cordl_internal_set_CS$__8__locals1(
    ::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_0* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___CS$__8__locals1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_1::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_1*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_1::_ReadFromStream_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_1*>::get(),
                                               "<ReadFromStream>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_1* OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_1::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_1*>());
}
// Ctor Parameters []
constexpr ::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_1::HttpPersistentTransport___c__DisplayClass17_1() {}
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_2._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_2::*)()>(
    &::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_2::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d0fb68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_2*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_2._ReadFromStream_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_2::*)()>(
    &::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_2::_ReadFromStream_b__1)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5d0fb6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_2*>::get(),
                                                 "<ReadFromStream>b__1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::OculusStudios::GraphQL::Client::GraphQLResponse*& OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_2::__cordl_internal_get_resp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resp;
}
constexpr ::OculusStudios::GraphQL::Client::GraphQLResponse* const& OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_2::__cordl_internal_get_resp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resp;
}
constexpr void OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_2::__cordl_internal_set_resp(::OculusStudios::GraphQL::Client::GraphQLResponse* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___resp)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_1*&
OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_2::__cordl_internal_get_CS$__8__locals2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CS$__8__locals2;
}
constexpr ::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_1* const&
OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_2::__cordl_internal_get_CS$__8__locals2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CS$__8__locals2;
}
constexpr void OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_2::__cordl_internal_set_CS$__8__locals2(
    ::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_1* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___CS$__8__locals2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_2::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_2*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_2::_ReadFromStream_b__1() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_2*>::get(),
                                               "<ReadFromStream>b__1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_2* OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_2::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_2*>());
}
// Ctor Parameters []
constexpr ::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_2::HttpPersistentTransport___c__DisplayClass17_2() {}
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::HttpPersistentTransport__ExecuteAsync_d__15.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::Client::HttpPersistentTransport__ExecuteAsync_d__15::*)()>(
    &::OculusStudios::GraphQL::Client::HttpPersistentTransport__ExecuteAsync_d__15::MoveNext)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x5d0fc58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::HttpPersistentTransport__ExecuteAsync_d__15>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::HttpPersistentTransport__ExecuteAsync_d__15.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::Client::HttpPersistentTransport__ExecuteAsync_d__15::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::OculusStudios::GraphQL::Client::HttpPersistentTransport__ExecuteAsync_d__15::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5d100c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::HttpPersistentTransport__ExecuteAsync_d__15>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void OculusStudios::GraphQL::Client::HttpPersistentTransport__ExecuteAsync_d__15::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::HttpPersistentTransport__ExecuteAsync_d__15>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void OculusStudios::GraphQL::Client::HttpPersistentTransport__ExecuteAsync_d__15::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::HttpPersistentTransport__ExecuteAsync_d__15>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr OculusStudios::GraphQL::Client::HttpPersistentTransport__ExecuteAsync_d__15::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
OculusStudios::GraphQL::Client::HttpPersistentTransport__ExecuteAsync_d__15::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::OculusStudios::GraphQL::Client::GraphQLResponseStream*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "graphQLRequest",
// ty: "::OculusStudios::GraphQL::Client::GraphQLRequest*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::OculusStudios::GraphQL::Client::HttpPersistentTransport*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "MinimalMainThreadExecutor", ty: "::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor*", modifiers: "", def_value: Some("{}") },
// CppParam { name: "_responseStream_5__2", ty: "::OculusStudios::GraphQL::Client::GraphQLResponseStream*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::OculusStudios::GraphQL::Client::HttpPersistentTransport__ExecuteAsync_d__15::HttpPersistentTransport__ExecuteAsync_d__15(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::OculusStudios::GraphQL::Client::GraphQLResponseStream*> __t__builder,
    ::OculusStudios::GraphQL::Client::GraphQLRequest* graphQLRequest, ::OculusStudios::GraphQL::Client::HttpPersistentTransport* __4__this,
    ::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor* MinimalMainThreadExecutor, ::OculusStudios::GraphQL::Client::GraphQLResponseStream* _responseStream_5__2,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->graphQLRequest = graphQLRequest;
  this->__4__this = __4__this;
  this->MinimalMainThreadExecutor = MinimalMainThreadExecutor;
  this->_responseStream_5__2 = _responseStream_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::OculusStudios::GraphQL::Client::HttpPersistentTransport__ExecuteAsync_d__15::HttpPersistentTransport__ExecuteAsync_d__15() {}
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::HttpPersistentTransport__ReadFromStream_d__17.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::Client::HttpPersistentTransport__ReadFromStream_d__17::*)()>(
    &::OculusStudios::GraphQL::Client::HttpPersistentTransport__ReadFromStream_d__17::MoveNext)> {
  constexpr static std::size_t size = 0x13e8;
  constexpr static std::size_t addrs = 0x5d10144;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::HttpPersistentTransport__ReadFromStream_d__17>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::HttpPersistentTransport__ReadFromStream_d__17.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::Client::HttpPersistentTransport__ReadFromStream_d__17::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::OculusStudios::GraphQL::Client::HttpPersistentTransport__ReadFromStream_d__17::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d11534;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::HttpPersistentTransport__ReadFromStream_d__17>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void OculusStudios::GraphQL::Client::HttpPersistentTransport__ReadFromStream_d__17::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::HttpPersistentTransport__ReadFromStream_d__17>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void OculusStudios::GraphQL::Client::HttpPersistentTransport__ReadFromStream_d__17::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::HttpPersistentTransport__ReadFromStream_d__17>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr OculusStudios::GraphQL::Client::HttpPersistentTransport__ReadFromStream_d__17::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
OculusStudios::GraphQL::Client::HttpPersistentTransport__ReadFromStream_d__17::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "responseStream", ty:
// "::OculusStudios::GraphQL::Client::GraphQLResponseStream*", modifiers: "", def_value: Some("{}") }, CppParam { name: "liveQuery", ty: "::OculusStudios::GraphQL::Client::GraphQLLiveQuery*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::OculusStudios::GraphQL::Client::HttpPersistentTransport*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "__8__1", ty: "::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_0*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__8__2", ty:
// "::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_1*", modifiers: "", def_value: Some("{}") }, CppParam { name: "MinimalMainThreadExecutor", ty:
// "::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_buf_5__2", ty: "::ArrayW<char16_t,::Array<char16_t>*>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "_total_len_5__3", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_b_5__4", ty: "::System::Text::StringBuilder*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__7__wrap4", ty: "::OculusStudios::GraphQL::Client::GraphQLLiveQuery*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t,::Array<uint8_t>*>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_stopWatch_5__6", ty:
// "::System::Diagnostics::Stopwatch*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_response_5__7", ty: "::System::Net::Http::HttpResponseMessage*", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage*>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_latency_5__8", ty: "::System::TimeSpan", modifiers: "", def_value: Some("{}") }, CppParam { name: "_body_5__9", ty: "::System::IO::Stream*", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "__u__3", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::IO::Stream*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__7__wrap9", ty:
// "::System::Threading::CancellationTokenRegistration", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__4", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<int32_t>",
// modifiers: "", def_value: Some("{}") }]
constexpr ::OculusStudios::GraphQL::Client::HttpPersistentTransport__ReadFromStream_d__17::HttpPersistentTransport__ReadFromStream_d__17(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::OculusStudios::GraphQL::Client::GraphQLResponseStream* responseStream,
    ::OculusStudios::GraphQL::Client::GraphQLLiveQuery* liveQuery, ::OculusStudios::GraphQL::Client::HttpPersistentTransport* __4__this,
    ::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_0* __8__1, ::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_1* __8__2,
    ::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor* MinimalMainThreadExecutor, ::ArrayW<char16_t, ::Array<char16_t>*> _buf_5__2, int32_t _total_len_5__3,
    ::System::Text::StringBuilder* _b_5__4, ::OculusStudios::GraphQL::Client::GraphQLLiveQuery* __7__wrap4,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t, ::Array<uint8_t>*>> __u__1, ::System::Diagnostics::Stopwatch* _stopWatch_5__6,
    ::System::Net::Http::HttpResponseMessage* _response_5__7, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage*> __u__2, ::System::TimeSpan _latency_5__8,
    ::System::IO::Stream* _body_5__9, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::IO::Stream*> __u__3, ::System::Threading::CancellationTokenRegistration __7__wrap9,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<int32_t> __u__4) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->responseStream = responseStream;
  this->liveQuery = liveQuery;
  this->__4__this = __4__this;
  this->__8__1 = __8__1;
  this->__8__2 = __8__2;
  this->MinimalMainThreadExecutor = MinimalMainThreadExecutor;
  this->_buf_5__2 = _buf_5__2;
  this->_total_len_5__3 = _total_len_5__3;
  this->_b_5__4 = _b_5__4;
  this->__7__wrap4 = __7__wrap4;
  this->__u__1 = __u__1;
  this->_stopWatch_5__6 = _stopWatch_5__6;
  this->_response_5__7 = _response_5__7;
  this->__u__2 = __u__2;
  this->_latency_5__8 = _latency_5__8;
  this->_body_5__9 = _body_5__9;
  this->__u__3 = __u__3;
  this->__7__wrap9 = __7__wrap9;
  this->__u__4 = __u__4;
}
// Ctor Parameters []
constexpr ::OculusStudios::GraphQL::Client::HttpPersistentTransport__ReadFromStream_d__17::HttpPersistentTransport__ReadFromStream_d__17() {}
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::HttpPersistentTransport.get_Endpoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::OculusStudios::GraphQL::Client::HttpPersistentTransport::*)()>(
    &::OculusStudios::GraphQL::Client::HttpPersistentTransport::get_Endpoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d0ee38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::HttpPersistentTransport*>::get(), "get_Endpoint",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::HttpPersistentTransport.set_Endpoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::Client::HttpPersistentTransport::*)(::StringW)>(
    &::OculusStudios::GraphQL::Client::HttpPersistentTransport::set_Endpoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d0ee40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::HttpPersistentTransport*>::get(), "set_Endpoint",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::HttpPersistentTransport.get_AccessToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::OculusStudios::GraphQL::Client::HttpPersistentTransport::*)()>(
    &::OculusStudios::GraphQL::Client::HttpPersistentTransport::get_AccessToken)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d0ee48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::HttpPersistentTransport*>::get(), "get_AccessToken",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::HttpPersistentTransport.set_AccessToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::Client::HttpPersistentTransport::*)(::StringW)>(
    &::OculusStudios::GraphQL::Client::HttpPersistentTransport::set_AccessToken)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d0ee50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::HttpPersistentTransport*>::get(), "set_AccessToken",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::HttpPersistentTransport._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::Client::HttpPersistentTransport::*)(
    ::OculusStudios::GraphQL::ClientInterface::IGraphQLClientEvents*)>(&::OculusStudios::GraphQL::Client::HttpPersistentTransport::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5d0ee58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::HttpPersistentTransport*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::GraphQL::ClientInterface::IGraphQLClientEvents*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::HttpPersistentTransport.ExecuteAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::OculusStudios::GraphQL::Client::GraphQLResponseStream*>* (
    ::OculusStudios::GraphQL::Client::HttpPersistentTransport::*)(::OculusStudios::GraphQL::Client::GraphQLRequest*, ::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor*)>(
    &::OculusStudios::GraphQL::Client::HttpPersistentTransport::ExecuteAsync)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5d0ef98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::HttpPersistentTransport*>::get(), "ExecuteAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::GraphQL::Client::GraphQLRequest*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::HttpPersistentTransport.GetHttpRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Http::HttpRequestMessage* (
    ::OculusStudios::GraphQL::Client::HttpPersistentTransport::*)(::OculusStudios::GraphQL::Client::GraphQLRequest*)>(&::OculusStudios::GraphQL::Client::HttpPersistentTransport::GetHttpRequest)> {
  constexpr static std::size_t size = 0x91c;
  constexpr static std::size_t addrs = 0x5d0f08c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::HttpPersistentTransport*>::get(), "GetHttpRequest", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::GraphQL::Client::GraphQLRequest*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::HttpPersistentTransport.ReadFromStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::Client::HttpPersistentTransport::*)(
    ::OculusStudios::GraphQL::Client::GraphQLLiveQuery*, ::OculusStudios::GraphQL::Client::GraphQLResponseStream*, ::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor*)>(
    &::OculusStudios::GraphQL::Client::HttpPersistentTransport::ReadFromStream)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5d0f9a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::HttpPersistentTransport*>::get(), "ReadFromStream", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::GraphQL::Client::GraphQLLiveQuery*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::GraphQL::Client::GraphQLResponseStream*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::HttpPersistentTransport.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::Client::HttpPersistentTransport::*)()>(
    &::OculusStudios::GraphQL::Client::HttpPersistentTransport::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d0fa70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::HttpPersistentTransport*>::get(), "Dispose",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& OculusStudios::GraphQL::Client::HttpPersistentTransport::__cordl_internal_get__Endpoint_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Endpoint_k__BackingField;
}
constexpr ::StringW const& OculusStudios::GraphQL::Client::HttpPersistentTransport::__cordl_internal_get__Endpoint_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Endpoint_k__BackingField;
}
constexpr void OculusStudios::GraphQL::Client::HttpPersistentTransport::__cordl_internal_set__Endpoint_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Endpoint_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& OculusStudios::GraphQL::Client::HttpPersistentTransport::__cordl_internal_get__AccessToken_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AccessToken_k__BackingField;
}
constexpr ::StringW const& OculusStudios::GraphQL::Client::HttpPersistentTransport::__cordl_internal_get__AccessToken_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AccessToken_k__BackingField;
}
constexpr void OculusStudios::GraphQL::Client::HttpPersistentTransport::__cordl_internal_set__AccessToken_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____AccessToken_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*& OculusStudios::GraphQL::Client::HttpPersistentTransport::__cordl_internal_get_CustomAppHeaders() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CustomAppHeaders;
}
constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* const& OculusStudios::GraphQL::Client::HttpPersistentTransport::__cordl_internal_get_CustomAppHeaders() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CustomAppHeaders;
}
constexpr void OculusStudios::GraphQL::Client::HttpPersistentTransport::__cordl_internal_set_CustomAppHeaders(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___CustomAppHeaders)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::OculusStudios::GraphQL::ClientInterface::IGraphQLClientEvents*& OculusStudios::GraphQL::Client::HttpPersistentTransport::__cordl_internal_get_logger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___logger;
}
constexpr ::OculusStudios::GraphQL::ClientInterface::IGraphQLClientEvents* const& OculusStudios::GraphQL::Client::HttpPersistentTransport::__cordl_internal_get_logger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___logger;
}
constexpr void OculusStudios::GraphQL::Client::HttpPersistentTransport::__cordl_internal_set_logger(::OculusStudios::GraphQL::ClientInterface::IGraphQLClientEvents* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___logger)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::OculusStudios::GraphQL::Client::HttpRequestManager*& OculusStudios::GraphQL::Client::HttpPersistentTransport::__cordl_internal_get_http_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___http_;
}
constexpr ::OculusStudios::GraphQL::Client::HttpRequestManager* const& OculusStudios::GraphQL::Client::HttpPersistentTransport::__cordl_internal_get_http_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___http_;
}
constexpr void OculusStudios::GraphQL::Client::HttpPersistentTransport::__cordl_internal_set_http_(::OculusStudios::GraphQL::Client::HttpRequestManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___http_)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void OculusStudios::GraphQL::Client::HttpPersistentTransport::setStaticF_HeartbeatInterval(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "HeartbeatInterval", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::HttpPersistentTransport*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW OculusStudios::GraphQL::Client::HttpPersistentTransport::getStaticF_HeartbeatInterval() {
  return ::cordl_internals::getStaticField<::StringW, "HeartbeatInterval", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::HttpPersistentTransport*>::get>();
}
inline void OculusStudios::GraphQL::Client::HttpPersistentTransport::setStaticF_HeartbeatCount(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "HeartbeatCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::HttpPersistentTransport*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t OculusStudios::GraphQL::Client::HttpPersistentTransport::getStaticF_HeartbeatCount() {
  return ::cordl_internals::getStaticField<int32_t, "HeartbeatCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::HttpPersistentTransport*>::get>();
}
inline ::StringW OculusStudios::GraphQL::Client::HttpPersistentTransport::get_Endpoint() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::HttpPersistentTransport*>::get(),
                                                                             "get_Endpoint", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void OculusStudios::GraphQL::Client::HttpPersistentTransport::set_Endpoint(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::HttpPersistentTransport*>::get(), "set_Endpoint",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW OculusStudios::GraphQL::Client::HttpPersistentTransport::get_AccessToken() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::HttpPersistentTransport*>::get(),
                                                                             "get_AccessToken", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void OculusStudios::GraphQL::Client::HttpPersistentTransport::set_AccessToken(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::HttpPersistentTransport*>::get(), "set_AccessToken",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void OculusStudios::GraphQL::Client::HttpPersistentTransport::_ctor(::OculusStudios::GraphQL::ClientInterface::IGraphQLClientEvents* logger) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::HttpPersistentTransport*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::GraphQL::ClientInterface::IGraphQLClientEvents*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, logger);
}
inline ::System::Threading::Tasks::Task_1<::OculusStudios::GraphQL::Client::GraphQLResponseStream*>*
OculusStudios::GraphQL::Client::HttpPersistentTransport::ExecuteAsync(::OculusStudios::GraphQL::Client::GraphQLRequest* graphQLRequest,
                                                                      ::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor* MinimalMainThreadExecutor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::HttpPersistentTransport*>::get(), "ExecuteAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::GraphQL::Client::GraphQLRequest*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::OculusStudios::GraphQL::Client::GraphQLResponseStream*>*, false>(this, ___internal_method, graphQLRequest,
                                                                                                                                                   MinimalMainThreadExecutor);
}
inline ::System::Net::Http::HttpRequestMessage* OculusStudios::GraphQL::Client::HttpPersistentTransport::GetHttpRequest(::OculusStudios::GraphQL::Client::GraphQLRequest* graphQLRequest) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::HttpPersistentTransport*>::get(), "GetHttpRequest", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::GraphQL::Client::GraphQLRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Http::HttpRequestMessage*, false>(this, ___internal_method, graphQLRequest);
}
inline void OculusStudios::GraphQL::Client::HttpPersistentTransport::ReadFromStream(::OculusStudios::GraphQL::Client::GraphQLLiveQuery* liveQuery,
                                                                                    ::OculusStudios::GraphQL::Client::GraphQLResponseStream* responseStream,
                                                                                    ::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor* MinimalMainThreadExecutor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::HttpPersistentTransport*>::get(), "ReadFromStream", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::GraphQL::Client::GraphQLLiveQuery*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::GraphQL::Client::GraphQLResponseStream*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, liveQuery, responseStream, MinimalMainThreadExecutor);
}
inline void OculusStudios::GraphQL::Client::HttpPersistentTransport::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::HttpPersistentTransport*>::get(),
                                                                             "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::OculusStudios::GraphQL::Client::HttpPersistentTransport*
OculusStudios::GraphQL::Client::HttpPersistentTransport::New_ctor(::OculusStudios::GraphQL::ClientInterface::IGraphQLClientEvents* logger) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OculusStudios::GraphQL::Client::HttpPersistentTransport*>(logger));
}
/// @brief Convert operator to "::OculusStudios::GraphQL::Client::IGraphQLClientTransport"
constexpr OculusStudios::GraphQL::Client::HttpPersistentTransport::operator ::OculusStudios::GraphQL::Client::IGraphQLClientTransport*() noexcept {
  return static_cast<::OculusStudios::GraphQL::Client::IGraphQLClientTransport*>(static_cast<void*>(this));
}
/// @brief Convert to "::OculusStudios::GraphQL::Client::IGraphQLClientTransport"
constexpr ::OculusStudios::GraphQL::Client::IGraphQLClientTransport* OculusStudios::GraphQL::Client::HttpPersistentTransport::i___OculusStudios__GraphQL__Client__IGraphQLClientTransport() noexcept {
  return static_cast<::OculusStudios::GraphQL::Client::IGraphQLClientTransport*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr OculusStudios::GraphQL::Client::HttpPersistentTransport::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* OculusStudios::GraphQL::Client::HttpPersistentTransport::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::OculusStudios::GraphQL::Client::HttpPersistentTransport::HttpPersistentTransport() {}
