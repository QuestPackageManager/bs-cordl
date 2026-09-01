#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\DelegateUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DelegateUtility_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::DelegateUtility.Cast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Delegate* (*)(::System::Delegate*, ::System::Type*)>(&::UnityEngine::Rendering::DelegateUtility::Cast)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x67c2750;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DelegateUtility*>(), { "Cast", {}, { ::i2c::type_of<::System::Delegate*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
inline ::System::Delegate* UnityEngine::Rendering::DelegateUtility::Cast(::System::Delegate* source, ::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DelegateUtility*>(), { "Cast", {}, { ::i2c::type_of<::System::Delegate*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Delegate*>(nullptr, ___internal_method, source, type);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DelegateUtility::DelegateUtility() {}
