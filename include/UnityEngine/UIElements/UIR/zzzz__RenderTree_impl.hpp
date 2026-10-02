#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/RenderTree.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__DepthOrderedDirtyTracking_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TextureId_impl.hpp"
#include "UnityEngine/zzzz__RectInt_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderTree_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__ChainBuilderStats_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__DepthOrderedDirtyTracking_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__GCHandlePool_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderChainCommand_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderData_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderTreeManager_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderTree_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::UIElements::UIR::RenderTree_AllowedClasses::RenderTree_AllowedClasses(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::RenderTree_AllowedClasses::RenderTree_AllowedClasses() {}
constexpr ::UnityEngine::UIElements::UIR::RenderTree_AllowedClasses UnityEngine::UIElements::UIR::RenderTree_AllowedClasses::Clipping{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UIElements::UIR::RenderTree_AllowedClasses UnityEngine::UIElements::UIR::RenderTree_AllowedClasses::Opacity{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::UIElements::UIR::RenderTree_AllowedClasses UnityEngine::UIElements::UIR::RenderTree_AllowedClasses::Color{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::UIElements::UIR::RenderTree_AllowedClasses UnityEngine::UIElements::UIR::RenderTree_AllowedClasses::TransformSize{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::UIElements::UIR::RenderTree_AllowedClasses UnityEngine::UIElements::UIR::RenderTree_AllowedClasses::Visuals{ static_cast<int32_t>(0x10) };
constexpr ::UnityEngine::UIElements::UIR::RenderTree_AllowedClasses UnityEngine::UIElements::UIR::RenderTree_AllowedClasses::All{ static_cast<int32_t>(0x1f) };
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTree.get_renderTreeManager
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::UIR::RenderTreeManager* (::UnityEngine::UIElements::UIR::RenderTree::*)()>(
    &::UnityEngine::UIElements::UIR::RenderTree::get_renderTreeManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x717bfa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTree*>(), { "get_renderTreeManager", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTree.get_rootRenderData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::UIR::RenderData* (::UnityEngine::UIElements::UIR::RenderTree::*)()>(
    &::UnityEngine::UIElements::UIR::RenderTree::get_rootRenderData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x717bfa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTree*>(), { "get_rootRenderData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTree.get_dirtyTracker
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::UnityEngine::UIElements::UIR::DepthOrderedDirtyTracking> (::UnityEngine::UIElements::UIR::RenderTree::*)()>(
    &::UnityEngine::UIElements::UIR::RenderTree::get_dirtyTracker)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7179408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTree*>(), { "get_dirtyTracker", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTree.get_firstCommand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::UIR::RenderChainCommand* (::UnityEngine::UIElements::UIR::RenderTree::*)()>(
    &::UnityEngine::UIElements::UIR::RenderTree::get_firstCommand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x717bfb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTree*>(), { "get_firstCommand", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTree.get_isRootRenderTree
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UIR::RenderTree::*)()>(&::UnityEngine::UIElements::UIR::RenderTree::get_isRootRenderTree)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x717bfb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTree*>(), { "get_isRootRenderTree", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTree.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTree::*)(
    ::UnityEngine::UIElements::UIR::RenderTreeManager*, ::UnityEngine::UIElements::UIR::RenderData*)>(&::UnityEngine::UIElements::UIR::RenderTree::Init)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x717bff4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTree*>(),
                                         { "Init", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTree.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTree::*)()>(&::UnityEngine::UIElements::UIR::RenderTree::Reset)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x717c124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTree*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTree.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTree::*)()>(&::UnityEngine::UIElements::UIR::RenderTree::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x717c138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTree*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTree.DepthFirstResetTextures
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTree::*)(::UnityEngine::UIElements::UIR::RenderData*)>(
    &::UnityEngine::UIElements::UIR::RenderTree::DepthFirstResetTextures)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x717c148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTree*>(),
                                                                                           { "DepthFirstResetTextures", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTree.OnRenderDataTransformOrSizeChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTree::*)(::UnityEngine::UIElements::UIR::RenderData*, bool, bool)>(
    &::UnityEngine::UIElements::UIR::RenderTree::OnRenderDataTransformOrSizeChanged)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x717c1a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTree*>(),
                            { "OnRenderDataTransformOrSizeChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTree.OnRenderDataOpacityIdChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTree::*)(::UnityEngine::UIElements::UIR::RenderData*)>(
    &::UnityEngine::UIElements::UIR::RenderTree::OnRenderDataOpacityIdChanged)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x717c244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTree*>(),
                                                                                           { "OnRenderDataOpacityIdChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTree.OnRenderDataVisualsChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTree::*)(::UnityEngine::UIElements::UIR::RenderData*, bool)>(
    &::UnityEngine::UIElements::UIR::RenderTree::OnRenderDataVisualsChanged)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x717c2c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTree*>(),
                                                             { "OnRenderDataVisualsChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTree.ProcessChanges
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTree::*)(::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats>)>(
    &::UnityEngine::UIElements::UIR::RenderTree::ProcessChanges)> {
  constexpr static std::size_t size = 0x5d0;
  constexpr static std::size_t addrs = 0x717c354;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTree*>(),
                                                             { "ProcessChanges", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTree.OnRenderCommandAdded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTree::*)(::UnityEngine::UIElements::UIR::RenderChainCommand*)>(
    &::UnityEngine::UIElements::UIR::RenderTree::OnRenderCommandAdded)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x717c924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTree*>(),
                                                                                           { "OnRenderCommandAdded", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChainCommand*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTree.OnRenderCommandsRemoved
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTree::*)(
    ::UnityEngine::UIElements::UIR::RenderChainCommand*, ::UnityEngine::UIElements::UIR::RenderChainCommand*)>(&::UnityEngine::UIElements::UIR::RenderTree::OnRenderCommandsRemoved)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x717c944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTree*>(),
            { "OnRenderCommandsRemoved", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChainCommand*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChainCommand*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTree.ChildWillBeRemoved
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTree::*)(::UnityEngine::UIElements::UIR::RenderData*)>(
    &::UnityEngine::UIElements::UIR::RenderTree::ChildWillBeRemoved)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x717a95c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTree*>(),
                                                                                           { "ChildWillBeRemoved", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTree._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTree::*)()>(&::UnityEngine::UIElements::UIR::RenderTree::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x717c96c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTree*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::UIR::RenderTreeManager*& UnityEngine::UIElements::UIR::RenderTree::__cordl_internal_get_m_RenderTreeManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderTreeManager;
}
constexpr ::UnityEngine::UIElements::UIR::RenderTreeManager* const& UnityEngine::UIElements::UIR::RenderTree::__cordl_internal_get_m_RenderTreeManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderTreeManager;
}
constexpr void UnityEngine::UIElements::UIR::RenderTree::__cordl_internal_set_m_RenderTreeManager(::UnityEngine::UIElements::UIR::RenderTreeManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RenderTreeManager = value;
}
constexpr ::UnityEngine::UIElements::UIR::DepthOrderedDirtyTracking& UnityEngine::UIElements::UIR::RenderTree::__cordl_internal_get_m_DirtyTracker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DirtyTracker;
}
constexpr ::UnityEngine::UIElements::UIR::DepthOrderedDirtyTracking const& UnityEngine::UIElements::UIR::RenderTree::__cordl_internal_get_m_DirtyTracker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DirtyTracker;
}
constexpr void UnityEngine::UIElements::UIR::RenderTree::__cordl_internal_set_m_DirtyTracker(::UnityEngine::UIElements::UIR::DepthOrderedDirtyTracking value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DirtyTracker = value;
}
constexpr ::UnityEngine::UIElements::UIR::RenderChainCommand*& UnityEngine::UIElements::UIR::RenderTree::__cordl_internal_get_m_FirstCommand() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FirstCommand;
}
constexpr ::UnityEngine::UIElements::UIR::RenderChainCommand* const& UnityEngine::UIElements::UIR::RenderTree::__cordl_internal_get_m_FirstCommand() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FirstCommand;
}
constexpr void UnityEngine::UIElements::UIR::RenderTree::__cordl_internal_set_m_FirstCommand(::UnityEngine::UIElements::UIR::RenderChainCommand* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FirstCommand = value;
}
constexpr ::UnityEngine::UIElements::UIR::RenderData*& UnityEngine::UIElements::UIR::RenderTree::__cordl_internal_get_m_RootRenderData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RootRenderData;
}
constexpr ::UnityEngine::UIElements::UIR::RenderData* const& UnityEngine::UIElements::UIR::RenderTree::__cordl_internal_get_m_RootRenderData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RootRenderData;
}
constexpr void UnityEngine::UIElements::UIR::RenderTree::__cordl_internal_set_m_RootRenderData(::UnityEngine::UIElements::UIR::RenderData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RootRenderData = value;
}
constexpr ::UnityEngine::UIElements::TextureId& UnityEngine::UIElements::UIR::RenderTree::__cordl_internal_get_quadTextureId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___quadTextureId;
}
constexpr ::UnityEngine::UIElements::TextureId const& UnityEngine::UIElements::UIR::RenderTree::__cordl_internal_get_quadTextureId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___quadTextureId;
}
constexpr void UnityEngine::UIElements::UIR::RenderTree::__cordl_internal_set_quadTextureId(::UnityEngine::UIElements::TextureId value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___quadTextureId = value;
}
constexpr ::UnityEngine::RectInt& UnityEngine::UIElements::UIR::RenderTree::__cordl_internal_get_quadRect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___quadRect;
}
constexpr ::UnityEngine::RectInt const& UnityEngine::UIElements::UIR::RenderTree::__cordl_internal_get_quadRect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___quadRect;
}
constexpr void UnityEngine::UIElements::UIR::RenderTree::__cordl_internal_set_quadRect(::UnityEngine::RectInt value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___quadRect = value;
}
constexpr ::UnityEngine::Rect& UnityEngine::UIElements::UIR::RenderTree::__cordl_internal_get_quadUVRect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___quadUVRect;
}
constexpr ::UnityEngine::Rect const& UnityEngine::UIElements::UIR::RenderTree::__cordl_internal_get_quadUVRect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___quadUVRect;
}
constexpr void UnityEngine::UIElements::UIR::RenderTree::__cordl_internal_set_quadUVRect(::UnityEngine::Rect value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___quadUVRect = value;
}
constexpr ::UnityEngine::UIElements::UIR::GCHandlePool*& UnityEngine::UIElements::UIR::RenderTree::__cordl_internal_get_m_GCHandlePool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GCHandlePool;
}
constexpr ::UnityEngine::UIElements::UIR::GCHandlePool* const& UnityEngine::UIElements::UIR::RenderTree::__cordl_internal_get_m_GCHandlePool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GCHandlePool;
}
constexpr void UnityEngine::UIElements::UIR::RenderTree::__cordl_internal_set_m_GCHandlePool(::UnityEngine::UIElements::UIR::GCHandlePool* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_GCHandlePool = value;
}
constexpr ::UnityEngine::UIElements::UIR::RenderTree*& UnityEngine::UIElements::UIR::RenderTree::__cordl_internal_get_parent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parent;
}
constexpr ::UnityEngine::UIElements::UIR::RenderTree* const& UnityEngine::UIElements::UIR::RenderTree::__cordl_internal_get_parent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parent;
}
constexpr void UnityEngine::UIElements::UIR::RenderTree::__cordl_internal_set_parent(::UnityEngine::UIElements::UIR::RenderTree* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___parent = value;
}
constexpr ::UnityEngine::UIElements::UIR::RenderTree*& UnityEngine::UIElements::UIR::RenderTree::__cordl_internal_get_firstChild() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___firstChild;
}
constexpr ::UnityEngine::UIElements::UIR::RenderTree* const& UnityEngine::UIElements::UIR::RenderTree::__cordl_internal_get_firstChild() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___firstChild;
}
constexpr void UnityEngine::UIElements::UIR::RenderTree::__cordl_internal_set_firstChild(::UnityEngine::UIElements::UIR::RenderTree* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___firstChild = value;
}
constexpr ::UnityEngine::UIElements::UIR::RenderTree*& UnityEngine::UIElements::UIR::RenderTree::__cordl_internal_get_nextSibling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextSibling;
}
constexpr ::UnityEngine::UIElements::UIR::RenderTree* const& UnityEngine::UIElements::UIR::RenderTree::__cordl_internal_get_nextSibling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextSibling;
}
constexpr void UnityEngine::UIElements::UIR::RenderTree::__cordl_internal_set_nextSibling(::UnityEngine::UIElements::UIR::RenderTree* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nextSibling = value;
}
constexpr ::UnityEngine::UIElements::UIR::RenderTree_AllowedClasses& UnityEngine::UIElements::UIR::RenderTree::__cordl_internal_get_m_AllowedDirtyClasses() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllowedDirtyClasses;
}
constexpr ::UnityEngine::UIElements::UIR::RenderTree_AllowedClasses const& UnityEngine::UIElements::UIR::RenderTree::__cordl_internal_get_m_AllowedDirtyClasses() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllowedDirtyClasses;
}
constexpr void UnityEngine::UIElements::UIR::RenderTree::__cordl_internal_set_m_AllowedDirtyClasses(::UnityEngine::UIElements::UIR::RenderTree_AllowedClasses value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AllowedDirtyClasses = value;
}
inline void UnityEngine::UIElements::UIR::RenderTree::setStaticF_k_MarkerClipProcessing(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_MarkerClipProcessing", ::UnityEngine::UIElements::UIR::RenderTree*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIR::RenderTree::getStaticF_k_MarkerClipProcessing() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_MarkerClipProcessing", ::UnityEngine::UIElements::UIR::RenderTree*>();
}
inline void UnityEngine::UIElements::UIR::RenderTree::setStaticF_k_MarkerOpacityProcessing(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_MarkerOpacityProcessing", ::UnityEngine::UIElements::UIR::RenderTree*>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIR::RenderTree::getStaticF_k_MarkerOpacityProcessing() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_MarkerOpacityProcessing", ::UnityEngine::UIElements::UIR::RenderTree*>();
}
inline void UnityEngine::UIElements::UIR::RenderTree::setStaticF_k_MarkerColorsProcessing(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_MarkerColorsProcessing", ::UnityEngine::UIElements::UIR::RenderTree*>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIR::RenderTree::getStaticF_k_MarkerColorsProcessing() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_MarkerColorsProcessing", ::UnityEngine::UIElements::UIR::RenderTree*>();
}
inline void UnityEngine::UIElements::UIR::RenderTree::setStaticF_k_MarkerTransformProcessing(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_MarkerTransformProcessing", ::UnityEngine::UIElements::UIR::RenderTree*>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIR::RenderTree::getStaticF_k_MarkerTransformProcessing() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_MarkerTransformProcessing", ::UnityEngine::UIElements::UIR::RenderTree*>();
}
inline void UnityEngine::UIElements::UIR::RenderTree::setStaticF_k_MarkerVisualsProcessing(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_MarkerVisualsProcessing", ::UnityEngine::UIElements::UIR::RenderTree*>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIR::RenderTree::getStaticF_k_MarkerVisualsProcessing() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_MarkerVisualsProcessing", ::UnityEngine::UIElements::UIR::RenderTree*>();
}
inline ::UnityEngine::UIElements::UIR::RenderTreeManager* UnityEngine::UIElements::UIR::RenderTree::get_renderTreeManager() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTree*>(), { "get_renderTreeManager", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::RenderTreeManager*>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UIR::RenderData* UnityEngine::UIElements::UIR::RenderTree::get_rootRenderData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTree*>(), { "get_rootRenderData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::RenderData*>(this, ___internal_method);
}
inline ::by_ref<::UnityEngine::UIElements::UIR::DepthOrderedDirtyTracking> UnityEngine::UIElements::UIR::RenderTree::get_dirtyTracker() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTree*>(), { "get_dirtyTracker", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::UnityEngine::UIElements::UIR::DepthOrderedDirtyTracking>>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UIR::RenderChainCommand* UnityEngine::UIElements::UIR::RenderTree::get_firstCommand() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTree*>(), { "get_firstCommand", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::RenderChainCommand*>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::UIR::RenderTree::get_isRootRenderTree() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTree*>(), { "get_isRootRenderTree", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderTree::Init(::UnityEngine::UIElements::UIR::RenderTreeManager* renderTreeManager, ::UnityEngine::UIElements::UIR::RenderData* rootRenderData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTree*>(),
                                       { "Init", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderTreeManager, rootRenderData);
}
inline void UnityEngine::UIElements::UIR::RenderTree::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTree*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderTree::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTree*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderTree::DepthFirstResetTextures(::UnityEngine::UIElements::UIR::RenderData* renderData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTree*>(),
                                                                                         { "DepthFirstResetTextures", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderData);
}
inline void UnityEngine::UIElements::UIR::RenderTree::OnRenderDataTransformOrSizeChanged(::UnityEngine::UIElements::UIR::RenderData* renderData, bool transformChanged, bool clipRectSizeChanged) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTree*>(),
                          { "OnRenderDataTransformOrSizeChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderData, transformChanged, clipRectSizeChanged);
}
inline void UnityEngine::UIElements::UIR::RenderTree::OnRenderDataOpacityIdChanged(::UnityEngine::UIElements::UIR::RenderData* renderData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTree*>(),
                                                                                         { "OnRenderDataOpacityIdChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderData);
}
inline void UnityEngine::UIElements::UIR::RenderTree::OnRenderDataVisualsChanged(::UnityEngine::UIElements::UIR::RenderData* renderData, bool hierarchical) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTree*>(),
                                                           { "OnRenderDataVisualsChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderData, hierarchical);
}
inline void UnityEngine::UIElements::UIR::RenderTree::ProcessChanges(::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats> stats) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTree*>(),
                                                                                         { "ProcessChanges", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stats);
}
inline void UnityEngine::UIElements::UIR::RenderTree::OnRenderCommandAdded(::UnityEngine::UIElements::UIR::RenderChainCommand* command) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTree*>(),
                                                                                         { "OnRenderCommandAdded", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChainCommand*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, command);
}
inline void UnityEngine::UIElements::UIR::RenderTree::OnRenderCommandsRemoved(::UnityEngine::UIElements::UIR::RenderChainCommand* firstCommand,
                                                                              ::UnityEngine::UIElements::UIR::RenderChainCommand* lastCommand) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTree*>(),
          { "OnRenderCommandsRemoved", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChainCommand*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChainCommand*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firstCommand, lastCommand);
}
inline void UnityEngine::UIElements::UIR::RenderTree::ChildWillBeRemoved(::UnityEngine::UIElements::UIR::RenderData* renderData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTree*>(),
                                                                                         { "ChildWillBeRemoved", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderData);
}
inline void UnityEngine::UIElements::UIR::RenderTree::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTree*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UIR::RenderTree* UnityEngine::UIElements::UIR::RenderTree::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UIR::RenderTree*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::RenderTree::RenderTree() {}
