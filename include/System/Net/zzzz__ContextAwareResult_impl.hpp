#pragma once
// IWYU pragma private; include "System/Net/ContextAwareResult.hpp"
#include "System/Net/zzzz__LazyAsyncResult_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__ContextAwareResult_def.hpp"
#include "System/Net/zzzz__ContextAwareResult_def.hpp"
#include "System/Threading/zzzz__ContextCallback_def.hpp"
#include "System/Threading/zzzz__ExecutionContext_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::ContextAwareResult_StateFlags::ContextAwareResult_StateFlags(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::ContextAwareResult_StateFlags::ContextAwareResult_StateFlags() {}
constexpr ::System::Net::ContextAwareResult_StateFlags System::Net::ContextAwareResult_StateFlags::None{ static_cast<uint8_t>(0x0u) };
constexpr ::System::Net::ContextAwareResult_StateFlags System::Net::ContextAwareResult_StateFlags::CaptureIdentity{ static_cast<uint8_t>(0x1u) };
constexpr ::System::Net::ContextAwareResult_StateFlags System::Net::ContextAwareResult_StateFlags::CaptureContext{ static_cast<uint8_t>(0x2u) };
constexpr ::System::Net::ContextAwareResult_StateFlags System::Net::ContextAwareResult_StateFlags::ThreadSafeContextCopy{ static_cast<uint8_t>(0x4u) };
constexpr ::System::Net::ContextAwareResult_StateFlags System::Net::ContextAwareResult_StateFlags::PostBlockStarted{ static_cast<uint8_t>(0x8u) };
constexpr ::System::Net::ContextAwareResult_StateFlags System::Net::ContextAwareResult_StateFlags::PostBlockFinished{ static_cast<uint8_t>(0x10u) };
//  Writing Method size for method: ::System::Net::ContextAwareResult___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::ContextAwareResult___c::*)()>(&::System::Net::ContextAwareResult___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x63f21fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ContextAwareResult___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ContextAwareResult___c._Complete_b__17_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::ContextAwareResult___c::*)(::System::Object*)>(&::System::Net::ContextAwareResult___c::_Complete_b__17_0)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x63f2200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ContextAwareResult___c*>(), { "<Complete>b__17_0", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
inline void System::Net::ContextAwareResult___c::setStaticF___9(::System::Net::ContextAwareResult___c* value) {
  ::cordl_internals::setStaticField<::System::Net::ContextAwareResult___c*, "<>9", ::System::Net::ContextAwareResult___c*>(std::forward<::System::Net::ContextAwareResult___c*>(value));
}
inline ::System::Net::ContextAwareResult___c* System::Net::ContextAwareResult___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::System::Net::ContextAwareResult___c*, "<>9", ::System::Net::ContextAwareResult___c*>();
}
inline void System::Net::ContextAwareResult___c::setStaticF___9__17_0(::System::Threading::ContextCallback* value) {
  ::cordl_internals::setStaticField<::System::Threading::ContextCallback*, "<>9__17_0", ::System::Net::ContextAwareResult___c*>(std::forward<::System::Threading::ContextCallback*>(value));
}
inline ::System::Threading::ContextCallback* System::Net::ContextAwareResult___c::getStaticF___9__17_0() {
  return ::cordl_internals::getStaticField<::System::Threading::ContextCallback*, "<>9__17_0", ::System::Net::ContextAwareResult___c*>();
}
inline void System::Net::ContextAwareResult___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ContextAwareResult___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::ContextAwareResult___c::_Complete_b__17_0(::System::Object* s) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ContextAwareResult___c*>(), { "<Complete>b__17_0", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline ::System::Net::ContextAwareResult___c* System::Net::ContextAwareResult___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::ContextAwareResult___c*>());
}
// Ctor Parameters []
constexpr ::System::Net::ContextAwareResult___c::ContextAwareResult___c() {}
//  Writing Method size for method: ::System::Net::ContextAwareResult.SafeCaptureIdentity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::ContextAwareResult::*)()>(&::System::Net::ContextAwareResult::SafeCaptureIdentity)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x63f1450;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ContextAwareResult*>(), { "SafeCaptureIdentity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ContextAwareResult.CleanupInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::ContextAwareResult::*)()>(&::System::Net::ContextAwareResult::CleanupInternal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x63f1454;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ContextAwareResult*>(), { "CleanupInternal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ContextAwareResult._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::ContextAwareResult::*)(::System::Object*, ::System::Object*, ::System::AsyncCallback*)>(
    &::System::Net::ContextAwareResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63f1458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ContextAwareResult*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::AsyncCallback*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ContextAwareResult._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::ContextAwareResult::*)(bool, bool, ::System::Object*, ::System::Object*, ::System::AsyncCallback*)>(
    &::System::Net::ContextAwareResult::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x63f1460;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ContextAwareResult*>(), { ".ctor",
                                                                                                         {},
                                                                                                         { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Object*>(),
                                                                                                           ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::AsyncCallback*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ContextAwareResult._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::ContextAwareResult::*)(bool, bool, bool, ::System::Object*, ::System::Object*, ::System::AsyncCallback*)>(
    &::System::Net::ContextAwareResult::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x63f14b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Net::ContextAwareResult*>(), { ".ctor",
                                                                                     {},
                                                                                     { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Object*>(),
                                                                                       ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::AsyncCallback*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ContextAwareResult.StartPostingAsyncOp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Net::ContextAwareResult::*)()>(&::System::Net::ContextAwareResult::StartPostingAsyncOp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63f1528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ContextAwareResult*>(), { "StartPostingAsyncOp", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ContextAwareResult.StartPostingAsyncOp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Net::ContextAwareResult::*)(bool)>(&::System::Net::ContextAwareResult::StartPostingAsyncOp)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x63f1530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ContextAwareResult*>(), { "StartPostingAsyncOp", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ContextAwareResult.FinishPostingAsyncOp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::ContextAwareResult::*)()>(&::System::Net::ContextAwareResult::FinishPostingAsyncOp)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x63f16ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ContextAwareResult*>(), { "FinishPostingAsyncOp", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ContextAwareResult.Cleanup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::ContextAwareResult::*)()>(&::System::Net::ContextAwareResult::Cleanup)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x63f1b30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::ContextAwareResult*>(), { ::i2c::class_of<::System::Net::ContextAwareResult*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ContextAwareResult.CaptureOrComplete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::ContextAwareResult::*)(::by_ref<::System::Threading::ExecutionContext*>, bool)>(
    &::System::Net::ContextAwareResult::CaptureOrComplete)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0x63f1728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ContextAwareResult*>(),
                                                             { "CaptureOrComplete", {}, { ::i2c::type_of<::by_ref<::System::Threading::ExecutionContext*>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ContextAwareResult.Complete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::ContextAwareResult::*)(::System::IntPtr)>(&::System::Net::ContextAwareResult::Complete)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x63f1e00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::ContextAwareResult*>(), { ::i2c::class_of<::System::Net::ContextAwareResult*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ContextAwareResult.CompleteCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::ContextAwareResult::*)()>(&::System::Net::ContextAwareResult::CompleteCallback)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x63f20f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ContextAwareResult*>(), { "CompleteCallback", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Threading::ExecutionContext*& System::Net::ContextAwareResult::__cordl_internal_get__context() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____context;
}
constexpr ::System::Threading::ExecutionContext* const& System::Net::ContextAwareResult::__cordl_internal_get__context() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____context;
}
constexpr void System::Net::ContextAwareResult::__cordl_internal_set__context(::System::Threading::ExecutionContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____context = value;
}
constexpr ::System::Object*& System::Net::ContextAwareResult::__cordl_internal_get__lock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lock;
}
constexpr ::System::Object* const& System::Net::ContextAwareResult::__cordl_internal_get__lock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lock;
}
constexpr void System::Net::ContextAwareResult::__cordl_internal_set__lock(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lock = value;
}
constexpr ::System::Net::ContextAwareResult_StateFlags& System::Net::ContextAwareResult::__cordl_internal_get__flags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flags;
}
constexpr ::System::Net::ContextAwareResult_StateFlags const& System::Net::ContextAwareResult::__cordl_internal_get__flags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flags;
}
constexpr void System::Net::ContextAwareResult::__cordl_internal_set__flags(::System::Net::ContextAwareResult_StateFlags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____flags = value;
}
inline void System::Net::ContextAwareResult::SafeCaptureIdentity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ContextAwareResult*>(), { "SafeCaptureIdentity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::ContextAwareResult::CleanupInternal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ContextAwareResult*>(), { "CleanupInternal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::ContextAwareResult::_ctor(::System::Object* myObject, ::System::Object* myState, ::System::AsyncCallback* myCallBack) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ContextAwareResult*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::AsyncCallback*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, myObject, myState, myCallBack);
}
inline void System::Net::ContextAwareResult::_ctor(bool captureIdentity, bool forceCaptureContext, ::System::Object* myObject, ::System::Object* myState, ::System::AsyncCallback* myCallBack) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Net::ContextAwareResult*>(),
          { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::AsyncCallback*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, captureIdentity, forceCaptureContext, myObject, myState, myCallBack);
}
inline void System::Net::ContextAwareResult::_ctor(bool captureIdentity, bool forceCaptureContext, bool threadSafeContextCopy, ::System::Object* myObject, ::System::Object* myState,
                                                   ::System::AsyncCallback* myCallBack) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Net::ContextAwareResult*>(), { ".ctor",
                                                                                   {},
                                                                                   { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Object*>(),
                                                                                     ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::AsyncCallback*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, captureIdentity, forceCaptureContext, threadSafeContextCopy, myObject, myState, myCallBack);
}
inline ::System::Object* System::Net::ContextAwareResult::StartPostingAsyncOp() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ContextAwareResult*>(), { "StartPostingAsyncOp", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* System::Net::ContextAwareResult::StartPostingAsyncOp(bool lockCapture) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ContextAwareResult*>(), { "StartPostingAsyncOp", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, lockCapture);
}
inline bool System::Net::ContextAwareResult::FinishPostingAsyncOp() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ContextAwareResult*>(), { "FinishPostingAsyncOp", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::ContextAwareResult::Cleanup() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::ContextAwareResult*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Net::ContextAwareResult::CaptureOrComplete(::by_ref<::System::Threading::ExecutionContext*> cachedContext, bool returnContext) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ContextAwareResult*>(),
                                                           { "CaptureOrComplete", {}, { ::i2c::type_of<::by_ref<::System::Threading::ExecutionContext*>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cachedContext, returnContext);
}
inline void System::Net::ContextAwareResult::Complete(::System::IntPtr userToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::ContextAwareResult*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userToken);
}
inline void System::Net::ContextAwareResult::CompleteCallback() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ContextAwareResult*>(), { "CompleteCallback", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::ContextAwareResult* System::Net::ContextAwareResult::New_ctor(::System::Object* myObject, ::System::Object* myState, ::System::AsyncCallback* myCallBack) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::ContextAwareResult*>(myObject, myState, myCallBack));
}
inline ::System::Net::ContextAwareResult* System::Net::ContextAwareResult::New_ctor(bool captureIdentity, bool forceCaptureContext, ::System::Object* myObject, ::System::Object* myState,
                                                                                    ::System::AsyncCallback* myCallBack) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::ContextAwareResult*>(captureIdentity, forceCaptureContext, myObject, myState, myCallBack));
}
inline ::System::Net::ContextAwareResult* System::Net::ContextAwareResult::New_ctor(bool captureIdentity, bool forceCaptureContext, bool threadSafeContextCopy, ::System::Object* myObject,
                                                                                    ::System::Object* myState, ::System::AsyncCallback* myCallBack) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::ContextAwareResult*>(captureIdentity, forceCaptureContext, threadSafeContextCopy, myObject, myState, myCallBack));
}
// Ctor Parameters []
constexpr ::System::Net::ContextAwareResult::ContextAwareResult() {}
