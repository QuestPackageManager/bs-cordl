#pragma once
// IWYU pragma private; include "System\IO\BufferedStream.hpp"
#include "System/IO/zzzz__Stream_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncValueTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncValueTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredValueTaskAwaitable_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredValueTaskAwaitable_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Memory_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__ReadOnlyMemory_1_impl.hpp"
#include "System/IO/zzzz__BufferedStream_def.hpp"
#include "System/IO/zzzz__BufferedStream_def.hpp"
#include "System/IO/zzzz__SeekOrigin_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_1_def.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Threading/zzzz__SemaphoreSlim_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Memory_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ReadOnlyMemory_1_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
//  Writing Method size for method: ::System::IO::BufferedStream___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::BufferedStream___c::*)()>(&::System::IO::BufferedStream___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c0e17c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream___c._LazyEnsureAsyncActiveSemaphoreInitialized_b__10_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::SemaphoreSlim* (::System::IO::BufferedStream___c::*)()>(
    &::System::IO::BufferedStream___c::_LazyEnsureAsyncActiveSemaphoreInitialized_b__10_0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5c0e180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream___c*>(), { "<LazyEnsureAsyncActiveSemaphoreInitialized>b__10_0", {}, {} })));
    return ___internal_method;
  }
};
inline void System::IO::BufferedStream___c::setStaticF___9(::System::IO::BufferedStream___c* value) {
  ::cordl_internals::setStaticField<::System::IO::BufferedStream___c*, "<>9", ::System::IO::BufferedStream___c*>(std::forward<::System::IO::BufferedStream___c*>(value));
}
inline ::System::IO::BufferedStream___c* System::IO::BufferedStream___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::System::IO::BufferedStream___c*, "<>9", ::System::IO::BufferedStream___c*>();
}
inline void System::IO::BufferedStream___c::setStaticF___9__10_0(::System::Func_1<::System::Threading::SemaphoreSlim*>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<::System::Threading::SemaphoreSlim*>*, "<>9__10_0", ::System::IO::BufferedStream___c*>(
      std::forward<::System::Func_1<::System::Threading::SemaphoreSlim*>*>(value));
}
inline ::System::Func_1<::System::Threading::SemaphoreSlim*>* System::IO::BufferedStream___c::getStaticF___9__10_0() {
  return ::cordl_internals::getStaticField<::System::Func_1<::System::Threading::SemaphoreSlim*>*, "<>9__10_0", ::System::IO::BufferedStream___c*>();
}
inline void System::IO::BufferedStream___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::SemaphoreSlim* System::IO::BufferedStream___c::_LazyEnsureAsyncActiveSemaphoreInitialized_b__10_0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream___c*>(), { "<LazyEnsureAsyncActiveSemaphoreInitialized>b__10_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::SemaphoreSlim*>(this, ___internal_method);
}
inline ::System::IO::BufferedStream___c* System::IO::BufferedStream___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::BufferedStream___c*>());
}
// Ctor Parameters []
constexpr ::System::IO::BufferedStream___c::BufferedStream___c() {}
//  Writing Method size for method: ::System::IO::BufferedStream__DisposeAsync_d__34.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::BufferedStream__DisposeAsync_d__34::*)()>(&::System::IO::BufferedStream__DisposeAsync_d__34::MoveNext)> {
  constexpr static std::size_t size = 0x460;
  constexpr static std::size_t addrs = 0x5c0e1e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream__DisposeAsync_d__34>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream__DisposeAsync_d__34.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::BufferedStream__DisposeAsync_d__34::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::System::IO::BufferedStream__DisposeAsync_d__34::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c0e6a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream__DisposeAsync_d__34>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void System::IO::BufferedStream__DisposeAsync_d__34::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream__DisposeAsync_d__34>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void System::IO::BufferedStream__DisposeAsync_d__34::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream__DisposeAsync_d__34>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr System::IO::BufferedStream__DisposeAsync_d__34::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* System::IO::BufferedStream__DisposeAsync_d__34::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::IO::BufferedStream*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__7__wrap1", ty: "::System::Object*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__7__wrap2", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2",
// ty: "::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::System::IO::BufferedStream__DisposeAsync_d__34::BufferedStream__DisposeAsync_d__34(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder __t__builder, ::System::IO::BufferedStream* __4__this, ::System::Object* __7__wrap1, int32_t __7__wrap2,
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1,
    ::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__7__wrap1 = __7__wrap1;
  this->__7__wrap2 = __7__wrap2;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::System::IO::BufferedStream__DisposeAsync_d__34::BufferedStream__DisposeAsync_d__34() {}
