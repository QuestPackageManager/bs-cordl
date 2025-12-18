#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UI/DebugUIPrefabBundle.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/UI/zzzz__DebugUIPrefabBundle_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIPrefabBundle._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIPrefabBundle::*)()>(
    &::UnityEngine::Rendering::UI::DebugUIPrefabBundle::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6648070;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UI::DebugUIPrefabBundle*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::Rendering::UI::DebugUIPrefabBundle::__cordl_internal_get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr ::StringW const& UnityEngine::Rendering::UI::DebugUIPrefabBundle::__cordl_internal_get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr void UnityEngine::Rendering::UI::DebugUIPrefabBundle::__cordl_internal_set_type(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___type)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::RectTransform>& UnityEngine::Rendering::UI::DebugUIPrefabBundle::__cordl_internal_get_prefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prefab;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& UnityEngine::Rendering::UI::DebugUIPrefabBundle::__cordl_internal_get_prefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prefab;
}
constexpr void UnityEngine::Rendering::UI::DebugUIPrefabBundle::__cordl_internal_set_prefab(::UnityW<::UnityEngine::RectTransform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___prefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::UI::DebugUIPrefabBundle::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UI::DebugUIPrefabBundle*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::UI::DebugUIPrefabBundle* UnityEngine::Rendering::UI::DebugUIPrefabBundle::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::UI::DebugUIPrefabBundle*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::UI::DebugUIPrefabBundle::DebugUIPrefabBundle() {}
