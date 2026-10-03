#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderPipelineManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RenderPipelineManager_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderPipelineAsset_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderPipeline_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RenderPipelineManager.get_currentPipeline
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderPipeline* (*)()>(&::UnityEngine::Rendering::RenderPipelineManager::get_currentPipeline)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6f811a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderPipelineManager*>(), { "get_currentPipeline", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderPipelineManager.set_currentPipeline
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RenderPipeline*)>(&::UnityEngine::Rendering::RenderPipelineManager::set_currentPipeline)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6f811f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderPipelineManager*>(),
                                                                                           { "set_currentPipeline", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderPipeline*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderPipelineManager.add_beginContextRendering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*>*)>(
        &::UnityEngine::Rendering::RenderPipelineManager::add_beginContextRendering)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6f8126c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::Rendering::RenderPipelineManager*>(),
                         { "add_beginContextRendering",
                           {},
                           { ::i2c::type_of<::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderPipelineManager.remove_beginContextRendering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*>*)>(
        &::UnityEngine::Rendering::RenderPipelineManager::remove_beginContextRendering)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6f81350;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::Rendering::RenderPipelineManager*>(),
                         { "remove_beginContextRendering",
                           {},
                           { ::i2c::type_of<::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderPipelineManager.add_endContextRendering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*>*)>(
        &::UnityEngine::Rendering::RenderPipelineManager::add_endContextRendering)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6f81434;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::Rendering::RenderPipelineManager*>(),
                         { "add_endContextRendering",
                           {},
                           { ::i2c::type_of<::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderPipelineManager.remove_endContextRendering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*>*)>(
        &::UnityEngine::Rendering::RenderPipelineManager::remove_endContextRendering)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6f81518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::Rendering::RenderPipelineManager*>(),
                         { "remove_endContextRendering",
                           {},
                           { ::i2c::type_of<::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderPipelineManager.add_beginCameraRendering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityW<::UnityEngine::Camera>>*)>(
    &::UnityEngine::Rendering::RenderPipelineManager::add_beginCameraRendering)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6f815fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderPipelineManager*>(),
                            { "add_beginCameraRendering", {}, { ::i2c::type_of<::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityW<::UnityEngine::Camera>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderPipelineManager.remove_beginCameraRendering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityW<::UnityEngine::Camera>>*)>(
    &::UnityEngine::Rendering::RenderPipelineManager::remove_beginCameraRendering)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6f816e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderPipelineManager*>(),
                            { "remove_beginCameraRendering", {}, { ::i2c::type_of<::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityW<::UnityEngine::Camera>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderPipelineManager.add_endCameraRendering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityW<::UnityEngine::Camera>>*)>(
    &::UnityEngine::Rendering::RenderPipelineManager::add_endCameraRendering)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6f817c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderPipelineManager*>(),
                            { "add_endCameraRendering", {}, { ::i2c::type_of<::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityW<::UnityEngine::Camera>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderPipelineManager.remove_endCameraRendering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityW<::UnityEngine::Camera>>*)>(
    &::UnityEngine::Rendering::RenderPipelineManager::remove_endCameraRendering)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6f818a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderPipelineManager*>(),
                            { "remove_endCameraRendering", {}, { ::i2c::type_of<::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityW<::UnityEngine::Camera>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderPipelineManager.BeginContextRendering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::ScriptableRenderContext, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*)>(
    &::UnityEngine::Rendering::RenderPipelineManager::BeginContextRendering)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6f801f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderPipelineManager*>(),
                            { "BeginContextRendering",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderPipelineManager.BeginCameraRendering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*)>(
    &::UnityEngine::Rendering::RenderPipelineManager::BeginCameraRendering)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6f802cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderPipelineManager*>(),
                                                { "BeginCameraRendering", {}, { ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderPipelineManager.EndContextRendering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::ScriptableRenderContext, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*)>(
    &::UnityEngine::Rendering::RenderPipelineManager::EndContextRendering)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6f80354;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderPipelineManager*>(),
                            { "EndContextRendering",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderPipelineManager.EndCameraRendering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*)>(
    &::UnityEngine::Rendering::RenderPipelineManager::EndCameraRendering)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6f80434;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderPipelineManager*>(),
                                                { "EndCameraRendering", {}, { ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderPipelineManager.OnActiveRenderPipelineAssetChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ScriptableObject*, ::UnityEngine::ScriptableObject*, bool)>(
    &::UnityEngine::Rendering::RenderPipelineManager::OnActiveRenderPipelineAssetChanged)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x6f8198c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::RenderPipelineManager*>(),
            { "OnActiveRenderPipelineAssetChanged", {}, { ::i2c::type_of<::UnityEngine::ScriptableObject*>(), ::i2c::type_of<::UnityEngine::ScriptableObject*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderPipelineManager.HandleRenderPipelineChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RenderPipelineAsset*)>(&::UnityEngine::Rendering::RenderPipelineManager::HandleRenderPipelineChange)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6f81b90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderPipelineManager*>(),
                                                             { "HandleRenderPipelineChange", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderPipelineAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderPipelineManager.RecreateCurrentPipeline
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RenderPipelineAsset*)>(&::UnityEngine::Rendering::RenderPipelineManager::RecreateCurrentPipeline)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6f80924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderPipelineManager*>(),
                                                                                           { "RecreateCurrentPipeline", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderPipelineAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderPipelineManager.CleanupRenderPipeline
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Rendering::RenderPipelineManager::CleanupRenderPipeline)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x6f809c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderPipelineManager*>(), { "CleanupRenderPipeline", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderPipelineManager.DoRenderLoop_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RenderPipelineAsset*, ::System::IntPtr, ::UnityEngine::Object*)>(
    &::UnityEngine::Rendering::RenderPipelineManager::DoRenderLoop_Internal)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x6f81cc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::RenderPipelineManager*>(),
            { "DoRenderLoop_Internal", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderPipelineAsset*>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderPipelineManager.TryPrepareRenderPipeline
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rendering::RenderPipelineAsset*)>(&::UnityEngine::Rendering::RenderPipelineManager::TryPrepareRenderPipeline)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x6f81f84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderPipelineManager*>(),
                                                                                           { "TryPrepareRenderPipeline", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderPipelineAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderPipelineManager.InitializeGlobalRenderPipelineTag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Rendering::RenderPipelineManager::InitializeGlobalRenderPipelineTag)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6f82230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderPipelineManager*>(), { "InitializeGlobalRenderPipelineTag", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderPipelineManager.IsCurrentRenderPipelineValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Rendering::RenderPipelineManager::IsCurrentRenderPipelineValid)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6f81c04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderPipelineManager*>(), { "IsCurrentRenderPipelineValid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderPipelineManager.IsPipelineRequireCreation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Rendering::RenderPipelineManager::IsPipelineRequireCreation)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6f82194;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderPipelineManager*>(), { "IsPipelineRequireCreation", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::RenderPipelineManager::setStaticF_s_CleanUpPipeline(bool value) {
  ::cordl_internals::setStaticField<bool, "s_CleanUpPipeline", ::UnityEngine::Rendering::RenderPipelineManager*>(std::forward<bool>(value));
}
inline bool UnityEngine::Rendering::RenderPipelineManager::getStaticF_s_CleanUpPipeline() {
  return ::cordl_internals::getStaticField<bool, "s_CleanUpPipeline", ::UnityEngine::Rendering::RenderPipelineManager*>();
}
inline void UnityEngine::Rendering::RenderPipelineManager::setStaticF_s_CurrentPipelineAsset(::UnityW<::UnityEngine::Rendering::RenderPipelineAsset> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::Rendering::RenderPipelineAsset>, "s_CurrentPipelineAsset", ::UnityEngine::Rendering::RenderPipelineManager*>(
      std::forward<::UnityW<::UnityEngine::Rendering::RenderPipelineAsset>>(value));
}
inline ::UnityW<::UnityEngine::Rendering::RenderPipelineAsset> UnityEngine::Rendering::RenderPipelineManager::getStaticF_s_CurrentPipelineAsset() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Rendering::RenderPipelineAsset>, "s_CurrentPipelineAsset", ::UnityEngine::Rendering::RenderPipelineManager*>();
}
inline void UnityEngine::Rendering::RenderPipelineManager::setStaticF_s_CurrentPipeline(::UnityEngine::Rendering::RenderPipeline* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderPipeline*, "s_CurrentPipeline", ::UnityEngine::Rendering::RenderPipelineManager*>(
      std::forward<::UnityEngine::Rendering::RenderPipeline*>(value));
}
inline ::UnityEngine::Rendering::RenderPipeline* UnityEngine::Rendering::RenderPipelineManager::getStaticF_s_CurrentPipeline() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderPipeline*, "s_CurrentPipeline", ::UnityEngine::Rendering::RenderPipelineManager*>();
}
inline void UnityEngine::Rendering::RenderPipelineManager::setStaticF_s_PendingRPAssignationToRaise(bool value) {
  ::cordl_internals::setStaticField<bool, "s_PendingRPAssignationToRaise", ::UnityEngine::Rendering::RenderPipelineManager*>(std::forward<bool>(value));
}
inline bool UnityEngine::Rendering::RenderPipelineManager::getStaticF_s_PendingRPAssignationToRaise() {
  return ::cordl_internals::getStaticField<bool, "s_PendingRPAssignationToRaise", ::UnityEngine::Rendering::RenderPipelineManager*>();
}
inline void UnityEngine::Rendering::RenderPipelineManager::setStaticF_beginContextRendering(
    ::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*>*,
                                    "beginContextRendering", ::UnityEngine::Rendering::RenderPipelineManager*>(
      std::forward<::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*>*>(value));
}
inline ::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*>*
UnityEngine::Rendering::RenderPipelineManager::getStaticF_beginContextRendering() {
  return ::cordl_internals::getStaticField<::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*>*,
                                           "beginContextRendering", ::UnityEngine::Rendering::RenderPipelineManager*>();
}
inline void UnityEngine::Rendering::RenderPipelineManager::setStaticF_endContextRendering(
    ::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*>*,
                                    "endContextRendering", ::UnityEngine::Rendering::RenderPipelineManager*>(
      std::forward<::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*>*>(value));
}
inline ::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*>*
UnityEngine::Rendering::RenderPipelineManager::getStaticF_endContextRendering() {
  return ::cordl_internals::getStaticField<::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*>*,
                                           "endContextRendering", ::UnityEngine::Rendering::RenderPipelineManager*>();
}
inline void
UnityEngine::Rendering::RenderPipelineManager::setStaticF_beginCameraRendering(::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityW<::UnityEngine::Camera>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityW<::UnityEngine::Camera>>*, "beginCameraRendering",
                                    ::UnityEngine::Rendering::RenderPipelineManager*>(
      std::forward<::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityW<::UnityEngine::Camera>>*>(value));
}
inline ::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityW<::UnityEngine::Camera>>* UnityEngine::Rendering::RenderPipelineManager::getStaticF_beginCameraRendering() {
  return ::cordl_internals::getStaticField<::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityW<::UnityEngine::Camera>>*, "beginCameraRendering",
                                           ::UnityEngine::Rendering::RenderPipelineManager*>();
}
inline void
UnityEngine::Rendering::RenderPipelineManager::setStaticF_endCameraRendering(::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityW<::UnityEngine::Camera>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityW<::UnityEngine::Camera>>*, "endCameraRendering",
                                    ::UnityEngine::Rendering::RenderPipelineManager*>(
      std::forward<::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityW<::UnityEngine::Camera>>*>(value));
}
inline ::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityW<::UnityEngine::Camera>>* UnityEngine::Rendering::RenderPipelineManager::getStaticF_endCameraRendering() {
  return ::cordl_internals::getStaticField<::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityW<::UnityEngine::Camera>>*, "endCameraRendering",
                                           ::UnityEngine::Rendering::RenderPipelineManager*>();
}
inline void UnityEngine::Rendering::RenderPipelineManager::setStaticF_activeRenderPipelineTypeChanged(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "activeRenderPipelineTypeChanged", ::UnityEngine::Rendering::RenderPipelineManager*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* UnityEngine::Rendering::RenderPipelineManager::getStaticF_activeRenderPipelineTypeChanged() {
  return ::cordl_internals::getStaticField<::System::Action*, "activeRenderPipelineTypeChanged", ::UnityEngine::Rendering::RenderPipelineManager*>();
}
inline void UnityEngine::Rendering::RenderPipelineManager::setStaticF_activeRenderPipelineAssetChanged(
    ::System::Action_2<::UnityW<::UnityEngine::Rendering::RenderPipelineAsset>, ::UnityW<::UnityEngine::Rendering::RenderPipelineAsset>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<::UnityW<::UnityEngine::Rendering::RenderPipelineAsset>, ::UnityW<::UnityEngine::Rendering::RenderPipelineAsset>>*,
                                    "activeRenderPipelineAssetChanged", ::UnityEngine::Rendering::RenderPipelineManager*>(
      std::forward<::System::Action_2<::UnityW<::UnityEngine::Rendering::RenderPipelineAsset>, ::UnityW<::UnityEngine::Rendering::RenderPipelineAsset>>*>(value));
}
inline ::System::Action_2<::UnityW<::UnityEngine::Rendering::RenderPipelineAsset>, ::UnityW<::UnityEngine::Rendering::RenderPipelineAsset>>*
UnityEngine::Rendering::RenderPipelineManager::getStaticF_activeRenderPipelineAssetChanged() {
  return ::cordl_internals::getStaticField<::System::Action_2<::UnityW<::UnityEngine::Rendering::RenderPipelineAsset>, ::UnityW<::UnityEngine::Rendering::RenderPipelineAsset>>*,
                                           "activeRenderPipelineAssetChanged", ::UnityEngine::Rendering::RenderPipelineManager*>();
}
inline void UnityEngine::Rendering::RenderPipelineManager::setStaticF_activeRenderPipelineCreated(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "activeRenderPipelineCreated", ::UnityEngine::Rendering::RenderPipelineManager*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* UnityEngine::Rendering::RenderPipelineManager::getStaticF_activeRenderPipelineCreated() {
  return ::cordl_internals::getStaticField<::System::Action*, "activeRenderPipelineCreated", ::UnityEngine::Rendering::RenderPipelineManager*>();
}
inline void UnityEngine::Rendering::RenderPipelineManager::setStaticF_activeRenderPipelineDisposed(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "activeRenderPipelineDisposed", ::UnityEngine::Rendering::RenderPipelineManager*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* UnityEngine::Rendering::RenderPipelineManager::getStaticF_activeRenderPipelineDisposed() {
  return ::cordl_internals::getStaticField<::System::Action*, "activeRenderPipelineDisposed", ::UnityEngine::Rendering::RenderPipelineManager*>();
}
inline void
UnityEngine::Rendering::RenderPipelineManager::setStaticF_beginFrameRendering(::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::ArrayW<::UnityW<::UnityEngine::Camera>>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::ArrayW<::UnityW<::UnityEngine::Camera>>>*, "beginFrameRendering",
                                    ::UnityEngine::Rendering::RenderPipelineManager*>(
      std::forward<::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::ArrayW<::UnityW<::UnityEngine::Camera>>>*>(value));
}
inline ::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::ArrayW<::UnityW<::UnityEngine::Camera>>>*
UnityEngine::Rendering::RenderPipelineManager::getStaticF_beginFrameRendering() {
  return ::cordl_internals::getStaticField<::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::ArrayW<::UnityW<::UnityEngine::Camera>>>*, "beginFrameRendering",
                                           ::UnityEngine::Rendering::RenderPipelineManager*>();
}
inline void
UnityEngine::Rendering::RenderPipelineManager::setStaticF_endFrameRendering(::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::ArrayW<::UnityW<::UnityEngine::Camera>>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::ArrayW<::UnityW<::UnityEngine::Camera>>>*, "endFrameRendering",
                                    ::UnityEngine::Rendering::RenderPipelineManager*>(
      std::forward<::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::ArrayW<::UnityW<::UnityEngine::Camera>>>*>(value));
}
inline ::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::ArrayW<::UnityW<::UnityEngine::Camera>>>* UnityEngine::Rendering::RenderPipelineManager::getStaticF_endFrameRendering() {
  return ::cordl_internals::getStaticField<::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::ArrayW<::UnityW<::UnityEngine::Camera>>>*, "endFrameRendering",
                                           ::UnityEngine::Rendering::RenderPipelineManager*>();
}
inline ::UnityEngine::Rendering::RenderPipeline* UnityEngine::Rendering::RenderPipelineManager::get_currentPipeline() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderPipelineManager*>(), { "get_currentPipeline", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderPipeline*>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::RenderPipelineManager::set_currentPipeline(::UnityEngine::Rendering::RenderPipeline* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderPipelineManager*>(),
                                                                                         { "set_currentPipeline", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderPipeline*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Rendering::RenderPipelineManager::add_beginContextRendering(
    ::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderPipelineManager*>(),
                          { "add_beginContextRendering",
                            {},
                            { ::i2c::type_of<::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Rendering::RenderPipelineManager::remove_beginContextRendering(
    ::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderPipelineManager*>(),
                          { "remove_beginContextRendering",
                            {},
                            { ::i2c::type_of<::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Rendering::RenderPipelineManager::add_endContextRendering(
    ::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderPipelineManager*>(),
                          { "add_endContextRendering",
                            {},
                            { ::i2c::type_of<::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Rendering::RenderPipelineManager::remove_endContextRendering(
    ::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderPipelineManager*>(),
                          { "remove_endContextRendering",
                            {},
                            { ::i2c::type_of<::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Rendering::RenderPipelineManager::add_beginCameraRendering(::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityW<::UnityEngine::Camera>>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderPipelineManager*>(),
                          { "add_beginCameraRendering", {}, { ::i2c::type_of<::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityW<::UnityEngine::Camera>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Rendering::RenderPipelineManager::remove_beginCameraRendering(::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityW<::UnityEngine::Camera>>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderPipelineManager*>(),
                          { "remove_beginCameraRendering", {}, { ::i2c::type_of<::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityW<::UnityEngine::Camera>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Rendering::RenderPipelineManager::add_endCameraRendering(::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityW<::UnityEngine::Camera>>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderPipelineManager*>(),
                          { "add_endCameraRendering", {}, { ::i2c::type_of<::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityW<::UnityEngine::Camera>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Rendering::RenderPipelineManager::remove_endCameraRendering(::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityW<::UnityEngine::Camera>>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderPipelineManager*>(),
                          { "remove_endCameraRendering", {}, { ::i2c::type_of<::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityW<::UnityEngine::Camera>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Rendering::RenderPipelineManager::BeginContextRendering(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                                 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>* cameras) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderPipelineManager*>(),
                          { "BeginContextRendering",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, context, cameras);
}
inline void UnityEngine::Rendering::RenderPipelineManager::BeginCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderPipelineManager*>(),
                                              { "BeginCameraRendering", {}, { ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, context, camera);
}
inline void UnityEngine::Rendering::RenderPipelineManager::EndContextRendering(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                               ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>* cameras) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderPipelineManager*>(),
                          { "EndContextRendering",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, context, cameras);
}
inline void UnityEngine::Rendering::RenderPipelineManager::EndCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderPipelineManager*>(),
                                              { "EndCameraRendering", {}, { ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, context, camera);
}
inline void UnityEngine::Rendering::RenderPipelineManager::OnActiveRenderPipelineAssetChanged(::UnityEngine::ScriptableObject* from, ::UnityEngine::ScriptableObject* to, bool raiseTypeChanged) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::RenderPipelineManager*>(),
          { "OnActiveRenderPipelineAssetChanged", {}, { ::i2c::type_of<::UnityEngine::ScriptableObject*>(), ::i2c::type_of<::UnityEngine::ScriptableObject*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to, raiseTypeChanged);
}
inline void UnityEngine::Rendering::RenderPipelineManager::HandleRenderPipelineChange(::UnityEngine::Rendering::RenderPipelineAsset* pipelineAsset) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderPipelineManager*>(),
                                                                                         { "HandleRenderPipelineChange", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderPipelineAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pipelineAsset);
}
inline void UnityEngine::Rendering::RenderPipelineManager::RecreateCurrentPipeline(::UnityEngine::Rendering::RenderPipelineAsset* pipelineAsset) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderPipelineManager*>(),
                                                                                         { "RecreateCurrentPipeline", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderPipelineAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pipelineAsset);
}
inline void UnityEngine::Rendering::RenderPipelineManager::CleanupRenderPipeline() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderPipelineManager*>(), { "CleanupRenderPipeline", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::RenderPipelineManager::DoRenderLoop_Internal(::UnityEngine::Rendering::RenderPipelineAsset* pipelineAsset, ::System::IntPtr loopPtr,
                                                                                 ::UnityEngine::Object* renderRequest) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::RenderPipelineManager*>(),
          { "DoRenderLoop_Internal", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderPipelineAsset*>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pipelineAsset, loopPtr, renderRequest);
}
inline bool UnityEngine::Rendering::RenderPipelineManager::TryPrepareRenderPipeline(::UnityEngine::Rendering::RenderPipelineAsset* pipelineAsset) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderPipelineManager*>(),
                                                                                         { "TryPrepareRenderPipeline", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderPipelineAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pipelineAsset);
}
inline void UnityEngine::Rendering::RenderPipelineManager::InitializeGlobalRenderPipelineTag() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderPipelineManager*>(), { "InitializeGlobalRenderPipelineTag", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool UnityEngine::Rendering::RenderPipelineManager::IsCurrentRenderPipelineValid() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderPipelineManager*>(), { "IsCurrentRenderPipelineValid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::Rendering::RenderPipelineManager::IsPipelineRequireCreation() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderPipelineManager*>(), { "IsPipelineRequireCreation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderPipelineManager::RenderPipelineManager() {}
