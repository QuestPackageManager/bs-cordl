#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\UxmlStyleTraits.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlTraits_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlStyleTraits_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlStringAttributeDescription_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlStyleTraits._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UxmlStyleTraits::*)()>(&::UnityEngine::UIElements::UxmlStyleTraits::_ctor)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6cbb650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlStyleTraits*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& UnityEngine::UIElements::UxmlStyleTraits::__cordl_internal_get_m_Name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Name;
}
constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* const& UnityEngine::UIElements::UxmlStyleTraits::__cordl_internal_get_m_Name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Name;
}
constexpr void UnityEngine::UIElements::UxmlStyleTraits::__cordl_internal_set_m_Name(::UnityEngine::UIElements::UxmlStringAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Name = value;
}
constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& UnityEngine::UIElements::UxmlStyleTraits::__cordl_internal_get_m_Path() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Path;
}
constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* const& UnityEngine::UIElements::UxmlStyleTraits::__cordl_internal_get_m_Path() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Path;
}
constexpr void UnityEngine::UIElements::UxmlStyleTraits::__cordl_internal_set_m_Path(::UnityEngine::UIElements::UxmlStringAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Path = value;
}
constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& UnityEngine::UIElements::UxmlStyleTraits::__cordl_internal_get_m_Src() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Src;
}
constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* const& UnityEngine::UIElements::UxmlStyleTraits::__cordl_internal_get_m_Src() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Src;
}
constexpr void UnityEngine::UIElements::UxmlStyleTraits::__cordl_internal_set_m_Src(::UnityEngine::UIElements::UxmlStringAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Src = value;
}
inline void UnityEngine::UIElements::UxmlStyleTraits::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlStyleTraits*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UxmlStyleTraits* UnityEngine::UIElements::UxmlStyleTraits::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UxmlStyleTraits*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UxmlStyleTraits::UxmlStyleTraits() {}
