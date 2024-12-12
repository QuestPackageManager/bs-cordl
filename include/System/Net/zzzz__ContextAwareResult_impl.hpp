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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::ContextAwareResult___c::*)()>(&::System::Net::ContextAwareResult___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x44895b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ContextAwareResult___c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ContextAwareResult___c._Complete_b__17_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::ContextAwareResult___c::*)(::System::Object*)>(
    &::System::Net::ContextAwareResult___c::_Complete_b__17_0)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x44895bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ContextAwareResult___c*>::get(), "<Complete>b__17_0",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
inline void System::Net::ContextAwareResult___c::setStaticF___9(::System::Net::ContextAwareResult___c* value) {
  ::cordl_internals::setStaticField<::System::Net::ContextAwareResult___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ContextAwareResult___c*>::get>(
      std::forward<::System::Net::ContextAwareResult___c*>(value));
}
inline ::System::Net::ContextAwareResult___c* System::Net::ContextAwareResult___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::System::Net::ContextAwareResult___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ContextAwareResult___c*>::get>();
}
inline void System::Net::ContextAwareResult___c::setStaticF___9__17_0(::System::Threading::ContextCallback* value) {
  ::cordl_internals::setStaticField<::System::Threading::ContextCallback*, "<>9__17_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ContextAwareResult___c*>::get>(
      std::forward<::System::Threading::ContextCallback*>(value));
}
inline ::System::Threading::ContextCallback* System::Net::ContextAwareResult___c::getStaticF___9__17_0() {
  return ::cordl_internals::getStaticField<::System::Threading::ContextCallback*, "<>9__17_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ContextAwareResult___c*>::get>();
}
inline void System::Net::ContextAwareResult___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ContextAwareResult___c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::ContextAwareResult___c::_Complete_b__17_0(::System::Object* s) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ContextAwareResult___c*>::get(), "<Complete>b__17_0", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, s);
}
inline ::System::Net::ContextAwareResult___c* System::Net::ContextAwareResult___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::ContextAwareResult___c*>());
}
// Ctor Parameters []
constexpr ::System::Net::ContextAwareResult___c::ContextAwareResult___c() {}
//  Writing Method size for method: ::System::Net::ContextAwareResult.SafeCaptureIdentity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::ContextAwareResult::*)()>(&::System::Net::ContextAwareResult::SafeCaptureIdentity)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x4488868;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ContextAwareResult*>::get(), "SafeCaptureIdentity",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ContextAwareResult.CleanupInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::ContextAwareResult::*)()>(&::System::Net::ContextAwareResult::CleanupInternal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x448886c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ContextAwareResult*>::get(), "CleanupInternal",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ContextAwareResult._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::ContextAwareResult::*)(::System::Object*, ::System::Object*, ::System::AsyncCallback*)>(
    &::System::Net::ContextAwareResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4488870;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ContextAwareResult*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ContextAwareResult._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Net::ContextAwareResult::*)(bool, bool, ::System::Object*, ::System::Object*, ::System::AsyncCallback*)>(&::System::Net::ContextAwareResult::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x4488878;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ContextAwareResult*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ContextAwareResult._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Net::ContextAwareResult::*)(bool, bool, bool, ::System::Object*, ::System::Object*, ::System::AsyncCallback*)>(&::System::Net::ContextAwareResult::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x44888c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ContextAwareResult*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ContextAwareResult.StartPostingAsyncOp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Net::ContextAwareResult::*)()>(
    &::System::Net::ContextAwareResult::StartPostingAsyncOp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4488940;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ContextAwareResult*>::get(), "StartPostingAsyncOp",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ContextAwareResult.StartPostingAsyncOp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Net::ContextAwareResult::*)(bool)>(
    &::System::Net::ContextAwareResult::StartPostingAsyncOp)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x4488948;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ContextAwareResult*>::get(), "StartPostingAsyncOp",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ContextAwareResult.FinishPostingAsyncOp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::ContextAwareResult::*)()>(&::System::Net::ContextAwareResult::FinishPostingAsyncOp)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x4488b04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ContextAwareResult*>::get(),
                                                                               "FinishPostingAsyncOp", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ContextAwareResult.Cleanup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::ContextAwareResult::*)()>(&::System::Net::ContextAwareResult::Cleanup)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x4488f0c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ContextAwareResult*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ContextAwareResult*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ContextAwareResult.CaptureOrComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::ContextAwareResult::*)(::ByRef<::System::Threading::ExecutionContext*>, bool)>(
    &::System::Net::ContextAwareResult::CaptureOrComplete)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x4488b44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ContextAwareResult*>::get(), "CaptureOrComplete", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Threading::ExecutionContext*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ContextAwareResult.Complete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::ContextAwareResult::*)(::System::IntPtr)>(&::System::Net::ContextAwareResult::Complete)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x44891d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ContextAwareResult*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ContextAwareResult*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ContextAwareResult.CompleteCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::ContextAwareResult::*)()>(&::System::Net::ContextAwareResult::CompleteCallback)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x44894ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ContextAwareResult*>::get(), "CompleteCallback",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____context)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ContextAwareResult*>::get(), "SafeCaptureIdentity",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::ContextAwareResult::CleanupInternal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ContextAwareResult*>::get(), "CleanupInternal",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::ContextAwareResult::_ctor(::System::Object* myObject, ::System::Object* myState, ::System::AsyncCallback* myCallBack) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ContextAwareResult*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, myObject, myState, myCallBack);
}
inline void System::Net::ContextAwareResult::_ctor(bool captureIdentity, bool forceCaptureContext, ::System::Object* myObject, ::System::Object* myState, ::System::AsyncCallback* myCallBack) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ContextAwareResult*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 5>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, captureIdentity, forceCaptureContext, myObject, myState, myCallBack);
}
inline void System::Net::ContextAwareResult::_ctor(bool captureIdentity, bool forceCaptureContext, bool threadSafeContextCopy, ::System::Object* myObject, ::System::Object* myState,
                                                   ::System::AsyncCallback* myCallBack) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ContextAwareResult*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, captureIdentity, forceCaptureContext, threadSafeContextCopy, myObject, myState, myCallBack);
}
inline ::System::Object* System::Net::ContextAwareResult::StartPostingAsyncOp() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ContextAwareResult*>::get(), "StartPostingAsyncOp",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Object* System::Net::ContextAwareResult::StartPostingAsyncOp(bool lockCapture) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ContextAwareResult*>::get(), "StartPostingAsyncOp",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, lockCapture);
}
inline bool System::Net::ContextAwareResult::FinishPostingAsyncOp() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ContextAwareResult*>::get(), "FinishPostingAsyncOp",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Net::ContextAwareResult::Cleanup() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ContextAwareResult*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Net::ContextAwareResult::CaptureOrComplete(::ByRef<::System::Threading::ExecutionContext*> cachedContext, bool returnContext) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ContextAwareResult*>::get(), "CaptureOrComplete", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Threading::ExecutionContext*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, cachedContext, returnContext);
}
inline void System::Net::ContextAwareResult::Complete(::System::IntPtr userToken) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ContextAwareResult*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userToken);
}
inline void System::Net::ContextAwareResult::CompleteCallback() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ContextAwareResult*>::get(), "CompleteCallback",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Net::ContextAwareResult* System::Net::ContextAwareResult::New_ctor(::System::Object* myObject, ::System::Object* myState, ::System::AsyncCallback* myCallBack) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::ContextAwareResult*>(myObject, myState, myCallBack));
}
inline ::System::Net::ContextAwareResult* System::Net::ContextAwareResult::New_ctor(bool captureIdentity, bool forceCaptureContext, ::System::Object* myObject, ::System::Object* myState,
                                                                                    ::System::AsyncCallback* myCallBack) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::ContextAwareResult*>(captureIdentity, forceCaptureContext, myObject, myState, myCallBack));
}
inline ::System::Net::ContextAwareResult* System::Net::ContextAwareResult::New_ctor(bool captureIdentity, bool forceCaptureContext, bool threadSafeContextCopy, ::System::Object* myObject,
                                                                                    ::System::Object* myState, ::System::AsyncCallback* myCallBack) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::ContextAwareResult*>(captureIdentity, forceCaptureContext, threadSafeContextCopy, myObject, myState, myCallBack));
}
// Ctor Parameters []
constexpr ::System::Net::ContextAwareResult::ContextAwareResult() {}
