#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Polyglot/zzzz__LanguageDropdown_def.hpp"
#include "Polyglot/zzzz__ILocalize_def.hpp"
#include "UnityEngine/UI/zzzz__Dropdown_def.hpp"
//  Writing Method size for method: ::Polyglot::LanguageDropdown.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Polyglot::LanguageDropdown::*)()>(&::Polyglot::LanguageDropdown::Reset)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2687c00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::LanguageDropdown*>::get(), "Reset",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Polyglot::LanguageDropdown.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Polyglot::LanguageDropdown::*)()>(&::Polyglot::LanguageDropdown::Start)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2687c50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::LanguageDropdown*>::get(), "Start",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Polyglot::LanguageDropdown.CreateDropdown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Polyglot::LanguageDropdown::*)()>(&::Polyglot::LanguageDropdown::CreateDropdown)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x2687c74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::LanguageDropdown*>::get(), "CreateDropdown",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Polyglot::LanguageDropdown.OnLocalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Polyglot::LanguageDropdown::*)()>(&::Polyglot::LanguageDropdown::OnLocalize)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x26881ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::LanguageDropdown*>::get(), "OnLocalize",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Polyglot::LanguageDropdown._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Polyglot::LanguageDropdown::*)()>(&::Polyglot::LanguageDropdown::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2688334;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::LanguageDropdown*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Polyglot::ILocalize"
constexpr Polyglot::LanguageDropdown::operator ::Polyglot::ILocalize*() noexcept {
  return static_cast<::Polyglot::ILocalize*>(static_cast<void*>(this));
}
constexpr ::UnityEngine::UI::Dropdown*& Polyglot::LanguageDropdown::__get_dropdown() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dropdown;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Dropdown*> const& Polyglot::LanguageDropdown::__get_dropdown() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dropdown;
}
constexpr void Polyglot::LanguageDropdown::__set_dropdown(::UnityEngine::UI::Dropdown* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___dropdown)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Polyglot::LanguageDropdown::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::LanguageDropdown*>::get(), "Reset",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Polyglot::LanguageDropdown::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::LanguageDropdown*>::get(), "Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Polyglot::LanguageDropdown::CreateDropdown() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::LanguageDropdown*>::get(), "CreateDropdown",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Polyglot::LanguageDropdown::OnLocalize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::LanguageDropdown*>::get(), "OnLocalize",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Polyglot::LanguageDropdown* Polyglot::LanguageDropdown::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Polyglot::LanguageDropdown*>());
}
inline void Polyglot::LanguageDropdown::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::LanguageDropdown*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Polyglot::LanguageDropdown::LanguageDropdown() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
