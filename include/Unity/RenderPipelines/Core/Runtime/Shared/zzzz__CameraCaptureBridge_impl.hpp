#pragma once
// IWYU pragma private; include "Unity\RenderPipelines\Core\Runtime\Shared\CameraCaptureBridge.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/RenderPipelines/Core/Runtime/Shared/zzzz__CameraCaptureBridge_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
//  Writing Method size for method: ::Unity::RenderPipelines::Core::Runtime::Shared::CameraCaptureBridge.GetCachedCaptureActionsEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<
    ::System::Collections::Generic::IEnumerator_1<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>* (*)(::UnityEngine::Camera*)>(
    &::Unity::RenderPipelines::Core::Runtime::Shared::CameraCaptureBridge::GetCachedCaptureActionsEnumerator)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x675acb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::RenderPipelines::Core::Runtime::Shared::CameraCaptureBridge*>(),
                                                                                           { "GetCachedCaptureActionsEnumerator", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::IEnumerator_1<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>*
Unity::RenderPipelines::Core::Runtime::Shared::CameraCaptureBridge::GetCachedCaptureActionsEnumerator(::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::RenderPipelines::Core::Runtime::Shared::CameraCaptureBridge*>(),
                                                                                         { "GetCachedCaptureActionsEnumerator", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<
      ::System::Collections::Generic::IEnumerator_1<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>*>(nullptr, ___internal_method,
                                                                                                                                                                       camera);
}
// Ctor Parameters []
constexpr ::Unity::RenderPipelines::Core::Runtime::Shared::CameraCaptureBridge::CameraCaptureBridge() {}
