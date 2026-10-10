#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RadeonRays/RadeonRaysAPI.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_impl.hpp"
#include "UnityEngine/Rendering/RadeonRays/zzzz__RadeonRaysAPI_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Rendering/RadeonRays/zzzz__BottomLevelLevelAccelStruct_def.hpp"
#include "UnityEngine/Rendering/RadeonRays/zzzz__BuildFlags_def.hpp"
#include "UnityEngine/Rendering/RadeonRays/zzzz__HlbvhBuilder_def.hpp"
#include "UnityEngine/Rendering/RadeonRays/zzzz__HlbvhTopLevelBuilder_def.hpp"
#include "UnityEngine/Rendering/RadeonRays/zzzz__Instance_def.hpp"
#include "UnityEngine/Rendering/RadeonRays/zzzz__MeshBuildInfo_def.hpp"
#include "UnityEngine/Rendering/RadeonRays/zzzz__MeshBuildMemoryRequirements_def.hpp"
#include "UnityEngine/Rendering/RadeonRays/zzzz__RadeonRaysShaders_def.hpp"
#include "UnityEngine/Rendering/RadeonRays/zzzz__RestructureBvh_def.hpp"
#include "UnityEngine/Rendering/RadeonRays/zzzz__SceneBuildMemoryRequirements_def.hpp"
#include "UnityEngine/Rendering/RadeonRays/zzzz__SceneMemoryRequirements_def.hpp"
#include "UnityEngine/Rendering/RadeonRays/zzzz__TopLevelAccelStruct_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::RadeonRaysAPI._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RadeonRays::RadeonRaysAPI::*)(::UnityEngine::Rendering::RadeonRays::RadeonRaysShaders*)>(
    &::UnityEngine::Rendering::RadeonRays::RadeonRaysAPI::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6dfd1ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::RadeonRaysAPI*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::RadeonRays::RadeonRaysShaders*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::RadeonRaysAPI.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RadeonRays::RadeonRaysAPI::*)()>(&::UnityEngine::Rendering::RadeonRays::RadeonRaysAPI::Dispose)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6dfd404;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::RadeonRaysAPI*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::RadeonRaysAPI.BvhInternalNodeSizeInDwords
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::Rendering::RadeonRays::RadeonRaysAPI::BvhInternalNodeSizeInDwords)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6dfd440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::RadeonRaysAPI*>(), { "BvhInternalNodeSizeInDwords", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::RadeonRaysAPI.BvhInternalNodeSizeInBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::Rendering::RadeonRays::RadeonRaysAPI::BvhInternalNodeSizeInBytes)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6dfd4c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::RadeonRaysAPI*>(), { "BvhInternalNodeSizeInBytes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::RadeonRaysAPI.BvhLeafNodeSizeInBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::Rendering::RadeonRays::RadeonRaysAPI::BvhLeafNodeSizeInBytes)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6dfd52c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::RadeonRaysAPI*>(), { "BvhLeafNodeSizeInBytes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::RadeonRaysAPI.BvhLeafNodeSizeInDwords
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::Rendering::RadeonRays::RadeonRaysAPI::BvhLeafNodeSizeInDwords)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6dfd598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::RadeonRaysAPI*>(), { "BvhLeafNodeSizeInDwords", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::RadeonRaysAPI.BuildMeshAccelStruct
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RadeonRays::RadeonRaysAPI::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RadeonRays::MeshBuildInfo, ::UnityEngine::Rendering::RadeonRays::BuildFlags, ::UnityEngine::GraphicsBuffer*,
    ::by_ref<::UnityEngine::Rendering::RadeonRays::BottomLevelLevelAccelStruct const>)>(&::UnityEngine::Rendering::RadeonRays::RadeonRaysAPI::BuildMeshAccelStruct)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6dfd618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::RadeonRaysAPI*>(),
                                                             { "BuildMeshAccelStruct",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RadeonRays::MeshBuildInfo>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::RadeonRays::BuildFlags>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RadeonRays::BottomLevelLevelAccelStruct const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::RadeonRaysAPI.GetMeshBuildMemoryRequirements
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RadeonRays::MeshBuildMemoryRequirements (::UnityEngine::Rendering::RadeonRays::RadeonRaysAPI::*)(
    ::UnityEngine::Rendering::RadeonRays::MeshBuildInfo, ::UnityEngine::Rendering::RadeonRays::BuildFlags)>(&::UnityEngine::Rendering::RadeonRays::RadeonRaysAPI::GetMeshBuildMemoryRequirements)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6dfda88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::RadeonRays::RadeonRaysAPI*>(),
            { "GetMeshBuildMemoryRequirements", {}, { ::i2c::type_of<::UnityEngine::Rendering::RadeonRays::MeshBuildInfo>(), ::i2c::type_of<::UnityEngine::Rendering::RadeonRays::BuildFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::RadeonRaysAPI.BuildSceneAccelStruct
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RadeonRays::TopLevelAccelStruct (::UnityEngine::Rendering::RadeonRays::RadeonRaysAPI::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::GraphicsBuffer*, ::ArrayW<::UnityEngine::Rendering::RadeonRays::Instance>, ::UnityEngine::GraphicsBuffer*)>(
    &::UnityEngine::Rendering::RadeonRays::RadeonRaysAPI::BuildSceneAccelStruct)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x6dfdb5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::RadeonRaysAPI*>(),
                                                             { "BuildSceneAccelStruct",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(),
                                                                 ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RadeonRays::Instance>>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::RadeonRaysAPI.CreateSceneAccelStructBuffers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RadeonRays::TopLevelAccelStruct (::UnityEngine::Rendering::RadeonRays::RadeonRaysAPI::*)(
    ::UnityEngine::GraphicsBuffer*, uint32_t, ::ArrayW<::UnityEngine::Rendering::RadeonRays::Instance>)>(&::UnityEngine::Rendering::RadeonRays::RadeonRaysAPI::CreateSceneAccelStructBuffers)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x6dfdd2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::RadeonRaysAPI*>(),
                            { "CreateSceneAccelStructBuffers",
                              {},
                              { ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RadeonRays::Instance>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::RadeonRaysAPI.GetSceneBuildMemoryRequirements
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RadeonRays::SceneBuildMemoryRequirements (::UnityEngine::Rendering::RadeonRays::RadeonRaysAPI::*)(uint32_t)>(
    &::UnityEngine::Rendering::RadeonRays::RadeonRaysAPI::GetSceneBuildMemoryRequirements)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6dfdfc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::RadeonRaysAPI*>(), { "GetSceneBuildMemoryRequirements", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::RadeonRaysAPI.GetSceneMemoryRequirements
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RadeonRays::SceneMemoryRequirements* (
    ::UnityEngine::Rendering::RadeonRays::RadeonRaysAPI::*)(::ArrayW<::UnityEngine::Rendering::RadeonRays::MeshBuildInfo>, ::UnityEngine::Rendering::RadeonRays::BuildFlags)>(
    &::UnityEngine::Rendering::RadeonRays::RadeonRaysAPI::GetSceneMemoryRequirements)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x6dfdff8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::RadeonRaysAPI*>(),
                                         { "GetSceneMemoryRequirements",
                                           {},
                                           { ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RadeonRays::MeshBuildInfo>>(), ::i2c::type_of<::UnityEngine::Rendering::RadeonRays::BuildFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::RadeonRaysAPI.GetTraceMemoryRequirements
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(uint32_t)>(&::UnityEngine::Rendering::RadeonRays::RadeonRaysAPI::GetTraceMemoryRequirements)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6dfe284;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::RadeonRaysAPI*>(), { "GetTraceMemoryRequirements", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RadeonRays::HlbvhBuilder*& UnityEngine::Rendering::RadeonRays::RadeonRaysAPI::__cordl_internal_get_buildBvh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buildBvh;
}
constexpr ::UnityEngine::Rendering::RadeonRays::HlbvhBuilder* const& UnityEngine::Rendering::RadeonRays::RadeonRaysAPI::__cordl_internal_get_buildBvh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buildBvh;
}
constexpr void UnityEngine::Rendering::RadeonRays::RadeonRaysAPI::__cordl_internal_set_buildBvh(::UnityEngine::Rendering::RadeonRays::HlbvhBuilder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___buildBvh = value;
}
constexpr ::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder*& UnityEngine::Rendering::RadeonRays::RadeonRaysAPI::__cordl_internal_get_buildTopLevelBvh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buildTopLevelBvh;
}
constexpr ::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder* const& UnityEngine::Rendering::RadeonRays::RadeonRaysAPI::__cordl_internal_get_buildTopLevelBvh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buildTopLevelBvh;
}
constexpr void UnityEngine::Rendering::RadeonRays::RadeonRaysAPI::__cordl_internal_set_buildTopLevelBvh(::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___buildTopLevelBvh = value;
}
constexpr ::UnityEngine::Rendering::RadeonRays::RestructureBvh*& UnityEngine::Rendering::RadeonRays::RadeonRaysAPI::__cordl_internal_get_restructureBvh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___restructureBvh;
}
constexpr ::UnityEngine::Rendering::RadeonRays::RestructureBvh* const& UnityEngine::Rendering::RadeonRays::RadeonRaysAPI::__cordl_internal_get_restructureBvh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___restructureBvh;
}
constexpr void UnityEngine::Rendering::RadeonRays::RadeonRaysAPI::__cordl_internal_set_restructureBvh(::UnityEngine::Rendering::RadeonRays::RestructureBvh* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___restructureBvh = value;
}
inline void UnityEngine::Rendering::RadeonRays::RadeonRaysAPI::_ctor(::UnityEngine::Rendering::RadeonRays::RadeonRaysShaders* shaders) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::RadeonRaysAPI*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::RadeonRays::RadeonRaysShaders*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shaders);
}
inline void UnityEngine::Rendering::RadeonRays::RadeonRaysAPI::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::RadeonRaysAPI*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::RadeonRays::RadeonRaysAPI::BvhInternalNodeSizeInDwords() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::RadeonRaysAPI*>(), { "BvhInternalNodeSizeInDwords", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::Rendering::RadeonRays::RadeonRaysAPI::BvhInternalNodeSizeInBytes() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::RadeonRaysAPI*>(), { "BvhInternalNodeSizeInBytes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::Rendering::RadeonRays::RadeonRaysAPI::BvhLeafNodeSizeInBytes() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::RadeonRaysAPI*>(), { "BvhLeafNodeSizeInBytes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::Rendering::RadeonRays::RadeonRaysAPI::BvhLeafNodeSizeInDwords() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::RadeonRaysAPI*>(), { "BvhLeafNodeSizeInDwords", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::RadeonRays::RadeonRaysAPI::BuildMeshAccelStruct(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RadeonRays::MeshBuildInfo buildInfo,
                                                                                    ::UnityEngine::Rendering::RadeonRays::BuildFlags buildFlags, ::UnityEngine::GraphicsBuffer* scratchBuffer,
                                                                                    /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RadeonRays::BottomLevelLevelAccelStruct const> result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::RadeonRaysAPI*>(),
                                                           { "BuildMeshAccelStruct",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RadeonRays::MeshBuildInfo>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::RadeonRays::BuildFlags>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RadeonRays::BottomLevelLevelAccelStruct const>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, buildInfo, buildFlags, scratchBuffer, result);
}
inline ::UnityEngine::Rendering::RadeonRays::MeshBuildMemoryRequirements
UnityEngine::Rendering::RadeonRays::RadeonRaysAPI::GetMeshBuildMemoryRequirements(::UnityEngine::Rendering::RadeonRays::MeshBuildInfo buildInfo,
                                                                                  ::UnityEngine::Rendering::RadeonRays::BuildFlags buildFlags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::RadeonRays::RadeonRaysAPI*>(),
          { "GetMeshBuildMemoryRequirements", {}, { ::i2c::type_of<::UnityEngine::Rendering::RadeonRays::MeshBuildInfo>(), ::i2c::type_of<::UnityEngine::Rendering::RadeonRays::BuildFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RadeonRays::MeshBuildMemoryRequirements>(this, ___internal_method, buildInfo, buildFlags);
}
inline ::UnityEngine::Rendering::RadeonRays::TopLevelAccelStruct
UnityEngine::Rendering::RadeonRays::RadeonRaysAPI::BuildSceneAccelStruct(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::GraphicsBuffer* meshAccelStructsBuffer,
                                                                         ::ArrayW<::UnityEngine::Rendering::RadeonRays::Instance> instances, ::UnityEngine::GraphicsBuffer* scratchBuffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::RadeonRaysAPI*>(),
                                                           { "BuildSceneAccelStruct",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(),
                                                               ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RadeonRays::Instance>>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RadeonRays::TopLevelAccelStruct>(this, ___internal_method, cmd, meshAccelStructsBuffer, instances, scratchBuffer);
}
inline ::UnityEngine::Rendering::RadeonRays::TopLevelAccelStruct
UnityEngine::Rendering::RadeonRays::RadeonRaysAPI::CreateSceneAccelStructBuffers(::UnityEngine::GraphicsBuffer* meshAccelStructsBuffer, uint32_t tlasSizeInDwords,
                                                                                 ::ArrayW<::UnityEngine::Rendering::RadeonRays::Instance> instances) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::RadeonRaysAPI*>(),
                          { "CreateSceneAccelStructBuffers",
                            {},
                            { ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RadeonRays::Instance>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RadeonRays::TopLevelAccelStruct>(this, ___internal_method, meshAccelStructsBuffer, tlasSizeInDwords, instances);
}
inline ::UnityEngine::Rendering::RadeonRays::SceneBuildMemoryRequirements UnityEngine::Rendering::RadeonRays::RadeonRaysAPI::GetSceneBuildMemoryRequirements(uint32_t instanceCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::RadeonRaysAPI*>(), { "GetSceneBuildMemoryRequirements", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RadeonRays::SceneBuildMemoryRequirements>(this, ___internal_method, instanceCount);
}
inline ::UnityEngine::Rendering::RadeonRays::SceneMemoryRequirements*
UnityEngine::Rendering::RadeonRays::RadeonRaysAPI::GetSceneMemoryRequirements(::ArrayW<::UnityEngine::Rendering::RadeonRays::MeshBuildInfo> buildInfos,
                                                                              ::UnityEngine::Rendering::RadeonRays::BuildFlags buildFlags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::RadeonRaysAPI*>(),
                                       { "GetSceneMemoryRequirements",
                                         {},
                                         { ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RadeonRays::MeshBuildInfo>>(), ::i2c::type_of<::UnityEngine::Rendering::RadeonRays::BuildFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RadeonRays::SceneMemoryRequirements*>(this, ___internal_method, buildInfos, buildFlags);
}
inline uint64_t UnityEngine::Rendering::RadeonRays::RadeonRaysAPI::GetTraceMemoryRequirements(uint32_t rayCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::RadeonRaysAPI*>(), { "GetTraceMemoryRequirements", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, rayCount);
}
inline ::UnityEngine::Rendering::RadeonRays::RadeonRaysAPI* UnityEngine::Rendering::RadeonRays::RadeonRaysAPI::New_ctor(::UnityEngine::Rendering::RadeonRays::RadeonRaysShaders* shaders) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::RadeonRays::RadeonRaysAPI*>(shaders));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::RadeonRays::RadeonRaysAPI::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::RadeonRays::RadeonRaysAPI::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RadeonRays::RadeonRaysAPI::RadeonRaysAPI() {}
constexpr ::UnityEngine::GraphicsBuffer_Target UnityEngine::Rendering::RadeonRays::RadeonRaysAPI::BufferTarget{ static_cast<int32_t>(0x10) };
