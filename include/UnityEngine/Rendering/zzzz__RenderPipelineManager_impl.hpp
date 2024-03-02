#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RenderPipelineManager_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderPipelineAsset_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderPipeline_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RenderPipelineManager.get_currentPipeline
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RenderPipeline* (*)()>(
    &::UnityEngine::Rendering::RenderPipelineManager::get_currentPipeline)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2ddf424;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderPipelineManager*>::get(),
                                                                               "get_currentPipeline", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderPipelineManager.set_currentPipeline
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::RenderPipeline*)>(
    &::UnityEngine::Rendering::RenderPipelineManager::set_currentPipeline)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2ddf47c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderPipelineManager*>::get(), "set_currentPipeline", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderPipeline*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderPipelineManager.add_beginCameraRendering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityW<::UnityEngine::Camera>>*)>(
    &::UnityEngine::Rendering::RenderPipelineManager::add_beginCameraRendering)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2ddf52c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderPipelineManager*>::get(), "add_beginCameraRendering", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityW<::UnityEngine::Camera>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderPipelineManager.remove_beginCameraRendering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityW<::UnityEngine::Camera>>*)>(
    &::UnityEngine::Rendering::RenderPipelineManager::remove_beginCameraRendering)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2ddf620;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderPipelineManager*>::get(), "remove_beginCameraRendering", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityW<::UnityEngine::Camera>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderPipelineManager.OnActiveRenderPipelineTypeChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::Rendering::RenderPipelineManager::OnActiveRenderPipelineTypeChanged)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2ddf714;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderPipelineManager*>::get(), "OnActiveRenderPipelineTypeChanged",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderPipelineManager.HandleRenderPipelineChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::RenderPipelineAsset*)>(
    &::UnityEngine::Rendering::RenderPipelineManager::HandleRenderPipelineChange)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2ddf788;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderPipelineManager*>::get(), "HandleRenderPipelineChange", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderPipelineAsset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderPipelineManager.CleanupRenderPipeline
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::Rendering::RenderPipelineManager::CleanupRenderPipeline)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x2ddf808;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderPipelineManager*>::get(),
                                                                               "CleanupRenderPipeline", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderPipelineManager.GetCurrentPipelineAssetType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::UnityEngine::Rendering::RenderPipelineManager::GetCurrentPipelineAssetType)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2ddfa10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderPipelineManager*>::get(),
                                                                               "GetCurrentPipelineAssetType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderPipelineManager.DoRenderLoop_Internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rendering::RenderPipelineAsset*, void*, ::System::Collections::Generic::List_1<::UnityEngine::__Camera__RenderRequest>*)>(
        &::UnityEngine::Rendering::RenderPipelineManager::DoRenderLoop_Internal)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x2ddfa68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderPipelineManager*>::get(), "DoRenderLoop_Internal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderPipelineAsset*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::__Camera__RenderRequest>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderPipelineManager.PrepareRenderPipeline
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::RenderPipelineAsset*)>(
    &::UnityEngine::Rendering::RenderPipelineManager::PrepareRenderPipeline)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x2ddfc44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderPipelineManager*>::get(), "PrepareRenderPipeline", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderPipelineAsset*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::RenderPipelineManager::setStaticF_s_CurrentPipelineAsset(::UnityW<::UnityEngine::Rendering::RenderPipelineAsset> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::Rendering::RenderPipelineAsset>, "s_CurrentPipelineAsset",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderPipelineManager*>::get>(
      std::forward<::UnityW<::UnityEngine::Rendering::RenderPipelineAsset>>(value));
}
inline ::UnityW<::UnityEngine::Rendering::RenderPipelineAsset> UnityEngine::Rendering::RenderPipelineManager::getStaticF_s_CurrentPipelineAsset() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Rendering::RenderPipelineAsset>, "s_CurrentPipelineAsset",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderPipelineManager*>::get>();
}
inline void UnityEngine::Rendering::RenderPipelineManager::setStaticF_s_Cameras(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*, "s_Cameras",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderPipelineManager*>::get>(
      std::forward<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>* UnityEngine::Rendering::RenderPipelineManager::getStaticF_s_Cameras() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*, "s_Cameras",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderPipelineManager*>::get>();
}
inline void UnityEngine::Rendering::RenderPipelineManager::setStaticF_s_currentPipelineType(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "s_currentPipelineType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderPipelineManager*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::Rendering::RenderPipelineManager::getStaticF_s_currentPipelineType() {
  return ::cordl_internals::getStaticField<::StringW, "s_currentPipelineType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderPipelineManager*>::get>();
}
inline void UnityEngine::Rendering::RenderPipelineManager::setStaticF_s_builtinPipelineName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "s_builtinPipelineName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderPipelineManager*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::Rendering::RenderPipelineManager::getStaticF_s_builtinPipelineName() {
  return ::cordl_internals::getStaticField<::StringW, "s_builtinPipelineName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderPipelineManager*>::get>();
}
inline void UnityEngine::Rendering::RenderPipelineManager::setStaticF_s_currentPipeline(::UnityEngine::Rendering::RenderPipeline* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderPipeline*, "s_currentPipeline",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderPipelineManager*>::get>(
      std::forward<::UnityEngine::Rendering::RenderPipeline*>(value));
}
inline ::UnityEngine::Rendering::RenderPipeline* UnityEngine::Rendering::RenderPipelineManager::getStaticF_s_currentPipeline() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderPipeline*, "s_currentPipeline",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderPipelineManager*>::get>();
}
inline void
UnityEngine::Rendering::RenderPipelineManager::setStaticF_beginCameraRendering(::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityW<::UnityEngine::Camera>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityW<::UnityEngine::Camera>>*, "beginCameraRendering",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderPipelineManager*>::get>(
      std::forward<::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityW<::UnityEngine::Camera>>*>(value));
}
inline ::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityW<::UnityEngine::Camera>>* UnityEngine::Rendering::RenderPipelineManager::getStaticF_beginCameraRendering() {
  return ::cordl_internals::getStaticField<::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityW<::UnityEngine::Camera>>*, "beginCameraRendering",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderPipelineManager*>::get>();
}
inline void UnityEngine::Rendering::RenderPipelineManager::setStaticF_activeRenderPipelineTypeChanged(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "activeRenderPipelineTypeChanged",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderPipelineManager*>::get>(std::forward<::System::Action*>(value));
}
inline ::System::Action* UnityEngine::Rendering::RenderPipelineManager::getStaticF_activeRenderPipelineTypeChanged() {
  return ::cordl_internals::getStaticField<::System::Action*, "activeRenderPipelineTypeChanged",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderPipelineManager*>::get>();
}
inline ::UnityEngine::Rendering::RenderPipeline* UnityEngine::Rendering::RenderPipelineManager::get_currentPipeline() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderPipelineManager*>::get(),
                                                                             "get_currentPipeline", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderPipeline*, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::RenderPipelineManager::set_currentPipeline(::UnityEngine::Rendering::RenderPipeline* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderPipelineManager*>::get(), "set_currentPipeline", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderPipeline*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Rendering::RenderPipelineManager::add_beginCameraRendering(::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityW<::UnityEngine::Camera>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderPipelineManager*>::get(), "add_beginCameraRendering", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityW<::UnityEngine::Camera>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Rendering::RenderPipelineManager::remove_beginCameraRendering(::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityW<::UnityEngine::Camera>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderPipelineManager*>::get(), "remove_beginCameraRendering", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityW<::UnityEngine::Camera>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Rendering::RenderPipelineManager::OnActiveRenderPipelineTypeChanged() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderPipelineManager*>::get(), "OnActiveRenderPipelineTypeChanged",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::RenderPipelineManager::HandleRenderPipelineChange(::UnityEngine::Rendering::RenderPipelineAsset* pipelineAsset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderPipelineManager*>::get(), "HandleRenderPipelineChange", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderPipelineAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, pipelineAsset);
}
inline void UnityEngine::Rendering::RenderPipelineManager::CleanupRenderPipeline() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderPipelineManager*>::get(),
                                                                             "CleanupRenderPipeline", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline ::StringW UnityEngine::Rendering::RenderPipelineManager::GetCurrentPipelineAssetType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderPipelineManager*>::get(),
                                                                             "GetCurrentPipelineAssetType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::RenderPipelineManager::DoRenderLoop_Internal(::UnityEngine::Rendering::RenderPipelineAsset* pipe, void* loopPtr,
                                                                                 ::System::Collections::Generic::List_1<::UnityEngine::__Camera__RenderRequest>* renderRequests) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderPipelineManager*>::get(), "DoRenderLoop_Internal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderPipelineAsset*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::__Camera__RenderRequest>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, pipe, loopPtr, renderRequests);
}
inline void UnityEngine::Rendering::RenderPipelineManager::PrepareRenderPipeline(::UnityEngine::Rendering::RenderPipelineAsset* pipelineAsset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderPipelineManager*>::get(), "PrepareRenderPipeline", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderPipelineAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, pipelineAsset);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderPipelineManager::RenderPipelineManager() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
