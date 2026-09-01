#pragma once
// IWYU pragma private; include "UnityEngine\ResourceManagement\ResourceProviders\ResourceProviderBase.hpp"
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
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase_BaseInitAsyncOp.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase_BaseInitAsyncOp::*)(::System::Func_1<bool>*)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase_BaseInitAsyncOp::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6920600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase_BaseInitAsyncOp*>(),
                                                             { "Init", {}, { ::i2c::type_of<::System::Func_1<bool>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase_BaseInitAsyncOp.InvokeWaitForCompletion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase_BaseInitAsyncOp::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase_BaseInitAsyncOp::InvokeWaitForCompletion)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6920608;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase_BaseInitAsyncOp*>(),
                                                            { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase_BaseInitAsyncOp*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase_BaseInitAsyncOp.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase_BaseInitAsyncOp::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase_BaseInitAsyncOp::Execute)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6920694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase_BaseInitAsyncOp*>(),
                                                            { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase_BaseInitAsyncOp*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase_BaseInitAsyncOp._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase_BaseInitAsyncOp::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase_BaseInitAsyncOp::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x69205ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase_BaseInitAsyncOp*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Func_1<bool>*& UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase_BaseInitAsyncOp::__cordl_internal_get_m_CallBack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CallBack;
}
constexpr ::System::Func_1<bool>* const& UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase_BaseInitAsyncOp::__cordl_internal_get_m_CallBack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CallBack;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase_BaseInitAsyncOp::__cordl_internal_set_m_CallBack(::System::Func_1<bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CallBack = value;
}
inline void UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase_BaseInitAsyncOp::Init(::System::Func_1<bool>* callback) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase_BaseInitAsyncOp*>(),
                                                                                         { "Init", {}, { ::i2c::type_of<::System::Func_1<bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline bool UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase_BaseInitAsyncOp::InvokeWaitForCompletion() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase_BaseInitAsyncOp*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase_BaseInitAsyncOp::Execute() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase_BaseInitAsyncOp*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase_BaseInitAsyncOp::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase_BaseInitAsyncOp*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase_BaseInitAsyncOp*
UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase_BaseInitAsyncOp::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase_BaseInitAsyncOp*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase_BaseInitAsyncOp::ResourceProviderBase_BaseInitAsyncOp() {}
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase___c__DisplayClass10_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase___c__DisplayClass10_0::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase___c__DisplayClass10_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69205a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase___c__DisplayClass10_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase___c__DisplayClass10_0._InitializeAsync_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase___c__DisplayClass10_0::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase___c__DisplayClass10_0::_InitializeAsync_b__0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6920734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase___c__DisplayClass10_0*>(), { "<InitializeAsync>b__0", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase*&
UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase___c__DisplayClass10_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase* const&
UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase___c__DisplayClass10_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase___c__DisplayClass10_0::__cordl_internal_set___4__this(
    ::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::StringW& UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase___c__DisplayClass10_0::__cordl_internal_get_id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___id;
}
constexpr ::StringW const& UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase___c__DisplayClass10_0::__cordl_internal_get_id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___id;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase___c__DisplayClass10_0::__cordl_internal_set_id(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___id = value;
}
constexpr ::StringW& UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase___c__DisplayClass10_0::__cordl_internal_get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr ::StringW const& UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase___c__DisplayClass10_0::__cordl_internal_get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase___c__DisplayClass10_0::__cordl_internal_set_data(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___data = value;
}
inline void UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase___c__DisplayClass10_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase___c__DisplayClass10_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase___c__DisplayClass10_0::_InitializeAsync_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase___c__DisplayClass10_0*>(), { "<InitializeAsync>b__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase___c__DisplayClass10_0*
UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase___c__DisplayClass10_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase___c__DisplayClass10_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase___c__DisplayClass10_0::ResourceProviderBase___c__DisplayClass10_0() {}
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase.get_ProviderId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::get_ProviderId)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x692033c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::*)(::StringW, ::StringW)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::Initialize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6920384;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase.CanProvide
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::*)(
    ::System::Type*, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*)>(&::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::CanProvide)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x69203a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::ToString)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x69203e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase.Release
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::*)(
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::System::Object*)>(&::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::Release)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69203f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase.GetDefaultType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Type* (::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::*)(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*)>(
        &::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::GetDefaultType)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x69203f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase.Provide
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::*)(
    ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle)>(&::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::Provide)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase.InitializeAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> (
    ::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::*)(::UnityEngine::ResourceManagement::ResourceManager*, ::StringW, ::StringW)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::InitializeAsync)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x6920424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase.UnityEngine_ResourceManagement_ResourceProviders_IResourceProvider_get_BehaviourFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags (::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::*)()>(
        &::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::UnityEngine_ResourceManagement_ResourceProviders_IResourceProvider_get_BehaviourFlags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69205f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase*>(),
                                                                                           { "UnityEngine.ResourceManagement.ResourceProviders.IResourceProvider.get_BehaviourFlags", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x691cc68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
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
  this->___m_ProviderId = value;
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
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::Initialize(::StringW id, ::StringW data) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id, data);
}
inline bool UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::CanProvide(::System::Type* t, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, t, location);
}
inline ::StringW UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::ToString() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::Release(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location,
                                                                                              ::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, location, obj);
}
inline ::System::Type* UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::GetDefaultType(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, location);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::Provide(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle provideHandle) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, provideHandle);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>
UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::InitializeAsync(::UnityEngine::ResourceManagement::ResourceManager* rm, ::StringW id, ::StringW data) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>(this, ___internal_method, rm, id, data);
}
inline ::UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags
UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::UnityEngine_ResourceManagement_ResourceProviders_IResourceProvider_get_BehaviourFlags() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase*>(),
                                                                                         { "UnityEngine.ResourceManagement.ResourceProviders.IResourceProvider.get_BehaviourFlags", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase* UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase*>());
}
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
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::ResourceProviderBase() {}
