#pragma once
// IWYU pragma private; include "UnityEngine\ResourceManagement\Util\DelayedActionManager.hpp"
#include "System/Collections/Generic/zzzz__List_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__ComponentSingleton_1_impl.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__DelayedActionManager_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedListNode_1_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedList_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__DelayedActionManager_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo::*)(::System::Delegate*, float_t, ::ArrayW<::System::Object*>)>(
    &::UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6915d0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Delegate*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo.get_InvocationTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo::*)()>(
    &::UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo::get_InvocationTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69167b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo>(), { "get_InvocationTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo.set_InvocationTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo::*)(float_t)>(
    &::UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo::set_InvocationTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69167c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo>(), { "set_InvocationTime", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo::*)()>(
    &::UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo::ToString)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x69167c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo::*)()>(
    &::UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo::Invoke)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x69163cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo>(), { "Invoke", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo::setStaticF_s_Id(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_Id", ::UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo::getStaticF_s_Id() {
  return ::cordl_internals::getStaticField<int32_t, "s_Id", ::UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo>();
}
inline void UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo::_ctor(::System::Delegate* d, float_t invocationTime, ::ArrayW<::System::Object*> p) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Delegate*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, d, invocationTime, p);
}
inline float_t UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo::get_InvocationTime() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo>(), { "get_InvocationTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo::set_InvocationTime(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo>(), { "set_InvocationTime", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::StringW UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo::ToString() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo::Invoke() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo>(), { "Invoke", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Id", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Delegate", ty: "::System::Delegate*", modifiers: "", def_value: Some("{}") },
// CppParam { name: "m_Target", ty: "::ArrayW<::System::Object*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_InvocationTime_k__BackingField", ty: "float_t", modifiers: "", def_value:
// Some("{}") }]
constexpr ::UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo::DelayedActionManager_DelegateInfo(int32_t m_Id, ::System::Delegate* m_Delegate,
                                                                                                                        ::ArrayW<::System::Object*> m_Target,
                                                                                                                        float_t _InvocationTime_k__BackingField) noexcept {
  this->m_Id = m_Id;
  this->m_Delegate = m_Delegate;
  this->m_Target = m_Target;
  this->_InvocationTime_k__BackingField = _InvocationTime_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo::DelayedActionManager_DelegateInfo() {}
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::DelayedActionManager.GetNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::LinkedListNode_1<::UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo>* (
    ::UnityEngine::ResourceManagement::Util::DelayedActionManager::*)(::by_ref<::UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo>)>(
    &::UnityEngine::ResourceManagement::Util::DelayedActionManager::GetNode)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x6915870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::DelayedActionManager*>(),
                                                             { "GetNode", {}, { ::i2c::type_of<::by_ref<::UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::DelayedActionManager.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::ResourceManagement::Util::DelayedActionManager::Clear)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x691596c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::DelayedActionManager*>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::DelayedActionManager.DestroyWhenComplete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::Util::DelayedActionManager::*)()>(
    &::UnityEngine::ResourceManagement::Util::DelayedActionManager::DestroyWhenComplete)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x69159e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::DelayedActionManager*>(), { "DestroyWhenComplete", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::DelayedActionManager.AddAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Delegate*, float_t, ::ArrayW<::System::Object*>)>(
    &::UnityEngine::ResourceManagement::Util::DelayedActionManager::AddAction)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x69159f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::DelayedActionManager*>(),
                                                { "AddAction", {}, { ::i2c::type_of<::System::Delegate*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::DelayedActionManager.AddActionInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::Util::DelayedActionManager::*)(::System::Delegate*, float_t, ::ArrayW<::System::Object*>)>(
    &::UnityEngine::ResourceManagement::Util::DelayedActionManager::AddActionInternal)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x6915a6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::DelayedActionManager*>(),
                                                { "AddActionInternal", {}, { ::i2c::type_of<::System::Delegate*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::DelayedActionManager.get_IsActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::ResourceManagement::Util::DelayedActionManager::get_IsActive)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x6915d8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::DelayedActionManager*>(), { "get_IsActive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::DelayedActionManager.Wait
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(float_t, float_t)>(&::UnityEngine::ResourceManagement::Util::DelayedActionManager::Wait)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x6915eb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::DelayedActionManager*>(), { "Wait", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::DelayedActionManager.LateUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::Util::DelayedActionManager::*)()>(
    &::UnityEngine::ResourceManagement::Util::DelayedActionManager::LateUpdate)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x691638c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::DelayedActionManager*>(), { "LateUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::DelayedActionManager.InternalLateUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::Util::DelayedActionManager::*)(float_t)>(
    &::UnityEngine::ResourceManagement::Util::DelayedActionManager::InternalLateUpdate)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x6916058;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::DelayedActionManager*>(), { "InternalLateUpdate", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::DelayedActionManager.OnApplicationQuit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::Util::DelayedActionManager::*)()>(
    &::UnityEngine::ResourceManagement::Util::DelayedActionManager::OnApplicationQuit)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6916538;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::DelayedActionManager*>(), { "OnApplicationQuit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::DelayedActionManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::Util::DelayedActionManager::*)()>(
    &::UnityEngine::ResourceManagement::Util::DelayedActionManager::_ctor)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x69165f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::DelayedActionManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo>*>&
UnityEngine::ResourceManagement::Util::DelayedActionManager::__cordl_internal_get_m_Actions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Actions;
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo>*> const&
UnityEngine::ResourceManagement::Util::DelayedActionManager::__cordl_internal_get_m_Actions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Actions;
}
constexpr void UnityEngine::ResourceManagement::Util::DelayedActionManager::__cordl_internal_set_m_Actions(
    ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Actions = value;
}
constexpr ::System::Collections::Generic::LinkedList_1<::UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo>*&
UnityEngine::ResourceManagement::Util::DelayedActionManager::__cordl_internal_get_m_DelayedActions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DelayedActions;
}
constexpr ::System::Collections::Generic::LinkedList_1<::UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo>* const&
UnityEngine::ResourceManagement::Util::DelayedActionManager::__cordl_internal_get_m_DelayedActions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DelayedActions;
}
constexpr void UnityEngine::ResourceManagement::Util::DelayedActionManager::__cordl_internal_set_m_DelayedActions(
    ::System::Collections::Generic::LinkedList_1<::UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DelayedActions = value;
}
constexpr ::System::Collections::Generic::Stack_1<::System::Collections::Generic::LinkedListNode_1<::UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo>*>*&
UnityEngine::ResourceManagement::Util::DelayedActionManager::__cordl_internal_get_m_NodeCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NodeCache;
}
constexpr ::System::Collections::Generic::Stack_1<::System::Collections::Generic::LinkedListNode_1<::UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo>*>* const&
UnityEngine::ResourceManagement::Util::DelayedActionManager::__cordl_internal_get_m_NodeCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NodeCache;
}
constexpr void UnityEngine::ResourceManagement::Util::DelayedActionManager::__cordl_internal_set_m_NodeCache(
    ::System::Collections::Generic::Stack_1<::System::Collections::Generic::LinkedListNode_1<::UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NodeCache = value;
}
constexpr int32_t& UnityEngine::ResourceManagement::Util::DelayedActionManager::__cordl_internal_get_m_CollectionIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CollectionIndex;
}
constexpr int32_t const& UnityEngine::ResourceManagement::Util::DelayedActionManager::__cordl_internal_get_m_CollectionIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CollectionIndex;
}
constexpr void UnityEngine::ResourceManagement::Util::DelayedActionManager::__cordl_internal_set_m_CollectionIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CollectionIndex = value;
}
constexpr bool& UnityEngine::ResourceManagement::Util::DelayedActionManager::__cordl_internal_get_m_DestroyOnCompletion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DestroyOnCompletion;
}
constexpr bool const& UnityEngine::ResourceManagement::Util::DelayedActionManager::__cordl_internal_get_m_DestroyOnCompletion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DestroyOnCompletion;
}
constexpr void UnityEngine::ResourceManagement::Util::DelayedActionManager::__cordl_internal_set_m_DestroyOnCompletion(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DestroyOnCompletion = value;
}
inline ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo>*
UnityEngine::ResourceManagement::Util::DelayedActionManager::GetNode(::by_ref<::UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo> del) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::DelayedActionManager*>(),
                                                           { "GetNode", {}, { ::i2c::type_of<::by_ref<::UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::LinkedListNode_1<::UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo>*>(this, ___internal_method,
                                                                                                                                                                            del);
}
inline void UnityEngine::ResourceManagement::Util::DelayedActionManager::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::DelayedActionManager*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::ResourceManagement::Util::DelayedActionManager::DestroyWhenComplete() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::DelayedActionManager*>(), { "DestroyWhenComplete", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::Util::DelayedActionManager::AddAction(::System::Delegate* action, float_t delay, ::ArrayW<::System::Object*> parameters) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::DelayedActionManager*>(),
                                                           { "AddAction", {}, { ::i2c::type_of<::System::Delegate*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, action, delay, parameters);
}
inline void UnityEngine::ResourceManagement::Util::DelayedActionManager::AddActionInternal(::System::Delegate* action, float_t delay, ::ArrayW<::System::Object*> parameters) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::DelayedActionManager*>(),
                                              { "AddActionInternal", {}, { ::i2c::type_of<::System::Delegate*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action, delay, parameters);
}
inline bool UnityEngine::ResourceManagement::Util::DelayedActionManager::get_IsActive() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::DelayedActionManager*>(), { "get_IsActive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::ResourceManagement::Util::DelayedActionManager::Wait(float_t timeout, float_t timeAdvanceAmount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::DelayedActionManager*>(), { "Wait", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, timeout, timeAdvanceAmount);
}
inline void UnityEngine::ResourceManagement::Util::DelayedActionManager::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::DelayedActionManager*>(), { "LateUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::Util::DelayedActionManager::InternalLateUpdate(float_t t) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::DelayedActionManager*>(), { "InternalLateUpdate", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t);
}
inline void UnityEngine::ResourceManagement::Util::DelayedActionManager::OnApplicationQuit() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::DelayedActionManager*>(), { "OnApplicationQuit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::Util::DelayedActionManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::DelayedActionManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::Util::DelayedActionManager* UnityEngine::ResourceManagement::Util::DelayedActionManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ResourceManagement::Util::DelayedActionManager*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::Util::DelayedActionManager::DelayedActionManager() {}
