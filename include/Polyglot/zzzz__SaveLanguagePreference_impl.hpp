#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Polyglot/zzzz__SaveLanguagePreference_def.hpp"
#include "Polyglot/zzzz__ILocalize_def.hpp"
//  Writing Method size for method: ::Polyglot::SaveLanguagePreference.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Polyglot::SaveLanguagePreference::*)()>(&::Polyglot::SaveLanguagePreference::Start)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x28060e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::SaveLanguagePreference*>::get(), "Start",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Polyglot::SaveLanguagePreference.OnLocalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Polyglot::SaveLanguagePreference::*)()>(&::Polyglot::SaveLanguagePreference::OnLocalize)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2806130;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::SaveLanguagePreference*>::get(), "OnLocalize",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Polyglot::SaveLanguagePreference._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Polyglot::SaveLanguagePreference::*)()>(&::Polyglot::SaveLanguagePreference::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2806158;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::SaveLanguagePreference*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Polyglot::ILocalize"
constexpr Polyglot::SaveLanguagePreference::operator ::Polyglot::ILocalize*() noexcept {
  return static_cast<::Polyglot::ILocalize*>(static_cast<void*>(this));
}
constexpr ::StringW& Polyglot::SaveLanguagePreference::__get_preferenceKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___preferenceKey;
}
constexpr ::StringW const& Polyglot::SaveLanguagePreference::__get_preferenceKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___preferenceKey;
}
constexpr void Polyglot::SaveLanguagePreference::__set_preferenceKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___preferenceKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Polyglot::SaveLanguagePreference::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::SaveLanguagePreference*>::get(), "Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Polyglot::SaveLanguagePreference::OnLocalize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::SaveLanguagePreference*>::get(), "OnLocalize",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Polyglot::SaveLanguagePreference* Polyglot::SaveLanguagePreference::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Polyglot::SaveLanguagePreference*>());
}
inline void Polyglot::SaveLanguagePreference::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::SaveLanguagePreference*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Polyglot::SaveLanguagePreference::SaveLanguagePreference() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
