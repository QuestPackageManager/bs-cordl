#pragma once
// IWYU pragma private; include "UnityEngine\Timeline\IPropertyPreview.hpp"
#include "UnityEngine/Timeline/zzzz__IPropertyPreview_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableDirector_def.hpp"
#include "UnityEngine/Timeline/zzzz__IPropertyCollector_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::IPropertyPreview.GatherProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::IPropertyPreview::*)(::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Timeline::IPropertyCollector*)>(
    &::UnityEngine::Timeline::IPropertyPreview::GatherProperties)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::IPropertyPreview*>(), { ::i2c::class_of<::UnityEngine::Timeline::IPropertyPreview*>(), 0 }));
    return ___internal_method;
  }
};
inline void UnityEngine::Timeline::IPropertyPreview::GatherProperties(::UnityEngine::Playables::PlayableDirector* director, ::UnityEngine::Timeline::IPropertyCollector* driver) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::IPropertyPreview*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, director, driver);
}
