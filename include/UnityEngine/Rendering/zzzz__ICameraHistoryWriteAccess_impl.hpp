#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\ICameraHistoryWriteAccess.hpp"
#include "UnityEngine/Rendering/zzzz__ICameraHistoryWriteAccess_def.hpp"
template <typename Type> inline bool UnityEngine::Rendering::ICameraHistoryWriteAccess::IsAccessRequested() {
  auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::ICameraHistoryWriteAccess*>(), 0 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<Type>() }));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename Type> inline Type UnityEngine::Rendering::ICameraHistoryWriteAccess::GetHistoryForWrite() {
  auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::ICameraHistoryWriteAccess*>(), 1 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<Type>() }));
  return ::cordl_internals::RunMethodRethrow<Type>(this, ___internal_method);
}
template <typename Type> inline bool UnityEngine::Rendering::ICameraHistoryWriteAccess::IsWritten() {
  auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::ICameraHistoryWriteAccess*>(), 2 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<Type>() }));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
