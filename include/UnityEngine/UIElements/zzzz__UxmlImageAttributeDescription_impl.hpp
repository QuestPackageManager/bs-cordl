#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UxmlImageAttributeDescription.hpp"
#include "UnityEngine/UIElements/zzzz__Background_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlAttributeDescription_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlImageAttributeDescription_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/UIElements/zzzz__Background_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlImageAttributeDescription._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UxmlImageAttributeDescription::*)()>(
    &::UnityEngine::UIElements::UxmlImageAttributeDescription::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6af44d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlImageAttributeDescription*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlImageAttributeDescription.set_defaultValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UxmlImageAttributeDescription::*)(::UnityEngine::UIElements::Background)>(
    &::UnityEngine::UIElements::UxmlImageAttributeDescription::set_defaultValue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6af4554;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlImageAttributeDescription*>::get(), "set_defaultValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Background>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlImageAttributeDescription.GetValueFromBag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::Background (::UnityEngine::UIElements::UxmlImageAttributeDescription::*)(
    ::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext)>(&::UnityEngine::UIElements::UxmlImageAttributeDescription::GetValueFromBag)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6af4564;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlImageAttributeDescription*>::get(), "GetValueFromBag", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IUxmlAttributes*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CreationContext>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& UnityEngine::UIElements::UxmlImageAttributeDescription::__cordl_internal_get_m_AssetType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AssetType;
}
constexpr ::System::Type* const& UnityEngine::UIElements::UxmlImageAttributeDescription::__cordl_internal_get_m_AssetType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AssetType;
}
constexpr void UnityEngine::UIElements::UxmlImageAttributeDescription::__cordl_internal_set_m_AssetType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AssetType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::Background& UnityEngine::UIElements::UxmlImageAttributeDescription::__cordl_internal_get__defaultValue_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultValue_k__BackingField;
}
constexpr ::UnityEngine::UIElements::Background const& UnityEngine::UIElements::UxmlImageAttributeDescription::__cordl_internal_get__defaultValue_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultValue_k__BackingField;
}
constexpr void UnityEngine::UIElements::UxmlImageAttributeDescription::__cordl_internal_set__defaultValue_k__BackingField(::UnityEngine::UIElements::Background value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____defaultValue_k__BackingField = value;
}
inline void UnityEngine::UIElements::UxmlImageAttributeDescription::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlImageAttributeDescription*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UxmlImageAttributeDescription::set_defaultValue(::UnityEngine::UIElements::Background value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlImageAttributeDescription*>::get(), "set_defaultValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Background>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::Background UnityEngine::UIElements::UxmlImageAttributeDescription::GetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes* bag,
                                                                                                                     ::UnityEngine::UIElements::CreationContext cc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlImageAttributeDescription*>::get(), "GetValueFromBag", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IUxmlAttributes*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CreationContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Background, false>(this, ___internal_method, bag, cc);
}
inline ::UnityEngine::UIElements::UxmlImageAttributeDescription* UnityEngine::UIElements::UxmlImageAttributeDescription::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::UxmlImageAttributeDescription*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UxmlImageAttributeDescription::UxmlImageAttributeDescription() {}
