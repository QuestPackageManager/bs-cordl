#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\IPerFrameHistoryAccessTracker.hpp"
#include "UnityEngine/Rendering/zzzz__IPerFrameHistoryAccessTracker_def.hpp"
template <typename Type> inline void UnityEngine::Rendering::IPerFrameHistoryAccessTracker::RequestAccess() {
  auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IPerFrameHistoryAccessTracker*>(), 0 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<Type>() }));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
