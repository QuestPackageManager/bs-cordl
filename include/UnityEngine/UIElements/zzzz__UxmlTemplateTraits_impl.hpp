#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UxmlTemplateTraits.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlTraits_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlTemplateTraits_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlStringAttributeDescription_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlTemplateTraits._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UxmlTemplateTraits::*)()>(&::UnityEngine::UIElements::UxmlTemplateTraits::_ctor)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x4aa1c3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlTemplateTraits*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& UnityEngine::UIElements::UxmlTemplateTraits::__cordl_internal_get_m_Name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Name;
}
constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* const& UnityEngine::UIElements::UxmlTemplateTraits::__cordl_internal_get_m_Name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Name;
}
constexpr void UnityEngine::UIElements::UxmlTemplateTraits::__cordl_internal_set_m_Name(::UnityEngine::UIElements::UxmlStringAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& UnityEngine::UIElements::UxmlTemplateTraits::__cordl_internal_get_m_Path() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Path;
}
constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* const& UnityEngine::UIElements::UxmlTemplateTraits::__cordl_internal_get_m_Path() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Path;
}
constexpr void UnityEngine::UIElements::UxmlTemplateTraits::__cordl_internal_set_m_Path(::UnityEngine::UIElements::UxmlStringAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Path)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& UnityEngine::UIElements::UxmlTemplateTraits::__cordl_internal_get_m_Src() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Src;
}
constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* const& UnityEngine::UIElements::UxmlTemplateTraits::__cordl_internal_get_m_Src() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Src;
}
constexpr void UnityEngine::UIElements::UxmlTemplateTraits::__cordl_internal_set_m_Src(::UnityEngine::UIElements::UxmlStringAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Src)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::UIElements::UxmlTemplateTraits::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlTemplateTraits*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UxmlTemplateTraits* UnityEngine::UIElements::UxmlTemplateTraits::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::UxmlTemplateTraits*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UxmlTemplateTraits::UxmlTemplateTraits() {}