//  Writing Method size for method: ::System::IO::BufferedStream__FlushAsyncInternal_d__38.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::BufferedStream__FlushAsyncInternal_d__38::*)()>(&::System::IO::BufferedStream__FlushAsyncInternal_d__38::MoveNext)> {
  constexpr static std::size_t size = 0x59c;
  constexpr static std::size_t addrs = 0x5c0e6b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream__FlushAsyncInternal_d__38>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream__FlushAsyncInternal_d__38.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::BufferedStream__FlushAsyncInternal_d__38::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::System::IO::BufferedStream__FlushAsyncInternal_d__38::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5c0ec50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream__FlushAsyncInternal_d__38>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void System::IO::BufferedStream__FlushAsyncInternal_d__38::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream__FlushAsyncInternal_d__38>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void System::IO::BufferedStream__FlushAsyncInternal_d__38::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream__FlushAsyncInternal_d__38>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr System::IO::BufferedStream__FlushAsyncInternal_d__38::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* System::IO::BufferedStream__FlushAsyncInternal_d__38::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::IO::BufferedStream*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_sem_5__2", ty:
// "::System::Threading::SemaphoreSlim*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter",
// modifiers: "", def_value: Some("{}") }]
constexpr ::System::IO::BufferedStream__FlushAsyncInternal_d__38::BufferedStream__FlushAsyncInternal_d__38(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::IO::BufferedStream* __4__this, ::System::Threading::CancellationToken cancellationToken,
    ::System::Threading::SemaphoreSlim* _sem_5__2, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->_sem_5__2 = _sem_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::System::IO::BufferedStream__FlushAsyncInternal_d__38::BufferedStream__FlushAsyncInternal_d__38() {}
//  Writing Method size for method: ::System::IO::BufferedStream__FlushWriteAsync_d__42.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::BufferedStream__FlushWriteAsync_d__42::*)()>(&::System::IO::BufferedStream__FlushWriteAsync_d__42::MoveNext)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x5c0ecbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream__FlushWriteAsync_d__42>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream__FlushWriteAsync_d__42.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::BufferedStream__FlushWriteAsync_d__42::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::System::IO::BufferedStream__FlushWriteAsync_d__42::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5c0f014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream__FlushWriteAsync_d__42>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void System::IO::BufferedStream__FlushWriteAsync_d__42::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream__FlushWriteAsync_d__42>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void System::IO::BufferedStream__FlushWriteAsync_d__42::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream__FlushWriteAsync_d__42>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr System::IO::BufferedStream__FlushWriteAsync_d__42::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* System::IO::BufferedStream__FlushWriteAsync_d__42::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::IO::BufferedStream*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::System::IO::BufferedStream__FlushWriteAsync_d__42::BufferedStream__FlushWriteAsync_d__42(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::IO::BufferedStream* __4__this, ::System::Threading::CancellationToken cancellationToken,
    ::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter __u__1,
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::System::IO::BufferedStream__FlushWriteAsync_d__42::BufferedStream__FlushWriteAsync_d__42() {}
//  Writing Method size for method: ::System::IO::BufferedStream__ReadFromUnderlyingStreamAsync_d__51.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::BufferedStream__ReadFromUnderlyingStreamAsync_d__51::*)()>(
    &::System::IO::BufferedStream__ReadFromUnderlyingStreamAsync_d__51::MoveNext)> {
  constexpr static std::size_t size = 0x800;
  constexpr static std::size_t addrs = 0x5c0f080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream__ReadFromUnderlyingStreamAsync_d__51>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream__ReadFromUnderlyingStreamAsync_d__51.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::BufferedStream__ReadFromUnderlyingStreamAsync_d__51::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::System::IO::BufferedStream__ReadFromUnderlyingStreamAsync_d__51::SetStateMachine)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5c0f880;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream__ReadFromUnderlyingStreamAsync_d__51>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void System::IO::BufferedStream__ReadFromUnderlyingStreamAsync_d__51::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream__ReadFromUnderlyingStreamAsync_d__51>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void System::IO::BufferedStream__ReadFromUnderlyingStreamAsync_d__51::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream__ReadFromUnderlyingStreamAsync_d__51>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr System::IO::BufferedStream__ReadFromUnderlyingStreamAsync_d__51::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* System::IO::BufferedStream__ReadFromUnderlyingStreamAsync_d__51::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "semaphoreLockTask", ty: "::System::Threading::Tasks::Task*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::IO::BufferedStream*", modifiers: "", def_value: Some("{}") }, CppParam { name: "buffer", ty:
// "::System::Memory_1<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "bytesAlreadySatisfied", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__7__wrap1", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_1_ConfiguredValueTaskAwaiter<int32_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::System::IO::BufferedStream__ReadFromUnderlyingStreamAsync_d__51::BufferedStream__ReadFromUnderlyingStreamAsync_d__51(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t> __t__builder, ::System::Threading::Tasks::Task* semaphoreLockTask,
    ::System::IO::BufferedStream* __4__this, ::System::Memory_1<uint8_t> buffer, int32_t bytesAlreadySatisfied, ::System::Threading::CancellationToken cancellationToken,
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1, int32_t __7__wrap1,
    ::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_1_ConfiguredValueTaskAwaiter<int32_t> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->semaphoreLockTask = semaphoreLockTask;
  this->__4__this = __4__this;
  this->buffer = buffer;
  this->bytesAlreadySatisfied = bytesAlreadySatisfied;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
  this->__7__wrap1 = __7__wrap1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::System::IO::BufferedStream__ReadFromUnderlyingStreamAsync_d__51::BufferedStream__ReadFromUnderlyingStreamAsync_d__51() {}
//  Writing Method size for method: ::System::IO::BufferedStream__WriteToUnderlyingStreamAsync_d__63.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::BufferedStream__WriteToUnderlyingStreamAsync_d__63::*)()>(
    &::System::IO::BufferedStream__WriteToUnderlyingStreamAsync_d__63::MoveNext)> {
  constexpr static std::size_t size = 0xa64;
  constexpr static std::size_t addrs = 0x5c0f8dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream__WriteToUnderlyingStreamAsync_d__63>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream__WriteToUnderlyingStreamAsync_d__63.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::BufferedStream__WriteToUnderlyingStreamAsync_d__63::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::System::IO::BufferedStream__WriteToUnderlyingStreamAsync_d__63::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5c10340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream__WriteToUnderlyingStreamAsync_d__63>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void System::IO::BufferedStream__WriteToUnderlyingStreamAsync_d__63::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream__WriteToUnderlyingStreamAsync_d__63>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void System::IO::BufferedStream__WriteToUnderlyingStreamAsync_d__63::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream__WriteToUnderlyingStreamAsync_d__63>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr System::IO::BufferedStream__WriteToUnderlyingStreamAsync_d__63::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* System::IO::BufferedStream__WriteToUnderlyingStreamAsync_d__63::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "semaphoreLockTask", ty: "::System::Threading::Tasks::Task*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::IO::BufferedStream*", modifiers: "", def_value: Some("{}") }, CppParam { name: "buffer", ty:
// "::System::ReadOnlyMemory_1<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2",
// ty: "::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::System::IO::BufferedStream__WriteToUnderlyingStreamAsync_d__63::BufferedStream__WriteToUnderlyingStreamAsync_d__63(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Threading::Tasks::Task* semaphoreLockTask, ::System::IO::BufferedStream* __4__this,
    ::System::ReadOnlyMemory_1<uint8_t> buffer, ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1,
    ::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->semaphoreLockTask = semaphoreLockTask;
  this->__4__this = __4__this;
  this->buffer = buffer;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::System::IO::BufferedStream__WriteToUnderlyingStreamAsync_d__63::BufferedStream__WriteToUnderlyingStreamAsync_d__63() {}
//  Writing Method size for method: ::System::IO::BufferedStream__CopyToAsyncCore_d__71.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::BufferedStream__CopyToAsyncCore_d__71::*)()>(&::System::IO::BufferedStream__CopyToAsyncCore_d__71::MoveNext)> {
  constexpr static std::size_t size = 0x5a0;
  constexpr static std::size_t addrs = 0x5c103ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream__CopyToAsyncCore_d__71>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream__CopyToAsyncCore_d__71.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::BufferedStream__CopyToAsyncCore_d__71::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::System::IO::BufferedStream__CopyToAsyncCore_d__71::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5c1094c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream__CopyToAsyncCore_d__71>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void System::IO::BufferedStream__CopyToAsyncCore_d__71::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream__CopyToAsyncCore_d__71>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void System::IO::BufferedStream__CopyToAsyncCore_d__71::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream__CopyToAsyncCore_d__71>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr System::IO::BufferedStream__CopyToAsyncCore_d__71::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* System::IO::BufferedStream__CopyToAsyncCore_d__71::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::IO::BufferedStream*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "destination", ty: "::System::IO::Stream*", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "bufferSize", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1",
// ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::System::IO::BufferedStream__CopyToAsyncCore_d__71::BufferedStream__CopyToAsyncCore_d__71(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::IO::BufferedStream* __4__this, ::System::IO::Stream* destination,
    ::System::Threading::CancellationToken cancellationToken, int32_t bufferSize, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1,
    ::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->destination = destination;
  this->cancellationToken = cancellationToken;
  this->bufferSize = bufferSize;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::System::IO::BufferedStream__CopyToAsyncCore_d__71::BufferedStream__CopyToAsyncCore_d__71() {}
//  Writing Method size for method: ::System::IO::BufferedStream.LazyEnsureAsyncActiveSemaphoreInitialized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::SemaphoreSlim* (::System::IO::BufferedStream::*)()>(
    &::System::IO::BufferedStream::LazyEnsureAsyncActiveSemaphoreInitialized)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5c0af5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream*>(), { "LazyEnsureAsyncActiveSemaphoreInitialized", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::BufferedStream::*)(::System::IO::Stream*)>(&::System::IO::BufferedStream::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c0b05c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::BufferedStream::*)(::System::IO::Stream*, int32_t)>(&::System::IO::BufferedStream::_ctor)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x5c0b064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.EnsureNotClosed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::BufferedStream::*)()>(&::System::IO::BufferedStream::EnsureNotClosed)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5c0b230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream*>(), { "EnsureNotClosed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.EnsureCanSeek
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::BufferedStream::*)()>(&::System::IO::BufferedStream::EnsureCanSeek)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5c0b28c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream*>(), { "EnsureCanSeek", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.EnsureCanRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::BufferedStream::*)()>(&::System::IO::BufferedStream::EnsureCanRead)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5c0b2fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream*>(), { "EnsureCanRead", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.EnsureCanWrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::BufferedStream::*)()>(&::System::IO::BufferedStream::EnsureCanWrite)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5c0b36c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream*>(), { "EnsureCanWrite", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.EnsureShadowBufferAllocated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::BufferedStream::*)()>(&::System::IO::BufferedStream::EnsureShadowBufferAllocated)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5c0b3dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream*>(), { "EnsureShadowBufferAllocated", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.EnsureBufferAllocated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::BufferedStream::*)()>(&::System::IO::BufferedStream::EnsureBufferAllocated)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5c0b4b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream*>(), { "EnsureBufferAllocated", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.get_CanRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::IO::BufferedStream::*)()>(&::System::IO::BufferedStream::get_CanRead)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5c0b50c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream*>(), { ::i2c::class_of<::System::IO::BufferedStream*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.get_CanWrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::IO::BufferedStream::*)()>(&::System::IO::BufferedStream::get_CanWrite)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5c0b524;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream*>(), { ::i2c::class_of<::System::IO::BufferedStream*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.get_CanSeek
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::IO::BufferedStream::*)()>(&::System::IO::BufferedStream::get_CanSeek)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5c0b53c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream*>(), { ::i2c::class_of<::System::IO::BufferedStream*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.get_Length
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::IO::BufferedStream::*)()>(&::System::IO::BufferedStream::get_Length)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5c0b554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream*>(), { ::i2c::class_of<::System::IO::BufferedStream*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.get_Position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::IO::BufferedStream::*)()>(&::System::IO::BufferedStream::get_Position)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5c0b5e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream*>(), { ::i2c::class_of<::System::IO::BufferedStream*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.set_Position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::BufferedStream::*)(int64_t)>(&::System::IO::BufferedStream::set_Position)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5c0b62c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream*>(), { ::i2c::class_of<::System::IO::BufferedStream*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.DisposeAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::ValueTask (::System::IO::BufferedStream::*)()>(&::System::IO::BufferedStream::DisposeAsync)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5c0b6ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream*>(), { ::i2c::class_of<::System::IO::BufferedStream*>(), 41 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::BufferedStream::*)(bool)>(&::System::IO::BufferedStream::Dispose)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5c0b7c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream*>(), { ::i2c::class_of<::System::IO::BufferedStream*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.Flush
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::BufferedStream::*)()>(&::System::IO::BufferedStream::Flush)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5c0b8e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream*>(), { ::i2c::class_of<::System::IO::BufferedStream*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.FlushAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::IO::BufferedStream::*)(::System::Threading::CancellationToken)>(
    &::System::IO::BufferedStream::FlushAsync)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5c0b9e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream*>(), { ::i2c::class_of<::System::IO::BufferedStream*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.FlushAsyncInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::IO::BufferedStream::*)(::System::Threading::CancellationToken)>(
    &::System::IO::BufferedStream::FlushAsyncInternal)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5c0bacc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream*>(), { "FlushAsyncInternal", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.FlushRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::BufferedStream::*)()>(&::System::IO::BufferedStream::FlushRead)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5c0b9a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream*>(), { "FlushRead", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.ClearReadBufferBeforeWrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::BufferedStream::*)()>(&::System::IO::BufferedStream::ClearReadBufferBeforeWrite)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5c0bb90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream*>(), { "ClearReadBufferBeforeWrite", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.FlushWrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::BufferedStream::*)()>(&::System::IO::BufferedStream::FlushWrite)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5c0b590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream*>(), { "FlushWrite", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.FlushWriteAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::IO::BufferedStream::*)(::System::Threading::CancellationToken)>(
    &::System::IO::BufferedStream::FlushWriteAsync)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5c0bc20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream*>(), { "FlushWriteAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.ReadFromBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::IO::BufferedStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::IO::BufferedStream::ReadFromBuffer)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5c0bce4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream*>(),
                                                             { "ReadFromBuffer", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.ReadFromBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::IO::BufferedStream::*)(::System::Span_1<uint8_t>)>(&::System::IO::BufferedStream::ReadFromBuffer)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5c0bd48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream*>(), { "ReadFromBuffer", {}, { ::i2c::type_of<::System::Span_1<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.ReadFromBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::IO::BufferedStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::by_ref<::System::Exception*>)>(
    &::System::IO::BufferedStream::ReadFromBuffer)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5c0be68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::IO::BufferedStream*>(),
                         { "ReadFromBuffer", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::System::Exception*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::IO::BufferedStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::IO::BufferedStream::Read)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x5c0bf08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream*>(), { ::i2c::class_of<::System::IO::BufferedStream*>(), 35 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::IO::BufferedStream::*)(::System::Span_1<uint8_t>)>(&::System::IO::BufferedStream::Read)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5c0c120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream*>(), { ::i2c::class_of<::System::IO::BufferedStream*>(), 36 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.LastSyncCompletedReadTask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<int32_t>* (::System::IO::BufferedStream::*)(int32_t)>(
    &::System::IO::BufferedStream::LastSyncCompletedReadTask)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5c0c290;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream*>(), { "LastSyncCompletedReadTask", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.ReadAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<int32_t>* (
    ::System::IO::BufferedStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Threading::CancellationToken)>(&::System::IO::BufferedStream::ReadAsync)> {
  constexpr static std::size_t size = 0x448;
  constexpr static std::size_t addrs = 0x5c0c374;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream*>(), { ::i2c::class_of<::System::IO::BufferedStream*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.ReadAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::ValueTask_1<int32_t> (::System::IO::BufferedStream::*)(
    ::System::Memory_1<uint8_t>, ::System::Threading::CancellationToken)>(&::System::IO::BufferedStream::ReadAsync)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x5c0c904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream*>(), { ::i2c::class_of<::System::IO::BufferedStream*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.ReadFromUnderlyingStreamAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::ValueTask_1<int32_t> (::System::IO::BufferedStream::*)(
    ::System::Memory_1<uint8_t>, ::System::Threading::CancellationToken, int32_t, ::System::Threading::Tasks::Task*)>(&::System::IO::BufferedStream::ReadFromUnderlyingStreamAsync)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5c0c7bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream*>(), { "ReadFromUnderlyingStreamAsync",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Memory_1<uint8_t>>(), ::i2c::type_of<::System::Threading::CancellationToken>(),
                                                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Threading::Tasks::Task*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.BeginRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::System::IO::BufferedStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::System::IO::BufferedStream::BeginRead)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5c0cc54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream*>(), { ::i2c::class_of<::System::IO::BufferedStream*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.EndRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::IO::BufferedStream::*)(::System::IAsyncResult*)>(&::System::IO::BufferedStream::EndRead)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5c0cd04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream*>(), { ::i2c::class_of<::System::IO::BufferedStream*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.ReadByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::IO::BufferedStream::*)()>(&::System::IO::BufferedStream::ReadByte)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5c0cd50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream*>(), { ::i2c::class_of<::System::IO::BufferedStream*>(), 37 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.ReadByteSlow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::IO::BufferedStream::*)()>(&::System::IO::BufferedStream::ReadByteSlow)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5c0cda0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream*>(), { "ReadByteSlow", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.WriteToBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::BufferedStream::*)(::ArrayW<uint8_t>, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::System::IO::BufferedStream::WriteToBuffer)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5c0ce30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream*>(),
                                                { "WriteToBuffer", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.WriteToBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::IO::BufferedStream::*)(::System::ReadOnlySpan_1<uint8_t>)>(&::System::IO::BufferedStream::WriteToBuffer)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5c0cf08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream*>(), { "WriteToBuffer", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::BufferedStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::IO::BufferedStream::Write)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x5c0d064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream*>(), { ::i2c::class_of<::System::IO::BufferedStream*>(), 38 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::BufferedStream::*)(::System::ReadOnlySpan_1<uint8_t>)>(&::System::IO::BufferedStream::Write)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x5c0d378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream*>(), { ::i2c::class_of<::System::IO::BufferedStream*>(), 39 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.WriteAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::System::IO::BufferedStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Threading::CancellationToken)>(&::System::IO::BufferedStream::WriteAsync)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x5c0d62c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream*>(), { ::i2c::class_of<::System::IO::BufferedStream*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.WriteAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::ValueTask (::System::IO::BufferedStream::*)(
    ::System::ReadOnlyMemory_1<uint8_t>, ::System::Threading::CancellationToken)>(&::System::IO::BufferedStream::WriteAsync)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x5c0d818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream*>(), { ::i2c::class_of<::System::IO::BufferedStream*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.WriteToUnderlyingStreamAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Threading::Tasks::Task* (::System::IO::BufferedStream::*)(::System::ReadOnlyMemory_1<uint8_t>, ::System::Threading::CancellationToken, ::System::Threading::Tasks::Task*)>(
        &::System::IO::BufferedStream::WriteToUnderlyingStreamAsync)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5c0daa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream*>(), { "WriteToUnderlyingStreamAsync",
                                                                                {},
                                                                                { ::i2c::type_of<::System::ReadOnlyMemory_1<uint8_t>>(), ::i2c::type_of<::System::Threading::CancellationToken>(),
                                                                                  ::i2c::type_of<::System::Threading::Tasks::Task*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.BeginWrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::System::IO::BufferedStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::System::IO::BufferedStream::BeginWrite)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5c0db84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream*>(), { ::i2c::class_of<::System::IO::BufferedStream*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.EndWrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::BufferedStream::*)(::System::IAsyncResult*)>(&::System::IO::BufferedStream::EndWrite)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c0dc34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream*>(), { ::i2c::class_of<::System::IO::BufferedStream*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.WriteByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::BufferedStream::*)(uint8_t)>(&::System::IO::BufferedStream::WriteByte)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5c0dc40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream*>(), { ::i2c::class_of<::System::IO::BufferedStream*>(), 40 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.Seek
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::IO::BufferedStream::*)(int64_t, ::System::IO::SeekOrigin)>(&::System::IO::BufferedStream::Seek)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5c0dccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream*>(), { ::i2c::class_of<::System::IO::BufferedStream*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.SetLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::BufferedStream::*)(int64_t)>(&::System::IO::BufferedStream::SetLength)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5c0ddf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream*>(), { ::i2c::class_of<::System::IO::BufferedStream*>(), 34 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.CopyTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::BufferedStream::*)(::System::IO::Stream*, int32_t)>(&::System::IO::BufferedStream::CopyTo)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5c0deb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream*>(), { ::i2c::class_of<::System::IO::BufferedStream*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.CopyToAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::IO::BufferedStream::*)(::System::IO::Stream*, int32_t, ::System::Threading::CancellationToken)>(
    &::System::IO::BufferedStream::CopyToAsync)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5c0df40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream*>(), { ::i2c::class_of<::System::IO::BufferedStream*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.CopyToAsyncCore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::IO::BufferedStream::*)(::System::IO::Stream*, int32_t, ::System::Threading::CancellationToken)>(
    &::System::IO::BufferedStream::CopyToAsyncCore)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5c0e04c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream*>(),
                                         { "CopyToAsyncCore", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
constexpr ::System::IO::Stream*& System::IO::BufferedStream::__cordl_internal_get__stream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stream;
}
constexpr ::System::IO::Stream* const& System::IO::BufferedStream::__cordl_internal_get__stream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stream;
}
constexpr void System::IO::BufferedStream::__cordl_internal_set__stream(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____stream = value;
}
constexpr ::ArrayW<uint8_t>& System::IO::BufferedStream::__cordl_internal_get__buffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buffer;
}
constexpr ::ArrayW<uint8_t> const& System::IO::BufferedStream::__cordl_internal_get__buffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buffer;
}
constexpr void System::IO::BufferedStream::__cordl_internal_set__buffer(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____buffer = value;
}
constexpr int32_t& System::IO::BufferedStream::__cordl_internal_get__bufferSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bufferSize;
}
constexpr int32_t const& System::IO::BufferedStream::__cordl_internal_get__bufferSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bufferSize;
}
constexpr void System::IO::BufferedStream::__cordl_internal_set__bufferSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bufferSize = value;
}
constexpr int32_t& System::IO::BufferedStream::__cordl_internal_get__readPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____readPos;
}
constexpr int32_t const& System::IO::BufferedStream::__cordl_internal_get__readPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____readPos;
}
constexpr void System::IO::BufferedStream::__cordl_internal_set__readPos(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____readPos = value;
}
constexpr int32_t& System::IO::BufferedStream::__cordl_internal_get__readLen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____readLen;
}
constexpr int32_t const& System::IO::BufferedStream::__cordl_internal_get__readLen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____readLen;
}
constexpr void System::IO::BufferedStream::__cordl_internal_set__readLen(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____readLen = value;
}
constexpr int32_t& System::IO::BufferedStream::__cordl_internal_get__writePos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____writePos;
}
constexpr int32_t const& System::IO::BufferedStream::__cordl_internal_get__writePos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____writePos;
}
constexpr void System::IO::BufferedStream::__cordl_internal_set__writePos(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____writePos = value;
}
constexpr ::System::Threading::Tasks::Task_1<int32_t>*& System::IO::BufferedStream::__cordl_internal_get__lastSyncCompletedReadTask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastSyncCompletedReadTask;
}
constexpr ::System::Threading::Tasks::Task_1<int32_t>* const& System::IO::BufferedStream::__cordl_internal_get__lastSyncCompletedReadTask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastSyncCompletedReadTask;
}
constexpr void System::IO::BufferedStream::__cordl_internal_set__lastSyncCompletedReadTask(::System::Threading::Tasks::Task_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastSyncCompletedReadTask = value;
}
constexpr ::System::Threading::SemaphoreSlim*& System::IO::BufferedStream::__cordl_internal_get__asyncActiveSemaphore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____asyncActiveSemaphore;
}
constexpr ::System::Threading::SemaphoreSlim* const& System::IO::BufferedStream::__cordl_internal_get__asyncActiveSemaphore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____asyncActiveSemaphore;
}
constexpr void System::IO::BufferedStream::__cordl_internal_set__asyncActiveSemaphore(::System::Threading::SemaphoreSlim* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____asyncActiveSemaphore = value;
}
inline ::System::Threading::SemaphoreSlim* System::IO::BufferedStream::LazyEnsureAsyncActiveSemaphoreInitialized() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream*>(), { "LazyEnsureAsyncActiveSemaphoreInitialized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::SemaphoreSlim*>(this, ___internal_method);
}
inline void System::IO::BufferedStream::_ctor(::System::IO::Stream* stream) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream);
}
inline void System::IO::BufferedStream::_ctor(::System::IO::Stream* stream, int32_t bufferSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, bufferSize);
}
inline void System::IO::BufferedStream::EnsureNotClosed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream*>(), { "EnsureNotClosed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::IO::BufferedStream::EnsureCanSeek() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream*>(), { "EnsureCanSeek", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::IO::BufferedStream::EnsureCanRead() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream*>(), { "EnsureCanRead", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::IO::BufferedStream::EnsureCanWrite() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream*>(), { "EnsureCanWrite", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::IO::BufferedStream::EnsureShadowBufferAllocated() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream*>(), { "EnsureShadowBufferAllocated", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::IO::BufferedStream::EnsureBufferAllocated() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream*>(), { "EnsureBufferAllocated", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::IO::BufferedStream::get_CanRead() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::BufferedStream*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::IO::BufferedStream::get_CanWrite() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::BufferedStream*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::IO::BufferedStream::get_CanSeek() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::BufferedStream*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int64_t System::IO::BufferedStream::get_Length() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::BufferedStream*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t System::IO::BufferedStream::get_Position() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::BufferedStream*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void System::IO::BufferedStream::set_Position(int64_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::BufferedStream*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Threading::Tasks::ValueTask System::IO::BufferedStream::DisposeAsync() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::BufferedStream*>(), 41 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask>(this, ___internal_method);
}
inline void System::IO::BufferedStream::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::BufferedStream*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void System::IO::BufferedStream::Flush() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::BufferedStream*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* System::IO::BufferedStream::FlushAsync(::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::BufferedStream*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* System::IO::BufferedStream::FlushAsyncInternal(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream*>(), { "FlushAsyncInternal", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline void System::IO::BufferedStream::FlushRead() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream*>(), { "FlushRead", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::IO::BufferedStream::ClearReadBufferBeforeWrite() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream*>(), { "ClearReadBufferBeforeWrite", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::IO::BufferedStream::FlushWrite() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream*>(), { "FlushWrite", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* System::IO::BufferedStream::FlushWriteAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream*>(), { "FlushWriteAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline int32_t System::IO::BufferedStream::ReadFromBuffer(::ArrayW<uint8_t> array, int32_t offset, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream*>(), { "ReadFromBuffer", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, array, offset, count);
}
inline int32_t System::IO::BufferedStream::ReadFromBuffer(::System::Span_1<uint8_t> destination) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream*>(), { "ReadFromBuffer", {}, { ::i2c::type_of<::System::Span_1<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, destination);
}
inline int32_t System::IO::BufferedStream::ReadFromBuffer(::ArrayW<uint8_t> array, int32_t offset, int32_t count, ::by_ref<::System::Exception*> error) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream*>(),
                          { "ReadFromBuffer", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::System::Exception*>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, array, offset, count, error);
}
inline int32_t System::IO::BufferedStream::Read(::ArrayW<uint8_t> array, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::BufferedStream*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, array, offset, count);
}
inline int32_t System::IO::BufferedStream::Read(::System::Span_1<uint8_t> destination) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::BufferedStream*>(), 36 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, destination);
}
inline ::System::Threading::Tasks::Task_1<int32_t>* System::IO::BufferedStream::LastSyncCompletedReadTask(int32_t val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream*>(), { "LastSyncCompletedReadTask", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>*>(this, ___internal_method, val);
}
inline ::System::Threading::Tasks::Task_1<int32_t>* System::IO::BufferedStream::ReadAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count,
                                                                                          ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::BufferedStream*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>*>(this, ___internal_method, buffer, offset, count, cancellationToken);
}
inline ::System::Threading::Tasks::ValueTask_1<int32_t> System::IO::BufferedStream::ReadAsync(::System::Memory_1<uint8_t> buffer, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::BufferedStream*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask_1<int32_t>>(this, ___internal_method, buffer, cancellationToken);
}
inline ::System::Threading::Tasks::ValueTask_1<int32_t> System::IO::BufferedStream::ReadFromUnderlyingStreamAsync(::System::Memory_1<uint8_t> buffer,
                                                                                                                  ::System::Threading::CancellationToken cancellationToken,
                                                                                                                  int32_t bytesAlreadySatisfied, ::System::Threading::Tasks::Task* semaphoreLockTask) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream*>(), { "ReadFromUnderlyingStreamAsync",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Memory_1<uint8_t>>(), ::i2c::type_of<::System::Threading::CancellationToken>(),
                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Threading::Tasks::Task*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask_1<int32_t>>(this, ___internal_method, buffer, cancellationToken, bytesAlreadySatisfied, semaphoreLockTask);
}
inline ::System::IAsyncResult* System::IO::BufferedStream::BeginRead(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, ::System::AsyncCallback* callback, ::System::Object* state) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::BufferedStream*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, buffer, offset, count, callback, state);
}
inline int32_t System::IO::BufferedStream::EndRead(::System::IAsyncResult* asyncResult) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::BufferedStream*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, asyncResult);
}
inline int32_t System::IO::BufferedStream::ReadByte() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::BufferedStream*>(), 37 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::IO::BufferedStream::ReadByteSlow() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream*>(), { "ReadByteSlow", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::IO::BufferedStream::WriteToBuffer(::ArrayW<uint8_t> array, ::by_ref<int32_t> offset, ::by_ref<int32_t> count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream*>(),
                                              { "WriteToBuffer", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, offset, count);
}
inline int32_t System::IO::BufferedStream::WriteToBuffer(::System::ReadOnlySpan_1<uint8_t> buffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream*>(), { "WriteToBuffer", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer);
}
inline void System::IO::BufferedStream::Write(::ArrayW<uint8_t> array, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::BufferedStream*>(), 38 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, offset, count);
}
inline void System::IO::BufferedStream::Write(::System::ReadOnlySpan_1<uint8_t> buffer) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::BufferedStream*>(), 39 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer);
}
inline ::System::Threading::Tasks::Task* System::IO::BufferedStream::WriteAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::BufferedStream*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, buffer, offset, count, cancellationToken);
}
inline ::System::Threading::Tasks::ValueTask System::IO::BufferedStream::WriteAsync(::System::ReadOnlyMemory_1<uint8_t> buffer, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::BufferedStream*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask>(this, ___internal_method, buffer, cancellationToken);
}
inline ::System::Threading::Tasks::Task* System::IO::BufferedStream::WriteToUnderlyingStreamAsync(::System::ReadOnlyMemory_1<uint8_t> buffer, ::System::Threading::CancellationToken cancellationToken,
                                                                                                  ::System::Threading::Tasks::Task* semaphoreLockTask) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream*>(), { "WriteToUnderlyingStreamAsync",
                                                                              {},
                                                                              { ::i2c::type_of<::System::ReadOnlyMemory_1<uint8_t>>(), ::i2c::type_of<::System::Threading::CancellationToken>(),
                                                                                ::i2c::type_of<::System::Threading::Tasks::Task*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, buffer, cancellationToken, semaphoreLockTask);
}
inline ::System::IAsyncResult* System::IO::BufferedStream::BeginWrite(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, ::System::AsyncCallback* callback, ::System::Object* state) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::BufferedStream*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, buffer, offset, count, callback, state);
}
inline void System::IO::BufferedStream::EndWrite(::System::IAsyncResult* asyncResult) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::BufferedStream*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, asyncResult);
}
inline void System::IO::BufferedStream::WriteByte(uint8_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::BufferedStream*>(), 40 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t System::IO::BufferedStream::Seek(int64_t offset, ::System::IO::SeekOrigin origin) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::BufferedStream*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, offset, origin);
}
inline void System::IO::BufferedStream::SetLength(int64_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::BufferedStream*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::IO::BufferedStream::CopyTo(::System::IO::Stream* destination, int32_t bufferSize) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::BufferedStream*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, destination, bufferSize);
}
inline ::System::Threading::Tasks::Task* System::IO::BufferedStream::CopyToAsync(::System::IO::Stream* destination, int32_t bufferSize, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::BufferedStream*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, destination, bufferSize, cancellationToken);
}
inline ::System::Threading::Tasks::Task* System::IO::BufferedStream::CopyToAsyncCore(::System::IO::Stream* destination, int32_t bufferSize, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::IO::BufferedStream*>(),
                                       { "CopyToAsyncCore", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, destination, bufferSize, cancellationToken);
}
inline ::System::IO::BufferedStream* System::IO::BufferedStream::New_ctor(::System::IO::Stream* stream) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::BufferedStream*>(stream));
}
inline ::System::IO::BufferedStream* System::IO::BufferedStream::New_ctor(::System::IO::Stream* stream, int32_t bufferSize) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::BufferedStream*>(stream, bufferSize));
}
// Ctor Parameters []
constexpr ::System::IO::BufferedStream::BufferedStream() {}
