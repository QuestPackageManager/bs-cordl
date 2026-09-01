#pragma once
// IWYU pragma private; include "UnityEngine\UI\IGraphicEnabledDisabled.hpp"
#include "UnityEngine/UI/zzzz__IGraphicEnabledDisabled_def.hpp"
//  Writing Method size for method: ::UnityEngine::UI::IGraphicEnabledDisabled.OnSiblingGraphicEnabledDisabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::IGraphicEnabledDisabled::*)()>(&::UnityEngine::UI::IGraphicEnabledDisabled::OnSiblingGraphicEnabledDisabled)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::IGraphicEnabledDisabled*>(), { ::i2c::class_of<::UnityEngine::UI::IGraphicEnabledDisabled*>(), 0 }));
    return ___internal_method;
  }
};
inline void UnityEngine::UI::IGraphicEnabledDisabled::OnSiblingGraphicEnabledDisabled() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::IGraphicEnabledDisabled*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
