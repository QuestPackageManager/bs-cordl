#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/UI/BaseInputOverride.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseInput_impl.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__BaseInputOverride_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::BaseInputOverride.get_compositionString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::UI::BaseInputOverride::*)()>(&::UnityEngine::InputSystem::UI::BaseInputOverride::get_compositionString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x658c930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::BaseInputOverride*>(), { ::i2c::class_of<::UnityEngine::InputSystem::UI::BaseInputOverride*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::BaseInputOverride._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::BaseInputOverride::*)()>(&::UnityEngine::InputSystem::UI::BaseInputOverride::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x658c938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::BaseInputOverride*>(), { ".ctor", {}, {} })));
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
  this->____compositionString_k__BackingField = value;
}
inline ::StringW UnityEngine::InputSystem::UI::BaseInputOverride::get_compositionString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::UI::BaseInputOverride*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::BaseInputOverride::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::BaseInputOverride*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::UI::BaseInputOverride* UnityEngine::InputSystem::UI::BaseInputOverride::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::UI::BaseInputOverride*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::UI::BaseInputOverride::BaseInputOverride() {}
