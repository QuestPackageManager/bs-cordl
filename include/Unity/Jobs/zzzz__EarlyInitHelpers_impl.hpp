#pragma once
// IWYU pragma private; include "Unity/Jobs/EarlyInitHelpers.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Jobs/zzzz__EarlyInitHelpers_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Jobs/zzzz__EarlyInitHelpers_def.hpp"
//  Writing Method size for method: ::Unity::Jobs::EarlyInitHelpers_EarlyInitFunction._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Jobs::EarlyInitHelpers_EarlyInitFunction::*)(::System::Object*, ::System::IntPtr)>(
    &::Unity::Jobs::EarlyInitHelpers_EarlyInitFunction::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x628987c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::EarlyInitHelpers_EarlyInitFunction*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::EarlyInitHelpers_EarlyInitFunction.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Jobs::EarlyInitHelpers_EarlyInitFunction::*)()>(
    &::Unity::Jobs::EarlyInitHelpers_EarlyInitFunction::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x62898e4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::EarlyInitHelpers_EarlyInitFunction*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::EarlyInitHelpers_EarlyInitFunction*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::EarlyInitHelpers_EarlyInitFunction.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::Unity::Jobs::EarlyInitHelpers_EarlyInitFunction::*)(::System::AsyncCallback*, ::System::Object*)>(&::Unity::Jobs::EarlyInitHelpers_EarlyInitFunction::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x62898f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::EarlyInitHelpers_EarlyInitFunction*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::EarlyInitHelpers_EarlyInitFunction*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::EarlyInitHelpers_EarlyInitFunction.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Jobs::EarlyInitHelpers_EarlyInitFunction::*)(::System::IAsyncResult*)>(
    &::Unity::Jobs::EarlyInitHelpers_EarlyInitFunction::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6289914;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::EarlyInitHelpers_EarlyInitFunction*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::EarlyInitHelpers_EarlyInitFunction*>::get(), 15));
    return ___internal_method;
  }
};
inline void Unity::Jobs::EarlyInitHelpers_EarlyInitFunction::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::EarlyInitHelpers_EarlyInitFunction*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void Unity::Jobs::EarlyInitHelpers_EarlyInitFunction::Invoke() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::EarlyInitHelpers_EarlyInitFunction*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* Unity::Jobs::EarlyInitHelpers_EarlyInitFunction::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::EarlyInitHelpers_EarlyInitFunction*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline void Unity::Jobs::EarlyInitHelpers_EarlyInitFunction::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::EarlyInitHelpers_EarlyInitFunction*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::Unity::Jobs::EarlyInitHelpers_EarlyInitFunction* Unity::Jobs::EarlyInitHelpers_EarlyInitFunction::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Jobs::EarlyInitHelpers_EarlyInitFunction*>(object, method));
}
// Ctor Parameters []
constexpr ::Unity::Jobs::EarlyInitHelpers_EarlyInitFunction::EarlyInitHelpers_EarlyInitFunction() {}
//  Writing Method size for method: ::Unity::Jobs::EarlyInitHelpers.FlushEarlyInits
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Unity::Jobs::EarlyInitHelpers::FlushEarlyInits)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x62894f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::EarlyInitHelpers*>::get(), "FlushEarlyInits",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::EarlyInitHelpers.AddEarlyInitFunction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Unity::Jobs::EarlyInitHelpers_EarlyInitFunction*)>(
    &::Unity::Jobs::EarlyInitHelpers::AddEarlyInitFunction)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x62896a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::EarlyInitHelpers*>::get(), "AddEarlyInitFunction", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Jobs::EarlyInitHelpers_EarlyInitFunction*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::EarlyInitHelpers.JobReflectionDataCreationFailed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Exception*)>(&::Unity::Jobs::EarlyInitHelpers::JobReflectionDataCreationFailed)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x62897f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::EarlyInitHelpers*>::get(), "JobReflectionDataCreationFailed", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::EarlyInitHelpers._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Jobs::EarlyInitHelpers::*)()>(&::Unity::Jobs::EarlyInitHelpers::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6289878;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::EarlyInitHelpers*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Unity::Jobs::EarlyInitHelpers::setStaticF_s_PendingDelegates(::System::Collections::Generic::List_1<::Unity::Jobs::EarlyInitHelpers_EarlyInitFunction*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::Unity::Jobs::EarlyInitHelpers_EarlyInitFunction*>*, "s_PendingDelegates",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::EarlyInitHelpers*>::get>(
      std::forward<::System::Collections::Generic::List_1<::Unity::Jobs::EarlyInitHelpers_EarlyInitFunction*>*>(value));
}
inline ::System::Collections::Generic::List_1<::Unity::Jobs::EarlyInitHelpers_EarlyInitFunction*>* Unity::Jobs::EarlyInitHelpers::getStaticF_s_PendingDelegates() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::Unity::Jobs::EarlyInitHelpers_EarlyInitFunction*>*, "s_PendingDelegates",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::EarlyInitHelpers*>::get>();
}
inline void Unity::Jobs::EarlyInitHelpers::FlushEarlyInits() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::EarlyInitHelpers*>::get(), "FlushEarlyInits",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void Unity::Jobs::EarlyInitHelpers::AddEarlyInitFunction(::Unity::Jobs::EarlyInitHelpers_EarlyInitFunction* func) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::EarlyInitHelpers*>::get(), "AddEarlyInitFunction", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Jobs::EarlyInitHelpers_EarlyInitFunction*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, func);
}
inline void Unity::Jobs::EarlyInitHelpers::JobReflectionDataCreationFailed(::System::Exception* ex) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::EarlyInitHelpers*>::get(), "JobReflectionDataCreationFailed",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, ex);
}
inline void Unity::Jobs::EarlyInitHelpers::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::EarlyInitHelpers*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Jobs::EarlyInitHelpers* Unity::Jobs::EarlyInitHelpers::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Jobs::EarlyInitHelpers*>());
}
// Ctor Parameters []
constexpr ::Unity::Jobs::EarlyInitHelpers::EarlyInitHelpers() {}
