#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IVisualElementChangeProcessor.hpp"
#include "UnityEngine/UIElements/zzzz__IVisualElementChangeProcessor_def.hpp"
#include "UnityEngine/UIElements/zzzz__AuthoringChanges_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualElementPanel_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::IVisualElementChangeProcessor.BeginProcessing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::IVisualElementChangeProcessor::*)(::UnityEngine::UIElements::BaseVisualElementPanel*)>(
    &::UnityEngine::UIElements::IVisualElementChangeProcessor::BeginProcessing)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IVisualElementChangeProcessor*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::IVisualElementChangeProcessor*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IVisualElementChangeProcessor.ProcessChanges
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::IVisualElementChangeProcessor::*)(
    ::UnityEngine::UIElements::BaseVisualElementPanel*, ::UnityEngine::UIElements::AuthoringChanges*)>(&::UnityEngine::UIElements::IVisualElementChangeProcessor::ProcessChanges)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IVisualElementChangeProcessor*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::IVisualElementChangeProcessor*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IVisualElementChangeProcessor.EndProcessing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::IVisualElementChangeProcessor::*)(::UnityEngine::UIElements::BaseVisualElementPanel*)>(
    &::UnityEngine::UIElements::IVisualElementChangeProcessor::EndProcessing)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IVisualElementChangeProcessor*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::IVisualElementChangeProcessor*>(), 2 }));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::IVisualElementChangeProcessor::BeginProcessing(::UnityEngine::UIElements::BaseVisualElementPanel* panel) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::IVisualElementChangeProcessor*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, panel);
}
inline void UnityEngine::UIElements::IVisualElementChangeProcessor::ProcessChanges(::UnityEngine::UIElements::BaseVisualElementPanel* panel, ::UnityEngine::UIElements::AuthoringChanges* changes) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::IVisualElementChangeProcessor*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, panel, changes);
}
inline void UnityEngine::UIElements::IVisualElementChangeProcessor::EndProcessing(::UnityEngine::UIElements::BaseVisualElementPanel* panel) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::IVisualElementChangeProcessor*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, panel);
}
