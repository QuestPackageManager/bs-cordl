#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/UI/BaseInputOverride.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseInput_impl.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__BaseInputOverride_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::BaseInputOverride.get_compositionString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::UI::BaseInputOverride::*)()>(
    &::UnityEngine::InputSystem::UI::BaseInputOverride::get_compositionString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x313edd8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::BaseInputOverride*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::BaseInputOverride*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::BaseInputOverride._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::BaseInputOverride::*)()>(
    &::UnityEngine::InputSystem::UI::BaseInputOverride::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x313ede0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::BaseInputOverride*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::InputSystem::UI::BaseInputOverride::__cordl_internal_get__compositionString_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____compositionString_k__BackingField;
}
constexpr ::StringW const& UnityEngine::InputSystem::UI::BaseInputOverride::__cordl_internal_get__compositionString_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____compositionString_k__BackingField;
}
constexpr void UnityEngine::InputSystem::UI::BaseInputOverride::__cordl_internal_set__compositionString_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____compositionString_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW UnityEngine::InputSystem::UI::BaseInputOverride::get_compositionString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::BaseInputOverride*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::UI::BaseInputOverride* UnityEngine::InputSystem::UI::BaseInputOverride::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::UI::BaseInputOverride*>());
}
inline void UnityEngine::InputSystem::UI::BaseInputOverride::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::BaseInputOverride*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::UI::BaseInputOverride::BaseInputOverride() {}
