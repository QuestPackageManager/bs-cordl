#pragma once
// IWYU pragma private; include "UnityEngine\Timeline\ILayerable.hpp"
#include "UnityEngine/Timeline/zzzz__ILayerable_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::ILayerable.CreateLayerMixer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::Playable (::UnityEngine::Timeline::ILayerable::*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*,
                                                                                                                                   int32_t)>(&::UnityEngine::Timeline::ILayerable::CreateLayerMixer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::ILayerable*>(), { ::i2c::class_of<::UnityEngine::Timeline::ILayerable*>(), 0 }));
    return ___internal_method;
  }
};
inline ::UnityEngine::Playables::Playable UnityEngine::Timeline::ILayerable::CreateLayerMixer(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go, int32_t inputCount) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::ILayerable*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable>(this, ___internal_method, graph, go, inputCount);
}
