#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/ResourceProviders/ResourceProviderBase.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationBase_1_impl.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ProviderBehaviourFlags_impl.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ResourceProviderBase_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceLocations/zzzz__IResourceLocation_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__IResourceProvider_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ProvideHandle_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ProviderBehaviourFlags_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ResourceProviderBase_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__IInitializableObject_def.hpp"
#include "UnityEngine/ResourceManagement/zzzz__ResourceManager_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::__ResourceProviderBase__BaseInitAsyncOp.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::__ResourceProviderBase__BaseInitAsyncOp::*)(
    ::System::Func_1<bool>*)>(&::UnityEngine::ResourceManagement::ResourceProviders::__ResourceProviderBase__BaseInitAsyncOp::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x47285d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::__ResourceProviderBase__BaseInitAsyncOp*>::get(), "Init",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<bool>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::__ResourceProviderBase__BaseInitAsyncOp.InvokeWaitForCompletion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ResourceManagement::ResourceProviders::__ResourceProviderBase__BaseInitAsyncOp::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::__ResourceProviderBase__BaseInitAsyncOp::InvokeWaitForCompletion)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x47285d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::__ResourceProviderBase__BaseInitAsyncOp*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::__ResourceProviderBase__BaseInitAsyncOp*>::get(), 33));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::__ResourceProviderBase__BaseInitAsyncOp.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::__ResourceProviderBase__BaseInitAsyncOp::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::__ResourceProviderBase__BaseInitAsyncOp::Execute)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x4728648;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::__ResourceProviderBase__BaseInitAsyncOp*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::__ResourceProviderBase__BaseInitAsyncOp*>::get(), 28));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::__ResourceProviderBase__BaseInitAsyncOp._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::__ResourceProviderBase__BaseInitAsyncOp::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::__ResourceProviderBase__BaseInitAsyncOp::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x4728580;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::__ResourceProviderBase__BaseInitAsyncOp*>::get(),
                                    ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Func_1<bool>*& UnityEngine::ResourceManagement::ResourceProviders::__ResourceProviderBase__BaseInitAsyncOp::__cordl_internal_get_m_CallBack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CallBack;
}
constexpr ::cordl_internals::to_const_pointer<::System::Func_1<bool>*> const&
UnityEngine::ResourceManagement::ResourceProviders::__ResourceProviderBase__BaseInitAsyncOp::__cordl_internal_get_m_CallBack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CallBack;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::__ResourceProviderBase__BaseInitAsyncOp::__cordl_internal_set_m_CallBack(::System::Func_1<bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CallBack)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::ResourceManagement::ResourceProviders::__ResourceProviderBase__BaseInitAsyncOp::Init(::System::Func_1<bool>* callback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::__ResourceProviderBase__BaseInitAsyncOp*>::get(), "Init",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<bool>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callback);
}
inline bool UnityEngine::ResourceManagement::ResourceProviders::__ResourceProviderBase__BaseInitAsyncOp::InvokeWaitForCompletion() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::__ResourceProviderBase__BaseInitAsyncOp*>::get(), 33)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::__ResourceProviderBase__BaseInitAsyncOp::Execute() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::__ResourceProviderBase__BaseInitAsyncOp*>::get(), 28)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::ResourceProviders::__ResourceProviderBase__BaseInitAsyncOp*
UnityEngine::ResourceManagement::ResourceProviders::__ResourceProviderBase__BaseInitAsyncOp::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ResourceManagement::ResourceProviders::__ResourceProviderBase__BaseInitAsyncOp*>());
}
inline void UnityEngine::ResourceManagement::ResourceProviders::__ResourceProviderBase__BaseInitAsyncOp::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::__ResourceProviderBase__BaseInitAsyncOp*>::get(),
                                  ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::__ResourceProviderBase__BaseInitAsyncOp::__ResourceProviderBase__BaseInitAsyncOp() {}
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::__ResourceProviderBase____c__DisplayClass10_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::__ResourceProviderBase____c__DisplayClass10_0::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::__ResourceProviderBase____c__DisplayClass10_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4728578;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::__ResourceProviderBase____c__DisplayClass10_0*>::get(),
                                    ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::__ResourceProviderBase____c__DisplayClass10_0._InitializeAsync_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ResourceManagement::ResourceProviders::__ResourceProviderBase____c__DisplayClass10_0::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::__ResourceProviderBase____c__DisplayClass10_0::_InitializeAsync_b__0)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x47286d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::__ResourceProviderBase____c__DisplayClass10_0*>::get(),
                                    "<InitializeAsync>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase*&
