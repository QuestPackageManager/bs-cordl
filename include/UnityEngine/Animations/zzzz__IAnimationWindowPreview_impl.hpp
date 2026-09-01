#pragma once
// IWYU pragma private; include "UnityEngine\Animations\IAnimationWindowPreview.hpp"
#include "UnityEngine/Animations/zzzz__IAnimationWindowPreview_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
//  Writing Method size for method: ::UnityEngine::Animations::IAnimationWindowPreview.UpdatePreviewGraph
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::IAnimationWindowPreview::*)(::UnityEngine::Playables::PlayableGraph)>(
    &::UnityEngine::Animations::IAnimationWindowPreview::UpdatePreviewGraph)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::IAnimationWindowPreview*>(), { ::i2c::class_of<::UnityEngine::Animations::IAnimationWindowPreview*>(), 0 }));
    return ___internal_method;
  }
};
inline void UnityEngine::Animations::IAnimationWindowPreview::UpdatePreviewGraph(::UnityEngine::Playables::PlayableGraph graph) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Animations::IAnimationWindowPreview*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, graph);
}
