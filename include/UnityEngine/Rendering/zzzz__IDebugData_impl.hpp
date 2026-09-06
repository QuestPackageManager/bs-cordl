#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/IDebugData.hpp"
#include "UnityEngine/Rendering/zzzz__IDebugData_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::IDebugData.GetReset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action* (::UnityEngine::Rendering::IDebugData::*)()>(&::UnityEngine::Rendering::IDebugData::GetReset)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IDebugData*>(), { ::i2c::class_of<::UnityEngine::Rendering::IDebugData*>(), 0 }));
    return ___internal_method;
  }
};
inline ::System::Action* UnityEngine::Rendering::IDebugData::GetReset() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IDebugData*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Action*>(this, ___internal_method);
}