UnityEngine::ResourceManagement::ResourceProviders::__ResourceProviderBase____c__DisplayClass10_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase*> const&
UnityEngine::ResourceManagement::ResourceProviders::__ResourceProviderBase____c__DisplayClass10_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::__ResourceProviderBase____c__DisplayClass10_0::__cordl_internal_set___4__this(
    ::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::ResourceManagement::ResourceProviders::__ResourceProviderBase____c__DisplayClass10_0::__cordl_internal_get_id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___id;
}
constexpr ::StringW const& UnityEngine::ResourceManagement::ResourceProviders::__ResourceProviderBase____c__DisplayClass10_0::__cordl_internal_get_id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___id;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::__ResourceProviderBase____c__DisplayClass10_0::__cordl_internal_set_id(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___id)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::ResourceManagement::ResourceProviders::__ResourceProviderBase____c__DisplayClass10_0::__cordl_internal_get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr ::StringW const& UnityEngine::ResourceManagement::ResourceProviders::__ResourceProviderBase____c__DisplayClass10_0::__cordl_internal_get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::__ResourceProviderBase____c__DisplayClass10_0::__cordl_internal_set_data(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___data)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::ResourceManagement::ResourceProviders::__ResourceProviderBase____c__DisplayClass10_0*
UnityEngine::ResourceManagement::ResourceProviders::__ResourceProviderBase____c__DisplayClass10_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ResourceManagement::ResourceProviders::__ResourceProviderBase____c__DisplayClass10_0*>());
}
inline void UnityEngine::ResourceManagement::ResourceProviders::__ResourceProviderBase____c__DisplayClass10_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::__ResourceProviderBase____c__DisplayClass10_0*>::get(),
                                  ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::ResourceManagement::ResourceProviders::__ResourceProviderBase____c__DisplayClass10_0::_InitializeAsync_b__0() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::__ResourceProviderBase____c__DisplayClass10_0*>::get(),
                                  "<InitializeAsync>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::__ResourceProviderBase____c__DisplayClass10_0::__ResourceProviderBase____c__DisplayClass10_0() {}
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase.get_ProviderId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::get_ProviderId)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x47282f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::*)(::StringW, ::StringW)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::Initialize)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x4728348;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase.CanProvide
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::*)(
    ::System::Type*, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*)>(&::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::CanProvide)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x472836c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::ToString)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x47283ac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase.Release
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::*)(
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::System::Object*)>(&::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::Release)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x47283b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase.GetDefaultType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Type* (::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::*)(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*)>(
        &::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::GetDefaultType)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x47283bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase.Provide
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::*)(
    ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle)>(&::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::Provide)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase.InitializeAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> (
    ::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::*)(::UnityEngine::ResourceManagement::ResourceManager*, ::StringW, ::StringW)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::InitializeAsync)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x4728428;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase.UnityEngine_ResourceManagement_ResourceProviders_IResourceProvider_get_BehaviourFlags
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags (::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::*)()>(
        &::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::UnityEngine_ResourceManagement_ResourceProviders_IResourceProvider_get_BehaviourFlags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x47285c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase*>::get(),
        "UnityEngine.ResourceManagement.ResourceProviders.IResourceProvider.get_BehaviourFlags", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4724ef4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider"
constexpr UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::operator ::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider"
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*
UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::i___UnityEngine__ResourceManagement__ResourceProviders__IResourceProvider() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::ResourceManagement::Util::IInitializableObject"
constexpr UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::operator ::UnityEngine::ResourceManagement::Util::IInitializableObject*() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::Util::IInitializableObject*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ResourceManagement::Util::IInitializableObject"
constexpr ::UnityEngine::ResourceManagement::Util::IInitializableObject*
UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::i___UnityEngine__ResourceManagement__Util__IInitializableObject() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::Util::IInitializableObject*>(static_cast<void*>(this));
}
constexpr ::StringW& UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::__cordl_internal_get_m_ProviderId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProviderId;
}
constexpr ::StringW const& UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::__cordl_internal_get_m_ProviderId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProviderId;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::__cordl_internal_set_m_ProviderId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ProviderId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags&
UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::__cordl_internal_get_m_BehaviourFlags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BehaviourFlags;
}
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags const&
UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::__cordl_internal_get_m_BehaviourFlags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BehaviourFlags;
}
constexpr void
UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::__cordl_internal_set_m_BehaviourFlags(::UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BehaviourFlags = value;
}
inline ::StringW UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::get_ProviderId() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::Initialize(::StringW id, ::StringW data) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, id, data);
}
inline bool UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::CanProvide(::System::Type* t, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, t, location);
}
inline ::StringW UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::ToString() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::Release(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location,
                                                                                              ::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, location, obj);
}
inline ::System::Type* UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::GetDefaultType(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method, location);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::Provide(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle provideHandle) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, provideHandle);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>
UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::InitializeAsync(::UnityEngine::ResourceManagement::ResourceManager* rm, ::StringW id, ::StringW data) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>, false>(this, ___internal_method, rm, id, data);
}
inline ::UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags
UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::UnityEngine_ResourceManagement_ResourceProviders_IResourceProvider_get_BehaviourFlags() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase*>::get(),
      "UnityEngine.ResourceManagement.ResourceProviders.IResourceProvider.get_BehaviourFlags", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags, false>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase* UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase*>());
}
inline void UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::ResourceProviderBase() {}
