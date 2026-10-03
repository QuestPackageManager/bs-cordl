#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/LayoutManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutDataStore_impl.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutHandle_impl.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutManager_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentQueue_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "System/zzzz__EventArgs_def.hpp"
#include "System/zzzz__EventHandler_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutBaselineFunction_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutConfig_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutDataAccess_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutHandle_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutManager_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutMeasureFunction_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutNode_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__ManagedObjectStore_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::UIElements::Layout::LayoutManager_SharedManagerState::LayoutManager_SharedManagerState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Layout::LayoutManager_SharedManagerState::LayoutManager_SharedManagerState() {}
constexpr ::UnityEngine::UIElements::Layout::LayoutManager_SharedManagerState UnityEngine::UIElements::Layout::LayoutManager_SharedManagerState::Uninitialized{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::Layout::LayoutManager_SharedManagerState UnityEngine::UIElements::Layout::LayoutManager_SharedManagerState::Initialized{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UIElements::Layout::LayoutManager_SharedManagerState UnityEngine::UIElements::Layout::LayoutManager_SharedManagerState::Shutdown{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutManager___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Layout::LayoutManager___c::*)()>(&::UnityEngine::UIElements::Layout::LayoutManager___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x7195108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutManager___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutManager___c._Initialize_b__9_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Layout::LayoutManager___c::*)(::System::Object*, ::System::EventArgs*)>(
    &::UnityEngine::UIElements::Layout::LayoutManager___c::_Initialize_b__9_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x719510c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutManager___c*>(),
                                                             { "<Initialize>b__9_0", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::EventArgs*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::Layout::LayoutManager___c::setStaticF___9(::UnityEngine::UIElements::Layout::LayoutManager___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::Layout::LayoutManager___c*, "<>9", ::UnityEngine::UIElements::Layout::LayoutManager___c*>(
      std::forward<::UnityEngine::UIElements::Layout::LayoutManager___c*>(value));
}
inline ::UnityEngine::UIElements::Layout::LayoutManager___c* UnityEngine::UIElements::Layout::LayoutManager___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::Layout::LayoutManager___c*, "<>9", ::UnityEngine::UIElements::Layout::LayoutManager___c*>();
}
inline void UnityEngine::UIElements::Layout::LayoutManager___c::setStaticF___9__9_0(::System::EventHandler* value) {
  ::cordl_internals::setStaticField<::System::EventHandler*, "<>9__9_0", ::UnityEngine::UIElements::Layout::LayoutManager___c*>(std::forward<::System::EventHandler*>(value));
}
inline ::System::EventHandler* UnityEngine::UIElements::Layout::LayoutManager___c::getStaticF___9__9_0() {
  return ::cordl_internals::getStaticField<::System::EventHandler*, "<>9__9_0", ::UnityEngine::UIElements::Layout::LayoutManager___c*>();
}
inline void UnityEngine::UIElements::Layout::LayoutManager___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutManager___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Layout::LayoutManager___c::_Initialize_b__9_0(::System::Object* _, ::System::EventArgs* __) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutManager___c*>(),
                                                           { "<Initialize>b__9_0", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::EventArgs*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _, __);
}
inline ::UnityEngine::UIElements::Layout::LayoutManager___c* UnityEngine::UIElements::Layout::LayoutManager___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::Layout::LayoutManager___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Layout::LayoutManager___c::LayoutManager___c() {}
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutManager.get_IsSharedManagerCreated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::UIElements::Layout::LayoutManager::get_IsSharedManagerCreated)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x71931e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutManager*>(), { "get_IsSharedManagerCreated", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutManager.get_SharedManager
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Layout::LayoutManager* (*)()>(&::UnityEngine::UIElements::Layout::LayoutManager::get_SharedManager)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x719324c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutManager*>(), { "get_SharedManager", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutManager.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::UIElements::Layout::LayoutManager::Initialize)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x71932ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutManager*>(), { "Initialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutManager.Shutdown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::UIElements::Layout::LayoutManager::Shutdown)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x71934c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutManager*>(), { "Shutdown", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutManager.get_DefaultCapacity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::UIElements::Layout::LayoutManager::get_DefaultCapacity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7193780;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutManager*>(), { "get_DefaultCapacity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutManager.GetManager
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Layout::LayoutManager* (*)(int32_t)>(&::UnityEngine::UIElements::Layout::LayoutManager::GetManager)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x7193788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutManager*>(), { "GetManager", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Layout::LayoutManager::*)(::Unity::Collections::Allocator)>(
    &::UnityEngine::UIElements::Layout::LayoutManager::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x7193454;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutManager*>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Collections::Allocator>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Layout::LayoutManager::*)(::Unity::Collections::Allocator, int32_t)>(
    &::UnityEngine::UIElements::Layout::LayoutManager::_ctor)> {
  constexpr static std::size_t size = 0x6ac;
  constexpr static std::size_t addrs = 0x7193864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutManager*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Unity::Collections::Allocator>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutManager.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Layout::LayoutManager::*)()>(&::UnityEngine::UIElements::Layout::LayoutManager::Dispose)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x7193558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutManager*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutManager.GetAccess
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Layout::LayoutDataAccess (::UnityEngine::UIElements::Layout::LayoutManager::*)()>(
    &::UnityEngine::UIElements::Layout::LayoutManager::GetAccess)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x7193ff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutManager*>(), { "GetAccess", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutManager.GetDefaultConfig
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Layout::LayoutConfig (::UnityEngine::UIElements::Layout::LayoutManager::*)()>(
    &::UnityEngine::UIElements::Layout::LayoutManager::GetDefaultConfig)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x7194054;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutManager*>(), { "GetDefaultConfig", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutManager.CreateConfig
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Layout::LayoutConfig (::UnityEngine::UIElements::Layout::LayoutManager::*)()>(
    &::UnityEngine::UIElements::Layout::LayoutManager::CreateConfig)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x7193f10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutManager*>(), { "CreateConfig", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutManager.DestroyConfig
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Layout::LayoutManager::*)(::by_ref<::UnityEngine::UIElements::Layout::LayoutConfig>)>(
    &::UnityEngine::UIElements::Layout::LayoutManager::DestroyConfig)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x71940bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutManager*>(),
                                                                                           { "DestroyConfig", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::Layout::LayoutConfig>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutManager.CreateNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Layout::LayoutNode (::UnityEngine::UIElements::Layout::LayoutManager::*)()>(
    &::UnityEngine::UIElements::Layout::LayoutManager::CreateNode)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x71940f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutManager*>(), { "CreateNode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutManager.CreateNodeInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Layout::LayoutNode (::UnityEngine::UIElements::Layout::LayoutManager::*)(
    ::UnityEngine::UIElements::Layout::LayoutHandle)>(&::UnityEngine::UIElements::Layout::LayoutManager::CreateNodeInternal)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x719412c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutManager*>(),
                                                                                           { "CreateNodeInternal", {}, { ::i2c::type_of<::UnityEngine::UIElements::Layout::LayoutHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutManager.TryRecycleSingleNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Layout::LayoutManager::*)()>(&::UnityEngine::UIElements::Layout::LayoutManager::TryRecycleSingleNode)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x71943f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutManager*>(), { "TryRecycleSingleNode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutManager.TryRecycleNodes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Layout::LayoutManager::*)()>(&::UnityEngine::UIElements::Layout::LayoutManager::TryRecycleNodes)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x71946a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutManager*>(), { "TryRecycleNodes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutManager.EnqueueNodeForRecycling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Layout::LayoutManager::*)(::by_ref<::UnityEngine::UIElements::Layout::LayoutNode>)>(
    &::UnityEngine::UIElements::Layout::LayoutManager::EnqueueNodeForRecycling)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x7194724;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutManager*>(),
                                                             { "EnqueueNodeForRecycling", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::Layout::LayoutNode>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutManager.FreeNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Layout::LayoutManager::*)(::UnityEngine::UIElements::Layout::LayoutHandle)>(
    &::UnityEngine::UIElements::Layout::LayoutManager::FreeNode)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x719446c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutManager*>(),
                                                                                           { "FreeNode", {}, { ::i2c::type_of<::UnityEngine::UIElements::Layout::LayoutHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutManager.Collect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Layout::LayoutManager::*)()>(&::UnityEngine::UIElements::Layout::LayoutManager::Collect)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x71947a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutManager*>(), { "Collect", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutManager.GetOwner
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::VisualElement* (
    ::UnityEngine::UIElements::Layout::LayoutManager::*)(::UnityEngine::UIElements::Layout::LayoutHandle)>(&::UnityEngine::UIElements::Layout::LayoutManager::GetOwner)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x719488c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutManager*>(),
                                                                                           { "GetOwner", {}, { ::i2c::type_of<::UnityEngine::UIElements::Layout::LayoutHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutManager.SetOwner
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Layout::LayoutManager::*)(
    ::UnityEngine::UIElements::Layout::LayoutHandle, ::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::UIElements::Layout::LayoutManager::SetOwner)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x7194a2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutManager*>(),
                                         { "SetOwner", {}, { ::i2c::type_of<::UnityEngine::UIElements::Layout::LayoutHandle>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutManager.GetMeasureFunction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Layout::LayoutMeasureFunction* (
    ::UnityEngine::UIElements::Layout::LayoutManager::*)(::UnityEngine::UIElements::Layout::LayoutHandle)>(&::UnityEngine::UIElements::Layout::LayoutManager::GetMeasureFunction)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x7194b50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutManager*>(),
                                                                                           { "GetMeasureFunction", {}, { ::i2c::type_of<::UnityEngine::UIElements::Layout::LayoutHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutManager.SetMeasureFunction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Layout::LayoutManager::*)(
    ::UnityEngine::UIElements::Layout::LayoutHandle, ::UnityEngine::UIElements::Layout::LayoutMeasureFunction*)>(&::UnityEngine::UIElements::Layout::LayoutManager::SetMeasureFunction)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x7194bf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutManager*>(),
            { "SetMeasureFunction", {}, { ::i2c::type_of<::UnityEngine::UIElements::Layout::LayoutHandle>(), ::i2c::type_of<::UnityEngine::UIElements::Layout::LayoutMeasureFunction*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutManager.GetBaselineFunction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Layout::LayoutBaselineFunction* (
    ::UnityEngine::UIElements::Layout::LayoutManager::*)(::UnityEngine::UIElements::Layout::LayoutHandle)>(&::UnityEngine::UIElements::Layout::LayoutManager::GetBaselineFunction)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x7194cb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutManager*>(),
                                                                                           { "GetBaselineFunction", {}, { ::i2c::type_of<::UnityEngine::UIElements::Layout::LayoutHandle>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::UIElements::Layout::LayoutManager::__cordl_internal_get_m_Index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Index;
}
constexpr int32_t const& UnityEngine::UIElements::Layout::LayoutManager::__cordl_internal_get_m_Index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Index;
}
constexpr void UnityEngine::UIElements::Layout::LayoutManager::__cordl_internal_set_m_Index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Index = value;
}
constexpr ::UnityEngine::UIElements::Layout::LayoutDataStore& UnityEngine::UIElements::Layout::LayoutManager::__cordl_internal_get_m_Nodes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Nodes;
}
constexpr ::UnityEngine::UIElements::Layout::LayoutDataStore const& UnityEngine::UIElements::Layout::LayoutManager::__cordl_internal_get_m_Nodes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Nodes;
}
constexpr void UnityEngine::UIElements::Layout::LayoutManager::__cordl_internal_set_m_Nodes(::UnityEngine::UIElements::Layout::LayoutDataStore value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Nodes = value;
}
constexpr ::UnityEngine::UIElements::Layout::LayoutDataStore& UnityEngine::UIElements::Layout::LayoutManager::__cordl_internal_get_m_Configs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Configs;
}
constexpr ::UnityEngine::UIElements::Layout::LayoutDataStore const& UnityEngine::UIElements::Layout::LayoutManager::__cordl_internal_get_m_Configs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Configs;
}
constexpr void UnityEngine::UIElements::Layout::LayoutManager::__cordl_internal_set_m_Configs(::UnityEngine::UIElements::Layout::LayoutDataStore value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Configs = value;
}
constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<::UnityEngine::UIElements::Layout::LayoutHandle>*& UnityEngine::UIElements::Layout::LayoutManager::__cordl_internal_get_m_NodesToFree() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NodesToFree;
}
constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<::UnityEngine::UIElements::Layout::LayoutHandle>* const&
UnityEngine::UIElements::Layout::LayoutManager::__cordl_internal_get_m_NodesToFree() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NodesToFree;
}
constexpr void
UnityEngine::UIElements::Layout::LayoutManager::__cordl_internal_set_m_NodesToFree(::System::Collections::Concurrent::ConcurrentQueue_1<::UnityEngine::UIElements::Layout::LayoutHandle>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NodesToFree = value;
}
constexpr ::UnityEngine::UIElements::Layout::LayoutHandle& UnityEngine::UIElements::Layout::LayoutManager::__cordl_internal_get_m_DefaultConfig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultConfig;
}
constexpr ::UnityEngine::UIElements::Layout::LayoutHandle const& UnityEngine::UIElements::Layout::LayoutManager::__cordl_internal_get_m_DefaultConfig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultConfig;
}
constexpr void UnityEngine::UIElements::Layout::LayoutManager::__cordl_internal_set_m_DefaultConfig(::UnityEngine::UIElements::Layout::LayoutHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DefaultConfig = value;
}
constexpr ::UnityEngine::UIElements::Layout::ManagedObjectStore_1<::UnityEngine::UIElements::Layout::LayoutMeasureFunction*>*&
UnityEngine::UIElements::Layout::LayoutManager::__cordl_internal_get_m_ManagedMeasureFunctions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ManagedMeasureFunctions;
}
constexpr ::UnityEngine::UIElements::Layout::ManagedObjectStore_1<::UnityEngine::UIElements::Layout::LayoutMeasureFunction*>* const&
UnityEngine::UIElements::Layout::LayoutManager::__cordl_internal_get_m_ManagedMeasureFunctions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ManagedMeasureFunctions;
}
constexpr void UnityEngine::UIElements::Layout::LayoutManager::__cordl_internal_set_m_ManagedMeasureFunctions(
    ::UnityEngine::UIElements::Layout::ManagedObjectStore_1<::UnityEngine::UIElements::Layout::LayoutMeasureFunction*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ManagedMeasureFunctions = value;
}
constexpr ::UnityEngine::UIElements::Layout::ManagedObjectStore_1<::UnityEngine::UIElements::Layout::LayoutBaselineFunction*>*&
UnityEngine::UIElements::Layout::LayoutManager::__cordl_internal_get_m_ManagedBaselineFunctions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ManagedBaselineFunctions;
}
constexpr ::UnityEngine::UIElements::Layout::ManagedObjectStore_1<::UnityEngine::UIElements::Layout::LayoutBaselineFunction*>* const&
UnityEngine::UIElements::Layout::LayoutManager::__cordl_internal_get_m_ManagedBaselineFunctions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ManagedBaselineFunctions;
}
constexpr void UnityEngine::UIElements::Layout::LayoutManager::__cordl_internal_set_m_ManagedBaselineFunctions(
    ::UnityEngine::UIElements::Layout::ManagedObjectStore_1<::UnityEngine::UIElements::Layout::LayoutBaselineFunction*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ManagedBaselineFunctions = value;
}
constexpr ::UnityEngine::UIElements::Layout::ManagedObjectStore_1<::System::Runtime::InteropServices::GCHandle>*&
UnityEngine::UIElements::Layout::LayoutManager::__cordl_internal_get_m_ManagedOwners() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ManagedOwners;
}
constexpr ::UnityEngine::UIElements::Layout::ManagedObjectStore_1<::System::Runtime::InteropServices::GCHandle>* const&
UnityEngine::UIElements::Layout::LayoutManager::__cordl_internal_get_m_ManagedOwners() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ManagedOwners;
}
constexpr void
UnityEngine::UIElements::Layout::LayoutManager::__cordl_internal_set_m_ManagedOwners(::UnityEngine::UIElements::Layout::ManagedObjectStore_1<::System::Runtime::InteropServices::GCHandle>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ManagedOwners = value;
}
constexpr ::Unity::Profiling::ProfilerMarker& UnityEngine::UIElements::Layout::LayoutManager::__cordl_internal_get_m_CollectMarker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CollectMarker;
}
constexpr ::Unity::Profiling::ProfilerMarker const& UnityEngine::UIElements::Layout::LayoutManager::__cordl_internal_get_m_CollectMarker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CollectMarker;
}
constexpr void UnityEngine::UIElements::Layout::LayoutManager::__cordl_internal_set_m_CollectMarker(::Unity::Profiling::ProfilerMarker value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CollectMarker = value;
}
constexpr int32_t& UnityEngine::UIElements::Layout::LayoutManager::__cordl_internal_get_m_HighMark() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HighMark;
}
constexpr int32_t const& UnityEngine::UIElements::Layout::LayoutManager::__cordl_internal_get_m_HighMark() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HighMark;
}
constexpr void UnityEngine::UIElements::Layout::LayoutManager::__cordl_internal_set_m_HighMark(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HighMark = value;
}
inline void UnityEngine::UIElements::Layout::LayoutManager::setStaticF_s_Initialized(::UnityEngine::UIElements::Layout::LayoutManager_SharedManagerState value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::Layout::LayoutManager_SharedManagerState, "s_Initialized", ::UnityEngine::UIElements::Layout::LayoutManager*>(
      std::forward<::UnityEngine::UIElements::Layout::LayoutManager_SharedManagerState>(value));
}
inline ::UnityEngine::UIElements::Layout::LayoutManager_SharedManagerState UnityEngine::UIElements::Layout::LayoutManager::getStaticF_s_Initialized() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::Layout::LayoutManager_SharedManagerState, "s_Initialized", ::UnityEngine::UIElements::Layout::LayoutManager*>();
}
inline void UnityEngine::UIElements::Layout::LayoutManager::setStaticF_s_AppDomainUnloadRegistered(bool value) {
  ::cordl_internals::setStaticField<bool, "s_AppDomainUnloadRegistered", ::UnityEngine::UIElements::Layout::LayoutManager*>(std::forward<bool>(value));
}
inline bool UnityEngine::UIElements::Layout::LayoutManager::getStaticF_s_AppDomainUnloadRegistered() {
  return ::cordl_internals::getStaticField<bool, "s_AppDomainUnloadRegistered", ::UnityEngine::UIElements::Layout::LayoutManager*>();
}
inline void UnityEngine::UIElements::Layout::LayoutManager::setStaticF_s_SharedInstance(::UnityEngine::UIElements::Layout::LayoutManager* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::Layout::LayoutManager*, "s_SharedInstance", ::UnityEngine::UIElements::Layout::LayoutManager*>(
      std::forward<::UnityEngine::UIElements::Layout::LayoutManager*>(value));
}
inline ::UnityEngine::UIElements::Layout::LayoutManager* UnityEngine::UIElements::Layout::LayoutManager::getStaticF_s_SharedInstance() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::Layout::LayoutManager*, "s_SharedInstance", ::UnityEngine::UIElements::Layout::LayoutManager*>();
}
inline void UnityEngine::UIElements::Layout::LayoutManager::setStaticF_s_Managers(::System::Collections::Generic::List_1<::UnityEngine::UIElements::Layout::LayoutManager*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::Layout::LayoutManager*>*, "s_Managers", ::UnityEngine::UIElements::Layout::LayoutManager*>(
      std::forward<::System::Collections::Generic::List_1<::UnityEngine::UIElements::Layout::LayoutManager*>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Layout::LayoutManager*>* UnityEngine::UIElements::Layout::LayoutManager::getStaticF_s_Managers() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::Layout::LayoutManager*>*, "s_Managers",
                                           ::UnityEngine::UIElements::Layout::LayoutManager*>();
}
inline bool UnityEngine::UIElements::Layout::LayoutManager::get_IsSharedManagerCreated() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutManager*>(), { "get_IsSharedManagerCreated", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::UnityEngine::UIElements::Layout::LayoutManager* UnityEngine::UIElements::Layout::LayoutManager::get_SharedManager() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutManager*>(), { "get_SharedManager", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Layout::LayoutManager*>(nullptr, ___internal_method);
}
inline void UnityEngine::UIElements::Layout::LayoutManager::Initialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutManager*>(), { "Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::UIElements::Layout::LayoutManager::Shutdown() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutManager*>(), { "Shutdown", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::UIElements::Layout::LayoutManager::get_DefaultCapacity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutManager*>(), { "get_DefaultCapacity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline ::UnityEngine::UIElements::Layout::LayoutManager* UnityEngine::UIElements::Layout::LayoutManager::GetManager(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutManager*>(), { "GetManager", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Layout::LayoutManager*>(nullptr, ___internal_method, index);
}
inline void UnityEngine::UIElements::Layout::LayoutManager::_ctor(::Unity::Collections::Allocator allocator) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutManager*>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Collections::Allocator>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, allocator);
}
inline void UnityEngine::UIElements::Layout::LayoutManager::_ctor(::Unity::Collections::Allocator allocator, int32_t initialNodeCapacity) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutManager*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Unity::Collections::Allocator>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, allocator, initialNodeCapacity);
}
inline void UnityEngine::UIElements::Layout::LayoutManager::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutManager*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::Layout::LayoutDataAccess UnityEngine::UIElements::Layout::LayoutManager::GetAccess() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutManager*>(), { "GetAccess", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Layout::LayoutDataAccess>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::Layout::LayoutConfig UnityEngine::UIElements::Layout::LayoutManager::GetDefaultConfig() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutManager*>(), { "GetDefaultConfig", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Layout::LayoutConfig>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::Layout::LayoutConfig UnityEngine::UIElements::Layout::LayoutManager::CreateConfig() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutManager*>(), { "CreateConfig", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Layout::LayoutConfig>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Layout::LayoutManager::DestroyConfig(::by_ref<::UnityEngine::UIElements::Layout::LayoutConfig> config) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutManager*>(),
                                                                                         { "DestroyConfig", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::Layout::LayoutConfig>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, config);
}
inline ::UnityEngine::UIElements::Layout::LayoutNode UnityEngine::UIElements::Layout::LayoutManager::CreateNode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutManager*>(), { "CreateNode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Layout::LayoutNode>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::Layout::LayoutNode UnityEngine::UIElements::Layout::LayoutManager::CreateNodeInternal(::UnityEngine::UIElements::Layout::LayoutHandle configHandle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutManager*>(),
                                                                                         { "CreateNodeInternal", {}, { ::i2c::type_of<::UnityEngine::UIElements::Layout::LayoutHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Layout::LayoutNode>(this, ___internal_method, configHandle);
}
inline void UnityEngine::UIElements::Layout::LayoutManager::TryRecycleSingleNode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutManager*>(), { "TryRecycleSingleNode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Layout::LayoutManager::TryRecycleNodes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutManager*>(), { "TryRecycleNodes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Layout::LayoutManager::EnqueueNodeForRecycling(::by_ref<::UnityEngine::UIElements::Layout::LayoutNode> node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutManager*>(),
                                                           { "EnqueueNodeForRecycling", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::Layout::LayoutNode>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline void UnityEngine::UIElements::Layout::LayoutManager::FreeNode(::UnityEngine::UIElements::Layout::LayoutHandle handle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutManager*>(),
                                                                                         { "FreeNode", {}, { ::i2c::type_of<::UnityEngine::UIElements::Layout::LayoutHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle);
}
inline void UnityEngine::UIElements::Layout::LayoutManager::Collect() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutManager*>(), { "Collect", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::Layout::LayoutManager::GetOwner(::UnityEngine::UIElements::Layout::LayoutHandle handle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutManager*>(),
                                                                                         { "GetOwner", {}, { ::i2c::type_of<::UnityEngine::UIElements::Layout::LayoutHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*>(this, ___internal_method, handle);
}
inline void UnityEngine::UIElements::Layout::LayoutManager::SetOwner(::UnityEngine::UIElements::Layout::LayoutHandle handle, ::UnityEngine::UIElements::VisualElement* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutManager*>(),
                                              { "SetOwner", {}, { ::i2c::type_of<::UnityEngine::UIElements::Layout::LayoutHandle>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle, value);
}
inline ::UnityEngine::UIElements::Layout::LayoutMeasureFunction* UnityEngine::UIElements::Layout::LayoutManager::GetMeasureFunction(::UnityEngine::UIElements::Layout::LayoutHandle handle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutManager*>(),
                                                                                         { "GetMeasureFunction", {}, { ::i2c::type_of<::UnityEngine::UIElements::Layout::LayoutHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Layout::LayoutMeasureFunction*>(this, ___internal_method, handle);
}
inline void UnityEngine::UIElements::Layout::LayoutManager::SetMeasureFunction(::UnityEngine::UIElements::Layout::LayoutHandle handle,
                                                                               ::UnityEngine::UIElements::Layout::LayoutMeasureFunction* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutManager*>(),
          { "SetMeasureFunction", {}, { ::i2c::type_of<::UnityEngine::UIElements::Layout::LayoutHandle>(), ::i2c::type_of<::UnityEngine::UIElements::Layout::LayoutMeasureFunction*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle, value);
}
inline ::UnityEngine::UIElements::Layout::LayoutBaselineFunction* UnityEngine::UIElements::Layout::LayoutManager::GetBaselineFunction(::UnityEngine::UIElements::Layout::LayoutHandle handle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutManager*>(),
                                                                                         { "GetBaselineFunction", {}, { ::i2c::type_of<::UnityEngine::UIElements::Layout::LayoutHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Layout::LayoutBaselineFunction*>(this, ___internal_method, handle);
}
inline ::UnityEngine::UIElements::Layout::LayoutManager* UnityEngine::UIElements::Layout::LayoutManager::New_ctor(::Unity::Collections::Allocator allocator) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::Layout::LayoutManager*>(allocator));
}
inline ::UnityEngine::UIElements::Layout::LayoutManager* UnityEngine::UIElements::Layout::LayoutManager::New_ctor(::Unity::Collections::Allocator allocator, int32_t initialNodeCapacity) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::Layout::LayoutManager*>(allocator, initialNodeCapacity));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::UIElements::Layout::LayoutManager::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::UIElements::Layout::LayoutManager::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Layout::LayoutManager::LayoutManager() {}
