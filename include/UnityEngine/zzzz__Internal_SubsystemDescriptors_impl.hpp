#pragma once
// IWYU pragma private; include "UnityEngine/Internal_SubsystemDescriptors.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Internal_SubsystemDescriptors_def.hpp"
#include "UnityEngine/zzzz__SubsystemDescriptor_def.hpp"
//  Writing Method size for method: ::UnityEngine::Internal_SubsystemDescriptors.Internal_AddDescriptor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::SubsystemDescriptor*)>(&::UnityEngine::Internal_SubsystemDescriptors::Internal_AddDescriptor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6bb5020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Internal_SubsystemDescriptors*>(),
                                                                                           { "Internal_AddDescriptor", {}, { ::i2c::type_of<::UnityEngine::SubsystemDescriptor*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Internal_SubsystemDescriptors::Internal_AddDescriptor(::UnityEngine::SubsystemDescriptor* descriptor) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Internal_SubsystemDescriptors*>(), { "Internal_AddDescriptor", {}, { ::i2c::type_of<::UnityEngine::SubsystemDescriptor*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, descriptor);
}
// Ctor Parameters []
constexpr ::UnityEngine::Internal_SubsystemDescriptors::Internal_SubsystemDescriptors() {}
