#pragma once
// IWYU pragma private; include "Unity/RenderPipelines/Core/Runtime/Shared/CameraCaptureBridge.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/RenderPipelines/Core/Runtime/Shared/zzzz__CameraCaptureBridge_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
//  Writing Method size for method: ::Unity::RenderPipelines::Core::Runtime::Shared::CameraCaptureBridge.GetCachedCaptureActionsEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Collections::Generic::IEnumerator_1<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>* (*)(::UnityEngine::Camera*)>(
    &::Unity::RenderPipelines::Core::Runtime::Shared::CameraCaptureBridge::GetCachedCaptureActionsEnumerator)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x65a3b50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::RenderPipelines::Core::Runtime::Shared::CameraCaptureBridge*>::get(), "GetCachedCaptureActionsEnumerator",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::IEnumerator_1<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>*
Unity::RenderPipelines::Core::Runtime::Shared::CameraCaptureBridge::GetCachedCaptureActionsEnumerator(::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::RenderPipelines::Core::Runtime::Shared::CameraCaptureBridge*>::get(), "GetCachedCaptureActionsEnumerator",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
  return ::cordl_internals::RunMethodRethrow<
      ::System::Collections::Generic::IEnumerator_1<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>*, false>(
      nullptr, ___internal_method, camera);
}
// Ctor Parameters []
constexpr ::Unity::RenderPipelines::Core::Runtime::Shared::CameraCaptureBridge::CameraCaptureBridge() {}
