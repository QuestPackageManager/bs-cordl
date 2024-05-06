#pragma once
#include "System/Runtime/ConstrainedExecution/zzzz__CriticalFinalizerObject_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_impl.hpp"
#include "System/zzzz__Gen2GcCallback_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Gen2GcCallback._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Gen2GcCallback::*)()>(&::System::Gen2GcCallback::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x291bce4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Gen2GcCallback*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Gen2GcCallback.Register
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Func_2<::System::Object*, bool>*, ::System::Object*)>(&::System::Gen2GcCallback::Register)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x291bcec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Gen2GcCallback*>::get(), "Register", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::System::Object*, bool>*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Gen2GcCallback.Setup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Gen2GcCallback::*)(::System::Func_2<::System::Object*, bool>*, ::System::Object*)>(
    &::System::Gen2GcCallback::Setup)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x291bd6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Gen2GcCallback*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::System::Object*, bool>*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Gen2GcCallback.Finalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Gen2GcCallback::*)()>(&::System::Gen2GcCallback::Finalize)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x291bd94;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Gen2GcCallback*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Gen2GcCallback*>::get(), 1));
    return ___internal_method;
  }
};
constexpr ::System::Func_2<::System::Object*, bool>*& System::Gen2GcCallback::__cordl_internal_get__callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____callback;
}
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::System::Object*, bool>*> const& System::Gen2GcCallback::__cordl_internal_get__callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____callback;
}
constexpr void System::Gen2GcCallback::__cordl_internal_set__callback(::System::Func_2<::System::Object*, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____callback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::InteropServices::GCHandle& System::Gen2GcCallback::__cordl_internal_get__weakTargetObj() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____weakTargetObj;
}
constexpr ::System::Runtime::InteropServices::GCHandle const& System::Gen2GcCallback::__cordl_internal_get__weakTargetObj() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____weakTargetObj;
}
constexpr void System::Gen2GcCallback::__cordl_internal_set__weakTargetObj(::System::Runtime::InteropServices::GCHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____weakTargetObj = value;
}
inline ::System::Gen2GcCallback* System::Gen2GcCallback::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Gen2GcCallback*>());
}
inline void System::Gen2GcCallback::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Gen2GcCallback*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Gen2GcCallback::Register(::System::Func_2<::System::Object*, bool>* callback, ::System::Object* targetObj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Gen2GcCallback*>::get(), "Register", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::System::Object*, bool>*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, callback, targetObj);
}
inline void System::Gen2GcCallback::Setup(::System::Func_2<::System::Object*, bool>* callback, ::System::Object* targetObj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Gen2GcCallback*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::System::Object*, bool>*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callback, targetObj);
}
inline void System::Gen2GcCallback::Finalize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Gen2GcCallback*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Gen2GcCallback::Gen2GcCallback() {}
