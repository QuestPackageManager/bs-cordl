#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\UxmlRootElementTraits.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlTraits_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlRootElementTraits_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlStringAttributeDescription_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlRootElementTraits._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UxmlRootElementTraits::*)()>(&::UnityEngine::UIElements::UxmlRootElementTraits::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6cbb458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlRootElementTraits*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& UnityEngine::UIElements::UxmlRootElementTraits::__cordl_internal_get_m_Name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Name;
}
constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* const& UnityEngine::UIElements::UxmlRootElementTraits::__cordl_internal_get_m_Name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Name;
}
constexpr void UnityEngine::UIElements::UxmlRootElementTraits::__cordl_internal_set_m_Name(::UnityEngine::UIElements::UxmlStringAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Name = value;
}
constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& UnityEngine::UIElements::UxmlRootElementTraits::__cordl_internal_get_m_Class() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Class;
}
constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* const& UnityEngine::UIElements::UxmlRootElementTraits::__cordl_internal_get_m_Class() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Class;
}
constexpr void UnityEngine::UIElements::UxmlRootElementTraits::__cordl_internal_set_m_Class(::UnityEngine::UIElements::UxmlStringAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Class = value;
}
inline void UnityEngine::UIElements::UxmlRootElementTraits::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlRootElementTraits*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UxmlRootElementTraits* UnityEngine::UIElements::UxmlRootElementTraits::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UxmlRootElementTraits*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UxmlRootElementTraits::UxmlRootElementTraits() {}
