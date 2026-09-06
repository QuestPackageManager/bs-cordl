#pragma once
// IWYU pragma private; include "UnityEngine/UI/ILayoutIgnorer.hpp"
#include "UnityEngine/UI/zzzz__ILayoutIgnorer_def.hpp"
//  Writing Method size for method: ::UnityEngine::UI::ILayoutIgnorer.get_ignoreLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UI::ILayoutIgnorer::*)()>(&::UnityEngine::UI::ILayoutIgnorer::get_ignoreLayout)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ILayoutIgnorer*>(), { ::i2c::class_of<::UnityEngine::UI::ILayoutIgnorer*>(), 0 }));
    return ___internal_method;
  }
};
inline bool UnityEngine::UI::ILayoutIgnorer::get_ignoreLayout() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::ILayoutIgnorer*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
