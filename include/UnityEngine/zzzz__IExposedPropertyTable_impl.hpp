#pragma once
// IWYU pragma private; include "UnityEngine/IExposedPropertyTable.hpp"
#include "UnityEngine/zzzz__IExposedPropertyTable_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__PropertyName_def.hpp"
//  Writing Method size for method: ::UnityEngine::IExposedPropertyTable.GetReferenceValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::UnityEngine::IExposedPropertyTable::*)(::UnityEngine::PropertyName, ::by_ref<bool>)>(
    &::UnityEngine::IExposedPropertyTable::GetReferenceValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::IExposedPropertyTable*>(), { ::i2c::class_of<::UnityEngine::IExposedPropertyTable*>(), 0 }));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::Object> UnityEngine::IExposedPropertyTable::GetReferenceValue(::UnityEngine::PropertyName id, ::by_ref<bool> idValid) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::IExposedPropertyTable*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(this, ___internal_method, id, idValid);
}
